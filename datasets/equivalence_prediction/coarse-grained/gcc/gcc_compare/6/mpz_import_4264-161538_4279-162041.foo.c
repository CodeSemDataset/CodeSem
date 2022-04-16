#include "../../include/dycfoo.h"
#include "../../include/gen-fac.i.hd.c.h"
void __dyc_foo(void) 
{ unsigned char const   *p ;
  ptrdiff_t word_step ;
  mp_ptr rp ;
  mp_size_t rn ;
  mp_limb_t limb ;
  size_t bytes ;
  mp_size_t i___0 ;
  size_t j ;
  size_t tmp___0 ;
  mp_size_t tmp___1 ;
  mp_size_t tmp___2 ;
  size_t count ;
  size_t size ;
  int endian ;
  mp_size_t __dyc_funcallvar_3 ;

  {
  p = (unsigned char const   *)__dyc_read_ptr__char();
  word_step = (ptrdiff_t )__dyc_readpre_byte();
  rp = __dyc_read_ptr__typdef_mp_limb_t();
  rn = (mp_size_t )__dyc_readpre_byte();
  limb = (mp_limb_t )__dyc_readpre_byte();
  bytes = (size_t )__dyc_readpre_byte();
  i___0 = (mp_size_t )__dyc_readpre_byte();
  count = (size_t )__dyc_readpre_byte();
  size = (size_t )__dyc_readpre_byte();
  endian = __dyc_readpre_byte();
  __dyc_funcallvar_3 = (mp_size_t )__dyc_readpre_byte();
  j = 0;
  tmp___0 = 0;
  tmp___1 = 0;
  tmp___2 = 0;
  while (1) {
    while_151_continue:  ;
    if (! (count > 0UL)) {
      goto while_151_break;
    }
    j = 0UL;
    {
    while (1) {
      while_152_continue:  ;
      if (! (j < size)) {
        goto while_152_break;
      }
      tmp___0 = bytes;
      bytes ++;
      limb |= (unsigned long )*p << tmp___0 * 8UL;
      if (bytes == sizeof(mp_limb_t )) {
        tmp___1 = i___0;
        i___0 ++;
        *(rp + tmp___1) = limb;
        bytes = 0UL;
        limb = 0UL;
      }
      j ++;
      p -= (long )endian;
    }
    while_152_break:  ;
    }
    count --;
    p += word_step;
  }
  while_151_break:  ;
  if (! (i___0 + (mp_size_t )(bytes > 0UL) == rn)) {
    {

    }
  }
  if (limb != 0UL) {
    tmp___2 = i___0;
    i___0 ++;
    *(rp + tmp___2) = limb;
  } else {
    {
    i___0 = __dyc_funcallvar_3;
    }
  }
  __dyc_dummy_label:  ;
  __dyc_print_ptr__char(p);
  __dyc_printpre_byte(i___0);
}
}
