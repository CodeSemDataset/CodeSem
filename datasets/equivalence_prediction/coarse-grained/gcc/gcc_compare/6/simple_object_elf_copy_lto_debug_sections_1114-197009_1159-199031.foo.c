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
  int *pfnret ;
  char const   **pfnname ;
  unsigned int first_shndx ;
  unsigned int *symtab_indices_shndx ;
  void *tmp ;
  int tmp___0 ;
  ulong_type tmp___5 ;
  ulong_type tmp___6 ;
  void *tmp___7 ;
  int tmp___8 ;
  void *tmp___9 ;
  void *tmp___10 ;
  void *tmp___11 ;
  unsigned char *shdr ;
  unsigned int sh_name ;
  unsigned int sh_type ;
  char const   *name ;
  char *ret ;
  unsigned int sh_link ;
  int *err ;
  void *__dyc_funcallvar_1 ;
  int __dyc_funcallvar_2 ;
  ulong_type __dyc_funcallvar_3 ;
  ulong_type __dyc_funcallvar_4 ;
  ulong_type __dyc_funcallvar_5 ;
  ulong_type __dyc_funcallvar_6 ;
  void *__dyc_funcallvar_7 ;
  int __dyc_funcallvar_8 ;
  void *__dyc_funcallvar_9 ;
  void *__dyc_funcallvar_10 ;
  void *__dyc_funcallvar_11 ;
  unsigned int __dyc_funcallvar_12 ;
  unsigned int __dyc_funcallvar_13 ;
  char *__dyc_funcallvar_14 ;
  unsigned int __dyc_funcallvar_15 ;
  unsigned int __dyc_funcallvar_16 ;
  unsigned int __dyc_funcallvar_17 ;
  unsigned int __dyc_funcallvar_18 ;

  {
  eor = __dyc_read_ptr__comp_60simple_object_elf_read();
  ei_class = (unsigned char )__dyc_readpre_byte();
  first_shndx = (unsigned int )__dyc_readpre_byte();
  err = __dyc_read_ptr__int();
  __dyc_funcallvar_1 = __dyc_read_ptr__void();
  __dyc_funcallvar_2 = __dyc_readpre_byte();
  __dyc_funcallvar_3 = (ulong_type )__dyc_readpre_byte();
  __dyc_funcallvar_4 = (ulong_type )__dyc_readpre_byte();
  __dyc_funcallvar_5 = (ulong_type )__dyc_readpre_byte();
  __dyc_funcallvar_6 = (ulong_type )__dyc_readpre_byte();
  __dyc_funcallvar_7 = __dyc_read_ptr__void();
  __dyc_funcallvar_8 = __dyc_readpre_byte();
  __dyc_funcallvar_9 = __dyc_read_ptr__void();
  __dyc_funcallvar_10 = __dyc_read_ptr__void();
  __dyc_funcallvar_11 = __dyc_read_ptr__void();
  __dyc_funcallvar_12 = (unsigned int )__dyc_readpre_byte();
  __dyc_funcallvar_13 = (unsigned int )__dyc_readpre_byte();
  __dyc_funcallvar_14 = __dyc_read_ptr__char();
  __dyc_funcallvar_15 = (unsigned int )__dyc_readpre_byte();
  __dyc_funcallvar_16 = (unsigned int )__dyc_readpre_byte();
  __dyc_funcallvar_17 = (unsigned int )__dyc_readpre_byte();
  __dyc_funcallvar_18 = (unsigned int )__dyc_readpre_byte();
  shdr_size = 0;
  shnum = 0;
  shdrs = 0;
  shstrhdr = 0;
  name_size = 0;
  shstroff = 0;
  names = 0;
  i = 0;
  pfnret = 0;
  pfnname = 0;
  symtab_indices_shndx = 0;
  tmp = 0;
  tmp___0 = 0;
  tmp___5 = 0;
  tmp___6 = 0;
  tmp___7 = 0;
  tmp___8 = 0;
  tmp___9 = 0;
  tmp___10 = 0;
  tmp___11 = 0;
  shdr = 0;
  sh_name = 0;
  sh_type = 0;
  name = 0;
  ret = 0;
  sh_link = 0;
  if ((int )ei_class == 1) {
    shdr_size = sizeof(Elf32_External_Shdr );
  } else {
    shdr_size = sizeof(Elf64_External_Shdr );
  }
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
  tmp___10 = __dyc_funcallvar_10;
  pfnname = (char const   **)tmp___10;
  tmp___11 = __dyc_funcallvar_11;
  symtab_indices_shndx = (unsigned int *)tmp___11;
  i = 1U;
  while (1) {
    while_9_continue:  ;
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
    {
    name = (char const   *)names + sh_name;
    ret = __dyc_funcallvar_14;
    }
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
    i ++;
  }
  __dyc_dummy_label:  ;
  __dyc_printpre_byte(shdr_size);
  __dyc_printpre_byte(shnum);
  __dyc_print_ptr__char(shdrs);
  __dyc_print_ptr__char(shstrhdr);
  __dyc_printpre_byte(name_size);
  __dyc_printpre_byte(shstroff);
  __dyc_print_ptr__char(names);
  __dyc_print_ptr__int(pfnret);
  __dyc_print_ptr__ptr__char(pfnname);
  __dyc_printpre_byte(first_shndx);
  __dyc_print_ptr__int(symtab_indices_shndx);
  __dyc_print_ptr__char(shdr);
  __dyc_print_ptr__char(name);
}
}
