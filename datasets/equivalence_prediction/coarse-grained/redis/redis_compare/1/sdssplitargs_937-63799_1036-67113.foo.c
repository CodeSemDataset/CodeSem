#include "../../include/dycfoo.h"
#include "../../include/sds.i.hd.c.h"
void __dyc_foo(void) 
{ char const   *p ;
  char *current ;
  char **vector ;
  unsigned short const   **tmp ;
  int inq ;
  int insq ;
  int done ;
  unsigned char byte ;
  int tmp___0 ;
  int tmp___1 ;
  char c ;
  unsigned short const   **tmp___2 ;
  int tmp___3 ;
  int tmp___4 ;
  unsigned short const   **tmp___5 ;
  void *tmp___6 ;
  void *tmp___7 ;
  int tmp___8 ;
  int *argc ;
  unsigned short const   **__dyc_funcallvar_1 ;
  sds __dyc_funcallvar_2 ;
  int __dyc_funcallvar_3 ;
  int __dyc_funcallvar_4 ;
  int __dyc_funcallvar_5 ;
  int __dyc_funcallvar_6 ;
  sds __dyc_funcallvar_7 ;
  sds __dyc_funcallvar_8 ;
  unsigned short const   **__dyc_funcallvar_9 ;
  sds __dyc_funcallvar_10 ;
  sds __dyc_funcallvar_11 ;
  unsigned short const   **__dyc_funcallvar_12 ;
  sds __dyc_funcallvar_13 ;
  sds __dyc_funcallvar_14 ;
  void *__dyc_funcallvar_15 ;
  void *__dyc_funcallvar_16 ;

  {
  p = (char const   *)__dyc_read_ptr__char();
  current = __dyc_read_ptr__char();
  vector = __dyc_read_ptr__ptr__char();
  argc = __dyc_read_ptr__int();
  __dyc_funcallvar_1 = (unsigned short const   **)__dyc_read_ptr__ptr__short();
  __dyc_funcallvar_2 = __dyc_read_ptr__char();
  __dyc_funcallvar_3 = __dyc_readpre_byte();
  __dyc_funcallvar_4 = __dyc_readpre_byte();
  __dyc_funcallvar_5 = __dyc_readpre_byte();
  __dyc_funcallvar_6 = __dyc_readpre_byte();
  __dyc_funcallvar_7 = __dyc_read_ptr__char();
  __dyc_funcallvar_8 = __dyc_read_ptr__char();
  __dyc_funcallvar_9 = (unsigned short const   **)__dyc_read_ptr__ptr__short();
  __dyc_funcallvar_10 = __dyc_read_ptr__char();
  __dyc_funcallvar_11 = __dyc_read_ptr__char();
  __dyc_funcallvar_12 = (unsigned short const   **)__dyc_read_ptr__ptr__short();
  __dyc_funcallvar_13 = __dyc_read_ptr__char();
  __dyc_funcallvar_14 = __dyc_read_ptr__char();
  __dyc_funcallvar_15 = __dyc_read_ptr__void();
  __dyc_funcallvar_16 = __dyc_read_ptr__void();
  tmp = 0;
  inq = 0;
  insq = 0;
  done = 0;
  byte = 0;
  tmp___0 = 0;
  tmp___1 = 0;
  c = 0;
  tmp___2 = 0;
  tmp___3 = 0;
  tmp___4 = 0;
  tmp___5 = 0;
  tmp___6 = 0;
  tmp___7 = 0;
  tmp___8 = 0;
  while (1) {
    while_27_continue:  ;
    {
    while (1) {
      while_28_continue:  ;
      if (*p) {
        {
        tmp = __dyc_funcallvar_1;
        }
        if (! ((int const   )*(*tmp + (int )*p) & 8192)) {
          goto while_28_break;
        }
      } else {
        goto while_28_break;
      }
      p ++;
    }
    while_28_break:  ;
    }
    if (*p) {
      inq = 0;
      insq = 0;
      done = 0;
      if ((unsigned long )current == (unsigned long )((void *)0)) {
        {
        current = __dyc_funcallvar_2;
        }
      }
      {
      while (1) {
        while_29_continue:  ;
        if (! (! done)) {
          goto while_29_break;
        }
        if (inq) {
          if ((int const   )*p == 92) {
            if ((int const   )*(p + 1) == 120) {
              {
              tmp___3 = __dyc_funcallvar_3;
              }
              if (tmp___3) {
                {
                tmp___4 = __dyc_funcallvar_4;
                }
                if (tmp___4) {
                  {
                  tmp___0 = __dyc_funcallvar_5;
                  tmp___1 = __dyc_funcallvar_6;
                  byte = (unsigned char )(tmp___0 * 16 + tmp___1);
                  current = __dyc_funcallvar_7;
                  p += 3;
                  }
                } else {
                  goto _L___2;
                }
              } else {
                goto _L___2;
              }
            } else {
              goto _L___2;
            }
          } else {
            _L___2:  
            if ((int const   )*p == 92) {
              if (*(p + 1)) {
                p ++;
                if ((int )*p == 110) {
                  goto switch_30_110;
                } else {
                  if ((int )*p == 114) {
                    goto switch_30_114;
                  } else {
                    if ((int )*p == 116) {
                      goto switch_30_116;
                    } else {
                      if ((int )*p == 98) {
                        goto switch_30_98;
                      } else {
                        if ((int )*p == 97) {
                          goto switch_30_97;
                        } else {
                          {
                          goto switch_30_default;
                          if (0) {
                            switch_30_110:  
                            c = (char )'\n';
                            goto switch_30_break;
                            switch_30_114:  
                            c = (char )'\r';
                            goto switch_30_break;
                            switch_30_116:  
                            c = (char )'\t';
                            goto switch_30_break;
                            switch_30_98:  
                            c = (char )'\b';
                            goto switch_30_break;
                            switch_30_97:  
                            c = (char )'\a';
                            goto switch_30_break;
                            switch_30_default:  
                            c = (char )*p;
                            goto switch_30_break;
                          } else {
                            switch_30_break:  ;
                          }
                          }
                        }
                      }
                    }
                  }
                }
                {
                current = __dyc_funcallvar_8;
                }
              } else {
                goto _L;
              }
            } else {
              _L:  
              if ((int const   )*p == 34) {
                if (*(p + 1)) {
                  {
                  tmp___2 = __dyc_funcallvar_9;
                  }
                  if (! ((int const   )*(*tmp___2 + (int )*(p + 1)) & 8192)) {
                    goto __dyc_dummy_label;
                  }
                }
                done = 1;
              } else {
                if (! *p) {
                  goto __dyc_dummy_label;
                } else {
                  {
                  current = __dyc_funcallvar_10;
                  }
                }
              }
            }
          }
        } else {
          if (insq) {
            if ((int const   )*p == 92) {
              if ((int const   )*(p + 1) == 39) {
                {
                p ++;
                current = __dyc_funcallvar_11;
                }
              } else {
                goto _L___3;
              }
            } else {
              _L___3:  
              if ((int const   )*p == 39) {
                if (*(p + 1)) {
                  {
                  tmp___5 = __dyc_funcallvar_12;
                  }
                  if (! ((int const   )*(*tmp___5 + (int )*(p + 1)) & 8192)) {
                    goto __dyc_dummy_label;
                  }
                }
                done = 1;
              } else {
                if (! *p) {
                  goto __dyc_dummy_label;
                } else {
                  {
                  current = __dyc_funcallvar_13;
                  }
                }
              }
            }
          } else {
            if ((int )*p == 32) {
              goto switch_31_32;
            } else {
              if ((int )*p == 10) {
                goto switch_31_32;
              } else {
                if ((int )*p == 13) {
                  goto switch_31_32;
                } else {
                  if ((int )*p == 9) {
                    goto switch_31_32;
                  } else {
                    if ((int )*p == 0) {
                      goto switch_31_32;
                    } else {
                      if ((int )*p == 34) {
                        goto switch_31_34;
                      } else {
                        if ((int )*p == 39) {
                          goto switch_31_39;
                        } else {
                          {
                          goto switch_31_default;
                          if (0) {
                            switch_31_32:  
                            switch_31_10:  
                            switch_31_13:  
                            switch_31_9:  
                            switch_31_0:  
                            done = 1;
                            goto switch_31_break;
                            switch_31_34:  
                            inq = 1;
                            goto switch_31_break;
                            switch_31_39:  
                            insq = 1;
                            goto switch_31_break;
                            switch_31_default:  
                            {
                            current = __dyc_funcallvar_14;
                            }
                            goto switch_31_break;
                          } else {
                            switch_31_break:  ;
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
        if (*p) {
          p ++;
        }
      }
      while_29_break:  ;
      }
      {
      tmp___6 = __dyc_funcallvar_15;
      vector = (char **)tmp___6;
      *(vector + *argc) = current;
      (*argc) ++;
      current = (char *)((void *)0);
      }
    } else {
      if ((unsigned long )vector == (unsigned long )((void *)0)) {
        {
        tmp___7 = __dyc_funcallvar_16;
        vector = (char **)tmp___7;
        }
      }
      goto __dyc_dummy_label;
    }
  }
  while_27_break:  ;
  while (1) {
    while_32_continue:  ;
    tmp___8 = *argc;
    (*argc) --;
    if (! tmp___8) {
      goto while_32_break;
    }
    {

    }
  }
  while_32_break:  ;

  if (current) {
    {

    }
  }
  __dyc_dummy_label:  ;
  __dyc_print_ptr__char(current);
  __dyc_print_ptr__ptr__char(vector);
  __dyc_printpre_byte(inq);
  __dyc_printpre_byte(insq);
  __dyc_printpre_byte(byte);
  __dyc_printpre_byte(c);
}
}
