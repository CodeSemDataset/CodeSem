#include "../../include/dycfoo.h"
#include "../../include/inflate.i.hd.c.h"
void __dyc_foo(void) 
{ struct inflate_state *state ;
  unsigned char const   *next ;
  unsigned char *put ;
  unsigned int have ;
  unsigned int left ;
  unsigned long hold ;
  unsigned int bits ;
  unsigned int out ;
  unsigned int copy ;
  unsigned char *from ;
  unsigned char const   *tmp___20 ;
  unsigned char *tmp___21 ;
  unsigned char *tmp___22 ;
  z_streamp strm ;

  {
  state = __dyc_read_ptr__comp_17inflate_state();
  next = (unsigned char const   *)__dyc_read_ptr__char();
  put = (unsigned char *)__dyc_read_ptr__char();
  have = (unsigned int )__dyc_readpre_byte();
  left = (unsigned int )__dyc_readpre_byte();
  hold = (unsigned long )__dyc_readpre_byte();
  bits = (unsigned int )__dyc_readpre_byte();
  out = (unsigned int )__dyc_readpre_byte();
  strm = __dyc_read_ptr__typdef_z_stream();
  copy = 0;
  from = 0;
  tmp___20 = 0;
  tmp___21 = 0;
  tmp___22 = 0;
  switch_5_21:  
  if (state->extra) {
    {
    while (1) {
      while_81_continue:  ;
      {
      while (1) {
        while_82_continue:  ;
        if (! (bits < state->extra)) {
          goto while_82_break;
        }
        {
        while (1) {
          while_83_continue:  ;
          if (have == 0U) {
            goto __dyc_dummy_label;
          }
          have --;
          tmp___20 = next;
          next ++;
          hold += (unsigned long )*tmp___20 << bits;
          bits += 8U;
          goto while_83_break;
        }
        while_83_break:  ;
        }
      }
      while_82_break:  ;
      }
      goto while_81_break;
    }
    while_81_break:  ;
    }
    state->offset += (unsigned int )hold & ((1U << state->extra) - 1U);
    {
    while (1) {
      while_84_continue:  ;
      hold >>= state->extra;
      bits -= state->extra;
      goto while_84_break;
    }
    while_84_break:  ;
    }
  }
  if (state->offset > (state->whave + out) - left) {
    strm->msg = (char *)"invalid distance too far back";
    state->mode = 27;
    goto __dyc_dummy_label;
  }
  state->mode = 22;
  switch_5_22:  
  if (left == 0U) {
    goto __dyc_dummy_label;
  }
  copy = out - left;
  if (state->offset > copy) {
    copy = state->offset - copy;
    if (copy > state->write) {
      copy -= state->write;
      from = state->window + (state->wsize - copy);
    } else {
      from = state->window + (state->write - copy);
    }
    if (copy > state->length) {
      copy = state->length;
    }
  } else {
    from = put - state->offset;
    copy = state->length;
  }
  if (copy > left) {
    copy = left;
  }
  left -= copy;
  state->length -= copy;
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
  __dyc_dummy_label:  ;
  __dyc_print_ptr__char(next);
  __dyc_print_ptr__char(put);
  __dyc_printpre_byte(have);
  __dyc_printpre_byte(left);
  __dyc_printpre_byte(hold);
  __dyc_printpre_byte(bits);
  __dyc_print_ptr__char(from);
}
}
