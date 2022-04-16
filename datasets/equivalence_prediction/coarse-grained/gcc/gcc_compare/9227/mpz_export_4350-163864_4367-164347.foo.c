#include "../../include/dycfoo.h"
#include "../../include/gen-fac.i.hd.c.h"
void __dyc_foo(void) 
{ size_t count ;
  mp_size_t un ;
  size_t k ;
  unsigned char *p ;
  ptrdiff_t word_step ;
  mp_limb_t limb ;
  size_t bytes ;
  mp_size_t i___0 ;
  size_t j ;
  mp_size_t tmp ;
  size_t size ;
  int endian ;
  __mpz_struct *u ;

  {
  count = (size_t )__dyc_readpre_byte();
  un = (mp_size_t )__dyc_readpre_byte();
  k = (size_t )__dyc_readpre_byte();
  p = (unsigned char *)__dyc_read_ptr__char();
  word_step = (ptrdiff_t )__dyc_readpre_byte();
  limb = (mp_limb_t )__dyc_readpre_byte();
  bytes = (size_t )__dyc_readpre_byte();
  i___0 = (mp_size_t )__dyc_readpre_byte();
  size = (size_t )__dyc_readpre_byte();
  endian = __dyc_readpre_byte();
  u = (__mpz_struct *)__dyc_read_ptr__typdef___mpz_struct();
  j = 0;
  tmp = 0;
  while (1) {
    while_154_continue:  ;
    if (! (k < count)) {
      goto while_154_break;
    }
    j = 0UL;
    {
    while (1) {
      while_155_continue:  ;
      if (! (j < size)) {
        goto while_155_break;
      }
      if (bytes == 0UL) {
        if (i___0 < un) {
          tmp = i___0;
          i___0 ++;
          limb = *(u->_mp_d + tmp);
        }
        bytes = sizeof(mp_limb_t );
      }
      *p = (unsigned char )limb;
      limb >>= 8;
      bytes --;
      j ++;
      p -= (long )endian;
    }
    while_155_break:  ;
    }
    k ++;
    p += word_step;
  }
  while_154_break:  ;
  if (! (i___0 == un)) {
    {

    }
  }
  if (! (k == count)) {
    {

    }
  }
  __dyc_dummy_label:  ;
  __dyc_print_ptr__char(p);
  __dyc_printpre_byte(limb);
  __dyc_printpre_byte(bytes);
}
}
