#include "../../include/dycfoo.h"
#include "../../include/inftrees.i.hd.c.h"
void __dyc_foo(void) 
{ unsigned short const   lbase[31] ;
  unsigned short const   lext[31] ;
  unsigned short const   dbase[32] ;
  unsigned short const   dext[32] ;
  unsigned int len ;
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
  unsigned short offs[16] ;
  code *tmp ;
  code *tmp___0 ;
  unsigned short tmp___1 ;
  codetype type ;
  unsigned short *lens ;
  unsigned int codes ;
  code **table ;
  unsigned int *bits ;
  unsigned short *work ;

  {
  max = (unsigned int )__dyc_readpre_byte();
  root = (unsigned int )__dyc_readpre_byte();
  type = (codetype )__dyc_readpre_byte();
  lens = __dyc_read_ptr__short();
  codes = (unsigned int )__dyc_readpre_byte();
  table = __dyc_read_ptr__ptr__typdef_code();
  bits = __dyc_read_ptr__int();
  work = __dyc_read_ptr__short();
  len = 0;
  sym = 0;
  min = 0;
  curr = 0;
  drop = 0;
  left = 0;
  used = 0;
  huff = 0;
  incr = 0;
  fill = 0;
  low = 0;
  mask = 0;
  memset(& this, 0, sizeof(code ));
  next = 0;
  base = 0;
  extra = 0;
  end = 0;
  tmp = 0;
  tmp___0 = 0;
  tmp___1 = 0;
  if (root > max) {
    root = max;
  }
  if (max == 0U) {
    this.op = (unsigned char)64;
    this.bits = (unsigned char)1;
    this.val = (unsigned short)0;
    tmp = *table;
    (*table) ++;
    *tmp = this;
    tmp___0 = *table;
    (*table) ++;
    *tmp___0 = this;
    *bits = 1U;
    goto __dyc_dummy_label;
  }
  min = 1U;
  while (1) {
    while_3_continue:  ;
    if (! (min <= 15U)) {
      goto while_3_break;
    }
    if ((int )count[min] != 0) {
      goto while_3_break;
    }
    min ++;
  }
  while_3_break:  ;
  if (root < min) {
    root = min;
  }
  left = 1;
  len = 1U;
  while (1) {
    while_4_continue:  ;
    if (! (len <= 15U)) {
      goto while_4_break;
    }
    left <<= 1;
    left -= (int )count[len];
    if (left < 0) {
      goto __dyc_dummy_label;
    }
    len ++;
  }
  while_4_break:  ;
  if (left > 0) {
    if ((int )type == 0) {
      goto __dyc_dummy_label;
    } else {
      if (max != 1U) {
        goto __dyc_dummy_label;
      }
    }
  }
  offs[1] = (unsigned short)0;
  len = 1U;
  while (1) {
    while_5_continue:  ;
    if (! (len < 15U)) {
      goto while_5_break;
    }
    offs[len + 1U] = (unsigned short )((int )offs[len] + (int )count[len]);
    len ++;
  }
  while_5_break:  ;
  sym = 0U;
  while (1) {
    while_6_continue:  ;
    if (! (sym < codes)) {
      goto while_6_break;
    }
    if ((int )*(lens + sym) != 0) {
      tmp___1 = offs[*(lens + sym)];
      offs[*(lens + sym)] = (unsigned short )((int )offs[*(lens + sym)] + 1);
      *(work + tmp___1) = (unsigned short )sym;
    }
    sym ++;
  }
  while_6_break:  ;
  if ((int )type == 0) {
    goto switch_7_0;
  } else {
    if ((int )type == 1) {
      goto switch_7_1;
    } else {
      {
      goto switch_7_default;
      if (0) {
        switch_7_0:  
        extra = (unsigned short const   *)work;
        base = extra;
        end = 19;
        goto switch_7_break;
        switch_7_1:  
        base = lbase;
        base -= 257;
        extra = lext;
        extra -= 257;
        end = 256;
        goto switch_7_break;
        switch_7_default:  
        base = dbase;
        extra = dext;
        end = -1;
      } else {
        switch_7_break:  ;
      }
      }
    }
  }
  huff = 0U;
  sym = 0U;
  len = min;
  next = *table;
  curr = root;
  drop = 0U;
  low = 4294967295U;
  used = 1U << root;
  mask = used - 1U;
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
  __dyc_printpre_byte(len);
  __dyc_printpre_byte(sym);
  __dyc_printpre_byte(min);
  __dyc_printpre_byte(root);
  __dyc_printpre_byte(curr);
  __dyc_printpre_byte(drop);
  __dyc_printpre_byte(left);
  __dyc_printpre_byte(used);
  __dyc_printpre_byte(huff);
  __dyc_printpre_byte(low);
  __dyc_printpre_byte(mask);
  __dyc_print_ptr__typdef_code(next);
  __dyc_print_ptr__short(base);
  __dyc_print_ptr__short(extra);
  __dyc_printpre_byte(end);
}
}
