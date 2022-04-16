#include "../../include/dycfoo.h"
#include "../../include/misc_64.i.hd.c.h"
void __dyc_foo(void) 
{ int i ;
  int bl ;
  int bd ;
  unsigned int *l ;
  int __dyc_funcallvar_2 ;

  {
  i = __dyc_readpre_byte();
  l = __dyc_read_ptr__int();
  __dyc_funcallvar_2 = __dyc_readpre_byte();
  bl = 0;
  bd = 0;
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
      goto while_33_break;
    }
    *(l + i) = 5U;
    i ++;
  }
  while_33_break:  ;
  bd = 5;
  __dyc_dummy_label:  ;
  __dyc_printpre_byte(bl);
  __dyc_printpre_byte(bd);
}
}
