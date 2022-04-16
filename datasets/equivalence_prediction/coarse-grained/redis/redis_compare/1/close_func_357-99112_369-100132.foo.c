#include "../../include/dycfoo.h"
#include "../../include/lparser.i.hd.c.h"
void __dyc_foo(void) 
{ lua_State *L ;
  FuncState *fs ;
  Proto *f ;
  void __attribute__((__visibility__("hidden")))  *tmp___1 ;
  void __attribute__((__visibility__("hidden")))  *tmp___4 ;
  void __attribute__((__visibility__("hidden")))  *tmp___7 ;
  void __attribute__((__visibility__("hidden")))  *tmp___10 ;
  LexState *ls ;
  void __attribute__((__visibility__("hidden")))  *__dyc_funcallvar_1 ;
  void __attribute__((__visibility__("hidden")))  *__dyc_funcallvar_2 ;
  void __attribute__((__visibility__("hidden")))  *__dyc_funcallvar_3 ;
  void __attribute__((__visibility__("hidden")))  *__dyc_funcallvar_4 ;
  void __attribute__((__visibility__("hidden")))  *__dyc_funcallvar_5 ;
  void __attribute__((__visibility__("hidden")))  *__dyc_funcallvar_6 ;
  void __attribute__((__visibility__("hidden")))  *__dyc_funcallvar_7 ;
  void __attribute__((__visibility__("hidden")))  *__dyc_funcallvar_8 ;

  {
  ls = __dyc_read_ptr__typdef_LexState();
  __dyc_funcallvar_1 = (void __attribute__((__visibility__("hidden")))  *)__dyc_read_ptr__void();
  __dyc_funcallvar_2 = (void __attribute__((__visibility__("hidden")))  *)__dyc_read_ptr__void();
  __dyc_funcallvar_3 = (void __attribute__((__visibility__("hidden")))  *)__dyc_read_ptr__void();
  __dyc_funcallvar_4 = (void __attribute__((__visibility__("hidden")))  *)__dyc_read_ptr__void();
  __dyc_funcallvar_5 = (void __attribute__((__visibility__("hidden")))  *)__dyc_read_ptr__void();
  __dyc_funcallvar_6 = (void __attribute__((__visibility__("hidden")))  *)__dyc_read_ptr__void();
  __dyc_funcallvar_7 = (void __attribute__((__visibility__("hidden")))  *)__dyc_read_ptr__void();
  __dyc_funcallvar_8 = (void __attribute__((__visibility__("hidden")))  *)__dyc_read_ptr__void();
  L = 0;
  fs = 0;
  f = 0;
  tmp___1 = 0;
  tmp___4 = 0;
  tmp___7 = 0;
  tmp___10 = 0;
  L = ls->L;
  fs = ls->fs;
  f = fs->f;


  if ((unsigned long )(fs->pc + 1) <= 0xfffffffdUL / sizeof(Instruction )) {
    {
    tmp___1 = __dyc_funcallvar_1;
    }
  } else {
    {
    tmp___1 = __dyc_funcallvar_2;
    }
  }
  f->code = (Instruction *)tmp___1;
  f->sizecode = fs->pc;
  if ((unsigned long )(fs->pc + 1) <= 0xfffffffdUL / sizeof(int )) {
    {
    tmp___4 = __dyc_funcallvar_3;
    }
  } else {
    {
    tmp___4 = __dyc_funcallvar_4;
    }
  }
  f->lineinfo = (int *)tmp___4;
  f->sizelineinfo = fs->pc;
  if ((unsigned long )(fs->nk + 1) <= 0xfffffffdUL / sizeof(TValue )) {
    {
    tmp___7 = __dyc_funcallvar_5;
    }
  } else {
    {
    tmp___7 = __dyc_funcallvar_6;
    }
  }
  f->k = (TValue *)tmp___7;
  f->sizek = fs->nk;
  if ((unsigned long )(fs->np + 1) <= 0xfffffffdUL / sizeof(Proto *)) {
    {
    tmp___10 = __dyc_funcallvar_7;
    }
  } else {
    {
    tmp___10 = __dyc_funcallvar_8;
    }
  }
  f->p = (Proto **)tmp___10;
  f->sizep = fs->np;
  __dyc_dummy_label:  ;
  __dyc_print_ptr__typdef_lua_State(L);
}
}
