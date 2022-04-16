#include "../../include/dycfoo.h"
#include "../../include/geohash_helper.i.hd.c.h"
void __dyc_foo(void) 
{ double tmp ;
  double tmp___0 ;
  double tmp___1 ;
  double tmp___2 ;
  double tmp___3 ;
  double tmp___4 ;
  double tmp___5 ;
  double tmp___6 ;
  double longitude ;
  double latitude ;
  double *bounds ;
  double __dyc_funcallvar_1 ;
  double __dyc_funcallvar_2 ;
  double __dyc_funcallvar_3 ;
  double __dyc_funcallvar_4 ;
  double __dyc_funcallvar_5 ;
  double __dyc_funcallvar_6 ;
  double __dyc_funcallvar_7 ;
  double __dyc_funcallvar_8 ;

  {
  longitude = (double )__dyc_readpre_byte();
  latitude = (double )__dyc_readpre_byte();
  bounds = __dyc_read_ptr__double();
  __dyc_funcallvar_1 = (double )__dyc_readpre_byte();
  __dyc_funcallvar_2 = (double )__dyc_readpre_byte();
  __dyc_funcallvar_3 = (double )__dyc_readpre_byte();
  __dyc_funcallvar_4 = (double )__dyc_readpre_byte();
  __dyc_funcallvar_5 = (double )__dyc_readpre_byte();
  __dyc_funcallvar_6 = (double )__dyc_readpre_byte();
  __dyc_funcallvar_7 = (double )__dyc_readpre_byte();
  __dyc_funcallvar_8 = (double )__dyc_readpre_byte();
  tmp = 0;
  tmp___0 = 0;
  tmp___1 = 0;
  tmp___2 = 0;
  tmp___3 = 0;
  tmp___4 = 0;
  tmp___5 = 0;
  tmp___6 = 0;
  if (! bounds) {
    goto __dyc_dummy_label;
  }
  tmp = __dyc_funcallvar_1;
  tmp___0 = __dyc_funcallvar_2;
  tmp___1 = __dyc_funcallvar_3;
  *(bounds + 0) = longitude - tmp___1;
  tmp___2 = __dyc_funcallvar_4;
  tmp___3 = __dyc_funcallvar_5;
  tmp___4 = __dyc_funcallvar_6;
  *(bounds + 2) = longitude + tmp___4;
  tmp___5 = __dyc_funcallvar_7;
  *(bounds + 1) = latitude - tmp___5;
  tmp___6 = __dyc_funcallvar_8;
  *(bounds + 3) = latitude + tmp___6;
  __dyc_dummy_label:  ;
  __dyc_printpre_byte(tmp);
  __dyc_printpre_byte(tmp___0);
  __dyc_printpre_byte(tmp___2);
  __dyc_printpre_byte(tmp___3);
}
}
