#include "../../include/dycfoo.h"
#include "../../include/hiredis.i.hd.c.h"
void __dyc_foo(void) 
{ char *cmd ;
  size_t len ;
  int totlen ;
  int j ;
  uint32_t tmp ;
  size_t tmp___1 ;
  void *tmp___2 ;
  char **target ;
  int argc ;
  size_t const   *argvlen ;
  uint32_t __dyc_funcallvar_1 ;
  size_t __dyc_funcallvar_2 ;
  size_t __dyc_funcallvar_3 ;
  void *__dyc_funcallvar_4 ;

  {
  target = __dyc_read_ptr__ptr__char();
  argc = __dyc_readpre_byte();
  argvlen = (size_t const   *)__dyc_read_ptr__typdef_size_t();
  __dyc_funcallvar_1 = (uint32_t )__dyc_readpre_byte();
  __dyc_funcallvar_2 = (size_t )__dyc_readpre_byte();
  __dyc_funcallvar_3 = (size_t )__dyc_readpre_byte();
  __dyc_funcallvar_4 = __dyc_read_ptr__void();
  cmd = 0;
  len = 0;
  totlen = 0;
  j = 0;
  tmp = 0;
  tmp___1 = 0;
  tmp___2 = 0;
  cmd = (char *)((void *)0);
  if ((unsigned long )target == (unsigned long )((void *)0)) {
    goto __dyc_dummy_label;
  }
  tmp = __dyc_funcallvar_1;
  totlen = (int )((1U + tmp) + 2U);
  j = 0;
  while (1) {
    while_13_continue:  ;
    if (! (j < argc)) {
      goto while_13_break;
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
    totlen = (int )((size_t )totlen + tmp___1);
    j ++;
    }
  }
  while_13_break:  ;
  tmp___2 = __dyc_funcallvar_4;
  cmd = (char *)tmp___2;
  if ((unsigned long )cmd == (unsigned long )((void *)0)) {
    goto __dyc_dummy_label;
  }
  __dyc_dummy_label:  ;
  __dyc_print_ptr__char(cmd);
  __dyc_printpre_byte(len);
  __dyc_printpre_byte(totlen);
}
}
