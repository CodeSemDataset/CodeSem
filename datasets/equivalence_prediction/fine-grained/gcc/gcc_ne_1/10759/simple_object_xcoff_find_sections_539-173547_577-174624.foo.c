#include "../../include/dycfoo.h"
#include "../../include/simple-object-xcoff.i.hd.c.h"
void __dyc_foo(void) 
{ int u64 ;
  unsigned int nscns ;
  char *strtab ;
  size_t strtab_size ;
  off_t n_value ;
  unsigned int n_offset ;
  unsigned int n_zeroes ;
  short n_scnum ;
  ulong_type tmp___10 ;
  unsigned int tmp___11 ;
  int *err ;
  ulong_type __dyc_funcallvar_13 ;
  unsigned int __dyc_funcallvar_14 ;
  unsigned int __dyc_funcallvar_15 ;
  unsigned int __dyc_funcallvar_16 ;
  unsigned int __dyc_funcallvar_17 ;
  char *__dyc_funcallvar_18 ;

  {
  u64 = __dyc_readpre_byte();
  nscns = (unsigned int )__dyc_readpre_byte();
  strtab = __dyc_read_ptr__char();
  strtab_size = (size_t )__dyc_readpre_byte();
  n_scnum = (short )__dyc_readpre_byte();
  err = __dyc_read_ptr__int();
  __dyc_funcallvar_13 = (ulong_type )__dyc_readpre_byte();
  __dyc_funcallvar_14 = (unsigned int )__dyc_readpre_byte();
  __dyc_funcallvar_15 = (unsigned int )__dyc_readpre_byte();
  __dyc_funcallvar_16 = (unsigned int )__dyc_readpre_byte();
  __dyc_funcallvar_17 = (unsigned int )__dyc_readpre_byte();
  __dyc_funcallvar_18 = __dyc_read_ptr__char();
  n_value = 0;
  n_offset = 0;
  n_zeroes = 0;
  tmp___10 = 0;
  tmp___11 = 0;
  if ((int )n_scnum < 1) {
    goto __dyc_dummy_label;
  } else {
    if ((unsigned int )n_scnum > nscns) {
      goto __dyc_dummy_label;
    }
  }
  if (u64) {
    {
    tmp___10 = __dyc_funcallvar_13;
    n_value = (long )tmp___10;
    n_offset = __dyc_funcallvar_14;
    }
  } else {
    {
    n_zeroes = __dyc_funcallvar_15;
    }
    if (n_zeroes != 0U) {
      goto __dyc_dummy_label;
    }
    {
    tmp___11 = __dyc_funcallvar_16;
    n_value = (long )tmp___11;
    n_offset = __dyc_funcallvar_17;
    }
  }
  if ((unsigned long )strtab == (unsigned long )((void *)0)) {
    {
    strtab = __dyc_funcallvar_18;
    }
    if ((unsigned long )strtab == (unsigned long )((void *)0)) {
      {


      }
      goto __dyc_dummy_label;
    }
  }
  if ((size_t )n_offset >= strtab_size) {
    {



    *err = 0;
    }
    goto __dyc_dummy_label;
  }
  __dyc_dummy_label:  ;
  __dyc_printpre_byte(n_value);
  __dyc_printpre_byte(n_offset);
}
}
