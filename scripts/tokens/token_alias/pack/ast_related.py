from clang.cindex import Index, CursorKind, TokenKind, TranslationUnit
from pack.util import my_preorder,refineMyTokens

Errors=''

def init_errors(ptr):
    global Errors
    Errors=ptr

def methodDefs(cursor):
    methods=[] 
    cur_file=cursor.extent.start.file   
    for i in my_preorder(cursor):
        # if (i.kind == CursorKind.CXX_METHOD or i.kind==CursorKind.FUNCTION_DECL) \
        #         and i.is_definition():        
        if i.kind == CursorKind.CXX_METHOD or i.kind==CursorKind.FUNCTION_DECL \
            or i.kind == CursorKind.FUNCTION_TEMPLATE :
            # print('info of i: ', i.kind, i.extent)
            if str(i.extent.start.file)==str(cur_file):
                methods.append(i)           
    return methods

def methodEntityDefs(cursor):
    methods=[] 
    cur_file=cursor.extent.start.file   
    for i in my_preorder(cursor):            
        if i.kind == CursorKind.CXX_METHOD or i.kind==CursorKind.FUNCTION_DECL:
            # print('info of i: ', i.kind, i.extent)
            if str(i.extent.start.file)==str(cur_file):
                methods.append(i)           
    return methods

def listToStr(ls):
    res = ''
    for it in ls:
        res = res + str(it) + ' '       
    return res

def readAst(ast_path):    
    try:
        print("read ast path: "+ast_path)
        index=Index.create()
        # rid = path.rindex('.')
        # defuse.ast_path=path[:rid]+'.ast'
        tu=index.read(ast_path)
        return tu        
    except BaseException as bex:
        print(bex)
        Errors.write("tu error: {} in {} at readAst\n".format(bex,ast_path))
        return None


def getTu(path):    
    try:
        rid = path.rindex('.')
        type = path[rid:]
        args = []
        if type == '.cpp' or type == '.cc' or type == '.h':
            args.append('-std=c++11')
        # tu = TranslationUnit.from_source(defuse1.path, args,
        #                                  options=TranslationUnit.PARSE_PRECOMPILED_PREAMBLE)
        return TranslationUnit.from_source(path, args)
    except BaseException as bex:
        print(bex)
        Errors.write("tu error: {} in {} at getTu\n".format(bex,path))
        return None

def findMethod(defuse,methods):
    line=defuse.def_line
    for method in methods:
        start = method.extent.start
        end = method.extent.end
        # if line>=start.line and line<=end.line and \
        #     defuse.path==str(start.file):
        if line>=start.line and line<=end.line:
            return method
    return None

def getTokens(defuse,tu):
    scope=defuse.func_scope
    rg = tu.get_extent(tu.spelling, ((scope[0], 1), (scope[1], 2)))  # get range of function scope
    tokens = list(tu.get_tokens(extent=rg))  # get token list
    return tokens

def getMyTokens(defuse, tu):
    tokens=getTokens(defuse,tu)
    my_tokens=refineMyTokens(tokens)
    return my_tokens