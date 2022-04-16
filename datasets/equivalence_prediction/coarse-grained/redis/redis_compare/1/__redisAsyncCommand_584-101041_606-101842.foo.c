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
  int __res___0 ;
  int __attribute__((__leaf__, __gnu_inline__))  tmp___5 ;
  __int32_t const   **tmp___6 ;
  redisAsyncContext *ac ;
  redisCallbackFn *fn ;
  void *privdata ;
  char const   *__dyc_funcallvar_1 ;
  int __attribute__((__leaf__, __gnu_inline__))  __dyc_funcallvar_2 ;
  __int32_t const   **__dyc_funcallvar_3 ;

  {
  cstr = (char const   *)__dyc_read_ptr__char();
  clen = (size_t )__dyc_readpre_byte();
  ac = __dyc_read_ptr__typdef_redisAsyncContext();
  fn = (redisCallbackFn *)__dyc_read_ptr__typdef_redisCallbackFn();
  privdata = __dyc_read_ptr__void();
  __dyc_funcallvar_1 = (char const   *)__dyc_read_ptr__char();
  __dyc_funcallvar_2 = (int __attribute__((__leaf__,
  __gnu_inline__))  )__dyc_readpre_byte();
  __dyc_funcallvar_3 = (__int32_t const   **)__dyc_read_ptr__ptr__typdef___int32_t();
  c = 0;
  memset(& cb, 0, sizeof(redisCallback ));
  pvariant = 0;
  hasnext = 0;
  p = 0;
  __res___0 = 0;
  tmp___5 = 0;
  tmp___6 = 0;
  c = & ac->c;
  if (c->flags & 12) {
    goto __dyc_dummy_label;
  }
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
  __dyc_dummy_label:  ;
  __dyc_print_comp_52redisCallback(cb);
  __dyc_printpre_byte(hasnext);
  __dyc_print_ptr__char(cstr);
  __dyc_printpre_byte(clen);
}
}
