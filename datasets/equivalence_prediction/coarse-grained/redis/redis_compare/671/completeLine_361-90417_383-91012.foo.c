#include "../../include/dycfoo.h"
#include "../../include/linenoise.i.hd.c.h"
void __dyc_foo(void) 
{ linenoiseCompletions lc ;
  int nread ;
  int nwritten ;
  char c ;
  size_t stop ;
  size_t i ;
  struct linenoiseState saved ;
  ssize_t tmp ;
  struct linenoiseState *ls ;
  size_t __dyc_funcallvar_1 ;
  ssize_t __dyc_funcallvar_2 ;
  int __dyc_funcallvar_3 ;

  {
  lc = __dyc_read_comp_42linenoiseCompletions();
  c = (char )__dyc_readpre_byte();
  stop = (size_t )__dyc_readpre_byte();
  i = (size_t )__dyc_readpre_byte();
  ls = __dyc_read_ptr__comp_43linenoiseState();
  __dyc_funcallvar_1 = (size_t )__dyc_readpre_byte();
  __dyc_funcallvar_2 = (ssize_t )__dyc_readpre_byte();
  __dyc_funcallvar_3 = __dyc_readpre_byte();
  nread = 0;
  nwritten = 0;
  memset(& saved, 0, sizeof(struct linenoiseState ));
  tmp = 0;
  if (! (! stop)) {
    goto __dyc_dummy_label;
  }
  if (i < lc.len) {
    {
    saved = *ls;
    ls->pos = __dyc_funcallvar_1;
    ls->len = ls->pos;
    ls->buf = *(lc.cvec + i);

    ls->len = saved.len;
    ls->pos = saved.pos;
    ls->buf = saved.buf;
    }
  } else {
    {

    }
  }
  tmp = __dyc_funcallvar_2;
  nread = (int )tmp;
  if (nread <= 0) {
    {

    }
    goto __dyc_dummy_label;
  }
  if ((int )c == 9) {
    goto switch_4_9;
  } else {
    if ((int )c == 27) {
      goto switch_4_27;
    } else {
      {
      goto switch_4_default;
      if (0) {
        switch_4_9:  
        i = (i + 1UL) % (lc.len + 1UL);
        if (i == lc.len) {
          {

          }
        }
        goto switch_4_break;
        switch_4_27:  
        if (i < lc.len) {
          {

          }
        }
        stop = 1UL;
        goto switch_4_break;
        switch_4_default:  ;
        if (i < lc.len) {
          {
          nwritten = __dyc_funcallvar_3;
          ls->pos = (unsigned long )nwritten;
          ls->len = ls->pos;
          }
        }
        stop = 1UL;
        goto switch_4_break;
      } else {
        switch_4_break:  ;
      }
      }
    }
  }
  __dyc_dummy_label:  ;
  __dyc_printpre_byte(stop);
}
}
