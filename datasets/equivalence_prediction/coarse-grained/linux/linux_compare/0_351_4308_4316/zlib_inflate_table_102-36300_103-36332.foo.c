#include "../../include/dycfoo.h"
#include "../../include/inftrees.i.hd.c.h"
void __dyc_foo(void) 
{ unsigned int max ;
  unsigned int root ;
  code this ;
  code *tmp ;
  code *tmp___0 ;
  code **table ;
  unsigned int *bits ;

  {
  max = (unsigned int )__dyc_readpre_byte();
  root = (unsigned int )__dyc_readpre_byte();
  table = __dyc_read_ptr__ptr__typdef_code();
  bits = __dyc_read_ptr__int();
  memset(& this, 0, sizeof(code ));
  tmp = 0;
  tmp___0 = 0;
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
  __dyc_dummy_label:  ;
  __dyc_printpre_byte(root);
}
}
