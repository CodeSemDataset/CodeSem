#include "../../include/dycfoo.h"
#include "../../include/d-demangle.i.hd.c.h"
void __dyc_foo(void) 
{ int tmp___20 ;
  size_t __s1_len___0 ;
  size_t __s2_len___0 ;
  int tmp___30 ;
  int tmp___35 ;
  int tmp___36 ;
  int tmp___37 ;
  int tmp___38 ;
  int tmp___62 ;
  size_t __s1_len___2 ;
  size_t __s2_len___2 ;
  int tmp___72 ;
  int tmp___77 ;
  int tmp___78 ;
  int tmp___79 ;
  int tmp___80 ;
  int tmp___104 ;
  char const   *mangled ;
  int __dyc_funcallvar_7 ;
  int __dyc_funcallvar_8 ;
  int __dyc_funcallvar_9 ;
  int __dyc_funcallvar_10 ;
  int __dyc_funcallvar_11 ;
  int __dyc_funcallvar_12 ;
  int __dyc_funcallvar_13 ;
  int __dyc_funcallvar_14 ;
  int __dyc_funcallvar_15 ;
  int __dyc_funcallvar_16 ;
  int __dyc_funcallvar_17 ;
  int __dyc_funcallvar_18 ;

  {
  tmp___104 = __dyc_readpre_byte();
  mangled = (char const   *)__dyc_read_ptr__char();
  __dyc_funcallvar_7 = __dyc_readpre_byte();
  __dyc_funcallvar_8 = __dyc_readpre_byte();
  __dyc_funcallvar_9 = __dyc_readpre_byte();
  __dyc_funcallvar_10 = __dyc_readpre_byte();
  __dyc_funcallvar_11 = __dyc_readpre_byte();
  __dyc_funcallvar_12 = __dyc_readpre_byte();
  __dyc_funcallvar_13 = __dyc_readpre_byte();
  __dyc_funcallvar_14 = __dyc_readpre_byte();
  __dyc_funcallvar_15 = __dyc_readpre_byte();
  __dyc_funcallvar_16 = __dyc_readpre_byte();
  __dyc_funcallvar_17 = __dyc_readpre_byte();
  __dyc_funcallvar_18 = __dyc_readpre_byte();
  tmp___20 = 0;
  __s1_len___0 = 0;
  __s2_len___0 = 0;
  tmp___30 = 0;
  tmp___35 = 0;
  tmp___36 = 0;
  tmp___37 = 0;
  tmp___38 = 0;
  tmp___62 = 0;
  __s1_len___2 = 0;
  __s2_len___2 = 0;
  tmp___72 = 0;
  tmp___77 = 0;
  tmp___78 = 0;
  tmp___79 = 0;
  tmp___80 = 0;
  if (tmp___104 == 0) {
    {

    mangled += 3;
    }
    goto __dyc_dummy_label;
  } else {
    if (0) {
      if (0) {
        {
        tmp___78 = __dyc_funcallvar_7;
        __s1_len___2 = (unsigned long )tmp___78;
        tmp___79 = __dyc_funcallvar_8;
        __s2_len___2 = (unsigned long )tmp___79;
        }
        if (! ((unsigned long )((void const   *)(mangled + 1)) - (unsigned long )((void const   *)mangled) == 1UL)) {
          goto _L___6;
        } else {
          if (__s1_len___2 >= 4UL) {
            _L___6:  
            if (! ((unsigned long )((void const   *)("INF" + 1)) - (unsigned long )((void const   *)"INF") == 1UL)) {
              tmp___80 = 1;
            } else {
              if (__s2_len___2 >= 4UL) {
                tmp___80 = 1;
              } else {
                tmp___80 = 0;
              }
            }
          } else {
            tmp___80 = 0;
          }
        }
        if (tmp___80) {
          {
          tmp___72 = __dyc_funcallvar_9;
          }
        } else {
          {
          tmp___77 = __dyc_funcallvar_10;
          tmp___72 = tmp___77;
          }
        }
      } else {
        {
        tmp___77 = __dyc_funcallvar_11;
        tmp___72 = tmp___77;
        }
      }
      tmp___62 = tmp___72;
    } else {
      {
      tmp___62 = __dyc_funcallvar_12;
      }
    }
    if (tmp___62 == 0) {
      {

      mangled += 3;
      }
      goto __dyc_dummy_label;
    } else {
      if (0) {
        if (0) {
          {
          tmp___36 = __dyc_funcallvar_13;
          __s1_len___0 = (unsigned long )tmp___36;
          tmp___37 = __dyc_funcallvar_14;
          __s2_len___0 = (unsigned long )tmp___37;
          }
          if (! ((unsigned long )((void const   *)(mangled + 1)) - (unsigned long )((void const   *)mangled) == 1UL)) {
            goto _L___2;
          } else {
            if (__s1_len___0 >= 4UL) {
              _L___2:  
              if (! ((unsigned long )((void const   *)("NINF" + 1)) - (unsigned long )((void const   *)"NINF") == 1UL)) {
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
            tmp___30 = __dyc_funcallvar_15;
            }
          } else {
            {
            tmp___35 = __dyc_funcallvar_16;
            tmp___30 = tmp___35;
            }
          }
        } else {
          {
          tmp___35 = __dyc_funcallvar_17;
          tmp___30 = tmp___35;
          }
        }
        tmp___20 = tmp___30;
      } else {
        {
        tmp___20 = __dyc_funcallvar_18;
        }
      }
      if (tmp___20 == 0) {
        {

        mangled += 4;
        }
        goto __dyc_dummy_label;
      }
    }
  }
  __dyc_dummy_label:  ;
  __dyc_printpre_byte(__s1_len___0);
  __dyc_printpre_byte(__s2_len___0);
  __dyc_printpre_byte(__s1_len___2);
  __dyc_printpre_byte(__s2_len___2);
  __dyc_print_ptr__char(mangled);
}
}
