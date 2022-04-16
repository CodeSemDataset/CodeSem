#include "../../include/dycfoo.h"
#include "../../include/cp-demangle.i.hd.c.h"
void __dyc_foo(void) 
{ struct demangle_component *op___0 ;
  char const   *code ;
  struct demangle_component *a___1 ;
  struct demangle_component *tmp___67 ;
  int len___1 ;
  int tmp___68 ;
  int len___2 ;
  int tmp___69 ;
  size_t __s1_len___2 ;
  size_t __s2_len___2 ;
  int tmp___79 ;
  int tmp___84 ;
  int tmp___85 ;
  int tmp___86 ;
  int tmp___87 ;
  size_t __s1_len___3 ;
  size_t __s2_len___3 ;
  int tmp___97 ;
  int tmp___102 ;
  int tmp___103 ;
  int tmp___104 ;
  int tmp___105 ;
  int __dyc_funcallvar_23 ;
  int __dyc_funcallvar_24 ;
  int __dyc_funcallvar_25 ;
  int __dyc_funcallvar_26 ;
  int __dyc_funcallvar_27 ;
  struct demangle_component *__dyc_funcallvar_28 ;
  int __dyc_funcallvar_29 ;
  int __dyc_funcallvar_30 ;
  int __dyc_funcallvar_31 ;
  int __dyc_funcallvar_32 ;
  int __dyc_funcallvar_33 ;
  int __dyc_funcallvar_34 ;
  int __dyc_funcallvar_35 ;

  {
  op___0 = __dyc_read_ptr__comp_46demangle_component();
  code = (char const   *)__dyc_read_ptr__char();
  __dyc_funcallvar_23 = __dyc_readpre_byte();
  __dyc_funcallvar_24 = __dyc_readpre_byte();
  __dyc_funcallvar_25 = __dyc_readpre_byte();
  __dyc_funcallvar_26 = __dyc_readpre_byte();
  __dyc_funcallvar_27 = __dyc_readpre_byte();
  __dyc_funcallvar_28 = __dyc_read_ptr__comp_46demangle_component();
  __dyc_funcallvar_29 = __dyc_readpre_byte();
  __dyc_funcallvar_30 = __dyc_readpre_byte();
  __dyc_funcallvar_31 = __dyc_readpre_byte();
  __dyc_funcallvar_32 = __dyc_readpre_byte();
  __dyc_funcallvar_33 = __dyc_readpre_byte();
  __dyc_funcallvar_34 = __dyc_readpre_byte();
  __dyc_funcallvar_35 = __dyc_readpre_byte();
  a___1 = 0;
  tmp___67 = 0;
  len___1 = 0;
  tmp___68 = 0;
  len___2 = 0;
  tmp___69 = 0;
  __s1_len___2 = 0;
  __s2_len___2 = 0;
  tmp___79 = 0;
  tmp___84 = 0;
  tmp___85 = 0;
  tmp___86 = 0;
  tmp___87 = 0;
  __s1_len___3 = 0;
  __s2_len___3 = 0;
  tmp___97 = 0;
  tmp___102 = 0;
  tmp___103 = 0;
  tmp___104 = 0;
  tmp___105 = 0;
  if (code) {
    if (0) {
      {
      tmp___103 = __dyc_funcallvar_23;
      __s1_len___3 = (unsigned long )tmp___103;
      tmp___104 = __dyc_funcallvar_24;
      __s2_len___3 = (unsigned long )tmp___104;
      }
      if (! ((unsigned long )((void const   *)(code + 1)) - (unsigned long )((void const   *)code) == 1UL)) {
        goto _L___12;
      } else {
        if (__s1_len___3 >= 4UL) {
          _L___12:  
          if (! ((unsigned long )((void const   *)("sZ" + 1)) - (unsigned long )((void const   *)"sZ") == 1UL)) {
            tmp___105 = 1;
          } else {
            if (__s2_len___3 >= 4UL) {
              tmp___105 = 1;
            } else {
              tmp___105 = 0;
            }
          }
        } else {
          tmp___105 = 0;
        }
      }
      if (tmp___105) {
        {
        tmp___97 = __dyc_funcallvar_25;
        }
      } else {
        {
        tmp___102 = __dyc_funcallvar_26;
        tmp___97 = tmp___102;
        }
      }
    } else {
      {
      tmp___102 = __dyc_funcallvar_27;
      tmp___97 = tmp___102;
      }
    }
    if (tmp___97) {
      goto _L___13;
    } else {
      {
      tmp___67 = __dyc_funcallvar_28;
      a___1 = tmp___67;
      tmp___68 = __dyc_funcallvar_29;
      len___1 = tmp___68;

      }
      goto __dyc_dummy_label;
    }
  } else {
    _L___13:  
    if (code) {
      if (0) {
        {
        tmp___85 = __dyc_funcallvar_30;
        __s1_len___2 = (unsigned long )tmp___85;
        tmp___86 = __dyc_funcallvar_31;
        __s2_len___2 = (unsigned long )tmp___86;
        }
        if (! ((unsigned long )((void const   *)(code + 1)) - (unsigned long )((void const   *)code) == 1UL)) {
          goto _L___10;
        } else {
          if (__s1_len___2 >= 4UL) {
            _L___10:  
            if (! ((unsigned long )((void const   *)("sP" + 1)) - (unsigned long )((void const   *)"sP") == 1UL)) {
              tmp___87 = 1;
            } else {
              if (__s2_len___2 >= 4UL) {
                tmp___87 = 1;
              } else {
                tmp___87 = 0;
              }
            }
          } else {
            tmp___87 = 0;
          }
        }
        if (tmp___87) {
          {
          tmp___79 = __dyc_funcallvar_32;
          }
        } else {
          {
          tmp___84 = __dyc_funcallvar_33;
          tmp___79 = tmp___84;
          }
        }
      } else {
        {
        tmp___84 = __dyc_funcallvar_34;
        tmp___79 = tmp___84;
        }
      }
      if (! tmp___79) {
        {
        tmp___69 = __dyc_funcallvar_35;
        len___2 = tmp___69;

        }
        goto __dyc_dummy_label;
      }
    }
  }
  if ((int )op___0->type != 52) {
    {

    }
  } else {
    {



    }
  }
  __dyc_dummy_label:  ;
  __dyc_print_ptr__comp_46demangle_component(a___1);
  __dyc_printpre_byte(len___1);
  __dyc_printpre_byte(len___2);
  __dyc_printpre_byte(__s1_len___2);
  __dyc_printpre_byte(__s2_len___2);
  __dyc_printpre_byte(__s1_len___3);
  __dyc_printpre_byte(__s2_len___3);
}
}
