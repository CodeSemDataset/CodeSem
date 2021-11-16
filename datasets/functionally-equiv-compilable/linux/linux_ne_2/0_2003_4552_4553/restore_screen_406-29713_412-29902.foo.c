#include "../../include/dycfoo.h"
#include "../../include/video.i.hd.c.h"
void __dyc_foo(void) 
{ struct saved_screen saved ;
  int xs ;
  addr_t dst ;
  u16 *src ;
  int npad ;
  int copy ;
  int tmp ;

  {
  saved = __dyc_read_comp_41saved_screen();
  xs = __dyc_readpre_byte();
  dst = (addr_t )__dyc_readpre_byte();
  src = __dyc_read_ptr__typdef_u16();
  npad = 0;
  copy = 0;
  tmp = 0;
  if (xs < saved.x) {
    tmp = xs;
  } else {
    tmp = saved.x;
  }
  copy = tmp;

  dst = (unsigned int )((unsigned long )dst + (unsigned long )copy * sizeof(u16 ));
  src += saved.x;
  if (xs < saved.x) {
    npad = 0;
  } else {
    npad = xs - saved.x;
  }
  npad = xs;
  __dyc_dummy_label:  ;
  __dyc_printpre_byte(dst);
  __dyc_print_ptr__typdef_u16(src);
  __dyc_printpre_byte(npad);
}
}
