#include "../../include/dycfoo.h"
#include "../../include/cp-demangle.i.hd.c.h"
void __dyc_foo(void) 
{ struct demangle_component *ret ;
  int can_subst ;
  int tmp___17 ;
  char const   *tmp___18 ;
  struct demangle_component *tmp___19 ;
  struct d_info *di ;
  struct demangle_component *__dyc_funcallvar_41 ;
  struct demangle_component *__dyc_funcallvar_42 ;
  struct demangle_component *__dyc_funcallvar_43 ;
  struct demangle_component *__dyc_funcallvar_44 ;
  struct demangle_component *__dyc_funcallvar_45 ;
  struct demangle_component *__dyc_funcallvar_46 ;
  struct demangle_component *__dyc_funcallvar_47 ;
  struct demangle_component *__dyc_funcallvar_48 ;
  struct demangle_component *__dyc_funcallvar_49 ;
  struct demangle_component *__dyc_funcallvar_50 ;

  {
  ret = __dyc_read_ptr__comp_46demangle_component();
  di = __dyc_read_ptr__comp_60d_info();
  __dyc_funcallvar_41 = __dyc_read_ptr__comp_46demangle_component();
  __dyc_funcallvar_42 = __dyc_read_ptr__comp_46demangle_component();
  __dyc_funcallvar_43 = __dyc_read_ptr__comp_46demangle_component();
  __dyc_funcallvar_44 = __dyc_read_ptr__comp_46demangle_component();
  __dyc_funcallvar_45 = __dyc_read_ptr__comp_46demangle_component();
  __dyc_funcallvar_46 = __dyc_read_ptr__comp_46demangle_component();
  __dyc_funcallvar_47 = __dyc_read_ptr__comp_46demangle_component();
  __dyc_funcallvar_48 = __dyc_read_ptr__comp_46demangle_component();
  __dyc_funcallvar_49 = __dyc_read_ptr__comp_46demangle_component();
  __dyc_funcallvar_50 = __dyc_read_ptr__comp_46demangle_component();
  can_subst = 0;
  tmp___17 = 0;
  tmp___18 = 0;
  tmp___19 = 0;
  if (ret) {
    if ((int const   )*(di->n) == 0) {
      tmp___17 = '\000';
    } else {
      tmp___18 = di->n;
      (di->n) ++;
      tmp___17 = (int )*tmp___18;
    }
    if (tmp___17 != 69) {
      ret = (struct demangle_component *)((void *)0);
    }
  }
  can_subst = 1;
  goto __dyc_dummy_label;
  tmp___19 = __dyc_funcallvar_41;
  ret = __dyc_funcallvar_42;
  can_subst = 1;
  goto __dyc_dummy_label;
  ret = __dyc_funcallvar_43;
  goto __dyc_dummy_label;
  ret = __dyc_funcallvar_44;
  goto __dyc_dummy_label;
  ret = __dyc_funcallvar_45;
  di->expansion += (int )(ret->u.s_builtin.type)->len;
  goto __dyc_dummy_label;
  ret = __dyc_funcallvar_46;
  di->expansion += (int )(ret->u.s_builtin.type)->len;
  goto __dyc_dummy_label;
  ret = __dyc_funcallvar_47;
  di->expansion += (int )(ret->u.s_builtin.type)->len;
  goto __dyc_dummy_label;
  ret = __dyc_funcallvar_48;
  di->expansion += (int )(ret->u.s_builtin.type)->len;
  goto __dyc_dummy_label;
  ret = __dyc_funcallvar_49;
  di->expansion += (int )(ret->u.s_builtin.type)->len;
  goto __dyc_dummy_label;
  ret = __dyc_funcallvar_50;
  di->expansion += (int )(ret->u.s_builtin.type)->len;
  goto __dyc_dummy_label;
  __dyc_dummy_label:  ;
  __dyc_print_ptr__comp_46demangle_component(ret);
  __dyc_printpre_byte(can_subst);
  __dyc_print_ptr__comp_46demangle_component(tmp___19);
}
}
