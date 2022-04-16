#include "../../include/dycfoo.h"
#include "../../include/linenoise.i.hd.c.h"
void __dyc_foo(void) 
{ linenoiseFreeHintsCallback *freeHintsCallback ;
  int color ;
  int bold ;
  char *hint ;
  char *tmp ;
  int hintlen ;
  size_t tmp___0 ;
  int hintmaxlen ;
  size_t tmp___1 ;
  struct linenoiseState *l ;
  int plen ;
  size_t __dyc_funcallvar_2 ;
  size_t __dyc_funcallvar_3 ;

  {
  freeHintsCallback = (linenoiseFreeHintsCallback *)__dyc_read_ptr__typdef_linenoiseFreeHintsCallback();
  color = __dyc_readpre_byte();
  bold = __dyc_readpre_byte();
  tmp = __dyc_read_ptr__char();
  l = __dyc_read_ptr__comp_43linenoiseState();
  plen = __dyc_readpre_byte();
  __dyc_funcallvar_2 = (size_t )__dyc_readpre_byte();
  __dyc_funcallvar_3 = (size_t )__dyc_readpre_byte();
  hint = 0;
  hintlen = 0;
  tmp___0 = 0;
  hintmaxlen = 0;
  tmp___1 = 0;
  hint = tmp;
  if (hint) {
    {
    tmp___0 = __dyc_funcallvar_2;
    hintlen = (int )tmp___0;
    hintmaxlen = (int )(l->cols - ((size_t )plen + l->len));
    }
    if (hintlen > hintmaxlen) {
      hintlen = hintmaxlen;
    }
    if (bold == 1) {
      if (color == -1) {
        color = 37;
      }
    }
    if (color != -1) {
      {

      }
    } else {
      if (bold != 0) {
        {

        }
      }
    }
    {
    tmp___1 = __dyc_funcallvar_3;


    }
    if (color != -1) {
      {

      }
    } else {
      if (bold != 0) {
        {

        }
      }
    }
    if (freeHintsCallback) {
      {

      }
    }
  }
  __dyc_dummy_label:  ;
  __dyc_printpre_byte(hintlen);
  __dyc_printpre_byte(tmp___1);
}
}
