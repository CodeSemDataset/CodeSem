#include "../../include/dycfoo.h"
#include "../../include/hiredis.i.hd.c.h"
void __dyc_foo(void) 
{ sds cmd ;
  int j ;
  size_t len ;
  int argc ;
  size_t const   *argvlen ;
  sds __dyc_funcallvar_6 ;
  size_t __dyc_funcallvar_7 ;
  sds __dyc_funcallvar_8 ;
  sds __dyc_funcallvar_9 ;
  sds __dyc_funcallvar_10 ;

  {
  cmd = __dyc_read_ptr__char();
  argc = __dyc_readpre_byte();
  argvlen = (size_t const   *)__dyc_read_ptr__typdef_size_t();
  __dyc_funcallvar_6 = __dyc_read_ptr__char();
  __dyc_funcallvar_7 = (size_t )__dyc_readpre_byte();
  __dyc_funcallvar_8 = __dyc_read_ptr__char();
  __dyc_funcallvar_9 = __dyc_read_ptr__char();
  __dyc_funcallvar_10 = __dyc_read_ptr__char();
  j = 0;
  len = 0;
  if ((unsigned long )cmd == (unsigned long )((void *)0)) {
    goto __dyc_dummy_label;
  }
  cmd = __dyc_funcallvar_6;
  j = 0;
  while (1) {
    while_12_continue:  ;
    if (! (j < argc)) {
      goto __dyc_dummy_label;
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
  __dyc_dummy_label:  ;
  __dyc_print_ptr__char(cmd);
  __dyc_printpre_byte(len);
}
}
