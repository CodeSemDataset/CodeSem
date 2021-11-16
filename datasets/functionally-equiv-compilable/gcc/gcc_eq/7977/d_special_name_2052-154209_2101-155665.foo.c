#include "../../include/dycfoo.h"
#include "../../include/cp-demangle.i.hd.c.h"
void __dyc_foo(void) 
{ struct demangle_component *tmp___3 ;
  struct demangle_component *tmp___4 ;
  struct demangle_component *tmp___5 ;
  struct demangle_component *tmp___6 ;
  struct demangle_component *tmp___7 ;
  struct demangle_component *tmp___8 ;
  struct demangle_component *tmp___9 ;
  int tmp___10 ;
  struct demangle_component *tmp___11 ;
  struct demangle_component *tmp___12 ;
  int tmp___13 ;
  struct demangle_component *tmp___14 ;
  struct demangle_component *tmp___15 ;
  int tmp___16 ;
  int tmp___17 ;
  struct demangle_component *tmp___18 ;
  struct demangle_component *tmp___19 ;
  struct demangle_component *derived_type ;
  int offset ;
  struct demangle_component *base_type ;
  int tmp___20 ;
  struct demangle_component *tmp___21 ;
  struct d_info *di ;
  struct demangle_component *__dyc_funcallvar_2 ;
  struct demangle_component *__dyc_funcallvar_3 ;
  struct demangle_component *__dyc_funcallvar_4 ;
  struct demangle_component *__dyc_funcallvar_5 ;
  struct demangle_component *__dyc_funcallvar_6 ;
  struct demangle_component *__dyc_funcallvar_7 ;
  struct demangle_component *__dyc_funcallvar_8 ;
  int __dyc_funcallvar_9 ;
  struct demangle_component *__dyc_funcallvar_10 ;
  struct demangle_component *__dyc_funcallvar_11 ;
  int __dyc_funcallvar_12 ;
  struct demangle_component *__dyc_funcallvar_13 ;
  struct demangle_component *__dyc_funcallvar_14 ;
  int __dyc_funcallvar_15 ;
  int __dyc_funcallvar_16 ;
  struct demangle_component *__dyc_funcallvar_17 ;
  struct demangle_component *__dyc_funcallvar_18 ;
  struct demangle_component *__dyc_funcallvar_19 ;
  int __dyc_funcallvar_20 ;
  struct demangle_component *__dyc_funcallvar_21 ;
  struct demangle_component *__dyc_funcallvar_22 ;

  {
  di = __dyc_read_ptr__comp_60d_info();
  __dyc_funcallvar_2 = __dyc_read_ptr__comp_46demangle_component();
  __dyc_funcallvar_3 = __dyc_read_ptr__comp_46demangle_component();
  __dyc_funcallvar_4 = __dyc_read_ptr__comp_46demangle_component();
  __dyc_funcallvar_5 = __dyc_read_ptr__comp_46demangle_component();
  __dyc_funcallvar_6 = __dyc_read_ptr__comp_46demangle_component();
  __dyc_funcallvar_7 = __dyc_read_ptr__comp_46demangle_component();
  __dyc_funcallvar_8 = __dyc_read_ptr__comp_46demangle_component();
  __dyc_funcallvar_9 = __dyc_readpre_byte();
  __dyc_funcallvar_10 = __dyc_read_ptr__comp_46demangle_component();
  __dyc_funcallvar_11 = __dyc_read_ptr__comp_46demangle_component();
  __dyc_funcallvar_12 = __dyc_readpre_byte();
  __dyc_funcallvar_13 = __dyc_read_ptr__comp_46demangle_component();
  __dyc_funcallvar_14 = __dyc_read_ptr__comp_46demangle_component();
  __dyc_funcallvar_15 = __dyc_readpre_byte();
  __dyc_funcallvar_16 = __dyc_readpre_byte();
  __dyc_funcallvar_17 = __dyc_read_ptr__comp_46demangle_component();
  __dyc_funcallvar_18 = __dyc_read_ptr__comp_46demangle_component();
  __dyc_funcallvar_19 = __dyc_read_ptr__comp_46demangle_component();
  __dyc_funcallvar_20 = __dyc_readpre_byte();
  __dyc_funcallvar_21 = __dyc_read_ptr__comp_46demangle_component();
  __dyc_funcallvar_22 = __dyc_read_ptr__comp_46demangle_component();
  tmp___3 = 0;
  tmp___4 = 0;
  tmp___5 = 0;
  tmp___6 = 0;
  tmp___7 = 0;
  tmp___8 = 0;
  tmp___9 = 0;
  tmp___10 = 0;
  tmp___11 = 0;
  tmp___12 = 0;
  tmp___13 = 0;
  tmp___14 = 0;
  tmp___15 = 0;
  tmp___16 = 0;
  tmp___17 = 0;
  tmp___18 = 0;
  tmp___19 = 0;
  derived_type = 0;
  offset = 0;
  base_type = 0;
  tmp___20 = 0;
  tmp___21 = 0;
  tmp___3 = __dyc_funcallvar_2;
  goto __dyc_dummy_label;
  di->expansion -= 10;
  tmp___4 = __dyc_funcallvar_3;
  tmp___5 = __dyc_funcallvar_4;
  goto __dyc_dummy_label;
  tmp___6 = __dyc_funcallvar_5;
  tmp___7 = __dyc_funcallvar_6;
  goto __dyc_dummy_label;
  tmp___8 = __dyc_funcallvar_7;
  tmp___9 = __dyc_funcallvar_8;
  goto __dyc_dummy_label;
  tmp___10 = __dyc_funcallvar_9;
  if (! tmp___10) {
    goto __dyc_dummy_label;
  }
  tmp___11 = __dyc_funcallvar_10;
  tmp___12 = __dyc_funcallvar_11;
  goto __dyc_dummy_label;
  tmp___13 = __dyc_funcallvar_12;
  if (! tmp___13) {
    goto __dyc_dummy_label;
  }
  tmp___14 = __dyc_funcallvar_13;
  tmp___15 = __dyc_funcallvar_14;
  goto __dyc_dummy_label;
  tmp___16 = __dyc_funcallvar_15;
  if (! tmp___16) {
    goto __dyc_dummy_label;
  }
  tmp___17 = __dyc_funcallvar_16;
  if (! tmp___17) {
    goto __dyc_dummy_label;
  }
  tmp___18 = __dyc_funcallvar_17;
  tmp___19 = __dyc_funcallvar_18;
  goto __dyc_dummy_label;
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
  __dyc_dummy_label:  ;
  __dyc_print_ptr__comp_46demangle_component(tmp___3);
  __dyc_print_ptr__comp_46demangle_component(tmp___4);
  __dyc_print_ptr__comp_46demangle_component(tmp___5);
  __dyc_print_ptr__comp_46demangle_component(tmp___6);
  __dyc_print_ptr__comp_46demangle_component(tmp___7);
  __dyc_print_ptr__comp_46demangle_component(tmp___8);
  __dyc_print_ptr__comp_46demangle_component(tmp___9);
  __dyc_print_ptr__comp_46demangle_component(tmp___11);
  __dyc_print_ptr__comp_46demangle_component(tmp___12);
  __dyc_print_ptr__comp_46demangle_component(tmp___14);
  __dyc_print_ptr__comp_46demangle_component(tmp___15);
  __dyc_print_ptr__comp_46demangle_component(tmp___18);
  __dyc_print_ptr__comp_46demangle_component(tmp___19);
  __dyc_print_ptr__comp_46demangle_component(derived_type);
  __dyc_print_ptr__comp_46demangle_component(base_type);
  __dyc_print_ptr__comp_46demangle_component(tmp___21);
}
}
