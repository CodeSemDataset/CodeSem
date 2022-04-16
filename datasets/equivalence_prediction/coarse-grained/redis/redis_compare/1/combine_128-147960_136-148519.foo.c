#include "../../include/dycfoo.h"
#include "../../include/luac.i.hd.c.h"
void __dyc_foo(void) 
{ int i ;
  int pc ;
  Proto *f ;
  TString __attribute__((__visibility__("hidden")))  *tmp___0 ;
  void __attribute__((__visibility__("hidden")))  *tmp___3 ;
  void __attribute__((__visibility__("hidden")))  *tmp___6 ;
  int tmp___7 ;
  int tmp___8 ;
  lua_State *L ;
  int n ;
  void __attribute__((__visibility__("hidden")))  *__dyc_funcallvar_3 ;
  void __attribute__((__visibility__("hidden")))  *__dyc_funcallvar_4 ;
  void __attribute__((__visibility__("hidden")))  *__dyc_funcallvar_5 ;
  void __attribute__((__visibility__("hidden")))  *__dyc_funcallvar_6 ;

  {
  f = __dyc_read_ptr__typdef_Proto();
  tmp___0 = (TString __attribute__((__visibility__("hidden")))  *)__dyc_read_ptr__typdef_TString();
  L = __dyc_read_ptr__typdef_lua_State();
  n = __dyc_readpre_byte();
  __dyc_funcallvar_3 = (void __attribute__((__visibility__("hidden")))  *)__dyc_read_ptr__void();
  __dyc_funcallvar_4 = (void __attribute__((__visibility__("hidden")))  *)__dyc_read_ptr__void();
  __dyc_funcallvar_5 = (void __attribute__((__visibility__("hidden")))  *)__dyc_read_ptr__void();
  __dyc_funcallvar_6 = (void __attribute__((__visibility__("hidden")))  *)__dyc_read_ptr__void();
  i = 0;
  pc = 0;
  tmp___3 = 0;
  tmp___6 = 0;
  tmp___7 = 0;
  tmp___8 = 0;
  f->source = (TString *)tmp___0;
  f->maxstacksize = (unsigned char)1;
  pc = 2 * n + 1;
  if ((unsigned long )(pc + 1) <= 0xfffffffdUL / sizeof(Instruction )) {
    {
    tmp___3 = __dyc_funcallvar_3;
    }
  } else {
    {
    tmp___3 = __dyc_funcallvar_4;
    }
  }
  f->code = (Instruction *)tmp___3;
  f->sizecode = pc;
  if ((unsigned long )(n + 1) <= 0xfffffffdUL / sizeof(Proto *)) {
    {
    tmp___6 = __dyc_funcallvar_5;
    }
  } else {
    {
    tmp___6 = __dyc_funcallvar_6;
    }
  }
  f->p = (Proto **)tmp___6;
  f->sizep = n;
  pc = 0;
  i = 0;
  while (1) {
    while_1_continue:  ;
    if (! (i < n)) {
      goto __dyc_dummy_label;
    }
    *(f->p + i) = ((L->top + ((i - n) - 1))->value.gc)->cl.l.p;
    tmp___7 = pc;
    pc ++;
    *(f->code + tmp___7) = 36U | ((unsigned int )i << 14);
    tmp___8 = pc;
    pc ++;
    *(f->code + tmp___8) = (28U | (1U << 23)) | (1U << 14);
    i ++;
  }
  __dyc_dummy_label:  ;
  __dyc_printpre_byte(pc);
}
}
