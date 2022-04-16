#include "../../include/dycfoo.h"
#include "../../include/misc_64.i.hd.c.h"
void __dyc_foo(void) 
{ int i ;
  int bl ;
  unsigned int *l ;

  {
  i = __dyc_readpre_byte();
  l = __dyc_read_ptr__int();
  bl = 0;
  while (1) {
    while_30_continue:  ;
    if (! (i < 256)) {
      goto while_30_break;
    }
    *(l + i) = 9U;
    i ++;
  }
  while_30_break:  ;
  while (1) {
    while_31_continue:  ;
    if (! (i < 280)) {
      goto while_31_break;
    }
    *(l + i) = 7U;
    i ++;
  }
  while_31_break:  ;
  while (1) {
    while_32_continue:  ;
    if (! (i < 288)) {
      goto while_32_break;
    }
    *(l + i) = 8U;
    i ++;
  }
  while_32_break:  ;
  bl = 7;
  __dyc_dummy_label:  ;
  __dyc_printpre_byte(bl);
}
}
