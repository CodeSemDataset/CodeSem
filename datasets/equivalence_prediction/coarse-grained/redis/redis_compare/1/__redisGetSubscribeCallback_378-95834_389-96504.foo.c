#include "../../include/dycfoo.h"
#include "../../include/async.i.hd.c.h"
void __dyc_foo(void) 
{ redisContext *c ;
  dict *callbacks ;
  dictEntry *de ;
  int pvariant ;
  char *stype ;
  sds sname ;
  int __res___0 ;
  int __attribute__((__leaf__, __gnu_inline__))  tmp___5 ;
  __int32_t const   **tmp___6 ;
  int tmp___7 ;
  redisAsyncContext *ac ;
  redisReply *reply ;
  int __attribute__((__leaf__, __gnu_inline__))  __dyc_funcallvar_1 ;
  __int32_t const   **__dyc_funcallvar_2 ;
  sds __dyc_funcallvar_3 ;
  dictEntry *__dyc_funcallvar_4 ;
  int __dyc_funcallvar_5 ;

  {
  c = __dyc_read_ptr__typdef_redisContext();
  stype = __dyc_read_ptr__char();
  ac = __dyc_read_ptr__typdef_redisAsyncContext();
  reply = __dyc_read_ptr__typdef_redisReply();
  __dyc_funcallvar_1 = (int __attribute__((__leaf__,
  __gnu_inline__))  )__dyc_readpre_byte();
  __dyc_funcallvar_2 = (__int32_t const   **)__dyc_read_ptr__ptr__typdef___int32_t();
  __dyc_funcallvar_3 = __dyc_read_ptr__char();
  __dyc_funcallvar_4 = __dyc_read_ptr__typdef_dictEntry();
  __dyc_funcallvar_5 = __dyc_readpre_byte();
  callbacks = 0;
  de = 0;
  pvariant = 0;
  sname = 0;
  __res___0 = 0;
  tmp___5 = 0;
  tmp___6 = 0;
  tmp___7 = 0;
  if (sizeof(char ) > 1UL) {
    {
    tmp___5 = __dyc_funcallvar_1;
    __res___0 = (int )tmp___5;
    }
  } else {
    {
    tmp___6 = __dyc_funcallvar_2;
    __res___0 = (int )*(*tmp___6 + (int )*(stype + 0));
    }
  }
  if (__res___0 == 112) {
    pvariant = 1;
  } else {
    pvariant = 0;
  }
  if (pvariant) {
    callbacks = ac->sub.patterns;
  } else {
    callbacks = ac->sub.channels;
  }
  if (! ((*(reply->element + 1))->type == 1)) {
    {

    }
  }
  sname = __dyc_funcallvar_3;
  de = __dyc_funcallvar_4;
  if ((unsigned long )de != (unsigned long )((void *)0)) {
    {

    tmp___7 = __dyc_funcallvar_5;
    }
    if (tmp___7 == 0) {
      {

      }
      if (! ((*(reply->element + 2))->type == 3)) {
        {

        }
      }
      if ((*(reply->element + 2))->integer == 0LL) {
        c->flags &= -33;
      }
    }
  }
  __dyc_dummy_label:  ;
  __dyc_print_ptr__typdef_dict(callbacks);
  __dyc_print_ptr__char(sname);
}
}
