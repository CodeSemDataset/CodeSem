#include "../../include/dycfoo.h"
#include "../../include/early_printk.i.hd.c.h"
void __dyc_foo(void) 
{ int max_ypos ;
  int max_xpos ;
  int i ;
  int k ;
  int j ;
  __u16 tmp ;
  __u16 __dyc_funcallvar_1 ;

  {
  max_ypos = __dyc_readpre_byte();
  max_xpos = __dyc_readpre_byte();
  k = __dyc_readpre_byte();
  j = __dyc_readpre_byte();
  __dyc_funcallvar_1 = (__u16 )__dyc_readpre_byte();
  i = 0;
  tmp = 0;
  while (1) {
    while_1_continue:  ;
    if (! (k < max_ypos)) {
      goto while_1_break;
    }
    i = 0;
    {
    while (1) {
      while_2_continue:  ;
      if (! (i < max_xpos)) {
        goto while_2_break;
      }
      {
      tmp = __dyc_funcallvar_1;

      i ++;
      }
    }
    while_2_break:  ;
    }
    k ++;
    j ++;
  }
  while_1_break:  ;
  i = 0;
  while (1) {
    while_3_continue:  ;
    if (! (i < max_xpos)) {
      goto __dyc_dummy_label;
    }
    {

    i ++;
    }
  }
  __dyc_dummy_label:  ;
  __dyc_printpre_byte(j);
  __dyc_printpre_byte(tmp);
}
}
