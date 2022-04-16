#include "../../include/dycfoo.h"
#include "../../include/cp-demangle.i.hd.c.h"
void __dyc_foo(void) 
{ char const   *code ;
  struct demangle_component *right ;
  struct demangle_component *tmp___56 ;
  size_t __s1_len___1 ;
  size_t __s2_len___1 ;
  int tmp___66 ;
  int tmp___71 ;
  int tmp___72 ;
  int tmp___73 ;
  int tmp___74 ;
  size_t __s1_len___2 ;
  size_t __s2_len___2 ;
  int tmp___84 ;
  int tmp___89 ;
  int tmp___90 ;
  int tmp___91 ;
  int tmp___92 ;
  int tmp___102 ;
  struct d_info *di ;
  int __dyc_funcallvar_48 ;
  int __dyc_funcallvar_49 ;
  int __dyc_funcallvar_50 ;
  int __dyc_funcallvar_51 ;
  int __dyc_funcallvar_52 ;
  int __dyc_funcallvar_53 ;
  int __dyc_funcallvar_54 ;
  int __dyc_funcallvar_55 ;
  int __dyc_funcallvar_56 ;
  int __dyc_funcallvar_57 ;
  struct demangle_component *__dyc_funcallvar_58 ;
  struct demangle_component *__dyc_funcallvar_59 ;
  struct demangle_component *__dyc_funcallvar_60 ;
  struct demangle_component *__dyc_funcallvar_61 ;
  struct demangle_component *__dyc_funcallvar_62 ;

  {
  code = (char const   *)__dyc_read_ptr__char();
  tmp___102 = __dyc_readpre_byte();
  di = __dyc_read_ptr__comp_60d_info();
  __dyc_funcallvar_48 = __dyc_readpre_byte();
  __dyc_funcallvar_49 = __dyc_readpre_byte();
  __dyc_funcallvar_50 = __dyc_readpre_byte();
  __dyc_funcallvar_51 = __dyc_readpre_byte();
  __dyc_funcallvar_52 = __dyc_readpre_byte();
  __dyc_funcallvar_53 = __dyc_readpre_byte();
  __dyc_funcallvar_54 = __dyc_readpre_byte();
  __dyc_funcallvar_55 = __dyc_readpre_byte();
  __dyc_funcallvar_56 = __dyc_readpre_byte();
  __dyc_funcallvar_57 = __dyc_readpre_byte();
  __dyc_funcallvar_58 = __dyc_read_ptr__comp_46demangle_component();
  __dyc_funcallvar_59 = __dyc_read_ptr__comp_46demangle_component();
  __dyc_funcallvar_60 = __dyc_read_ptr__comp_46demangle_component();
  __dyc_funcallvar_61 = __dyc_read_ptr__comp_46demangle_component();
  __dyc_funcallvar_62 = __dyc_read_ptr__comp_46demangle_component();
  right = 0;
  tmp___56 = 0;
  __s1_len___1 = 0;
  __s2_len___1 = 0;
  tmp___66 = 0;
  tmp___71 = 0;
  tmp___72 = 0;
  tmp___73 = 0;
  tmp___74 = 0;
  __s1_len___2 = 0;
  __s2_len___2 = 0;
  tmp___84 = 0;
  tmp___89 = 0;
  tmp___90 = 0;
  tmp___91 = 0;
  tmp___92 = 0;
  if (tmp___102) {
    if (0) {
      {
      tmp___72 = __dyc_funcallvar_48;
      __s1_len___1 = (unsigned long )tmp___72;
      tmp___73 = __dyc_funcallvar_49;
      __s2_len___1 = (unsigned long )tmp___73;
      }
      if (! ((unsigned long )((void const   *)(code + 1)) - (unsigned long )((void const   *)code) == 1UL)) {
        goto _L___6;
      } else {
        if (__s1_len___1 >= 4UL) {
          _L___6:  
          if (! ((unsigned long )((void const   *)("dt" + 1)) - (unsigned long )((void const   *)"dt") == 1UL)) {
            tmp___74 = 1;
          } else {
            if (__s2_len___1 >= 4UL) {
              tmp___74 = 1;
            } else {
              tmp___74 = 0;
            }
          }
        } else {
          tmp___74 = 0;
        }
      }
      if (tmp___74) {
        {
        tmp___66 = __dyc_funcallvar_50;
        }
      } else {
        {
        tmp___71 = __dyc_funcallvar_51;
        tmp___66 = tmp___71;
        }
      }
    } else {
      {
      tmp___71 = __dyc_funcallvar_52;
      tmp___66 = tmp___71;
      }
    }
    if (tmp___66) {
      if (0) {
        {
        tmp___90 = __dyc_funcallvar_53;
        __s1_len___2 = (unsigned long )tmp___90;
        tmp___91 = __dyc_funcallvar_54;
        __s2_len___2 = (unsigned long )tmp___91;
        }
        if (! ((unsigned long )((void const   *)(code + 1)) - (unsigned long )((void const   *)code) == 1UL)) {
          goto _L___8;
        } else {
          if (__s1_len___2 >= 4UL) {
            _L___8:  
            if (! ((unsigned long )((void const   *)("pt" + 1)) - (unsigned long )((void const   *)"pt") == 1UL)) {
              tmp___92 = 1;
            } else {
              if (__s2_len___2 >= 4UL) {
                tmp___92 = 1;
              } else {
                tmp___92 = 0;
              }
            }
          } else {
            tmp___92 = 0;
          }
        }
        if (tmp___92) {
          {
          tmp___84 = __dyc_funcallvar_55;
          }
        } else {
          {
          tmp___89 = __dyc_funcallvar_56;
          tmp___84 = tmp___89;
          }
        }
      } else {
        {
        tmp___89 = __dyc_funcallvar_57;
        tmp___84 = tmp___89;
        }
      }
      if (tmp___84) {
        {
        right = __dyc_funcallvar_58;
        }
      } else {
        _L___9:  
        {
        right = __dyc_funcallvar_59;
        }
        if ((int const   )*(di->n) == 73) {
          {
          tmp___56 = __dyc_funcallvar_60;
          right = __dyc_funcallvar_61;
          }
        }
      }
    } else {
      goto _L___9;
    }
  } else {
    {
    right = __dyc_funcallvar_62;
    }
  }
  __dyc_dummy_label:  ;
  __dyc_print_ptr__comp_46demangle_component(right);
  __dyc_print_ptr__comp_46demangle_component(tmp___56);
  __dyc_printpre_byte(__s1_len___1);
  __dyc_printpre_byte(__s2_len___1);
  __dyc_printpre_byte(__s1_len___2);
  __dyc_printpre_byte(__s2_len___2);
}
}
