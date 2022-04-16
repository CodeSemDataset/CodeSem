#include "../../include/dycfoo.h"
#include "../../include/dotdot.i.hd.c.h"
void __dyc_foo(void) 
{ char *clone ;
  size_t clen ;
  char *out ;
  char *outptr ;
  char *tmp___1 ;
  char *tmp___2 ;
  int tmp___4 ;

  {
  clone = __dyc_read_ptr__char();
  clen = (size_t )__dyc_readpre_byte();
  out = __dyc_read_ptr__char();
  outptr = __dyc_read_ptr__char();
  tmp___4 = __dyc_readpre_byte();
  tmp___1 = 0;
  tmp___2 = 0;
  if (tmp___4) {
    {
    while (1) {
      while_1_continue:  ;
      tmp___1 = outptr;
      outptr ++;
      tmp___2 = clone;
      clone ++;
      *tmp___1 = *tmp___2;
      clen --;
      if (*clone) {
        if (! ((int )*clone != 47)) {
          goto while_1_break;
        }
      } else {
        goto while_1_break;
      }
    }
    while_1_break:  ;
    }
    *outptr = (char)0;
  } else {
    *clone = (char)0;
    *out = (char)0;
  }
  *clone = (char)0;
  *out = (char)0;
  __dyc_dummy_label:  ;
  __dyc_printpre_byte(clen);
}
}
