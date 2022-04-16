#include "../../include/dycfoo.h"
#include "../../include/sds.i.hd.c.h"
void __dyc_foo(void) 
{ int elements ;
  int slots ;
  int start ;
  int j ;
  sds *tokens ;
  void *tmp ;
  sds *newtokens ;
  void *tmp___0 ;
  int tmp___1 ;
  char const   *s ;
  int len ;
  char const   *sep ;
  int seplen ;
  int *count ;
  void *__dyc_funcallvar_1 ;
  void *__dyc_funcallvar_2 ;
  int __dyc_funcallvar_3 ;
  sds __dyc_funcallvar_4 ;
  sds __dyc_funcallvar_5 ;

  {
  s = (char const   *)__dyc_read_ptr__char();
  len = __dyc_readpre_byte();
  sep = (char const   *)__dyc_read_ptr__char();
  seplen = __dyc_readpre_byte();
  count = __dyc_read_ptr__int();
  __dyc_funcallvar_1 = __dyc_read_ptr__void();
  __dyc_funcallvar_2 = __dyc_read_ptr__void();
  __dyc_funcallvar_3 = __dyc_readpre_byte();
  __dyc_funcallvar_4 = __dyc_read_ptr__char();
  __dyc_funcallvar_5 = __dyc_read_ptr__char();
  elements = 0;
  slots = 0;
  start = 0;
  j = 0;
  tokens = 0;
  tmp = 0;
  newtokens = 0;
  tmp___0 = 0;
  tmp___1 = 0;
  elements = 0;
  slots = 5;
  start = 0;
  if (seplen < 1) {
    goto __dyc_dummy_label;
  } else {
    if (len < 0) {
      goto __dyc_dummy_label;
    }
  }
  tmp = __dyc_funcallvar_1;
  tokens = (sds *)tmp;
  if ((unsigned long )tokens == (unsigned long )((void *)0)) {
    goto __dyc_dummy_label;
  }
  if (len == 0) {
    *count = 0;
    goto __dyc_dummy_label;
  }
  j = 0;
  while (1) {
    while_21_continue:  ;
    if (! (j < len - (seplen - 1))) {
      goto while_21_break;
    }
    if (slots < elements + 2) {
      {
      slots *= 2;
      tmp___0 = __dyc_funcallvar_2;
      newtokens = (sds *)tmp___0;
      }
      if ((unsigned long )newtokens == (unsigned long )((void *)0)) {
        goto __dyc_dummy_label;
      }
      tokens = newtokens;
    }
    if (seplen == 1) {
      if ((int const   )*(s + j) == (int const   )*(sep + 0)) {
        goto _L;
      } else {
        goto _L___0;
      }
    } else {
      _L___0:  
      {
      tmp___1 = __dyc_funcallvar_3;
      }
      if (tmp___1 == 0) {
        _L:  
        {
        *(tokens + elements) = __dyc_funcallvar_4;
        }
        if ((unsigned long )*(tokens + elements) == (unsigned long )((void *)0)) {
          goto __dyc_dummy_label;
        }
        elements ++;
        start = j + seplen;
        j = (j + seplen) - 1;
      }
    }
    j ++;
  }
  while_21_break:  ;
  *(tokens + elements) = __dyc_funcallvar_5;
  if ((unsigned long )*(tokens + elements) == (unsigned long )((void *)0)) {
    goto __dyc_dummy_label;
  }
  elements ++;
  *count = elements;
  __dyc_dummy_label:  ;
  __dyc_printpre_byte(elements);
  __dyc_printpre_byte(slots);
  __dyc_printpre_byte(start);
  __dyc_print_ptr__typdef_sds(tokens);
}
}
