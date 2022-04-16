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
  int ret ;
  unsigned char const   *tmp___7 ;
  unsigned char const   *tmp___8 ;
  unsigned int tmp___9 ;
  unsigned char const   *tmp___10 ;
  unsigned char const   *tmp___11 ;
  unsigned char const   *tmp___12 ;
  unsigned int tmp___13 ;
  unsigned int tmp___14 ;
  z_streamp strm ;
  int __dyc_funcallvar_4 ;
  int __dyc_funcallvar_5 ;

  {
  state = __dyc_read_ptr__comp_17inflate_state();
  next = (unsigned char const   *)__dyc_read_ptr__char();
  have = (unsigned int )__dyc_readpre_byte();
  hold = (unsigned long )__dyc_readpre_byte();
  bits = (unsigned int )__dyc_readpre_byte();
  ret = __dyc_readpre_byte();
  strm = __dyc_read_ptr__typdef_z_stream();
  __dyc_funcallvar_4 = __dyc_readpre_byte();
  __dyc_funcallvar_5 = __dyc_readpre_byte();
  copy = 0;
  memset(& this, 0, sizeof(code ));
  len = 0;
  tmp___7 = 0;
  tmp___8 = 0;
  tmp___9 = 0;
  tmp___10 = 0;
  tmp___11 = 0;
  tmp___12 = 0;
  tmp___13 = 0;
  tmp___14 = 0;
  if (ret) {
    strm->msg = (char *)"invalid code lengths set";
    state->mode = 27;
    goto __dyc_dummy_label;
  }
  state->have = 0U;
  state->mode = 17;
  while (1) {
    while_40_continue:  ;
    if (! (state->have < state->nlen + state->ndist)) {
      goto while_40_break;
    }
    {
    while (1) {
      while_41_continue:  ;
      this = (struct __anonstruct_code_5 )*(state->lencode + ((unsigned int )hold & ((1U << state->lenbits) - 1U)));
      if ((unsigned int )this.bits <= bits) {
        goto while_41_break;
      }
      {
      while (1) {
        while_42_continue:  ;
        if (have == 0U) {
          goto __dyc_dummy_label;
        }
        have --;
        tmp___7 = next;
        next ++;
        hold += (unsigned long )*tmp___7 << bits;
        bits += 8U;
        goto while_42_break;
      }
      while_42_break:  ;
      }
    }
    while_41_break:  ;
    }
    if ((int )this.val < 16) {
      {
      while (1) {
        while_43_continue:  ;
        {
        while (1) {
          while_44_continue:  ;
          if (! (bits < (unsigned int )this.bits)) {
            goto while_44_break;
          }
          {
          while (1) {
            while_45_continue:  ;
            if (have == 0U) {
              goto __dyc_dummy_label;
            }
            have --;
            tmp___8 = next;
            next ++;
            hold += (unsigned long )*tmp___8 << bits;
            bits += 8U;
            goto while_45_break;
          }
          while_45_break:  ;
          }
        }
        while_44_break:  ;
        }
        goto while_43_break;
      }
      while_43_break:  ;
      }
      {
      while (1) {
        while_46_continue:  ;
        hold >>= (int )this.bits;
        bits -= (unsigned int )this.bits;
        goto while_46_break;
      }
      while_46_break:  ;
      }
      tmp___9 = state->have;
      (state->have) ++;
      state->lens[tmp___9] = this.val;
    } else {
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
          goto while_40_break;
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
      if (state->have + copy > state->nlen + state->ndist) {
        strm->msg = (char *)"invalid bit length repeat";
        state->mode = 27;
        goto while_40_break;
      }
      {
      while (1) {
        while_62_continue:  ;
        tmp___14 = copy;
        copy --;
        if (! tmp___14) {
          goto while_62_break;
        }
        tmp___13 = state->have;
        (state->have) ++;
        state->lens[tmp___13] = (unsigned short )len;
      }
      while_62_break:  ;
      }
    }
  }
  while_40_break:  ;
  if ((int )state->mode == 27) {
    goto __dyc_dummy_label;
  }
  state->next = state->codes;
  state->lencode = (code const   *)state->next;
  state->lenbits = 9U;
  ret = __dyc_funcallvar_4;
  if (ret) {
    strm->msg = (char *)"invalid literal/lengths set";
    state->mode = 27;
    goto __dyc_dummy_label;
  }
  state->distcode = (code const   *)state->next;
  state->distbits = 6U;
  ret = __dyc_funcallvar_5;
  __dyc_dummy_label:  ;
  __dyc_print_ptr__char(next);
  __dyc_printpre_byte(have);
  __dyc_printpre_byte(hold);
  __dyc_printpre_byte(bits);
  __dyc_printpre_byte(copy);
  __dyc_printpre_byte(len);
  __dyc_printpre_byte(ret);
}
}
