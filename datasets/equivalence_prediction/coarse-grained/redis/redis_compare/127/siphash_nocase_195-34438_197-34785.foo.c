#include "../../include/dycfoo.h"
#include "../../include/siphash.i.hd.c.h"
void __dyc_foo(void) 
{ uint64_t v3 ;
  uint64_t m ;
  uint8_t const   *end ;
  int tmp ;
  int tmp___0 ;
  int tmp___1 ;
  int tmp___2 ;
  int tmp___3 ;
  int tmp___4 ;
  int tmp___5 ;
  int tmp___6 ;
  uint8_t const   *in ;
  int __dyc_funcallvar_1 ;
  int __dyc_funcallvar_2 ;
  int __dyc_funcallvar_3 ;
  int __dyc_funcallvar_4 ;
  int __dyc_funcallvar_5 ;
  int __dyc_funcallvar_6 ;
  int __dyc_funcallvar_7 ;
  int __dyc_funcallvar_8 ;

  {
  v3 = (uint64_t )__dyc_readpre_byte();
  end = (uint8_t const   *)__dyc_read_ptr__typdef_uint8_t();
  in = (uint8_t const   *)__dyc_read_ptr__typdef_uint8_t();
  __dyc_funcallvar_1 = __dyc_readpre_byte();
  __dyc_funcallvar_2 = __dyc_readpre_byte();
  __dyc_funcallvar_3 = __dyc_readpre_byte();
  __dyc_funcallvar_4 = __dyc_readpre_byte();
  __dyc_funcallvar_5 = __dyc_readpre_byte();
  __dyc_funcallvar_6 = __dyc_readpre_byte();
  __dyc_funcallvar_7 = __dyc_readpre_byte();
  __dyc_funcallvar_8 = __dyc_readpre_byte();
  m = 0;
  tmp = 0;
  tmp___0 = 0;
  tmp___1 = 0;
  tmp___2 = 0;
  tmp___3 = 0;
  tmp___4 = 0;
  tmp___5 = 0;
  tmp___6 = 0;
  if (! ((unsigned long )in != (unsigned long )end)) {
    goto __dyc_dummy_label;
  }
  tmp = __dyc_funcallvar_1;
  tmp___0 = __dyc_funcallvar_2;
  tmp___1 = __dyc_funcallvar_3;
  tmp___2 = __dyc_funcallvar_4;
  tmp___3 = __dyc_funcallvar_5;
  tmp___4 = __dyc_funcallvar_6;
  tmp___5 = __dyc_funcallvar_7;
  tmp___6 = __dyc_funcallvar_8;
  m = (((((((unsigned long )tmp | ((unsigned long )tmp___0 << 8)) | ((unsigned long )tmp___1 << 16)) | ((unsigned long )tmp___2 << 24)) | ((unsigned long )tmp___3 << 32)) | ((unsigned long )tmp___4 << 40)) | ((unsigned long )tmp___5 << 48)) | ((unsigned long )tmp___6 << 56);
  v3 ^= m;
  __dyc_dummy_label:  ;
  __dyc_printpre_byte(v3);
}
}
