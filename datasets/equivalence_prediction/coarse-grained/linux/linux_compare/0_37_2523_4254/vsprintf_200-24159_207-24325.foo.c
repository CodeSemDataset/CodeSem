#include "../../include/dycfoo.h"
#include "../../include/printf.i.hd.c.h"
void __dyc_foo(void) 
{ int len ;
  char *str ;
  int field_width ;
  char *tmp___3 ;
  int tmp___4 ;
  char *tmp___5 ;
  size_t tmp___6 ;
  size_t __dyc_funcallvar_5 ;

  {
  str = __dyc_read_ptr__char();
  field_width = __dyc_readpre_byte();
  tmp___3 = __dyc_read_ptr__char();
  tmp___4 = __dyc_readpre_byte();
  __dyc_funcallvar_5 = (size_t )__dyc_readpre_byte();
  len = 0;
  tmp___5 = 0;
  tmp___6 = 0;
  str ++;

  *tmp___3 = (char )((unsigned char )tmp___4);
  while (1) {
    while_11_continue:  ;
    field_width --;
    if (! (field_width > 0)) {
      goto while_11_break;
    }
    tmp___5 = str;
    str ++;
    *tmp___5 = (char )' ';
  }
  while_11_break:  ;
  goto __dyc_dummy_label;

  tmp___6 = __dyc_funcallvar_5;
  len = (int )tmp___6;
  __dyc_dummy_label:  ;
  __dyc_printpre_byte(len);
  __dyc_print_ptr__char(str);
}
}
