#include "../../include/dycfoo.h"
#include "../../include/lcode.i.hd.c.h"
void __dyc_foo(void) 
{ lua_Number v1 ;
  lua_Number v2 ;
  lua_Number r ;
  int tmp ;
  int tmp___0 ;
  double tmp___1 ;
  OpCode op ;
  expdesc *e1 ;
  expdesc *e2 ;
  int __dyc_funcallvar_2 ;
  double __dyc_funcallvar_3 ;
  double __dyc_funcallvar_4 ;

  {
  tmp = __dyc_readpre_byte();
  op = (OpCode )__dyc_readpre_byte();
  e1 = __dyc_read_ptr__typdef_expdesc();
  e2 = __dyc_read_ptr__typdef_expdesc();
  __dyc_funcallvar_2 = __dyc_readpre_byte();
  __dyc_funcallvar_3 = (double )__dyc_readpre_byte();
  __dyc_funcallvar_4 = (double )__dyc_readpre_byte();
  v1 = 0;
  v2 = 0;
  r = 0;
  tmp___0 = 0;
  tmp___1 = 0;
  if (tmp) {
    {
    tmp___0 = __dyc_funcallvar_2;
    }
    if (! tmp___0) {
      goto __dyc_dummy_label;
    }
  } else {
    goto __dyc_dummy_label;
  }
  v1 = e1->u.nval;
  v2 = e2->u.nval;
  if ((int )op == 12) {
    goto switch_12_12;
  } else {
    if ((int )op == 13) {
      goto switch_12_13;
    } else {
      if ((int )op == 14) {
        goto switch_12_14;
      } else {
        if ((int )op == 15) {
          goto switch_12_15;
        } else {
          if ((int )op == 16) {
            goto switch_12_16;
          } else {
            if ((int )op == 17) {
              goto switch_12_17;
            } else {
              if ((int )op == 18) {
                goto switch_12_18;
              } else {
                if ((int )op == 20) {
                  goto switch_12_20;
                } else {
                  {
                  goto switch_12_default;
                  if (0) {
                    switch_12_12:  
                    r = v1 + v2;
                    goto switch_12_break;
                    switch_12_13:  
                    r = v1 - v2;
                    goto switch_12_break;
                    switch_12_14:  
                    r = v1 * v2;
                    goto switch_12_break;
                    switch_12_15:  
                    if (v2 == (lua_Number )0) {
                      goto __dyc_dummy_label;
                    }
                    r = v1 / v2;
                    goto switch_12_break;
                    switch_12_16:  
                    if (v2 == (lua_Number )0) {
                      goto __dyc_dummy_label;
                    }
                    {
                    tmp___1 = __dyc_funcallvar_3;
                    r = v1 - tmp___1 * v2;
                    }
                    goto switch_12_break;
                    switch_12_17:  
                    {
                    r = __dyc_funcallvar_4;
                    }
                    goto switch_12_break;
                    switch_12_18:  
                    r = - v1;
                    goto switch_12_break;
                    switch_12_20:  
                    goto __dyc_dummy_label;
                    switch_12_default:  
                    r = (double )0;
                    goto switch_12_break;
                  } else {
                    switch_12_break:  ;
                  }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  __dyc_dummy_label:  ;
  __dyc_printpre_byte(v1);
  __dyc_printpre_byte(v2);
  __dyc_printpre_byte(r);
}
}
