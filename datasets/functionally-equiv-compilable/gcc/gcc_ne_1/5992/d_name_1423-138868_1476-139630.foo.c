#include "../../include/dycfoo.h"
#include "../../include/cp-demangle.i.hd.c.h"
void __dyc_foo(void) 
{ struct demangle_component *dc ;
  struct demangle_component *tmp ;
  struct demangle_component *tmp___0 ;
  struct demangle_component *tmp___1 ;
  int subst ;
  struct demangle_component *tmp___2 ;
  struct demangle_component *tmp___3 ;
  int tmp___4 ;
  struct demangle_component *tmp___5 ;
  struct d_info *di ;
  struct demangle_component *__dyc_funcallvar_1 ;
  struct demangle_component *__dyc_funcallvar_2 ;
  struct demangle_component *__dyc_funcallvar_3 ;
  struct demangle_component *__dyc_funcallvar_4 ;
  struct demangle_component *__dyc_funcallvar_5 ;
  struct demangle_component *__dyc_funcallvar_6 ;
  struct demangle_component *__dyc_funcallvar_7 ;
  int __dyc_funcallvar_8 ;
  struct demangle_component *__dyc_funcallvar_9 ;
  struct demangle_component *__dyc_funcallvar_10 ;
  struct demangle_component *__dyc_funcallvar_11 ;

  {
  di = __dyc_read_ptr__comp_60d_info();
  __dyc_funcallvar_1 = __dyc_read_ptr__comp_46demangle_component();
  __dyc_funcallvar_2 = __dyc_read_ptr__comp_46demangle_component();
  __dyc_funcallvar_3 = __dyc_read_ptr__comp_46demangle_component();
  __dyc_funcallvar_4 = __dyc_read_ptr__comp_46demangle_component();
  __dyc_funcallvar_5 = __dyc_read_ptr__comp_46demangle_component();
  __dyc_funcallvar_6 = __dyc_read_ptr__comp_46demangle_component();
  __dyc_funcallvar_7 = __dyc_read_ptr__comp_46demangle_component();
  __dyc_funcallvar_8 = __dyc_readpre_byte();
  __dyc_funcallvar_9 = __dyc_read_ptr__comp_46demangle_component();
  __dyc_funcallvar_10 = __dyc_read_ptr__comp_46demangle_component();
  __dyc_funcallvar_11 = __dyc_read_ptr__comp_46demangle_component();
  dc = 0;
  tmp = 0;
  tmp___0 = 0;
  tmp___1 = 0;
  subst = 0;
  tmp___2 = 0;
  tmp___3 = 0;
  tmp___4 = 0;
  tmp___5 = 0;
  tmp = __dyc_funcallvar_1;
  goto __dyc_dummy_label;
  tmp___0 = __dyc_funcallvar_2;
  goto __dyc_dummy_label;
  tmp___1 = __dyc_funcallvar_3;
  goto __dyc_dummy_label;
  switch_8_83:  
  if ((int const   )*(di->n + 1) != 116) {
    {
    dc = __dyc_funcallvar_4;
    subst = 1;
    }
  } else {
    {
    di->n += 2;
    tmp___2 = __dyc_funcallvar_5;
    tmp___3 = __dyc_funcallvar_6;
    dc = __dyc_funcallvar_7;
    di->expansion += 3;
    subst = 0;
    }
  }
  if (! ((int const   )*(di->n) != 73)) {
    if (! subst) {
      {
      tmp___4 = __dyc_funcallvar_8;
      }
      if (! tmp___4) {
        goto __dyc_dummy_label;
      }
    }
    {
    tmp___5 = __dyc_funcallvar_9;
    dc = __dyc_funcallvar_10;
    }
  }
  goto __dyc_dummy_label;
  dc = __dyc_funcallvar_11;
  __dyc_dummy_label:  ;
  __dyc_print_ptr__comp_46demangle_component(dc);
  __dyc_print_ptr__comp_46demangle_component(tmp);
  __dyc_print_ptr__comp_46demangle_component(tmp___0);
  __dyc_print_ptr__comp_46demangle_component(tmp___1);
  __dyc_printpre_byte(subst);
  __dyc_print_ptr__comp_46demangle_component(tmp___2);
  __dyc_print_ptr__comp_46demangle_component(tmp___3);
  __dyc_print_ptr__comp_46demangle_component(tmp___5);
}
}
