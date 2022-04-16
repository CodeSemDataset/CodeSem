#include "../../include/dycfoo.h"
#include "../../include/hiredis.i.hd.c.h"
void __dyc_foo(void) 
{ int wdone ;
  void *aux ;
  int tmp ;
  int tmp___0 ;
  int tmp___1 ;
  int tmp___2 ;
  redisContext *c ;
  void **reply ;
  int __dyc_funcallvar_1 ;
  int __dyc_funcallvar_2 ;
  int __dyc_funcallvar_3 ;
  int __dyc_funcallvar_4 ;

  {
  wdone = __dyc_readpre_byte();
  c = __dyc_read_ptr__typdef_redisContext();
  reply = __dyc_read_ptr__ptr__void();
  __dyc_funcallvar_1 = __dyc_readpre_byte();
  __dyc_funcallvar_2 = __dyc_readpre_byte();
  __dyc_funcallvar_3 = __dyc_readpre_byte();
  __dyc_funcallvar_4 = __dyc_readpre_byte();
  aux = 0;
  tmp = 0;
  tmp___0 = 0;
  tmp___1 = 0;
  tmp___2 = 0;
  aux = (void *)0;
  tmp = __dyc_funcallvar_1;
  if (tmp == -1) {
    goto __dyc_dummy_label;
  }
  if ((unsigned long )aux == (unsigned long )((void *)0)) {
    if (c->flags & 1) {
      {
      while (1) {
        while_16_continue:  ;
        {
        tmp___0 = __dyc_funcallvar_2;
        }
        if (tmp___0 == -1) {
          goto __dyc_dummy_label;
        }
        if (! (! wdone)) {
          goto while_16_break;
        }
      }
      while_16_break:  ;
      }
      {
      while (1) {
        while_17_continue:  ;
        {
        tmp___1 = __dyc_funcallvar_3;
        }
        if (tmp___1 == -1) {
          goto __dyc_dummy_label;
        }
        {
        tmp___2 = __dyc_funcallvar_4;
        }
        if (tmp___2 == -1) {
          goto __dyc_dummy_label;
        }
        if (! ((unsigned long )aux == (unsigned long )((void *)0))) {
          goto while_17_break;
        }
      }
      while_17_break:  ;
      }
    }
  }
  if ((unsigned long )reply != (unsigned long )((void *)0)) {
    *reply = aux;
  }
  __dyc_dummy_label:  ;
  __dyc_print_ptr__void(aux);
}
}
