#include "../../include/dycfoo.h"
#include "../../include/hiredis.i.hd.c.h"
void __dyc_foo(void) 
{ sds cmd ;
  unsigned long long totlen ;
  int j ;
  size_t len ;
  size_t tmp___1 ;
  int argc ;
  size_t const   *argvlen ;
  size_t __dyc_funcallvar_2 ;
  size_t __dyc_funcallvar_3 ;
  sds __dyc_funcallvar_4 ;
  sds __dyc_funcallvar_5 ;
  sds __dyc_funcallvar_6 ;

  {
  totlen = (unsigned long long )__dyc_readpre_byte();
  j = __dyc_readpre_byte();
  argc = __dyc_readpre_byte();
  argvlen = (size_t const   *)__dyc_read_ptr__typdef_size_t();
  __dyc_funcallvar_2 = (size_t )__dyc_readpre_byte();
  __dyc_funcallvar_3 = (size_t )__dyc_readpre_byte();
  __dyc_funcallvar_4 = __dyc_read_ptr__char();
  __dyc_funcallvar_5 = __dyc_read_ptr__char();
  __dyc_funcallvar_6 = __dyc_read_ptr__char();
  cmd = 0;
  len = 0;
  tmp___1 = 0;
  while (1) {
    while_11_continue:  ;
    if (! (j < argc)) {
      goto while_11_break;
    }
    if (argvlen) {
      len = (unsigned long )*(argvlen + j);
    } else {
      {
      len = __dyc_funcallvar_2;
      }
    }
    {
    tmp___1 = __dyc_funcallvar_3;
    totlen += (unsigned long long )tmp___1;
    j ++;
    }
  }
  while_11_break:  ;
  cmd = __dyc_funcallvar_4;
  if ((unsigned long )cmd == (unsigned long )((void *)0)) {
    goto __dyc_dummy_label;
  }
  cmd = __dyc_funcallvar_5;
  if ((unsigned long )cmd == (unsigned long )((void *)0)) {
    goto __dyc_dummy_label;
  }
  cmd = __dyc_funcallvar_6;
  __dyc_dummy_label:  ;
  __dyc_print_ptr__char(cmd);
  __dyc_printpre_byte(totlen);
  __dyc_printpre_byte(len);
}
}
