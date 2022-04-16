#include "../../include/dycfoo.h"
#include "../../include/gen-psqr.i.hd.c.h"
void __dyc_foo(void) 
{ int mod_bits ;
  int max_divisor ;
  int max_divisor_bits ;
  double total_fraction ;
  struct rawfactor_t *rawfactor ;
  int nrawfactor ;
  struct factor_t *factor ;
  int nfactor ;
  int factor_alloc ;
  int numb_bits ;
  int i___0 ;
  char const   *tmp___4 ;
  int tmp___5 ;
  size_t tmp___6 ;
  size_t tmp___7 ;
  size_t tmp___8 ;
  size_t tmp___9 ;
  int j ;
  mp_bitcnt_t tmp___10 ;
  int limb_bits ;
  int __dyc_funcallvar_8 ;
  int __dyc_funcallvar_9 ;
  size_t __dyc_funcallvar_10 ;
  size_t __dyc_funcallvar_11 ;
  size_t __dyc_funcallvar_12 ;
  size_t __dyc_funcallvar_13 ;
  mp_bitcnt_t __dyc_funcallvar_14 ;

  {
  max_divisor = __dyc_readpre_byte();
  rawfactor = __dyc_read_ptr__comp_41rawfactor_t();
  nrawfactor = __dyc_readpre_byte();
  factor = __dyc_read_ptr__comp_42factor_t();
  nfactor = __dyc_readpre_byte();
  factor_alloc = __dyc_readpre_byte();
  numb_bits = __dyc_readpre_byte();
  limb_bits = __dyc_readpre_byte();
  __dyc_funcallvar_8 = __dyc_readpre_byte();
  __dyc_funcallvar_9 = __dyc_readpre_byte();
  __dyc_funcallvar_10 = (size_t )__dyc_readpre_byte();
  __dyc_funcallvar_11 = (size_t )__dyc_readpre_byte();
  __dyc_funcallvar_12 = (size_t )__dyc_readpre_byte();
  __dyc_funcallvar_13 = (size_t )__dyc_readpre_byte();
  __dyc_funcallvar_14 = (mp_bitcnt_t )__dyc_readpre_byte();
  mod_bits = 0;
  max_divisor_bits = 0;
  total_fraction = 0;
  i___0 = 0;
  tmp___4 = 0;
  tmp___5 = 0;
  tmp___6 = 0;
  tmp___7 = 0;
  tmp___8 = 0;
  tmp___9 = 0;
  j = 0;
  tmp___10 = 0;
  if (nrawfactor <= 2) {
    if (nrawfactor == 1) {
      tmp___4 = "";
    } else {
      tmp___4 = "s";
    }
    {

    }
    use_pp: 
    {
    max_divisor = 2 * limb_bits;
    max_divisor_bits = __dyc_funcallvar_8;

    nrawfactor = 0;
    }
    if (numb_bits < limb_bits - max_divisor_bits) {
      mod_bits = numb_bits;
    } else {
      mod_bits = limb_bits - max_divisor_bits;
    }
    {

    i___0 = 3;
    }
    {
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
    }
    i___0 = nrawfactor - 1;
    {
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
    }
    {
    tmp___8 = __dyc_funcallvar_12;
    mod_bits = (int )tmp___8;

    }
    {
    while (1) {
      while_168_continue:  ;
      {
      tmp___9 = __dyc_funcallvar_13;
      }
      if (! (tmp___9 < (size_t )numb_bits)) {
        goto while_168_break;
      }
      {

      }
    }
    while_168_break:  ;
    }
    {


    }
  }
  i___0 = 0;
  while (1) {
    while_169_continue:  ;
    if (! (i___0 < nrawfactor)) {
      goto while_169_break;
    }
    if (! (nfactor < factor_alloc)) {
      {

      }
    }
    (factor + nfactor)->divisor = 1;
    j = 0;
    {
    while (1) {
      while_170_continue:  ;
      if (! (j < (rawfactor + i___0)->multiplicity)) {
        goto while_170_break;
      }
      (factor + nfactor)->divisor *= (rawfactor + i___0)->divisor;
      j ++;
    }
    while_170_break:  ;
    }
    nfactor ++;
    i___0 ++;
  }
  while_169_break:  ;

  i___0 = nfactor - 1;
  while (1) {
    while_171_continue:  ;
    if (! (i___0 >= 1)) {
      goto while_171_break;
    }
    if ((factor + i___0)->divisor <= max_divisor / (factor + 0)->divisor) {
      (factor + 0)->divisor *= (factor + i___0)->divisor;
      {
      while (1) {
        while_172_continue:  ;
        {

        nfactor --;
        }
        goto while_172_break;
      }
      while_172_break:  ;
      }
      goto __dyc_dummy_label;
    }
    i___0 --;
  }
  while_171_break:  ;
  total_fraction = 1.0;
  i___0 = 0;
  while (1) {
    while_173_continue:  ;
    if (! (i___0 < nfactor)) {
      goto while_173_break;
    }
    {




    tmp___10 = __dyc_funcallvar_14;
    (factor + i___0)->fraction = (double )tmp___10 / (double )(factor + i___0)->divisor;
    total_fraction *= (factor + i___0)->fraction;
    i___0 ++;
    }
  }
  while_173_break:  ;

  goto __dyc_dummy_label;
  __dyc_dummy_label:  ;
  __dyc_printpre_byte(mod_bits);
  __dyc_printpre_byte(total_fraction);
  __dyc_print_ptr__char(tmp___4);
}
}
