#include "../../include/dycfoo.h"
#include "../../include/simple-object-elf.i.hd.c.h"
void __dyc_foo(void) 
{ struct simple_object_elf_read *eor ;
  unsigned char ei_class ;
  size_t shdr_size ;
  unsigned int shnum ;
  unsigned char *shdrs ;
  unsigned char *shstrhdr ;
  size_t name_size ;
  off_t shstroff ;
  unsigned char *names ;
  int *pfnret ;
  void *tmp ;
  int tmp___0 ;
  ulong_type tmp___5 ;
  ulong_type tmp___6 ;
  void *tmp___7 ;
  int tmp___8 ;
  void *tmp___9 ;
  void *__dyc_funcallvar_1 ;
  int __dyc_funcallvar_2 ;
  ulong_type __dyc_funcallvar_3 ;
  ulong_type __dyc_funcallvar_4 ;
  ulong_type __dyc_funcallvar_5 ;
  ulong_type __dyc_funcallvar_6 ;
  void *__dyc_funcallvar_7 ;
  int __dyc_funcallvar_8 ;
  void *__dyc_funcallvar_9 ;

  {
  eor = __dyc_read_ptr__comp_60simple_object_elf_read();
  ei_class = (unsigned char )__dyc_readpre_byte();
  shdr_size = (size_t )__dyc_readpre_byte();
  __dyc_funcallvar_1 = __dyc_read_ptr__void();
  __dyc_funcallvar_2 = __dyc_readpre_byte();
  __dyc_funcallvar_3 = (ulong_type )__dyc_readpre_byte();
  __dyc_funcallvar_4 = (ulong_type )__dyc_readpre_byte();
  __dyc_funcallvar_5 = (ulong_type )__dyc_readpre_byte();
  __dyc_funcallvar_6 = (ulong_type )__dyc_readpre_byte();
  __dyc_funcallvar_7 = __dyc_read_ptr__void();
  __dyc_funcallvar_8 = __dyc_readpre_byte();
  __dyc_funcallvar_9 = __dyc_read_ptr__void();
  shnum = 0;
  shdrs = 0;
  shstrhdr = 0;
  name_size = 0;
  shstroff = 0;
  names = 0;
  pfnret = 0;
  tmp = 0;
  tmp___0 = 0;
  tmp___5 = 0;
  tmp___6 = 0;
  tmp___7 = 0;
  tmp___8 = 0;
  tmp___9 = 0;
  shnum = eor->shnum;
  tmp = __dyc_funcallvar_1;
  shdrs = (unsigned char *)tmp;
  tmp___0 = __dyc_funcallvar_2;
  if (! tmp___0) {
    {

    }
    goto __dyc_dummy_label;
  }
  shstrhdr = shdrs + (size_t )(eor->shstrndx - 1U) * shdr_size;
  if ((int )ei_class == 1) {
    {
    name_size = __dyc_funcallvar_3;
    }
  } else {
    {
    name_size = __dyc_funcallvar_4;
    }
  }
  if ((int )ei_class == 1) {
    {
    tmp___5 = __dyc_funcallvar_5;
    shstroff = (long )tmp___5;
    }
  } else {
    {
    tmp___6 = __dyc_funcallvar_6;
    shstroff = (long )tmp___6;
    }
  }
  tmp___7 = __dyc_funcallvar_7;
  names = (unsigned char *)tmp___7;
  tmp___8 = __dyc_funcallvar_8;
  if (! tmp___8) {
    {


    }
    goto __dyc_dummy_label;
  }
  tmp___9 = __dyc_funcallvar_9;
  pfnret = (int *)tmp___9;
  __dyc_dummy_label:  ;
  __dyc_printpre_byte(shnum);
  __dyc_print_ptr__char(shdrs);
  __dyc_print_ptr__char(shstrhdr);
  __dyc_printpre_byte(name_size);
  __dyc_printpre_byte(shstroff);
  __dyc_print_ptr__char(names);
  __dyc_print_ptr__int(pfnret);
}
}
