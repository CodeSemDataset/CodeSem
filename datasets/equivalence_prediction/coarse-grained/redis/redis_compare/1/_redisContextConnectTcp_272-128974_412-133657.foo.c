#include "../../include/dycfoo.h"
#include "../../include/net.i.hd.c.h"
void __dyc_foo(void) 
{ int s ;
  int rv ;
  int n ;
  struct addrinfo hints ;
  struct addrinfo *servinfo ;
  struct addrinfo *bservinfo ;
  struct addrinfo *p ;
  struct addrinfo *b ;
  int blocking ;
  int reuseaddr ;
  int reuses ;
  long timeout_msec ;
  char *tmp___8 ;
  void *tmp___9 ;
  int tmp___10 ;
  char *tmp___20 ;
  char const   *tmp___21 ;
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
  int *tmp___35 ;
  char *tmp___36 ;
  redisContext *c ;
  char const   *addr ;
  int port ;
  struct timeval  const  *timeout ;
  char const   *source_addr ;
  char *__dyc_funcallvar_1 ;
  void *__dyc_funcallvar_2 ;
  int __dyc_funcallvar_3 ;
  char *__dyc_funcallvar_4 ;
  int __dyc_funcallvar_5 ;
  int __dyc_funcallvar_6 ;
  char const   *__dyc_funcallvar_7 ;
  int __dyc_funcallvar_8 ;
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
  int *__dyc_funcallvar_23 ;
  char *__dyc_funcallvar_24 ;

  {
  bservinfo = __dyc_read_ptr__comp_53addrinfo();
  c = __dyc_read_ptr__typdef_redisContext();
  addr = (char const   *)__dyc_read_ptr__char();
  port = __dyc_readpre_byte();
  timeout = (struct timeval  const  *)__dyc_read_ptr__comp_4timeval();
  source_addr = (char const   *)__dyc_read_ptr__char();
  __dyc_funcallvar_1 = __dyc_read_ptr__char();
  __dyc_funcallvar_2 = __dyc_read_ptr__void();
  __dyc_funcallvar_3 = __dyc_readpre_byte();
  __dyc_funcallvar_4 = __dyc_read_ptr__char();
  __dyc_funcallvar_5 = __dyc_readpre_byte();
  __dyc_funcallvar_6 = __dyc_readpre_byte();
  __dyc_funcallvar_7 = (char const   *)__dyc_read_ptr__char();
  __dyc_funcallvar_8 = __dyc_readpre_byte();
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
  __dyc_funcallvar_23 = __dyc_read_ptr__int();
  __dyc_funcallvar_24 = __dyc_read_ptr__char();
  s = 0;
  rv = 0;
  n = 0;
  memset(& hints, 0, sizeof(struct addrinfo ));
  servinfo = 0;
  p = 0;
  b = 0;
  blocking = 0;
  reuseaddr = 0;
  reuses = 0;
  timeout_msec = 0;
  tmp___8 = 0;
  tmp___9 = 0;
  tmp___10 = 0;
  tmp___20 = 0;
  tmp___21 = 0;
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
  tmp___35 = 0;
  tmp___36 = 0;
  blocking = c->flags & 1;
  reuseaddr = c->flags & 128;
  reuses = 0;
  timeout_msec = -1L;
  servinfo = (struct addrinfo *)((void *)0);
  c->connection_type = 0;
  c->tcp.port = port;
  if ((unsigned long )c->tcp.host != (unsigned long )addr) {
    if (c->tcp.host) {
      {

      }
    }
    {
    tmp___8 = __dyc_funcallvar_1;
    c->tcp.host = tmp___8;
    }
  }
  if (timeout) {
    if ((unsigned long )c->timeout != (unsigned long )timeout) {
      if ((unsigned long )c->timeout == (unsigned long )((void *)0)) {
        {
        tmp___9 = __dyc_funcallvar_2;
        c->timeout = (struct timeval *)tmp___9;
        }
      }
      {

      }
    }
  } else {
    if (c->timeout) {
      {

      }
    }
    c->timeout = (struct timeval *)((void *)0);
  }
  tmp___10 = __dyc_funcallvar_3;
  if (tmp___10 != 0) {
    {

    }
    goto error;
  }
  if ((unsigned long )source_addr == (unsigned long )((void *)0)) {
    {

    c->tcp.source_addr = (char *)((void *)0);
    }
  } else {
    if ((unsigned long )c->tcp.source_addr != (unsigned long )source_addr) {
      {

      tmp___20 = __dyc_funcallvar_4;
      c->tcp.source_addr = tmp___20;
      }
    }
  }


  hints.ai_family = 2;
  hints.ai_socktype = 1;
  rv = __dyc_funcallvar_5;
  if (rv != 0) {
    {
    hints.ai_family = 10;
    rv = __dyc_funcallvar_6;
    }
    if (rv != 0) {
      {
      tmp___21 = __dyc_funcallvar_7;

      }
      goto __dyc_dummy_label;
    }
  }
  p = servinfo;
  while (1) {
    while_1_continue:  ;
    if (! ((unsigned long )p != (unsigned long )((void *)0))) {
      goto while_1_break;
    }
    addrretry: 
    {
    s = __dyc_funcallvar_8;
    }
    if (s == -1) {
      goto __Cont;
    }
    {
    c->fd = s;
    tmp___22 = __dyc_funcallvar_9;
    }
    if (tmp___22 != 0) {
      goto error;
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
        goto error;
      }
      if (reuseaddr) {
        {
        n = 1;
        tmp___24 = __dyc_funcallvar_12;
        }
        if (tmp___24 < 0) {
          goto error;
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
        goto error;
      }
    }
    {
    tmp___32 = __dyc_funcallvar_16;
    }
    if (tmp___32 == -1) {
      {
      tmp___31 = __dyc_funcallvar_17;
      }
      if (*tmp___31 == 113) {
        {

        }
        goto __Cont;
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
                goto error;
              } else {
                {

                }
                goto addrretry;
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
              goto error;
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
        goto error;
      }
    }
    {
    tmp___34 = __dyc_funcallvar_22;
    }
    if (tmp___34 != 0) {
      goto error;
    }
    c->flags |= 2;
    rv = 0;
    goto __dyc_dummy_label;
    __Cont:  
    p = p->ai_next;
  }
  while_1_break:  ;
  if ((unsigned long )p == (unsigned long )((void *)0)) {
    {
    tmp___35 = __dyc_funcallvar_23;
    tmp___36 = __dyc_funcallvar_24;


    }
    goto error;
  }
  error: 
  rv = -1;
  __dyc_dummy_label:  ;
  __dyc_printpre_byte(rv);
  __dyc_printpre_byte(n);
  __dyc_print_comp_53addrinfo(hints);
  __dyc_print_ptr__comp_53addrinfo(servinfo);
  __dyc_printpre_byte(blocking);
  __dyc_printpre_byte(reuseaddr);
  __dyc_printpre_byte(reuses);
  __dyc_printpre_byte(timeout_msec);
  __dyc_print_ptr__char(tmp___21);
  __dyc_printpre_byte(bound);
  __dyc_print_ptr__char(tmp___23);
  __dyc_print_ptr__int(tmp___26);
  __dyc_print_ptr__char(tmp___27);
  __dyc_print_ptr__int(tmp___35);
  __dyc_print_ptr__char(tmp___36);
}
}
