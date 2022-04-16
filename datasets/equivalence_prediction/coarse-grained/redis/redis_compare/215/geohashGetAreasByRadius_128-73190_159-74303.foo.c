#include "../../include/dycfoo.h"
#include "../../include/geohash_helper.i.hd.c.h"
void __dyc_foo(void) 
{ double max_lon ;
  double min_lat ;
  double max_lat ;
  double bounds[4] ;
  int steps ;
  uint8_t tmp ;
  int decrease_step ;
  double tmp___0 ;
  double tmp___1 ;
  double tmp___2 ;
  double tmp___3 ;
  double radius_meters ;
  uint8_t __dyc_funcallvar_1 ;
  double __dyc_funcallvar_2 ;
  double __dyc_funcallvar_3 ;
  double __dyc_funcallvar_4 ;
  double __dyc_funcallvar_5 ;

  {
  radius_meters = (double )__dyc_readpre_byte();
  __dyc_funcallvar_1 = (uint8_t )__dyc_readpre_byte();
  __dyc_funcallvar_2 = (double )__dyc_readpre_byte();
  __dyc_funcallvar_3 = (double )__dyc_readpre_byte();
  __dyc_funcallvar_4 = (double )__dyc_readpre_byte();
  __dyc_funcallvar_5 = (double )__dyc_readpre_byte();
  max_lon = 0;
  min_lat = 0;
  max_lat = 0;
  steps = 0;
  tmp = 0;
  decrease_step = 0;
  tmp___0 = 0;
  tmp___1 = 0;
  tmp___2 = 0;
  tmp___3 = 0;
  min_lat = bounds[1];
  max_lon = bounds[2];
  max_lat = bounds[3];
  tmp = __dyc_funcallvar_1;
  steps = (int )tmp;




  decrease_step = 0;




  tmp___0 = __dyc_funcallvar_2;
  if (tmp___0 < radius_meters) {
    decrease_step = 1;
  }
  tmp___1 = __dyc_funcallvar_3;
  if (tmp___1 < radius_meters) {
    decrease_step = 1;
  }
  tmp___2 = __dyc_funcallvar_4;
  if (tmp___2 < radius_meters) {
    decrease_step = 1;
  }
  tmp___3 = __dyc_funcallvar_5;
  if (tmp___3 < radius_meters) {
    decrease_step = 1;
  }
  __dyc_dummy_label:  ;
  __dyc_printpre_byte(max_lon);
  __dyc_printpre_byte(min_lat);
  __dyc_printpre_byte(max_lat);
  __dyc_printpre_byte(steps);
  __dyc_printpre_byte(decrease_step);
}
}
