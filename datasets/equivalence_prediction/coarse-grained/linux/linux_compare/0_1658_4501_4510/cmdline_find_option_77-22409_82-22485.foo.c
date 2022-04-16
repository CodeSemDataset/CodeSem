#include "../../include/dycfoo.h"
#include "../../include/cmdline.i.hd.c.h"
void __dyc_foo(void) 
{ char c ;
  int len ;
  char *bufptr ;
  enum __anonenum_state_22 state ;
  int tmp___2 ;
  char *tmp___3 ;
  int tmp___4 ;
  int bufsize ;
  int __dyc_funcallvar_5 ;

  {
  c = (char )__dyc_readpre_byte();
  len = __dyc_readpre_byte();
  bufptr = __dyc_read_ptr__char();
  tmp___2 = __dyc_readpre_byte();
  bufsize = __dyc_readpre_byte();
  __dyc_funcallvar_5 = __dyc_readpre_byte();
  state = 0;
  tmp___3 = 0;
  tmp___4 = 0;
  if (tmp___2) {
    state = 0;
  }
  goto __dyc_dummy_label;
  tmp___4 = __dyc_funcallvar_5;
  if (tmp___4) {
    state = 0;
  } else {
    if (len < bufsize - 1) {
      tmp___3 = bufptr;
      bufptr ++;
      *tmp___3 = c;
    }
    len ++;
  }
  __dyc_dummy_label:  ;
  __dyc_printpre_byte(len);
  __dyc_print_ptr__char(bufptr);
  __dyc_printpre_byte(state);
}
}
