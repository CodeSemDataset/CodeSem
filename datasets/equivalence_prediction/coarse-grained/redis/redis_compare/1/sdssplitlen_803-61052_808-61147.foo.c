#include "../../include/dycfoo.h"
#include "../../include/sds.i.hd.c.h"
void __dyc_foo(void) 
{ int elements ;
  int slots ;
  int j ;
  sds *tokens ;
  sds *newtokens ;
  void *tmp___0 ;
  int len ;
  int seplen ;
  int *count ;
  void *__dyc_funcallvar_2 ;

  {
  elements = __dyc_readpre_byte();
  slots = __dyc_readpre_byte();
  j = __dyc_readpre_byte();
  len = __dyc_readpre_byte();
  seplen = __dyc_readpre_byte();
  count = __dyc_read_ptr__int();
  __dyc_funcallvar_2 = __dyc_read_ptr__void();
  tokens = 0;
  newtokens = 0;
  tmp___0 = 0;
  *count = 0;
  goto __dyc_dummy_label;
  while_21_continue:  ;
  if (! (j < len - (seplen - 1))) {
    goto __dyc_dummy_label;
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
  __dyc_dummy_label:  ;
  __dyc_printpre_byte(slots);
  __dyc_print_ptr__typdef_sds(tokens);
}
}
