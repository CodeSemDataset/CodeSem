#include "../../include/dycfoo.h"
#include "../../include/misc_64.i.hd.c.h"
void __dyc_foo(void) 
{ int i ;
  int bl ;
  unsigned int *l ;
  int __dyc_funcallvar_2 ;

  {
  i = __dyc_readpre_byte();
  l = __dyc_read_ptr__int();
  __dyc_funcallvar_2 = __dyc_readpre_byte();
  bl = 0;
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
  i = __dyc_funcallvar_2;
  if (i != 0) {
    {

    }
    goto __dyc_dummy_label;
  }
  i = 0;
  while (1) {
    while_33_continue:  ;
    if (! (i < 30)) {
      goto __dyc_dummy_label;
    }
    *(l + i) = 5U;
    i ++;
  }
  __dyc_dummy_label:  ;
  __dyc_printpre_byte(bl);
}
}
