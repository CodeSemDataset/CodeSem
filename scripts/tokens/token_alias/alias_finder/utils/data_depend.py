from clang.cindex import CursorKind, TypeKind
from pack.ast_related import methodEntityDefs,readAst
class DefUse:  
    type2_label={'&','*'}

    def __init__(self, name, path, def_line, label):
        self.name = name
        self.path = path
        self.def_line = def_line        
        self.label = label
        self.relative_path=''
        self.ast_path=''        
        self.which=''
        self.type_spell=''
        self.type=None

    def isPtr(self):
        if not self.type_spell:
            self.typeSpell()
        return self.type_spell.endswith('*')

    def realName(self):    
        return self.name.strip('&*')
    
    def typeSpell(self):
        res=''
        cands=['const','unsigned']
        type_spell=self.type.spelling   
        for cand in cands:
            type_spell=type_spell.replace(cand,'') 
        type_spell=' '.join(type_spell.split())    
        if self.name.startswith('&'):
            if type_spell.endswith('*'):
                res=type_spell+'*'
            else:
                res=type_spell+' *'
        elif type_spell.endswith(']'):
            res=type_spell.split('[',1)[0]+'*'
        elif type_spell.endswith('*'):
            if self.name.startswith('*'):
                res=type_spell[:-1]
            else:
                res=type_spell                
        self.type_spell=res.strip()
        return res

def checkValue(val):
    invalid_chars={'{','}',';','#'}
    if len(val)==1 and val[0].startswith('"') and val[0].endswith('"'):
        return False # value is constant string
    for it in val:
        if it in invalid_chars:
            return False
    return True
    
class Expression:
    # def __init__(self):
    #     self.value = ()
    #     self.def_line = 0 
    #     self.version = 0  
    #     self.type=None

    def __init__(self, value, def_line, version, type):
        self.value = value
        self.def_line = def_line 
        self.version = version 
        self.cursor=None 
        self.type=type
        self.arg_in_call=False

    def __eq__(self, other) -> bool:
        if isinstance(other, self.__class__):
            # TODO: handle version in the future
            return self.value==other.value and self.def_line==other.def_line
        else:
            return False

    def __hash__(self) -> int:
        # TODO: handle version in the future
        return hash((self.value, self.def_line))
    
    def __str__(self) -> str:
        return self.valToStr()+' '+str(self.def_line)

    def __repr__(self) -> str:       
        return self.__str__()

    def valToStr(self):
        return ' '.join(self.value)
    
    def isPtr(self):
        return self.type and self.type.kind==TypeKind.POINTER

    def isValidVal(self):
        # val=self.value
        # invalid_chars={'{','}',';'}
        # if len(val)==1 and val[0].startswith('"') and val[0].endswith('"'):
        #     return False # value is constant string
        # for it in val:
        #     if it in invalid_chars:
        #         return False
        # return True
        return checkValue(self.value)

    # check alias type 2
    def hasType2(self):
        val=self.value
        if not val:
            return False
        # assert len(val)>0 and "val is empty"
        operators={'+','-'}
        # return val.startswith('*') or val.startswith('&') or any(op in val for op in operators)
        return val[0]=='*' or val[0]=='&' or any(it in operators for it in val)

class AliasVerify:
    defuse1=defuse2=None

    _methods=[]

    _cur_ast_path=''

    _cur_method=None

    cur_loc=None

    assign_map={}

    # alias_pairs=set()

    aliasToData={}

    # alias_expr_pairs=set()

    alias_types=[1,2,3,4]

    ptr_ops={'+','-','*','/'}

    special_call={'strpbrk','strchr','memchr','strstr','strrchr'}

    cast_expr={CursorKind.CSTYLE_CAST_EXPR,CursorKind.CXX_STATIC_CAST_EXPR,CursorKind.CXX_DYNAMIC_CAST_EXPR}

    @classmethod
    def initial(cls,ast_path) -> None:
        cls._cur_ast_path=ast_path
        tu=readAst(ast_path)
        if tu:
            cls._methods=methodEntityDefs(tu.cursor) 
        else:
            print("read ast error")

    def locGt(loc1,loc2):
        if not loc1 or not loc2:
            return False
        if loc1.line==loc2.line:
            return loc1.column>loc2.column
        else:
            return loc1.line>loc2.line

    def getBinaryOp(cursor):
        op=''
        assert cursor.kind == CursorKind.BINARY_OPERATOR
        children = list(cursor.get_children())
        # assert len(children) == 2
        left_offset = len(list(children[0].get_tokens()))
        cur_tokens=list(cursor.get_tokens())
        if left_offset<len(cur_tokens):
            op = cur_tokens[left_offset].spelling
        return op

    def combineTokens(cursor):
        # return ''.join([token.spelling for token in cursor.get_tokens()])
        return tuple(token.spelling for token in cursor.get_tokens())

    # def valToStr(val):
    #     return ''.join(val)
    
    # def isSpecial(val):
    #     assert len(val)>0 and "val is empty"
    #     operators={'+','-'}
    #     # return val.startswith('*') or val.startswith('&') or any(op in val for op in operators)
    #     return val[0]=='*' or val[0]=='&' or any(it in operators for it in val)

    @classmethod
    def setDefUse(cls,_defuse1,_defuse2):
        cls.defuse1=_defuse1
        cls.defuse2=_defuse2

    @classmethod
    def methodAlias(cls,cursor):
        # cls.alias_type=0
        loc=cursor.location
        cur_method_loc=''
        method_loc="%s:(%d,%d)"%(loc.file.name,loc.line,loc.column)
        print(method_loc," begin")
        cls._cur_method=cursor
        # cls.cur_loc=cursor.location
        cls.assign_map.clear()           
        cls.aliasToData.clear()
        cls.astWalk(cursor)
        cls.createAliasPairs()
        # if cls.cur_loc:
        #     cur_method_loc="%s:(%d,%d)"%(cls.cur_loc.file.name,cls.cur_loc.line,cls.cur_loc.column)
        # if cur_method_loc!=method_loc:
        #     cls.cur_loc=cursor.location
        #     cls.assign_map.clear()           
        #     cls.aliasToData.clear()
        #     cls.astWalk(cursor)
        #     cls.createAliasPairs()
        # print(cls.alias_expr_pairs)

    @classmethod
    def checkAlias(cls,defuse1,defuse2,cursor):
        alias_type=0
        cls.methodAlias(cursor)
        for type in cls.alias_types:
            pair1=(defuse1.name,defuse2.name,type)
            pair2=(defuse2.name,defuse1.name,type)
            if pair1 in cls.alias_pairs or pair2 in cls.alias_pairs:
                alias_type=type
                break
        return alias_type

    @classmethod
    def updateAlias(cls,lexpr):
        print("*****update alias begin*****")
        cur_loc=cls._cur_method.location
        print(cur_loc,'\n',lexpr)
        if not lexpr.value or lexpr.def_line<=0:
            return
        cur_alias_type=1
        # if lexpr.hasType2():
        #     cur_alias_type=2
        visited_expr=set()
        expr_tmp=lexpr
        loc_pre=None # for flow sensitive
        prop_len=1
        while expr_tmp in cls.assign_map and expr_tmp not in visited_expr:
            # expr_pre=expr_tmp  
            visited_expr.add(expr_tmp)          
            expr_tmp=cls.assign_map[expr_tmp]
            loc_tmp=expr_tmp.cursor.location # for flow sensitive
            if not expr_tmp.value or cls.locGt(loc_tmp,loc_pre):
                break    
            loc_pre=loc_tmp
            
            
            # if prop_len==1:
            #     cur_alias_type=1
            #     if expr_tmp.arg_in_call:
            #         cur_alias_type=3
            #     elif expr_pre.hasType2() or expr_tmp.hasType2():
            #         cur_alias_type=2 
            # else:
            #     cur_alias_type=3   
            if expr_tmp.def_line>0 and expr_tmp.value:
                # cls.alias_expr_pairs.add((lexpr,expr_tmp,cur_alias_type))
                # cls.alias_pairs.add((lexpr.toStr(),expr_tmp.toStr(),cur_alias_type))
                key_tmp=(lexpr,expr_tmp)
                if key_tmp not in cls.aliasToData:
                    cls.aliasToData[key_tmp]=0
                
            # cls.alias_pairs.add((lexpr.toStr(),lexpr.def_line,expr_tmp.toStr(),expr_tmp.def_line,cur_alias_type))
            prop_len+=1
        print("*****update alias end*****")

    @classmethod
    def createAliasPairs(cls):
        print("*****createAliasPairs begin*****")
        for key in cls.assign_map:
            cls.updateAlias(key)

    @classmethod
    def dumpFileAlias(cls,csv_writer):
        for method in cls._methods:
            # print(method.extent)
            cls.methodAlias(method)
            cls.dumpMethodAlias(csv_writer)

    @classmethod
    def dumpMethodAlias(cls,csv_writer):
        # for tp in cls.alias_expr_pairs: 
        # cur_loc=cls._cur_method.location  
        # cur_loc=pair[0].cursor.location  
        for pair in cls.aliasToData:
            cur_loc=pair[0].cursor.location 
            ls = [
                cls._cur_ast_path, str(cls._cur_method.location.line),
                pair[0].valToStr(), cur_loc.file.name, pair[0].def_line, pair[0].cursor.location.line,
                pair[1].valToStr(), cur_loc.file.name, pair[1].def_line, pair[1].cursor.location.line,
                1,0]
            csv_writer.writerow(ls)

    @classmethod
    def astWalk(cls,cursor):            
        def_line=0
        # is_expr=False
        if not cursor:
            return lexpr
        # type_kind=None 
        cursor_def=cursor.get_definition()
        if cursor_def:
            def_line=cursor_def.location.line 
        lexpr=Expression((),def_line,0,cursor.type) 
        lexpr.cursor=cursor       
        cur_val=cls.combineTokens(cursor)   
        children=list(cursor.get_children())
        child_num = len(children) 
        if cursor.kind == CursorKind.BINARY_OPERATOR:
            # is_expr=True
            op=cls.getBinaryOp(cursor)            
            if op == '=':            
                lexpr=cls.astWalk(children[0])
                rexpr=cls.astWalk(children[1])
                lexpr.cursor=cursor
                rexpr.cursor=cursor
                if lexpr.isValidVal() and rexpr.isValidVal():                                    
                    if lexpr.isPtr() or rexpr.isPtr():
                        # cls.updateAlias(lexpr)
                        if lexpr in cls.assign_map:
                            cls.createAliasPairs()
                            cls.assign_map.pop(lexpr) # delete old lexpr                        
                        cls.assign_map[lexpr]=rexpr # add new lexpr
            elif op in cls.ptr_ops:                
                def_line=0 
                lval=cls.combineTokens(cursor) # for + - * / % 
                # if not checkValue(lval):
                #     return lexpr
                for child in children:
                    expr=cls.astWalk(child) 
                    if expr.isPtr():
                        def_line=expr.def_line
                        break             
                if checkValue(lval) and def_line>0:            
                    lexpr.value=lval
                    lexpr.def_line=def_line
                    lexpr.type=expr.type
            else:
                for child in children:
                    cls.astWalk(child)
        elif cursor.kind == CursorKind.VAR_DECL:                      
            if child_num>0 and cursor.type.kind==TypeKind.POINTER:
                # if child_num==1:
                #     rchild=children[0]
                # else:
                #     rchild=children[1]
                print("cursor is: ",cursor)
                rchild=children[-1]
                lval=(cursor.spelling,)
                rchild_val=cls.combineTokens(rchild)
                print("rchild is: ",rchild_val)
                rexpr=cls.astWalk(rchild) 
                if not rexpr.isValidVal():  
                    rexpr.value=()            
                lexpr.value=lval
                lexpr.cursor=cursor
                rexpr.cursor=cursor
                if lexpr in cls.assign_map:
                    cls.createAliasPairs()                
                    cls.assign_map.pop(lexpr) # delete old lexpr
                cls.assign_map[lexpr]=rexpr # add new lexpr        
        elif cursor.kind == CursorKind.UNARY_OPERATOR or cursor.kind == CursorKind.MEMBER_REF_EXPR or \
            cursor.kind == CursorKind.ARRAY_SUBSCRIPT_EXPR:
            if cursor.type.kind==TypeKind.POINTER:
                lval=cls.combineTokens(cursor) 
                if child_num>0:               
                    child_expr=cls.astWalk(children[0])
                    lexpr.def_line=child_expr.def_line 
                lexpr.value=lval                      
        elif cursor.kind in cls.cast_expr:
            # assert child_num<3 and "cast_expr has more than 2 child"
            # rchild=None
            # if child_num==1:
            #     rchild=children[0]
            # elif child_num>1:
            #     rchild=children[1]
            # assert rchild
            # assert child_num>0
            if child_num>0 and cursor.type.kind==TypeKind.POINTER:
                rchild=children[-1]
                lexpr=cls.astWalk(rchild)
                lexpr.type=cursor.type                          
        elif cursor.kind == CursorKind.CALL_EXPR:
            if child_num>0: 
                pass         
                # func_expr=cls.astWalk(children[0]) 
                # if len(func_expr.value)>0 and func_expr.value[0] in cls.special_call:
                #     arg1_expr=cls.astWalk(children[1])
                #     arg1_expr.arg_in_call=True
                #     lexpr=arg1_expr
        elif cursor.kind == CursorKind.DECL_REF_EXPR:
            lval=cls.combineTokens(cursor)
            # ltp=(cursor.spelling,cursor.type.kind)
            lexpr.value=lval
        else:
            if cursor.kind == CursorKind.UNEXPOSED_EXPR and not cur_val:            
                return lexpr 
            for child in children:
                lexpr=cls.astWalk(child)
        # return (lval,type_kind)
        return lexpr