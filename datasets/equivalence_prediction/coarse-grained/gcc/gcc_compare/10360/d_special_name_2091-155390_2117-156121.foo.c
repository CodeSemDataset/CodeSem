#include "../../include/dycfoo.h"
#include "../../include/cp-demangle.i.hd.c.h"
void __dyc_foo(void) 
{ struct demangle_component *derived_type ;
  int offset ;
  struct demangle_component *base_type ;
  int tmp___20 ;
  struct demangle_component *tmp___21 ;
  struct demangle_component *tmp___22 ;
  struct demangle_component *tmp___23 ;
  struct demangle_component *tmp___24 ;
  struct demangle_component *tmp___25 ;
  struct demangle_component *tmp___26 ;
  struct demangle_component *tmp___27 ;
  struct demangle_component *tmp___28 ;
  struct demangle_component *tmp___29 ;
  struct d_info *di ;
  struct demangle_component *__dyc_funcallvar_19 ;
  int __dyc_funcallvar_20 ;
  struct demangle_component *__dyc_funcallvar_21 ;
  struct demangle_component *__dyc_funcallvar_22 ;
  struct demangle_component *__dyc_funcallvar_23 ;
  struct demangle_component *__dyc_funcallvar_24 ;
  struct demangle_component *__dyc_funcallvar_25 ;
  struct demangle_component *__dyc_funcallvar_26 ;
  struct demangle_component *__dyc_funcallvar_27 ;
  struct demangle_component *__dyc_funcallvar_28 ;
  struct demangle_component *__dyc_funcallvar_29 ;
  struct demangle_component *__dyc_funcallvar_30 ;

  {
  di = __dyc_read_ptr__comp_60d_info();
  __dyc_funcallvar_19 = __dyc_read_ptr__comp_46demangle_component();
  __dyc_funcallvar_20 = __dyc_readpre_byte();
  __dyc_funcallvar_21 = __dyc_read_ptr__comp_46demangle_component();
  __dyc_funcallvar_22 = __dyc_read_ptr__comp_46demangle_component();
  __dyc_funcallvar_23 = __dyc_read_ptr__comp_46demangle_component();
  __dyc_funcallvar_24 = __dyc_read_ptr__comp_46demangle_component();
  __dyc_funcallvar_25 = __dyc_read_ptr__comp_46demangle_component();
  __dyc_funcallvar_26 = __dyc_read_ptr__comp_46demangle_component();
  __dyc_funcallvar_27 = __dyc_read_ptr__comp_46demangle_component();
  __dyc_funcallvar_28 = __dyc_read_ptr__comp_46demangle_component();
  __dyc_funcallvar_29 = __dyc_read_ptr__comp_46demangle_component();
  __dyc_funcallvar_30 = __dyc_read_ptr__comp_46demangle_component();
  derived_type = 0;
  offset = 0;
  base_type = 0;
  tmp___20 = 0;
  tmp___21 = 0;
  tmp___22 = 0;
  tmp___23 = 0;
  tmp___24 = 0;
  tmp___25 = 0;
  tmp___26 = 0;
  tmp___27 = 0;
  tmp___28 = 0;
  tmp___29 = 0;
  derived_type = __dyc_funcallvar_19;
  offset = __dyc_funcallvar_20;
  if (offset < 0) {
    goto __dyc_dummy_label;
  }
  if ((int const   )*(di->n) == 95) {
    (di->n) ++;
    tmp___20 = 1;
  } else {
    tmp___20 = 0;
  }
  if (! tmp___20) {
    goto __dyc_dummy_label;
  }
  base_type = __dyc_funcallvar_21;
  di->expansion += 5;
  tmp___21 = __dyc_funcallvar_22;
  goto __dyc_dummy_label;
  tmp___22 = __dyc_funcallvar_23;
  tmp___23 = __dyc_funcallvar_24;
  goto __dyc_dummy_label;
  tmp___24 = __dyc_funcallvar_25;
  tmp___25 = __dyc_funcallvar_26;
  goto __dyc_dummy_label;
  tmp___26 = __dyc_funcallvar_27;
  tmp___27 = __dyc_funcallvar_28;
  goto __dyc_dummy_label;
  tmp___28 = __dyc_funcallvar_29;
  tmp___29 = __dyc_funcallvar_30;
  goto __dyc_dummy_label;
  __dyc_dummy_label:  ;
  __dyc_print_ptr__comp_46demangle_component(derived_type);
  __dyc_print_ptr__comp_46demangle_component(base_type);
  __dyc_print_ptr__comp_46demangle_component(tmp___21);
  __dyc_print_ptr__comp_46demangle_component(tmp___22);
  __dyc_print_ptr__comp_46demangle_component(tmp___23);
  __dyc_print_ptr__comp_46demangle_component(tmp___24);
  __dyc_print_ptr__comp_46demangle_component(tmp___25);
  __dyc_print_ptr__comp_46demangle_component(tmp___26);
  __dyc_print_ptr__comp_46demangle_component(tmp___27);
  __dyc_print_ptr__comp_46demangle_component(tmp___28);
  __dyc_print_ptr__comp_46demangle_component(tmp___29);
}
}
