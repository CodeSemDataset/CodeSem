#include "../../include/dycfoo.h"
#include "../../include/hiredis.i.hd.c.h"
void __dyc_foo(void) 
{ sds cmd ;
  unsigned long long totlen ;
  int j ;
  size_t len ;
  uint32_t tmp ;
  size_t tmp___1 ;
  sds *target ;
  int argc ;
  size_t const   *argvlen ;
  uint32_t __dyc_funcallvar_1 ;
  size_t __dyc_funcallvar_2 ;
  size_t __dyc_funcallvar_3 ;
  sds __dyc_funcallvar_4 ;
  sds __dyc_funcallvar_5 ;

  {
  target = __dyc_read_ptr__typdef_sds();
  argc = __dyc_readpre_byte();
  argvlen = (size_t const   *)__dyc_read_ptr__typdef_size_t();
  __dyc_funcallvar_1 = (uint32_t )__dyc_readpre_byte();
  __dyc_funcallvar_2 = (size_t )__dyc_readpre_byte();
  __dyc_funcallvar_3 = (size_t )__dyc_readpre_byte();
  __dyc_funcallvar_4 = __dyc_read_ptr__char();
  __dyc_funcallvar_5 = __dyc_read_ptr__char();
  cmd = 0;
  totlen = 0;
  j = 0;
  len = 0;
  tmp = 0;
  tmp___1 = 0;
  if ((unsigned long )target == (unsigned long )((void *)0)) {
    goto __dyc_dummy_label;
  }
  tmp = __dyc_funcallvar_1;
  totlen = (unsigned long long )((1U + tmp) + 2U);
  j = 0;
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
  __dyc_dummy_label:  ;
  __dyc_print_ptr__char(cmd);
  __dyc_printpre_byte(totlen);
  __dyc_printpre_byte(len);
}
}
