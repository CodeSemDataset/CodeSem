#include "../../include/dycfoo.h"
#include "../../include/lundump.i.hd.c.h"
void __dyc_foo(void) 
{ int i ;
  int n ;
  TValue *o ;
  int t ;
  int tmp___2 ;
  TValue *i_o ;
  int tmp___3 ;
  TValue *i_o___0 ;
  TValue *i_o___1 ;
  TString *tmp___4 ;
  Proto *f ;
  int __dyc_funcallvar_4 ;
  int __dyc_funcallvar_5 ;
  lua_Number __dyc_funcallvar_6 ;
  TString *__dyc_funcallvar_7 ;

  {
  i = __dyc_readpre_byte();
  n = __dyc_readpre_byte();
  f = __dyc_read_ptr__typdef_Proto();
  __dyc_funcallvar_4 = __dyc_readpre_byte();
  __dyc_funcallvar_5 = __dyc_readpre_byte();
  __dyc_funcallvar_6 = (lua_Number )__dyc_readpre_byte();
  __dyc_funcallvar_7 = __dyc_read_ptr__typdef_TString();
  o = 0;
  t = 0;
  tmp___2 = 0;
  i_o = 0;
  tmp___3 = 0;
  i_o___0 = 0;
  i_o___1 = 0;
  tmp___4 = 0;
  if (! (i < n)) {
    goto __dyc_dummy_label;
  }
  o = f->k + i;
  tmp___2 = __dyc_funcallvar_4;
  t = tmp___2;
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
  __dyc_dummy_label:  ;
  __dyc_printpre_byte(i);
  __dyc_print_ptr__typdef_TValue(o);
}
}
