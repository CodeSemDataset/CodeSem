#include "../../include/dycfoo.h"
#include "../../include/geohash_helper.i.hd.c.h"
void __dyc_foo(void) 
{ int steps ;
  int decrease_step ;
  double tmp___0 ;
  double tmp___1 ;
  double tmp___2 ;
  double tmp___3 ;
  double radius_meters ;
  double __dyc_funcallvar_3 ;
  double __dyc_funcallvar_4 ;
  double __dyc_funcallvar_5 ;

  {
  steps = __dyc_readpre_byte();
  decrease_step = __dyc_readpre_byte();
  tmp___0 = (double )__dyc_readpre_byte();
  radius_meters = (double )__dyc_readpre_byte();
  __dyc_funcallvar_3 = (double )__dyc_readpre_byte();
  __dyc_funcallvar_4 = (double )__dyc_readpre_byte();
  __dyc_funcallvar_5 = (double )__dyc_readpre_byte();
  tmp___1 = 0;
  tmp___2 = 0;
  tmp___3 = 0;
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
  if (steps > 1) {
    if (decrease_step) {
      {
      steps --;



      }
    }
  }
  __dyc_dummy_label:  ;
  __dyc_printpre_byte(steps);
}
}
