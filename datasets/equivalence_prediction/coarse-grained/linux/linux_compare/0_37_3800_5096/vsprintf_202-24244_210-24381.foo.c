#include "../../include/dycfoo.h"
#include "../../include/printf.i.hd.c.h"
void __dyc_foo(void) 
{ int len ;
  char *str ;
  int field_width ;
  char *tmp___5 ;
  char *tmp___7 ;
  int tmp___8 ;

  {
  len = __dyc_readpre_byte();
  str = __dyc_read_ptr__char();
  field_width = __dyc_readpre_byte();
  tmp___5 = 0;
  tmp___7 = 0;
  tmp___8 = 0;
  tmp___5 = str;
  str ++;
  *tmp___5 = (char )' ';
  while (1) {
    while_12_continue:  ;
    tmp___8 = field_width;
    field_width --;
    if (! (len < tmp___8)) {
      goto __dyc_dummy_label;
    }
    tmp___7 = str;
    str ++;
    *tmp___7 = (char )' ';
  }
  __dyc_dummy_label:  ;
  __dyc_print_ptr__char(str);
  __dyc_printpre_byte(field_width);
}
}
