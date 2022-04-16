#include "../../include/dycfoo.h"
#include "../../include/util.i.hd.c.h"
void __dyc_foo(void) 
{ double min ;
  double max ;
  int tmp___4 ;
  int tmp___5 ;
  size_t len ;
  double value ;
  int __dyc_funcallvar_12 ;
  int __dyc_funcallvar_13 ;
  int __dyc_funcallvar_14 ;
  int __dyc_funcallvar_15 ;

  {
  min = (double )__dyc_readpre_byte();
  max = (double )__dyc_readpre_byte();
  value = (double )__dyc_readpre_byte();
  __dyc_funcallvar_12 = __dyc_readpre_byte();
  __dyc_funcallvar_13 = __dyc_readpre_byte();
  __dyc_funcallvar_14 = __dyc_readpre_byte();
  __dyc_funcallvar_15 = __dyc_readpre_byte();
  tmp___4 = 0;
  tmp___5 = 0;
  len = 0;
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
  __dyc_printpre_byte(len);
}
}
