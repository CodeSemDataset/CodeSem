#include "../../include/dycfoo.h"
#include "../../include/async.i.hd.c.h"
void __dyc_foo(void) 
{ redisContext *c ;
  redisCallback cb ;
  int pvariant ;
  int hasnext ;
  char const   *cstr ;
  size_t clen ;
  char const   *p ;
  sds sname ;
  int ret ;
  int __res___0 ;
  int __attribute__((__leaf__, __gnu_inline__))  tmp___5 ;
  __int32_t const   **tmp___6 ;
  int tmp___7 ;
  int tmp___8 ;
  int tmp___9 ;
  redisCallbackFn *fn ;
  void *privdata ;
  char const   *__dyc_funcallvar_1 ;
  int __attribute__((__leaf__, __gnu_inline__))  __dyc_funcallvar_2 ;
  __int32_t const   **__dyc_funcallvar_3 ;
  int __dyc_funcallvar_4 ;
  char const   *__dyc_funcallvar_5 ;
  sds __dyc_funcallvar_6 ;
  int __dyc_funcallvar_7 ;
  int __dyc_funcallvar_8 ;
  int __dyc_funcallvar_9 ;
  int __dyc_funcallvar_10 ;

  {
  c = __dyc_read_ptr__typdef_redisContext();
  cstr = (char const   *)__dyc_read_ptr__char();
  clen = (size_t )__dyc_readpre_byte();
  fn = (redisCallbackFn *)__dyc_read_ptr__typdef_redisCallbackFn();
  privdata = __dyc_read_ptr__void();
  __dyc_funcallvar_1 = (char const   *)__dyc_read_ptr__char();
  __dyc_funcallvar_2 = (int __attribute__((__leaf__,
  __gnu_inline__))  )__dyc_readpre_byte();
  __dyc_funcallvar_3 = (__int32_t const   **)__dyc_read_ptr__ptr__typdef___int32_t();
  __dyc_funcallvar_4 = __dyc_readpre_byte();
  __dyc_funcallvar_5 = (char const   *)__dyc_read_ptr__char();
  __dyc_funcallvar_6 = __dyc_read_ptr__char();
  __dyc_funcallvar_7 = __dyc_readpre_byte();
  __dyc_funcallvar_8 = __dyc_readpre_byte();
  __dyc_funcallvar_9 = __dyc_readpre_byte();
  __dyc_funcallvar_10 = __dyc_readpre_byte();
  memset(& cb, 0, sizeof(redisCallback ));
  pvariant = 0;
  hasnext = 0;
  p = 0;
  sname = 0;
  ret = 0;
  __res___0 = 0;
  tmp___5 = 0;
  tmp___6 = 0;
  tmp___7 = 0;
  tmp___8 = 0;
  tmp___9 = 0;
  cb.fn = fn;
  cb.privdata = privdata;
  p = __dyc_funcallvar_1;
  if (! ((unsigned long )p != (unsigned long )((void *)0))) {
    {

    }
  }
  hasnext = (int const   )*(p + 0) == 36;
  if (sizeof(char const   ) > 1UL) {
    {
    tmp___5 = __dyc_funcallvar_2;
    __res___0 = (int )tmp___5;
    }
  } else {
    {
    tmp___6 = __dyc_funcallvar_3;
    __res___0 = (int )*(*tmp___6 + (int )*(cstr + 0));
    }
  }
  if (__res___0 == 112) {
    pvariant = 1;
  } else {
    pvariant = 0;
  }
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
  __dyc_dummy_label:  ;
  __dyc_print_comp_52redisCallback(cb);
  __dyc_print_ptr__char(cstr);
  __dyc_printpre_byte(clen);
  __dyc_print_ptr__char(sname);
}
}
