#include "../../include/dycfoo.h"
#include "../../include/lvm.i.hd.c.h"
void __dyc_foo(void) 
{ TValue const   *b ;
  TValue const   *c ;
  lua_Number nb ;
  lua_Number nc ;
  TValue *i_o ;
  TValue *i_o___0 ;
  TValue *i_o___1 ;
  TValue *i_o___2 ;
  TValue *i_o___3 ;
  double tmp ;
  TValue *i_o___4 ;
  TValue *i_o___5 ;
  int tmp___0 ;
  TValue const __attribute__((__visibility__("hidden")))  *tmp___2 ;
  StkId ra ;
  TMS op ;
  TValue const __attribute__((__visibility__("hidden")))  *__dyc_funcallvar_2 ;
  double __dyc_funcallvar_3 ;
  double __dyc_funcallvar_4 ;
  int __dyc_funcallvar_5 ;

  {
  b = (TValue const   *)__dyc_read_ptr__typdef_TValue();
  ra = __dyc_read_ptr__typdef_TValue();
  op = (TMS )__dyc_readpre_byte();
  __dyc_funcallvar_2 = (TValue const __attribute__((__visibility__("hidden")))  *)__dyc_read_ptr__typdef_TValue();
  __dyc_funcallvar_3 = (double )__dyc_readpre_byte();
  __dyc_funcallvar_4 = (double )__dyc_readpre_byte();
  __dyc_funcallvar_5 = __dyc_readpre_byte();
  c = 0;
  nb = 0;
  nc = 0;
  i_o = 0;
  i_o___0 = 0;
  i_o___1 = 0;
  i_o___2 = 0;
  i_o___3 = 0;
  tmp = 0;
  i_o___4 = 0;
  i_o___5 = 0;
  tmp___0 = 0;
  tmp___2 = 0;
  if ((unsigned long )b != (unsigned long )((void *)0)) {
    {
    tmp___2 = __dyc_funcallvar_2;
    c = (TValue const   *)tmp___2;
    }
    if ((unsigned long )c != (unsigned long )((void *)0)) {
      nb = (lua_Number )b->value.n;
      nc = (lua_Number )c->value.n;
      if ((int )op == 5) {
        goto switch_7_5;
      } else {
        if ((int )op == 6) {
          goto switch_7_6;
        } else {
          if ((int )op == 7) {
            goto switch_7_7;
          } else {
            if ((int )op == 8) {
              goto switch_7_8;
            } else {
              if ((int )op == 9) {
                goto switch_7_9;
              } else {
                if ((int )op == 10) {
                  goto switch_7_10;
                } else {
                  if ((int )op == 11) {
                    goto switch_7_11;
                  } else {
                    {
                    goto switch_7_default;
                    if (0) {
                      switch_7_5:  
                      i_o = ra;
                      i_o->value.n = nb + nc;
                      i_o->tt = 3;
                      goto switch_7_break;
                      switch_7_6:  
                      i_o___0 = ra;
                      i_o___0->value.n = nb - nc;
                      i_o___0->tt = 3;
                      goto switch_7_break;
                      switch_7_7:  
                      i_o___1 = ra;
                      i_o___1->value.n = nb * nc;
                      i_o___1->tt = 3;
                      goto switch_7_break;
                      switch_7_8:  
                      i_o___2 = ra;
                      i_o___2->value.n = nb / nc;
                      i_o___2->tt = 3;
                      goto switch_7_break;
                      switch_7_9:  
                      {
                      i_o___3 = ra;
                      tmp = __dyc_funcallvar_3;
                      i_o___3->value.n = nb - tmp * nc;
                      i_o___3->tt = 3;
                      }
                      goto switch_7_break;
                      switch_7_10:  
                      {
                      i_o___4 = ra;
                      i_o___4->value.n = __dyc_funcallvar_4;
                      i_o___4->tt = 3;
                      }
                      goto switch_7_break;
                      switch_7_11:  
                      i_o___5 = ra;
                      i_o___5->value.n = - nb;
                      i_o___5->tt = 3;
                      goto switch_7_break;
                      switch_7_default:  ;
                      goto switch_7_break;
                    } else {
                      switch_7_break:  ;
                    }
                    }
                  }
                }
              }
            }
          }
        }
      }
    } else {
      goto _L;
    }
  } else {
    _L:  
    {
    tmp___0 = __dyc_funcallvar_5;
    }
    if (! tmp___0) {
      {

      }
    }
  }
  goto __dyc_dummy_label;
  __dyc_dummy_label:  ;
  __dyc_printpre_byte(nb);
  __dyc_printpre_byte(nc);
}
}
