#include "../../include/dycfoo.h"
#include "../../include/async.i.hd.c.h"
void __dyc_foo(void) 
{ redisContext *c ;
  int pvariant ;
  int hasnext ;
  char const   *cstr ;
  size_t clen ;
  char const   *p ;
  sds sname ;
  int ret ;
  int tmp___7 ;
  int tmp___8 ;
  int tmp___9 ;
  redisAsyncContext *ac ;
  int __dyc_funcallvar_4 ;
  char const   *__dyc_funcallvar_5 ;
  sds __dyc_funcallvar_6 ;
  int __dyc_funcallvar_7 ;
  int __dyc_funcallvar_8 ;
  int __dyc_funcallvar_9 ;
  int __dyc_funcallvar_10 ;

  {
  c = __dyc_read_ptr__typdef_redisContext();
  pvariant = __dyc_readpre_byte();
  hasnext = __dyc_readpre_byte();
  cstr = (char const   *)__dyc_read_ptr__char();
  clen = (size_t )__dyc_readpre_byte();
  ac = __dyc_read_ptr__typdef_redisAsyncContext();
  __dyc_funcallvar_4 = __dyc_readpre_byte();
  __dyc_funcallvar_5 = (char const   *)__dyc_read_ptr__char();
  __dyc_funcallvar_6 = __dyc_read_ptr__char();
  __dyc_funcallvar_7 = __dyc_readpre_byte();
  __dyc_funcallvar_8 = __dyc_readpre_byte();
  __dyc_funcallvar_9 = __dyc_readpre_byte();
  __dyc_funcallvar_10 = __dyc_readpre_byte();
  p = 0;
  sname = 0;
  ret = 0;
  tmp___7 = 0;
  tmp___8 = 0;
  tmp___9 = 0;
  cstr += pvariant;
  clen -= (size_t )pvariant;
  if (hasnext) {
    {
    tmp___9 = __dyc_funcallvar_4;
    }
    if (tmp___9 == 0) {
      c->flags |= 32;
      {
      while (1) {
        while_25_continue:  ;
        {
        p = __dyc_funcallvar_5;
        }
        if (! ((unsigned long )p != (unsigned long )((void *)0))) {
          goto while_25_break;
        }
        {
        sname = __dyc_funcallvar_6;
        }
        if (pvariant) {
          {
          ret = __dyc_funcallvar_7;
          }
        } else {
          {
          ret = __dyc_funcallvar_8;
          }
        }
        if (ret == 0) {
          {

          }
        }
      }
      while_25_break:  ;
      }
    } else {
      goto _L;
    }
  } else {
    _L:  
    {
    tmp___8 = __dyc_funcallvar_9;
    }
    if (tmp___8 == 0) {
      if (! (c->flags & 32)) {
        goto __dyc_dummy_label;
      }
    } else {
      {
      tmp___7 = __dyc_funcallvar_10;
      }
      if (tmp___7 == 0) {
        {
        c->flags |= 64;

        }
      } else {
        if (c->flags & 32) {
          {

          }
        } else {
          {

          }
        }
      }
    }
  }

  while (1) {
    while_26_continue:  ;
    if (ac->ev.addWrite) {
      {

      }
    }
    goto __dyc_dummy_label;
  }
  __dyc_dummy_label:  ;
  __dyc_print_ptr__char(cstr);
  __dyc_printpre_byte(clen);
  __dyc_print_ptr__char(sname);
}
}
