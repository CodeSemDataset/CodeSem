#include "../../include/dycfoo.h"
#include "../../include/printf.i.hd.c.h"
void __dyc_foo(void) 
{ char sign ;
  char *tmp___2 ;
  int tmp___3 ;
  char *tmp___4 ;
  char *str ;
  int size ;
  int type ;

  {
  sign = (char )__dyc_readpre_byte();
  str = __dyc_read_ptr__char();
  size = __dyc_readpre_byte();
  type = __dyc_readpre_byte();
  tmp___2 = 0;
  tmp___3 = 0;
  tmp___4 = 0;
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
