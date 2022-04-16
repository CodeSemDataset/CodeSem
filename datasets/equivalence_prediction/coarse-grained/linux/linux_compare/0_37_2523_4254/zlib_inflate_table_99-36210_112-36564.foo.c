#include "../../include/dycfoo.h"
#include "../../include/inftrees.i.hd.c.h"
void __dyc_foo(void) 
{ unsigned int min ;
  unsigned int max ;
  unsigned int root ;
  code this ;
  unsigned short count[16] ;
  code *tmp ;
  code *tmp___0 ;
  code **table ;
  unsigned int *bits ;

  {
  table = __dyc_read_ptr__ptr__typdef_code();
  bits = __dyc_read_ptr__int();
  min = 0;
  max = 0;
  root = 0;
  memset(& this, 0, sizeof(code ));
  tmp = 0;
  tmp___0 = 0;
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
      goto __dyc_dummy_label;
    }
    if ((int )count[min] != 0) {
      goto __dyc_dummy_label;
    }
    min ++;
  }
  __dyc_dummy_label:  ;
  __dyc_printpre_byte(root);
}
}
