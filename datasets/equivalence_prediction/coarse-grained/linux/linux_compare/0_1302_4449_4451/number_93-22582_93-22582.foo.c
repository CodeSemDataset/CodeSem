#include "../../include/dycfoo.h"
#include "../../include/printf.i.hd.c.h"
void __dyc_foo(void) 
{ char const   *digits ;
  char *tmp___5 ;
  char *tmp___6 ;
  char *tmp___7 ;
  char *str ;
  int base ;
  int type ;

  {
  digits = (char const   *)__dyc_read_ptr__char();
  str = __dyc_read_ptr__char();
  base = __dyc_readpre_byte();
  type = __dyc_readpre_byte();
  tmp___5 = 0;
  tmp___6 = 0;
  tmp___7 = 0;
  if (type & 32) {
    if (base == 8) {
      tmp___5 = str;
      str ++;
      *tmp___5 = (char )'0';
    } else {
      if (base == 16) {
        tmp___6 = str;
        str ++;
        *tmp___6 = (char )'0';
        tmp___7 = str;
        str ++;
        *tmp___7 = (char )*(digits + 33);
      }
    }
  }
  __dyc_dummy_label:  ;
  __dyc_print_ptr__char(str);
}
}
