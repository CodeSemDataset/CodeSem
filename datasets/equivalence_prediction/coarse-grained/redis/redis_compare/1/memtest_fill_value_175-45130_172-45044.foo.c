#include "../../include/dycfoo.h"
#include "../../include/memtest.i.hd.c.h"
void __dyc_foo(void) 
{ unsigned long step ;
  unsigned long iwords ;
  unsigned long off ;
  unsigned long w ;
  unsigned long *l1 ;
  unsigned long *l2 ;
  unsigned long v ;
  unsigned long v1 ;
  unsigned long v2 ;
  int interactive ;

  {
  step = (unsigned long )__dyc_readpre_byte();
  iwords = (unsigned long )__dyc_readpre_byte();
  off = (unsigned long )__dyc_readpre_byte();
  l1 = __dyc_read_ptr__long();
  l2 = __dyc_read_ptr__long();
  v1 = (unsigned long )__dyc_readpre_byte();
  v2 = (unsigned long )__dyc_readpre_byte();
  interactive = __dyc_readpre_byte();
  w = 0;
  v = 0;
  if (off & 1UL) {
    v = v2;
  } else {
    v = v1;
  }
  w = 0UL;
  while (1) {
    while_8_continue:  ;
    if (! (w < iwords)) {
      goto while_8_break;
    }
    *l2 = ((v | (v << 16)) | (v << 32)) | (v << 48);
    *l1 = *l2;
    l1 += step;
    l2 += step;
    if ((w & 65535UL) == 0UL) {
      if (interactive) {
        {

        }
      }
    }
    w ++;
  }
  while_8_break:  ;
  off ++;
  __dyc_dummy_label:  ;
  __dyc_printpre_byte(off);
  __dyc_print_ptr__long(l1);
  __dyc_print_ptr__long(l2);
  __dyc_printpre_byte(v);
}
}
