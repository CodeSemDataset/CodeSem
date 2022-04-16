#include "../../include/dycfoo.h"
#include "../../include/video-vga.i.hd.c.h"
void __dyc_foo(void) 
{ int do_restore ;
  u16 ax ;
  u8 rows ;
  u8 mode ;
  u8 __dyc_funcallvar_1 ;

  {
  ax = (u16 )__dyc_readpre_byte();
  mode = (u8 )__dyc_readpre_byte();
  __dyc_funcallvar_1 = (u8 )__dyc_readpre_byte();
  do_restore = 0;
  rows = 0;
  rows = __dyc_funcallvar_1;
  if ((int )ax == 20483) {
    goto _L;
  } else {
    if ((int )ax == 20487) {
      _L:  
      if ((int )rows == 0) {
        goto __dyc_dummy_label;
      } else {
        if ((int )rows == 24) {
          goto __dyc_dummy_label;
        }
      }
    }
  }
  if ((int )mode != 3) {
    if ((int )mode != 7) {
      mode = (unsigned char)3;
    }
  }
  ax = (unsigned short )mode;
  do_restore = 1;
  __dyc_dummy_label:  ;
  __dyc_printpre_byte(do_restore);
  __dyc_printpre_byte(ax);
  __dyc_printpre_byte(rows);
}
}
