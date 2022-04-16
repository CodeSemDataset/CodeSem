#include "../../include/dycfoo.h"
#include "../../include/memory.i.hd.c.h"
void __dyc_foo(void) 
{ u16 ax ;
  u16 bx ;
  u16 cx ;
  u16 dx ;
  u8 err ;

  {
  err = (u8 )__dyc_readpre_byte();
  ax = 0;
  bx = 0;
  cx = 0;
  dx = 0;
  dx = (unsigned short)0;
  cx = dx;
  bx = cx;
  ax = (unsigned short)59393;
  if (err) {
    goto __dyc_dummy_label;
  }
  if (cx) {
    ax = cx;
    bx = dx;
  } else {
    if (dx) {
      ax = cx;
      bx = dx;
    }
  }
  __dyc_dummy_label:  ;
  __dyc_printpre_byte(ax);
  __dyc_printpre_byte(bx);
}
}
