#include "../../include/dycfoo.h"
#include "../../include/cp-demangle.i.hd.c.h"
void __dyc_foo(void) 
{ struct demangle_component *ret ;
  int tmp___2 ;
  struct demangle_component *tmp___3 ;
  struct demangle_component *args ;
  int tmp___4 ;
  struct d_info *di ;
  struct demangle_component *__dyc_funcallvar_8 ;
  struct demangle_component *__dyc_funcallvar_9 ;
  struct demangle_component *__dyc_funcallvar_10 ;
  struct demangle_component *__dyc_funcallvar_11 ;
  struct demangle_component *__dyc_funcallvar_12 ;
  struct demangle_component *__dyc_funcallvar_13 ;
  int __dyc_funcallvar_14 ;
  struct demangle_component *__dyc_funcallvar_15 ;
  struct demangle_component *__dyc_funcallvar_16 ;
  struct demangle_component *__dyc_funcallvar_17 ;
  int __dyc_funcallvar_18 ;
  struct demangle_component *__dyc_funcallvar_19 ;

  {
  di = __dyc_read_ptr__comp_60d_info();
  __dyc_funcallvar_8 = __dyc_read_ptr__comp_46demangle_component();
  __dyc_funcallvar_9 = __dyc_read_ptr__comp_46demangle_component();
  __dyc_funcallvar_10 = __dyc_read_ptr__comp_46demangle_component();
  __dyc_funcallvar_11 = __dyc_read_ptr__comp_46demangle_component();
  __dyc_funcallvar_12 = __dyc_read_ptr__comp_46demangle_component();
  __dyc_funcallvar_13 = __dyc_read_ptr__comp_46demangle_component();
  __dyc_funcallvar_14 = __dyc_readpre_byte();
  __dyc_funcallvar_15 = __dyc_read_ptr__comp_46demangle_component();
  __dyc_funcallvar_16 = __dyc_read_ptr__comp_46demangle_component();
  __dyc_funcallvar_17 = __dyc_read_ptr__comp_46demangle_component();
  __dyc_funcallvar_18 = __dyc_readpre_byte();
  __dyc_funcallvar_19 = __dyc_read_ptr__comp_46demangle_component();
  ret = 0;
  tmp___2 = 0;
  tmp___3 = 0;
  args = 0;
  tmp___4 = 0;
  ret = __dyc_funcallvar_8;
  goto __dyc_dummy_label;
  ret = __dyc_funcallvar_9;
  goto __dyc_dummy_label;
  ret = __dyc_funcallvar_10;
  goto __dyc_dummy_label;
  ret = __dyc_funcallvar_11;
  goto __dyc_dummy_label;
  ret = __dyc_funcallvar_12;
  goto __dyc_dummy_label;
  ret = __dyc_funcallvar_13;
  if ((int const   )*(di->n) == 73) {
    if (! di->is_conversion) {
      {
      tmp___2 = __dyc_funcallvar_14;
      }
      if (! tmp___2) {
        goto __dyc_dummy_label;
      }
      {
      tmp___3 = __dyc_funcallvar_15;
      ret = __dyc_funcallvar_16;
      }
    } else {
      {

      args = __dyc_funcallvar_17;
      }
      if ((int const   )*(di->n) == 73) {
        {
        tmp___4 = __dyc_funcallvar_18;
        }
        if (! tmp___4) {
          goto __dyc_dummy_label;
        }
        {
        ret = __dyc_funcallvar_19;
        }
      } else {
        {

        }
      }
    }
  }
  goto __dyc_dummy_label;
  __dyc_dummy_label:  ;
  __dyc_print_ptr__comp_46demangle_component(ret);
  __dyc_print_ptr__comp_46demangle_component(tmp___3);
  __dyc_print_ptr__comp_46demangle_component(args);
}
}
