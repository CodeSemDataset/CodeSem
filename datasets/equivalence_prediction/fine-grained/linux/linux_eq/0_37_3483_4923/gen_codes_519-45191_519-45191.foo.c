#include "../../include/dycfoo.h"
#include "../../include/deftree.i.hd.c.h"
void __dyc_foo(void) 
{ ush next_code[16] ;
  int n ;
  int len ;
  ush tmp ;
  unsigned int tmp___0 ;
  ct_data *tree ;
  int max_code ;
  unsigned int __dyc_funcallvar_1 ;

  {
  tree = __dyc_read_ptr__typdef_ct_data();
  max_code = __dyc_readpre_byte();
  __dyc_funcallvar_1 = (unsigned int )__dyc_readpre_byte();
  n = 0;
  len = 0;
  tmp = 0;
  tmp___0 = 0;
  n = 0;
  while (1) {
    while_24_continue:  ;
    if (! (n <= max_code)) {
      goto __dyc_dummy_label;
    }
    len = (int )(tree + n)->dl.len;
    if (len == 0) {
      goto __Cont;
    }
    {
    tmp = next_code[len];
    next_code[len] = (ush )((int )next_code[len] + 1);
    tmp___0 = __dyc_funcallvar_1;
    (tree + n)->fc.code = (unsigned short )tmp___0;
    }
    __Cont:  
    n ++;
  }
  __dyc_dummy_label:  ;
  __dyc_printpre_byte(tmp);
}
}
