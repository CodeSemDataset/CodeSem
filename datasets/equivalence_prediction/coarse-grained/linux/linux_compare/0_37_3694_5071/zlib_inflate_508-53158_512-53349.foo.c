#include "../../include/dycfoo.h"
#include "../../include/inflate.i.hd.c.h"
void __dyc_foo(void) 
{ struct inflate_state *state ;
  unsigned char const   *next ;
  unsigned int have ;
  unsigned long hold ;
  unsigned int bits ;
  unsigned int copy ;
  code this ;
  unsigned int len ;
  unsigned int tmp___9 ;
  unsigned char const   *tmp___10 ;
  unsigned char const   *tmp___11 ;
  unsigned char const   *tmp___12 ;
  z_streamp strm ;

  {
  state = __dyc_read_ptr__comp_17inflate_state();
  next = (unsigned char const   *)__dyc_read_ptr__char();
  have = (unsigned int )__dyc_readpre_byte();
  hold = (unsigned long )__dyc_readpre_byte();
  bits = (unsigned int )__dyc_readpre_byte();
  this = __dyc_read_comp_16__anonstruct_code_5();
  strm = __dyc_read_ptr__typdef_z_stream();
  copy = 0;
  len = 0;
  tmp___9 = 0;
  tmp___10 = 0;
  tmp___11 = 0;
  tmp___12 = 0;
  while (1) {
    while_46_continue:  ;
    hold >>= (int )this.bits;
    bits -= (unsigned int )this.bits;
    goto while_46_break;
  }
  while_46_break:  ;
  tmp___9 = state->have;
  (state->have) ++;
  state->lens[tmp___9] = this.val;
  if ((int )this.val == 16) {
    {
    while (1) {
      while_47_continue:  ;
      {
      while (1) {
        while_48_continue:  ;
        if (! (bits < (unsigned int )((int )this.bits + 2))) {
          goto while_48_break;
        }
        {
        while (1) {
          while_49_continue:  ;
          if (have == 0U) {
            goto __dyc_dummy_label;
          }
          have --;
          tmp___10 = next;
          next ++;
          hold += (unsigned long )*tmp___10 << bits;
          bits += 8U;
          goto while_49_break;
        }
        while_49_break:  ;
        }
      }
      while_48_break:  ;
      }
      goto while_47_break;
    }
    while_47_break:  ;
    }
    {
    while (1) {
      while_50_continue:  ;
      hold >>= (int )this.bits;
      bits -= (unsigned int )this.bits;
      goto while_50_break;
    }
    while_50_break:  ;
    }
    if (state->have == 0U) {
      strm->msg = (char *)"invalid bit length repeat";
      state->mode = 27;
      goto __dyc_dummy_label;
    }
    len = (unsigned int )state->lens[state->have - 1U];
    copy = 3U + ((unsigned int )hold & ((1U << 2) - 1U));
    {
    while (1) {
      while_51_continue:  ;
      hold >>= 2;
      bits -= 2U;
      goto while_51_break;
    }
    while_51_break:  ;
    }
  } else {
    if ((int )this.val == 17) {
      {
      while (1) {
        while_52_continue:  ;
        {
        while (1) {
          while_53_continue:  ;
          if (! (bits < (unsigned int )((int )this.bits + 3))) {
            goto while_53_break;
          }
          {
          while (1) {
            while_54_continue:  ;
            if (have == 0U) {
              goto __dyc_dummy_label;
            }
            have --;
            tmp___11 = next;
            next ++;
            hold += (unsigned long )*tmp___11 << bits;
            bits += 8U;
            goto while_54_break;
          }
          while_54_break:  ;
          }
        }
        while_53_break:  ;
        }
        goto while_52_break;
      }
      while_52_break:  ;
      }
      {
      while (1) {
        while_55_continue:  ;
        hold >>= (int )this.bits;
        bits -= (unsigned int )this.bits;
        goto while_55_break;
      }
      while_55_break:  ;
      }
      len = 0U;
      copy = 3U + ((unsigned int )hold & ((1U << 3) - 1U));
      {
      while (1) {
        while_56_continue:  ;
        hold >>= 3;
        bits -= 3U;
        goto while_56_break;
      }
      while_56_break:  ;
      }
    } else {
      {
      while (1) {
        while_57_continue:  ;
        {
        while (1) {
          while_58_continue:  ;
          if (! (bits < (unsigned int )((int )this.bits + 7))) {
            goto while_58_break;
          }
          {
          while (1) {
            while_59_continue:  ;
            if (have == 0U) {
              goto __dyc_dummy_label;
            }
            have --;
            tmp___12 = next;
            next ++;
            hold += (unsigned long )*tmp___12 << bits;
            bits += 8U;
            goto while_59_break;
          }
          while_59_break:  ;
          }
        }
        while_58_break:  ;
        }
        goto while_57_break;
      }
      while_57_break:  ;
      }
      {
      while (1) {
        while_60_continue:  ;
        hold >>= (int )this.bits;
        bits -= (unsigned int )this.bits;
        goto while_60_break;
      }
      while_60_break:  ;
      }
      len = 0U;
      copy = 11U + ((unsigned int )hold & ((1U << 7) - 1U));
      {
      while (1) {
        while_61_continue:  ;
        hold >>= 7;
        bits -= 7U;
        goto while_61_break;
      }
      while_61_break:  ;
      }
    }
  }
  __dyc_dummy_label:  ;
  __dyc_print_ptr__char(next);
  __dyc_printpre_byte(have);
  __dyc_printpre_byte(hold);
  __dyc_printpre_byte(bits);
  __dyc_printpre_byte(copy);
  __dyc_printpre_byte(len);
}
}
