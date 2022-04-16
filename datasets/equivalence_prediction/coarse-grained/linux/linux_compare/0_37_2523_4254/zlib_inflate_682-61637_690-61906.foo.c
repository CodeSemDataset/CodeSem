#include "../../include/dycfoo.h"
#include "../../include/inflate.i.hd.c.h"
void __dyc_foo(void) 
{ struct inflate_state *state ;
  unsigned char *put ;
  unsigned int left ;
  unsigned int copy ;
  unsigned char *from ;
  unsigned char *tmp___21 ;
  unsigned char *tmp___22 ;
  unsigned char *tmp___23 ;

  {
  state = __dyc_read_ptr__comp_17inflate_state();
  put = (unsigned char *)__dyc_read_ptr__char();
  left = (unsigned int )__dyc_readpre_byte();
  copy = (unsigned int )__dyc_readpre_byte();
  from = (unsigned char *)__dyc_read_ptr__char();
  tmp___21 = 0;
  tmp___22 = 0;
  tmp___23 = 0;
  while (1) {
    while_85_continue:  ;
    tmp___21 = put;
    put ++;
    tmp___22 = from;
    from ++;
    *tmp___21 = *tmp___22;
    copy --;
    if (! copy) {
      goto while_85_break;
    }
  }
  while_85_break:  ;
  if (state->length == 0U) {
    state->mode = 18;
  }
  goto __dyc_dummy_label;
  switch_5_23:  
  if (left == 0U) {
    goto __dyc_dummy_label;
  }
  tmp___23 = put;
  put ++;
  *tmp___23 = (unsigned char )state->length;
  left --;
  state->mode = 18;
  __dyc_dummy_label:  ;
  __dyc_print_ptr__char(put);
  __dyc_printpre_byte(left);
  __dyc_print_ptr__char(from);
}
}
