#include "../../include/dycfoo.h"
#include "../../include/cp-demangle.i.hd.c.h"
void __dyc_foo(void) 
{ struct demangle_component *tmp___36 ;
  struct demangle_component *name ;
  struct demangle_component *tmp___37 ;
  struct demangle_component *tmp___38 ;
  struct demangle_component *tmp___39 ;
  struct demangle_component *tmp___40 ;
  struct demangle_component *tmp___41 ;
  int tmp___43 ;
  char const   *tmp___44 ;
  struct demangle_component *tmp___45 ;
  struct demangle_component *tmp___46 ;
  struct demangle_component *tmp___47 ;
  struct demangle_component *tmp___48 ;
  struct demangle_component *tmp___49 ;
  struct d_info *di ;
  struct demangle_component *__dyc_funcallvar_34 ;
  struct demangle_component *__dyc_funcallvar_35 ;
  struct demangle_component *__dyc_funcallvar_36 ;
  struct demangle_component *__dyc_funcallvar_37 ;
  struct demangle_component *__dyc_funcallvar_38 ;
  struct demangle_component *__dyc_funcallvar_39 ;
  struct demangle_component *__dyc_funcallvar_40 ;
  struct demangle_component *__dyc_funcallvar_41 ;
  struct demangle_component *__dyc_funcallvar_42 ;
  struct demangle_component *__dyc_funcallvar_43 ;
  struct demangle_component *__dyc_funcallvar_44 ;

  {
  di = __dyc_read_ptr__comp_60d_info();
  __dyc_funcallvar_34 = __dyc_read_ptr__comp_46demangle_component();
  __dyc_funcallvar_35 = __dyc_read_ptr__comp_46demangle_component();
  __dyc_funcallvar_36 = __dyc_read_ptr__comp_46demangle_component();
  __dyc_funcallvar_37 = __dyc_read_ptr__comp_46demangle_component();
  __dyc_funcallvar_38 = __dyc_read_ptr__comp_46demangle_component();
  __dyc_funcallvar_39 = __dyc_read_ptr__comp_46demangle_component();
  __dyc_funcallvar_40 = __dyc_read_ptr__comp_46demangle_component();
  __dyc_funcallvar_41 = __dyc_read_ptr__comp_46demangle_component();
  __dyc_funcallvar_42 = __dyc_read_ptr__comp_46demangle_component();
  __dyc_funcallvar_43 = __dyc_read_ptr__comp_46demangle_component();
  __dyc_funcallvar_44 = __dyc_read_ptr__comp_46demangle_component();
  tmp___36 = 0;
  name = 0;
  tmp___37 = 0;
  tmp___38 = 0;
  tmp___39 = 0;
  tmp___40 = 0;
  tmp___41 = 0;
  tmp___43 = 0;
  tmp___44 = 0;
  tmp___45 = 0;
  tmp___46 = 0;
  tmp___47 = 0;
  tmp___48 = 0;
  tmp___49 = 0;
  tmp___36 = __dyc_funcallvar_34;
  goto __dyc_dummy_label;
  tmp___37 = __dyc_funcallvar_35;
  name = tmp___37;
  tmp___38 = __dyc_funcallvar_36;
  tmp___39 = __dyc_funcallvar_37;
  goto __dyc_dummy_label;
  tmp___40 = __dyc_funcallvar_38;
  tmp___41 = __dyc_funcallvar_39;
  goto __dyc_dummy_label;
  switch_17_84:  
  if ((int const   )*(di->n) == 0) {
    tmp___43 = '\000';
  } else {
    tmp___44 = di->n;
    (di->n) ++;
    tmp___43 = (int )*tmp___44;
  }
  if (tmp___43 == 110) {
    goto switch_18_110;
  } else {
    if (tmp___43 == 116) {
      goto switch_18_116;
    } else {
      {
      goto switch_18_default;
      if (0) {
        switch_18_110:  
        {
        tmp___45 = __dyc_funcallvar_40;
        tmp___46 = __dyc_funcallvar_41;
        }
        goto __dyc_dummy_label;
        switch_18_default:  ;
        switch_18_116:  
        {
        tmp___47 = __dyc_funcallvar_42;
        tmp___48 = __dyc_funcallvar_43;
        }
        goto __dyc_dummy_label;
      } else {
        switch_18_break:  ;
      }
      }
    }
  }
  tmp___49 = __dyc_funcallvar_44;
  goto __dyc_dummy_label;
  __dyc_dummy_label:  ;
  __dyc_print_ptr__comp_46demangle_component(tmp___36);
  __dyc_print_ptr__comp_46demangle_component(name);
  __dyc_print_ptr__comp_46demangle_component(tmp___38);
  __dyc_print_ptr__comp_46demangle_component(tmp___39);
  __dyc_print_ptr__comp_46demangle_component(tmp___40);
  __dyc_print_ptr__comp_46demangle_component(tmp___41);
  __dyc_print_ptr__comp_46demangle_component(tmp___45);
  __dyc_print_ptr__comp_46demangle_component(tmp___46);
  __dyc_print_ptr__comp_46demangle_component(tmp___47);
  __dyc_print_ptr__comp_46demangle_component(tmp___48);
  __dyc_print_ptr__comp_46demangle_component(tmp___49);
}
}