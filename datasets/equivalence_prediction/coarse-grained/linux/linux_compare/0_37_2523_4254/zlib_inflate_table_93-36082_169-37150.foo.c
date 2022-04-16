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
  int left ;
  code this ;
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
  len = (unsigned int )__dyc_readpre_byte();
  type = (codetype )__dyc_readpre_byte();
  lens = __dyc_read_ptr__short();
  codes = (unsigned int )__dyc_readpre_byte();
  table = __dyc_read_ptr__ptr__typdef_code();
  bits = __dyc_read_ptr__int();
  work = __dyc_read_ptr__short();
  sym = 0;
  min = 0;
  max = 0;
  root = 0;
  left = 0;
  memset(& this, 0, sizeof(code ));
  base = 0;
  extra = 0;
  end = 0;
  tmp = 0;
  tmp___0 = 0;
  tmp___1 = 0;
  while (1) {
    while_0_continue:  ;
    if (! (len <= 15U)) {
      goto while_0_break;
    }
    count[len] = (unsigned short)0;
    len ++;
  }
  while_0_break:  ;
  sym = 0U;
  while (1) {
    while_1_continue:  ;
    if (! (sym < codes)) {
      goto while_1_break;
    }
    count[*(lens + sym)] = (unsigned short )((int )count[*(lens + sym)] + 1);
    sym ++;
  }
  while_1_break:  ;
  root = *bits;
  max = 15U;
  while (1) {
    while_2_continue:  ;
    if (! (max >= 1U)) {
      goto while_2_break;
    }
    if ((int )count[max] != 0) {
      goto while_2_break;
    }
    max --;
  }
  while_2_break:  ;
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
  __dyc_dummy_label:  ;
  __dyc_printpre_byte(root);
  __dyc_print_ptr__short(base);
  __dyc_print_ptr__short(extra);
  __dyc_printpre_byte(end);
}
}
