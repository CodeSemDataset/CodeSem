#include "../../include/dycfoo.h"
#include "../../include/lua_struct.i.hd.c.h"
void __dyc_foo(void) 
{ union __anonunion_native_7 native ;
  Header h ;
  char const   *fmt ;
  size_t ld ;
  char const   *data ;
  char const   *tmp___0 ;
  size_t pos ;
  lua_Integer tmp___1 ;
  int tmp___2 ;
  int tmp___3 ;
  int n ;
  int opt ;
  char const   *tmp___4 ;
  size_t size ;
  size_t tmp___5 ;
  int tmp___6 ;
  int tmp___7 ;
  int tmp___8 ;
  int issigned ;
  unsigned short const   **tmp___9 ;
  lua_Number res ;
  lua_Number tmp___10 ;
  int tmp___11 ;
  lua_Number tmp___12 ;
  int tmp___13 ;
  int tmp___14 ;
  char const   *e ;
  void *tmp___15 ;
  lua_Integer __dyc_funcallvar_3 ;
  int __dyc_funcallvar_4 ;
  size_t __dyc_funcallvar_5 ;
  int __dyc_funcallvar_6 ;
  int __dyc_funcallvar_7 ;
  unsigned short const   **__dyc_funcallvar_8 ;
  lua_Number __dyc_funcallvar_9 ;
  int __dyc_funcallvar_10 ;
  lua_Number __dyc_funcallvar_11 ;
  int __dyc_funcallvar_12 ;
  void *__dyc_funcallvar_13 ;

  {
  native = (union __anonunion_native_7  const  )__dyc_read_comp_17__anonunion_native_7();
  fmt = (char const   *)__dyc_read_ptr__char();
  ld = (size_t )__dyc_readpre_byte();
  tmp___0 = (char const   *)__dyc_read_ptr__char();
  __dyc_funcallvar_3 = (lua_Integer )__dyc_readpre_byte();
  __dyc_funcallvar_4 = __dyc_readpre_byte();
  __dyc_funcallvar_5 = (size_t )__dyc_readpre_byte();
  __dyc_funcallvar_6 = __dyc_readpre_byte();
  __dyc_funcallvar_7 = __dyc_readpre_byte();
  __dyc_funcallvar_8 = (unsigned short const   **)__dyc_read_ptr__ptr__short();
  __dyc_funcallvar_9 = (lua_Number )__dyc_readpre_byte();
  __dyc_funcallvar_10 = __dyc_readpre_byte();
  __dyc_funcallvar_11 = (lua_Number )__dyc_readpre_byte();
  __dyc_funcallvar_12 = __dyc_readpre_byte();
  __dyc_funcallvar_13 = __dyc_read_ptr__void();
  memset(& h, 0, sizeof(Header ));
  data = 0;
  pos = 0;
  tmp___1 = 0;
  tmp___2 = 0;
  tmp___3 = 0;
  n = 0;
  opt = 0;
  tmp___4 = 0;
  size = 0;
  tmp___5 = 0;
  tmp___6 = 0;
  tmp___7 = 0;
  tmp___8 = 0;
  issigned = 0;
  tmp___9 = 0;
  res = 0;
  tmp___10 = 0;
  tmp___11 = 0;
  tmp___12 = 0;
  tmp___13 = 0;
  tmp___14 = 0;
  e = 0;
  tmp___15 = 0;
  data = tmp___0;
  tmp___1 = __dyc_funcallvar_3;
  pos = (size_t )tmp___1;
  if (pos > 0UL) {
    tmp___3 = 1;
  } else {
    {
    tmp___2 = __dyc_funcallvar_4;
    }
    if (tmp___2) {
      tmp___3 = 1;
    } else {
      tmp___3 = 0;
    }
  }
  pos --;
  n = 0;
  h.endian = (int )native.endian;
  h.align = 1;
  while (1) {
    while_11_continue:  ;
    if (! *fmt) {
      goto while_11_break;
    }
    {
    tmp___4 = fmt;
    fmt ++;
    opt = (int )*tmp___4;
    tmp___5 = __dyc_funcallvar_5;
    size = tmp___5;
    tmp___6 = __dyc_funcallvar_6;
    pos += (size_t )tmp___6;
    }
    if (size <= ld) {
      if (pos <= ld - size) {
        tmp___8 = 1;
      } else {
        goto _L;
      }
    } else {
      _L:  
      {
      tmp___7 = __dyc_funcallvar_7;
      }
      if (tmp___7) {
        tmp___8 = 1;
      } else {
        tmp___8 = 0;
      }
    }
    {

    }
    if (opt == 98) {
      goto switch_12_98;
    } else {
      if (opt == 66) {
        goto switch_12_98;
      } else {
        if (opt == 104) {
          goto switch_12_98;
        } else {
          if (opt == 72) {
            goto switch_12_98;
          } else {
            if (opt == 108) {
              goto switch_12_98;
            } else {
              if (opt == 76) {
                goto switch_12_98;
              } else {
                if (opt == 84) {
                  goto switch_12_98;
                } else {
                  if (opt == 105) {
                    goto switch_12_98;
                  } else {
                    if (opt == 73) {
                      goto switch_12_98;
                    } else {
                      if (opt == 120) {
                        goto switch_12_120;
                      } else {
                        if (opt == 102) {
                          goto switch_12_102;
                        } else {
                          if (opt == 100) {
                            goto switch_12_100;
                          } else {
                            if (opt == 99) {
                              goto switch_12_99;
                            } else {
                              if (opt == 115) {
                                goto switch_12_115;
                              } else {
                                {
                                goto switch_12_default;
                                if (0) {
                                  switch_12_98:  
                                  switch_12_66:  
                                  switch_12_104:  
                                  switch_12_72:  
                                  switch_12_108:  
                                  switch_12_76:  
                                  switch_12_84:  
                                  switch_12_105:  
                                  switch_12_73:  
                                  {
                                  tmp___9 = __dyc_funcallvar_8;
                                  issigned = (int )((int const   )*(*tmp___9 + opt) & 512);
                                  tmp___10 = __dyc_funcallvar_9;
                                  res = tmp___10;

                                  n ++;
                                  }
                                  goto switch_12_break;
                                  switch_12_120:  
                                  goto switch_12_break;
                                  switch_12_102:  
                                  {



                                  n ++;
                                  }
                                  goto switch_12_break;
                                  switch_12_100:  
                                  {



                                  n ++;
                                  }
                                  goto switch_12_break;
                                  switch_12_99:  
                                  if (size == 0UL) {
                                    if (n == 0) {
                                      {

                                      }
                                    } else {
                                      {
                                      tmp___11 = __dyc_funcallvar_10;
                                      }
                                      if (! tmp___11) {
                                        {

                                        }
                                      }
                                    }
                                    {
                                    tmp___12 = __dyc_funcallvar_11;
                                    size = (unsigned long )tmp___12;

                                    n --;
                                    }
                                    if (size <= ld) {
                                      if (pos <= ld - size) {
                                        tmp___14 = 1;
                                      } else {
                                        goto _L___0;
                                      }
                                    } else {
                                      _L___0:  
                                      {
                                      tmp___13 = __dyc_funcallvar_12;
                                      }
                                      if (tmp___13) {
                                        tmp___14 = 1;
                                      } else {
                                        tmp___14 = 0;
                                      }
                                    }
                                  }
                                  {

                                  n ++;
                                  }
                                  goto switch_12_break;
                                  switch_12_115:  
                                  {
                                  tmp___15 = __dyc_funcallvar_13;
                                  e = (char const   *)tmp___15;
                                  }
                                  if ((unsigned long )e == (unsigned long )((void *)0)) {
                                    {

                                    }
                                  }
                                  {
                                  size = (unsigned long )((e - (data + pos)) + 1);

                                  n ++;
                                  }
                                  goto switch_12_break;
                                  switch_12_default:  
                                  {

                                  }
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
              }
            }
          }
        }
      }
    }
    pos += size;
  }
  while_11_break:  ;

  goto __dyc_dummy_label;
  __dyc_dummy_label:  ;
  __dyc_print_comp_18Header(h);
  __dyc_print_ptr__char(data);
  __dyc_printpre_byte(pos);
  __dyc_printpre_byte(tmp___3);
  __dyc_printpre_byte(n);
  __dyc_printpre_byte(tmp___8);
  __dyc_printpre_byte(issigned);
  __dyc_printpre_byte(res);
  __dyc_printpre_byte(tmp___14);
}
}
