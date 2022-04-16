#include "../../include/dycfoo.h"
#include "../../include/simple-object-elf.i.hd.c.h"
void __dyc_foo(void) 
{ struct elf_type_functions elf_big_32_functions ;
  struct elf_type_functions elf_little_32_functions ;
  struct elf_type_functions elf_big_64_functions ;
  struct elf_type_functions elf_little_64_functions ;
  unsigned char ei_data ;
  unsigned char ei_class ;
  struct elf_type_functions  const  *type_functions ;
  struct simple_object_elf_read *eor ;
  int tmp ;
  void *tmp___0 ;
  unsigned short tmp___9 ;
  unsigned short tmp___10 ;
  unsigned short tmp___13 ;
  unsigned short tmp___14 ;
  unsigned char *header ;
  char const   **errmsg ;
  int *err ;
  int __dyc_funcallvar_1 ;
  void *__dyc_funcallvar_2 ;
  unsigned short __dyc_funcallvar_3 ;
  unsigned short __dyc_funcallvar_4 ;
  unsigned int __dyc_funcallvar_5 ;
  unsigned int __dyc_funcallvar_6 ;
  ulong_type __dyc_funcallvar_7 ;
  ulong_type __dyc_funcallvar_8 ;
  unsigned short __dyc_funcallvar_9 ;
  unsigned short __dyc_funcallvar_10 ;
  unsigned short __dyc_funcallvar_11 ;
  unsigned short __dyc_funcallvar_12 ;

  {
  elf_big_32_functions = (struct elf_type_functions  const  )__dyc_read_comp_59elf_type_functions();
  elf_little_32_functions = (struct elf_type_functions  const  )__dyc_read_comp_59elf_type_functions();
  elf_big_64_functions = (struct elf_type_functions  const  )__dyc_read_comp_59elf_type_functions();
  elf_little_64_functions = (struct elf_type_functions  const  )__dyc_read_comp_59elf_type_functions();
  ei_data = (unsigned char )__dyc_readpre_byte();
  header = (unsigned char *)__dyc_read_ptr__char();
  errmsg = (char const   **)__dyc_read_ptr__ptr__char();
  err = __dyc_read_ptr__int();
  __dyc_funcallvar_1 = __dyc_readpre_byte();
  __dyc_funcallvar_2 = __dyc_read_ptr__void();
  __dyc_funcallvar_3 = (unsigned short )__dyc_readpre_byte();
  __dyc_funcallvar_4 = (unsigned short )__dyc_readpre_byte();
  __dyc_funcallvar_5 = (unsigned int )__dyc_readpre_byte();
  __dyc_funcallvar_6 = (unsigned int )__dyc_readpre_byte();
  __dyc_funcallvar_7 = (ulong_type )__dyc_readpre_byte();
  __dyc_funcallvar_8 = (ulong_type )__dyc_readpre_byte();
  __dyc_funcallvar_9 = (unsigned short )__dyc_readpre_byte();
  __dyc_funcallvar_10 = (unsigned short )__dyc_readpre_byte();
  __dyc_funcallvar_11 = (unsigned short )__dyc_readpre_byte();
  __dyc_funcallvar_12 = (unsigned short )__dyc_readpre_byte();
  ei_class = 0;
  type_functions = 0;
  eor = 0;
  tmp = 0;
  tmp___0 = 0;
  tmp___9 = 0;
  tmp___10 = 0;
  tmp___13 = 0;
  tmp___14 = 0;
  ei_class = *(header + 4);
  if ((int )ei_class == 1) {
    goto switch_0_1;
  } else {
    if ((int )ei_class == 2) {
      goto switch_0_2;
    } else {
      {
      goto switch_0_default;
      if (0) {
        switch_0_1:  
        if ((int )ei_data == 1) {
          type_functions = & elf_little_32_functions;
        } else {
          type_functions = & elf_big_32_functions;
        }
        goto switch_0_break;
        switch_0_2:  
        if ((int )ei_data == 1) {
          type_functions = & elf_little_64_functions;
        } else {
          type_functions = & elf_big_64_functions;
        }
        goto switch_0_break;
        switch_0_default:  
        *errmsg = "unrecognized ELF size";
        *err = 0;
        goto __dyc_dummy_label;
      } else {
        switch_0_break:  ;
      }
      }
    }
  }
  tmp = __dyc_funcallvar_1;
  if (! tmp) {
    goto __dyc_dummy_label;
  }
  tmp___0 = __dyc_funcallvar_2;
  eor = (struct simple_object_elf_read *)tmp___0;
  eor->type_functions = type_functions;
  eor->ei_data = ei_data;
  eor->ei_class = ei_class;
  eor->ei_osabi = *(header + 7);
  if ((int )ei_class == 1) {
    {
    eor->machine = __dyc_funcallvar_3;
    }
  } else {
    {
    eor->machine = __dyc_funcallvar_4;
    }
  }
  if ((int )ei_class == 1) {
    {
    eor->flags = __dyc_funcallvar_5;
    }
  } else {
    {
    eor->flags = __dyc_funcallvar_6;
    }
  }
  if ((int )ei_class == 1) {
    {
    eor->shoff = __dyc_funcallvar_7;
    }
  } else {
    {
    eor->shoff = __dyc_funcallvar_8;
    }
  }
  if ((int )ei_class == 1) {
    {
    tmp___9 = __dyc_funcallvar_9;
    eor->shnum = (unsigned int )tmp___9;
    }
  } else {
    {
    tmp___10 = __dyc_funcallvar_10;
    eor->shnum = (unsigned int )tmp___10;
    }
  }
  if ((int )ei_class == 1) {
    {
    tmp___13 = __dyc_funcallvar_11;
    eor->shstrndx = (unsigned int )tmp___13;
    }
  } else {
    {
    tmp___14 = __dyc_funcallvar_12;
    eor->shstrndx = (unsigned int )tmp___14;
    }
  }
  __dyc_dummy_label:  ;
  __dyc_print_ptr__comp_59elf_type_functions(type_functions);
}
}
