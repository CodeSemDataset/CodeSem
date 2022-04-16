#include "../../include/dycfoo.h"
#include "../../include/util.i.hd.c.h"
void __dyc_foo(void) 
{ char buf[256] ;
  long double value ;
  char *eptr ;
  unsigned short const   **tmp___0 ;
  int *tmp___1 ;
  double tmp___2 ;
  double tmp___3 ;
  int *tmp___4 ;
  int tmp___9 ;
  long double __dyc_funcallvar_2 ;
  unsigned short const   **__dyc_funcallvar_3 ;
  int *__dyc_funcallvar_4 ;
  double __dyc_funcallvar_5 ;
  double __dyc_funcallvar_6 ;
  int *__dyc_funcallvar_7 ;
  int __dyc_funcallvar_8 ;
  int __dyc_funcallvar_9 ;
  int __dyc_funcallvar_10 ;

  {
  eptr = __dyc_read_ptr__char();
  __dyc_funcallvar_2 = (long double )__dyc_readpre_byte();
  __dyc_funcallvar_3 = (unsigned short const   **)__dyc_read_ptr__ptr__short();
  __dyc_funcallvar_4 = __dyc_read_ptr__int();
  __dyc_funcallvar_5 = (double )__dyc_readpre_byte();
  __dyc_funcallvar_6 = (double )__dyc_readpre_byte();
  __dyc_funcallvar_7 = __dyc_read_ptr__int();
  __dyc_funcallvar_8 = __dyc_readpre_byte();
  __dyc_funcallvar_9 = __dyc_readpre_byte();
  __dyc_funcallvar_10 = __dyc_readpre_byte();
  value = 0;
  tmp___0 = 0;
  tmp___1 = 0;
  tmp___2 = 0;
  tmp___3 = 0;
  tmp___4 = 0;
  tmp___9 = 0;
  value = __dyc_funcallvar_2;
  tmp___0 = __dyc_funcallvar_3;
  if (! ((int const   )*(*tmp___0 + (int )buf[0]) & 8192)) {
    if ((int )*(eptr + 0) != 0) {
      goto __dyc_dummy_label;
    } else {
      {
      tmp___1 = __dyc_funcallvar_4;
      }
      if (*tmp___1 == 34) {
        {
        tmp___2 = __dyc_funcallvar_5;
        }
        if (value == (long double )tmp___2) {
          goto __dyc_dummy_label;
        } else {
          {
          tmp___3 = __dyc_funcallvar_6;
          }
          if (value == (long double )(- tmp___3)) {
            goto __dyc_dummy_label;
          } else {
            if (value == (long double )0) {
              goto __dyc_dummy_label;
            } else {
              goto _L;
            }
          }
        }
      } else {
        _L:  
        {
        tmp___4 = __dyc_funcallvar_7;
        }
        if (*tmp___4 == 22) {
          goto __dyc_dummy_label;
        } else {
          if (sizeof(long double ) == sizeof(float )) {
            {
            tmp___9 = __dyc_funcallvar_8;
            }
          } else {
            if (sizeof(long double ) == sizeof(double )) {
              {
              tmp___9 = __dyc_funcallvar_9;
              }
            } else {
              {
              tmp___9 = __dyc_funcallvar_10;
              }
            }
          }
          if (tmp___9) {
            goto __dyc_dummy_label;
          }
        }
      }
    }
  }
  __dyc_dummy_label:  ;
  __dyc_printpre_byte(value);
}
}
