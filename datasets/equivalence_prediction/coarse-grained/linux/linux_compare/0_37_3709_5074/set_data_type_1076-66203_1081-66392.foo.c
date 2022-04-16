#include "../../include/dycfoo.h"
#include "../../include/deftree.i.hd.c.h"
void __dyc_foo(void) 
{ int n ;
  unsigned int ascii_freq ;
  unsigned int bin_freq ;
  int tmp ;
  int tmp___0 ;
  int tmp___1 ;
  deflate_state *s ;

  {
  s = __dyc_read_ptr__typdef_deflate_state();
  n = 0;
  ascii_freq = 0;
  bin_freq = 0;
  tmp = 0;
  tmp___0 = 0;
  tmp___1 = 0;
  n = 0;
  ascii_freq = 0U;
  bin_freq = 0U;
  while (1) {
    while_36_continue:  ;
    if (! (n < 7)) {
      goto while_36_break;
    }
    tmp = n;
    n ++;
    bin_freq += (unsigned int )s->dyn_ltree[tmp].fc.freq;
  }
  while_36_break:  ;
  while (1) {
    while_37_continue:  ;
    if (! (n < 128)) {
      goto while_37_break;
    }
    tmp___0 = n;
    n ++;
    ascii_freq += (unsigned int )s->dyn_ltree[tmp___0].fc.freq;
  }
  while_37_break:  ;
  while (1) {
    while_38_continue:  ;
    if (! (n < 256)) {
      goto __dyc_dummy_label;
    }
    tmp___1 = n;
    n ++;
    bin_freq += (unsigned int )s->dyn_ltree[tmp___1].fc.freq;
  }
  __dyc_dummy_label:  ;
  __dyc_printpre_byte(ascii_freq);
  __dyc_printpre_byte(bin_freq);
}
}
