#include "../../include/dycfoo.h"
#include "../../include/simple-object-xcoff.i.hd.c.h"
void __dyc_foo(void) 
{ struct simple_object_xcoff_read *ocr ;
  int u64 ;
  unsigned int nscns ;
  char *strtab ;
  struct external_syment *symtab ;
  unsigned int i ;
  unsigned char *sym ;
  off_t n_value ;
  unsigned int n_numaux ;
  unsigned int n_offset ;
  unsigned int n_zeroes ;
  short n_scnum ;
  unsigned short tmp___9 ;
  ulong_type tmp___10 ;
  unsigned int tmp___11 ;
  unsigned short __dyc_funcallvar_12 ;
  ulong_type __dyc_funcallvar_13 ;
  unsigned int __dyc_funcallvar_14 ;
  unsigned int __dyc_funcallvar_15 ;
  unsigned int __dyc_funcallvar_16 ;
  unsigned int __dyc_funcallvar_17 ;
  char *__dyc_funcallvar_18 ;

  {
  ocr = __dyc_read_ptr__comp_75simple_object_xcoff_read();
  u64 = __dyc_readpre_byte();
  nscns = (unsigned int )__dyc_readpre_byte();
  strtab = __dyc_read_ptr__char();
  symtab = __dyc_read_ptr__comp_59external_syment();
  i = (unsigned int )__dyc_readpre_byte();
  __dyc_funcallvar_12 = (unsigned short )__dyc_readpre_byte();
  __dyc_funcallvar_13 = (ulong_type )__dyc_readpre_byte();
  __dyc_funcallvar_14 = (unsigned int )__dyc_readpre_byte();
  __dyc_funcallvar_15 = (unsigned int )__dyc_readpre_byte();
  __dyc_funcallvar_16 = (unsigned int )__dyc_readpre_byte();
  __dyc_funcallvar_17 = (unsigned int )__dyc_readpre_byte();
  __dyc_funcallvar_18 = __dyc_read_ptr__char();
  sym = 0;
  n_value = 0;
  n_numaux = 0;
  n_offset = 0;
  n_zeroes = 0;
  n_scnum = 0;
  tmp___9 = 0;
  tmp___10 = 0;
  tmp___11 = 0;
  if (! (i < ocr->nsyms)) {
    goto __dyc_dummy_label;
  }
  sym = (unsigned char *)(symtab + i);
  n_numaux = (unsigned int )(symtab + i)->n_numaux[0];
  if ((int )(symtab + i)->n_sclass[0] != 2) {
    if ((int )(symtab + i)->n_sclass[0] != 107) {
      goto __dyc_dummy_label;
    }
  }
  if (n_numaux < 1U) {
    goto __dyc_dummy_label;
  } else {
    if (i + n_numaux >= ocr->nsyms) {
      goto __dyc_dummy_label;
    }
  }
  tmp___9 = __dyc_funcallvar_12;
  n_scnum = (short )tmp___9;
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
  __dyc_dummy_label:  ;
  __dyc_print_ptr__char(sym);
  __dyc_printpre_byte(n_value);
  __dyc_printpre_byte(n_numaux);
  __dyc_printpre_byte(n_offset);
}
}
