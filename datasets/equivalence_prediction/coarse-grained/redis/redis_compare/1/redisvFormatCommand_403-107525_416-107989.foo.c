#include "../../include/dycfoo.h"
#include "../../include/hiredis.i.hd.c.h"
void __dyc_foo(void) 
{ char *cmd ;
  int pos ;
  int argc ;
  int totlen ;
  int j ;
  size_t tmp___31 ;
  int tmp___32 ;
  size_t tmp___33 ;
  size_t tmp___34 ;
  int tmp___35 ;
  int tmp___36 ;
  char **target ;
  int __dyc_funcallvar_26 ;
  size_t __dyc_funcallvar_27 ;
  int __dyc_funcallvar_28 ;
  size_t __dyc_funcallvar_29 ;
  size_t __dyc_funcallvar_30 ;

  {
  cmd = __dyc_read_ptr__char();
  argc = __dyc_readpre_byte();
  totlen = __dyc_readpre_byte();
  target = __dyc_read_ptr__ptr__char();
  __dyc_funcallvar_26 = __dyc_readpre_byte();
  __dyc_funcallvar_27 = (size_t )__dyc_readpre_byte();
  __dyc_funcallvar_28 = __dyc_readpre_byte();
  __dyc_funcallvar_29 = (size_t )__dyc_readpre_byte();
  __dyc_funcallvar_30 = (size_t )__dyc_readpre_byte();
  pos = 0;
  j = 0;
  tmp___31 = 0;
  tmp___32 = 0;
  tmp___33 = 0;
  tmp___34 = 0;
  tmp___35 = 0;
  tmp___36 = 0;
  pos = __dyc_funcallvar_26;
  j = 0;
  while (1) {
    while_9_continue:  ;
    if (! (j < argc)) {
      goto while_9_break;
    }
    {
    tmp___31 = __dyc_funcallvar_27;
    tmp___32 = __dyc_funcallvar_28;
    pos += tmp___32;
    tmp___33 = __dyc_funcallvar_29;

    tmp___34 = __dyc_funcallvar_30;
    pos = (int )((size_t )pos + tmp___34);

    tmp___35 = pos;
    pos ++;
    *(cmd + tmp___35) = (char )'\r';
    tmp___36 = pos;
    pos ++;
    *(cmd + tmp___36) = (char )'\n';
    j ++;
    }
  }
  while_9_break:  ;
  if (! (pos == totlen)) {
    {

    }
  }
  *(cmd + pos) = (char )'\000';

  *target = cmd;
  __dyc_dummy_label:  ;
  __dyc_printpre_byte(tmp___31);
  __dyc_printpre_byte(tmp___33);
}
}
