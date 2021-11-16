#include "../../include/dycfoo.h"
#include "../../include/simple-object-elf.i.hd.c.h"
void __dyc_foo(void) 
{ struct simple_object_elf_write *eow ;
  struct simple_object_elf_attributes *attrs ;
  simple_object_write_section *section ;
  size_t sh_offset ;
  unsigned int secnum ;
  size_t mask ;
  size_t new_sh_offset ;
  size_t sh_size ;
  struct simple_object_write_section_buffer *buffer ;
  unsigned int sh_type ;
  unsigned int sh_flags ;
  off_t sh_addr ;
  unsigned int sh_link ;
  unsigned int sh_info ;
  size_t sh_addralign ;
  size_t sh_entsize ;
  ulong_type tmp___5 ;
  ulong_type tmp___6 ;
  ulong_type tmp___9 ;
  ulong_type tmp___10 ;
  size_t write___0 ;
  int tmp___19 ;
  int tmp___20 ;
  unsigned int __dyc_funcallvar_3 ;
  unsigned int __dyc_funcallvar_4 ;
  ulong_type __dyc_funcallvar_5 ;
  ulong_type __dyc_funcallvar_6 ;
  ulong_type __dyc_funcallvar_7 ;
  ulong_type __dyc_funcallvar_8 ;
  unsigned int __dyc_funcallvar_9 ;
  unsigned int __dyc_funcallvar_10 ;
  unsigned int __dyc_funcallvar_11 ;
  unsigned int __dyc_funcallvar_12 ;
  ulong_type __dyc_funcallvar_13 ;
  ulong_type __dyc_funcallvar_14 ;
  ulong_type __dyc_funcallvar_15 ;
  ulong_type __dyc_funcallvar_16 ;
  int __dyc_funcallvar_17 ;
  int __dyc_funcallvar_18 ;

  {
  eow = __dyc_read_ptr__comp_62simple_object_elf_write();
  attrs = __dyc_read_ptr__comp_61simple_object_elf_attributes();
  section = __dyc_read_ptr__typdef_simple_object_write_section();
  sh_offset = (size_t )__dyc_readpre_byte();
  secnum = (unsigned int )__dyc_readpre_byte();
  __dyc_funcallvar_3 = (unsigned int )__dyc_readpre_byte();
  __dyc_funcallvar_4 = (unsigned int )__dyc_readpre_byte();
  __dyc_funcallvar_5 = (ulong_type )__dyc_readpre_byte();
  __dyc_funcallvar_6 = (ulong_type )__dyc_readpre_byte();
  __dyc_funcallvar_7 = (ulong_type )__dyc_readpre_byte();
  __dyc_funcallvar_8 = (ulong_type )__dyc_readpre_byte();
  __dyc_funcallvar_9 = (unsigned int )__dyc_readpre_byte();
  __dyc_funcallvar_10 = (unsigned int )__dyc_readpre_byte();
  __dyc_funcallvar_11 = (unsigned int )__dyc_readpre_byte();
  __dyc_funcallvar_12 = (unsigned int )__dyc_readpre_byte();
  __dyc_funcallvar_13 = (ulong_type )__dyc_readpre_byte();
  __dyc_funcallvar_14 = (ulong_type )__dyc_readpre_byte();
  __dyc_funcallvar_15 = (ulong_type )__dyc_readpre_byte();
  __dyc_funcallvar_16 = (ulong_type )__dyc_readpre_byte();
  __dyc_funcallvar_17 = __dyc_readpre_byte();
  __dyc_funcallvar_18 = __dyc_readpre_byte();
  mask = 0;
  new_sh_offset = 0;
  sh_size = 0;
  buffer = 0;
  sh_type = 0;
  sh_flags = 0;
  sh_addr = 0;
  sh_link = 0;
  sh_info = 0;
  sh_addralign = 0;
  sh_entsize = 0;
  tmp___5 = 0;
  tmp___6 = 0;
  tmp___9 = 0;
  tmp___10 = 0;
  write___0 = 0;
  tmp___19 = 0;
  tmp___20 = 0;
  if (! ((unsigned long )section != (unsigned long )((void *)0))) {
    goto __dyc_dummy_label;
  }
  sh_type = 1U;
  sh_flags = 0U;
  sh_addr = (off_t )0;
  sh_link = 0U;
  sh_info = 0U;
  sh_addralign = (size_t )(1U << section->align);
  sh_entsize = (size_t )0;
  if (eow->shdrs) {
    if ((int )attrs->ei_class == 1) {
      {
      sh_type = __dyc_funcallvar_3;
      }
    } else {
      {
      sh_type = __dyc_funcallvar_4;
      }
    }
    if ((int )attrs->ei_class == 1) {
      {
      tmp___5 = __dyc_funcallvar_5;
      sh_flags = (unsigned int )tmp___5;
      }
    } else {
      {
      tmp___6 = __dyc_funcallvar_6;
      sh_flags = (unsigned int )tmp___6;
      }
    }
    if ((int )attrs->ei_class == 1) {
      {
      tmp___9 = __dyc_funcallvar_7;
      sh_addr = (long )tmp___9;
      }
    } else {
      {
      tmp___10 = __dyc_funcallvar_8;
      sh_addr = (long )tmp___10;
      }
    }
    if ((int )attrs->ei_class == 1) {
      {
      sh_link = __dyc_funcallvar_9;
      }
    } else {
      {
      sh_link = __dyc_funcallvar_10;
      }
    }
    if ((int )attrs->ei_class == 1) {
      {
      sh_info = __dyc_funcallvar_11;
      }
    } else {
      {
      sh_info = __dyc_funcallvar_12;
      }
    }
    if ((int )attrs->ei_class == 1) {
      {
      sh_addralign = __dyc_funcallvar_13;
      }
    } else {
      {
      sh_addralign = __dyc_funcallvar_14;
      }
    }
    if ((int )attrs->ei_class == 1) {
      {
      sh_entsize = __dyc_funcallvar_15;
      }
    } else {
      {
      sh_entsize = __dyc_funcallvar_16;
      }
    }
    secnum ++;
  }
  mask = sh_addralign - 1UL;
  new_sh_offset = sh_offset + mask;
  new_sh_offset &= ~ mask;
  while (1) {
    while_6_continue:  ;
    if (! (new_sh_offset > sh_offset)) {
      goto while_6_break;
    }
    {

    write___0 = new_sh_offset - sh_offset;
    }
    if (write___0 > sizeof(unsigned char [16])) {
      write___0 = sizeof(unsigned char [16]);
    }
    {
    tmp___19 = __dyc_funcallvar_17;
    }
    if (! tmp___19) {
      goto __dyc_dummy_label;
    }
    sh_offset += write___0;
  }
  while_6_break:  ;
  sh_size = 0UL;
  buffer = section->buffers;
  while (1) {
    while_7_continue:  ;
    if (! ((unsigned long )buffer != (unsigned long )((void *)0))) {
      goto __dyc_dummy_label;
    }
    {
    tmp___20 = __dyc_funcallvar_18;
    }
    if (! tmp___20) {
      goto __dyc_dummy_label;
    }
    sh_size += buffer->size;
    buffer = buffer->next;
  }
  __dyc_dummy_label:  ;
  __dyc_printpre_byte(secnum);
  __dyc_printpre_byte(sh_size);
  __dyc_printpre_byte(sh_type);
  __dyc_printpre_byte(sh_flags);
  __dyc_printpre_byte(sh_addr);
  __dyc_printpre_byte(sh_link);
  __dyc_printpre_byte(sh_info);
  __dyc_printpre_byte(sh_entsize);
  __dyc_printpre_byte(write___0);
}
}
