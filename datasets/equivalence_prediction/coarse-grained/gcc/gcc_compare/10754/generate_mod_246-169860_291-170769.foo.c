#include "../../include/dycfoo.h"
#include "../../include/gen-psqr.i.hd.c.h"
void __dyc_foo(void) 
{ int mod34_bits ;
  int mod_bits ;
  int max_divisor ;
  int max_divisor_bits ;
  struct rawfactor_t *rawfactor ;
  int nrawfactor ;
  struct factor_t *factor ;
  int factor_alloc ;
  int numb_bits ;
  int i___0 ;
  int divisor ;
  void *tmp ;
  void *tmp___0 ;
  int multiplicity ;
  int tmp___1 ;
  int tmp___2 ;
  int tmp___3 ;
  int limb_bits ;
  void *__dyc_funcallvar_2 ;
  int __dyc_funcallvar_3 ;
  int __dyc_funcallvar_4 ;
  int __dyc_funcallvar_5 ;
  int __dyc_funcallvar_6 ;
  int __dyc_funcallvar_7 ;

  {
  nrawfactor = __dyc_readpre_byte();
  factor_alloc = __dyc_readpre_byte();
  numb_bits = __dyc_readpre_byte();
  tmp = __dyc_read_ptr__void();
  limb_bits = __dyc_readpre_byte();
  __dyc_funcallvar_2 = __dyc_read_ptr__void();
  __dyc_funcallvar_3 = __dyc_readpre_byte();
  __dyc_funcallvar_4 = __dyc_readpre_byte();
  __dyc_funcallvar_5 = __dyc_readpre_byte();
  __dyc_funcallvar_6 = __dyc_readpre_byte();
  __dyc_funcallvar_7 = __dyc_readpre_byte();
  mod34_bits = 0;
  mod_bits = 0;
  max_divisor = 0;
  max_divisor_bits = 0;
  rawfactor = 0;
  factor = 0;
  i___0 = 0;
  divisor = 0;
  tmp___0 = 0;
  multiplicity = 0;
  tmp___1 = 0;
  tmp___2 = 0;
  tmp___3 = 0;
  factor = (struct factor_t *)tmp;
  tmp___0 = __dyc_funcallvar_2;
  rawfactor = (struct rawfactor_t *)tmp___0;
  if (numb_bits % 4 != 0) {
    {

    }
    goto __dyc_dummy_label;
  }
  max_divisor = 2 * limb_bits;
  max_divisor_bits = __dyc_funcallvar_3;
  if (numb_bits / 4 < max_divisor_bits) {
    {
    max_divisor = limb_bits;
    max_divisor_bits = __dyc_funcallvar_4;
    }
    if (numb_bits / 4 < max_divisor_bits) {
      {

      }
      goto __dyc_dummy_label;
    }
  }
  mod34_bits = (numb_bits / 4) * 3;
  mod_bits = mod34_bits + 1;





  i___0 = 3;
  while (1) {
    while_164_continue:  ;
    if (! (i___0 <= max_divisor)) {
      goto __dyc_dummy_label;
    }
    {
    tmp___1 = __dyc_funcallvar_5;
    }
    if (! tmp___1) {
      goto __Cont;
    }
    {

    tmp___2 = __dyc_funcallvar_6;
    }
    if (tmp___2 != 0) {
      goto __Cont;
    }
    divisor = 1;
    multiplicity = 0;
    {
    while (1) {
      while_165_continue:  ;
      if (divisor > max_divisor / i___0) {
        goto while_165_break;
      }
      {
      multiplicity ++;


      tmp___3 = __dyc_funcallvar_7;
      }
      if (! (tmp___3 == 0)) {
        goto while_165_break;
      }
    }
    while_165_break:  ;
    }
    if (! (nrawfactor < factor_alloc)) {
      {

      }
    }
    (rawfactor + nrawfactor)->divisor = i___0;
    (rawfactor + nrawfactor)->multiplicity = multiplicity;
    nrawfactor ++;
    __Cont:  
    i___0 += 2;
  }
  __dyc_dummy_label:  ;
  __dyc_printpre_byte(mod_bits);
  __dyc_printpre_byte(max_divisor);
  __dyc_print_ptr__comp_41rawfactor_t(rawfactor);
  __dyc_printpre_byte(nrawfactor);
  __dyc_print_ptr__comp_42factor_t(factor);
}
}
