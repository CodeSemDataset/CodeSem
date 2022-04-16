#include "../../include/dycfoo.h"
#include "../../include/inflate.i.hd.c.h"
void __dyc_foo(void) 
{ struct inflate_state *state ;
  Byte *saved_no ;
  uInt saved_ao ;
  z_stream *z ;
  uLong __dyc_funcallvar_1 ;

  {
  z = __dyc_read_ptr__typdef_z_stream();
  __dyc_funcallvar_1 = (uLong )__dyc_readpre_byte();
  state = 0;
  saved_no = 0;
  saved_ao = 0;
  state = (struct inflate_state *)z->state;
  saved_no = z->next_out;
  saved_ao = z->avail_out;
  if ((int )state->mode != 11) {
    if ((int )state->mode != 0) {
      goto __dyc_dummy_label;
    }
  }
  z->avail_out = 0U;
  z->next_out = (unsigned char *)z->next_in + z->avail_in;

  z->avail_out = saved_ao;
  z->next_out = saved_no;
  state->check = __dyc_funcallvar_1;
  z->adler = state->check;
  z->total_out += (uLong )z->avail_in;
  __dyc_dummy_label:  ;
  __dyc_print_ptr__typdef_Byte(saved_no);
  __dyc_printpre_byte(saved_ao);
}
}
