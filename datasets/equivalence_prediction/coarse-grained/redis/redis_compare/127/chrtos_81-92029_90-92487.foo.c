#include "../../include/dycfoo.h"
#include "../../include/read.i.hd.c.h"
void __dyc_foo(void) 
{ size_t len ;
  int tmp___1 ;
  int tmp___2 ;
  int tmp___3 ;
  int tmp___4 ;
  int tmp___5 ;
  int tmp___6 ;
  unsigned short const   **tmp___7 ;
  char byte ;
  int __dyc_funcallvar_4 ;
  int __dyc_funcallvar_5 ;
  int __dyc_funcallvar_6 ;
  unsigned short const   **__dyc_funcallvar_7 ;
  int __dyc_funcallvar_8 ;
  int __dyc_funcallvar_9 ;

  {
  tmp___1 = __dyc_readpre_byte();
  byte = (char )__dyc_readpre_byte();
  __dyc_funcallvar_4 = __dyc_readpre_byte();
  __dyc_funcallvar_5 = __dyc_readpre_byte();
  __dyc_funcallvar_6 = __dyc_readpre_byte();
  __dyc_funcallvar_7 = (unsigned short const   **)__dyc_read_ptr__ptr__short();
  __dyc_funcallvar_8 = __dyc_readpre_byte();
  __dyc_funcallvar_9 = __dyc_readpre_byte();
  len = 0;
  tmp___2 = 0;
  tmp___3 = 0;
  tmp___4 = 0;
  tmp___5 = 0;
  tmp___6 = 0;
  tmp___7 = 0;
  len = (unsigned long )tmp___1;
  goto __dyc_dummy_label;
  tmp___2 = __dyc_funcallvar_4;
  len = (unsigned long )tmp___2;
  goto __dyc_dummy_label;
  tmp___3 = __dyc_funcallvar_5;
  len = (unsigned long )tmp___3;
  goto __dyc_dummy_label;
  tmp___4 = __dyc_funcallvar_6;
  len = (unsigned long )tmp___4;
  goto __dyc_dummy_label;
  tmp___7 = __dyc_funcallvar_7;
  if ((int const   )*(*tmp___7 + (int )byte) & 16384) {
    {
    tmp___5 = __dyc_funcallvar_8;
    len = (unsigned long )tmp___5;
    }
  } else {
    {
    tmp___6 = __dyc_funcallvar_9;
    len = (unsigned long )tmp___6;
    }
  }
  goto __dyc_dummy_label;
  __dyc_dummy_label:  ;
  __dyc_printpre_byte(len);
}
}
