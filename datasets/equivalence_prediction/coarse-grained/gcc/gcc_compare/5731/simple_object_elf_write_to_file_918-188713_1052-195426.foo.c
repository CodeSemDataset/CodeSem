#include "../../include/dycfoo.h"
#include "../../include/simple-object-elf.i.hd.c.h"
void __dyc_foo(void) 
{ struct simple_object_elf_write *eow ;
  struct simple_object_elf_attributes *attrs ;
  unsigned char cl ;
  size_t ehdr_size ;
  size_t shdr_size ;
  simple_object_write_section *section ;
  unsigned int shnum ;
  size_t shdr_offset ;
  size_t sh_offset ;
  unsigned int first_sh_size ;
  unsigned int first_sh_link ;
  size_t sh_name ;
  unsigned char zero ;
  unsigned int secnum ;
  int tmp___0 ;
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
  int tmp___21 ;
  size_t tmp___22 ;
  size_t tmp___23 ;
  int tmp___24 ;
  int tmp___25 ;
  size_t len ;
  size_t tmp___26 ;
  int tmp___27 ;
  simple_object_write *sobj ;
  int __dyc_funcallvar_2 ;
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
  int __dyc_funcallvar_19 ;
  size_t __dyc_funcallvar_20 ;
  size_t __dyc_funcallvar_21 ;
  int __dyc_funcallvar_22 ;
  int __dyc_funcallvar_23 ;
  size_t __dyc_funcallvar_24 ;
  int __dyc_funcallvar_25 ;

  {
  eow = __dyc_read_ptr__comp_62simple_object_elf_write();
  attrs = __dyc_read_ptr__comp_61simple_object_elf_attributes();
  cl = (unsigned char )__dyc_readpre_byte();
  sobj = __dyc_read_ptr__typdef_simple_object_write();
  __dyc_funcallvar_2 = __dyc_readpre_byte();
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
  __dyc_funcallvar_19 = __dyc_readpre_byte();
  __dyc_funcallvar_20 = (size_t )__dyc_readpre_byte();
  __dyc_funcallvar_21 = (size_t )__dyc_readpre_byte();
  __dyc_funcallvar_22 = __dyc_readpre_byte();
  __dyc_funcallvar_23 = __dyc_readpre_byte();
  __dyc_funcallvar_24 = (size_t )__dyc_readpre_byte();
  __dyc_funcallvar_25 = __dyc_readpre_byte();
  ehdr_size = 0;
  shdr_size = 0;
  section = 0;
  shnum = 0;
  shdr_offset = 0;
  sh_offset = 0;
  first_sh_size = 0;
  first_sh_link = 0;
  sh_name = 0;
  zero = 0;
  secnum = 0;
  tmp___0 = 0;
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
  tmp___21 = 0;
  tmp___22 = 0;
  tmp___23 = 0;
  tmp___24 = 0;
  tmp___25 = 0;
  len = 0;
  tmp___26 = 0;
  tmp___27 = 0;
  if ((int )cl == 1) {
    ehdr_size = sizeof(Elf32_External_Ehdr );
    shdr_size = sizeof(Elf32_External_Shdr );
  } else {
    ehdr_size = sizeof(Elf64_External_Ehdr );
    shdr_size = sizeof(Elf64_External_Shdr );
  }
  shnum = 0U;
  section = sobj->sections;
  while (1) {
    while_4_continue:  ;
    if (! ((unsigned long )section != (unsigned long )((void *)0))) {
      goto while_4_break;
    }
    shnum ++;
    section = section->next;
  }
  while_4_break:  ;
  if (shnum == 0U) {
    goto __dyc_dummy_label;
  }
  shnum += 2U;
  shdr_offset = ehdr_size;
  sh_offset = shdr_offset + (size_t )shnum * shdr_size;
  if (shnum < 65280U) {
    first_sh_size = 0U;
  } else {
    first_sh_size = shnum;
  }
  if (shnum - 1U < 65280U) {
    first_sh_link = 0U;
  } else {
    first_sh_link = shnum - 1U;
  }
  tmp___0 = __dyc_funcallvar_2;
  if (! tmp___0) {
    goto __dyc_dummy_label;
  }
  shdr_offset += shdr_size;
  sh_name = 1UL;
  secnum = 0U;
  section = sobj->sections;
  while (1) {
    while_5_continue:  ;
    if (! ((unsigned long )section != (unsigned long )((void *)0))) {
      goto while_5_break;
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
    {
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
    }
    sh_size = 0UL;
    buffer = section->buffers;
    {
    while (1) {
      while_7_continue:  ;
      if (! ((unsigned long )buffer != (unsigned long )((void *)0))) {
        goto while_7_break;
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
    while_7_break:  ;
    }
    {
    tmp___21 = __dyc_funcallvar_19;
    }
    if (! tmp___21) {
      goto __dyc_dummy_label;
    }
    {
    shdr_offset += shdr_size;
    tmp___22 = __dyc_funcallvar_20;
    sh_name += tmp___22 + 1UL;
    sh_offset += sh_size;
    section = section->next;
    }
  }
  while_5_break:  ;
  tmp___23 = __dyc_funcallvar_21;
  tmp___24 = __dyc_funcallvar_22;
  if (! tmp___24) {
    goto __dyc_dummy_label;
  }
  zero = (unsigned char)0;
  tmp___25 = __dyc_funcallvar_23;
  if (! tmp___25) {
    goto __dyc_dummy_label;
  }
  sh_offset ++;
  section = sobj->sections;
  while (1) {
    while_8_continue:  ;
    if (! ((unsigned long )section != (unsigned long )((void *)0))) {
      goto __dyc_dummy_label;
    }
    {
    tmp___26 = __dyc_funcallvar_24;
    len = tmp___26 + 1UL;
    tmp___27 = __dyc_funcallvar_25;
    }
    if (! tmp___27) {
      goto __dyc_dummy_label;
    }
    sh_offset += len;
    section = section->next;
  }
  __dyc_dummy_label:  ;
  __dyc_printpre_byte(ehdr_size);
  __dyc_printpre_byte(shdr_size);
  __dyc_printpre_byte(shdr_offset);
  __dyc_printpre_byte(sh_offset);
  __dyc_printpre_byte(first_sh_size);
  __dyc_printpre_byte(first_sh_link);
  __dyc_printpre_byte(sh_name);
  __dyc_printpre_byte(zero);
  __dyc_printpre_byte(secnum);
  __dyc_printpre_byte(sh_size);
  __dyc_printpre_byte(sh_type);
  __dyc_printpre_byte(sh_flags);
  __dyc_printpre_byte(sh_addr);
  __dyc_printpre_byte(sh_link);
  __dyc_printpre_byte(sh_info);
  __dyc_printpre_byte(sh_entsize);
  __dyc_printpre_byte(write___0);
  __dyc_printpre_byte(tmp___23);
  __dyc_printpre_byte(len);
}
}
