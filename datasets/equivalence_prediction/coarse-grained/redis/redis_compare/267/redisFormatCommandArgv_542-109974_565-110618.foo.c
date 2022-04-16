#include "../../include/dycfoo.h"
#include "../../include/hiredis.i.hd.c.h"
void __dyc_foo(void) 
{ char *cmd ;
  int pos ;
  size_t len ;
  int totlen ;
  int j ;
  size_t tmp___1 ;
  void *tmp___2 ;
  int tmp___4 ;
  int tmp___5 ;
  int tmp___6 ;
  char **target ;
  int argc ;
  size_t const   *argvlen ;
  size_t __dyc_funcallvar_2 ;
  size_t __dyc_funcallvar_3 ;
  void *__dyc_funcallvar_4 ;
  int __dyc_funcallvar_5 ;
  size_t __dyc_funcallvar_6 ;
  int __dyc_funcallvar_7 ;

  {
  totlen = __dyc_readpre_byte();
  j = __dyc_readpre_byte();
  target = __dyc_read_ptr__ptr__char();
  argc = __dyc_readpre_byte();
  argvlen = (size_t const   *)__dyc_read_ptr__typdef_size_t();
  __dyc_funcallvar_2 = (size_t )__dyc_readpre_byte();
  __dyc_funcallvar_3 = (size_t )__dyc_readpre_byte();
  __dyc_funcallvar_4 = __dyc_read_ptr__void();
  __dyc_funcallvar_5 = __dyc_readpre_byte();
  __dyc_funcallvar_6 = (size_t )__dyc_readpre_byte();
  __dyc_funcallvar_7 = __dyc_readpre_byte();
  cmd = 0;
  pos = 0;
  len = 0;
  tmp___1 = 0;
  tmp___2 = 0;
  tmp___4 = 0;
  tmp___5 = 0;
  tmp___6 = 0;
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
  pos = __dyc_funcallvar_5;
  j = 0;
  while (1) {
    while_14_continue:  ;
    if (! (j < argc)) {
      goto while_14_break;
    }
    if (argvlen) {
      len = (unsigned long )*(argvlen + j);
    } else {
      {
      len = __dyc_funcallvar_6;
      }
    }
    {
    tmp___4 = __dyc_funcallvar_7;
    pos += tmp___4;

    pos = (int )((size_t )pos + len);
    tmp___5 = pos;
    pos ++;
    *(cmd + tmp___5) = (char )'\r';
    tmp___6 = pos;
    pos ++;
    *(cmd + tmp___6) = (char )'\n';
    j ++;
    }
  }
  while_14_break:  ;
  if (! (pos == totlen)) {
    {

    }
  }
  *(cmd + pos) = (char )'\000';
  *target = cmd;
  goto __dyc_dummy_label;
  __dyc_dummy_label:  ;
  __dyc_printpre_byte(len);
  __dyc_printpre_byte(totlen);
}
}
