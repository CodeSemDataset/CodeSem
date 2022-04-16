#include "../../include/dycfoo.h"
#include "../../include/sds.i.hd.c.h"
void __dyc_foo(void) 
{ unsigned short const   **tmp ;
  sds s ;
  char const   *p ;
  sds __dyc_funcallvar_2 ;
  sds __dyc_funcallvar_3 ;
  sds __dyc_funcallvar_4 ;
  sds __dyc_funcallvar_5 ;
  sds __dyc_funcallvar_6 ;
  sds __dyc_funcallvar_7 ;
  unsigned short const   **__dyc_funcallvar_8 ;
  sds __dyc_funcallvar_9 ;
  sds __dyc_funcallvar_10 ;

  {
  p = (char const   *)__dyc_read_ptr__char();
  __dyc_funcallvar_3 = __dyc_read_ptr__char();
  __dyc_funcallvar_4 = __dyc_read_ptr__char();
  __dyc_funcallvar_5 = __dyc_read_ptr__char();
  __dyc_funcallvar_6 = __dyc_read_ptr__char();
  __dyc_funcallvar_7 = __dyc_read_ptr__char();
  __dyc_funcallvar_8 = (unsigned short const   **)__dyc_read_ptr__ptr__short();
  __dyc_funcallvar_9 = __dyc_read_ptr__char();
  __dyc_funcallvar_10 = __dyc_read_ptr__char();
  tmp = 0;
  s = 0;
  __dyc_funcallvar_2 = 0;
  if ((int )*p == 10) {
    goto switch_25_10;
  } else {
    if ((int )*p == 13) {
      goto switch_25_13;
    } else {
      if ((int )*p == 9) {
        goto switch_25_9;
      } else {
        if ((int )*p == 7) {
          goto switch_25_7;
        } else {
          if ((int )*p == 8) {
            goto switch_25_8;
          } else {
            {
            goto switch_25_default;
            if (0) {
              switch_25_92:  
              switch_25_34:  
              {
              s = __dyc_funcallvar_2;
              }
              goto switch_25_break;
              switch_25_10:  
              {
              s = __dyc_funcallvar_3;
              }
              goto switch_25_break;
              switch_25_13:  
              {
              s = __dyc_funcallvar_4;
              }
              goto switch_25_break;
              switch_25_9:  
              {
              s = __dyc_funcallvar_5;
              }
              goto switch_25_break;
              switch_25_7:  
              {
              s = __dyc_funcallvar_6;
              }
              goto switch_25_break;
              switch_25_8:  
              {
              s = __dyc_funcallvar_7;
              }
              goto switch_25_break;
              switch_25_default:  
              {
              tmp = __dyc_funcallvar_8;
              }
              if ((int const   )*(*tmp + (int )*p) & 16384) {
                {
                s = __dyc_funcallvar_9;
                }
              } else {
                {
                s = __dyc_funcallvar_10;
                }
              }
              goto switch_25_break;
            } else {
              switch_25_break:  ;
            }
            }
          }
        }
      }
    }
  }
  __dyc_dummy_label:  ;
  __dyc_print_ptr__char(s);
}
}
