#include "../../include/dycfoo.h"
#include "../../include/inftrees.i.hd.c.h"
void __dyc_foo(void) 
{ unsigned int len ;
  unsigned int sym ;
  unsigned int min ;
  unsigned int max ;
  unsigned int root ;
  unsigned int curr ;
  unsigned int drop ;
  int left ;
  unsigned int used ;
  unsigned int huff ;
  unsigned int incr ;
  unsigned int fill ;
  unsigned int low ;
  unsigned int mask ;
  code this ;
  code *next ;
  unsigned short const   *base ;
  unsigned short const   *extra ;
  int end ;
  unsigned short count[16] ;
  codetype type ;
  unsigned short *lens ;
  code **table ;
  unsigned short *work ;

  {
  len = (unsigned int )__dyc_readpre_byte();
  sym = (unsigned int )__dyc_readpre_byte();
  max = (unsigned int )__dyc_readpre_byte();
  root = (unsigned int )__dyc_readpre_byte();
  curr = (unsigned int )__dyc_readpre_byte();
  drop = (unsigned int )__dyc_readpre_byte();
  used = (unsigned int )__dyc_readpre_byte();
  huff = (unsigned int )__dyc_readpre_byte();
  low = (unsigned int )__dyc_readpre_byte();
  mask = (unsigned int )__dyc_readpre_byte();
  next = __dyc_read_ptr__typdef_code();
  base = (unsigned short const   *)__dyc_read_ptr__short();
  extra = (unsigned short const   *)__dyc_read_ptr__short();
  end = __dyc_readpre_byte();
  type = (codetype )__dyc_readpre_byte();
  lens = __dyc_read_ptr__short();
  table = __dyc_read_ptr__ptr__typdef_code();
  work = __dyc_read_ptr__short();
  min = 0;
  left = 0;
  incr = 0;
  fill = 0;
  memset(& this, 0, sizeof(code ));
  if ((int )type == 1) {
    if (used >= 1456U) {
      goto __dyc_dummy_label;
    }
  }
  while (1) {
    while_8_continue:  ;
    this.bits = (unsigned char )(len - drop);
    if ((int )*(work + sym) < end) {
      this.op = (unsigned char)0;
      this.val = *(work + sym);
    } else {
      if ((int )*(work + sym) > end) {
        this.op = (unsigned char )*(extra + *(work + sym));
        this.val = (unsigned short )*(base + *(work + sym));
      } else {
        this.op = (unsigned char)96;
        this.val = (unsigned short)0;
      }
    }
    incr = 1U << (len - drop);
    fill = 1U << curr;
    min = fill;
    {
    while (1) {
      while_9_continue:  ;
      fill -= incr;
      *(next + ((huff >> drop) + fill)) = this;
      if (! (fill != 0U)) {
        goto while_9_break;
      }
    }
    while_9_break:  ;
    }
    incr = 1U << (len - 1U);
    {
    while (1) {
      while_10_continue:  ;
      if (! (huff & incr)) {
        goto while_10_break;
      }
      incr >>= 1;
    }
    while_10_break:  ;
    }
    if (incr != 0U) {
      huff &= incr - 1U;
      huff += incr;
    } else {
      huff = 0U;
    }
    sym ++;
    count[len] = (unsigned short )((int )count[len] - 1);
    if (count[len] == 0) {
      if (len == max) {
        goto __dyc_dummy_label;
      }
      len = (unsigned int )*(lens + *(work + sym));
    }
    if (len > root) {
      if ((huff & mask) != low) {
        if (drop == 0U) {
          drop = root;
        }
        next += min;
        curr = len - drop;
        left = 1 << curr;
        {
        while (1) {
          while_11_continue:  ;
          if (! (curr + drop < max)) {
            goto while_11_break;
          }
          left -= (int )count[curr + drop];
          if (left <= 0) {
            goto while_11_break;
          }
          curr ++;
          left <<= 1;
        }
        while_11_break:  ;
        }
        used += 1U << curr;
        if ((int )type == 1) {
          if (used >= 1456U) {
            goto __dyc_dummy_label;
          }
        }
        low = huff & mask;
        (*table + low)->op = (unsigned char )curr;
        (*table + low)->bits = (unsigned char )root;
        (*table + low)->val = (unsigned short )(next - *table);
      }
    }
  }
  __dyc_dummy_label:  ;
  __dyc_printpre_byte(sym);
  __dyc_printpre_byte(min);
  __dyc_printpre_byte(left);
  __dyc_printpre_byte(used);
  __dyc_printpre_byte(huff);
  __dyc_print_ptr__typdef_code(next);
}
}
