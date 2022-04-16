#include "../../include/dycfoo.h"
#include "../../include/printf.i.hd.c.h"
void __dyc_foo(void) 
{ int len ;
  int i ;
  int base ;
  char *str ;
  char const   *s ;
  int flags ;
  int field_width ;
  int precision ;
  int qualifier ;
  char *tmp ;
  int tmp___0 ;
  int tmp___1 ;
  char *tmp___2 ;
  char *tmp___3 ;
  int tmp___4 ;
  char *tmp___5 ;
  size_t tmp___6 ;
  char *tmp___7 ;
  int tmp___8 ;
  char *tmp___9 ;
  char const   *tmp___10 ;
  char *tmp___11 ;
  int tmp___12 ;
  long *ip ;
  long *tmp___14 ;
  int *ip___0 ;
  int *tmp___15 ;
  char *tmp___16 ;
  char *tmp___17 ;
  char *tmp___18 ;
  char *buf ;
  char const   *fmt ;
  int __dyc_funcallvar_1 ;
  int __dyc_funcallvar_2 ;
  int __dyc_funcallvar_3 ;
  int __dyc_funcallvar_4 ;
  size_t __dyc_funcallvar_5 ;
  char *__dyc_funcallvar_6 ;

  {
  str = __dyc_read_ptr__char();
  s = (char const   *)__dyc_read_ptr__char();
  tmp___4 = __dyc_readpre_byte();
  tmp___14 = __dyc_read_ptr__long();
  tmp___15 = __dyc_read_ptr__int();
  buf = __dyc_read_ptr__char();
  fmt = (char const   *)__dyc_read_ptr__char();
  __dyc_funcallvar_1 = __dyc_readpre_byte();
  __dyc_funcallvar_2 = __dyc_readpre_byte();
  __dyc_funcallvar_3 = __dyc_readpre_byte();
  __dyc_funcallvar_4 = __dyc_readpre_byte();
  __dyc_funcallvar_5 = (size_t )__dyc_readpre_byte();
  __dyc_funcallvar_6 = __dyc_read_ptr__char();
  len = 0;
  i = 0;
  base = 0;
  flags = 0;
  field_width = 0;
  precision = 0;
  qualifier = 0;
  tmp = 0;
  tmp___0 = 0;
  tmp___1 = 0;
  tmp___2 = 0;
  tmp___3 = 0;
  tmp___5 = 0;
  tmp___6 = 0;
  tmp___7 = 0;
  tmp___8 = 0;
  tmp___9 = 0;
  tmp___10 = 0;
  tmp___11 = 0;
  tmp___12 = 0;
  ip = 0;
  ip___0 = 0;
  tmp___16 = 0;
  tmp___17 = 0;
  tmp___18 = 0;
  if ((int const   )*fmt != 37) {
    tmp = str;
    str ++;
    *tmp = (char )*fmt;
    goto __dyc_dummy_label;
  }
  flags = 0;
  repeat: 
  fmt ++;
  if ((int )*fmt == 45) {
    goto switch_8_45;
  } else {
    if ((int )*fmt == 43) {
      goto switch_8_43;
    } else {
      if ((int )*fmt == 32) {
        goto switch_8_32;
      } else {
        if ((int )*fmt == 35) {
          goto switch_8_35;
        } else {
          if ((int )*fmt == 48) {
            goto switch_8_48;
          } else {
            if (0) {
              switch_8_45:  
              flags |= 16;
              goto repeat;
              switch_8_43:  
              flags |= 4;
              goto repeat;
              switch_8_32:  
              flags |= 8;
              goto repeat;
              switch_8_35:  
              flags |= 32;
              goto repeat;
              switch_8_48:  
              flags |= 1;
              goto repeat;
            } else {
              switch_8_break:  ;
            }
          }
        }
      }
    }
  }
  field_width = -1;
  tmp___0 = __dyc_funcallvar_1;
  if (tmp___0) {
    {
    field_width = __dyc_funcallvar_2;
    }
  } else {
    if ((int const   )*fmt == 42) {
      {
      fmt ++;

      }
      if (field_width < 0) {
        field_width = - field_width;
        flags |= 16;
      }
    }
  }
  precision = -1;
  if ((int const   )*fmt == 46) {
    {
    fmt ++;
    tmp___1 = __dyc_funcallvar_3;
    }
    if (tmp___1) {
      {
      precision = __dyc_funcallvar_4;
      }
    } else {
      if ((int const   )*fmt == 42) {
        {
        fmt ++;

        }
      }
    }
    if (precision < 0) {
      precision = 0;
    }
  }
  qualifier = -1;
  if ((int const   )*fmt == 104) {
    qualifier = (int )*fmt;
    fmt ++;
  } else {
    if ((int const   )*fmt == 108) {
      qualifier = (int )*fmt;
      fmt ++;
    } else {
      if ((int const   )*fmt == 76) {
        qualifier = (int )*fmt;
        fmt ++;
      }
    }
  }
  base = 10;
  if ((int )*fmt == 99) {
    goto switch_9_99;
  } else {
    if ((int )*fmt == 115) {
      goto switch_9_115;
    } else {
      if ((int )*fmt == 112) {
        goto switch_9_112;
      } else {
        if ((int )*fmt == 110) {
          goto switch_9_110;
        } else {
          if ((int )*fmt == 37) {
            goto switch_9_37;
          } else {
            if ((int )*fmt == 111) {
              goto switch_9_111;
            } else {
              if ((int )*fmt == 88) {
                goto switch_9_88;
              } else {
                if ((int )*fmt == 120) {
                  goto switch_9_120;
                } else {
                  if ((int )*fmt == 100) {
                    goto switch_9_100;
                  } else {
                    if ((int )*fmt == 105) {
                      goto switch_9_100;
                    } else {
                      if ((int )*fmt == 117) {
                        goto switch_9_117;
                      } else {
                        {
                        goto switch_9_default;
                        if (0) {
                          switch_9_99:  
                          if (! (flags & 16)) {
                            {
                            while (1) {
                              while_10_continue:  ;
                              field_width --;
                              if (! (field_width > 0)) {
                                goto while_10_break;
                              }
                              tmp___2 = str;
                              str ++;
                              *tmp___2 = (char )' ';
                            }
                            while_10_break:  ;
                            }
                          }
                          {
                          tmp___3 = str;
                          str ++;

                          *tmp___3 = (char )((unsigned char )tmp___4);
                          }
                          {
                          while (1) {
                            while_11_continue:  ;
                            field_width --;
                            if (! (field_width > 0)) {
                              goto while_11_break;
                            }
                            tmp___5 = str;
                            str ++;
                            *tmp___5 = (char )' ';
                          }
                          while_11_break:  ;
                          }
                          goto __dyc_dummy_label;
                          switch_9_115:  
                          {

                          tmp___6 = __dyc_funcallvar_5;
                          len = (int )tmp___6;
                          }
                          if (! (flags & 16)) {
                            {
                            while (1) {
                              while_12_continue:  ;
                              tmp___8 = field_width;
                              field_width --;
                              if (! (len < tmp___8)) {
                                goto while_12_break;
                              }
                              tmp___7 = str;
                              str ++;
                              *tmp___7 = (char )' ';
                            }
                            while_12_break:  ;
                            }
                          }
                          i = 0;
                          {
                          while (1) {
                            while_13_continue:  ;
                            if (! (i < len)) {
                              goto while_13_break;
                            }
                            tmp___9 = str;
                            str ++;
                            tmp___10 = s;
                            s ++;
                            *tmp___9 = (char )*tmp___10;
                            i ++;
                          }
                          while_13_break:  ;
                          }
                          {
                          while (1) {
                            while_14_continue:  ;
                            tmp___12 = field_width;
                            field_width --;
                            if (! (len < tmp___12)) {
                              goto while_14_break;
                            }
                            tmp___11 = str;
                            str ++;
                            *tmp___11 = (char )' ';
                          }
                          while_14_break:  ;
                          }
                          goto __dyc_dummy_label;
                          switch_9_112:  
                          if (field_width == -1) {
                            field_width = (int )(2UL * sizeof(void *));
                            flags |= 1;
                          }
                          {

                          str = __dyc_funcallvar_6;
                          }
                          goto __dyc_dummy_label;
                          switch_9_110:  
                          if (qualifier == 108) {
                            {

                            ip = tmp___14;
                            *ip = (long )(str - buf);
                            }
                          } else {
                            {

                            ip___0 = tmp___15;
                            *ip___0 = str - buf;
                            }
                          }
                          goto __dyc_dummy_label;
                          switch_9_37:  
                          tmp___16 = str;
                          str ++;
                          *tmp___16 = (char )'%';
                          goto __dyc_dummy_label;
                          switch_9_111:  
                          base = 8;
                          goto switch_9_break;
                          switch_9_88:  
                          flags |= 64;
                          switch_9_120:  
                          base = 16;
                          goto switch_9_break;
                          switch_9_100:  
                          switch_9_105:  
                          flags |= 2;
                          switch_9_117:  
                          goto switch_9_break;
                          switch_9_default:  
                          tmp___17 = str;
                          str ++;
                          *tmp___17 = (char )'%';
                          if (*fmt) {
                            tmp___18 = str;
                            str ++;
                            *tmp___18 = (char )*fmt;
                          } else {
                            fmt --;
                          }
                          goto __dyc_dummy_label;
                        } else {
                          switch_9_break:  ;
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
  __dyc_printpre_byte(base);
  __dyc_print_ptr__char(str);
  __dyc_print_ptr__char(s);
  __dyc_printpre_byte(flags);
  __dyc_printpre_byte(field_width);
  __dyc_printpre_byte(precision);
  __dyc_printpre_byte(qualifier);
  __dyc_print_ptr__char(fmt);
}
}
