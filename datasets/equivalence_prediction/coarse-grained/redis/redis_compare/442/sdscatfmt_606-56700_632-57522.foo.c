#include "../../include/dycfoo.h"
#include "../../include/sds.i.hd.c.h"
void __dyc_foo(void) 
{ int i ;
  char next ;
  size_t l ;
  size_t tmp___3 ;
  int tmp___4 ;
  size_t tmp___5 ;
  sds s ;
  sds __dyc_funcallvar_7 ;
  int __dyc_funcallvar_8 ;
  size_t __dyc_funcallvar_9 ;
  sds __dyc_funcallvar_10 ;

  {
  i = __dyc_readpre_byte();
  next = (char )__dyc_readpre_byte();
  l = (size_t )__dyc_readpre_byte();
  tmp___3 = (size_t )__dyc_readpre_byte();
  __dyc_funcallvar_7 = __dyc_read_ptr__char();
  __dyc_funcallvar_8 = __dyc_readpre_byte();
  __dyc_funcallvar_9 = (size_t )__dyc_readpre_byte();
  __dyc_funcallvar_10 = __dyc_read_ptr__char();
  tmp___4 = 0;
  tmp___5 = 0;
  s = 0;
  if (tmp___3 < l) {
    {
    s = __dyc_funcallvar_7;
    }
  }


  i = (int )((size_t )i + l);
  goto __dyc_dummy_label;
  switch_16_105:  
  switch_16_73:  
  if ((int )next == 105) {
    {

    }
  } else {
    {

    }
  }
  tmp___4 = __dyc_funcallvar_8;
  l = (unsigned long )tmp___4;
  tmp___5 = __dyc_funcallvar_9;
  if (tmp___5 < l) {
    {
    s = __dyc_funcallvar_10;
    }
  }


  i = (int )((size_t )i + l);
  goto __dyc_dummy_label;
  switch_16_117:  
  switch_16_85:  
  if ((int )next == 117) {
    {

    }
  } else {
    {

    }
  }
  __dyc_dummy_label:  ;
  __dyc_printpre_byte(i);
  __dyc_print_ptr__char(s);
}
}
