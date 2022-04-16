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
  unsigned int i ;
  void *tmp ;
  int tmp___0 ;
  ulong_type tmp___5 ;
  ulong_type tmp___6 ;
  void *tmp___7 ;
  int tmp___8 ;
  unsigned char *shdr ;
  unsigned int sh_name ;
  char const   *name ;
  off_t offset ;
  off_t length ;
  ulong_type tmp___13 ;
  ulong_type tmp___14 ;
  ulong_type tmp___17 ;
  ulong_type tmp___18 ;
  int tmp___19 ;
  int *err ;
  int __dyc_funcallvar_2 ;
  ulong_type __dyc_funcallvar_3 ;
  ulong_type __dyc_funcallvar_4 ;
  ulong_type __dyc_funcallvar_5 ;
  ulong_type __dyc_funcallvar_6 ;
  void *__dyc_funcallvar_7 ;
  int __dyc_funcallvar_8 ;
  unsigned int __dyc_funcallvar_9 ;
  unsigned int __dyc_funcallvar_10 ;
  ulong_type __dyc_funcallvar_11 ;
  ulong_type __dyc_funcallvar_12 ;
  ulong_type __dyc_funcallvar_13 ;
  ulong_type __dyc_funcallvar_14 ;
  int __dyc_funcallvar_15 ;

  {
  eor = __dyc_read_ptr__comp_60simple_object_elf_read();
  ei_class = (unsigned char )__dyc_readpre_byte();
  shdr_size = (size_t )__dyc_readpre_byte();
  shnum = (unsigned int )__dyc_readpre_byte();
  tmp = __dyc_read_ptr__void();
  err = __dyc_read_ptr__int();
  __dyc_funcallvar_2 = __dyc_readpre_byte();
  __dyc_funcallvar_3 = (ulong_type )__dyc_readpre_byte();
  __dyc_funcallvar_4 = (ulong_type )__dyc_readpre_byte();
  __dyc_funcallvar_5 = (ulong_type )__dyc_readpre_byte();
  __dyc_funcallvar_6 = (ulong_type )__dyc_readpre_byte();
  __dyc_funcallvar_7 = __dyc_read_ptr__void();
  __dyc_funcallvar_8 = __dyc_readpre_byte();
  __dyc_funcallvar_9 = (unsigned int )__dyc_readpre_byte();
  __dyc_funcallvar_10 = (unsigned int )__dyc_readpre_byte();
  __dyc_funcallvar_11 = (ulong_type )__dyc_readpre_byte();
  __dyc_funcallvar_12 = (ulong_type )__dyc_readpre_byte();
  __dyc_funcallvar_13 = (ulong_type )__dyc_readpre_byte();
  __dyc_funcallvar_14 = (ulong_type )__dyc_readpre_byte();
  __dyc_funcallvar_15 = __dyc_readpre_byte();
  shdrs = 0;
  shstrhdr = 0;
  name_size = 0;
  shstroff = 0;
  names = 0;
  i = 0;
  tmp___0 = 0;
  tmp___5 = 0;
  tmp___6 = 0;
  tmp___7 = 0;
  tmp___8 = 0;
  shdr = 0;
  sh_name = 0;
  name = 0;
  offset = 0;
  length = 0;
  tmp___13 = 0;
  tmp___14 = 0;
  tmp___17 = 0;
  tmp___18 = 0;
  tmp___19 = 0;
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
  i = 1U;
  while (1) {
    while_1_continue:  ;
    if (! (i < shnum)) {
      goto while_1_break;
    }
    shdr = shdrs + (size_t )(i - 1U) * shdr_size;
    if ((int )ei_class == 1) {
      {
      sh_name = __dyc_funcallvar_9;
      }
    } else {
      {
      sh_name = __dyc_funcallvar_10;
      }
    }
    if ((size_t )sh_name >= name_size) {
      {
      *err = 0;


      }
      goto __dyc_dummy_label;
    }
    name = (char const   *)names + sh_name;
    if ((int )ei_class == 1) {
      {
      tmp___13 = __dyc_funcallvar_11;
      offset = (long )tmp___13;
      }
    } else {
      {
      tmp___14 = __dyc_funcallvar_12;
      offset = (long )tmp___14;
      }
    }
    if ((int )ei_class == 1) {
      {
      tmp___17 = __dyc_funcallvar_13;
      length = (long )tmp___17;
      }
    } else {
      {
      tmp___18 = __dyc_funcallvar_14;
      length = (long )tmp___18;
      }
    }
    {
    tmp___19 = __dyc_funcallvar_15;
    }
    if (! tmp___19) {
      goto while_1_break;
    }
    i ++;
  }
  while_1_break:  ;


  goto __dyc_dummy_label;
  __dyc_dummy_label:  ;
  __dyc_print_ptr__char(shdrs);
  __dyc_print_ptr__char(shstrhdr);
  __dyc_printpre_byte(name_size);
  __dyc_printpre_byte(shstroff);
  __dyc_print_ptr__char(names);
  __dyc_print_ptr__char(shdr);
  __dyc_print_ptr__char(name);
  __dyc_printpre_byte(offset);
  __dyc_printpre_byte(length);
}
}
