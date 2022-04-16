#include "../../include/dycfoo.h"
#include "../../include/cp-demangle.i.hd.c.h"
void __dyc_foo(void) 
{ struct demangle_component *op ;
  char const   *code ;
  struct demangle_component *operand ;
  int suffix ;
  size_t __s1_len___0 ;
  size_t __s2_len___0 ;
  int tmp___44 ;
  int tmp___49 ;
  int tmp___50 ;
  int tmp___51 ;
  int tmp___52 ;
  int tmp___53 ;
  struct demangle_component *tmp___54 ;
  struct demangle_component *left ;
  int tmp___55 ;
  struct d_info *di ;
  struct demangle_component *__dyc_funcallvar_28 ;
  int __dyc_funcallvar_29 ;
  int __dyc_funcallvar_30 ;
  int __dyc_funcallvar_31 ;
  int __dyc_funcallvar_32 ;
  int __dyc_funcallvar_33 ;
  struct demangle_component *__dyc_funcallvar_34 ;
  struct demangle_component *__dyc_funcallvar_35 ;
  struct demangle_component *__dyc_funcallvar_36 ;
  struct demangle_component *__dyc_funcallvar_37 ;
  struct demangle_component *__dyc_funcallvar_38 ;
  int __dyc_funcallvar_39 ;
  struct demangle_component *__dyc_funcallvar_40 ;
  struct demangle_component *__dyc_funcallvar_41 ;
  struct demangle_component *__dyc_funcallvar_42 ;

  {
  op = __dyc_read_ptr__comp_46demangle_component();
  code = (char const   *)__dyc_read_ptr__char();
  suffix = __dyc_readpre_byte();
  di = __dyc_read_ptr__comp_60d_info();
  __dyc_funcallvar_28 = __dyc_read_ptr__comp_46demangle_component();
  __dyc_funcallvar_29 = __dyc_readpre_byte();
  __dyc_funcallvar_30 = __dyc_readpre_byte();
  __dyc_funcallvar_31 = __dyc_readpre_byte();
  __dyc_funcallvar_32 = __dyc_readpre_byte();
  __dyc_funcallvar_33 = __dyc_readpre_byte();
  __dyc_funcallvar_34 = __dyc_read_ptr__comp_46demangle_component();
  __dyc_funcallvar_35 = __dyc_read_ptr__comp_46demangle_component();
  __dyc_funcallvar_36 = __dyc_read_ptr__comp_46demangle_component();
  __dyc_funcallvar_37 = __dyc_read_ptr__comp_46demangle_component();
  __dyc_funcallvar_38 = __dyc_read_ptr__comp_46demangle_component();
  __dyc_funcallvar_39 = __dyc_readpre_byte();
  __dyc_funcallvar_40 = __dyc_read_ptr__comp_46demangle_component();
  __dyc_funcallvar_41 = __dyc_read_ptr__comp_46demangle_component();
  __dyc_funcallvar_42 = __dyc_read_ptr__comp_46demangle_component();
  operand = 0;
  __s1_len___0 = 0;
  __s2_len___0 = 0;
  tmp___44 = 0;
  tmp___49 = 0;
  tmp___50 = 0;
  tmp___51 = 0;
  tmp___52 = 0;
  tmp___53 = 0;
  tmp___54 = 0;
  left = 0;
  tmp___55 = 0;
  if ((int )op->type == 52) {
    if ((int const   )*(di->n) == 95) {
      (di->n) ++;
      tmp___53 = 1;
    } else {
      tmp___53 = 0;
    }
    if (tmp___53) {
      {
      operand = __dyc_funcallvar_28;
      }
    } else {
      goto _L___4;
    }
  } else {
    _L___4:  
    if (code) {
      if (0) {
        {
        tmp___50 = __dyc_funcallvar_29;
        __s1_len___0 = (unsigned long )tmp___50;
        tmp___51 = __dyc_funcallvar_30;
        __s2_len___0 = (unsigned long )tmp___51;
        }
        if (! ((unsigned long )((void const   *)(code + 1)) - (unsigned long )((void const   *)code) == 1UL)) {
          goto _L___3;
        } else {
          if (__s1_len___0 >= 4UL) {
            _L___3:  
            if (! ((unsigned long )((void const   *)("sP" + 1)) - (unsigned long )((void const   *)"sP") == 1UL)) {
              tmp___52 = 1;
            } else {
              if (__s2_len___0 >= 4UL) {
                tmp___52 = 1;
              } else {
                tmp___52 = 0;
              }
            }
          } else {
            tmp___52 = 0;
          }
        }
        if (tmp___52) {
          {
          tmp___44 = __dyc_funcallvar_31;
          }
        } else {
          {
          tmp___49 = __dyc_funcallvar_32;
          tmp___44 = tmp___49;
          }
        }
      } else {
        {
        tmp___49 = __dyc_funcallvar_33;
        tmp___44 = tmp___49;
        }
      }
      if (tmp___44) {
        {
        operand = __dyc_funcallvar_34;
        }
      } else {
        {
        operand = __dyc_funcallvar_35;
        }
      }
    } else {
      {
      operand = __dyc_funcallvar_36;
      }
    }
  }
  if (suffix) {
    {
    operand = __dyc_funcallvar_37;
    }
  }
  tmp___54 = __dyc_funcallvar_38;
  goto __dyc_dummy_label;
  switch_33_2:  
  if ((unsigned long )code == (unsigned long )((void *)0)) {
    goto __dyc_dummy_label;
  }
  tmp___55 = __dyc_funcallvar_39;
  if (tmp___55) {
    {
    left = __dyc_funcallvar_40;
    }
  } else {
    if ((int const   )*(code + 0) == 102) {
      {
      left = __dyc_funcallvar_41;
      }
    } else {
      {
      left = __dyc_funcallvar_42;
      }
    }
  }
  __dyc_dummy_label:  ;
  __dyc_print_ptr__comp_46demangle_component(operand);
  __dyc_printpre_byte(__s1_len___0);
  __dyc_printpre_byte(__s2_len___0);
  __dyc_print_ptr__comp_46demangle_component(tmp___54);
  __dyc_print_ptr__comp_46demangle_component(left);
}
}
