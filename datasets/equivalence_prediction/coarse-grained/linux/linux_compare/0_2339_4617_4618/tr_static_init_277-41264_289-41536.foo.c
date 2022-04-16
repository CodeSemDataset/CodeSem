#include "../../include/dycfoo.h"
#include "../../include/deftree.i.hd.c.h"
void __dyc_foo(void) 
{ ct_data static_ltree[288] ;
  ct_data static_dtree[30] ;
  int static_init_done ;
  int n ;
  ush bl_count[16] ;
  int tmp___5 ;
  unsigned int tmp___6 ;
  unsigned int __dyc_funcallvar_1 ;

  {
  n = __dyc_readpre_byte();
  __dyc_funcallvar_1 = (unsigned int )__dyc_readpre_byte();
  static_init_done = 0;
  tmp___5 = 0;
  tmp___6 = 0;
  while (1) {
    while_11_continue:  ;
    if (! (n <= 287)) {
      goto while_11_break;
    }
    tmp___5 = n;
    n ++;
    static_ltree[tmp___5].dl.len = (unsigned short)8;
    bl_count[8] = (ush )((int )bl_count[8] + 1);
  }
  while_11_break:  ;

  n = 0;
  while (1) {
    while_12_continue:  ;
    if (! (n < 30)) {
      goto while_12_break;
    }
    {
    static_dtree[n].dl.len = (unsigned short)5;
    tmp___6 = __dyc_funcallvar_1;
    static_dtree[n].fc.code = (unsigned short )tmp___6;
    n ++;
    }
  }
  while_12_break:  ;
  static_init_done = 1;
  __dyc_dummy_label:  ;
  __dyc_printpre_byte(static_init_done);
}
}
