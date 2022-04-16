#include "../../include/dycfoo.h"
#include "../../include/linenoise.i.hd.c.h"
void __dyc_foo(void) 
{ size_t plen ;
  int fd ;
  char *buf ;
  size_t len ;
  size_t pos ;
  size_t tmp___0 ;
  size_t tmp___1 ;
  size_t tmp___2 ;
  size_t tmp___3 ;
  ssize_t tmp___4 ;
  struct linenoiseState *l ;
  size_t __dyc_funcallvar_2 ;
  size_t __dyc_funcallvar_3 ;
  size_t __dyc_funcallvar_4 ;
  size_t __dyc_funcallvar_5 ;
  ssize_t __dyc_funcallvar_6 ;

  {
  plen = (size_t )__dyc_readpre_byte();
  l = __dyc_read_ptr__comp_43linenoiseState();
  __dyc_funcallvar_2 = (size_t )__dyc_readpre_byte();
  __dyc_funcallvar_3 = (size_t )__dyc_readpre_byte();
  __dyc_funcallvar_4 = (size_t )__dyc_readpre_byte();
  __dyc_funcallvar_5 = (size_t )__dyc_readpre_byte();
  __dyc_funcallvar_6 = (ssize_t )__dyc_readpre_byte();
  fd = 0;
  buf = 0;
  len = 0;
  pos = 0;
  tmp___0 = 0;
  tmp___1 = 0;
  tmp___2 = 0;
  tmp___3 = 0;
  tmp___4 = 0;
  fd = l->ofd;
  buf = l->buf;
  len = l->len;
  pos = l->pos;
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




  tmp___2 = __dyc_funcallvar_4;


  tmp___3 = __dyc_funcallvar_5;

  tmp___4 = __dyc_funcallvar_6;
  if (tmp___4 == -1L) {

  }
  __dyc_dummy_label:  ;
  __dyc_printpre_byte(fd);
  __dyc_print_ptr__char(buf);
  __dyc_printpre_byte(tmp___0);
  __dyc_printpre_byte(tmp___1);
  __dyc_printpre_byte(tmp___2);
  __dyc_printpre_byte(tmp___3);
  __dyc_printpre_byte(tmp___4);
}
}
