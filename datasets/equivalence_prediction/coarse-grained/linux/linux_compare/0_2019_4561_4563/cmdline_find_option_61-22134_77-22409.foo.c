#include "../../include/dycfoo.h"
#include "../../include/cmdline.i.hd.c.h"
void __dyc_foo(void) 
{ char c ;
  int len ;
  char const   *opptr ;
  char *bufptr ;
  enum __anonenum_state_22 state ;
  char const   *tmp___0 ;
  int tmp___1 ;
  int tmp___2 ;
  char const   *option ;
  char *buffer ;
  int __dyc_funcallvar_3 ;
  int __dyc_funcallvar_4 ;

  {
  c = (char )__dyc_readpre_byte();
  option = (char const   *)__dyc_read_ptr__char();
  buffer = __dyc_read_ptr__char();
  __dyc_funcallvar_3 = __dyc_readpre_byte();
  __dyc_funcallvar_4 = __dyc_readpre_byte();
  len = 0;
  opptr = 0;
  bufptr = 0;
  state = 0;
  tmp___0 = 0;
  tmp___1 = 0;
  tmp___2 = 0;
  state = 1;
  opptr = option;
  switch_1_1:  
  if ((int )c == 61) {
    if (! *opptr) {
      len = 0;
      bufptr = buffer;
      state = 3;
    } else {
      goto _L;
    }
  } else {
    _L:  
    {
    tmp___1 = __dyc_funcallvar_3;
    }
    if (tmp___1) {
      state = 0;
    } else {
      tmp___0 = opptr;
      opptr ++;
      if ((int )c != (int )*tmp___0) {
        state = 2;
      }
    }
  }
  goto __dyc_dummy_label;
  tmp___2 = __dyc_funcallvar_4;
  if (tmp___2) {
    state = 0;
  }
  __dyc_dummy_label:  ;
  __dyc_printpre_byte(len);
  __dyc_print_ptr__char(opptr);
  __dyc_print_ptr__char(bufptr);
  __dyc_printpre_byte(state);
}
}
