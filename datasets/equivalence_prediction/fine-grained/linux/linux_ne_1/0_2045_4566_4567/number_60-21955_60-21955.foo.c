#include "../../include/dycfoo.h"
#include "../../include/printf.i.hd.c.h"
void __dyc_foo(void) 
{ char sign ;
  long num ;
  int size ;
  int type ;

  {
  num = (long )__dyc_readpre_byte();
  size = __dyc_readpre_byte();
  type = __dyc_readpre_byte();
  sign = 0;
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
  __dyc_dummy_label:  ;
  __dyc_printpre_byte(sign);
  __dyc_printpre_byte(num);
  __dyc_printpre_byte(size);
}
}
