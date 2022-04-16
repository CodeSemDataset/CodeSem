#include "../../include/dycfoo.h"
#include "../../include/luac.i.hd.c.h"
void __dyc_foo(void) 
{ int listing ;
  int dumping ;
  int stripping ;
  char const   *output ;
  char const   *progname ;
  int i ;
  int version ;
  size_t __s1_len ;
  size_t __s2_len ;
  int tmp___8 ;
  int tmp___13 ;
  int tmp___14 ;
  int tmp___15 ;
  int tmp___16 ;
  size_t __s1_len___0 ;
  size_t __s2_len___0 ;
  int tmp___26 ;
  int tmp___31 ;
  int tmp___32 ;
  int tmp___33 ;
  int tmp___34 ;
  size_t __s1_len___1 ;
  size_t __s2_len___1 ;
  int tmp___44 ;
  int tmp___49 ;
  int tmp___50 ;
  int tmp___51 ;
  int tmp___52 ;
  size_t __s1_len___2 ;
  size_t __s2_len___2 ;
  int tmp___62 ;
  int tmp___67 ;
  int tmp___68 ;
  int tmp___69 ;
  int tmp___70 ;
  size_t __s1_len___3 ;
  size_t __s2_len___3 ;
  int tmp___80 ;
  int tmp___85 ;
  int tmp___86 ;
  int tmp___87 ;
  int tmp___88 ;
  size_t __s1_len___4 ;
  size_t __s2_len___4 ;
  int tmp___98 ;
  int tmp___103 ;
  int tmp___104 ;
  int tmp___105 ;
  int tmp___106 ;
  size_t __s1_len___5 ;
  size_t __s2_len___5 ;
  int tmp___116 ;
  int tmp___121 ;
  int tmp___122 ;
  int tmp___123 ;
  int tmp___124 ;
  size_t __s1_len___6 ;
  size_t __s2_len___6 ;
  int tmp___134 ;
  int tmp___139 ;
  int tmp___140 ;
  int tmp___141 ;
  int tmp___142 ;
  int argc ;
  char **argv ;
  int __dyc_funcallvar_1 ;
  int __dyc_funcallvar_2 ;
  int __dyc_funcallvar_3 ;
  int __dyc_funcallvar_4 ;
  int __dyc_funcallvar_5 ;
  int __dyc_funcallvar_6 ;
  int __dyc_funcallvar_7 ;
  int __dyc_funcallvar_8 ;
  int __dyc_funcallvar_9 ;
  int __dyc_funcallvar_10 ;
  int __dyc_funcallvar_11 ;
  int __dyc_funcallvar_12 ;
  int __dyc_funcallvar_13 ;
  int __dyc_funcallvar_14 ;
  int __dyc_funcallvar_15 ;
  int __dyc_funcallvar_16 ;
  int __dyc_funcallvar_17 ;
  int __dyc_funcallvar_18 ;
  int __dyc_funcallvar_19 ;
  int __dyc_funcallvar_20 ;
  int __dyc_funcallvar_21 ;
  int __dyc_funcallvar_22 ;
  int __dyc_funcallvar_23 ;
  int __dyc_funcallvar_24 ;
  int __dyc_funcallvar_25 ;
  int __dyc_funcallvar_26 ;
  int __dyc_funcallvar_27 ;
  int __dyc_funcallvar_28 ;
  int __dyc_funcallvar_29 ;
  int __dyc_funcallvar_30 ;
  int __dyc_funcallvar_31 ;
  int __dyc_funcallvar_32 ;
  int __dyc_funcallvar_33 ;
  int __dyc_funcallvar_34 ;
  int __dyc_funcallvar_35 ;
  int __dyc_funcallvar_36 ;
  int __dyc_funcallvar_37 ;
  int __dyc_funcallvar_38 ;
  int __dyc_funcallvar_39 ;
  int __dyc_funcallvar_40 ;

  {
  listing = __dyc_readpre_byte();
  version = __dyc_readpre_byte();
  argc = __dyc_readpre_byte();
  argv = __dyc_read_ptr__ptr__char();
  __dyc_funcallvar_1 = __dyc_readpre_byte();
  __dyc_funcallvar_2 = __dyc_readpre_byte();
  __dyc_funcallvar_3 = __dyc_readpre_byte();
  __dyc_funcallvar_4 = __dyc_readpre_byte();
  __dyc_funcallvar_5 = __dyc_readpre_byte();
  __dyc_funcallvar_6 = __dyc_readpre_byte();
  __dyc_funcallvar_7 = __dyc_readpre_byte();
  __dyc_funcallvar_8 = __dyc_readpre_byte();
  __dyc_funcallvar_9 = __dyc_readpre_byte();
  __dyc_funcallvar_10 = __dyc_readpre_byte();
  __dyc_funcallvar_11 = __dyc_readpre_byte();
  __dyc_funcallvar_12 = __dyc_readpre_byte();
  __dyc_funcallvar_13 = __dyc_readpre_byte();
  __dyc_funcallvar_14 = __dyc_readpre_byte();
  __dyc_funcallvar_15 = __dyc_readpre_byte();
  __dyc_funcallvar_16 = __dyc_readpre_byte();
  __dyc_funcallvar_17 = __dyc_readpre_byte();
  __dyc_funcallvar_18 = __dyc_readpre_byte();
  __dyc_funcallvar_19 = __dyc_readpre_byte();
  __dyc_funcallvar_20 = __dyc_readpre_byte();
  __dyc_funcallvar_21 = __dyc_readpre_byte();
  __dyc_funcallvar_22 = __dyc_readpre_byte();
  __dyc_funcallvar_23 = __dyc_readpre_byte();
  __dyc_funcallvar_24 = __dyc_readpre_byte();
  __dyc_funcallvar_25 = __dyc_readpre_byte();
  __dyc_funcallvar_26 = __dyc_readpre_byte();
  __dyc_funcallvar_27 = __dyc_readpre_byte();
  __dyc_funcallvar_28 = __dyc_readpre_byte();
  __dyc_funcallvar_29 = __dyc_readpre_byte();
  __dyc_funcallvar_30 = __dyc_readpre_byte();
  __dyc_funcallvar_31 = __dyc_readpre_byte();
  __dyc_funcallvar_32 = __dyc_readpre_byte();
  __dyc_funcallvar_33 = __dyc_readpre_byte();
  __dyc_funcallvar_34 = __dyc_readpre_byte();
  __dyc_funcallvar_35 = __dyc_readpre_byte();
  __dyc_funcallvar_36 = __dyc_readpre_byte();
  __dyc_funcallvar_37 = __dyc_readpre_byte();
  __dyc_funcallvar_38 = __dyc_readpre_byte();
  __dyc_funcallvar_39 = __dyc_readpre_byte();
  __dyc_funcallvar_40 = __dyc_readpre_byte();
  dumping = 0;
  stripping = 0;
  output = 0;
  progname = 0;
  i = 0;
  __s1_len = 0;
  __s2_len = 0;
  tmp___8 = 0;
  tmp___13 = 0;
  tmp___14 = 0;
  tmp___15 = 0;
  tmp___16 = 0;
  __s1_len___0 = 0;
  __s2_len___0 = 0;
  tmp___26 = 0;
  tmp___31 = 0;
  tmp___32 = 0;
  tmp___33 = 0;
  tmp___34 = 0;
  __s1_len___1 = 0;
  __s2_len___1 = 0;
  tmp___44 = 0;
  tmp___49 = 0;
  tmp___50 = 0;
  tmp___51 = 0;
  tmp___52 = 0;
  __s1_len___2 = 0;
  __s2_len___2 = 0;
  tmp___62 = 0;
  tmp___67 = 0;
  tmp___68 = 0;
  tmp___69 = 0;
  tmp___70 = 0;
  __s1_len___3 = 0;
  __s2_len___3 = 0;
  tmp___80 = 0;
  tmp___85 = 0;
  tmp___86 = 0;
  tmp___87 = 0;
  tmp___88 = 0;
  __s1_len___4 = 0;
  __s2_len___4 = 0;
  tmp___98 = 0;
  tmp___103 = 0;
  tmp___104 = 0;
  tmp___105 = 0;
  tmp___106 = 0;
  __s1_len___5 = 0;
  __s2_len___5 = 0;
  tmp___116 = 0;
  tmp___121 = 0;
  tmp___122 = 0;
  tmp___123 = 0;
  tmp___124 = 0;
  __s1_len___6 = 0;
  __s2_len___6 = 0;
  tmp___134 = 0;
  tmp___139 = 0;
  tmp___140 = 0;
  tmp___141 = 0;
  tmp___142 = 0;
  if ((unsigned long )*(argv + 0) != (unsigned long )((void *)0)) {
    if ((int )*(*(argv + 0)) != 0) {
      progname = (char const   *)*(argv + 0);
    }
  }
  i = 1;
  while (1) {
    while_0_continue:  ;
    if (! (i < argc)) {
      goto __dyc_dummy_label;
    }
    if ((int )*(*(argv + i)) != 45) {
      goto __dyc_dummy_label;
    } else {
      if (0) {
        {
        tmp___140 = __dyc_funcallvar_1;
        __s1_len___6 = (unsigned long )tmp___140;
        tmp___141 = __dyc_funcallvar_2;
        __s2_len___6 = (unsigned long )tmp___141;
        }
        if (! ((unsigned long )((void const   *)(*(argv + i) + 1)) - (unsigned long )((void const   *)*(argv + i)) == 1UL)) {
          goto _L___14;
        } else {
          if (__s1_len___6 >= 4UL) {
            _L___14:  
            if (! ((unsigned long )((void const   *)("--" + 1)) - (unsigned long )((void const   *)"--") == 1UL)) {
              tmp___142 = 1;
            } else {
              if (__s2_len___6 >= 4UL) {
                tmp___142 = 1;
              } else {
                tmp___142 = 0;
              }
            }
          } else {
            tmp___142 = 0;
          }
        }
        if (tmp___142) {
          {
          tmp___134 = __dyc_funcallvar_3;
          }
        } else {
          {
          tmp___139 = __dyc_funcallvar_4;
          tmp___134 = tmp___139;
          }
        }
      } else {
        {
        tmp___139 = __dyc_funcallvar_5;
        tmp___134 = tmp___139;
        }
      }
      if (tmp___134 == 0) {
        i ++;
        if (version) {
          version ++;
        }
        goto __dyc_dummy_label;
      } else {
        if (0) {
          {
          tmp___122 = __dyc_funcallvar_6;
          __s1_len___5 = (unsigned long )tmp___122;
          tmp___123 = __dyc_funcallvar_7;
          __s2_len___5 = (unsigned long )tmp___123;
          }
          if (! ((unsigned long )((void const   *)(*(argv + i) + 1)) - (unsigned long )((void const   *)*(argv + i)) == 1UL)) {
            goto _L___12;
          } else {
            if (__s1_len___5 >= 4UL) {
              _L___12:  
              if (! ((unsigned long )((void const   *)("-" + 1)) - (unsigned long )((void const   *)"-") == 1UL)) {
                tmp___124 = 1;
              } else {
                if (__s2_len___5 >= 4UL) {
                  tmp___124 = 1;
                } else {
                  tmp___124 = 0;
                }
              }
            } else {
              tmp___124 = 0;
            }
          }
          if (tmp___124) {
            {
            tmp___116 = __dyc_funcallvar_8;
            }
          } else {
            {
            tmp___121 = __dyc_funcallvar_9;
            tmp___116 = tmp___121;
            }
          }
        } else {
          {
          tmp___121 = __dyc_funcallvar_10;
          tmp___116 = tmp___121;
          }
        }
        if (tmp___116 == 0) {
          goto __dyc_dummy_label;
        } else {
          if (0) {
            {
            tmp___104 = __dyc_funcallvar_11;
            __s1_len___4 = (unsigned long )tmp___104;
            tmp___105 = __dyc_funcallvar_12;
            __s2_len___4 = (unsigned long )tmp___105;
            }
            if (! ((unsigned long )((void const   *)(*(argv + i) + 1)) - (unsigned long )((void const   *)*(argv + i)) == 1UL)) {
              goto _L___10;
            } else {
              if (__s1_len___4 >= 4UL) {
                _L___10:  
                if (! ((unsigned long )((void const   *)("-l" + 1)) - (unsigned long )((void const   *)"-l") == 1UL)) {
                  tmp___106 = 1;
                } else {
                  if (__s2_len___4 >= 4UL) {
                    tmp___106 = 1;
                  } else {
                    tmp___106 = 0;
                  }
                }
              } else {
                tmp___106 = 0;
              }
            }
            if (tmp___106) {
              {
              tmp___98 = __dyc_funcallvar_13;
              }
            } else {
              {
              tmp___103 = __dyc_funcallvar_14;
              tmp___98 = tmp___103;
              }
            }
          } else {
            {
            tmp___103 = __dyc_funcallvar_15;
            tmp___98 = tmp___103;
            }
          }
          if (tmp___98 == 0) {
            listing ++;
          } else {
            if (0) {
              {
              tmp___86 = __dyc_funcallvar_16;
              __s1_len___3 = (unsigned long )tmp___86;
              tmp___87 = __dyc_funcallvar_17;
              __s2_len___3 = (unsigned long )tmp___87;
              }
              if (! ((unsigned long )((void const   *)(*(argv + i) + 1)) - (unsigned long )((void const   *)*(argv + i)) == 1UL)) {
                goto _L___8;
              } else {
                if (__s1_len___3 >= 4UL) {
                  _L___8:  
                  if (! ((unsigned long )((void const   *)("-o" + 1)) - (unsigned long )((void const   *)"-o") == 1UL)) {
                    tmp___88 = 1;
                  } else {
                    if (__s2_len___3 >= 4UL) {
                      tmp___88 = 1;
                    } else {
                      tmp___88 = 0;
                    }
                  }
                } else {
                  tmp___88 = 0;
                }
              }
              if (tmp___88) {
                {
                tmp___80 = __dyc_funcallvar_18;
                }
              } else {
                {
                tmp___85 = __dyc_funcallvar_19;
                tmp___80 = tmp___85;
                }
              }
            } else {
              {
              tmp___85 = __dyc_funcallvar_20;
              tmp___80 = tmp___85;
              }
            }
            if (tmp___80 == 0) {
              i ++;
              output = (char const   *)*(argv + i);
              if ((unsigned long )output == (unsigned long )((void *)0)) {
                {

                }
              } else {
                if ((int const   )*output == 0) {
                  {

                  }
                }
              }
              if (0) {
                {
                tmp___14 = __dyc_funcallvar_21;
                __s1_len = (unsigned long )tmp___14;
                tmp___15 = __dyc_funcallvar_22;
                __s2_len = (unsigned long )tmp___15;
                }
                if (! ((unsigned long )((void const   *)(*(argv + i) + 1)) - (unsigned long )((void const   *)*(argv + i)) == 1UL)) {
                  goto _L___0;
                } else {
                  if (__s1_len >= 4UL) {
                    _L___0:  
                    if (! ((unsigned long )((void const   *)("-" + 1)) - (unsigned long )((void const   *)"-") == 1UL)) {
                      tmp___16 = 1;
                    } else {
                      if (__s2_len >= 4UL) {
                        tmp___16 = 1;
                      } else {
                        tmp___16 = 0;
                      }
                    }
                  } else {
                    tmp___16 = 0;
                  }
                }
                if (tmp___16) {
                  {
                  tmp___8 = __dyc_funcallvar_23;
                  }
                } else {
                  {
                  tmp___13 = __dyc_funcallvar_24;
                  tmp___8 = tmp___13;
                  }
                }
              } else {
                {
                tmp___13 = __dyc_funcallvar_25;
                tmp___8 = tmp___13;
                }
              }
              if (tmp___8 == 0) {
                output = (char const   *)((void *)0);
              }
            } else {
              if (0) {
                {
                tmp___68 = __dyc_funcallvar_26;
                __s1_len___2 = (unsigned long )tmp___68;
                tmp___69 = __dyc_funcallvar_27;
                __s2_len___2 = (unsigned long )tmp___69;
                }
                if (! ((unsigned long )((void const   *)(*(argv + i) + 1)) - (unsigned long )((void const   *)*(argv + i)) == 1UL)) {
                  goto _L___6;
                } else {
                  if (__s1_len___2 >= 4UL) {
                    _L___6:  
                    if (! ((unsigned long )((void const   *)("-p" + 1)) - (unsigned long )((void const   *)"-p") == 1UL)) {
                      tmp___70 = 1;
                    } else {
                      if (__s2_len___2 >= 4UL) {
                        tmp___70 = 1;
                      } else {
                        tmp___70 = 0;
                      }
                    }
                  } else {
                    tmp___70 = 0;
                  }
                }
                if (tmp___70) {
                  {
                  tmp___62 = __dyc_funcallvar_28;
                  }
                } else {
                  {
                  tmp___67 = __dyc_funcallvar_29;
                  tmp___62 = tmp___67;
                  }
                }
              } else {
                {
                tmp___67 = __dyc_funcallvar_30;
                tmp___62 = tmp___67;
                }
              }
              if (tmp___62 == 0) {
                dumping = 0;
              } else {
                if (0) {
                  {
                  tmp___50 = __dyc_funcallvar_31;
                  __s1_len___1 = (unsigned long )tmp___50;
                  tmp___51 = __dyc_funcallvar_32;
                  __s2_len___1 = (unsigned long )tmp___51;
                  }
                  if (! ((unsigned long )((void const   *)(*(argv + i) + 1)) - (unsigned long )((void const   *)*(argv + i)) == 1UL)) {
                    goto _L___4;
                  } else {
                    if (__s1_len___1 >= 4UL) {
                      _L___4:  
                      if (! ((unsigned long )((void const   *)("-s" + 1)) - (unsigned long )((void const   *)"-s") == 1UL)) {
                        tmp___52 = 1;
                      } else {
                        if (__s2_len___1 >= 4UL) {
                          tmp___52 = 1;
                        } else {
                          tmp___52 = 0;
                        }
                      }
                    } else {
                      tmp___52 = 0;
                    }
                  }
                  if (tmp___52) {
                    {
                    tmp___44 = __dyc_funcallvar_33;
                    }
                  } else {
                    {
                    tmp___49 = __dyc_funcallvar_34;
                    tmp___44 = tmp___49;
                    }
                  }
                } else {
                  {
                  tmp___49 = __dyc_funcallvar_35;
                  tmp___44 = tmp___49;
                  }
                }
                if (tmp___44 == 0) {
                  stripping = 1;
                } else {
                  if (0) {
                    {
                    tmp___32 = __dyc_funcallvar_36;
                    __s1_len___0 = (unsigned long )tmp___32;
                    tmp___33 = __dyc_funcallvar_37;
                    __s2_len___0 = (unsigned long )tmp___33;
                    }
                    if (! ((unsigned long )((void const   *)(*(argv + i) + 1)) - (unsigned long )((void const   *)*(argv + i)) == 1UL)) {
                      goto _L___2;
                    } else {
                      if (__s1_len___0 >= 4UL) {
                        _L___2:  
                        if (! ((unsigned long )((void const   *)("-v" + 1)) - (unsigned long )((void const   *)"-v") == 1UL)) {
                          tmp___34 = 1;
                        } else {
                          if (__s2_len___0 >= 4UL) {
                            tmp___34 = 1;
                          } else {
                            tmp___34 = 0;
                          }
                        }
                      } else {
                        tmp___34 = 0;
                      }
                    }
                    if (tmp___34) {
                      {
                      tmp___26 = __dyc_funcallvar_38;
                      }
                    } else {
                      {
                      tmp___31 = __dyc_funcallvar_39;
                      tmp___26 = tmp___31;
                      }
                    }
                  } else {
                    {
                    tmp___31 = __dyc_funcallvar_40;
                    tmp___26 = tmp___31;
                    }
                  }
                  if (tmp___26 == 0) {
                    version ++;
                  } else {
                    {

                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    i ++;
  }
  __dyc_dummy_label:  ;
  __dyc_printpre_byte(listing);
  __dyc_printpre_byte(dumping);
  __dyc_printpre_byte(stripping);
  __dyc_print_ptr__char(output);
  __dyc_print_ptr__char(progname);
  __dyc_printpre_byte(i);
  __dyc_printpre_byte(version);
  __dyc_printpre_byte(__s1_len);
  __dyc_printpre_byte(__s2_len);
  __dyc_printpre_byte(__s1_len___0);
  __dyc_printpre_byte(__s2_len___0);
  __dyc_printpre_byte(__s1_len___1);
  __dyc_printpre_byte(__s2_len___1);
  __dyc_printpre_byte(__s1_len___2);
  __dyc_printpre_byte(__s2_len___2);
  __dyc_printpre_byte(__s1_len___3);
  __dyc_printpre_byte(__s2_len___3);
  __dyc_printpre_byte(__s1_len___4);
  __dyc_printpre_byte(__s2_len___4);
  __dyc_printpre_byte(__s1_len___5);
  __dyc_printpre_byte(__s2_len___5);
  __dyc_printpre_byte(__s1_len___6);
  __dyc_printpre_byte(__s2_len___6);
}
}
