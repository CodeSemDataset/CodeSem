#include "../../include/dycfoo.h"
#include "../../include/simple-object-elf.i.hd.c.h"
void __dyc_foo(void) 
{ struct simple_object_elf_read *eor ;
  struct elf_type_functions  const  *type_functions ;
  struct simple_object_elf_write *eow ;
  unsigned char ei_class ;
  size_t shdr_size ;
  unsigned int shnum ;
  unsigned char *shdrs ;
  unsigned char *shstrhdr ;
  size_t name_size ;
  off_t shstroff ;
  unsigned char *names ;
  int *pfnret ;
  char const   **pfnname ;
  unsigned int first_shndx ;
  void *tmp ;
  int tmp___0 ;
  ulong_type tmp___5 ;
  ulong_type tmp___6 ;
  void *tmp___7 ;
  int tmp___8 ;
  void *tmp___9 ;
  void *tmp___10 ;
  simple_object_read *sobj ;
  simple_object_write *dobj ;
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

  {
  sobj = __dyc_read_ptr__typdef_simple_object_read();
  dobj = __dyc_read_ptr__typdef_simple_object_write();
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
  eor = 0;
  type_functions = 0;
  eow = 0;
  ei_class = 0;
  shdr_size = 0;
  shnum = 0;
  shdrs = 0;
  shstrhdr = 0;
  name_size = 0;
  shstroff = 0;
  names = 0;
  pfnret = 0;
  pfnname = 0;
  first_shndx = 0;
  tmp = 0;
  tmp___0 = 0;
  tmp___5 = 0;
  tmp___6 = 0;
  tmp___7 = 0;
  tmp___8 = 0;
  tmp___9 = 0;
  tmp___10 = 0;
  eor = (struct simple_object_elf_read *)sobj->data;
  type_functions = eor->type_functions;
  eow = (struct simple_object_elf_write *)dobj->data;
  ei_class = eor->ei_class;
  first_shndx = 0U;
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
  __dyc_dummy_label:  ;
  __dyc_print_ptr__comp_59elf_type_functions(type_functions);
  __dyc_print_ptr__comp_62simple_object_elf_write(eow);
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
}
}
