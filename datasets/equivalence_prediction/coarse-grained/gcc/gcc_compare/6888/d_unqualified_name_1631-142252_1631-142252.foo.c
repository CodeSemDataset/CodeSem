#include "../../include/dycfoo.h"
#include "../../include/cp-demangle.i.hd.c.h"
void __dyc_foo(void) 
{ struct demangle_component *ret ;
  char peek ;
  struct demangle_component *tmp ;
  size_t __s1_len ;
  size_t __s2_len ;
  int tmp___9 ;
  int tmp___14 ;
  int tmp___15 ;
  int tmp___16 ;
  int tmp___17 ;
  int tmp___18 ;
  struct d_info *di ;
  struct demangle_component *__dyc_funcallvar_1 ;
  struct demangle_component *__dyc_funcallvar_2 ;
  int __dyc_funcallvar_3 ;
  int __dyc_funcallvar_4 ;
  int __dyc_funcallvar_5 ;
  int __dyc_funcallvar_6 ;
  int __dyc_funcallvar_7 ;
  struct demangle_component *__dyc_funcallvar_8 ;
  struct demangle_component *__dyc_funcallvar_9 ;
  struct demangle_component *__dyc_funcallvar_10 ;
  struct demangle_component *__dyc_funcallvar_11 ;
  struct demangle_component *__dyc_funcallvar_12 ;
  int __dyc_funcallvar_13 ;
  struct demangle_component *__dyc_funcallvar_14 ;
  struct demangle_component *__dyc_funcallvar_15 ;

  {
  peek = (char )__dyc_readpre_byte();
  di = __dyc_read_ptr__comp_60d_info();
  __dyc_funcallvar_1 = __dyc_read_ptr__comp_46demangle_component();
  __dyc_funcallvar_2 = __dyc_read_ptr__comp_46demangle_component();
  __dyc_funcallvar_3 = __dyc_readpre_byte();
  __dyc_funcallvar_4 = __dyc_readpre_byte();
  __dyc_funcallvar_5 = __dyc_readpre_byte();
  __dyc_funcallvar_6 = __dyc_readpre_byte();
  __dyc_funcallvar_7 = __dyc_readpre_byte();
  __dyc_funcallvar_8 = __dyc_read_ptr__comp_46demangle_component();
  __dyc_funcallvar_9 = __dyc_read_ptr__comp_46demangle_component();
  __dyc_funcallvar_10 = __dyc_read_ptr__comp_46demangle_component();
  __dyc_funcallvar_11 = __dyc_read_ptr__comp_46demangle_component();
  __dyc_funcallvar_12 = __dyc_read_ptr__comp_46demangle_component();
  __dyc_funcallvar_13 = __dyc_readpre_byte();
  __dyc_funcallvar_14 = __dyc_read_ptr__comp_46demangle_component();
  __dyc_funcallvar_15 = __dyc_read_ptr__comp_46demangle_component();
  ret = 0;
  tmp = 0;
  __s1_len = 0;
  __s2_len = 0;
  tmp___9 = 0;
  tmp___14 = 0;
  tmp___15 = 0;
  tmp___16 = 0;
  tmp___17 = 0;
  tmp___18 = 0;
  if ((int )peek >= 48) {
    if ((int )peek <= 57) {
      {
      ret = __dyc_funcallvar_1;
      }
    } else {
      goto _L___2;
    }
  } else {
    _L___2:  
    if ((int )peek >= 97) {
      if ((int )peek <= 122) {
        if ((int )peek == 111) {
          if ((int const   )*(di->n + 1) == 110) {
            di->n += 2;
          }
        }
        {
        ret = __dyc_funcallvar_2;
        }
        if ((unsigned long )ret != (unsigned long )((void *)0)) {
          if ((int )ret->type == 50) {
            di->expansion = (int )((unsigned long )di->expansion + ((sizeof("operator") + (unsigned long )(ret->u.s_operator.op)->len) - 2UL));
            if (0) {
              {
              tmp___15 = __dyc_funcallvar_3;
              __s1_len = (unsigned long )tmp___15;
              tmp___16 = __dyc_funcallvar_4;
              __s2_len = (unsigned long )tmp___16;
              }
              if (! ((unsigned long )((void const   *)((ret->u.s_operator.op)->code + 1)) - (unsigned long )((void const   *)(ret->u.s_operator.op)->code) == 1UL)) {
                goto _L___0;
              } else {
                if (__s1_len >= 4UL) {
                  _L___0:  
                  if (! ((unsigned long )((void const   *)("li" + 1)) - (unsigned long )((void const   *)"li") == 1UL)) {
                    tmp___17 = 1;
                  } else {
                    if (__s2_len >= 4UL) {
                      tmp___17 = 1;
                    } else {
                      tmp___17 = 0;
                    }
                  }
                } else {
                  tmp___17 = 0;
                }
              }
              if (tmp___17) {
                {
                tmp___9 = __dyc_funcallvar_5;
                }
              } else {
                {
                tmp___14 = __dyc_funcallvar_6;
                tmp___9 = tmp___14;
                }
              }
            } else {
              {
              tmp___14 = __dyc_funcallvar_7;
              tmp___9 = tmp___14;
              }
            }
            if (! tmp___9) {
              {
              tmp = __dyc_funcallvar_8;
              ret = __dyc_funcallvar_9;
              }
            }
          }
        }
      } else {
        goto _L___1;
      }
    } else {
      _L___1:  
      if ((int )peek == 67) {
        {
        ret = __dyc_funcallvar_10;
        }
      } else {
        if ((int )peek == 68) {
          {
          ret = __dyc_funcallvar_11;
          }
        } else {
          if ((int )peek == 76) {
            {
            (di->n) ++;
            ret = __dyc_funcallvar_12;
            }
            if ((unsigned long )ret == (unsigned long )((void *)0)) {
              goto __dyc_dummy_label;
            }
            {
            tmp___18 = __dyc_funcallvar_13;
            }
            if (! tmp___18) {
              goto __dyc_dummy_label;
            }
          } else {
            if ((int )peek == 85) {
              if ((int )*(di->n + 1) == 108) {
                goto switch_10_108;
              } else {
                if ((int )*(di->n + 1) == 116) {
                  goto switch_10_116;
                } else {
                  {
                  goto switch_10_default;
                  if (0) {
                    switch_10_108:  
                    {
                    ret = __dyc_funcallvar_14;
                    }
                    goto switch_10_break;
                    switch_10_116:  
                    {
                    ret = __dyc_funcallvar_15;
                    }
                    goto switch_10_break;
                    switch_10_default:  ;
                    goto __dyc_dummy_label;
                  } else {
                    switch_10_break:  ;
                  }
                  }
                }
              }
            } else {
              goto __dyc_dummy_label;
            }
          }
        }
      }
    }
  }
  __dyc_dummy_label:  ;
  __dyc_print_ptr__comp_46demangle_component(ret);
  __dyc_print_ptr__comp_46demangle_component(tmp);
  __dyc_printpre_byte(__s1_len);
  __dyc_printpre_byte(__s2_len);
}
}
