#include "../../include/dycfoo.h"
#include "../../include/async.i.hd.c.h"
void __dyc_foo(void) 
{ redisContext *c ;
  dictIterator *it ;
  dictEntry *de ;
  int tmp ;
  int tmp___0 ;
  int tmp___1 ;
  redisAsyncContext *ac ;
  int __dyc_funcallvar_1 ;
  int __dyc_funcallvar_2 ;
  dictIterator *__dyc_funcallvar_3 ;
  dictEntry *__dyc_funcallvar_4 ;
  dictIterator *__dyc_funcallvar_5 ;
  dictEntry *__dyc_funcallvar_6 ;

  {
  c = __dyc_read_ptr__typdef_redisContext();
  ac = __dyc_read_ptr__typdef_redisAsyncContext();
  __dyc_funcallvar_1 = __dyc_readpre_byte();
  __dyc_funcallvar_2 = __dyc_readpre_byte();
  __dyc_funcallvar_3 = __dyc_read_ptr__typdef_dictIterator();
  __dyc_funcallvar_4 = __dyc_read_ptr__typdef_dictEntry();
  __dyc_funcallvar_5 = __dyc_read_ptr__typdef_dictIterator();
  __dyc_funcallvar_6 = __dyc_read_ptr__typdef_dictEntry();
  it = 0;
  de = 0;
  tmp = 0;
  tmp___0 = 0;
  tmp___1 = 0;
  while (1) {
    while_15_continue:  ;
    {
    tmp = __dyc_funcallvar_1;
    }
    if (! (tmp == 0)) {
      goto while_15_break;
    }
    {

    }
  }
  while_15_break:  ;
  while (1) {
    while_16_continue:  ;
    {
    tmp___0 = __dyc_funcallvar_2;
    }
    if (! (tmp___0 == 0)) {
      goto while_16_break;
    }
    {

    }
  }
  while_16_break:  ;
  it = __dyc_funcallvar_3;
  while (1) {
    while_17_continue:  ;
    {
    de = __dyc_funcallvar_4;
    }
    if (! ((unsigned long )de != (unsigned long )((void *)0))) {
      goto while_17_break;
    }
    {

    }
  }
  while_17_break:  ;


  it = __dyc_funcallvar_5;
  while (1) {
    while_18_continue:  ;
    {
    de = __dyc_funcallvar_6;
    }
    if (! ((unsigned long )de != (unsigned long )((void *)0))) {
      goto while_18_break;
    }
    {

    }
  }
  while_18_break:  ;


  while (1) {
    while_19_continue:  ;
    if (ac->ev.cleanup) {
      {

      }
    }
    goto while_19_break;
  }
  while_19_break:  ;
  if (ac->onDisconnect) {
    if (c->flags & 2) {
      if (c->flags & 8) {
        {

        }
      } else {
        if (ac->err == 0) {
          tmp___1 = 0;
        } else {
          tmp___1 = -1;
        }
        {

        }
      }
    }
  }

  goto __dyc_dummy_label;
  __dyc_dummy_label:  ;
  __dyc_print_ptr__typdef_dictIterator(it);
  __dyc_printpre_byte(tmp___1);
}
}
