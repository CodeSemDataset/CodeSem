#include "../../include/dycfoo.h"
#include "../../include/memtest.i.hd.c.h"
void __dyc_foo(void) 
{ unsigned long step ;
  unsigned long words ;
  unsigned long iwords ;
  unsigned long off ;
  unsigned long w ;
  unsigned long *l1 ;
  unsigned long *l2 ;
  unsigned long v ;
  unsigned long *l ;
  size_t bytes ;
  unsigned long v1 ;
  unsigned long v2 ;
  int interactive ;

  {
  step = (unsigned long )__dyc_readpre_byte();
  words = (unsigned long )__dyc_readpre_byte();
  iwords = (unsigned long )__dyc_readpre_byte();
  l = __dyc_read_ptr__long();
  bytes = (size_t )__dyc_readpre_byte();
  v1 = (unsigned long )__dyc_readpre_byte();
  v2 = (unsigned long )__dyc_readpre_byte();
  interactive = __dyc_readpre_byte();
  off = 0;
  w = 0;
  l1 = 0;
  l2 = 0;
  v = 0;
  if (! ((bytes & 4095UL) == 0UL)) {
    {

    }
  }
  off = 0UL;
  while (1) {
    while_7_continue:  ;
    if (! (off < step)) {
      goto while_7_break;
    }
    l1 = l + off;
    l2 = l1 + words;
    if (off & 1UL) {
      v = v2;
    } else {
      v = v1;
    }
    w = 0UL;
    {
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
    }
    off ++;
  }
  while_7_break:  ;
  goto __dyc_dummy_label;
  __dyc_dummy_label:  ;
  __dyc_print_ptr__long(l1);
  __dyc_print_ptr__long(l2);
  __dyc_printpre_byte(v);
}
}
