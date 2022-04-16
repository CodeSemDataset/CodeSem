#include "../../include/dycfoo.h"
#include "../../include/linenoise.i.hd.c.h"
void __dyc_foo(void) 
{ size_t plen ;
  char *buf ;
  size_t len ;
  size_t pos ;
  size_t tmp___0 ;
  size_t tmp___1 ;
  struct linenoiseState *l ;
  size_t __dyc_funcallvar_2 ;
  size_t __dyc_funcallvar_3 ;

  {
  plen = (size_t )__dyc_readpre_byte();
  buf = __dyc_read_ptr__char();
  len = (size_t )__dyc_readpre_byte();
  pos = (size_t )__dyc_readpre_byte();
  l = __dyc_read_ptr__comp_43linenoiseState();
  __dyc_funcallvar_2 = (size_t )__dyc_readpre_byte();
  __dyc_funcallvar_3 = (size_t )__dyc_readpre_byte();
  tmp___0 = 0;
  tmp___1 = 0;
  while (1) {
    while_5_continue:  ;
    if (! (plen + pos >= l->cols)) {
      goto while_5_break;
    }
    buf ++;
    len --;
    pos --;
  }
  while_5_break:  ;
  while (1) {
    while_6_continue:  ;
    if (! (plen + len > l->cols)) {
      goto while_6_break;
    }
    len --;
  }
  while_6_break:  ;


  tmp___0 = __dyc_funcallvar_2;

  tmp___1 = __dyc_funcallvar_3;
  __dyc_dummy_label:  ;
  __dyc_print_ptr__char(buf);
  __dyc_printpre_byte(tmp___0);
  __dyc_printpre_byte(tmp___1);
}
}
