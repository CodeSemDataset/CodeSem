#include "../../include/dycfoo.h"
#include "../../include/printf.i.hd.c.h"
void __dyc_foo(void) 
{ char c ;
  char sign ;
  char tmp[66] ;
  char const   *digits ;
  int i ;
  int tmp___0 ;
  int tmp___1 ;
  int __res ;
  char *tmp___2 ;
  int tmp___3 ;
  char *tmp___4 ;
  char *tmp___5 ;
  char *tmp___6 ;
  char *tmp___7 ;
  char *tmp___8 ;
  int tmp___9 ;
  char *str ;
  long num ;
  int base ;
  int size ;
  int precision ;
  int type ;

  {
  digits = (char const   *)__dyc_read_ptr__char();
  str = __dyc_read_ptr__char();
  num = (long )__dyc_readpre_byte();
  base = __dyc_readpre_byte();
  size = __dyc_readpre_byte();
  precision = __dyc_readpre_byte();
  type = __dyc_readpre_byte();
  c = 0;
  sign = 0;
  i = 0;
  tmp___0 = 0;
  tmp___1 = 0;
  __res = 0;
  tmp___2 = 0;
  tmp___3 = 0;
  tmp___4 = 0;
  tmp___5 = 0;
  tmp___6 = 0;
  tmp___7 = 0;
  tmp___8 = 0;
  tmp___9 = 0;
  if (base < 2) {
    goto __dyc_dummy_label;
  } else {
    if (base > 36) {
      goto __dyc_dummy_label;
    }
  }
  if (type & 1) {
    c = (char )'0';
  } else {
    c = (char )' ';
  }
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
  if (type & 32) {
    if (base == 8) {
      tmp___5 = str;
      str ++;
      *tmp___5 = (char )'0';
    } else {
      if (base == 16) {
        tmp___6 = str;
        str ++;
        *tmp___6 = (char )'0';
        tmp___7 = str;
        str ++;
        *tmp___7 = (char )*(digits + 33);
      }
    }
  }
  if (! (type & 16)) {
    {
    while (1) {
      while_3_continue:  ;
      tmp___9 = size;
      size --;
      if (! (tmp___9 > 0)) {
        goto while_3_break;
      }
      tmp___8 = str;
      str ++;
      *tmp___8 = c;
    }
    while_3_break:  ;
    }
  }
  __dyc_dummy_label:  ;
  __dyc_printpre_byte(c);
  __dyc_print_ptr__char(str);
  __dyc_printpre_byte(size);
}
}
