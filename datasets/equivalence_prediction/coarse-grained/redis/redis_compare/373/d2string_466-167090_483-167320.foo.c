#include "../../include/dycfoo.h"
#include "../../include/util.i.hd.c.h"
void __dyc_foo(void) 
{ int tmp___2 ;
  int tmp___3 ;
  double min ;
  double max ;
  int tmp___4 ;
  int tmp___5 ;
  size_t len ;
  double value ;
  int __dyc_funcallvar_10 ;
  int __dyc_funcallvar_11 ;
  int __dyc_funcallvar_12 ;
  int __dyc_funcallvar_13 ;
  int __dyc_funcallvar_14 ;
  int __dyc_funcallvar_15 ;

  {
  value = (double )__dyc_readpre_byte();
  __dyc_funcallvar_10 = __dyc_readpre_byte();
  __dyc_funcallvar_11 = __dyc_readpre_byte();
  __dyc_funcallvar_12 = __dyc_readpre_byte();
  __dyc_funcallvar_13 = __dyc_readpre_byte();
  __dyc_funcallvar_14 = __dyc_readpre_byte();
  __dyc_funcallvar_15 = __dyc_readpre_byte();
  tmp___2 = 0;
  tmp___3 = 0;
  min = 0;
  max = 0;
  tmp___4 = 0;
  tmp___5 = 0;
  len = 0;
  if (1.0 / value < (double )0) {
    {
    tmp___2 = __dyc_funcallvar_10;
    len = (unsigned long )tmp___2;
    }
  } else {
    {
    tmp___3 = __dyc_funcallvar_11;
    len = (unsigned long )tmp___3;
    }
  }
  min = (double )-4503599627370495LL;
  max = (double )4503599627370496LL;
  if (value > min) {
    if (value < max) {
      if (value == (double )((long long )value)) {
        {
        tmp___4 = __dyc_funcallvar_12;
        len = (unsigned long )tmp___4;
        }
      } else {
        {
        tmp___5 = __dyc_funcallvar_13;
        len = (unsigned long )tmp___5;
        }
      }
    } else {
      {
      tmp___5 = __dyc_funcallvar_14;
      len = (unsigned long )tmp___5;
      }
    }
  } else {
    {
    tmp___5 = __dyc_funcallvar_15;
    len = (unsigned long )tmp___5;
    }
  }
  __dyc_dummy_label:  ;
  __dyc_printpre_byte(max);
  __dyc_printpre_byte(len);
}
}
