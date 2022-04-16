#include "../../include/dycfoo.h"
#include "../../include/d-demangle.i.hd.c.h"
void __dyc_foo(void) 
{ char *demangled ;
  int tmp___20 ;
  size_t __s1_len___0 ;
  size_t __s2_len___0 ;
  int tmp___30 ;
  int tmp___35 ;
  int tmp___36 ;
  int tmp___37 ;
  int tmp___38 ;
  char const   *tmp___41 ;
  size_t __s1_len___1 ;
  size_t __s2_len___1 ;
  int tmp___51 ;
  int tmp___56 ;
  int tmp___57 ;
  int tmp___58 ;
  int tmp___59 ;
  char const   *mangled ;
  int __dyc_funcallvar_1 ;
  int __dyc_funcallvar_2 ;
  int __dyc_funcallvar_3 ;
  int __dyc_funcallvar_4 ;
  int __dyc_funcallvar_5 ;
  int __dyc_funcallvar_6 ;
  int __dyc_funcallvar_7 ;
  int __dyc_funcallvar_8 ;
  int __dyc_funcallvar_9 ;
  int __dyc_funcallvar_10 ;
  int __dyc_funcallvar_11 ;
  char const   *__dyc_funcallvar_12 ;

  {
  mangled = (char const   *)__dyc_read_ptr__char();
  __dyc_funcallvar_1 = __dyc_readpre_byte();
  __dyc_funcallvar_2 = __dyc_readpre_byte();
  __dyc_funcallvar_3 = __dyc_readpre_byte();
  __dyc_funcallvar_4 = __dyc_readpre_byte();
  __dyc_funcallvar_5 = __dyc_readpre_byte();
  __dyc_funcallvar_6 = __dyc_readpre_byte();
  __dyc_funcallvar_7 = __dyc_readpre_byte();
  __dyc_funcallvar_8 = __dyc_readpre_byte();
  __dyc_funcallvar_9 = __dyc_readpre_byte();
  __dyc_funcallvar_10 = __dyc_readpre_byte();
  __dyc_funcallvar_11 = __dyc_readpre_byte();
  __dyc_funcallvar_12 = (char const   *)__dyc_read_ptr__char();
  demangled = 0;
  tmp___20 = 0;
  __s1_len___0 = 0;
  __s2_len___0 = 0;
  tmp___30 = 0;
  tmp___35 = 0;
  tmp___36 = 0;
  tmp___37 = 0;
  tmp___38 = 0;
  tmp___41 = 0;
  __s1_len___1 = 0;
  __s2_len___1 = 0;
  tmp___51 = 0;
  tmp___56 = 0;
  tmp___57 = 0;
  tmp___58 = 0;
  tmp___59 = 0;
  demangled = (char *)((void *)0);
  if ((unsigned long )mangled == (unsigned long )((void *)0)) {
    goto __dyc_dummy_label;
  } else {
    if ((int const   )*mangled == 0) {
      goto __dyc_dummy_label;
    }
  }
  if (0) {
    if (0) {
      {
      tmp___36 = __dyc_funcallvar_1;
      __s1_len___0 = (unsigned long )tmp___36;
      tmp___37 = __dyc_funcallvar_2;
      __s2_len___0 = (unsigned long )tmp___37;
      }
      if (! ((unsigned long )((void const   *)(mangled + 1)) - (unsigned long )((void const   *)mangled) == 1UL)) {
        goto _L___2;
      } else {
        if (__s1_len___0 >= 4UL) {
          _L___2:  
          if (! ((unsigned long )((void const   *)("_D" + 1)) - (unsigned long )((void const   *)"_D") == 1UL)) {
            tmp___38 = 1;
          } else {
            if (__s2_len___0 >= 4UL) {
              tmp___38 = 1;
            } else {
              tmp___38 = 0;
            }
          }
        } else {
          tmp___38 = 0;
        }
      }
      if (tmp___38) {
        {
        tmp___30 = __dyc_funcallvar_3;
        }
      } else {
        {
        tmp___35 = __dyc_funcallvar_4;
        tmp___30 = tmp___35;
        }
      }
    } else {
      {
      tmp___35 = __dyc_funcallvar_5;
      tmp___30 = tmp___35;
      }
    }
    tmp___20 = tmp___30;
  } else {
    {
    tmp___20 = __dyc_funcallvar_6;
    }
  }
  if (tmp___20 != 0) {
    goto __dyc_dummy_label;
  }

  if (0) {
    {
    tmp___57 = __dyc_funcallvar_7;
    __s1_len___1 = (unsigned long )tmp___57;
    tmp___58 = __dyc_funcallvar_8;
    __s2_len___1 = (unsigned long )tmp___58;
    }
    if (! ((unsigned long )((void const   *)(mangled + 1)) - (unsigned long )((void const   *)mangled) == 1UL)) {
      goto _L___4;
    } else {
      if (__s1_len___1 >= 4UL) {
        _L___4:  
        if (! ((unsigned long )((void const   *)("_Dmain" + 1)) - (unsigned long )((void const   *)"_Dmain") == 1UL)) {
          tmp___59 = 1;
        } else {
          if (__s2_len___1 >= 4UL) {
            tmp___59 = 1;
          } else {
            tmp___59 = 0;
          }
        }
      } else {
        tmp___59 = 0;
      }
    }
    if (tmp___59) {
      {
      tmp___51 = __dyc_funcallvar_9;
      }
    } else {
      {
      tmp___56 = __dyc_funcallvar_10;
      tmp___51 = tmp___56;
      }
    }
  } else {
    {
    tmp___56 = __dyc_funcallvar_11;
    tmp___51 = tmp___56;
    }
  }
  if (tmp___51 == 0) {
    {

    }
  } else {
    {
    tmp___41 = __dyc_funcallvar_12;
    }
    if ((unsigned long )tmp___41 == (unsigned long )((void *)0)) {
      {

      }
    }
  }
  __dyc_dummy_label:  ;
  __dyc_print_ptr__char(demangled);
  __dyc_printpre_byte(__s1_len___0);
  __dyc_printpre_byte(__s2_len___0);
  __dyc_printpre_byte(__s1_len___1);
  __dyc_printpre_byte(__s2_len___1);
}
}
