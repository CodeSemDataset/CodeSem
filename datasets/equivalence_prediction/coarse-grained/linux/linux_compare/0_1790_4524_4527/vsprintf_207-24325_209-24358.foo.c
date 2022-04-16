#include "../../include/dycfoo.h"
#include "../../include/printf.i.hd.c.h"
void __dyc_foo(void) 
{ int len ;
  char *str ;
  int flags ;
  int field_width ;
  size_t tmp___6 ;
  char *tmp___7 ;
  int tmp___8 ;
  size_t __dyc_funcallvar_5 ;

  {
  str = __dyc_read_ptr__char();
  flags = __dyc_readpre_byte();
  field_width = __dyc_readpre_byte();
  __dyc_funcallvar_5 = (size_t )__dyc_readpre_byte();
  len = 0;
  tmp___6 = 0;
  tmp___7 = 0;
  tmp___8 = 0;
  tmp___6 = __dyc_funcallvar_5;
  len = (int )tmp___6;
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
  __dyc_dummy_label:  ;
  __dyc_print_ptr__char(str);
  __dyc_printpre_byte(field_width);
}
}
