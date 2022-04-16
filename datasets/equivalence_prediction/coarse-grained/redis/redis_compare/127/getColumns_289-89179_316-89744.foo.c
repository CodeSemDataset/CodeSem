#include "../../include/dycfoo.h"
#include "../../include/linenoise.i.hd.c.h"
void __dyc_foo(void) 
{ struct winsize ws ;
  int start ;
  int cols ;
  ssize_t tmp ;
  size_t tmp___0 ;
  ssize_t tmp___1 ;
  int tmp___2 ;
  int __dyc_funcallvar_2 ;
  ssize_t __dyc_funcallvar_3 ;
  int __dyc_funcallvar_4 ;
  size_t __dyc_funcallvar_5 ;
  ssize_t __dyc_funcallvar_6 ;

  {
  ws = __dyc_read_comp_40winsize();
  tmp___2 = __dyc_readpre_byte();
  __dyc_funcallvar_2 = __dyc_readpre_byte();
  __dyc_funcallvar_3 = (ssize_t )__dyc_readpre_byte();
  __dyc_funcallvar_4 = __dyc_readpre_byte();
  __dyc_funcallvar_5 = (size_t )__dyc_readpre_byte();
  __dyc_funcallvar_6 = (ssize_t )__dyc_readpre_byte();
  start = 0;
  cols = 0;
  tmp = 0;
  tmp___0 = 0;
  tmp___1 = 0;
  if (tmp___2 == -1) {
    goto _L;
  } else {
    if ((int )ws.ws_col == 0) {
      _L:  
      {
      start = __dyc_funcallvar_2;
      }
      if (start == -1) {
        goto failed;
      }
      {
      tmp = __dyc_funcallvar_3;
      }
      if (tmp != 6L) {
        goto failed;
      }
      {
      cols = __dyc_funcallvar_4;
      }
      if (cols == -1) {
        goto failed;
      }
      if (cols > start) {
        {

        tmp___0 = __dyc_funcallvar_5;
        tmp___1 = __dyc_funcallvar_6;
        }
        if (tmp___1 == -1L) {

        }
      }
      goto __dyc_dummy_label;
    } else {
      goto __dyc_dummy_label;
    }
  }
  failed: 
  goto __dyc_dummy_label;
  __dyc_dummy_label:  ;
  __dyc_printpre_byte(tmp___0);
}
}
