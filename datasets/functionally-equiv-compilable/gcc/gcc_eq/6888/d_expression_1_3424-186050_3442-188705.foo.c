#include "../../include/dycfoo.h"
#include "../../include/cp-demangle.i.hd.c.h"
void __dyc_foo(void) 
{ struct demangle_component *op ;
  char const   *code ;
  struct demangle_component *operand ;
  int suffix ;
  int tmp___33 ;
  int tmp___34 ;
  size_t __s1_len___0 ;
  size_t __s2_len___0 ;
  int tmp___44 ;
  int tmp___49 ;
  int tmp___50 ;
  int tmp___51 ;
  int tmp___52 ;
  int tmp___53 ;
  struct demangle_component *tmp___54 ;
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
  operand = 0;
  tmp___33 = 0;
  tmp___34 = 0;
  __s1_len___0 = 0;
  __s2_len___0 = 0;
  tmp___44 = 0;
  tmp___49 = 0;
  tmp___50 = 0;
  tmp___51 = 0;
  tmp___52 = 0;
  tmp___53 = 0;
  tmp___54 = 0;
  if (code) {
    if ((int const   )*(code + 0) == 112) {
      goto _L___1;
    } else {
      if ((int const   )*(code + 0) == 109) {
        _L___1:  
        if ((int const   )*(code + 1) == (int const   )*(code + 0)) {
          if ((int const   )*(di->n) == 95) {
            (di->n) ++;
            tmp___33 = 1;
          } else {
            tmp___33 = 0;
          }
          if (tmp___33) {
            tmp___34 = 0;
          } else {
            tmp___34 = 1;
          }
          suffix = tmp___34;
        }
      }
    }
  }
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
  __dyc_dummy_label:  ;
  __dyc_print_ptr__comp_46demangle_component(operand);
  __dyc_printpre_byte(__s1_len___0);
  __dyc_printpre_byte(__s2_len___0);
  __dyc_print_ptr__comp_46demangle_component(tmp___54);
}
}
