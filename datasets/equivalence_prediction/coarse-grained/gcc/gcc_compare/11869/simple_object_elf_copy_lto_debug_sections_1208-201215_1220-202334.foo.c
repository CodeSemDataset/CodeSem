#include "../../include/dycfoo.h"
#include "../../include/simple-object-elf.i.hd.c.h"
void __dyc_foo(void) 
{ unsigned char ei_class ;
  size_t shdr_size ;
  unsigned int shnum ;
  unsigned char *shdrs ;
  unsigned int i ;
  unsigned char *shdr___0 ;
  unsigned int sh_type___0 ;
  unsigned int sh_info ;
  unsigned int sh_link___0 ;
  unsigned int __dyc_funcallvar_19 ;
  unsigned int __dyc_funcallvar_20 ;
  unsigned int __dyc_funcallvar_21 ;
  unsigned int __dyc_funcallvar_22 ;
  unsigned int __dyc_funcallvar_23 ;
  unsigned int __dyc_funcallvar_24 ;

  {
  ei_class = (unsigned char )__dyc_readpre_byte();
  shdr_size = (size_t )__dyc_readpre_byte();
  shnum = (unsigned int )__dyc_readpre_byte();
  shdrs = (unsigned char *)__dyc_read_ptr__char();
  i = (unsigned int )__dyc_readpre_byte();
  __dyc_funcallvar_19 = (unsigned int )__dyc_readpre_byte();
  __dyc_funcallvar_20 = (unsigned int )__dyc_readpre_byte();
  __dyc_funcallvar_21 = (unsigned int )__dyc_readpre_byte();
  __dyc_funcallvar_22 = (unsigned int )__dyc_readpre_byte();
  __dyc_funcallvar_23 = (unsigned int )__dyc_readpre_byte();
  __dyc_funcallvar_24 = (unsigned int )__dyc_readpre_byte();
  shdr___0 = 0;
  sh_type___0 = 0;
  sh_info = 0;
  sh_link___0 = 0;
  if (! (i < shnum)) {
    goto __dyc_dummy_label;
  }
  shdr___0 = shdrs + (size_t )(i - 1U) * shdr_size;
  if ((int )ei_class == 1) {
    {
    sh_type___0 = __dyc_funcallvar_19;
    }
  } else {
    {
    sh_type___0 = __dyc_funcallvar_20;
    }
  }
  if ((int )ei_class == 1) {
    {
    sh_info = __dyc_funcallvar_21;
    }
  } else {
    {
    sh_info = __dyc_funcallvar_22;
    }
  }
  if ((int )ei_class == 1) {
    {
    sh_link___0 = __dyc_funcallvar_23;
    }
  } else {
    {
    sh_link___0 = __dyc_funcallvar_24;
    }
  }
  __dyc_dummy_label:  ;
  __dyc_print_ptr__char(shdr___0);
  __dyc_printpre_byte(sh_type___0);
  __dyc_printpre_byte(sh_info);
  __dyc_printpre_byte(sh_link___0);
}
}
