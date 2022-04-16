#include "../../include/dycfoo.h"
#include "../../include/video.i.hd.c.h"
void __dyc_foo(void) 
{ int graphic_mode ;
  struct saved_screen saved ;
  int xs ;
  int ys ;
  int y ;
  addr_t dst ;
  u16 *src ;
  u16 ax ;
  u16 bx ;
  u16 dx ;
  int npad ;
  int copy ;
  int tmp ;

  {
  graphic_mode = __dyc_readpre_byte();
  saved = __dyc_read_comp_41saved_screen();
  xs = __dyc_readpre_byte();
  ys = __dyc_readpre_byte();
  dst = (addr_t )__dyc_readpre_byte();
  src = __dyc_read_ptr__typdef_u16();
  y = 0;
  ax = 0;
  bx = 0;
  dx = 0;
  npad = 0;
  copy = 0;
  tmp = 0;
  if (graphic_mode) {
    goto __dyc_dummy_label;
  }
  if (! src) {
    goto __dyc_dummy_label;
  }

  y = 0;
  while (1) {
    while_12_continue:  ;
    if (! (y < ys)) {
      goto while_12_break;
    }
    if (y < saved.y) {
      if (xs < saved.x) {
        tmp = xs;
      } else {
        tmp = saved.x;
      }
      {
      copy = tmp;

      dst = (unsigned int )((unsigned long )dst + (unsigned long )copy * sizeof(u16 ));
      src += saved.x;
      }
      if (xs < saved.x) {
        npad = 0;
      } else {
        npad = xs - saved.x;
      }
    } else {
      npad = xs;
    }
    y ++;
  }
  while_12_break:  ;
  ax = (unsigned short)512;
  bx = (unsigned short)0;
  dx = (unsigned short )((saved.cury << 8) + saved.curx);
  goto __dyc_dummy_label;
  __dyc_dummy_label:  ;
  __dyc_printpre_byte(dst);
  __dyc_print_ptr__typdef_u16(src);
  __dyc_printpre_byte(ax);
  __dyc_printpre_byte(bx);
  __dyc_printpre_byte(dx);
  __dyc_printpre_byte(npad);
}
}
