#include "../../include/dycfoo.h"
#include "../../include/cp-demangle.i.hd.c.h"
void __dyc_foo(void) 
{ struct demangle_component *ret ;
  int can_subst ;
  char peek_next ;
  struct demangle_component *tmp___5 ;
  struct demangle_component *tmp___6 ;
  struct demangle_component *tmp___7 ;
  struct demangle_component *tmp___8 ;
  struct d_info *di ;
  struct demangle_component *__dyc_funcallvar_20 ;
  struct demangle_component *__dyc_funcallvar_21 ;
  struct demangle_component *__dyc_funcallvar_22 ;
  struct demangle_component *__dyc_funcallvar_23 ;
  struct demangle_component *__dyc_funcallvar_24 ;
  struct demangle_component *__dyc_funcallvar_25 ;
  struct demangle_component *__dyc_funcallvar_26 ;
  struct demangle_component *__dyc_funcallvar_27 ;
  struct demangle_component *__dyc_funcallvar_28 ;
  struct demangle_component *__dyc_funcallvar_29 ;

  {
  peek_next = (char )__dyc_readpre_byte();
  di = __dyc_read_ptr__comp_60d_info();
  __dyc_funcallvar_20 = __dyc_read_ptr__comp_46demangle_component();
  __dyc_funcallvar_21 = __dyc_read_ptr__comp_46demangle_component();
  __dyc_funcallvar_22 = __dyc_read_ptr__comp_46demangle_component();
  __dyc_funcallvar_23 = __dyc_read_ptr__comp_46demangle_component();
  __dyc_funcallvar_24 = __dyc_read_ptr__comp_46demangle_component();
  __dyc_funcallvar_25 = __dyc_read_ptr__comp_46demangle_component();
  __dyc_funcallvar_26 = __dyc_read_ptr__comp_46demangle_component();
  __dyc_funcallvar_27 = __dyc_read_ptr__comp_46demangle_component();
  __dyc_funcallvar_28 = __dyc_read_ptr__comp_46demangle_component();
  __dyc_funcallvar_29 = __dyc_read_ptr__comp_46demangle_component();
  ret = 0;
  can_subst = 0;
  tmp___5 = 0;
  tmp___6 = 0;
  tmp___7 = 0;
  tmp___8 = 0;
  if ((int )peek_next >= 48) {
    if ((int )peek_next <= 57) {
      goto _L;
    } else {
      goto _L___1;
    }
  } else {
    _L___1:  
    if ((int )peek_next == 95) {
      goto _L;
    } else {
      if ((int )peek_next >= 65) {
        if ((int )peek_next <= 90) {
          _L:  
          {
          ret = __dyc_funcallvar_20;
          }
          if ((int const   )*(di->n) == 73) {
            {
            tmp___5 = __dyc_funcallvar_21;
            ret = __dyc_funcallvar_22;
            }
          } else {
            can_subst = 0;
          }
        } else {
          goto _L___0;
        }
      } else {
        _L___0:  
        {
        ret = __dyc_funcallvar_23;
        }
        if ((unsigned long )ret != (unsigned long )((void *)0)) {
          if ((int )ret->type == 24) {
            can_subst = 0;
          }
        }
      }
    }
  }
  goto __dyc_dummy_label;
  (di->n) ++;
  tmp___6 = __dyc_funcallvar_24;
  ret = __dyc_funcallvar_25;
  goto __dyc_dummy_label;
  (di->n) ++;
  tmp___7 = __dyc_funcallvar_26;
  ret = __dyc_funcallvar_27;
  goto __dyc_dummy_label;
  (di->n) ++;
  tmp___8 = __dyc_funcallvar_28;
  ret = __dyc_funcallvar_29;
  goto __dyc_dummy_label;
  __dyc_dummy_label:  ;
  __dyc_print_ptr__comp_46demangle_component(ret);
  __dyc_printpre_byte(can_subst);
  __dyc_print_ptr__comp_46demangle_component(tmp___5);
  __dyc_print_ptr__comp_46demangle_component(tmp___6);
  __dyc_print_ptr__comp_46demangle_component(tmp___7);
  __dyc_print_ptr__comp_46demangle_component(tmp___8);
}
}
