#include "../../include/dycfoo.h"
#include "../../include/strtoofft.i.hd.c.h"
void __dyc_foo(void) 
{ curl_off_t number ;
  int *tmp ;
  int tmp___0 ;
  char const   *str ;
  char **endp ;
  curl_off_t *num ;
  int __dyc_funcallvar_2 ;
  long __dyc_funcallvar_3 ;

  {
  tmp = __dyc_read_ptr__int();
  str = (char const   *)__dyc_read_ptr__char();
  endp = __dyc_read_ptr__ptr__char();
  num = __dyc_read_ptr__typdef_curl_off_t();
  __dyc_funcallvar_2 = __dyc_readpre_byte();
  __dyc_funcallvar_3 = (long )__dyc_readpre_byte();
  number = 0;
  tmp___0 = 0;
  *tmp = 0;
  *num = 0L;
  while (1) {
    while_0_continue:  ;
    if (*str) {
      {
      tmp___0 = __dyc_funcallvar_2;
      }
      if (! tmp___0) {
        goto while_0_break;
      }
    } else {
      goto while_0_break;
    }
    str ++;
  }
  while_0_break:  ;
  if (45 == (int )*str) {
    if (endp) {
      *endp = (char *)str;
    }
    goto __dyc_dummy_label;
  }
  number = __dyc_funcallvar_3;
  __dyc_dummy_label:  ;
  __dyc_printpre_byte(number);
}
}
