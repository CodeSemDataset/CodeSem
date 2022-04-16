#include "../../include/dycfoo.h"
#include "../../include/inffast.i.hd.c.h"
void __dyc_foo(void) 
{ struct inflate_state *state ;
  unsigned char const   *in ;
  unsigned char *out ;
  unsigned char *beg ;
  unsigned int wsize ;
  unsigned int whave ;
  unsigned int write ;
  unsigned char *window ;
  unsigned long hold ;
  unsigned int bits ;
  code const   *lcode ;
  code const   *dcode ;
  unsigned int dmask ;
  code this ;
  unsigned int op ;
  unsigned int len ;
  unsigned int dist ;
  unsigned char *from ;
  z_streamp strm ;

  {
  state = __dyc_read_ptr__comp_17inflate_state();
  in = (unsigned char const   *)__dyc_read_ptr__char();
  out = (unsigned char *)__dyc_read_ptr__char();
  beg = (unsigned char *)__dyc_read_ptr__char();
  wsize = (unsigned int )__dyc_readpre_byte();
  whave = (unsigned int )__dyc_readpre_byte();
  write = (unsigned int )__dyc_readpre_byte();
  window = (unsigned char *)__dyc_read_ptr__char();
  hold = (unsigned long )__dyc_readpre_byte();
  bits = (unsigned int )__dyc_readpre_byte();
  lcode = (code const   *)__dyc_read_ptr__typdef_code();
  dcode = (code const   *)__dyc_read_ptr__typdef_code();
  dmask = (unsigned int )__dyc_readpre_byte();
  this = __dyc_read_comp_16__anonstruct_code_5();
  op = (unsigned int )__dyc_readpre_byte();
  len = (unsigned int )__dyc_readpre_byte();
  strm = __dyc_read_ptr__typdef_z_stream();
  dist = 0;
  from = 0;
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
  if ((op & 64U) == 0U) {
    this = (struct __anonstruct_code_5 )*(lcode + ((unsigned long )this.val + (hold & (unsigned long )((1U << op) - 1U))));
    goto __dyc_dummy_label;
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
  __dyc_dummy_label:  ;
  __dyc_printpre_byte(hold);
  __dyc_printpre_byte(bits);
  __dyc_print_comp_16__anonstruct_code_5(this);
}
}
