#include "../../include/dycfoo.h"
#include "../../include/gen-fac.i.hd.c.h"
void __dyc_foo(void) 
{ mpz_t tu ;
  mpz_t tv ;
  mpz_t s0 ;
  mpz_t t0 ;
  mp_bitcnt_t uz ;
  mp_bitcnt_t vz ;
  mp_bitcnt_t gz ;
  mp_bitcnt_t power ;
  mpz_srcptr __mpz_srcptr_swap__tmp ;
  mpz_ptr __mpz_ptr_swap__tmp ;
  mp_bitcnt_t __mp_bitcnt_t_swap__tmp ;
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
  uz = (mp_bitcnt_t )__dyc_readpre_byte();
  vz = (mp_bitcnt_t )__dyc_readpre_byte();
  s = (__mpz_struct *)__dyc_read_ptr__typdef___mpz_struct();
  t = (__mpz_struct *)__dyc_read_ptr__typdef___mpz_struct();
  u = (__mpz_struct *)__dyc_read_ptr__typdef___mpz_struct();
  v = (__mpz_struct *)__dyc_read_ptr__typdef___mpz_struct();
  __dyc_funcallvar_5 = (mp_bitcnt_t )__dyc_readpre_byte();
  __dyc_funcallvar_6 = __dyc_readpre_byte();
  __dyc_funcallvar_7 = (mp_bitcnt_t )__dyc_readpre_byte();
  __dyc_funcallvar_8 = (mp_bitcnt_t )__dyc_readpre_byte();
  __dyc_funcallvar_9 = __dyc_readpre_byte();
  gz = 0;
  power = 0;
  __mpz_srcptr_swap__tmp = 0;
  __mpz_ptr_swap__tmp = 0;
  __mp_bitcnt_t_swap__tmp = 0;
  shift = 0;
  c = 0;
  tmp___1 = 0;
  tmp___2 = 0;
  if (uz < vz) {
    gz = uz;
  } else {
    gz = vz;
  }
  uz -= gz;
  vz -= gz;
  if (tu[0]._mp_size < tv[0]._mp_size) {
    {

    }
    {
    while (1) {
      while_108_continue:  ;
      __mpz_srcptr_swap__tmp = (mpz_srcptr )u;
      u = v;
      v = (__mpz_struct *)__mpz_srcptr_swap__tmp;
      goto while_108_break;
    }
    while_108_break:  ;
    }
    {
    while (1) {
      while_109_continue:  ;
      __mpz_ptr_swap__tmp = (mpz_ptr )s;
      s = t;
      t = (__mpz_struct *)__mpz_ptr_swap__tmp;
      goto while_109_break;
    }
    while_109_break:  ;
    }
    {
    while (1) {
      while_110_continue:  ;
      __mp_bitcnt_t_swap__tmp = uz;
      uz = vz;
      vz = __mp_bitcnt_t_swap__tmp;
      goto while_110_break;
    }
    while_110_break:  ;
    }
  }




  power = uz + vz;
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
  __dyc_dummy_label:  ;
  __dyc_printpre_byte(power);
  __dyc_print_ptr__typdef___mpz_struct(s);
  __dyc_print_ptr__typdef___mpz_struct(t);
}
}
