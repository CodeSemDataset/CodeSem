#include "../../include/dycfoo.h"
#include "../../include/cp-demangle.i.hd.c.h"
void __dyc_foo(void) 
{ struct demangle_component *op ;
  char const   *code ;
  int args ;
  struct demangle_component *tmp___12 ;
  struct demangle_component *tmp___13 ;
  size_t __s1_len ;
  size_t __s2_len ;
  int tmp___23 ;
  int tmp___28 ;
  int tmp___29 ;
  int tmp___30 ;
  int tmp___31 ;
  struct demangle_component *tmp___32 ;
  struct demangle_component *operand ;
  int suffix ;
  int tmp___33 ;
  int tmp___34 ;
  size_t __s1_len___0 ;
  size_t __s2_len___0 ;
  int tmp___44 ;
  int tmp___49 ;
  int tmp___50 ;
  int tmp___51 ;
  int tmp___52 ;
  int tmp___53 ;
  struct demangle_component *tmp___54 ;
  struct demangle_component *left ;
  struct demangle_component *right ;
  int tmp___55 ;
  struct demangle_component *tmp___56 ;
  size_t __s1_len___1 ;
  size_t __s2_len___1 ;
  int tmp___66 ;
  int tmp___71 ;
  int tmp___72 ;
  int tmp___73 ;
  int tmp___74 ;
  size_t __s1_len___2 ;
  size_t __s2_len___2 ;
  int tmp___84 ;
  int tmp___89 ;
  int tmp___90 ;
  int tmp___91 ;
  int tmp___92 ;
  size_t __s1_len___3 ;
  size_t __s2_len___3 ;
  int tmp___102 ;
  int tmp___107 ;
  int tmp___108 ;
  int tmp___109 ;
  int tmp___110 ;
  struct demangle_component *tmp___111 ;
  struct demangle_component *tmp___112 ;
  struct demangle_component *first ;
  struct demangle_component *second ;
  struct demangle_component *third ;
  size_t __s1_len___4 ;
  size_t __s2_len___4 ;
  int tmp___122 ;
  int tmp___127 ;
  int tmp___128 ;
  int tmp___129 ;
  int tmp___130 ;
  struct demangle_component *tmp___131 ;
  struct demangle_component *tmp___132 ;
  struct demangle_component *tmp___133 ;
  struct d_info *di ;
  int __dyc_funcallvar_20 ;
  int __dyc_funcallvar_21 ;
  int __dyc_funcallvar_22 ;
  int __dyc_funcallvar_23 ;
  int __dyc_funcallvar_24 ;
  struct demangle_component *__dyc_funcallvar_25 ;
  struct demangle_component *__dyc_funcallvar_26 ;
  struct demangle_component *__dyc_funcallvar_27 ;
  struct demangle_component *__dyc_funcallvar_28 ;
  int __dyc_funcallvar_29 ;
  int __dyc_funcallvar_30 ;
  int __dyc_funcallvar_31 ;
  int __dyc_funcallvar_32 ;
  int __dyc_funcallvar_33 ;
  struct demangle_component *__dyc_funcallvar_34 ;
  struct demangle_component *__dyc_funcallvar_35 ;
  struct demangle_component *__dyc_funcallvar_36 ;
  struct demangle_component *__dyc_funcallvar_37 ;
  struct demangle_component *__dyc_funcallvar_38 ;
  int __dyc_funcallvar_39 ;
  struct demangle_component *__dyc_funcallvar_40 ;
  struct demangle_component *__dyc_funcallvar_41 ;
  struct demangle_component *__dyc_funcallvar_42 ;
  int __dyc_funcallvar_43 ;
  int __dyc_funcallvar_44 ;
  int __dyc_funcallvar_45 ;
  int __dyc_funcallvar_46 ;
  int __dyc_funcallvar_47 ;
  int __dyc_funcallvar_48 ;
  int __dyc_funcallvar_49 ;
  int __dyc_funcallvar_50 ;
  int __dyc_funcallvar_51 ;
  int __dyc_funcallvar_52 ;
  int __dyc_funcallvar_53 ;
  int __dyc_funcallvar_54 ;
  int __dyc_funcallvar_55 ;
  int __dyc_funcallvar_56 ;
  int __dyc_funcallvar_57 ;
  struct demangle_component *__dyc_funcallvar_58 ;
  struct demangle_component *__dyc_funcallvar_59 ;
  struct demangle_component *__dyc_funcallvar_60 ;
  struct demangle_component *__dyc_funcallvar_61 ;
  struct demangle_component *__dyc_funcallvar_62 ;
  struct demangle_component *__dyc_funcallvar_63 ;
  struct demangle_component *__dyc_funcallvar_64 ;
  int __dyc_funcallvar_65 ;
  int __dyc_funcallvar_66 ;
  int __dyc_funcallvar_67 ;
  int __dyc_funcallvar_68 ;
  int __dyc_funcallvar_69 ;
  struct demangle_component *__dyc_funcallvar_70 ;
  struct demangle_component *__dyc_funcallvar_71 ;
  struct demangle_component *__dyc_funcallvar_72 ;
  struct demangle_component *__dyc_funcallvar_73 ;
  struct demangle_component *__dyc_funcallvar_74 ;
  struct demangle_component *__dyc_funcallvar_75 ;
  struct demangle_component *__dyc_funcallvar_76 ;
  struct demangle_component *__dyc_funcallvar_77 ;
  struct demangle_component *__dyc_funcallvar_78 ;
  struct demangle_component *__dyc_funcallvar_79 ;
  struct demangle_component *__dyc_funcallvar_80 ;
  struct demangle_component *__dyc_funcallvar_81 ;
  struct demangle_component *__dyc_funcallvar_82 ;

  {
  op = __dyc_read_ptr__comp_46demangle_component();
  code = (char const   *)__dyc_read_ptr__char();
  di = __dyc_read_ptr__comp_60d_info();
  __dyc_funcallvar_20 = __dyc_readpre_byte();
  __dyc_funcallvar_21 = __dyc_readpre_byte();
  __dyc_funcallvar_22 = __dyc_readpre_byte();
  __dyc_funcallvar_23 = __dyc_readpre_byte();
  __dyc_funcallvar_24 = __dyc_readpre_byte();
  __dyc_funcallvar_25 = __dyc_read_ptr__comp_46demangle_component();
  __dyc_funcallvar_26 = __dyc_read_ptr__comp_46demangle_component();
  __dyc_funcallvar_27 = __dyc_read_ptr__comp_46demangle_component();
  __dyc_funcallvar_28 = __dyc_read_ptr__comp_46demangle_component();
  __dyc_funcallvar_29 = __dyc_readpre_byte();
  __dyc_funcallvar_30 = __dyc_readpre_byte();
  __dyc_funcallvar_31 = __dyc_readpre_byte();
  __dyc_funcallvar_32 = __dyc_readpre_byte();
  __dyc_funcallvar_33 = __dyc_readpre_byte();
  __dyc_funcallvar_34 = __dyc_read_ptr__comp_46demangle_component();
  __dyc_funcallvar_35 = __dyc_read_ptr__comp_46demangle_component();
  __dyc_funcallvar_36 = __dyc_read_ptr__comp_46demangle_component();
  __dyc_funcallvar_37 = __dyc_read_ptr__comp_46demangle_component();
  __dyc_funcallvar_38 = __dyc_read_ptr__comp_46demangle_component();
  __dyc_funcallvar_39 = __dyc_readpre_byte();
  __dyc_funcallvar_40 = __dyc_read_ptr__comp_46demangle_component();
  __dyc_funcallvar_41 = __dyc_read_ptr__comp_46demangle_component();
  __dyc_funcallvar_42 = __dyc_read_ptr__comp_46demangle_component();
  __dyc_funcallvar_43 = __dyc_readpre_byte();
  __dyc_funcallvar_44 = __dyc_readpre_byte();
  __dyc_funcallvar_45 = __dyc_readpre_byte();
  __dyc_funcallvar_46 = __dyc_readpre_byte();
  __dyc_funcallvar_47 = __dyc_readpre_byte();
  __dyc_funcallvar_48 = __dyc_readpre_byte();
  __dyc_funcallvar_49 = __dyc_readpre_byte();
  __dyc_funcallvar_50 = __dyc_readpre_byte();
  __dyc_funcallvar_51 = __dyc_readpre_byte();
  __dyc_funcallvar_52 = __dyc_readpre_byte();
  __dyc_funcallvar_53 = __dyc_readpre_byte();
  __dyc_funcallvar_54 = __dyc_readpre_byte();
  __dyc_funcallvar_55 = __dyc_readpre_byte();
  __dyc_funcallvar_56 = __dyc_readpre_byte();
  __dyc_funcallvar_57 = __dyc_readpre_byte();
  __dyc_funcallvar_58 = __dyc_read_ptr__comp_46demangle_component();
  __dyc_funcallvar_59 = __dyc_read_ptr__comp_46demangle_component();
  __dyc_funcallvar_60 = __dyc_read_ptr__comp_46demangle_component();
  __dyc_funcallvar_61 = __dyc_read_ptr__comp_46demangle_component();
  __dyc_funcallvar_62 = __dyc_read_ptr__comp_46demangle_component();
  __dyc_funcallvar_63 = __dyc_read_ptr__comp_46demangle_component();
  __dyc_funcallvar_64 = __dyc_read_ptr__comp_46demangle_component();
  __dyc_funcallvar_65 = __dyc_readpre_byte();
  __dyc_funcallvar_66 = __dyc_readpre_byte();
  __dyc_funcallvar_67 = __dyc_readpre_byte();
  __dyc_funcallvar_68 = __dyc_readpre_byte();
  __dyc_funcallvar_69 = __dyc_readpre_byte();
  __dyc_funcallvar_70 = __dyc_read_ptr__comp_46demangle_component();
  __dyc_funcallvar_71 = __dyc_read_ptr__comp_46demangle_component();
  __dyc_funcallvar_72 = __dyc_read_ptr__comp_46demangle_component();
  __dyc_funcallvar_73 = __dyc_read_ptr__comp_46demangle_component();
  __dyc_funcallvar_74 = __dyc_read_ptr__comp_46demangle_component();
  __dyc_funcallvar_75 = __dyc_read_ptr__comp_46demangle_component();
  __dyc_funcallvar_76 = __dyc_read_ptr__comp_46demangle_component();
  __dyc_funcallvar_77 = __dyc_read_ptr__comp_46demangle_component();
  __dyc_funcallvar_78 = __dyc_read_ptr__comp_46demangle_component();
  __dyc_funcallvar_79 = __dyc_read_ptr__comp_46demangle_component();
  __dyc_funcallvar_80 = __dyc_read_ptr__comp_46demangle_component();
  __dyc_funcallvar_81 = __dyc_read_ptr__comp_46demangle_component();
  __dyc_funcallvar_82 = __dyc_read_ptr__comp_46demangle_component();
  args = 0;
  tmp___12 = 0;
  tmp___13 = 0;
  __s1_len = 0;
  __s2_len = 0;
  tmp___23 = 0;
  tmp___28 = 0;
  tmp___29 = 0;
  tmp___30 = 0;
  tmp___31 = 0;
  tmp___32 = 0;
  operand = 0;
  suffix = 0;
  tmp___33 = 0;
  tmp___34 = 0;
  __s1_len___0 = 0;
  __s2_len___0 = 0;
  tmp___44 = 0;
  tmp___49 = 0;
  tmp___50 = 0;
  tmp___51 = 0;
  tmp___52 = 0;
  tmp___53 = 0;
  tmp___54 = 0;
  left = 0;
  right = 0;
  tmp___55 = 0;
  tmp___56 = 0;
  __s1_len___1 = 0;
  __s2_len___1 = 0;
  tmp___66 = 0;
  tmp___71 = 0;
  tmp___72 = 0;
  tmp___73 = 0;
  tmp___74 = 0;
  __s1_len___2 = 0;
  __s2_len___2 = 0;
  tmp___84 = 0;
  tmp___89 = 0;
  tmp___90 = 0;
  tmp___91 = 0;
  tmp___92 = 0;
  __s1_len___3 = 0;
  __s2_len___3 = 0;
  tmp___102 = 0;
  tmp___107 = 0;
  tmp___108 = 0;
  tmp___109 = 0;
  tmp___110 = 0;
  tmp___111 = 0;
  tmp___112 = 0;
  first = 0;
  second = 0;
  third = 0;
  __s1_len___4 = 0;
  __s2_len___4 = 0;
  tmp___122 = 0;
  tmp___127 = 0;
  tmp___128 = 0;
  tmp___129 = 0;
  tmp___130 = 0;
  tmp___131 = 0;
  tmp___132 = 0;
  tmp___133 = 0;
  if ((unsigned long )op == (unsigned long )((void *)0)) {
    goto __dyc_dummy_label;
  }
  if ((int )op->type == 50) {
    code = (char const   *)(op->u.s_operator.op)->code;
    di->expansion += (int )((op->u.s_operator.op)->len - 2);
    if (0) {
      {
      tmp___29 = __dyc_funcallvar_20;
      __s1_len = (unsigned long )tmp___29;
      tmp___30 = __dyc_funcallvar_21;
      __s2_len = (unsigned long )tmp___30;
      }
      if (! ((unsigned long )((void const   *)(code + 1)) - (unsigned long )((void const   *)code) == 1UL)) {
        goto _L___0;
      } else {
        if (__s1_len >= 4UL) {
          _L___0:  
          if (! ((unsigned long )((void const   *)("st" + 1)) - (unsigned long )((void const   *)"st") == 1UL)) {
            tmp___31 = 1;
          } else {
            if (__s2_len >= 4UL) {
              tmp___31 = 1;
            } else {
              tmp___31 = 0;
            }
          }
        } else {
          tmp___31 = 0;
        }
      }
      if (tmp___31) {
        {
        tmp___23 = __dyc_funcallvar_22;
        }
      } else {
        {
        tmp___28 = __dyc_funcallvar_23;
        tmp___23 = tmp___28;
        }
      }
    } else {
      {
      tmp___28 = __dyc_funcallvar_24;
      tmp___23 = tmp___28;
      }
    }
    if (tmp___23 == 0) {
      {
      tmp___12 = __dyc_funcallvar_25;
      tmp___13 = __dyc_funcallvar_26;
      }
      goto __dyc_dummy_label;
    }
  }
  if ((int )op->type == 50) {
    goto switch_32_50;
  } else {
    if ((int )op->type == 51) {
      goto switch_32_51;
    } else {
      if ((int )op->type == 52) {
        goto switch_32_52;
      } else {
        {
        goto switch_32_default;
        if (0) {
          switch_32_default:  ;
          goto __dyc_dummy_label;
          switch_32_50:  
          args = (int )(op->u.s_operator.op)->args;
          goto switch_32_break;
          switch_32_51:  
          args = op->u.s_extended_operator.args;
          goto switch_32_break;
          switch_32_52:  
          args = 1;
          goto switch_32_break;
        } else {
          switch_32_break:  ;
        }
        }
      }
    }
  }
  if (args == 0) {
    goto switch_33_0;
  } else {
    if (args == 1) {
      goto switch_33_1;
    } else {
      if (args == 2) {
        goto switch_33_2;
      } else {
        if (args == 3) {
          goto switch_33_3;
        } else {
          {
          goto switch_33_default;
          if (0) {
            switch_33_0:  
            {
            tmp___32 = __dyc_funcallvar_27;
            }
            goto __dyc_dummy_label;
            switch_33_1:  
            suffix = 0;
            if (code) {
              if ((int const   )*(code + 0) == 112) {
                goto _L___1;
              } else {
                if ((int const   )*(code + 0) == 109) {
                  _L___1:  
                  if ((int const   )*(code + 1) == (int const   )*(code + 0)) {
                    if ((int const   )*(di->n) == 95) {
                      (di->n) ++;
                      tmp___33 = 1;
                    } else {
                      tmp___33 = 0;
                    }
                    if (tmp___33) {
                      tmp___34 = 0;
                    } else {
                      tmp___34 = 1;
                    }
                    suffix = tmp___34;
                  }
                }
              }
            }
            if ((int )op->type == 52) {
              if ((int const   )*(di->n) == 95) {
                (di->n) ++;
                tmp___53 = 1;
              } else {
                tmp___53 = 0;
              }
              if (tmp___53) {
                {
                operand = __dyc_funcallvar_28;
                }
              } else {
                goto _L___4;
              }
            } else {
              _L___4:  
              if (code) {
                if (0) {
                  {
                  tmp___50 = __dyc_funcallvar_29;
                  __s1_len___0 = (unsigned long )tmp___50;
                  tmp___51 = __dyc_funcallvar_30;
                  __s2_len___0 = (unsigned long )tmp___51;
                  }
                  if (! ((unsigned long )((void const   *)(code + 1)) - (unsigned long )((void const   *)code) == 1UL)) {
                    goto _L___3;
                  } else {
                    if (__s1_len___0 >= 4UL) {
                      _L___3:  
                      if (! ((unsigned long )((void const   *)("sP" + 1)) - (unsigned long )((void const   *)"sP") == 1UL)) {
                        tmp___52 = 1;
                      } else {
                        if (__s2_len___0 >= 4UL) {
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
                    tmp___44 = __dyc_funcallvar_31;
                    }
                  } else {
                    {
                    tmp___49 = __dyc_funcallvar_32;
                    tmp___44 = tmp___49;
                    }
                  }
                } else {
                  {
                  tmp___49 = __dyc_funcallvar_33;
                  tmp___44 = tmp___49;
                  }
                }
                if (tmp___44) {
                  {
                  operand = __dyc_funcallvar_34;
                  }
                } else {
                  {
                  operand = __dyc_funcallvar_35;
                  }
                }
              } else {
                {
                operand = __dyc_funcallvar_36;
                }
              }
            }
            if (suffix) {
              {
              operand = __dyc_funcallvar_37;
              }
            }
            {
            tmp___54 = __dyc_funcallvar_38;
            }
            goto __dyc_dummy_label;
            switch_33_2:  
            if ((unsigned long )code == (unsigned long )((void *)0)) {
              goto __dyc_dummy_label;
            }
            {
            tmp___55 = __dyc_funcallvar_39;
            }
            if (tmp___55) {
              {
              left = __dyc_funcallvar_40;
              }
            } else {
              if ((int const   )*(code + 0) == 102) {
                {
                left = __dyc_funcallvar_41;
                }
              } else {
                {
                left = __dyc_funcallvar_42;
                }
              }
            }
            if (0) {
              {
              tmp___108 = __dyc_funcallvar_43;
              __s1_len___3 = (unsigned long )tmp___108;
              tmp___109 = __dyc_funcallvar_44;
              __s2_len___3 = (unsigned long )tmp___109;
              }
              if (! ((unsigned long )((void const   *)(code + 1)) - (unsigned long )((void const   *)code) == 1UL)) {
                goto _L___11;
              } else {
                if (__s1_len___3 >= 4UL) {
                  _L___11:  
                  if (! ((unsigned long )((void const   *)("cl" + 1)) - (unsigned long )((void const   *)"cl") == 1UL)) {
                    tmp___110 = 1;
                  } else {
                    if (__s2_len___3 >= 4UL) {
                      tmp___110 = 1;
                    } else {
                      tmp___110 = 0;
                    }
                  }
                } else {
                  tmp___110 = 0;
                }
              }
              if (tmp___110) {
                {
                tmp___102 = __dyc_funcallvar_45;
                }
              } else {
                {
                tmp___107 = __dyc_funcallvar_46;
                tmp___102 = tmp___107;
                }
              }
            } else {
              {
              tmp___107 = __dyc_funcallvar_47;
              tmp___102 = tmp___107;
              }
            }
            if (tmp___102) {
              if (0) {
                {
                tmp___72 = __dyc_funcallvar_48;
                __s1_len___1 = (unsigned long )tmp___72;
                tmp___73 = __dyc_funcallvar_49;
                __s2_len___1 = (unsigned long )tmp___73;
                }
                if (! ((unsigned long )((void const   *)(code + 1)) - (unsigned long )((void const   *)code) == 1UL)) {
                  goto _L___6;
                } else {
                  if (__s1_len___1 >= 4UL) {
                    _L___6:  
                    if (! ((unsigned long )((void const   *)("dt" + 1)) - (unsigned long )((void const   *)"dt") == 1UL)) {
                      tmp___74 = 1;
                    } else {
                      if (__s2_len___1 >= 4UL) {
                        tmp___74 = 1;
                      } else {
                        tmp___74 = 0;
                      }
                    }
                  } else {
                    tmp___74 = 0;
                  }
                }
                if (tmp___74) {
                  {
                  tmp___66 = __dyc_funcallvar_50;
                  }
                } else {
                  {
                  tmp___71 = __dyc_funcallvar_51;
                  tmp___66 = tmp___71;
                  }
                }
              } else {
                {
                tmp___71 = __dyc_funcallvar_52;
                tmp___66 = tmp___71;
                }
              }
              if (tmp___66) {
                if (0) {
                  {
                  tmp___90 = __dyc_funcallvar_53;
                  __s1_len___2 = (unsigned long )tmp___90;
                  tmp___91 = __dyc_funcallvar_54;
                  __s2_len___2 = (unsigned long )tmp___91;
                  }
                  if (! ((unsigned long )((void const   *)(code + 1)) - (unsigned long )((void const   *)code) == 1UL)) {
                    goto _L___8;
                  } else {
                    if (__s1_len___2 >= 4UL) {
                      _L___8:  
                      if (! ((unsigned long )((void const   *)("pt" + 1)) - (unsigned long )((void const   *)"pt") == 1UL)) {
                        tmp___92 = 1;
                      } else {
                        if (__s2_len___2 >= 4UL) {
                          tmp___92 = 1;
                        } else {
                          tmp___92 = 0;
                        }
                      }
                    } else {
                      tmp___92 = 0;
                    }
                  }
                  if (tmp___92) {
                    {
                    tmp___84 = __dyc_funcallvar_55;
                    }
                  } else {
                    {
                    tmp___89 = __dyc_funcallvar_56;
                    tmp___84 = tmp___89;
                    }
                  }
                } else {
                  {
                  tmp___89 = __dyc_funcallvar_57;
                  tmp___84 = tmp___89;
                  }
                }
                if (tmp___84) {
                  {
                  right = __dyc_funcallvar_58;
                  }
                } else {
                  _L___9:  
                  {
                  right = __dyc_funcallvar_59;
                  }
                  if ((int const   )*(di->n) == 73) {
                    {
                    tmp___56 = __dyc_funcallvar_60;
                    right = __dyc_funcallvar_61;
                    }
                  }
                }
              } else {
                goto _L___9;
              }
            } else {
              {
              right = __dyc_funcallvar_62;
              }
            }
            {
            tmp___111 = __dyc_funcallvar_63;
            tmp___112 = __dyc_funcallvar_64;
            }
            goto __dyc_dummy_label;
            switch_33_3:  
            if ((unsigned long )code == (unsigned long )((void *)0)) {
              goto __dyc_dummy_label;
            } else {
              if (0) {
                {
                tmp___128 = __dyc_funcallvar_65;
                __s1_len___4 = (unsigned long )tmp___128;
                tmp___129 = __dyc_funcallvar_66;
                __s2_len___4 = (unsigned long )tmp___129;
                }
                if (! ((unsigned long )((void const   *)(code + 1)) - (unsigned long )((void const   *)code) == 1UL)) {
                  goto _L___14;
                } else {
                  if (__s1_len___4 >= 4UL) {
                    _L___14:  
                    if (! ((unsigned long )((void const   *)("qu" + 1)) - (unsigned long )((void const   *)"qu") == 1UL)) {
                      tmp___130 = 1;
                    } else {
                      if (__s2_len___4 >= 4UL) {
                        tmp___130 = 1;
                      } else {
                        tmp___130 = 0;
                      }
                    }
                  } else {
                    tmp___130 = 0;
                  }
                }
                if (tmp___130) {
                  {
                  tmp___122 = __dyc_funcallvar_67;
                  }
                } else {
                  {
                  tmp___127 = __dyc_funcallvar_68;
                  tmp___122 = tmp___127;
                  }
                }
              } else {
                {
                tmp___127 = __dyc_funcallvar_69;
                tmp___122 = tmp___127;
                }
              }
              if (tmp___122) {
                if ((int const   )*(code + 0) == 102) {
                  {
                  first = __dyc_funcallvar_70;
                  second = __dyc_funcallvar_71;
                  third = __dyc_funcallvar_72;
                  }
                  if ((unsigned long )third == (unsigned long )((void *)0)) {
                    goto __dyc_dummy_label;
                  }
                } else {
                  if ((int const   )*(code + 0) == 110) {
                    if ((int const   )*(code + 1) != 119) {
                      if ((int const   )*(code + 1) != 97) {
                        goto __dyc_dummy_label;
                      }
                    }
                    {
                    first = __dyc_funcallvar_73;
                    second = __dyc_funcallvar_74;
                    }
                    if ((int const   )*(di->n) == 69) {
                      (di->n) ++;
                      third = (struct demangle_component *)((void *)0);
                    } else {
                      if ((int const   )*(di->n) == 112) {
                        if ((int const   )*(di->n + 1) == 105) {
                          {
                          di->n += 2;
                          third = __dyc_funcallvar_75;
                          }
                        } else {
                          goto _L___12;
                        }
                      } else {
                        _L___12:  
                        if ((int const   )*(di->n) == 105) {
                          if ((int const   )*(di->n + 1) == 108) {
                            {
                            third = __dyc_funcallvar_76;
                            }
                          } else {
                            goto __dyc_dummy_label;
                          }
                        } else {
                          goto __dyc_dummy_label;
                        }
                      }
                    }
                  } else {
                    goto __dyc_dummy_label;
                  }
                }
              } else {
                {
                first = __dyc_funcallvar_77;
                second = __dyc_funcallvar_78;
                third = __dyc_funcallvar_79;
                }
                if ((unsigned long )third == (unsigned long )((void *)0)) {
                  goto __dyc_dummy_label;
                }
              }
            }
            {
            tmp___131 = __dyc_funcallvar_80;
            tmp___132 = __dyc_funcallvar_81;
            tmp___133 = __dyc_funcallvar_82;
            }
            goto __dyc_dummy_label;
            switch_33_default:  ;
            goto __dyc_dummy_label;
          } else {
            switch_33_break:  ;
          }
          }
        }
      }
    }
  }
  __dyc_dummy_label:  ;
  __dyc_print_ptr__char(code);
  __dyc_print_ptr__comp_46demangle_component(tmp___12);
  __dyc_print_ptr__comp_46demangle_component(tmp___13);
  __dyc_printpre_byte(__s1_len);
  __dyc_printpre_byte(__s2_len);
  __dyc_print_ptr__comp_46demangle_component(tmp___32);
  __dyc_print_ptr__comp_46demangle_component(operand);
  __dyc_printpre_byte(__s1_len___0);
  __dyc_printpre_byte(__s2_len___0);
  __dyc_print_ptr__comp_46demangle_component(tmp___54);
  __dyc_print_ptr__comp_46demangle_component(left);
  __dyc_print_ptr__comp_46demangle_component(right);
  __dyc_print_ptr__comp_46demangle_component(tmp___56);
  __dyc_printpre_byte(__s1_len___1);
  __dyc_printpre_byte(__s2_len___1);
  __dyc_printpre_byte(__s1_len___2);
  __dyc_printpre_byte(__s2_len___2);
  __dyc_printpre_byte(__s1_len___3);
  __dyc_printpre_byte(__s2_len___3);
  __dyc_print_ptr__comp_46demangle_component(tmp___111);
  __dyc_print_ptr__comp_46demangle_component(tmp___112);
  __dyc_print_ptr__comp_46demangle_component(first);
  __dyc_print_ptr__comp_46demangle_component(second);
  __dyc_print_ptr__comp_46demangle_component(third);
  __dyc_printpre_byte(__s1_len___4);
  __dyc_printpre_byte(__s2_len___4);
  __dyc_print_ptr__comp_46demangle_component(tmp___131);
  __dyc_print_ptr__comp_46demangle_component(tmp___132);
  __dyc_print_ptr__comp_46demangle_component(tmp___133);
}
}
