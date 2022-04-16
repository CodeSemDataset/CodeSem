#include "../../include/dycfoo.h"
#include "../../include/sds.i.hd.c.h"
void __dyc_foo(void) 
{ int elements ;
  int start ;
  int j ;
  sds *tokens ;
  sds *newtokens ;
  int tmp___1 ;
  char const   *s ;
  char const   *sep ;
  int seplen ;
  int __dyc_funcallvar_3 ;
  sds __dyc_funcallvar_4 ;

  {
  elements = __dyc_readpre_byte();
  j = __dyc_readpre_byte();
  tokens = __dyc_read_ptr__typdef_sds();
  newtokens = __dyc_read_ptr__typdef_sds();
  s = (char const   *)__dyc_read_ptr__char();
  sep = (char const   *)__dyc_read_ptr__char();
  seplen = __dyc_readpre_byte();
  __dyc_funcallvar_3 = __dyc_readpre_byte();
  __dyc_funcallvar_4 = __dyc_read_ptr__char();
  start = 0;
  tmp___1 = 0;
  tokens = newtokens;
  if ((int const   )*(s + j) == (int const   )*(sep + 0)) {
    goto _L;
  } else {
    goto __dyc_dummy_label;
  }
  tmp___1 = __dyc_funcallvar_3;
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
  __dyc_dummy_label:  ;
  __dyc_printpre_byte(elements);
  __dyc_printpre_byte(start);
  __dyc_printpre_byte(j);
  __dyc_print_ptr__typdef_sds(tokens);
}
}
