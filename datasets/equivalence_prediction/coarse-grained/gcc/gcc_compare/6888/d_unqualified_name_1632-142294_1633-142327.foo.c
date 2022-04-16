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
  ret = 0;
  tmp = 0;
  __s1_len = 0;
  __s2_len = 0;
  tmp___9 = 0;
  tmp___14 = 0;
  tmp___15 = 0;
  tmp___16 = 0;
  tmp___17 = 0;
  ret = __dyc_funcallvar_1;
  goto __dyc_dummy_label;
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
  }
  __dyc_dummy_label:  ;
  __dyc_print_ptr__comp_46demangle_component(ret);
  __dyc_print_ptr__comp_46demangle_component(tmp);
  __dyc_printpre_byte(__s1_len);
  __dyc_printpre_byte(__s2_len);
}
}
