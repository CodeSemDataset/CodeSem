#include "../../include/dycfoo.h"
#include "../../include/printf.i.hd.c.h"
void __dyc_foo(void) 
{ int base ;
  char *str ;
  int flags ;
  char *tmp___16 ;
  char *tmp___17 ;
  char *tmp___18 ;
  char const   *fmt ;

  {
  str = __dyc_read_ptr__char();
  flags = __dyc_readpre_byte();
  fmt = (char const   *)__dyc_read_ptr__char();
  base = 0;
  tmp___16 = 0;
  tmp___17 = 0;
  tmp___18 = 0;
  switch_9_37:  
  tmp___16 = str;
  str ++;
  *tmp___16 = (char )'%';
  goto __dyc_dummy_label;
  switch_9_111:  
  base = 8;
  goto __dyc_dummy_label;
  switch_9_88:  
  flags |= 64;
  switch_9_120:  
  base = 16;
  goto __dyc_dummy_label;
  switch_9_100:  
  switch_9_105:  
  flags |= 2;
  switch_9_117:  
  goto __dyc_dummy_label;
  switch_9_default:  
  tmp___17 = str;
  str ++;
  *tmp___17 = (char )'%';
  if (*fmt) {
    tmp___18 = str;
    str ++;
    *tmp___18 = (char )*fmt;
  } else {
    fmt --;
  }
  __dyc_dummy_label:  ;
  __dyc_printpre_byte(base);
  __dyc_print_ptr__char(str);
  __dyc_printpre_byte(flags);
  __dyc_print_ptr__char(fmt);
}
}
