#include "../../include/dycfoo.h"
#include "../../include/hiredis.i.hd.c.h"
void __dyc_foo(void) 
{ char *cmd ;
  int pos ;
  sds curarg ;
  int argc ;
  int totlen ;
  int j ;
  uint32_t tmp___29 ;
  void *tmp___30 ;
  size_t tmp___31 ;
  int tmp___32 ;
  size_t tmp___33 ;
  size_t tmp___34 ;
  int tmp___35 ;
  int tmp___36 ;
  uint32_t __dyc_funcallvar_24 ;
  void *__dyc_funcallvar_25 ;
  int __dyc_funcallvar_26 ;
  size_t __dyc_funcallvar_27 ;
  int __dyc_funcallvar_28 ;
  size_t __dyc_funcallvar_29 ;
  size_t __dyc_funcallvar_30 ;

  {
  argc = __dyc_readpre_byte();
  totlen = __dyc_readpre_byte();
  __dyc_funcallvar_24 = (uint32_t )__dyc_readpre_byte();
  __dyc_funcallvar_25 = __dyc_read_ptr__void();
  __dyc_funcallvar_26 = __dyc_readpre_byte();
  __dyc_funcallvar_27 = (size_t )__dyc_readpre_byte();
  __dyc_funcallvar_28 = __dyc_readpre_byte();
  __dyc_funcallvar_29 = (size_t )__dyc_readpre_byte();
  __dyc_funcallvar_30 = (size_t )__dyc_readpre_byte();
  cmd = 0;
  pos = 0;
  curarg = 0;
  j = 0;
  tmp___29 = 0;
  tmp___30 = 0;
  tmp___31 = 0;
  tmp___32 = 0;
  tmp___33 = 0;
  tmp___34 = 0;
  tmp___35 = 0;
  tmp___36 = 0;
  curarg = (char *)((void *)0);
  tmp___29 = __dyc_funcallvar_24;
  totlen = (int )((uint32_t )totlen + ((1U + tmp___29) + 2U));
  tmp___30 = __dyc_funcallvar_25;
  cmd = (char *)tmp___30;
  if ((unsigned long )cmd == (unsigned long )((void *)0)) {
    goto __dyc_dummy_label;
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
  __dyc_dummy_label:  ;
  __dyc_print_ptr__char(curarg);
  __dyc_printpre_byte(totlen);
  __dyc_printpre_byte(tmp___31);
  __dyc_printpre_byte(tmp___33);
}
}
