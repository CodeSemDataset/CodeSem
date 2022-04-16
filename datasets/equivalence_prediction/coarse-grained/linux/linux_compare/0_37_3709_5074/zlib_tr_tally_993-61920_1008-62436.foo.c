#include "../../include/dycfoo.h"
#include "../../include/deftree.i.hd.c.h"
void __dyc_foo(void) 
{ int const   extra_dbits[30] ;
  ulg out_length ;
  ulg in_length ;
  int dcode ;
  deflate_state *s ;

  {
  s = __dyc_read_ptr__typdef_deflate_state();
  out_length = 0;
  in_length = 0;
  dcode = 0;
  if ((s->last_lit & 4095U) == 0U) {
    if (s->level > 2) {
      out_length = (unsigned long )s->last_lit * 8UL;
      in_length = (unsigned long )((long )s->strstart - s->block_start);
      dcode = 0;
      {
      while (1) {
        while_34_continue:  ;
        if (! (dcode < 30)) {
          goto while_34_break;
        }
        out_length += (unsigned long )s->dyn_dtree[dcode].fc.freq * (unsigned long )(5L + (long )extra_dbits[dcode]);
        dcode ++;
      }
      while_34_break:  ;
      }
      out_length >>= 3;
      if (s->matches < s->last_lit / 2U) {
        if (out_length < in_length / 2UL) {
          goto __dyc_dummy_label;
        }
      }
    }
  }
  goto __dyc_dummy_label;
  __dyc_dummy_label:  ;
  __dyc_printpre_byte(out_length);
  __dyc_printpre_byte(in_length);
}
}
