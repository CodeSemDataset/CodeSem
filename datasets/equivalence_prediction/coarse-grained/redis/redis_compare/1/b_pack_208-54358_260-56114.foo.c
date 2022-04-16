#include "../../include/dycfoo.h"
#include "../../include/lua_struct.i.hd.c.h"
void __dyc_foo(void) 
{ union __anonunion_native_7 native ;
  luaL_Buffer b ;
  char const   *fmt ;
  char const   *tmp ;
  Header h ;
  int arg ;
  size_t totalsize ;
  int opt ;
  char const   *tmp___0 ;
  size_t size ;
  size_t tmp___1 ;
  int toalign ;
  int tmp___2 ;
  char *tmp___3 ;
  int tmp___4 ;
  char *tmp___5 ;
  int tmp___6 ;
  int tmp___7 ;
  char *tmp___8 ;
  int tmp___9 ;
  char *tmp___10 ;
  float f ;
  int tmp___11 ;
  lua_Number tmp___12 ;
  double d ;
  int tmp___13 ;
  lua_Number tmp___14 ;
  size_t l ;
  char const   *s ;
  int tmp___15 ;
  char const   *tmp___16 ;
  int tmp___17 ;
  int tmp___18 ;
  char *tmp___19 ;
  int tmp___20 ;
  char *tmp___21 ;
  size_t __dyc_funcallvar_2 ;
  int __dyc_funcallvar_3 ;
  char *__dyc_funcallvar_4 ;
  char *__dyc_funcallvar_5 ;
  lua_Number __dyc_funcallvar_6 ;
  lua_Number __dyc_funcallvar_7 ;
  char const   *__dyc_funcallvar_8 ;
  int __dyc_funcallvar_9 ;
  char *__dyc_funcallvar_10 ;

  {
  native = (union __anonunion_native_7  const  )__dyc_read_comp_17__anonunion_native_7();
  b = __dyc_read_comp_15luaL_Buffer();
  tmp = (char const   *)__dyc_read_ptr__char();
  l = (size_t )__dyc_readpre_byte();
  __dyc_funcallvar_2 = (size_t )__dyc_readpre_byte();
  __dyc_funcallvar_3 = __dyc_readpre_byte();
  __dyc_funcallvar_4 = __dyc_read_ptr__char();
  __dyc_funcallvar_5 = __dyc_read_ptr__char();
  __dyc_funcallvar_6 = (lua_Number )__dyc_readpre_byte();
  __dyc_funcallvar_7 = (lua_Number )__dyc_readpre_byte();
  __dyc_funcallvar_8 = (char const   *)__dyc_read_ptr__char();
  __dyc_funcallvar_9 = __dyc_readpre_byte();
  __dyc_funcallvar_10 = __dyc_read_ptr__char();
  fmt = 0;
  memset(& h, 0, sizeof(Header ));
  arg = 0;
  totalsize = 0;
  opt = 0;
  tmp___0 = 0;
  size = 0;
  tmp___1 = 0;
  toalign = 0;
  tmp___2 = 0;
  tmp___3 = 0;
  tmp___4 = 0;
  tmp___5 = 0;
  tmp___6 = 0;
  tmp___7 = 0;
  tmp___8 = 0;
  tmp___9 = 0;
  tmp___10 = 0;
  f = 0;
  tmp___11 = 0;
  tmp___12 = 0;
  d = 0;
  tmp___13 = 0;
  tmp___14 = 0;
  s = 0;
  tmp___15 = 0;
  tmp___16 = 0;
  tmp___17 = 0;
  tmp___18 = 0;
  tmp___19 = 0;
  tmp___20 = 0;
  tmp___21 = 0;
  fmt = tmp;
  arg = 2;
  totalsize = (size_t )0;
  h.endian = (int )native.endian;
  h.align = 1;


  while (1) {
    while_6_continue:  ;
    if (! ((int const   )*fmt != 0)) {
      goto while_6_break;
    }
    {
    tmp___0 = fmt;
    fmt ++;
    opt = (int )*tmp___0;
    tmp___1 = __dyc_funcallvar_2;
    size = tmp___1;
    tmp___2 = __dyc_funcallvar_3;
    toalign = tmp___2;
    totalsize += (size_t )toalign;
    }
    {
    while (1) {
      while_7_continue:  ;
      tmp___6 = toalign;
      toalign --;
      if (! (tmp___6 > 0)) {
        goto while_7_break;
      }
      if ((unsigned long )b.p < (unsigned long )(b.buffer + 8192)) {
        tmp___4 = 1;
      } else {
        {
        tmp___3 = __dyc_funcallvar_4;
        }
        if (tmp___3) {
          tmp___4 = 1;
        } else {
          tmp___4 = 0;
        }
      }
      tmp___5 = b.p;
      (b.p) ++;
      *tmp___5 = (char )'\000';
    }
    while_7_break:  ;
    }
    if (opt == 98) {
      goto switch_8_98;
    } else {
      if (opt == 66) {
        goto switch_8_98;
      } else {
        if (opt == 104) {
          goto switch_8_98;
        } else {
          if (opt == 72) {
            goto switch_8_98;
          } else {
            if (opt == 108) {
              goto switch_8_98;
            } else {
              if (opt == 76) {
                goto switch_8_98;
              } else {
                if (opt == 84) {
                  goto switch_8_98;
                } else {
                  if (opt == 105) {
                    goto switch_8_98;
                  } else {
                    if (opt == 73) {
                      goto switch_8_98;
                    } else {
                      if (opt == 120) {
                        goto switch_8_120;
                      } else {
                        if (opt == 102) {
                          goto switch_8_102;
                        } else {
                          if (opt == 100) {
                            goto switch_8_100;
                          } else {
                            if (opt == 99) {
                              goto switch_8_99;
                            } else {
                              if (opt == 115) {
                                goto switch_8_99;
                              } else {
                                {
                                goto switch_8_default;
                                if (0) {
                                  switch_8_98:  
                                  switch_8_66:  
                                  switch_8_104:  
                                  switch_8_72:  
                                  switch_8_108:  
                                  switch_8_76:  
                                  switch_8_84:  
                                  switch_8_105:  
                                  switch_8_73:  
                                  {
                                  tmp___7 = arg;
                                  arg ++;

                                  }
                                  goto switch_8_break;
                                  switch_8_120:  
                                  if ((unsigned long )b.p < (unsigned long )(b.buffer + 8192)) {
                                    tmp___9 = 1;
                                  } else {
                                    {
                                    tmp___8 = __dyc_funcallvar_5;
                                    }
                                    if (tmp___8) {
                                      tmp___9 = 1;
                                    } else {
                                      tmp___9 = 0;
                                    }
                                  }
                                  tmp___10 = b.p;
                                  (b.p) ++;
                                  *tmp___10 = (char )'\000';
                                  goto switch_8_break;
                                  switch_8_102:  
                                  {
                                  tmp___11 = arg;
                                  arg ++;
                                  tmp___12 = __dyc_funcallvar_6;
                                  f = (float )tmp___12;


                                  }
                                  goto switch_8_break;
                                  switch_8_100:  
                                  {
                                  tmp___13 = arg;
                                  arg ++;
                                  tmp___14 = __dyc_funcallvar_7;
                                  d = tmp___14;


                                  }
                                  goto switch_8_break;
                                  switch_8_99:  
                                  switch_8_115:  
                                  {
                                  tmp___15 = arg;
                                  arg ++;
                                  tmp___16 = __dyc_funcallvar_8;
                                  s = tmp___16;
                                  }
                                  if (size == 0UL) {
                                    size = l;
                                  }
                                  if (l >= size) {
                                    tmp___18 = 1;
                                  } else {
                                    {
                                    tmp___17 = __dyc_funcallvar_9;
                                    }
                                    if (tmp___17) {
                                      tmp___18 = 1;
                                    } else {
                                      tmp___18 = 0;
                                    }
                                  }
                                  {

                                  }
                                  if (opt == 115) {
                                    if ((unsigned long )b.p < (unsigned long )(b.buffer + 8192)) {
                                      tmp___20 = 1;
                                    } else {
                                      {
                                      tmp___19 = __dyc_funcallvar_10;
                                      }
                                      if (tmp___19) {
                                        tmp___20 = 1;
                                      } else {
                                        tmp___20 = 0;
                                      }
                                    }
                                    tmp___21 = b.p;
                                    (b.p) ++;
                                    *tmp___21 = (char )'\000';
                                    size ++;
                                  }
                                  goto switch_8_break;
                                  switch_8_default:  
                                  {

                                  }
                                } else {
                                  switch_8_break:  ;
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
    totalsize += size;
  }
  while_6_break:  ;

  goto __dyc_dummy_label;
  __dyc_dummy_label:  ;
  __dyc_print_comp_15luaL_Buffer(b);
  __dyc_print_comp_18Header(h);
  __dyc_printpre_byte(arg);
  __dyc_printpre_byte(totalsize);
  __dyc_printpre_byte(toalign);
  __dyc_printpre_byte(tmp___4);
  __dyc_printpre_byte(tmp___7);
  __dyc_printpre_byte(tmp___9);
  __dyc_printpre_byte(f);
  __dyc_printpre_byte(tmp___11);
  __dyc_printpre_byte(d);
  __dyc_printpre_byte(tmp___13);
  __dyc_print_ptr__char(s);
  __dyc_printpre_byte(tmp___15);
  __dyc_printpre_byte(tmp___18);
  __dyc_printpre_byte(tmp___20);
}
}
