#include "../../include/dycfoo.h"
#include "../../include/inet_ntop.i.hd.c.h"
void __dyc_foo(void) 
{ char *tp ;
  struct __anonstruct_best_74 best ;
  int i ;
  char *tmp___0 ;
  char *tmp___1 ;

  {
  tp = __dyc_read_ptr__char();
  best = __dyc_read_comp_92__anonstruct_best_74();
  i = __dyc_readpre_byte();
  tmp___0 = 0;
  tmp___1 = 0;
  if (! (i < 8)) {
    goto __dyc_dummy_label;
  }
  if (best.base != -1L) {
    if ((long )i >= best.base) {
      if ((long )i < best.base + best.len) {
        if ((long )i == best.base) {
          tmp___0 = tp;
          tp ++;
          *tmp___0 = (char )':';
        }
        goto __dyc_dummy_label;
      }
    }
  }
  if (i) {
    tmp___1 = tp;
    tp ++;
    *tmp___1 = (char )':';
  }
  __dyc_dummy_label:  ;
  __dyc_print_ptr__char(tp);
}
}
