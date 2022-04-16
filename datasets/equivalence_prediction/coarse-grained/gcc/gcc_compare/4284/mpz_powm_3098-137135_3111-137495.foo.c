#include "../../include/dycfoo.h"
#include "../../include/gen-fac.i.hd.c.h"
void __dyc_foo(void) 
{ mpz_t base ;
  mp_size_t mn ;
  mp_srcptr mp ;
  struct gmp_div_inverse minv ;
  unsigned int shift ;
  mp_ptr tp ;
  mp_limb_t __cy ;
  mp_limb_t tmp ;
  int tmp___0 ;
  mp_size_t bn ;
  mp_ptr bp ;
  mp_ptr tmp___2 ;
  mp_limb_t __cy___0 ;
  mp_limb_t tmp___3 ;
  mp_size_t tmp___4 ;
  __mpz_struct *b ;
  __mpz_struct *e ;
  mp_ptr __dyc_funcallvar_1 ;
  mp_limb_t __dyc_funcallvar_2 ;
  int __dyc_funcallvar_3 ;
  mp_ptr __dyc_funcallvar_4 ;
  mp_limb_t __dyc_funcallvar_5 ;
  mp_size_t __dyc_funcallvar_6 ;

  {
  mn = (mp_size_t )__dyc_readpre_byte();
  shift = (unsigned int )__dyc_readpre_byte();
  b = (__mpz_struct *)__dyc_read_ptr__typdef___mpz_struct();
  e = (__mpz_struct *)__dyc_read_ptr__typdef___mpz_struct();
  __dyc_funcallvar_1 = __dyc_read_ptr__typdef_mp_limb_t();
  __dyc_funcallvar_2 = (mp_limb_t )__dyc_readpre_byte();
  __dyc_funcallvar_3 = __dyc_readpre_byte();
  __dyc_funcallvar_4 = __dyc_read_ptr__typdef_mp_limb_t();
  __dyc_funcallvar_5 = (mp_limb_t )__dyc_readpre_byte();
  __dyc_funcallvar_6 = (mp_size_t )__dyc_readpre_byte();
  mp = 0;
  memset(& minv, 0, sizeof(struct gmp_div_inverse ));
  tp = 0;
  __cy = 0;
  tmp = 0;
  tmp___0 = 0;
  bn = 0;
  bp = 0;
  tmp___2 = 0;
  __cy___0 = 0;
  tmp___3 = 0;
  tmp___4 = 0;
  if (shift > 0U) {
    {
    minv.shift = 0U;
    tp = __dyc_funcallvar_1;
    }
    {
    while (1) {
      while_114_continue:  ;
      {
      tmp = __dyc_funcallvar_2;
      __cy = tmp;
      }
      if (! (__cy == 0UL)) {
        {

        }
      }
      goto while_114_break;
    }
    while_114_break:  ;
    }
    mp = (mp_limb_t const   *)tp;
  }

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
  __dyc_dummy_label:  ;
  __dyc_print_ptr__typdef_mp_limb_t(mp);
  __dyc_print_comp_39gmp_div_inverse(minv);
  __dyc_printpre_byte(bn);
  __dyc_print_ptr__typdef_mp_limb_t(bp);
}
}
