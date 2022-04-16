#include "../../include/dycfoo.h"
#include "../../include/lundump.i.hd.c.h"
void __dyc_foo(void) 
{ int i ;
  int n ;
  void __attribute__((__visibility__("hidden")))  *tmp___1 ;
  TValue *o ;
  int t ;
  int tmp___2 ;
  TValue *i_o ;
  int tmp___3 ;
  TValue *i_o___0 ;
  TValue *i_o___1 ;
  TString *tmp___4 ;
  void __attribute__((__visibility__("hidden")))  *tmp___7 ;
  Proto *f ;
  int __dyc_funcallvar_1 ;
  void __attribute__((__visibility__("hidden")))  *__dyc_funcallvar_2 ;
  void __attribute__((__visibility__("hidden")))  *__dyc_funcallvar_3 ;
  int __dyc_funcallvar_4 ;
  int __dyc_funcallvar_5 ;
  lua_Number __dyc_funcallvar_6 ;
  TString *__dyc_funcallvar_7 ;
  int __dyc_funcallvar_8 ;
  void __attribute__((__visibility__("hidden")))  *__dyc_funcallvar_9 ;
  void __attribute__((__visibility__("hidden")))  *__dyc_funcallvar_10 ;

  {
  f = __dyc_read_ptr__typdef_Proto();
  __dyc_funcallvar_1 = __dyc_readpre_byte();
  __dyc_funcallvar_2 = (void __attribute__((__visibility__("hidden")))  *)__dyc_read_ptr__void();
  __dyc_funcallvar_3 = (void __attribute__((__visibility__("hidden")))  *)__dyc_read_ptr__void();
  __dyc_funcallvar_4 = __dyc_readpre_byte();
  __dyc_funcallvar_5 = __dyc_readpre_byte();
  __dyc_funcallvar_6 = (lua_Number )__dyc_readpre_byte();
  __dyc_funcallvar_7 = __dyc_read_ptr__typdef_TString();
  __dyc_funcallvar_8 = __dyc_readpre_byte();
  __dyc_funcallvar_9 = (void __attribute__((__visibility__("hidden")))  *)__dyc_read_ptr__void();
  __dyc_funcallvar_10 = (void __attribute__((__visibility__("hidden")))  *)__dyc_read_ptr__void();
  i = 0;
  n = 0;
  tmp___1 = 0;
  o = 0;
  t = 0;
  tmp___2 = 0;
  i_o = 0;
  tmp___3 = 0;
  i_o___0 = 0;
  i_o___1 = 0;
  tmp___4 = 0;
  tmp___7 = 0;
  n = __dyc_funcallvar_1;
  if ((unsigned long )(n + 1) <= 0xfffffffdUL / sizeof(TValue )) {
    {
    tmp___1 = __dyc_funcallvar_2;
    }
  } else {
    {
    tmp___1 = __dyc_funcallvar_3;
    }
  }
  f->k = (TValue *)tmp___1;
  f->sizek = n;
  i = 0;
  while (1) {
    while_0_continue:  ;
    if (! (i < n)) {
      goto while_0_break;
    }
    (f->k + i)->tt = 0;
    i ++;
  }
  while_0_break:  ;
  i = 0;
  while (1) {
    while_1_continue:  ;
    if (! (i < n)) {
      goto while_1_break;
    }
    {
    o = f->k + i;
    tmp___2 = __dyc_funcallvar_4;
    t = tmp___2;
    }
    if (t == 0) {
      goto switch_2_0;
    } else {
      if (t == 1) {
        goto switch_2_1;
      } else {
        if (t == 3) {
          goto switch_2_3;
        } else {
          if (t == 4) {
            goto switch_2_4;
          } else {
            {
            goto switch_2_default;
            if (0) {
              switch_2_0:  
              o->tt = 0;
              goto switch_2_break;
              switch_2_1:  
              {
              i_o = o;
              tmp___3 = __dyc_funcallvar_5;
              i_o->value.b = tmp___3 != 0;
              i_o->tt = 1;
              }
              goto switch_2_break;
              switch_2_3:  
              {
              i_o___0 = o;
              i_o___0->value.n = __dyc_funcallvar_6;
              i_o___0->tt = 3;
              }
              goto switch_2_break;
              switch_2_4:  
              {
              i_o___1 = o;
              tmp___4 = __dyc_funcallvar_7;
              i_o___1->value.gc = (GCObject *)tmp___4;
              i_o___1->tt = 4;
              }
              goto switch_2_break;
              switch_2_default:  
              {

              }
              goto switch_2_break;
            } else {
              switch_2_break:  ;
            }
            }
          }
        }
      }
    }
    i ++;
  }
  while_1_break:  ;
  n = __dyc_funcallvar_8;
  if ((unsigned long )(n + 1) <= 0xfffffffdUL / sizeof(Proto *)) {
    {
    tmp___7 = __dyc_funcallvar_9;
    }
  } else {
    {
    tmp___7 = __dyc_funcallvar_10;
    }
  }
  f->p = (Proto **)tmp___7;
  f->sizep = n;
  i = 0;
  while (1) {
    while_3_continue:  ;
    if (! (i < n)) {
      goto __dyc_dummy_label;
    }
    *(f->p + i) = (struct Proto *)((void *)0);
    i ++;
  }
  __dyc_dummy_label:  ;
  __dyc_print_ptr__typdef_TValue(o);
}
}
