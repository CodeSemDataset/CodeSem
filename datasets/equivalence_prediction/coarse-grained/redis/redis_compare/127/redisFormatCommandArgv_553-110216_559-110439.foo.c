#include "../../include/dycfoo.h"
#include "../../include/hiredis.i.hd.c.h"
void __dyc_foo(void) 
{ char *cmd ;
  int pos ;
  size_t len ;
  int j ;
  int tmp___4 ;
  int tmp___5 ;
  int tmp___6 ;
  int argc ;
  size_t const   *argvlen ;
  size_t __dyc_funcallvar_6 ;
  int __dyc_funcallvar_7 ;

  {
  cmd = __dyc_read_ptr__char();
  pos = __dyc_readpre_byte();
  j = __dyc_readpre_byte();
  argc = __dyc_readpre_byte();
  argvlen = (size_t const   *)__dyc_read_ptr__typdef_size_t();
  __dyc_funcallvar_6 = (size_t )__dyc_readpre_byte();
  __dyc_funcallvar_7 = __dyc_readpre_byte();
  len = 0;
  tmp___4 = 0;
  tmp___5 = 0;
  tmp___6 = 0;
  if (! (j < argc)) {
    goto __dyc_dummy_label;
  }
  if (argvlen) {
    len = (unsigned long )*(argvlen + j);
  } else {
    {
    len = __dyc_funcallvar_6;
    }
  }
  tmp___4 = __dyc_funcallvar_7;
  pos += tmp___4;

  pos = (int )((size_t )pos + len);
  tmp___5 = pos;
  pos ++;
  *(cmd + tmp___5) = (char )'\r';
  tmp___6 = pos;
  pos ++;
  *(cmd + tmp___6) = (char )'\n';
  __dyc_dummy_label:  ;
  __dyc_printpre_byte(pos);
}
}
