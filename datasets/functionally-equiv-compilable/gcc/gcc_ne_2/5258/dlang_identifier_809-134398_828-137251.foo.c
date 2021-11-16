#include "../../include/dycfoo.h"
#include "../../include/d-demangle.i.hd.c.h"
void __dyc_foo(void) 
{ unsigned short const   _sch_istable[256] ;
  long len ;
  char const   *endptr ;
  long psize ;
  char const   *pend ;
  int tmp___22 ;
  size_t __s1_len___0 ;
  size_t __s2_len___0 ;
  int tmp___32 ;
  int tmp___37 ;
  int tmp___38 ;
  int tmp___39 ;
  int tmp___40 ;
  char const   *mangled ;
  char const   *__dyc_funcallvar_3 ;
  int __dyc_funcallvar_4 ;
  int __dyc_funcallvar_5 ;
  int __dyc_funcallvar_6 ;
  int __dyc_funcallvar_7 ;
  int __dyc_funcallvar_8 ;
  int __dyc_funcallvar_9 ;
  char const   *__dyc_funcallvar_10 ;

  {
  len = (long )__dyc_readpre_byte();
  endptr = (char const   *)__dyc_read_ptr__char();
  psize = (long )__dyc_readpre_byte();
  pend = (char const   *)__dyc_read_ptr__char();
  mangled = (char const   *)__dyc_read_ptr__char();
  __dyc_funcallvar_3 = (char const   *)__dyc_read_ptr__char();
  __dyc_funcallvar_4 = __dyc_readpre_byte();
  __dyc_funcallvar_5 = __dyc_readpre_byte();
  __dyc_funcallvar_6 = __dyc_readpre_byte();
  __dyc_funcallvar_7 = __dyc_readpre_byte();
  __dyc_funcallvar_8 = __dyc_readpre_byte();
  __dyc_funcallvar_9 = __dyc_readpre_byte();
  __dyc_funcallvar_10 = (char const   *)__dyc_read_ptr__char();
  tmp___22 = 0;
  __s1_len___0 = 0;
  __s2_len___0 = 0;
  tmp___32 = 0;
  tmp___37 = 0;
  tmp___38 = 0;
  tmp___39 = 0;
  tmp___40 = 0;
  if (psize == 0L) {
    psize = len;
    pend = endptr;
    endptr = (char const   *)((void *)0);
  }
  if ((int const   )_sch_istable[(int const   )*mangled & 255] & 4) {
    {
    mangled = __dyc_funcallvar_3;
    }
  } else {
    if (0) {
      if (0) {
        {
        tmp___38 = __dyc_funcallvar_4;
        __s1_len___0 = (unsigned long )tmp___38;
        tmp___39 = __dyc_funcallvar_5;
        __s2_len___0 = (unsigned long )tmp___39;
        }
        if (! ((unsigned long )((void const   *)(mangled + 1)) - (unsigned long )((void const   *)mangled) == 1UL)) {
          goto _L___2;
        } else {
          if (__s1_len___0 >= 4UL) {
            _L___2:  
            if (! ((unsigned long )((void const   *)("_D" + 1)) - (unsigned long )((void const   *)"_D") == 1UL)) {
              tmp___40 = 1;
            } else {
              if (__s2_len___0 >= 4UL) {
                tmp___40 = 1;
              } else {
                tmp___40 = 0;
              }
            }
          } else {
            tmp___40 = 0;
          }
        }
        if (tmp___40) {
          {
          tmp___32 = __dyc_funcallvar_6;
          }
        } else {
          {
          tmp___37 = __dyc_funcallvar_7;
          tmp___32 = tmp___37;
          }
        }
      } else {
        {
        tmp___37 = __dyc_funcallvar_8;
        tmp___32 = tmp___37;
        }
      }
      tmp___22 = tmp___32;
    } else {
      {
      tmp___22 = __dyc_funcallvar_9;
      }
    }
    if (tmp___22 == 0) {
      {
      mangled = __dyc_funcallvar_10;
      }
    }
  }
  if (mangled) {
    if ((long )(mangled - pend) == psize) {
      goto __dyc_dummy_label;
    }
  }
  psize /= 10L;
  __dyc_dummy_label:  ;
  __dyc_print_ptr__char(endptr);
  __dyc_printpre_byte(psize);
  __dyc_print_ptr__char(pend);
  __dyc_printpre_byte(__s1_len___0);
  __dyc_printpre_byte(__s2_len___0);
}
}
