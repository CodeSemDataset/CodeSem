#include "../../include/dycfoo.h"
#include "../../include/linenoise.i.hd.c.h"
void __dyc_foo(void) 
{ int rows ;
  int rpos ;
  int old_rows ;
  int fd ;
  int j ;
  size_t tmp___0 ;
  size_t tmp___1 ;
  size_t tmp___2 ;
  size_t tmp___3 ;
  struct linenoiseState *l ;
  size_t __dyc_funcallvar_2 ;
  size_t __dyc_funcallvar_3 ;
  size_t __dyc_funcallvar_4 ;
  size_t __dyc_funcallvar_5 ;

  {
  rows = __dyc_readpre_byte();
  rpos = __dyc_readpre_byte();
  l = __dyc_read_ptr__comp_43linenoiseState();
  __dyc_funcallvar_2 = (size_t )__dyc_readpre_byte();
  __dyc_funcallvar_3 = (size_t )__dyc_readpre_byte();
  __dyc_funcallvar_4 = (size_t )__dyc_readpre_byte();
  __dyc_funcallvar_5 = (size_t )__dyc_readpre_byte();
  old_rows = 0;
  fd = 0;
  j = 0;
  tmp___0 = 0;
  tmp___1 = 0;
  tmp___2 = 0;
  tmp___3 = 0;
  old_rows = (int )l->maxrows;
  fd = l->ofd;
  if (rows > (int )l->maxrows) {
    l->maxrows = (unsigned long )rows;
  }

  if (old_rows - rpos > 0) {
    {

    tmp___0 = __dyc_funcallvar_2;

    }
  }
  j = 0;
  while (1) {
    while_7_continue:  ;
    if (! (j < old_rows - 1)) {
      goto while_7_break;
    }
    {

    tmp___1 = __dyc_funcallvar_3;

    j ++;
    }
  }
  while_7_break:  ;

  tmp___2 = __dyc_funcallvar_4;

  tmp___3 = __dyc_funcallvar_5;
  __dyc_dummy_label:  ;
  __dyc_printpre_byte(fd);
  __dyc_printpre_byte(tmp___0);
  __dyc_printpre_byte(tmp___1);
  __dyc_printpre_byte(tmp___2);
  __dyc_printpre_byte(tmp___3);
}
}
