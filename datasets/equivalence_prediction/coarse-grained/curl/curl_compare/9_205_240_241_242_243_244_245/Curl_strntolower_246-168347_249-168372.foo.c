#include "../../include/dycfoo.h"
#include "../../include/strcase.i.hd.c.h"
void __dyc_foo(void) 
{ char *tmp ;
  char const   *tmp___0 ;
  char *dest ;
  char const   *src ;
  size_t n ;
  char __dyc_funcallvar_1 ;

  {
  dest = __dyc_read_ptr__char();
  src = (char const   *)__dyc_read_ptr__char();
  n = (size_t )__dyc_readpre_byte();
  __dyc_funcallvar_1 = (char )__dyc_readpre_byte();
  tmp = 0;
  tmp___0 = 0;
  if (n < 1UL) {
    goto __dyc_dummy_label;
  }
  while (1) {
    while_3_continue:  ;
    {
    tmp = dest;
    dest ++;
    *tmp = __dyc_funcallvar_1;
    tmp___0 = src;
    src ++;
    }
    if (*tmp___0) {
      n --;
      if (! n) {
        goto __dyc_dummy_label;
      }
    } else {
      goto __dyc_dummy_label;
    }
  }
  __dyc_dummy_label:  ;
  __dyc_print_ptr__char(dest);
  __dyc_print_ptr__char(src);
}
}
