#include "../../include/dycfoo.h"
#include "../../include/simple-object-elf.i.hd.c.h"
void __dyc_foo(void) 
{ struct simple_object_elf_write *eow ;
  unsigned char ei_class ;
  size_t shdr_size ;
  unsigned int new_i ;
  unsigned char *shdr___1 ;
  unsigned int sh_type___1 ;
  off_t length___0 ;
  simple_object_write_section *dest ;
  unsigned char *buf___0 ;
  ulong_type tmp___51 ;
  ulong_type tmp___52 ;
  void *tmp___55 ;
  int tmp___56 ;
  ulong_type __dyc_funcallvar_40 ;
  ulong_type __dyc_funcallvar_41 ;
  unsigned int __dyc_funcallvar_42 ;
  unsigned int __dyc_funcallvar_43 ;
  simple_object_write_section *__dyc_funcallvar_44 ;
  void *__dyc_funcallvar_45 ;
  int __dyc_funcallvar_46 ;

  {
  eow = __dyc_read_ptr__comp_62simple_object_elf_write();
  ei_class = (unsigned char )__dyc_readpre_byte();
  shdr_size = (size_t )__dyc_readpre_byte();
  new_i = (unsigned int )__dyc_readpre_byte();
  __dyc_funcallvar_40 = (ulong_type )__dyc_readpre_byte();
  __dyc_funcallvar_41 = (ulong_type )__dyc_readpre_byte();
  __dyc_funcallvar_42 = (unsigned int )__dyc_readpre_byte();
  __dyc_funcallvar_43 = (unsigned int )__dyc_readpre_byte();
  __dyc_funcallvar_44 = __dyc_read_ptr__typdef_simple_object_write_section();
  __dyc_funcallvar_45 = __dyc_read_ptr__void();
  __dyc_funcallvar_46 = __dyc_readpre_byte();
  shdr___1 = 0;
  sh_type___1 = 0;
  length___0 = 0;
  dest = 0;
  buf___0 = 0;
  tmp___51 = 0;
  tmp___52 = 0;
  tmp___55 = 0;
  tmp___56 = 0;
  if ((int )ei_class == 1) {
    {
    tmp___51 = __dyc_funcallvar_40;
    length___0 = (long )tmp___51;
    }
  } else {
    {
    tmp___52 = __dyc_funcallvar_41;
    length___0 = (long )tmp___52;
    }
  }
  if ((int )ei_class == 1) {
    {
    sh_type___1 = __dyc_funcallvar_42;
    }
  } else {
    {
    sh_type___1 = __dyc_funcallvar_43;
    }
  }
  dest = __dyc_funcallvar_44;
  if ((unsigned long )dest == (unsigned long )((void *)0)) {
    {



    }
    goto __dyc_dummy_label;
  }

  shdr___1 = eow->shdrs + (size_t )(new_i - 1U) * shdr_size;
  tmp___55 = __dyc_funcallvar_45;
  buf___0 = (unsigned char *)tmp___55;
  tmp___56 = __dyc_funcallvar_46;
  if (! tmp___56) {
    {




    }
    goto __dyc_dummy_label;
  }
  __dyc_dummy_label:  ;
  __dyc_print_ptr__char(shdr___1);
  __dyc_printpre_byte(sh_type___1);
  __dyc_printpre_byte(length___0);
  __dyc_print_ptr__char(buf___0);
}
}
