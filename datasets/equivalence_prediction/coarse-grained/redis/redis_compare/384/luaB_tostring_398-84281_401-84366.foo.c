#include "../../include/dycfoo.h"
#include "../../include/lbaselib.i.hd.c.h"
void __dyc_foo(void) 
{ int tmp ;
  int tmp___0 ;
  char const   *tmp___1 ;
  char const   *tmp___3 ;
  int tmp___4 ;
  void const   *tmp___5 ;
  int tmp___6 ;
  char const   *tmp___7 ;
  int __dyc_funcallvar_2 ;
  char const   *__dyc_funcallvar_3 ;
  int __dyc_funcallvar_4 ;
  void const   *__dyc_funcallvar_5 ;
  int __dyc_funcallvar_6 ;
  char const   *__dyc_funcallvar_7 ;

  {
  tmp = __dyc_readpre_byte();
  __dyc_funcallvar_2 = __dyc_readpre_byte();
  __dyc_funcallvar_3 = (char const   *)__dyc_read_ptr__char();
  __dyc_funcallvar_4 = __dyc_readpre_byte();
  __dyc_funcallvar_5 = (void const   *)__dyc_read_ptr__void();
  __dyc_funcallvar_6 = __dyc_readpre_byte();
  __dyc_funcallvar_7 = (char const   *)__dyc_read_ptr__char();
  tmp___0 = 0;
  tmp___1 = 0;
  tmp___3 = 0;
  tmp___4 = 0;
  tmp___5 = 0;
  tmp___6 = 0;
  tmp___7 = 0;
  if (tmp) {
    goto __dyc_dummy_label;
  }
  tmp___0 = __dyc_funcallvar_2;
  if (tmp___0 == 3) {
    goto switch_4_3;
  } else {
    if (tmp___0 == 4) {
      goto switch_4_4;
    } else {
      if (tmp___0 == 1) {
        goto switch_4_1;
      } else {
        if (tmp___0 == 0) {
          goto switch_4_0;
        } else {
          {
          goto switch_4_default;
          if (0) {
            switch_4_3:  
            {
            tmp___1 = __dyc_funcallvar_3;

            }
            goto switch_4_break;
            switch_4_4:  
            {

            }
            goto switch_4_break;
            switch_4_1:  
            {
            tmp___4 = __dyc_funcallvar_4;
            }
            if (tmp___4) {
              tmp___3 = "true";
            } else {
              tmp___3 = "false";
            }
            {

            }
            goto switch_4_break;
            switch_4_0:  
            {

            }
            goto switch_4_break;
            switch_4_default:  
            {
            tmp___5 = __dyc_funcallvar_5;
            tmp___6 = __dyc_funcallvar_6;
            tmp___7 = __dyc_funcallvar_7;

            }
            goto switch_4_break;
          } else {
            switch_4_break:  ;
          }
          }
        }
      }
    }
  }
  __dyc_dummy_label:  ;
  __dyc_print_ptr__char(tmp___1);
  __dyc_print_ptr__char(tmp___3);
  __dyc_print_ptr__void(tmp___5);
  __dyc_printpre_byte(tmp___6);
  __dyc_print_ptr__char(tmp___7);
}
}
