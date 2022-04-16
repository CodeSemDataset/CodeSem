#include "../../include/dycfoo.h"
#include "../../include/inftrees.i.hd.c.h"
void __dyc_foo(void) 
{ unsigned int len ;
  unsigned int min ;
  unsigned int max ;
  unsigned int root ;
  int left ;
  code this ;
  unsigned short count[16] ;
  unsigned short offs[16] ;
  code *tmp ;
  code *tmp___0 ;
  codetype type ;
  code **table ;
  unsigned int *bits ;

  {
  max = (unsigned int )__dyc_readpre_byte();
  root = (unsigned int )__dyc_readpre_byte();
  type = (codetype )__dyc_readpre_byte();
  table = __dyc_read_ptr__ptr__typdef_code();
  bits = __dyc_read_ptr__int();
  len = 0;
  min = 0;
  left = 0;
  memset(& this, 0, sizeof(code ));
  tmp = 0;
  tmp___0 = 0;
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
      goto __dyc_dummy_label;
    }
    offs[len + 1U] = (unsigned short )((int )offs[len] + (int )count[len]);
    len ++;
  }
  __dyc_dummy_label:  ;
  __dyc_printpre_byte(root);
}
}
