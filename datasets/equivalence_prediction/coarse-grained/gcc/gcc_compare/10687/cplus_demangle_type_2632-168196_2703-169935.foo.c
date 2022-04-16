#include "../../include/dycfoo.h"
#include "../../include/cp-demangle.i.hd.c.h"
void __dyc_foo(void) 
{ char peek ;
  struct demangle_component *ret ;
  int can_subst ;
  struct demangle_component *tmp___19 ;
  int tmp___20 ;
  char const   *tmp___22 ;
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
  struct demangle_component *__dyc_funcallvar_51 ;
  struct demangle_component *__dyc_funcallvar_52 ;
  struct demangle_component *__dyc_funcallvar_53 ;
  struct demangle_component *__dyc_funcallvar_54 ;

  {
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
  __dyc_funcallvar_51 = __dyc_read_ptr__comp_46demangle_component();
  __dyc_funcallvar_52 = __dyc_read_ptr__comp_46demangle_component();
  __dyc_funcallvar_53 = __dyc_read_ptr__comp_46demangle_component();
  __dyc_funcallvar_54 = __dyc_read_ptr__comp_46demangle_component();
  peek = 0;
  ret = 0;
  can_subst = 0;
  tmp___19 = 0;
  tmp___20 = 0;
  tmp___22 = 0;
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
  ret = __dyc_funcallvar_51;
  di->expansion += (int )(ret->u.s_builtin.type)->len;
  goto __dyc_dummy_label;
  ret = __dyc_funcallvar_52;
  ret->type = 44;
  if ((int const   )*(di->n) >= 48) {
    if ((int const   )*(di->n) <= 57) {
      tmp___20 = 1;
    } else {
      tmp___20 = 0;
    }
  } else {
    tmp___20 = 0;
  }
  ret->u.s_fixed.accum = (short )tmp___20;
  if (ret->u.s_fixed.accum) {
    {

    }
  }
  ret->u.s_fixed.length = __dyc_funcallvar_53;
  if ((unsigned long )ret->u.s_fixed.length == (unsigned long )((void *)0)) {
    goto __dyc_dummy_label;
  }

  if ((int const   )*(di->n) == 0) {
    peek = (char )'\000';
  } else {
    tmp___22 = di->n;
    (di->n) ++;
    peek = (char )*tmp___22;
  }
  ret->u.s_fixed.sat = (short )((int )peek == 115);
  goto __dyc_dummy_label;
  ret = __dyc_funcallvar_54;
  __dyc_dummy_label:  ;
  __dyc_print_ptr__comp_46demangle_component(ret);
  __dyc_printpre_byte(can_subst);
  __dyc_print_ptr__comp_46demangle_component(tmp___19);
}
}
