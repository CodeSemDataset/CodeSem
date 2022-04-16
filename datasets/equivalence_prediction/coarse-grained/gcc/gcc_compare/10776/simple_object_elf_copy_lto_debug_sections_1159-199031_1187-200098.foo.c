#include "../../include/dycfoo.h"
#include "../../include/simple-object-elf.i.hd.c.h"
void __dyc_foo(void) 
{ unsigned char ei_class ;
  size_t shdr_size ;
  unsigned int shnum ;
  unsigned char *shdrs ;
  size_t name_size ;
  unsigned char *names ;
  unsigned int i ;
  int *pfnret ;
  char const   **pfnname ;
  unsigned int first_shndx ;
  unsigned char *shdr ;
  unsigned int sh_name ;
  unsigned int sh_type ;
  char const   *name ;
  char *ret ;
  int *err ;
  unsigned int __dyc_funcallvar_12 ;
  unsigned int __dyc_funcallvar_13 ;
  char *__dyc_funcallvar_14 ;
  unsigned int __dyc_funcallvar_15 ;
  unsigned int __dyc_funcallvar_16 ;

  {
  ei_class = (unsigned char )__dyc_readpre_byte();
  shdr_size = (size_t )__dyc_readpre_byte();
  shnum = (unsigned int )__dyc_readpre_byte();
  shdrs = (unsigned char *)__dyc_read_ptr__char();
  name_size = (size_t )__dyc_readpre_byte();
  names = (unsigned char *)__dyc_read_ptr__char();
  i = (unsigned int )__dyc_readpre_byte();
  pfnret = __dyc_read_ptr__int();
  pfnname = (char const   **)__dyc_read_ptr__ptr__char();
  first_shndx = (unsigned int )__dyc_readpre_byte();
  err = __dyc_read_ptr__int();
  __dyc_funcallvar_12 = (unsigned int )__dyc_readpre_byte();
  __dyc_funcallvar_13 = (unsigned int )__dyc_readpre_byte();
  __dyc_funcallvar_14 = __dyc_read_ptr__char();
  __dyc_funcallvar_15 = (unsigned int )__dyc_readpre_byte();
  __dyc_funcallvar_16 = (unsigned int )__dyc_readpre_byte();
  shdr = 0;
  sh_name = 0;
  sh_type = 0;
  name = 0;
  ret = 0;
  if (! (i < shnum)) {
    goto __dyc_dummy_label;
  }
  shdr = shdrs + (size_t )(i - 1U) * shdr_size;
  if ((int )ei_class == 1) {
    {
    sh_name = __dyc_funcallvar_12;
    }
  } else {
    {
    sh_name = __dyc_funcallvar_13;
    }
  }
  if ((size_t )sh_name >= name_size) {
    {
    *err = 0;


    }
    goto __dyc_dummy_label;
  }
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
  __dyc_dummy_label:  ;
  __dyc_printpre_byte(first_shndx);
  __dyc_print_ptr__char(shdr);
  __dyc_printpre_byte(sh_type);
  __dyc_print_ptr__char(name);
}
}
