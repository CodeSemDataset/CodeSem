#include "../../include/dycfoo.h"
#include "../../include/gen-fac.i.hd.c.h"
void __dyc_foo(void) 
{ mpz_t tu ;
  mpz_t s0 ;
  mpz_t t0 ;
  mp_bitcnt_t power ;
  mp_bitcnt_t shift ;
  int c ;
  mp_bitcnt_t tmp___1 ;
  int tmp___2 ;
  __mpz_struct *s ;
  __mpz_struct *t ;
  __mpz_struct *u ;
  __mpz_struct *v ;
  mp_bitcnt_t __dyc_funcallvar_5 ;
  int __dyc_funcallvar_6 ;
  mp_bitcnt_t __dyc_funcallvar_7 ;
  mp_bitcnt_t __dyc_funcallvar_8 ;
  int __dyc_funcallvar_9 ;

  {
  power = (mp_bitcnt_t )__dyc_readpre_byte();
  s = (__mpz_struct *)__dyc_read_ptr__typdef___mpz_struct();
  t = (__mpz_struct *)__dyc_read_ptr__typdef___mpz_struct();
  u = (__mpz_struct *)__dyc_read_ptr__typdef___mpz_struct();
  v = (__mpz_struct *)__dyc_read_ptr__typdef___mpz_struct();
  __dyc_funcallvar_5 = (mp_bitcnt_t )__dyc_readpre_byte();
  __dyc_funcallvar_6 = __dyc_readpre_byte();
  __dyc_funcallvar_7 = (mp_bitcnt_t )__dyc_readpre_byte();
  __dyc_funcallvar_8 = (mp_bitcnt_t )__dyc_readpre_byte();
  __dyc_funcallvar_9 = __dyc_readpre_byte();
  shift = 0;
  c = 0;
  tmp___1 = 0;
  tmp___2 = 0;
  if (tu[0]._mp_size > 0) {
    {
    shift = __dyc_funcallvar_5;


    power += shift;
    }
    {
    while (1) {
      while_111_continue:  ;
      {
      c = __dyc_funcallvar_6;
      }
      if (c == 0) {
        goto while_111_break;
      }
      if (c < 0) {
        {



        shift = __dyc_funcallvar_7;


        }
      } else {
        {



        shift = __dyc_funcallvar_8;


        }
      }
      power += shift;
    }
    while_111_break:  ;
    }
  }






  while (1) {
    while_112_continue:  ;
    tmp___1 = power;
    power --;
    if (! (tmp___1 > 0UL)) {
      goto while_112_break;
    }
    if ((s0[0]._mp_size != 0) & (int )*(s0[0]._mp_d + 0)) {
      {


      }
    } else {
      if ((t0[0]._mp_size != 0) & (int )*(t0[0]._mp_d + 0)) {
        {


        }
      }
    }
    {


    }
  }
  while_112_break:  ;

  tmp___2 = __dyc_funcallvar_9;
  if (tmp___2 > 0) {
    {


    }
  }
  if (u->_mp_size < 0) {
    {

    }
  }
  if (v->_mp_size < 0) {
    {

    }
  }

  if (s) {
    {

    }
  }
  if (t) {
    {

    }
  }






  goto __dyc_dummy_label;
  __dyc_dummy_label:  ;
  __dyc_printpre_byte(power);
}
}
