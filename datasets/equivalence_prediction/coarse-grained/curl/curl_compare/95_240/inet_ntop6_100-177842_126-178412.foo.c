#include "../../include/dycfoo.h"
#include "../../include/inet_ntop.i.hd.c.h"
void __dyc_foo(void) 
{ char tmp[sizeof("ffff:ffff:ffff:ffff:ffff:ffff:255.255.255.255")] ;
  char *tp ;
  struct __anonstruct_best_74 best ;
  struct __anonstruct_best_74 cur ;
  unsigned long words[8] ;
  int i ;
  unsigned char const   *src ;

  {
  i = __dyc_readpre_byte();
  src = (unsigned char const   *)__dyc_read_ptr__char();
  tp = 0;
  memset(& best, 0, sizeof(struct __anonstruct_best_74 ));
  memset(& cur, 0, sizeof(struct __anonstruct_best_74 ));
  while (1) {
    while_1_continue:  ;
    if (! (i < 16)) {
      goto while_1_break;
    }
    words[i / 2] |= (unsigned long )((int const   )*(src + i) << ((1 - i % 2) << 3));
    i ++;
  }
  while_1_break:  ;
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
  if (best.base != -1L) {
    if (best.len < 2L) {
      best.base = -1L;
    }
  }
  tp = tmp;
  i = 0;
  __dyc_dummy_label:  ;
  __dyc_print_ptr__char(tp);
  __dyc_print_comp_92__anonstruct_best_74(best);
  __dyc_printpre_byte(i);
}
}
