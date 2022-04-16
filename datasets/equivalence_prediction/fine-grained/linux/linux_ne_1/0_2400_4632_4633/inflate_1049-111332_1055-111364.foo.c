#include "../../include/dycfoo.h"
#include "../../include/misc_64.i.hd.c.h"
void __dyc_foo(void) 
{ unsigned int outcnt ;
  ulg bb ;
  unsigned int bk ;
  unsigned int hufts ;
  int e ;
  int r ;
  unsigned int h ;
  int __dyc_funcallvar_1 ;

  {
  e = __dyc_readpre_byte();
  __dyc_funcallvar_1 = __dyc_readpre_byte();
  outcnt = 0;
  bb = 0;
  bk = 0;
  hufts = 0;
  r = 0;
  h = 0;
  outcnt = 0U;
  bk = 0U;
  bb = 0UL;
  h = 0U;
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
      goto __dyc_dummy_label;
    }
  }
  __dyc_dummy_label:  ;
  __dyc_printpre_byte(outcnt);
  __dyc_printpre_byte(bb);
  __dyc_printpre_byte(bk);
  __dyc_printpre_byte(hufts);
  __dyc_printpre_byte(h);
}
}
