#include "../../include/dycfoo.h"
#include "../../include/cp-demangle.i.hd.c.h"
void __dyc_foo(void) 
{ struct demangle_builtin_type_info  const  cplus_demangle_builtin_types[34] ;
  struct demangle_component *ret ;
  struct demangle_component *type ;
  enum demangle_component_type t ;
  char const   *s ;
  size_t __s1_len ;
  size_t __s2_len ;
  int tmp___9 ;
  int tmp___14 ;
  int tmp___15 ;
  int tmp___16 ;
  int tmp___17 ;
  struct demangle_component *tmp___18 ;
  struct d_info *di ;
  struct demangle_component *__dyc_funcallvar_1 ;
  struct demangle_component *__dyc_funcallvar_2 ;
  struct demangle_component *__dyc_funcallvar_3 ;
  int __dyc_funcallvar_4 ;
  int __dyc_funcallvar_5 ;
  int __dyc_funcallvar_6 ;
  int __dyc_funcallvar_7 ;
  int __dyc_funcallvar_8 ;
  struct demangle_component *__dyc_funcallvar_9 ;
  struct demangle_component *__dyc_funcallvar_10 ;

  {
  di = __dyc_read_ptr__comp_60d_info();
  __dyc_funcallvar_1 = __dyc_read_ptr__comp_46demangle_component();
  __dyc_funcallvar_2 = __dyc_read_ptr__comp_46demangle_component();
  __dyc_funcallvar_3 = __dyc_read_ptr__comp_46demangle_component();
  __dyc_funcallvar_4 = __dyc_readpre_byte();
  __dyc_funcallvar_5 = __dyc_readpre_byte();
  __dyc_funcallvar_6 = __dyc_readpre_byte();
  __dyc_funcallvar_7 = __dyc_readpre_byte();
  __dyc_funcallvar_8 = __dyc_readpre_byte();
  __dyc_funcallvar_9 = __dyc_read_ptr__comp_46demangle_component();
  __dyc_funcallvar_10 = __dyc_read_ptr__comp_46demangle_component();
  ret = 0;
  type = 0;
  t = 0;
  s = 0;
  __s1_len = 0;
  __s2_len = 0;
  tmp___9 = 0;
  tmp___14 = 0;
  tmp___15 = 0;
  tmp___16 = 0;
  tmp___17 = 0;
  tmp___18 = 0;
  ret = __dyc_funcallvar_1;
  if ((int const   )*(di->n) == 90) {
    {
    ret = __dyc_funcallvar_2;
    }
  } else {
    {
    type = __dyc_funcallvar_3;
    }
    if ((unsigned long )type == (unsigned long )((void *)0)) {
      goto __dyc_dummy_label;
    }
    if ((int )type->type == 39) {
      if ((int const   )(type->u.s_builtin.type)->print != 0) {
        di->expansion -= (int )(type->u.s_builtin.type)->len;
      }
    }
    if ((int )type->type == 39) {
      if (0) {
        {
        tmp___15 = __dyc_funcallvar_4;
        __s1_len = (unsigned long )tmp___15;
        tmp___16 = __dyc_funcallvar_5;
        __s2_len = (unsigned long )tmp___16;
        }
        if (! ((unsigned long )((void const   *)((type->u.s_builtin.type)->name + 1)) - (unsigned long )((void const   *)(type->u.s_builtin.type)->name) == 1UL)) {
          goto _L___0;
        } else {
          if (__s1_len >= 4UL) {
            _L___0:  
            if (! ((unsigned long )((void const   *)(cplus_demangle_builtin_types[33].name + 1)) - (unsigned long )((void const   *)cplus_demangle_builtin_types[33].name) == 1UL)) {
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
          tmp___9 = __dyc_funcallvar_6;
          }
        } else {
          {
          tmp___14 = __dyc_funcallvar_7;
          tmp___9 = tmp___14;
          }
        }
      } else {
        {
        tmp___14 = __dyc_funcallvar_8;
        tmp___9 = tmp___14;
        }
      }
      if (tmp___9 == 0) {
        if ((int const   )*(di->n) == 69) {
          (di->n) ++;
          goto __dyc_dummy_label;
        }
      }
    }
    t = 61;
    if ((int const   )*(di->n) == 110) {
      t = 62;
      (di->n) ++;
    }
    s = di->n;
    {
    while (1) {
      while_34_continue:  ;
      if (! ((int const   )*(di->n) != 69)) {
        goto while_34_break;
      }
      if ((int const   )*(di->n) == 0) {
        goto __dyc_dummy_label;
      }
      (di->n) ++;
    }
    while_34_break:  ;
    }
    {
    tmp___18 = __dyc_funcallvar_9;
    ret = __dyc_funcallvar_10;
    }
  }
  __dyc_dummy_label:  ;
  __dyc_print_ptr__comp_46demangle_component(ret);
  __dyc_printpre_byte(t);
  __dyc_print_ptr__char(s);
  __dyc_printpre_byte(__s1_len);
  __dyc_printpre_byte(__s2_len);
  __dyc_print_ptr__comp_46demangle_component(tmp___18);
}
}
