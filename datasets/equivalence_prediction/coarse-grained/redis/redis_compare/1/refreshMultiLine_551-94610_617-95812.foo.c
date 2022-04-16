#include "../../include/dycfoo.h"
#include "../../include/linenoise.i.hd.c.h"
void __dyc_foo(void) 
{ int plen ;
  int rows ;
  int rpos ;
  int rpos2 ;
  int col ;
  int old_rows ;
  int fd ;
  int j ;
  size_t tmp___0 ;
  size_t tmp___1 ;
  size_t tmp___2 ;
  size_t tmp___3 ;
  size_t tmp___4 ;
  size_t tmp___5 ;
  size_t tmp___6 ;
  struct linenoiseState *l ;
  size_t __dyc_funcallvar_2 ;
  size_t __dyc_funcallvar_3 ;
  size_t __dyc_funcallvar_4 ;
  size_t __dyc_funcallvar_5 ;
  size_t __dyc_funcallvar_6 ;
  size_t __dyc_funcallvar_7 ;
  size_t __dyc_funcallvar_8 ;

  {
  plen = __dyc_readpre_byte();
  rows = __dyc_readpre_byte();
  rpos = __dyc_readpre_byte();
  old_rows = __dyc_readpre_byte();
  l = __dyc_read_ptr__comp_43linenoiseState();
  __dyc_funcallvar_2 = (size_t )__dyc_readpre_byte();
  __dyc_funcallvar_3 = (size_t )__dyc_readpre_byte();
  __dyc_funcallvar_4 = (size_t )__dyc_readpre_byte();
  __dyc_funcallvar_5 = (size_t )__dyc_readpre_byte();
  __dyc_funcallvar_6 = (size_t )__dyc_readpre_byte();
  __dyc_funcallvar_7 = (size_t )__dyc_readpre_byte();
  __dyc_funcallvar_8 = (size_t )__dyc_readpre_byte();
  rpos2 = 0;
  col = 0;
  fd = 0;
  j = 0;
  tmp___0 = 0;
  tmp___1 = 0;
  tmp___2 = 0;
  tmp___3 = 0;
  tmp___4 = 0;
  tmp___5 = 0;
  tmp___6 = 0;
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



  if (l->pos) {
    if (l->pos == l->len) {
      if ((l->pos + (size_t )plen) % l->cols == 0UL) {
        {


        tmp___4 = __dyc_funcallvar_6;

        rows ++;
        }
        if (rows > (int )l->maxrows) {
          l->maxrows = (unsigned long )rows;
        }
      }
    }
  }
  rpos2 = (int )((((size_t )plen + l->pos) + l->cols) / l->cols);
  if (rows - rpos2 > 0) {
    {

    tmp___5 = __dyc_funcallvar_7;

    }
  }
  col = (plen + (int )l->pos) % (int )l->cols;
  if (col) {
    {

    }
  } else {
    {

    }
  }
  tmp___6 = __dyc_funcallvar_8;
  __dyc_dummy_label:  ;
  __dyc_printpre_byte(fd);
  __dyc_printpre_byte(tmp___0);
  __dyc_printpre_byte(tmp___1);
  __dyc_printpre_byte(tmp___2);
  __dyc_printpre_byte(tmp___3);
  __dyc_printpre_byte(tmp___4);
  __dyc_printpre_byte(tmp___5);
  __dyc_printpre_byte(tmp___6);
}
}
