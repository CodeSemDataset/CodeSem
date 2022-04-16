#include "../../include/dycfoo.h"
#include "../../include/d-demangle.i.hd.c.h"
void __dyc_foo(void) 
{ long len ;
  int tmp___45 ;
  int tmp___46 ;
  int tmp___68 ;
  size_t __s1_len___2 ;
  size_t __s2_len___2 ;
  int tmp___78 ;
  int tmp___83 ;
  int tmp___84 ;
  int tmp___85 ;
  int tmp___86 ;
  int tmp___110 ;
  size_t __s1_len___4 ;
  size_t __s2_len___4 ;
  int tmp___120 ;
  int tmp___125 ;
  int tmp___126 ;
  int tmp___127 ;
  int tmp___128 ;
  int tmp___152 ;
  char const   *mangled ;
  int __dyc_funcallvar_26 ;
  int __dyc_funcallvar_27 ;
  int __dyc_funcallvar_28 ;
  int __dyc_funcallvar_29 ;
  int __dyc_funcallvar_30 ;
  int __dyc_funcallvar_31 ;
  int __dyc_funcallvar_32 ;
  int __dyc_funcallvar_33 ;
  int __dyc_funcallvar_34 ;
  int __dyc_funcallvar_35 ;
  int __dyc_funcallvar_36 ;
  int __dyc_funcallvar_37 ;
  int __dyc_funcallvar_38 ;
  int __dyc_funcallvar_39 ;

  {
  len = (long )__dyc_readpre_byte();
  tmp___152 = __dyc_readpre_byte();
  mangled = (char const   *)__dyc_read_ptr__char();
  __dyc_funcallvar_26 = __dyc_readpre_byte();
  __dyc_funcallvar_27 = __dyc_readpre_byte();
  __dyc_funcallvar_28 = __dyc_readpre_byte();
  __dyc_funcallvar_29 = __dyc_readpre_byte();
  __dyc_funcallvar_30 = __dyc_readpre_byte();
  __dyc_funcallvar_31 = __dyc_readpre_byte();
  __dyc_funcallvar_32 = __dyc_readpre_byte();
  __dyc_funcallvar_33 = __dyc_readpre_byte();
  __dyc_funcallvar_34 = __dyc_readpre_byte();
  __dyc_funcallvar_35 = __dyc_readpre_byte();
  __dyc_funcallvar_36 = __dyc_readpre_byte();
  __dyc_funcallvar_37 = __dyc_readpre_byte();
  __dyc_funcallvar_38 = __dyc_readpre_byte();
  __dyc_funcallvar_39 = __dyc_readpre_byte();
  tmp___45 = 0;
  tmp___46 = 0;
  tmp___68 = 0;
  __s1_len___2 = 0;
  __s2_len___2 = 0;
  tmp___78 = 0;
  tmp___83 = 0;
  tmp___84 = 0;
  tmp___85 = 0;
  tmp___86 = 0;
  tmp___110 = 0;
  __s1_len___4 = 0;
  __s2_len___4 = 0;
  tmp___120 = 0;
  tmp___125 = 0;
  tmp___126 = 0;
  tmp___127 = 0;
  tmp___128 = 0;
  if (tmp___152 == 0) {
    {

    mangled += len;
    }
    goto __dyc_dummy_label;
  } else {
    if (0) {
      if (0) {
        {
        tmp___126 = __dyc_funcallvar_26;
        __s1_len___4 = (unsigned long )tmp___126;
        tmp___127 = __dyc_funcallvar_27;
        __s2_len___4 = (unsigned long )tmp___127;
        }
        if (! ((unsigned long )((void const   *)(mangled + 1)) - (unsigned long )((void const   *)mangled) == 1UL)) {
          goto _L___10;
        } else {
          if (__s1_len___4 >= 4UL) {
            _L___10:  
            if (! ((unsigned long )((void const   *)("__initZ" + 1)) - (unsigned long )((void const   *)"__initZ") == 1UL)) {
              tmp___128 = 1;
            } else {
              if (__s2_len___4 >= 4UL) {
                tmp___128 = 1;
              } else {
                tmp___128 = 0;
              }
            }
          } else {
            tmp___128 = 0;
          }
        }
        if (tmp___128) {
          {
          tmp___120 = __dyc_funcallvar_28;
          }
        } else {
          {
          tmp___125 = __dyc_funcallvar_29;
          tmp___120 = tmp___125;
          }
        }
      } else {
        {
        tmp___125 = __dyc_funcallvar_30;
        tmp___120 = tmp___125;
        }
      }
      tmp___110 = tmp___120;
    } else {
      {
      tmp___110 = __dyc_funcallvar_31;
      }
    }
    if (tmp___110 == 0) {
      {

      tmp___45 = __dyc_funcallvar_32;

      mangled += len;
      }
      goto __dyc_dummy_label;
    } else {
      if (0) {
        if (0) {
          {
          tmp___84 = __dyc_funcallvar_33;
          __s1_len___2 = (unsigned long )tmp___84;
          tmp___85 = __dyc_funcallvar_34;
          __s2_len___2 = (unsigned long )tmp___85;
          }
          if (! ((unsigned long )((void const   *)(mangled + 1)) - (unsigned long )((void const   *)mangled) == 1UL)) {
            goto _L___6;
          } else {
            if (__s1_len___2 >= 4UL) {
              _L___6:  
              if (! ((unsigned long )((void const   *)("__vtblZ" + 1)) - (unsigned long )((void const   *)"__vtblZ") == 1UL)) {
                tmp___86 = 1;
              } else {
                if (__s2_len___2 >= 4UL) {
                  tmp___86 = 1;
                } else {
                  tmp___86 = 0;
                }
              }
            } else {
              tmp___86 = 0;
            }
          }
          if (tmp___86) {
            {
            tmp___78 = __dyc_funcallvar_35;
            }
          } else {
            {
            tmp___83 = __dyc_funcallvar_36;
            tmp___78 = tmp___83;
            }
          }
        } else {
          {
          tmp___83 = __dyc_funcallvar_37;
          tmp___78 = tmp___83;
          }
        }
        tmp___68 = tmp___78;
      } else {
        {
        tmp___68 = __dyc_funcallvar_38;
        }
      }
      if (tmp___68 == 0) {
        {

        tmp___46 = __dyc_funcallvar_39;

        mangled += len;
        }
        goto __dyc_dummy_label;
      }
    }
  }
  __dyc_dummy_label:  ;
  __dyc_printpre_byte(tmp___45);
  __dyc_printpre_byte(tmp___46);
  __dyc_printpre_byte(__s1_len___2);
  __dyc_printpre_byte(__s2_len___2);
  __dyc_printpre_byte(__s1_len___4);
  __dyc_printpre_byte(__s2_len___4);
  __dyc_print_ptr__char(mangled);
}
}
