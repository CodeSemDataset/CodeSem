#include "../../include/dycfoo.h"
#include "../../include/gen-fac.i.hd.c.h"
void __dyc_foo(void) 
{ mpz_t tr ;
  mpz_t base ;
  mp_size_t en ;
  mp_size_t mn ;
  int tmp___0 ;
  mp_size_t bn ;
  mp_ptr bp ;
  mp_ptr tmp___2 ;
  mp_limb_t __cy___0 ;
  mp_limb_t tmp___3 ;
  mp_size_t tmp___4 ;
  mp_limb_t w ;
  mp_limb_t bit ;
  mp_size_t tmp___5 ;
  __mpz_struct *b ;
  __mpz_struct *e ;
  int __dyc_funcallvar_3 ;
  mp_ptr __dyc_funcallvar_4 ;
  mp_limb_t __dyc_funcallvar_5 ;
  mp_size_t __dyc_funcallvar_6 ;
  mp_size_t __dyc_funcallvar_7 ;

  {
  en = (mp_size_t )__dyc_readpre_byte();
  mn = (mp_size_t )__dyc_readpre_byte();
  b = (__mpz_struct *)__dyc_read_ptr__typdef___mpz_struct();
  e = (__mpz_struct *)__dyc_read_ptr__typdef___mpz_struct();
  __dyc_funcallvar_3 = __dyc_readpre_byte();
  __dyc_funcallvar_4 = __dyc_read_ptr__typdef_mp_limb_t();
  __dyc_funcallvar_5 = (mp_limb_t )__dyc_readpre_byte();
  __dyc_funcallvar_6 = (mp_size_t )__dyc_readpre_byte();
  __dyc_funcallvar_7 = (mp_size_t )__dyc_readpre_byte();
  tmp___0 = 0;
  bn = 0;
  bp = 0;
  tmp___2 = 0;
  __cy___0 = 0;
  tmp___3 = 0;
  tmp___4 = 0;
  w = 0;
  bit = 0;
  tmp___5 = 0;
  if (e->_mp_size < 0) {
    {
    tmp___0 = __dyc_funcallvar_3;
    }
    if (! tmp___0) {
      {

      }
    }
  } else {
    {

    bn = (long )base[0]._mp_size;
    }
    if (bn >= mn) {
      {

      bn = mn;
      }
    }
    if (b->_mp_size < 0) {
      if (mn > (mp_size_t )base[0]._mp_alloc) {
        {
        tmp___2 = __dyc_funcallvar_4;
        }
      } else {
        tmp___2 = base[0]._mp_d;
      }
      bp = tmp___2;
      {
      while (1) {
        while_115_continue:  ;
        {
        tmp___3 = __dyc_funcallvar_5;
        __cy___0 = tmp___3;
        }
        if (! (__cy___0 == 0UL)) {
          {

          }
        }
        goto while_115_break;
      }
      while_115_break:  ;
      }
      bn = mn;
    }
    {
    tmp___4 = __dyc_funcallvar_6;
    base[0]._mp_size = (int )tmp___4;
    }
  }

  while (1) {
    while_116_continue:  ;
    en --;
    if (! (en >= 0L)) {
      goto __dyc_dummy_label;
    }
    w = *(e->_mp_d + en);
    bit = 1UL << (sizeof(mp_limb_t ) * 8UL - 1UL);
    {
    while (1) {
      while_117_continue:  ;
      {

      }
      if (w & bit) {
        {

        }
      }
      if ((mp_size_t )tr[0]._mp_size > mn) {
        {

        tmp___5 = __dyc_funcallvar_7;
        tr[0]._mp_size = (int )tmp___5;
        }
      }
      bit >>= 1;
      if (! (bit > 0UL)) {
        goto while_117_break;
      }
    }
    while_117_break:  ;
    }
  }
  __dyc_dummy_label:  ;
  __dyc_printpre_byte(bn);
  __dyc_print_ptr__typdef_mp_limb_t(bp);
}
}
