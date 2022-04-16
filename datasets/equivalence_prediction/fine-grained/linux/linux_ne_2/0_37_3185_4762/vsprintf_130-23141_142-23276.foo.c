#include "../../include/dycfoo.h"
#include "../../include/printf.i.hd.c.h"
void __dyc_foo(void) 
{ char *str ;
  int flags ;
  char *tmp ;
  char const   *fmt ;

  {
  str = __dyc_read_ptr__char();
  flags = __dyc_readpre_byte();
  fmt = (char const   *)__dyc_read_ptr__char();
  tmp = 0;
  tmp = str;
  str ++;
  *tmp = (char )*fmt;
  goto __dyc_dummy_label;
  goto switch_8_45;
  if ((int )*fmt == 43) {
    goto switch_8_43;
  } else {
    if ((int )*fmt == 32) {
      goto switch_8_32;
    } else {
      if ((int )*fmt == 35) {
        goto switch_8_35;
      } else {
        if ((int )*fmt == 48) {
          goto switch_8_48;
        } else {
          if (0) {
            switch_8_45:  
            flags |= 16;
            goto __dyc_dummy_label;
            switch_8_43:  
            flags |= 4;
            goto __dyc_dummy_label;
            switch_8_32:  
            flags |= 8;
            goto __dyc_dummy_label;
            switch_8_35:  
            flags |= 32;
            goto __dyc_dummy_label;
            switch_8_48:  
            flags |= 1;
            goto __dyc_dummy_label;
          } else {
            switch_8_break:  ;
          }
        }
      }
    }
  }
  __dyc_dummy_label:  ;
  __dyc_print_ptr__char(str);
  __dyc_printpre_byte(flags);
}
}
