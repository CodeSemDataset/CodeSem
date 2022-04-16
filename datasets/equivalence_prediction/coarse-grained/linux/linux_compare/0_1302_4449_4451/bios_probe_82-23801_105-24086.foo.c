#include "../../include/dycfoo.h"
#include "../../include/video-bios.i.hd.c.h"
void __dyc_foo(void) 
{ struct mode_info *mi ;
  bool tmp___0 ;
  int tmp___1 ;
  int tmp___2 ;
  u8 tmp___3 ;
  u8 tmp___4 ;
  u8 tmp___5 ;
  char *tmp___6 ;
  int __dyc_funcallvar_4 ;
  int __dyc_funcallvar_5 ;
  u8 __dyc_funcallvar_6 ;
  u8 __dyc_funcallvar_7 ;
  u8 __dyc_funcallvar_8 ;
  char *__dyc_funcallvar_9 ;

  {
  tmp___0 = (bool )__dyc_readpre_byte();
  __dyc_funcallvar_4 = __dyc_readpre_byte();
  __dyc_funcallvar_5 = __dyc_readpre_byte();
  __dyc_funcallvar_6 = (u8 )__dyc_readpre_byte();
  __dyc_funcallvar_7 = (u8 )__dyc_readpre_byte();
  __dyc_funcallvar_8 = (u8 )__dyc_readpre_byte();
  __dyc_funcallvar_9 = __dyc_read_ptr__char();
  mi = 0;
  tmp___1 = 0;
  tmp___2 = 0;
  tmp___3 = 0;
  tmp___4 = 0;
  tmp___5 = 0;
  tmp___6 = 0;
  if (! tmp___0) {
    goto __dyc_dummy_label;
  }
  tmp___1 = __dyc_funcallvar_4;
  if (tmp___1) {
    goto __dyc_dummy_label;
  }
  tmp___2 = __dyc_funcallvar_5;
  if (tmp___2) {
    goto __dyc_dummy_label;
  }
  tmp___3 = __dyc_funcallvar_6;
  if ((int )tmp___3 & 1) {
    goto __dyc_dummy_label;
  }
  tmp___4 = __dyc_funcallvar_7;
  if ((int )tmp___4 & 1) {
    goto __dyc_dummy_label;
  }
  tmp___5 = __dyc_funcallvar_8;
  if (tmp___5) {
    goto __dyc_dummy_label;
  }
  tmp___6 = __dyc_funcallvar_9;
  mi = (struct mode_info *)tmp___6;
  __dyc_dummy_label:  ;
  __dyc_print_ptr__comp_36mode_info(mi);
}
}
