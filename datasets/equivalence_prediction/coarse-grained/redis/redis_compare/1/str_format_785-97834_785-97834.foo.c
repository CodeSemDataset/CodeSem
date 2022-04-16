#include "../../include/dycfoo.h"
#include "../../include/lstrlib.i.hd.c.h"
void __dyc_foo(void) 
{ char const   *tmp___9 ;
  lua_Number tmp___10 ;
  lua_Number tmp___11 ;
  lua_Number tmp___12 ;
  lua_Number tmp___13 ;
  size_t l ;
  char const   *s ;
  char const   *tmp___14 ;
  char *tmp___16 ;
  int tmp___17 ;
  lua_Number __dyc_funcallvar_6 ;
  lua_Number __dyc_funcallvar_7 ;
  lua_Number __dyc_funcallvar_8 ;
  lua_Number __dyc_funcallvar_9 ;
  char const   *__dyc_funcallvar_10 ;
  char *__dyc_funcallvar_11 ;
  int __dyc_funcallvar_12 ;

  {
  tmp___9 = (char const   *)__dyc_read_ptr__char();
  l = (size_t )__dyc_readpre_byte();
  __dyc_funcallvar_8 = (lua_Number )__dyc_readpre_byte();
  __dyc_funcallvar_9 = (lua_Number )__dyc_readpre_byte();
  __dyc_funcallvar_10 = (char const   *)__dyc_read_ptr__char();
  __dyc_funcallvar_11 = __dyc_read_ptr__char();
  __dyc_funcallvar_12 = __dyc_readpre_byte();
  tmp___10 = 0;
  tmp___11 = 0;
  tmp___12 = 0;
  tmp___13 = 0;
  s = 0;
  tmp___14 = 0;
  tmp___16 = 0;
  tmp___17 = 0;
  __dyc_funcallvar_6 = 0;
  __dyc_funcallvar_7 = 0;
  if ((int )*tmp___9 == 117) {
    goto switch_30_111;
  } else {
    if ((int )*tmp___9 == 120) {
      goto switch_30_111;
    } else {
      if ((int )*tmp___9 == 88) {
        goto switch_30_111;
      } else {
        if ((int )*tmp___9 == 101) {
          goto switch_30_101;
        } else {
          if ((int )*tmp___9 == 69) {
            goto switch_30_101;
          } else {
            if ((int )*tmp___9 == 102) {
              goto switch_30_101;
            } else {
              if ((int )*tmp___9 == 103) {
                goto switch_30_101;
              } else {
                if ((int )*tmp___9 == 71) {
                  goto switch_30_101;
                } else {
                  if ((int )*tmp___9 == 113) {
                    goto switch_30_113;
                  } else {
                    if ((int )*tmp___9 == 115) {
                      goto switch_30_115;
                    } else {
                      {
                      goto switch_30_default;
                      if (0) {
                        switch_30_99:  
                        {
                        tmp___10 = __dyc_funcallvar_6;

                        }
                        goto switch_30_break;
                        switch_30_100:  
                        switch_30_105:  
                        {

                        tmp___11 = __dyc_funcallvar_7;

                        }
                        goto switch_30_break;
                        switch_30_111:  
                        switch_30_117:  
                        switch_30_120:  
                        switch_30_88:  
                        {

                        tmp___12 = __dyc_funcallvar_8;

                        }
                        goto switch_30_break;
                        switch_30_101:  
                        switch_30_69:  
                        switch_30_102:  
                        switch_30_103:  
                        switch_30_71:  
                        {
                        tmp___13 = __dyc_funcallvar_9;

                        }
                        goto switch_30_break;
                        switch_30_113:  
                        {

                        }
                        goto __dyc_dummy_label;
                        switch_30_115:  
                        {
                        tmp___14 = __dyc_funcallvar_10;
                        s = tmp___14;
                        tmp___16 = __dyc_funcallvar_11;
                        }
                        if (tmp___16) {
                          {

                          }
                          goto switch_30_break;
                        } else {
                          if (l >= 100UL) {
                            {


                            }
                            goto __dyc_dummy_label;
                          } else {
                            {

                            }
                            goto switch_30_break;
                          }
                        }
                        switch_30_default:  
                        {
                        tmp___17 = __dyc_funcallvar_12;
                        }
                        goto __dyc_dummy_label;
                      } else {
                        switch_30_break:  ;
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
    }
  }
  __dyc_dummy_label:  ;
  __dyc_printpre_byte(tmp___12);
  __dyc_printpre_byte(tmp___13);
  __dyc_print_ptr__char(s);
  __dyc_printpre_byte(tmp___17);
}
}
