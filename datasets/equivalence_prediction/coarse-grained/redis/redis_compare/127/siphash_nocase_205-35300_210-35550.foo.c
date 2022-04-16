#include "../../include/dycfoo.h"
#include "../../include/siphash.i.hd.c.h"
void __dyc_foo(void) 
{ uint64_t b ;
  int tmp___7 ;
  int tmp___8 ;
  int tmp___9 ;
  int tmp___10 ;
  int tmp___11 ;
  int tmp___12 ;
  int __dyc_funcallvar_10 ;
  int __dyc_funcallvar_11 ;
  int __dyc_funcallvar_12 ;
  int __dyc_funcallvar_13 ;
  int __dyc_funcallvar_14 ;

  {
  b = (uint64_t )__dyc_readpre_byte();
  tmp___7 = __dyc_readpre_byte();
  __dyc_funcallvar_10 = __dyc_readpre_byte();
  __dyc_funcallvar_11 = __dyc_readpre_byte();
  __dyc_funcallvar_12 = __dyc_readpre_byte();
  __dyc_funcallvar_13 = __dyc_readpre_byte();
  __dyc_funcallvar_14 = __dyc_readpre_byte();
  tmp___8 = 0;
  tmp___9 = 0;
  tmp___10 = 0;
  tmp___11 = 0;
  tmp___12 = 0;
  b |= (unsigned long )tmp___7 << 48;
  tmp___8 = __dyc_funcallvar_10;
  b |= (unsigned long )tmp___8 << 40;
  tmp___9 = __dyc_funcallvar_11;
  b |= (unsigned long )tmp___9 << 32;
  tmp___10 = __dyc_funcallvar_12;
  b |= (unsigned long )tmp___10 << 24;
  tmp___11 = __dyc_funcallvar_13;
  b |= (unsigned long )tmp___11 << 16;
  tmp___12 = __dyc_funcallvar_14;
  b |= (unsigned long )tmp___12 << 8;
  __dyc_dummy_label:  ;
  __dyc_printpre_byte(b);
}
}
