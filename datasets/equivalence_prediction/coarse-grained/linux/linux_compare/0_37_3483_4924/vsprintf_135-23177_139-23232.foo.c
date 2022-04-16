#include "../../include/dycfoo.h"
#include "../../include/printf.i.hd.c.h"
void __dyc_foo(void) 
{ int flags ;
  char const   *fmt ;

  {
  fmt = (char const   *)__dyc_read_ptr__char();
  flags = 0;
  flags = 0;
  repeat: 
  fmt ++;
  if ((int )*fmt == 45) {
    goto switch_8_45;
  } else {
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
              goto repeat;
              switch_8_43:  
              flags |= 4;
              goto repeat;
              switch_8_32:  
              flags |= 8;
              goto repeat;
              switch_8_35:  
              flags |= 32;
              goto repeat;
              switch_8_48:  
              flags |= 1;
              goto repeat;
            } else {
              switch_8_break:  ;
            }
          }
        }
      }
    }
  }
  __dyc_dummy_label:  ;
  __dyc_printpre_byte(flags);
}
}
