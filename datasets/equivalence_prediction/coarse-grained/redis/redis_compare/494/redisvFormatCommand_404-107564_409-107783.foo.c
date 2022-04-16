#include "../../include/dycfoo.h"
#include "../../include/hiredis.i.hd.c.h"
void __dyc_foo(void) 
{ char *cmd ;
  int pos ;
  int argc ;
  int j ;
  size_t tmp___31 ;
  int tmp___32 ;
  size_t tmp___33 ;
  size_t tmp___34 ;
  int tmp___35 ;
  size_t __dyc_funcallvar_27 ;
  int __dyc_funcallvar_28 ;
  size_t __dyc_funcallvar_29 ;
  size_t __dyc_funcallvar_30 ;

  {
  cmd = __dyc_read_ptr__char();
  pos = __dyc_readpre_byte();
  argc = __dyc_readpre_byte();
  j = __dyc_readpre_byte();
  __dyc_funcallvar_27 = (size_t )__dyc_readpre_byte();
  __dyc_funcallvar_28 = __dyc_readpre_byte();
  __dyc_funcallvar_29 = (size_t )__dyc_readpre_byte();
  __dyc_funcallvar_30 = (size_t )__dyc_readpre_byte();
  tmp___31 = 0;
  tmp___32 = 0;
  tmp___33 = 0;
  tmp___34 = 0;
  tmp___35 = 0;
  if (! (j < argc)) {
    goto __dyc_dummy_label;
  }
  tmp___31 = __dyc_funcallvar_27;
  tmp___32 = __dyc_funcallvar_28;
  pos += tmp___32;
  tmp___33 = __dyc_funcallvar_29;

  tmp___34 = __dyc_funcallvar_30;
  pos = (int )((size_t )pos + tmp___34);

  tmp___35 = pos;
  pos ++;
  *(cmd + tmp___35) = (char )'\r';
  __dyc_dummy_label:  ;
  __dyc_printpre_byte(pos);
  __dyc_printpre_byte(tmp___31);
  __dyc_printpre_byte(tmp___33);
}
}
