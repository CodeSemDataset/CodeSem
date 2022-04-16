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
  char *tmp___2 ;
  int tmp___3 ;
  char *tmp___4 ;
  char *str ;
  long num ;
  int base ;
  int size ;
  int precision ;
  int type ;

  {
  sign = (char )__dyc_readpre_byte();
  digits = (char const   *)__dyc_read_ptr__char();
  str = __dyc_read_ptr__char();
  num = (long )__dyc_readpre_byte();
  base = __dyc_readpre_byte();
  size = __dyc_readpre_byte();
  precision = __dyc_readpre_byte();
  type = __dyc_readpre_byte();
  i = 0;
  tmp___0 = 0;
  tmp___1 = 0;
  __res = 0;
  tmp___2 = 0;
  tmp___3 = 0;
  tmp___4 = 0;
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
  if (i > precision) {
    precision = i;
  }
  size -= precision;
  if (! (type & 17)) {
    {
    while (1) {
      while_2_continue:  ;
      tmp___3 = size;
      size --;
      if (! (tmp___3 > 0)) {
        goto while_2_break;
      }
      tmp___2 = str;
      str ++;
      *tmp___2 = (char )' ';
    }
    while_2_break:  ;
    }
  }
  if (sign) {
    tmp___4 = str;
    str ++;
    *tmp___4 = sign;
  }
  __dyc_dummy_label:  ;
  __dyc_print_ptr__char(str);
  __dyc_printpre_byte(size);
}
}
