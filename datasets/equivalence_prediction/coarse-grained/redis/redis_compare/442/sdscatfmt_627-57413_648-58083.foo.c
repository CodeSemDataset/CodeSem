#include "../../include/dycfoo.h"
#include "../../include/sds.i.hd.c.h"
void __dyc_foo(void) 
{ int i ;
  char next ;
  size_t l ;
  int tmp___6 ;
  size_t tmp___7 ;
  int tmp___8 ;
  sds s ;
  int __dyc_funcallvar_11 ;
  size_t __dyc_funcallvar_12 ;
  sds __dyc_funcallvar_13 ;

  {
  i = __dyc_readpre_byte();
  next = (char )__dyc_readpre_byte();
  l = (size_t )__dyc_readpre_byte();
  s = __dyc_read_ptr__char();
  __dyc_funcallvar_11 = __dyc_readpre_byte();
  __dyc_funcallvar_12 = (size_t )__dyc_readpre_byte();
  __dyc_funcallvar_13 = __dyc_read_ptr__char();
  tmp___6 = 0;
  tmp___7 = 0;
  tmp___8 = 0;
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
  tmp___6 = __dyc_funcallvar_11;
  l = (unsigned long )tmp___6;
  tmp___7 = __dyc_funcallvar_12;
  if (tmp___7 < l) {
    {
    s = __dyc_funcallvar_13;
    }
  }


  i = (int )((size_t )i + l);
  goto __dyc_dummy_label;
  tmp___8 = i;
  i ++;
  *(s + tmp___8) = next;
  __dyc_dummy_label:  ;
  __dyc_printpre_byte(i);
  __dyc_print_ptr__char(s);
}
}
