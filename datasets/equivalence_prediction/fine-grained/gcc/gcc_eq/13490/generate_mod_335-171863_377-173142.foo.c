#include "../../include/dycfoo.h"
#include "../../include/gen-psqr.i.hd.c.h"
void __dyc_foo(void) 
{ int mod_bits ;
  int max_divisor ;
  int max_divisor_bits ;
  struct rawfactor_t *rawfactor ;
  int nrawfactor ;
  int factor_alloc ;
  int numb_bits ;
  int i___0 ;
  int tmp___5 ;
  size_t tmp___6 ;
  size_t tmp___7 ;
  size_t tmp___8 ;
  size_t tmp___9 ;
  int limb_bits ;
  int __dyc_funcallvar_8 ;
  int __dyc_funcallvar_9 ;
  size_t __dyc_funcallvar_10 ;
  size_t __dyc_funcallvar_11 ;
  size_t __dyc_funcallvar_12 ;
  size_t __dyc_funcallvar_13 ;

  {
  max_divisor = __dyc_readpre_byte();
  rawfactor = __dyc_read_ptr__comp_41rawfactor_t();
  factor_alloc = __dyc_readpre_byte();
  numb_bits = __dyc_readpre_byte();
  limb_bits = __dyc_readpre_byte();
  __dyc_funcallvar_8 = __dyc_readpre_byte();
  __dyc_funcallvar_9 = __dyc_readpre_byte();
  __dyc_funcallvar_10 = (size_t )__dyc_readpre_byte();
  __dyc_funcallvar_11 = (size_t )__dyc_readpre_byte();
  __dyc_funcallvar_12 = (size_t )__dyc_readpre_byte();
  __dyc_funcallvar_13 = (size_t )__dyc_readpre_byte();
  mod_bits = 0;
  max_divisor_bits = 0;
  nrawfactor = 0;
  i___0 = 0;
  tmp___5 = 0;
  tmp___6 = 0;
  tmp___7 = 0;
  tmp___8 = 0;
  tmp___9 = 0;
  max_divisor_bits = __dyc_funcallvar_8;

  nrawfactor = 0;
  if (numb_bits < limb_bits - max_divisor_bits) {
    mod_bits = numb_bits;
  } else {
    mod_bits = limb_bits - max_divisor_bits;
  }

  i___0 = 3;
  while (1) {
    while_166_continue:  ;
    if (! (i___0 <= max_divisor)) {
      goto while_166_break;
    }
    {
    tmp___5 = __dyc_funcallvar_9;
    }
    if (! tmp___5) {
      goto __Cont___0;
    }
    {

    tmp___6 = __dyc_funcallvar_10;
    }
    if (tmp___6 > (size_t )mod_bits) {
      goto while_166_break;
    }
    {

    }
    if (! (nrawfactor < factor_alloc)) {
      {

      }
    }
    (rawfactor + nrawfactor)->divisor = i___0;
    (rawfactor + nrawfactor)->multiplicity = 1;
    nrawfactor ++;
    __Cont___0:  
    i___0 += 2;
  }
  while_166_break:  ;
  i___0 = nrawfactor - 1;
  while (1) {
    while_167_continue:  ;
    if (! (i___0 >= 0)) {
      goto while_167_break;
    }
    if ((rawfactor + i___0)->divisor > max_divisor / (rawfactor + i___0)->divisor) {
      goto __Cont___1;
    }
    {

    tmp___7 = __dyc_funcallvar_11;
    }
    if (tmp___7 > (size_t )mod_bits) {
      goto __Cont___1;
    }
    {

    ((rawfactor + i___0)->multiplicity) ++;
    }
    __Cont___1:  
    i___0 --;
  }
  while_167_break:  ;
  tmp___8 = __dyc_funcallvar_12;
  mod_bits = (int )tmp___8;

  while (1) {
    while_168_continue:  ;
    {
    tmp___9 = __dyc_funcallvar_13;
    }
    if (! (tmp___9 < (size_t )numb_bits)) {
      goto __dyc_dummy_label;
    }
    {

    }
  }
  __dyc_dummy_label:  ;
  __dyc_printpre_byte(mod_bits);
}
}
