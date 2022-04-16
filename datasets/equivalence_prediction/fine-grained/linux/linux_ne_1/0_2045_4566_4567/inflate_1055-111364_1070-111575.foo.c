#include "../../include/dycfoo.h"
#include "../../include/misc_64.i.hd.c.h"
void __dyc_foo(void) 
{ unsigned int inptr ;
  unsigned int bk ;
  unsigned int hufts ;
  int e ;
  int r ;
  unsigned int h ;
  int __dyc_funcallvar_1 ;

  {
  inptr = (unsigned int )__dyc_readpre_byte();
  bk = (unsigned int )__dyc_readpre_byte();
  e = __dyc_readpre_byte();
  h = (unsigned int )__dyc_readpre_byte();
  __dyc_funcallvar_1 = __dyc_readpre_byte();
  hufts = 0;
  r = 0;
  while (1) {
    while_50_continue:  ;
    {
    hufts = 0U;

    r = __dyc_funcallvar_1;
    }
    if (r != 0) {
      {

      }
      goto __dyc_dummy_label;
    }
    {

    }
    if (hufts > h) {
      h = hufts;
    }
    if (! (! e)) {
      goto while_50_break;
    }
  }
  while_50_break:  ;
  while (1) {
    while_51_continue:  ;
    if (! (bk >= 8U)) {
      goto __dyc_dummy_label;
    }
    bk -= 8U;
    inptr --;
  }
  __dyc_dummy_label:  ;
  __dyc_printpre_byte(inptr);
  __dyc_printpre_byte(hufts);
  __dyc_printpre_byte(h);
}
}
