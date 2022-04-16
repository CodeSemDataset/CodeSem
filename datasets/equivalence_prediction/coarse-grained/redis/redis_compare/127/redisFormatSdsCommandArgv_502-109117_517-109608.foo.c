#include "../../include/dycfoo.h"
#include "../../include/hiredis.i.hd.c.h"
void __dyc_foo(void) 
{ sds cmd ;
  unsigned long long totlen ;
  int j ;
  size_t len ;
  size_t tmp___3 ;
  sds *target ;
  int argc ;
  size_t const   *argvlen ;
  sds __dyc_funcallvar_5 ;
  sds __dyc_funcallvar_6 ;
  size_t __dyc_funcallvar_7 ;
  sds __dyc_funcallvar_8 ;
  sds __dyc_funcallvar_9 ;
  sds __dyc_funcallvar_10 ;
  size_t __dyc_funcallvar_11 ;

  {
  totlen = (unsigned long long )__dyc_readpre_byte();
  target = __dyc_read_ptr__typdef_sds();
  argc = __dyc_readpre_byte();
  argvlen = (size_t const   *)__dyc_read_ptr__typdef_size_t();
  __dyc_funcallvar_5 = __dyc_read_ptr__char();
  __dyc_funcallvar_6 = __dyc_read_ptr__char();
  __dyc_funcallvar_7 = (size_t )__dyc_readpre_byte();
  __dyc_funcallvar_8 = __dyc_read_ptr__char();
  __dyc_funcallvar_9 = __dyc_read_ptr__char();
  __dyc_funcallvar_10 = __dyc_read_ptr__char();
  __dyc_funcallvar_11 = (size_t )__dyc_readpre_byte();
  cmd = 0;
  j = 0;
  len = 0;
  tmp___3 = 0;
  cmd = __dyc_funcallvar_5;
  if ((unsigned long )cmd == (unsigned long )((void *)0)) {
    goto __dyc_dummy_label;
  }
  cmd = __dyc_funcallvar_6;
  j = 0;
  while (1) {
    while_12_continue:  ;
    if (! (j < argc)) {
      goto while_12_break;
    }
    if (argvlen) {
      len = (unsigned long )*(argvlen + j);
    } else {
      {
      len = __dyc_funcallvar_7;
      }
    }
    {
    cmd = __dyc_funcallvar_8;
    cmd = __dyc_funcallvar_9;
    cmd = __dyc_funcallvar_10;
    j ++;
    }
  }
  while_12_break:  ;
  tmp___3 = __dyc_funcallvar_11;
  if (! ((unsigned long long )tmp___3 == totlen)) {
    {

    }
  }
  *target = cmd;
  __dyc_dummy_label:  ;
  __dyc_printpre_byte(len);
}
}
