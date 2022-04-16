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
  uint64_t rseed ;
  uint64_t rout ;
  unsigned long *l ;
  size_t bytes ;
  int interactive ;

  {
  step = (unsigned long )__dyc_readpre_byte();
  words = (unsigned long )__dyc_readpre_byte();
  iwords = (unsigned long )__dyc_readpre_byte();
  rseed = (uint64_t )__dyc_readpre_byte();
  l = __dyc_read_ptr__long();
  bytes = (size_t )__dyc_readpre_byte();
  interactive = __dyc_readpre_byte();
  off = 0;
  w = 0;
  l1 = 0;
  l2 = 0;
  rout = 0;
  if (! ((bytes & 4095UL) == 0UL)) {
    {

    }
  }
  off = 0UL;
  while (1) {
    while_4_continue:  ;
    if (! (off < step)) {
      goto __dyc_dummy_label;
    }
    l1 = l + off;
    l2 = l1 + words;
    w = 0UL;
    {
    while (1) {
      while_5_continue:  ;
      if (! (w < iwords)) {
        goto while_5_break;
      }
      {
      while (1) {
        while_6_continue:  ;
        rseed ^= rseed >> 12;
        rseed ^= rseed << 25;
        rseed ^= rseed >> 27;
        rout = (unsigned long )((unsigned long long )rseed * 2685821657736338717ULL);
        goto while_6_break;
      }
      while_6_break:  ;
      }
      *l2 = rout;
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
    while_5_break:  ;
    }
    off ++;
  }
  __dyc_dummy_label:  ;
  __dyc_print_ptr__long(l1);
  __dyc_print_ptr__long(l2);
}
}
