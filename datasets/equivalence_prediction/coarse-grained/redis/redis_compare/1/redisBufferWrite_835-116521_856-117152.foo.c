#include "../../include/dycfoo.h"
#include "../../include/hiredis.i.hd.c.h"
void __dyc_foo(void) 
{ int nwritten ;
  size_t tmp ;
  ssize_t tmp___0 ;
  int *tmp___1 ;
  int *tmp___2 ;
  size_t tmp___3 ;
  size_t tmp___4 ;
  size_t tmp___5 ;
  redisContext *c ;
  int *done ;
  size_t __dyc_funcallvar_1 ;
  size_t __dyc_funcallvar_2 ;
  ssize_t __dyc_funcallvar_3 ;
  int *__dyc_funcallvar_4 ;
  int *__dyc_funcallvar_5 ;
  size_t __dyc_funcallvar_6 ;
  sds __dyc_funcallvar_7 ;
  size_t __dyc_funcallvar_8 ;

  {
  c = __dyc_read_ptr__typdef_redisContext();
  done = __dyc_read_ptr__int();
  __dyc_funcallvar_1 = (size_t )__dyc_readpre_byte();
  __dyc_funcallvar_2 = (size_t )__dyc_readpre_byte();
  __dyc_funcallvar_3 = (ssize_t )__dyc_readpre_byte();
  __dyc_funcallvar_4 = __dyc_read_ptr__int();
  __dyc_funcallvar_5 = __dyc_read_ptr__int();
  __dyc_funcallvar_6 = (size_t )__dyc_readpre_byte();
  __dyc_funcallvar_7 = __dyc_read_ptr__char();
  __dyc_funcallvar_8 = (size_t )__dyc_readpre_byte();
  nwritten = 0;
  tmp = 0;
  tmp___0 = 0;
  tmp___1 = 0;
  tmp___2 = 0;
  tmp___3 = 0;
  tmp___4 = 0;
  tmp___5 = 0;
  if (c->err) {
    goto __dyc_dummy_label;
  }
  tmp___4 = __dyc_funcallvar_1;
  if (tmp___4 > 0UL) {
    {
    tmp = __dyc_funcallvar_2;
    tmp___0 = __dyc_funcallvar_3;
    nwritten = (int )tmp___0;
    }
    if (nwritten == -1) {
      {
      tmp___1 = __dyc_funcallvar_4;
      }
      if (*tmp___1 == 11) {
        if (! (! (c->flags & 1))) {
          goto _L;
        }
      } else {
        _L:  
        {
        tmp___2 = __dyc_funcallvar_5;
        }
        if (! (*tmp___2 == 4)) {
          {

          }
          goto __dyc_dummy_label;
        }
      }
    } else {
      if (nwritten > 0) {
        {
        tmp___3 = __dyc_funcallvar_6;
        }
        if (nwritten == (int )tmp___3) {
          {

          c->obuf = __dyc_funcallvar_7;
          }
        } else {
          {

          }
        }
      }
    }
  }
  if ((unsigned long )done != (unsigned long )((void *)0)) {
    {
    tmp___5 = __dyc_funcallvar_8;
    *done = tmp___5 == 0UL;
    }
  }
  __dyc_dummy_label:  ;
  __dyc_printpre_byte(tmp);
}
}
