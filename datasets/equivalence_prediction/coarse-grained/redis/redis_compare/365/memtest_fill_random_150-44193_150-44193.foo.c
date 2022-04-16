#include "../../include/dycfoo.h"
#include "../../include/memtest.i.hd.c.h"
void __dyc_foo(void) 
{ unsigned long step ;
  unsigned long iwords ;
  unsigned long w ;
  unsigned long *l1 ;
  unsigned long *l2 ;
  uint64_t rseed ;
  uint64_t rout ;
  int interactive ;

  {
  step = (unsigned long )__dyc_readpre_byte();
  iwords = (unsigned long )__dyc_readpre_byte();
  w = (unsigned long )__dyc_readpre_byte();
  l1 = __dyc_read_ptr__long();
  l2 = __dyc_read_ptr__long();
  rseed = (uint64_t )__dyc_readpre_byte();
  interactive = __dyc_readpre_byte();
  rout = 0;
  if (! (w < iwords)) {
    goto __dyc_dummy_label;
  }
  while (1) {
    while_6_continue:  ;
    rseed ^= rseed >> 12;
    rseed ^= rseed << 25;
    rseed ^= rseed >> 27;
    rout = (unsigned long )((unsigned long long )rseed * 2685821657736338717ULL);
    goto while_6_break;
  }
  while_6_break:  ;
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
  __dyc_dummy_label:  ;
  __dyc_printpre_byte(w);
  __dyc_print_ptr__long(l1);
  __dyc_print_ptr__long(l2);
}
}
