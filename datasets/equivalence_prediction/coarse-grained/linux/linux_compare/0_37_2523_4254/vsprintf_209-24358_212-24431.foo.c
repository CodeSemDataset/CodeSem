#include "../../include/dycfoo.h"
#include "../../include/printf.i.hd.c.h"
void __dyc_foo(void) 
{ int len ;
  int i ;
  char *str ;
  char const   *s ;
  int flags ;
  int field_width ;
  char *tmp___7 ;
  int tmp___8 ;
  char *tmp___9 ;
  char const   *tmp___10 ;

  {
  len = __dyc_readpre_byte();
  str = __dyc_read_ptr__char();
  s = (char const   *)__dyc_read_ptr__char();
  flags = __dyc_readpre_byte();
  field_width = __dyc_readpre_byte();
  i = 0;
  tmp___7 = 0;
  tmp___8 = 0;
  tmp___9 = 0;
  tmp___10 = 0;
  if (! (flags & 16)) {
    {
    while (1) {
      while_12_continue:  ;
      tmp___8 = field_width;
      field_width --;
      if (! (len < tmp___8)) {
        goto while_12_break;
      }
      tmp___7 = str;
      str ++;
      *tmp___7 = (char )' ';
    }
    while_12_break:  ;
    }
  }
  i = 0;
  while (1) {
    while_13_continue:  ;
    if (! (i < len)) {
      goto __dyc_dummy_label;
    }
    tmp___9 = str;
    str ++;
    tmp___10 = s;
    s ++;
    *tmp___9 = (char )*tmp___10;
    i ++;
  }
  __dyc_dummy_label:  ;
  __dyc_print_ptr__char(str);
  __dyc_print_ptr__char(s);
  __dyc_printpre_byte(field_width);
}
}
