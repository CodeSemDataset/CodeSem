#include "../../include/dycfoo.h"
#include "../../include/cpu.i.hd.c.h"
void __dyc_foo(void) 
{ u32 *err_flags ;
  int i ;
  int j ;
  u32 e ;

  {
  err_flags = __dyc_read_ptr__typdef_u32();
  i = __dyc_readpre_byte();
  j = 0;
  e = 0;
  while (1) {
    while_0_continue:  ;
    if (! (i < 8)) {
      goto __dyc_dummy_label;
    }
    e = *(err_flags + i);
    j = 0;
    {
    while (1) {
      while_1_continue:  ;
      if (! (j < 32)) {
        goto while_1_break;
      }
      if (e & 1U) {
        {

        }
      }
      e >>= 1;
      j ++;
    }
    while_1_break:  ;
    }
    i ++;
  }
  __dyc_dummy_label:  ;
  __dyc_printpre_byte(e);
}
}
