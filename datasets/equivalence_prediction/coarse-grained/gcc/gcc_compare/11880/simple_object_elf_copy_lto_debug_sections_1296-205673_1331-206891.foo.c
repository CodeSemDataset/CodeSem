#include "../../include/dycfoo.h"
#include "../../include/simple-object-elf.i.hd.c.h"
void __dyc_foo(void) 
{ unsigned char ei_class ;
  size_t shdr_size ;
  unsigned int shnum ;
  unsigned char *shdrs ;
  size_t name_size ;
  unsigned int i ;
  int *pfnret ;
  char const   **pfnname ;
  unsigned int new_i ;
  unsigned char *shdr___1 ;
  unsigned int sh_name___0 ;
  char const   *name___0 ;
  off_t offset___0 ;
  ulong_type tmp___47 ;
  ulong_type tmp___48 ;
  int *err ;
  unsigned int __dyc_funcallvar_36 ;
  unsigned int __dyc_funcallvar_37 ;
  ulong_type __dyc_funcallvar_38 ;
  ulong_type __dyc_funcallvar_39 ;

  {
  ei_class = (unsigned char )__dyc_readpre_byte();
  shdr_size = (size_t )__dyc_readpre_byte();
  shnum = (unsigned int )__dyc_readpre_byte();
  shdrs = (unsigned char *)__dyc_read_ptr__char();
  name_size = (size_t )__dyc_readpre_byte();
  i = (unsigned int )__dyc_readpre_byte();
  pfnret = __dyc_read_ptr__int();
  pfnname = (char const   **)__dyc_read_ptr__ptr__char();
  new_i = (unsigned int )__dyc_readpre_byte();
  err = __dyc_read_ptr__int();
  __dyc_funcallvar_36 = (unsigned int )__dyc_readpre_byte();
  __dyc_funcallvar_37 = (unsigned int )__dyc_readpre_byte();
  __dyc_funcallvar_38 = (ulong_type )__dyc_readpre_byte();
  __dyc_funcallvar_39 = (ulong_type )__dyc_readpre_byte();
  shdr___1 = 0;
  sh_name___0 = 0;
  name___0 = 0;
  offset___0 = 0;
  tmp___47 = 0;
  tmp___48 = 0;
  *err = 95;
  goto __dyc_dummy_label;
  while_14_continue:  ;
  if (! (i < shnum)) {
    goto __dyc_dummy_label;
  }
  if (*(pfnret + (i - 1U))) {
    goto __dyc_dummy_label;
  }
  new_i ++;
  shdr___1 = shdrs + (size_t )(i - 1U) * shdr_size;
  if ((int )ei_class == 1) {
    {
    sh_name___0 = __dyc_funcallvar_36;
    }
  } else {
    {
    sh_name___0 = __dyc_funcallvar_37;
    }
  }
  if ((size_t )sh_name___0 >= name_size) {
    {
    *err = 0;



    }
    goto __dyc_dummy_label;
  }
  name___0 = *(pfnname + (i - 1U));
  if ((int )ei_class == 1) {
    {
    tmp___47 = __dyc_funcallvar_38;
    offset___0 = (long )tmp___47;
    }
  } else {
    {
    tmp___48 = __dyc_funcallvar_39;
    offset___0 = (long )tmp___48;
    }
  }
  __dyc_dummy_label:  ;
  __dyc_printpre_byte(new_i);
  __dyc_print_ptr__char(shdr___1);
  __dyc_print_ptr__char(name___0);
  __dyc_printpre_byte(offset___0);
}
}
