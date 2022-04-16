#include "../../include/dycfoo.h"
#include "../../include/hiredis.i.hd.c.h"
void __dyc_foo(void) 
{ char *cmd ;
  int pos ;
  int argc ;
  int totlen ;
  int error_type ;
  int j ;
  void *tmp___30 ;
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
  argc = __dyc_readpre_byte();
  totlen = __dyc_readpre_byte();
  tmp___30 = __dyc_read_ptr__void();
  target = __dyc_read_ptr__ptr__char();
  __dyc_funcallvar_26 = __dyc_readpre_byte();
  __dyc_funcallvar_27 = (size_t )__dyc_readpre_byte();
  __dyc_funcallvar_28 = __dyc_readpre_byte();
  __dyc_funcallvar_29 = (size_t )__dyc_readpre_byte();
  __dyc_funcallvar_30 = (size_t )__dyc_readpre_byte();
  cmd = 0;
  pos = 0;
  error_type = 0;
  j = 0;
  tmp___31 = 0;
  tmp___32 = 0;
  tmp___33 = 0;
  tmp___34 = 0;
  tmp___35 = 0;
  tmp___36 = 0;
  cmd = (char *)tmp___30;
  if ((unsigned long )cmd == (unsigned long )((void *)0)) {
    goto memory_err;
  }
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
  goto __dyc_dummy_label;
  format_err: 
  error_type = -2;
  goto __dyc_dummy_label;
  memory_err: 
  error_type = -1;
  goto __dyc_dummy_label;
  __dyc_dummy_label:  ;
  __dyc_printpre_byte(error_type);
  __dyc_printpre_byte(tmp___31);
  __dyc_printpre_byte(tmp___33);
}
}
