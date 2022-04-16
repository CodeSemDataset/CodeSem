#include "../../include/dycfoo.h"
#include "../../include/cp-demangle.i.hd.c.h"
void __dyc_foo(void) 
{ char const   *code ;
  struct demangle_component *first ;
  struct demangle_component *second ;
  struct demangle_component *third ;
  struct d_info *di ;
  struct demangle_component *__dyc_funcallvar_70 ;
  struct demangle_component *__dyc_funcallvar_71 ;
  struct demangle_component *__dyc_funcallvar_72 ;
  struct demangle_component *__dyc_funcallvar_73 ;
  struct demangle_component *__dyc_funcallvar_74 ;
  struct demangle_component *__dyc_funcallvar_75 ;
  struct demangle_component *__dyc_funcallvar_76 ;
  struct demangle_component *__dyc_funcallvar_77 ;
  struct demangle_component *__dyc_funcallvar_78 ;
  struct demangle_component *__dyc_funcallvar_79 ;

  {
  code = (char const   *)__dyc_read_ptr__char();
  di = __dyc_read_ptr__comp_60d_info();
  __dyc_funcallvar_70 = __dyc_read_ptr__comp_46demangle_component();
  __dyc_funcallvar_71 = __dyc_read_ptr__comp_46demangle_component();
  __dyc_funcallvar_72 = __dyc_read_ptr__comp_46demangle_component();
  __dyc_funcallvar_73 = __dyc_read_ptr__comp_46demangle_component();
  __dyc_funcallvar_74 = __dyc_read_ptr__comp_46demangle_component();
  __dyc_funcallvar_75 = __dyc_read_ptr__comp_46demangle_component();
  __dyc_funcallvar_76 = __dyc_read_ptr__comp_46demangle_component();
  __dyc_funcallvar_77 = __dyc_read_ptr__comp_46demangle_component();
  __dyc_funcallvar_78 = __dyc_read_ptr__comp_46demangle_component();
  __dyc_funcallvar_79 = __dyc_read_ptr__comp_46demangle_component();
  first = 0;
  second = 0;
  third = 0;
  if ((int const   )*(code + 0) == 102) {
    {
    first = __dyc_funcallvar_70;
    second = __dyc_funcallvar_71;
    third = __dyc_funcallvar_72;
    }
    if ((unsigned long )third == (unsigned long )((void *)0)) {
      goto __dyc_dummy_label;
    }
  } else {
    if ((int const   )*(code + 0) == 110) {
      if ((int const   )*(code + 1) != 119) {
        if ((int const   )*(code + 1) != 97) {
          goto __dyc_dummy_label;
        }
      }
      {
      first = __dyc_funcallvar_73;
      second = __dyc_funcallvar_74;
      }
      if ((int const   )*(di->n) == 69) {
        (di->n) ++;
        third = (struct demangle_component *)((void *)0);
      } else {
        if ((int const   )*(di->n) == 112) {
          if ((int const   )*(di->n + 1) == 105) {
            {
            di->n += 2;
            third = __dyc_funcallvar_75;
            }
          } else {
            goto _L___12;
          }
        } else {
          _L___12:  
          if ((int const   )*(di->n) == 105) {
            if ((int const   )*(di->n + 1) == 108) {
              {
              third = __dyc_funcallvar_76;
              }
            } else {
              goto __dyc_dummy_label;
            }
          } else {
            goto __dyc_dummy_label;
          }
        }
      }
    } else {
      goto __dyc_dummy_label;
    }
  }
  first = __dyc_funcallvar_77;
  second = __dyc_funcallvar_78;
  third = __dyc_funcallvar_79;
  if ((unsigned long )third == (unsigned long )((void *)0)) {
    goto __dyc_dummy_label;
  }
  __dyc_dummy_label:  ;
  __dyc_print_ptr__comp_46demangle_component(first);
  __dyc_print_ptr__comp_46demangle_component(second);
  __dyc_print_ptr__comp_46demangle_component(third);
}
}
