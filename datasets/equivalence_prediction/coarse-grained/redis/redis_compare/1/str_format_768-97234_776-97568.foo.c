#include "../../include/dycfoo.h"
#include "../../include/lstrlib.i.hd.c.h"
void __dyc_foo(void) 
{ int top ;
  int arg ;
  char const   *strfrmt ;
  luaL_Buffer b ;
  char *tmp___7 ;
  char const   *tmp___8 ;
  char const   *tmp___9 ;
  lua_Number tmp___10 ;
  lua_Number tmp___11 ;
  lua_Number tmp___12 ;
  lua_Number tmp___13 ;
  size_t l ;
  char const   *s ;
  char const   *tmp___14 ;
  char *tmp___16 ;
  int tmp___17 ;
  char const   *__dyc_funcallvar_5 ;
  lua_Number __dyc_funcallvar_6 ;
  lua_Number __dyc_funcallvar_7 ;
  lua_Number __dyc_funcallvar_8 ;
  lua_Number __dyc_funcallvar_9 ;
  char const   *__dyc_funcallvar_10 ;
  char *__dyc_funcallvar_11 ;
  int __dyc_funcallvar_12 ;

  {
  top = __dyc_readpre_byte();
  arg = __dyc_readpre_byte();
  strfrmt = (char const   *)__dyc_read_ptr__char();
  b = __dyc_read_comp_41luaL_Buffer();
  l = (size_t )__dyc_readpre_byte();
  __dyc_funcallvar_5 = (char const   *)__dyc_read_ptr__char();
  __dyc_funcallvar_6 = (lua_Number )__dyc_readpre_byte();
  __dyc_funcallvar_7 = (lua_Number )__dyc_readpre_byte();
  __dyc_funcallvar_8 = (lua_Number )__dyc_readpre_byte();
  __dyc_funcallvar_9 = (lua_Number )__dyc_readpre_byte();
  __dyc_funcallvar_10 = (char const   *)__dyc_read_ptr__char();
  __dyc_funcallvar_11 = __dyc_read_ptr__char();
  __dyc_funcallvar_12 = __dyc_readpre_byte();
  tmp___7 = 0;
  tmp___8 = 0;
  tmp___9 = 0;
  tmp___10 = 0;
  tmp___11 = 0;
  tmp___12 = 0;
  tmp___13 = 0;
  s = 0;
  tmp___14 = 0;
  tmp___16 = 0;
  tmp___17 = 0;
  tmp___7 = b.p;
  (b.p) ++;
  tmp___8 = strfrmt;
  strfrmt ++;
  *tmp___7 = (char )*tmp___8;
  arg ++;
  if (arg > top) {
    {

    }
  }
  strfrmt = __dyc_funcallvar_5;
  tmp___9 = strfrmt;
  strfrmt ++;
  if ((int )*tmp___9 == 99) {
    goto switch_30_99;
  } else {
    if ((int )*tmp___9 == 100) {
      goto switch_30_100;
    } else {
      if ((int )*tmp___9 == 105) {
        goto switch_30_100;
      } else {
        if ((int )*tmp___9 == 111) {
          goto switch_30_111;
        } else {
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
        }
      }
    }
  }
  __dyc_dummy_label:  ;
  __dyc_print_ptr__char(strfrmt);
  __dyc_print_comp_41luaL_Buffer(b);
  __dyc_printpre_byte(tmp___10);
  __dyc_printpre_byte(tmp___11);
  __dyc_printpre_byte(tmp___12);
  __dyc_printpre_byte(tmp___13);
  __dyc_print_ptr__char(s);
  __dyc_printpre_byte(tmp___17);
}
}
