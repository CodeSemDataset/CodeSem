#include "../../include/dycfoo.h"
#include "../../include/simple-object-elf.i.hd.c.h"
void __dyc_foo(void) 
{ unsigned char ei_class ;
  unsigned char *names ;
  unsigned int i ;
  int *pfnret ;
  char const   **pfnname ;
  unsigned int first_shndx ;
  unsigned int *symtab_indices_shndx ;
  unsigned int sh_name ;
  unsigned int sh_type ;
  char const   *name ;
  char *ret ;
  unsigned int sh_link ;
  char *__dyc_funcallvar_14 ;
  unsigned int __dyc_funcallvar_15 ;
  unsigned int __dyc_funcallvar_16 ;
  unsigned int __dyc_funcallvar_17 ;
  unsigned int __dyc_funcallvar_18 ;

  {
  ei_class = (unsigned char )__dyc_readpre_byte();
  names = (unsigned char *)__dyc_read_ptr__char();
  i = (unsigned int )__dyc_readpre_byte();
  pfnret = __dyc_read_ptr__int();
  pfnname = (char const   **)__dyc_read_ptr__ptr__char();
  first_shndx = (unsigned int )__dyc_readpre_byte();
  symtab_indices_shndx = (unsigned int *)__dyc_read_ptr__int();
  sh_name = (unsigned int )__dyc_readpre_byte();
  __dyc_funcallvar_14 = __dyc_read_ptr__char();
  __dyc_funcallvar_15 = (unsigned int )__dyc_readpre_byte();
  __dyc_funcallvar_16 = (unsigned int )__dyc_readpre_byte();
  __dyc_funcallvar_17 = (unsigned int )__dyc_readpre_byte();
  __dyc_funcallvar_18 = (unsigned int )__dyc_readpre_byte();
  sh_type = 0;
  name = 0;
  ret = 0;
  sh_link = 0;
  name = (char const   *)names + sh_name;
  ret = __dyc_funcallvar_14;
  if ((unsigned long )ret == (unsigned long )((void *)0)) {
    *(pfnret + (i - 1U)) = -1;
  } else {
    *(pfnret + (i - 1U)) = 0;
  }
  if ((unsigned long )ret == (unsigned long )((void *)0)) {
    *(pfnname + (i - 1U)) = name;
  } else {
    *(pfnname + (i - 1U)) = (char const   *)ret;
  }
  if (first_shndx == 0U) {
    if (*(pfnret + (i - 1U)) == 0) {
      first_shndx = i;
    }
  }
  if ((int )ei_class == 1) {
    {
    sh_type = __dyc_funcallvar_15;
    }
  } else {
    {
    sh_type = __dyc_funcallvar_16;
    }
  }
  if (sh_type == 18U) {
    if ((int )ei_class == 1) {
      {
      sh_link = __dyc_funcallvar_17;
      }
    } else {
      {
      sh_link = __dyc_funcallvar_18;
      }
    }
    *(symtab_indices_shndx + (sh_link - 1U)) = i - 1U;
    *(pfnret + (i - 1U)) = -1;
  }
  __dyc_dummy_label:  ;
  __dyc_printpre_byte(first_shndx);
  __dyc_print_ptr__char(name);
}
}
