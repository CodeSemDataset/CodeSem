#include "../../include/dycfoo.h"
#include "../../include/net.i.hd.c.h"
void __dyc_foo(void) 
{ int blocking ;
  int reuseaddr ;
  int reuses ;
  char *tmp___27 ;
  int tmp___28 ;
  int *tmp___29 ;
  int *tmp___30 ;
  char *__dyc_funcallvar_15 ;
  int *__dyc_funcallvar_18 ;
  int *__dyc_funcallvar_19 ;
  int __dyc_funcallvar_20 ;

  {
  blocking = __dyc_readpre_byte();
  reuseaddr = __dyc_readpre_byte();
  reuses = __dyc_readpre_byte();
  __dyc_funcallvar_15 = __dyc_read_ptr__char();
  __dyc_funcallvar_18 = __dyc_read_ptr__int();
  __dyc_funcallvar_19 = __dyc_read_ptr__int();
  __dyc_funcallvar_20 = __dyc_readpre_byte();
  tmp___27 = 0;
  tmp___28 = 0;
  tmp___29 = 0;
  tmp___30 = 0;
  tmp___27 = __dyc_funcallvar_15;


  goto __dyc_dummy_label;

  goto __dyc_dummy_label;
  tmp___30 = __dyc_funcallvar_18;
  if (*tmp___30 == 115) {
    if (! (! blocking)) {
      goto _L___0;
    }
  } else {
    _L___0:  
    {
    tmp___29 = __dyc_funcallvar_19;
    }
    if (*tmp___29 == 99) {
      if (reuseaddr) {
        reuses ++;
        if (reuses >= 10) {
          goto __dyc_dummy_label;
        } else {
          {

          }
          goto __dyc_dummy_label;
        }
      } else {
        goto _L;
      }
    } else {
      _L:  
      {
      tmp___28 = __dyc_funcallvar_20;
      }
      if (tmp___28 != 0) {
        goto __dyc_dummy_label;
      }
    }
  }
  __dyc_dummy_label:  ;
  __dyc_print_ptr__char(tmp___27);
}
}
