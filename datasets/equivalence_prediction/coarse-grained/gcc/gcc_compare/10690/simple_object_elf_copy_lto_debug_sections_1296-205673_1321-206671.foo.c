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
  unsigned int new_i ;
  unsigned char *shdr___1 ;
  unsigned int sh_name___0 ;
  int *err ;
  unsigned int __dyc_funcallvar_36 ;
  unsigned int __dyc_funcallvar_37 ;

  {
  ei_class = (unsigned char )__dyc_readpre_byte();
  shdr_size = (size_t )__dyc_readpre_byte();
  shnum = (unsigned int )__dyc_readpre_byte();
  shdrs = (unsigned char *)__dyc_read_ptr__char();
  name_size = (size_t )__dyc_readpre_byte();
  i = (unsigned int )__dyc_readpre_byte();
  pfnret = __dyc_read_ptr__int();
  new_i = (unsigned int )__dyc_readpre_byte();
  err = __dyc_read_ptr__int();
  __dyc_funcallvar_36 = (unsigned int )__dyc_readpre_byte();
  __dyc_funcallvar_37 = (unsigned int )__dyc_readpre_byte();
  shdr___1 = 0;
  sh_name___0 = 0;
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
  __dyc_dummy_label:  ;
  __dyc_printpre_byte(new_i);
  __dyc_print_ptr__char(shdr___1);
}
}
