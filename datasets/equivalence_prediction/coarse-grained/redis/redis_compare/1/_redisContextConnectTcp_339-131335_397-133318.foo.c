#include "../../include/dycfoo.h"
#include "../../include/net.i.hd.c.h"
void __dyc_foo(void) 
{ int s ;
  int rv ;
  int n ;
  struct addrinfo *bservinfo ;
  struct addrinfo *b ;
  int blocking ;
  int reuseaddr ;
  int reuses ;
  int tmp___22 ;
  int bound ;
  char const   *tmp___23 ;
  int tmp___24 ;
  int tmp___25 ;
  int *tmp___26 ;
  char *tmp___27 ;
  int tmp___28 ;
  int *tmp___29 ;
  int *tmp___30 ;
  int *tmp___31 ;
  int tmp___32 ;
  int tmp___33 ;
  int tmp___34 ;
  redisContext *c ;
  int __dyc_funcallvar_9 ;
  int __dyc_funcallvar_10 ;
  char const   *__dyc_funcallvar_11 ;
  int __dyc_funcallvar_12 ;
  int __dyc_funcallvar_13 ;
  int *__dyc_funcallvar_14 ;
  char *__dyc_funcallvar_15 ;
  int __dyc_funcallvar_16 ;
  int *__dyc_funcallvar_17 ;
  int *__dyc_funcallvar_18 ;
  int *__dyc_funcallvar_19 ;
  int __dyc_funcallvar_20 ;
  int __dyc_funcallvar_21 ;
  int __dyc_funcallvar_22 ;

  {
  s = __dyc_readpre_byte();
  bservinfo = __dyc_read_ptr__comp_53addrinfo();
  blocking = __dyc_readpre_byte();
  reuseaddr = __dyc_readpre_byte();
  reuses = __dyc_readpre_byte();
  c = __dyc_read_ptr__typdef_redisContext();
  __dyc_funcallvar_9 = __dyc_readpre_byte();
  __dyc_funcallvar_10 = __dyc_readpre_byte();
  __dyc_funcallvar_11 = (char const   *)__dyc_read_ptr__char();
  __dyc_funcallvar_12 = __dyc_readpre_byte();
  __dyc_funcallvar_13 = __dyc_readpre_byte();
  __dyc_funcallvar_14 = __dyc_read_ptr__int();
  __dyc_funcallvar_15 = __dyc_read_ptr__char();
  __dyc_funcallvar_16 = __dyc_readpre_byte();
  __dyc_funcallvar_17 = __dyc_read_ptr__int();
  __dyc_funcallvar_18 = __dyc_read_ptr__int();
  __dyc_funcallvar_19 = __dyc_read_ptr__int();
  __dyc_funcallvar_20 = __dyc_readpre_byte();
  __dyc_funcallvar_21 = __dyc_readpre_byte();
  __dyc_funcallvar_22 = __dyc_readpre_byte();
  rv = 0;
  n = 0;
  b = 0;
  tmp___22 = 0;
  bound = 0;
  tmp___23 = 0;
  tmp___24 = 0;
  tmp___25 = 0;
  tmp___26 = 0;
  tmp___27 = 0;
  tmp___28 = 0;
  tmp___29 = 0;
  tmp___30 = 0;
  tmp___31 = 0;
  tmp___32 = 0;
  tmp___33 = 0;
  tmp___34 = 0;
  if (s == -1) {
    goto __dyc_dummy_label;
  }
  c->fd = s;
  tmp___22 = __dyc_funcallvar_9;
  if (tmp___22 != 0) {
    goto __dyc_dummy_label;
  }
  if (c->tcp.source_addr) {
    {
    bound = 0;
    rv = __dyc_funcallvar_10;
    }
    if (rv != 0) {
      {
      tmp___23 = __dyc_funcallvar_11;


      }
      goto __dyc_dummy_label;
    }
    if (reuseaddr) {
      {
      n = 1;
      tmp___24 = __dyc_funcallvar_12;
      }
      if (tmp___24 < 0) {
        goto __dyc_dummy_label;
      }
    }
    b = bservinfo;
    {
    while (1) {
      while_2_continue:  ;
      if (! ((unsigned long )b != (unsigned long )((void *)0))) {
        goto while_2_break;
      }
      {
      tmp___25 = __dyc_funcallvar_13;
      }
      if (tmp___25 != -1) {
        bound = 1;
        goto while_2_break;
      }
      b = b->ai_next;
    }
    while_2_break:  ;
    }
    {

    }
    if (! bound) {
      {
      tmp___26 = __dyc_funcallvar_14;
      tmp___27 = __dyc_funcallvar_15;


      }
      goto __dyc_dummy_label;
    }
  }
  tmp___32 = __dyc_funcallvar_16;
  if (tmp___32 == -1) {
    {
    tmp___31 = __dyc_funcallvar_17;
    }
    if (*tmp___31 == 113) {
      {

      }
      goto __dyc_dummy_label;
    } else {
      {
      tmp___30 = __dyc_funcallvar_18;
      }
      if (*tmp___30 == 115) {
        if (! (! blocking)) {
          goto _L___0;
        }
      } else {
        _L___0:  
        {
        tmp___29 = __dyc_funcallvar_19;
        }
        if (*tmp___29 == 99) {
          if (reuseaddr) {
            reuses ++;
            if (reuses >= 10) {
              goto __dyc_dummy_label;
            } else {
              {

              }
              goto __dyc_dummy_label;
            }
          } else {
            goto _L;
          }
        } else {
          _L:  
          {
          tmp___28 = __dyc_funcallvar_20;
          }
          if (tmp___28 != 0) {
            goto __dyc_dummy_label;
          }
        }
      }
    }
  }
  if (blocking) {
    {
    tmp___33 = __dyc_funcallvar_21;
    }
    if (tmp___33 != 0) {
      goto __dyc_dummy_label;
    }
  }
  tmp___34 = __dyc_funcallvar_22;
  if (tmp___34 != 0) {
    goto __dyc_dummy_label;
  }
  __dyc_dummy_label:  ;
  __dyc_printpre_byte(n);
  __dyc_printpre_byte(bound);
  __dyc_print_ptr__char(tmp___23);
  __dyc_print_ptr__int(tmp___26);
  __dyc_print_ptr__char(tmp___27);
}
}
