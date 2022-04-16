#include "../../include/dycfoo.h"
#include "../../include/inet_ntop.i.hd.c.h"
void __dyc_foo(void) 
{ struct __anonstruct_best_74 best ;
  struct __anonstruct_best_74 cur ;
  unsigned long words[8] ;
  int i ;

  {

  memset(& best, 0, sizeof(struct __anonstruct_best_74 ));
  memset(& cur, 0, sizeof(struct __anonstruct_best_74 ));
  i = 0;
  best.base = -1L;
  cur.base = -1L;
  best.len = 0L;
  cur.len = 0L;
  i = 0;
  while (1) {
    while_2_continue:  ;
    if (! (i < 8)) {
      goto while_2_break;
    }
    if (words[i] == 0UL) {
      if (cur.base == -1L) {
        cur.base = (long )i;
        cur.len = 1L;
      } else {
        (cur.len) ++;
      }
    } else {
      if (cur.base != -1L) {
        if (best.base == -1L) {
          best = cur;
        } else {
          if (cur.len > best.len) {
            best = cur;
          }
        }
        cur.base = -1L;
      }
    }
    i ++;
  }
  while_2_break:  ;
  if (cur.base != -1L) {
    if (best.base == -1L) {
      best = cur;
    } else {
      if (cur.len > best.len) {
        best = cur;
      }
    }
  }
  __dyc_dummy_label:  ;
  __dyc_print_comp_92__anonstruct_best_74(best);
}
}
