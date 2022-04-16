#include "../../include/dycfoo.h"
#include "../../include/printf.i.hd.c.h"
void __dyc_foo(void) 
{ char tmp[66] ;
  int i ;
  char *tmp___12 ;
  int tmp___13 ;
  char *tmp___14 ;
  int tmp___15 ;
  char *str ;
  int size ;

  {
  i = __dyc_readpre_byte();
  str = __dyc_read_ptr__char();
  size = __dyc_readpre_byte();
  tmp___12 = 0;
  tmp___13 = 0;
  tmp___14 = 0;
  tmp___15 = 0;
  while (1) {
    while_5_continue:  ;
    tmp___13 = i;
    i --;
    if (! (tmp___13 > 0)) {
      goto while_5_break;
    }
    tmp___12 = str;
    str ++;
    *tmp___12 = tmp[i];
  }
  while_5_break:  ;
  while (1) {
    while_6_continue:  ;
    tmp___15 = size;
    size --;
    if (! (tmp___15 > 0)) {
      goto __dyc_dummy_label;
    }
    tmp___14 = str;
    str ++;
    *tmp___14 = (char )' ';
  }
  __dyc_dummy_label:  ;
  __dyc_printpre_byte(i);
  __dyc_print_ptr__char(str);
  __dyc_printpre_byte(size);
}
}
