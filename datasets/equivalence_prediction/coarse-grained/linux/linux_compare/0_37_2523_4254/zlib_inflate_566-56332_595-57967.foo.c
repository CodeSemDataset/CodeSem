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
  code this ;
  code last ;
  int ret ;
  unsigned char const   *tmp___15 ;
  unsigned char const   *tmp___16 ;
  z_streamp strm ;

  {
  state = __dyc_read_ptr__comp_17inflate_state();
  next = (unsigned char const   *)__dyc_read_ptr__char();
  put = (unsigned char *)__dyc_read_ptr__char();
  have = (unsigned int )__dyc_readpre_byte();
  left = (unsigned int )__dyc_readpre_byte();
  hold = (unsigned long )__dyc_readpre_byte();
  bits = (unsigned int )__dyc_readpre_byte();
  ret = __dyc_readpre_byte();
  strm = __dyc_read_ptr__typdef_z_stream();
  memset(& this, 0, sizeof(code ));
  memset(& last, 0, sizeof(code ));
  tmp___15 = 0;
  tmp___16 = 0;
  if (ret) {
    strm->msg = (char *)"invalid distances set";
    state->mode = 27;
    goto __dyc_dummy_label;
  }
  state->mode = 18;
  switch_5_18:  
  if (have >= 6U) {
    if (left >= 258U) {
      {
      while (1) {
        while_63_continue:  ;
        strm->next_out = put;
        strm->avail_out = left;
        strm->next_in = next;
        strm->avail_in = have;
        state->hold = hold;
        state->bits = bits;
        goto while_63_break;
      }
      while_63_break:  ;
      }
      {

      }
      {
      while (1) {
        while_64_continue:  ;
        put = strm->next_out;
        left = strm->avail_out;
        next = strm->next_in;
        have = strm->avail_in;
        hold = state->hold;
        bits = state->bits;
        goto while_64_break;
      }
      while_64_break:  ;
      }
      goto __dyc_dummy_label;
    }
  }
  while (1) {
    while_65_continue:  ;
    this = (struct __anonstruct_code_5 )*(state->lencode + ((unsigned int )hold & ((1U << state->lenbits) - 1U)));
    if ((unsigned int )this.bits <= bits) {
      goto while_65_break;
    }
    {
    while (1) {
      while_66_continue:  ;
      if (have == 0U) {
        goto __dyc_dummy_label;
      }
      have --;
      tmp___15 = next;
      next ++;
      hold += (unsigned long )*tmp___15 << bits;
      bits += 8U;
      goto while_66_break;
    }
    while_66_break:  ;
    }
  }
  while_65_break:  ;
  if (this.op) {
    if (((int )this.op & 240) == 0) {
      last = this;
      {
      while (1) {
        while_67_continue:  ;
        this = (struct __anonstruct_code_5 )*(state->lencode + ((unsigned int )last.val + (((unsigned int )hold & ((1U << ((int )last.bits + (int )last.op)) - 1U)) >> (int )last.bits)));
        if ((unsigned int )((int )last.bits + (int )this.bits) <= bits) {
          goto while_67_break;
        }
        {
        while (1) {
          while_68_continue:  ;
          if (have == 0U) {
            goto __dyc_dummy_label;
          }
          have --;
          tmp___16 = next;
          next ++;
          hold += (unsigned long )*tmp___16 << bits;
          bits += 8U;
          goto while_68_break;
        }
        while_68_break:  ;
        }
      }
      while_67_break:  ;
      }
      {
      while (1) {
        while_69_continue:  ;
        hold >>= (int )last.bits;
        bits -= (unsigned int )last.bits;
        goto while_69_break;
      }
      while_69_break:  ;
      }
    }
  }
  while (1) {
    while_70_continue:  ;
    hold >>= (int )this.bits;
    bits -= (unsigned int )this.bits;
    goto while_70_break;
  }
  while_70_break:  ;
  state->length = (unsigned int )this.val;
  __dyc_dummy_label:  ;
  __dyc_print_ptr__char(next);
  __dyc_print_ptr__char(put);
  __dyc_printpre_byte(have);
  __dyc_printpre_byte(left);
  __dyc_printpre_byte(hold);
  __dyc_printpre_byte(bits);
}
}
