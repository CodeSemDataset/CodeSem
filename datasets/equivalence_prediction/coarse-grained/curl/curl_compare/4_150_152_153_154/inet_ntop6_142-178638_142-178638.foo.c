#include "../../include/dycfoo.h"
#include "../../include/inet_ntop.i.hd.c.h"
void __dyc_foo(void) 
{ char *tp ;
  struct __anonstruct_best_74 best ;
  unsigned long words[8] ;
  int *tmp___2 ;
  char *tmp___3 ;
  size_t tmp___4 ;
  char *__dyc_funcallvar_1 ;
  int *__dyc_funcallvar_2 ;
  size_t __dyc_funcallvar_3 ;

  {
  tp = __dyc_read_ptr__char();
  best = __dyc_read_comp_92__anonstruct_best_74();
  __dyc_funcallvar_1 = __dyc_read_ptr__char();
  __dyc_funcallvar_2 = __dyc_read_ptr__int();
  __dyc_funcallvar_3 = (size_t )__dyc_readpre_byte();
  tmp___2 = 0;
  tmp___3 = 0;
  tmp___4 = 0;
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
          goto __dyc_dummy_label;
        }
      }
    }
  }
  __dyc_dummy_label:  ;
  __dyc_print_ptr__char(tp);
}
}
