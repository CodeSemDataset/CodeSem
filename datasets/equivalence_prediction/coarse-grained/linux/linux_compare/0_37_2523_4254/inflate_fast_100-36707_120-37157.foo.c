#include "../../include/dycfoo.h"
#include "../../include/inffast.i.hd.c.h"
void __dyc_foo(void) 
{ struct inflate_state *state ;
  unsigned char const   *in ;
  unsigned char const   *last ;
  unsigned char *out ;
  unsigned char *beg ;
  unsigned char *end ;
  unsigned int wsize ;
  unsigned int whave ;
  unsigned int write ;
  unsigned char *window ;
  unsigned long hold ;
  unsigned int bits ;
  code const   *lcode ;
  code const   *dcode ;
  unsigned int lmask ;
  unsigned int dmask ;
  code this ;
  unsigned int op ;
  unsigned int len ;
  unsigned int dist ;
  unsigned char *from ;
  z_streamp strm ;
  unsigned int start ;

  {
  strm = __dyc_read_ptr__typdef_z_stream();
  start = (unsigned int )__dyc_readpre_byte();
  state = 0;
  in = 0;
  last = 0;
  out = 0;
  beg = 0;
  end = 0;
  wsize = 0;
  whave = 0;
  write = 0;
  window = 0;
  hold = 0;
  bits = 0;
  lcode = 0;
  dcode = 0;
  lmask = 0;
  dmask = 0;
  memset(& this, 0, sizeof(code ));
  op = 0;
  len = 0;
  dist = 0;
  from = 0;
  state = (struct inflate_state *)strm->state;
  in = strm->next_in - 1;
  last = in + (strm->avail_in - 5U);
  out = strm->next_out - 1;
  beg = out - (start - strm->avail_out);
  end = out + (strm->avail_out - 257U);
  wsize = state->wsize;
  whave = state->whave;
  write = state->write;
  window = state->window;
  hold = state->hold;
  bits = state->bits;
  lcode = state->lencode;
  dcode = state->distcode;
  lmask = (1U << state->lenbits) - 1U;
  dmask = (1U << state->distbits) - 1U;
  while (1) {
    while_0_continue:  ;
    if (bits < 15U) {
      in ++;
      hold += (unsigned long )*in << bits;
      bits += 8U;
      in ++;
      hold += (unsigned long )*in << bits;
      bits += 8U;
    }
    this = (struct __anonstruct_code_5 )*(lcode + (hold & (unsigned long )lmask));
    dolen: 
    op = (unsigned int )this.bits;
    hold >>= op;
    bits -= op;
    op = (unsigned int )this.op;
    if (op == 0U) {
      out ++;
      *out = (unsigned char )this.val;
    } else {
      if (op & 16U) {
        len = (unsigned int )this.val;
        op &= 15U;
        if (op) {
          if (bits < op) {
            in ++;
            hold += (unsigned long )*in << bits;
            bits += 8U;
          }
          len += (unsigned int )hold & ((1U << op) - 1U);
          hold >>= op;
          bits -= op;
        }
        if (bits < 15U) {
          in ++;
          hold += (unsigned long )*in << bits;
          bits += 8U;
          in ++;
          hold += (unsigned long )*in << bits;
          bits += 8U;
        }
        this = (struct __anonstruct_code_5 )*(dcode + (hold & (unsigned long )dmask));
        dodist: 
        op = (unsigned int )this.bits;
        hold >>= op;
        bits -= op;
        op = (unsigned int )this.op;
        if (op & 16U) {
          dist = (unsigned int )this.val;
          op &= 15U;
          if (bits < op) {
            in ++;
            hold += (unsigned long )*in << bits;
            bits += 8U;
            if (bits < op) {
              in ++;
              hold += (unsigned long )*in << bits;
              bits += 8U;
            }
          }
          dist += (unsigned int )hold & ((1U << op) - 1U);
          hold >>= op;
          bits -= op;
          op = (unsigned int )(out - beg);
          if (dist > op) {
            op = dist - op;
            if (op > whave) {
              strm->msg = (char *)"invalid distance too far back";
              state->mode = 27;
              goto __dyc_dummy_label;
            }
            from = window - 1;
            if (write == 0U) {
              from += wsize - op;
              if (op < len) {
                len -= op;
                {
                while (1) {
                  while_1_continue:  ;
                  out ++;
                  from ++;
                  *out = *from;
                  op --;
                  if (! op) {
                    goto while_1_break;
                  }
                }
                while_1_break:  ;
                }
                from = out - dist;
              }
            } else {
              if (write < op) {
                from += (wsize + write) - op;
                op -= write;
                if (op < len) {
                  len -= op;
                  {
                  while (1) {
                    while_2_continue:  ;
                    out ++;
                    from ++;
                    *out = *from;
                    op --;
                    if (! op) {
                      goto while_2_break;
                    }
                  }
                  while_2_break:  ;
                  }
                  from = window - 1;
                  if (write < len) {
                    op = write;
                    len -= op;
                    {
                    while (1) {
                      while_3_continue:  ;
                      out ++;
                      from ++;
                      *out = *from;
                      op --;
                      if (! op) {
                        goto while_3_break;
                      }
                    }
                    while_3_break:  ;
                    }
                    from = out - dist;
                  }
                }
              } else {
                from += write - op;
                if (op < len) {
                  len -= op;
                  {
                  while (1) {
                    while_4_continue:  ;
                    out ++;
                    from ++;
                    *out = *from;
                    op --;
                    if (! op) {
                      goto while_4_break;
                    }
                  }
                  while_4_break:  ;
                  }
                  from = out - dist;
                }
              }
            }
            {
            while (1) {
              while_5_continue:  ;
              if (! (len > 2U)) {
                goto while_5_break;
              }
              out ++;
              from ++;
              *out = *from;
              out ++;
              from ++;
              *out = *from;
              out ++;
              from ++;
              *out = *from;
              len -= 3U;
            }
            while_5_break:  ;
            }
            if (len) {
              out ++;
              from ++;
              *out = *from;
              if (len > 1U) {
                out ++;
                from ++;
                *out = *from;
              }
            }
          } else {
            from = out - dist;
            {
            while (1) {
              while_6_continue:  ;
              out ++;
              from ++;
              *out = *from;
              out ++;
              from ++;
              *out = *from;
              out ++;
              from ++;
              *out = *from;
              len -= 3U;
              if (! (len > 2U)) {
                goto while_6_break;
              }
            }
            while_6_break:  ;
            }
            if (len) {
              out ++;
              from ++;
              *out = *from;
              if (len > 1U) {
                out ++;
                from ++;
                *out = *from;
              }
            }
          }
        } else {
          if ((op & 64U) == 0U) {
            this = (struct __anonstruct_code_5 )*(dcode + ((unsigned long )this.val + (hold & (unsigned long )((1U << op) - 1U))));
            goto dodist;
          } else {
            strm->msg = (char *)"invalid distance code";
            state->mode = 27;
            goto __dyc_dummy_label;
          }
        }
      } else {
        if ((op & 64U) == 0U) {
          this = (struct __anonstruct_code_5 )*(lcode + ((unsigned long )this.val + (hold & (unsigned long )((1U << op) - 1U))));
          goto dolen;
        } else {
          if (op & 32U) {
            state->mode = 11;
            goto __dyc_dummy_label;
          } else {
            strm->msg = (char *)"invalid literal/length code";
            state->mode = 27;
            goto __dyc_dummy_label;
          }
        }
      }
    }
    if ((unsigned long )in < (unsigned long )last) {
      if (! ((unsigned long )out < (unsigned long )end)) {
        goto __dyc_dummy_label;
      }
    } else {
      goto __dyc_dummy_label;
    }
  }
  __dyc_dummy_label:  ;
  __dyc_print_ptr__char(last);
  __dyc_print_ptr__char(beg);
  __dyc_print_ptr__char(end);
  __dyc_printpre_byte(wsize);
  __dyc_printpre_byte(whave);
  __dyc_printpre_byte(write);
  __dyc_print_ptr__char(window);
  __dyc_printpre_byte(hold);
  __dyc_printpre_byte(bits);
  __dyc_print_ptr__typdef_code(dcode);
  __dyc_printpre_byte(dmask);
  __dyc_printpre_byte(len);
  __dyc_print_ptr__char(from);
}
}
