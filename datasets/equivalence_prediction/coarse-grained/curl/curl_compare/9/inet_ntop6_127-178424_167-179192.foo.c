#include "../../include/dycfoo.h"
#include "../../include/inet_ntop.i.hd.c.h"
void __dyc_foo(void) 
{ char tmp[sizeof("ffff:ffff:ffff:ffff:ffff:ffff:255.255.255.255")] ;
  char *tp ;
  struct __anonstruct_best_74 best ;
  unsigned long words[8] ;
  int i ;
  char *tmp___0 ;
  char *tmp___1 ;
  int *tmp___2 ;
  char *tmp___3 ;
  size_t tmp___4 ;
  int __attribute__((__visibility__("default")))  tmp___5 ;
  char *tmp___6 ;
  char *tmp___7 ;
  int *tmp___8 ;
  size_t size ;
  char *__dyc_funcallvar_1 ;
  int *__dyc_funcallvar_2 ;
  size_t __dyc_funcallvar_3 ;
  int __attribute__((__visibility__("default")))  __dyc_funcallvar_4 ;
  int *__dyc_funcallvar_5 ;

  {
  tp = __dyc_read_ptr__char();
  best = __dyc_read_comp_92__anonstruct_best_74();
  i = __dyc_readpre_byte();
  size = (size_t )__dyc_readpre_byte();
  __dyc_funcallvar_1 = __dyc_read_ptr__char();
  __dyc_funcallvar_2 = __dyc_read_ptr__int();
  __dyc_funcallvar_3 = (size_t )__dyc_readpre_byte();
  __dyc_funcallvar_4 = (int __attribute__((__visibility__("default")))  )__dyc_readpre_byte();
  __dyc_funcallvar_5 = __dyc_read_ptr__int();
  tmp___0 = 0;
  tmp___1 = 0;
  tmp___2 = 0;
  tmp___3 = 0;
  tmp___4 = 0;
  tmp___5 = 0;
  tmp___6 = 0;
  tmp___7 = 0;
  tmp___8 = 0;
  while (1) {
    while_3_continue:  ;
    if (! (i < 8)) {
      goto while_3_break;
    }
    if (best.base != -1L) {
      if ((long )i >= best.base) {
        if ((long )i < best.base + best.len) {
          if ((long )i == best.base) {
            tmp___0 = tp;
            tp ++;
            *tmp___0 = (char )':';
          }
          goto __Cont;
        }
      }
    }
    if (i) {
      tmp___1 = tp;
      tp ++;
      *tmp___1 = (char )':';
    }
    if (i == 6) {
      if (best.base == 0L) {
        if (best.len == 6L) {
          goto _L;
        } else {
          if (best.len == 5L) {
            if (words[5] == 65535UL) {
              _L:  
              {
              tmp___3 = __dyc_funcallvar_1;
              }
              if (! tmp___3) {
                {
                tmp___2 = __dyc_funcallvar_2;
                *tmp___2 = 28;
                }
                goto __dyc_dummy_label;
              }
              {
              tmp___4 = __dyc_funcallvar_3;
              tp += tmp___4;
              }
              goto while_3_break;
            }
          }
        }
      }
    }
    {
    tmp___5 = __dyc_funcallvar_4;
    tp += tmp___5;
    }
    __Cont:  
    i ++;
  }
  while_3_break:  ;
  if (best.base != -1L) {
    if (best.base + best.len == 8L) {
      tmp___6 = tp;
      tp ++;
      *tmp___6 = (char )':';
    }
  }
  tmp___7 = tp;
  tp ++;
  *tmp___7 = (char )'\000';
  if ((unsigned long )(tp - tmp) > size) {
    {
    tmp___8 = __dyc_funcallvar_5;
    *tmp___8 = 28;
    }
    goto __dyc_dummy_label;
  }

  goto __dyc_dummy_label;
  __dyc_dummy_label:  ;
  __dyc_print_ptr__char(tp);
}
}
