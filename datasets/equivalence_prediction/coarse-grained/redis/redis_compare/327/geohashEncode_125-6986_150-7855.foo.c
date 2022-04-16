#include "../../include/dycfoo.h"
#include "../../include/geohash.i.hd.c.h"
void __dyc_foo(void) 
{ double lat_offset ;
  double long_offset ;
  GeoHashRange const   *long_range ;
  GeoHashRange const   *lat_range ;
  double longitude ;
  double latitude ;
  uint8_t step ;
  GeoHashBits *hash ;
  uint64_t __dyc_funcallvar_1 ;

  {
  long_range = (GeoHashRange const   *)__dyc_read_ptr__typdef_GeoHashRange();
  lat_range = (GeoHashRange const   *)__dyc_read_ptr__typdef_GeoHashRange();
  longitude = (double )__dyc_readpre_byte();
  latitude = (double )__dyc_readpre_byte();
  step = (uint8_t )__dyc_readpre_byte();
  hash = __dyc_read_ptr__typdef_GeoHashBits();
  __dyc_funcallvar_1 = (uint64_t )__dyc_readpre_byte();
  lat_offset = 0;
  long_offset = 0;
  if ((unsigned long )hash == (unsigned long )((void *)0)) {
    goto __dyc_dummy_label;
  } else {
    if ((int )step > 32) {
      goto __dyc_dummy_label;
    } else {
      if ((int )step == 0) {
        goto __dyc_dummy_label;
      } else {
        if ((unsigned long )lat_range == (unsigned long )((void *)0)) {
          goto __dyc_dummy_label;
        } else {
          if (! lat_range->max) {
            if (! lat_range->min) {
              goto __dyc_dummy_label;
            } else {
              goto _L;
            }
          } else {
            _L:  
            if ((unsigned long )long_range == (unsigned long )((void *)0)) {
              goto __dyc_dummy_label;
            } else {
              if (! long_range->max) {
                if (! long_range->min) {
                  goto __dyc_dummy_label;
                }
              }
            }
          }
        }
      }
    }
  }
  if (longitude > (double )180) {
    goto __dyc_dummy_label;
  } else {
    if (longitude < (double )-180) {
      goto __dyc_dummy_label;
    } else {
      if (latitude > 85.05112878) {
        goto __dyc_dummy_label;
      } else {
        if (latitude < - 85.05112878) {
          goto __dyc_dummy_label;
        }
      }
    }
  }
  hash->bits = 0UL;
  hash->step = step;
  if (latitude < (double )lat_range->min) {
    goto __dyc_dummy_label;
  } else {
    if (latitude > (double )lat_range->max) {
      goto __dyc_dummy_label;
    } else {
      if (longitude < (double )long_range->min) {
        goto __dyc_dummy_label;
      } else {
        if (longitude > (double )long_range->max) {
          goto __dyc_dummy_label;
        }
      }
    }
  }
  lat_offset = (latitude - (double )lat_range->min) / (double )(lat_range->max - lat_range->min);
  long_offset = (longitude - (double )long_range->min) / (double )(long_range->max - long_range->min);
  lat_offset *= (double )(1 << (int )step);
  long_offset *= (double )(1 << (int )step);
  hash->bits = __dyc_funcallvar_1;
  goto __dyc_dummy_label;
  __dyc_dummy_label:  ;
  __dyc_printpre_byte(lat_offset);
  __dyc_printpre_byte(long_offset);
}
}
