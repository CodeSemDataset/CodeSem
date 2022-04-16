#include "../../include/dycfoo.h"
#include "../../include/geohash_helper.i.hd.c.h"
void __dyc_foo(void) 
{ GeoHashNeighbors neighbors ;
  GeoHashArea area ;
  double min_lon ;
  double max_lon ;
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
  area = __dyc_read_comp_3__anonstruct_GeoHashArea_4();
  min_lon = (double )__dyc_readpre_byte();
  radius_meters = (double )__dyc_readpre_byte();
  __dyc_funcallvar_1 = (uint8_t )__dyc_readpre_byte();
  __dyc_funcallvar_2 = (double )__dyc_readpre_byte();
  __dyc_funcallvar_3 = (double )__dyc_readpre_byte();
  __dyc_funcallvar_4 = (double )__dyc_readpre_byte();
  __dyc_funcallvar_5 = (double )__dyc_readpre_byte();
  memset(& neighbors, 0, sizeof(GeoHashNeighbors ));
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
  if (steps > 1) {
    if (decrease_step) {
      {
      steps --;



      }
    }
  }
  if (steps >= 2) {
    if (area.latitude.min < min_lat) {
      neighbors.south.step = (unsigned char)0;
      neighbors.south.bits = (unsigned long )neighbors.south.step;
      neighbors.south_west.step = (unsigned char)0;
      neighbors.south_west.bits = (unsigned long )neighbors.south_west.step;
      neighbors.south_east.step = (unsigned char)0;
      neighbors.south_east.bits = (unsigned long )neighbors.south_east.step;
    }
    if (area.latitude.max > max_lat) {
      neighbors.north.step = (unsigned char)0;
      neighbors.north.bits = (unsigned long )neighbors.north.step;
      neighbors.north_east.step = (unsigned char)0;
      neighbors.north_east.bits = (unsigned long )neighbors.north_east.step;
      neighbors.north_west.step = (unsigned char)0;
      neighbors.north_west.bits = (unsigned long )neighbors.north_west.step;
    }
    if (area.longitude.min < min_lon) {
      neighbors.west.step = (unsigned char)0;
      neighbors.west.bits = (unsigned long )neighbors.west.step;
      neighbors.south_west.step = (unsigned char)0;
      neighbors.south_west.bits = (unsigned long )neighbors.south_west.step;
      neighbors.north_west.step = (unsigned char)0;
      neighbors.north_west.bits = (unsigned long )neighbors.north_west.step;
    }
    if (area.longitude.max > max_lon) {
      neighbors.east.step = (unsigned char)0;
      neighbors.east.bits = (unsigned long )neighbors.east.step;
      neighbors.south_east.step = (unsigned char)0;
      neighbors.south_east.bits = (unsigned long )neighbors.south_east.step;
      neighbors.north_east.step = (unsigned char)0;
      neighbors.north_east.bits = (unsigned long )neighbors.north_east.step;
    }
  }
  __dyc_dummy_label:  ;
  __dyc_print_comp_4__anonstruct_GeoHashNeighbors_5(neighbors);
  __dyc_printpre_byte(decrease_step);
}
}
