#include "../../include/dycfoo.h"
#include "../../include/cplus-dem.i.hd.c.h"
void __dyc_foo(void) 
{ char const   * const  operators[20][2] ;
  char const   *p ;
  char *d ;
  int k ;
  size_t slen ;
  size_t tmp___45 ;
  char *tmp___46 ;
  char *tmp___47 ;
  int tmp___69 ;
  size_t __s1_len___2 ;
  size_t __s2_len___2 ;
  int tmp___79 ;
  int tmp___84 ;
  int tmp___85 ;
  int tmp___86 ;
  int tmp___87 ;
  size_t __dyc_funcallvar_9 ;
  int __dyc_funcallvar_10 ;
  int __dyc_funcallvar_11 ;
  int __dyc_funcallvar_12 ;
  int __dyc_funcallvar_13 ;
  int __dyc_funcallvar_14 ;
  int __dyc_funcallvar_15 ;
  size_t __dyc_funcallvar_16 ;

  {
  p = (char const   *)__dyc_read_ptr__char();
  d = __dyc_read_ptr__char();
  k = __dyc_readpre_byte();
  __dyc_funcallvar_9 = (size_t )__dyc_readpre_byte();
  __dyc_funcallvar_10 = __dyc_readpre_byte();
  __dyc_funcallvar_11 = __dyc_readpre_byte();
  __dyc_funcallvar_12 = __dyc_readpre_byte();
  __dyc_funcallvar_13 = __dyc_readpre_byte();
  __dyc_funcallvar_14 = __dyc_readpre_byte();
  __dyc_funcallvar_15 = __dyc_readpre_byte();
  __dyc_funcallvar_16 = (size_t )__dyc_readpre_byte();
  slen = 0;
  tmp___45 = 0;
  tmp___46 = 0;
  tmp___47 = 0;
  tmp___69 = 0;
  __s1_len___2 = 0;
  __s2_len___2 = 0;
  tmp___79 = 0;
  tmp___84 = 0;
  tmp___85 = 0;
  tmp___86 = 0;
  tmp___87 = 0;
  while (1) {
    while_4_continue:  ;
    if (! ((unsigned long )operators[k][0] != (unsigned long )((void *)0))) {
      goto while_4_break;
    }
    {
    tmp___45 = __dyc_funcallvar_9;
    slen = tmp___45;
    }
    if (0) {
      if (0) {
        {
        tmp___85 = __dyc_funcallvar_10;
        __s1_len___2 = (unsigned long )tmp___85;
        tmp___86 = __dyc_funcallvar_11;
        __s2_len___2 = (unsigned long )tmp___86;
        }
        if (! ((unsigned long )((void const   *)(p + 1)) - (unsigned long )((void const   *)p) == 1UL)) {
          goto _L___6;
        } else {
          if (__s1_len___2 >= 4UL) {
            _L___6:  
            if (! ((unsigned long )((void const   *)(operators[k][0] + 1)) - (unsigned long )((void const   *)operators[k][0]) == 1UL)) {
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
          tmp___79 = __dyc_funcallvar_12;
          }
        } else {
          {
          tmp___84 = __dyc_funcallvar_13;
          tmp___79 = tmp___84;
          }
        }
      } else {
        {
        tmp___84 = __dyc_funcallvar_14;
        tmp___79 = tmp___84;
        }
      }
      tmp___69 = tmp___79;
    } else {
      {
      tmp___69 = __dyc_funcallvar_15;
      }
    }
    if (tmp___69 == 0) {
      {
      p += slen;
      slen = __dyc_funcallvar_16;
      tmp___46 = d;
      d ++;
      *tmp___46 = (char )'\"';

      d += slen;
      tmp___47 = d;
      d ++;
      *tmp___47 = (char )'\"';
      }
      goto while_4_break;
    }
    k ++;
  }
  while_4_break:  ;
  if ((unsigned long )operators[k][0] == (unsigned long )((void *)0)) {
    goto __dyc_dummy_label;
  }
  __dyc_dummy_label:  ;
  __dyc_print_ptr__char(p);
  __dyc_print_ptr__char(d);
  __dyc_printpre_byte(slen);
  __dyc_printpre_byte(__s1_len___2);
  __dyc_printpre_byte(__s2_len___2);
}
}
