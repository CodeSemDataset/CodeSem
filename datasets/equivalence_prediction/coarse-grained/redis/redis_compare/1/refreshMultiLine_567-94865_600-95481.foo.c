#include "../../include/dycfoo.h"
#include "../../include/linenoise.i.hd.c.h"
void __dyc_foo(void) 
{ int plen ;
  int rows ;
  int rpos2 ;
  int old_rows ;
  int j ;
  size_t tmp___1 ;
  size_t tmp___2 ;
  size_t tmp___3 ;
  size_t tmp___4 ;
  struct linenoiseState *l ;
  size_t __dyc_funcallvar_3 ;
  size_t __dyc_funcallvar_4 ;
  size_t __dyc_funcallvar_5 ;
  size_t __dyc_funcallvar_6 ;

  {
  plen = __dyc_readpre_byte();
  rows = __dyc_readpre_byte();
  old_rows = __dyc_readpre_byte();
  j = __dyc_readpre_byte();
  l = __dyc_read_ptr__comp_43linenoiseState();
  __dyc_funcallvar_3 = (size_t )__dyc_readpre_byte();
  __dyc_funcallvar_4 = (size_t )__dyc_readpre_byte();
  __dyc_funcallvar_5 = (size_t )__dyc_readpre_byte();
  __dyc_funcallvar_6 = (size_t )__dyc_readpre_byte();
  rpos2 = 0;
  tmp___1 = 0;
  tmp___2 = 0;
  tmp___3 = 0;
  tmp___4 = 0;
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
  __dyc_dummy_label:  ;
  __dyc_printpre_byte(rpos2);
  __dyc_printpre_byte(tmp___1);
  __dyc_printpre_byte(tmp___2);
  __dyc_printpre_byte(tmp___3);
  __dyc_printpre_byte(tmp___4);
}
}
