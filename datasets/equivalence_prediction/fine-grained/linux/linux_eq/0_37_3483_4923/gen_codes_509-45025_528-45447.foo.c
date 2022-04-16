#include "../../include/dycfoo.h"
#include "../../include/deftree.i.hd.c.h"
void __dyc_foo(void) 
{ ush next_code[16] ;
  ush code ;
  int bits ;
  int n ;
  int len ;
  ush tmp ;
  unsigned int tmp___0 ;
  ct_data *tree ;
  int max_code ;
  ush *bl_count ;
  unsigned int __dyc_funcallvar_1 ;

  {
  code = (ush )__dyc_readpre_byte();
  bits = __dyc_readpre_byte();
  tree = __dyc_read_ptr__typdef_ct_data();
  max_code = __dyc_readpre_byte();
  bl_count = __dyc_read_ptr__typdef_ush();
  __dyc_funcallvar_1 = (unsigned int )__dyc_readpre_byte();
  n = 0;
  len = 0;
  tmp = 0;
  tmp___0 = 0;
  while (1) {
    while_23_continue:  ;
    if (! (bits <= 15)) {
      goto while_23_break;
    }
    code = (unsigned short )(((int )code + (int )*(bl_count + (bits - 1))) << 1);
    next_code[bits] = code;
    bits ++;
  }
  while_23_break:  ;
  n = 0;
  while (1) {
    while_24_continue:  ;
    if (! (n <= max_code)) {
      goto while_24_break;
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
  while_24_break:  ;
  goto __dyc_dummy_label;
  __dyc_dummy_label:  ;
  __dyc_printpre_byte(tmp);
}
}
