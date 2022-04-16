#include "../../include/dycfoo.h"
#include "../../include/linenoise.i.hd.c.h"
void __dyc_foo(void) 
{ int plen ;
  int rows ;
  int rpos2 ;
  int col ;
  size_t tmp___2 ;
  size_t tmp___3 ;
  size_t tmp___4 ;
  size_t tmp___5 ;
  size_t tmp___6 ;
  ssize_t tmp___7 ;
  struct linenoiseState *l ;
  size_t __dyc_funcallvar_4 ;
  size_t __dyc_funcallvar_5 ;
  size_t __dyc_funcallvar_6 ;
  size_t __dyc_funcallvar_7 ;
  size_t __dyc_funcallvar_8 ;
  ssize_t __dyc_funcallvar_9 ;

  {
  plen = __dyc_readpre_byte();
  rows = __dyc_readpre_byte();
  l = __dyc_read_ptr__comp_43linenoiseState();
  __dyc_funcallvar_4 = (size_t )__dyc_readpre_byte();
  __dyc_funcallvar_5 = (size_t )__dyc_readpre_byte();
  __dyc_funcallvar_6 = (size_t )__dyc_readpre_byte();
  __dyc_funcallvar_7 = (size_t )__dyc_readpre_byte();
  __dyc_funcallvar_8 = (size_t )__dyc_readpre_byte();
  __dyc_funcallvar_9 = (ssize_t )__dyc_readpre_byte();
  rpos2 = 0;
  col = 0;
  tmp___2 = 0;
  tmp___3 = 0;
  tmp___4 = 0;
  tmp___5 = 0;
  tmp___6 = 0;
  tmp___7 = 0;
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

  l->oldpos = l->pos;
  tmp___7 = __dyc_funcallvar_9;
  if (tmp___7 == -1L) {

  }
  __dyc_dummy_label:  ;
  __dyc_printpre_byte(tmp___2);
  __dyc_printpre_byte(tmp___3);
  __dyc_printpre_byte(tmp___4);
  __dyc_printpre_byte(tmp___5);
  __dyc_printpre_byte(tmp___6);
  __dyc_printpre_byte(tmp___7);
}
}
