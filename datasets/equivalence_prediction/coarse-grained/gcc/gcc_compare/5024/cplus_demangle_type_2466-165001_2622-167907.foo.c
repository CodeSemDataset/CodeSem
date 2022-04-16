#include "../../include/dycfoo.h"
#include "../../include/cp-demangle.i.hd.c.h"
void __dyc_foo(void) 
{ char peek ;
  struct demangle_component *ret ;
  int can_subst ;
  int tmp___2 ;
  struct demangle_component *tmp___3 ;
  struct demangle_component *args ;
  int tmp___4 ;
  char peek_next ;
  struct demangle_component *tmp___5 ;
  struct demangle_component *tmp___6 ;
  struct demangle_component *tmp___7 ;
  struct demangle_component *tmp___8 ;
  struct demangle_component *tmp___9 ;
  struct demangle_component *tmp___10 ;
  struct demangle_component *tmp___11 ;
  struct demangle_component *tmp___12 ;
  char const   *tmp___14 ;
  struct d_info *di ;
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
  struct demangle_component *__dyc_funcallvar_30 ;
  struct demangle_component *__dyc_funcallvar_31 ;
  struct demangle_component *__dyc_funcallvar_32 ;
  struct demangle_component *__dyc_funcallvar_33 ;
  struct demangle_component *__dyc_funcallvar_34 ;
  struct demangle_component *__dyc_funcallvar_35 ;
  struct demangle_component *__dyc_funcallvar_36 ;
  struct demangle_component *__dyc_funcallvar_37 ;
  struct demangle_component *__dyc_funcallvar_38 ;

  {
  di = __dyc_read_ptr__comp_60d_info();
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
  __dyc_funcallvar_30 = __dyc_read_ptr__comp_46demangle_component();
  __dyc_funcallvar_31 = __dyc_read_ptr__comp_46demangle_component();
  __dyc_funcallvar_32 = __dyc_read_ptr__comp_46demangle_component();
  __dyc_funcallvar_33 = __dyc_read_ptr__comp_46demangle_component();
  __dyc_funcallvar_34 = __dyc_read_ptr__comp_46demangle_component();
  __dyc_funcallvar_35 = __dyc_read_ptr__comp_46demangle_component();
  __dyc_funcallvar_36 = __dyc_read_ptr__comp_46demangle_component();
  __dyc_funcallvar_37 = __dyc_read_ptr__comp_46demangle_component();
  __dyc_funcallvar_38 = __dyc_read_ptr__comp_46demangle_component();
  peek = 0;
  ret = 0;
  can_subst = 0;
  tmp___2 = 0;
  tmp___3 = 0;
  args = 0;
  tmp___4 = 0;
  peek_next = 0;
  tmp___5 = 0;
  tmp___6 = 0;
  tmp___7 = 0;
  tmp___8 = 0;
  tmp___9 = 0;
  tmp___10 = 0;
  tmp___11 = 0;
  tmp___12 = 0;
  tmp___14 = 0;
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
  switch_22_83:  
  peek_next = (char )*(di->n + 1);
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
  (di->n) ++;
  tmp___9 = __dyc_funcallvar_30;
  ret = __dyc_funcallvar_31;
  goto __dyc_dummy_label;
  (di->n) ++;
  tmp___10 = __dyc_funcallvar_32;
  ret = __dyc_funcallvar_33;
  goto __dyc_dummy_label;
  (di->n) ++;
  ret = __dyc_funcallvar_34;
  if ((int const   )*(di->n) == 73) {
    {
    tmp___11 = __dyc_funcallvar_35;
    ret = __dyc_funcallvar_36;
    }
  }
  tmp___12 = __dyc_funcallvar_37;
  ret = __dyc_funcallvar_38;
  goto __dyc_dummy_label;
  switch_22_68:  
  can_subst = 0;
  (di->n) ++;
  if ((int const   )*(di->n) == 0) {
    peek = (char )'\000';
  } else {
    tmp___14 = di->n;
    (di->n) ++;
    peek = (char )*tmp___14;
  }
  __dyc_dummy_label:  ;
  __dyc_printpre_byte(peek);
  __dyc_print_ptr__comp_46demangle_component(ret);
  __dyc_printpre_byte(can_subst);
  __dyc_print_ptr__comp_46demangle_component(tmp___3);
  __dyc_print_ptr__comp_46demangle_component(args);
  __dyc_print_ptr__comp_46demangle_component(tmp___5);
  __dyc_print_ptr__comp_46demangle_component(tmp___6);
  __dyc_print_ptr__comp_46demangle_component(tmp___7);
  __dyc_print_ptr__comp_46demangle_component(tmp___8);
  __dyc_print_ptr__comp_46demangle_component(tmp___9);
  __dyc_print_ptr__comp_46demangle_component(tmp___10);
  __dyc_print_ptr__comp_46demangle_component(tmp___11);
  __dyc_print_ptr__comp_46demangle_component(tmp___12);
}
}
