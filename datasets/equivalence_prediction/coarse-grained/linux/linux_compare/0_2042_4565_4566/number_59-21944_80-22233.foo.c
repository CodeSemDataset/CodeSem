#include "../../include/dycfoo.h"
#include "../../include/printf.i.hd.c.h"
void __dyc_foo(void) 
{ char sign ;
  char tmp[66] ;
  char const   *digits ;
  int i ;
  int tmp___0 ;
  int tmp___1 ;
  int __res ;
  long num ;
  int base ;
  int size ;
  int type ;

  {
  digits = (char const   *)__dyc_read_ptr__char();
  num = (long )__dyc_readpre_byte();
  base = __dyc_readpre_byte();
  size = __dyc_readpre_byte();
  type = __dyc_readpre_byte();
  sign = 0;
  i = 0;
  tmp___0 = 0;
  tmp___1 = 0;
  __res = 0;
  sign = (char)0;
  if (type & 2) {
    if (num < 0L) {
      sign = (char )'-';
      num = - num;
      size --;
    } else {
      if (type & 4) {
        sign = (char )'+';
        size --;
      } else {
        if (type & 8) {
          sign = (char )' ';
          size --;
        }
      }
    }
  }
  if (type & 32) {
    if (base == 16) {
      size -= 2;
    } else {
      if (base == 8) {
        size --;
      }
    }
  }
  i = 0;
  if (num == 0L) {
    tmp___0 = i;
    i ++;
    tmp[tmp___0] = (char )'0';
  } else {
    {
    while (1) {
      while_1_continue:  ;
      if (! (num != 0L)) {
        goto while_1_break;
      }
      tmp___1 = i;
      i ++;
      __res = (int )((unsigned long )num % (unsigned long )((unsigned int )base));
      num = (long )((unsigned long )num / (unsigned long )((unsigned int )base));
      tmp[tmp___1] = (char )*(digits + __res);
    }
    while_1_break:  ;
    }
  }
  __dyc_dummy_label:  ;
  __dyc_printpre_byte(sign);
  __dyc_printpre_byte(i);
  __dyc_printpre_byte(size);
}
}
