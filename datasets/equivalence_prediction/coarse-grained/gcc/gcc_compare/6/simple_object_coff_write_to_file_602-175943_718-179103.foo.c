#include "../../include/dycfoo.h"
#include "../../include/simple-object-coff.i.hd.c.h"
void __dyc_foo(void) 
{ void (*simple_object_set_big_16)(unsigned char *buf , unsigned short val ) ;
  void (*simple_object_set_little_16)(unsigned char *buf , unsigned short val ) ;
  void (*simple_object_set_big_32)(unsigned char *buf , unsigned int val ) ;
  void (*simple_object_set_little_32)(unsigned char *buf , unsigned int val ) ;
  struct simple_object_coff_attributes *attrs ;
  unsigned int nscns ;
  simple_object_write_section *section ;
  off_t scnhdr_offset ;
  size_t symtab_offset ;
  unsigned int nsyms ;
  size_t offset ;
  size_t name_offset ;
  char const   *source_filename ;
  size_t sflen ;
  union __anonunion_syms_35 syms[2] ;
  void (*set_16)(unsigned char * , unsigned short  ) ;
  void (*set_32)(unsigned char * , unsigned int  ) ;
  size_t mask ;
  size_t new_offset ;
  size_t scnsize ;
  struct simple_object_write_section_buffer *buffer ;
  size_t write___0 ;
  int tmp ;
  int tmp___0 ;
  int tmp___1 ;
  int tmp___2 ;
  size_t tmp___3 ;
  int tmp___4 ;
  simple_object_write *sobj ;
  int __dyc_funcallvar_1 ;
  int __dyc_funcallvar_2 ;
  int __dyc_funcallvar_3 ;
  size_t __dyc_funcallvar_4 ;
  int __dyc_funcallvar_5 ;
  size_t __dyc_funcallvar_6 ;
  int __dyc_funcallvar_7 ;

  {
  sobj = __dyc_read_ptr__typdef_simple_object_write();
  __dyc_funcallvar_1 = __dyc_readpre_byte();
  __dyc_funcallvar_2 = __dyc_readpre_byte();
  __dyc_funcallvar_3 = __dyc_readpre_byte();
  __dyc_funcallvar_4 = (size_t )__dyc_readpre_byte();
  __dyc_funcallvar_5 = __dyc_readpre_byte();
  __dyc_funcallvar_6 = (size_t )__dyc_readpre_byte();
  __dyc_funcallvar_7 = __dyc_readpre_byte();
  attrs = 0;
  nscns = 0;
  section = 0;
  scnhdr_offset = 0;
  symtab_offset = 0;
  nsyms = 0;
  offset = 0;
  name_offset = 0;
  source_filename = 0;
  sflen = 0;
  set_16 = 0;
  set_32 = 0;
  mask = 0;
  new_offset = 0;
  scnsize = 0;
  buffer = 0;
  write___0 = 0;
  tmp = 0;
  tmp___0 = 0;
  tmp___1 = 0;
  tmp___2 = 0;
  tmp___3 = 0;
  tmp___4 = 0;
  attrs = (struct simple_object_coff_attributes *)sobj->data;
  source_filename = "fake";
  if (attrs->is_big_endian) {
    set_16 = & simple_object_set_big_16;
  } else {
    set_16 = & simple_object_set_little_16;
  }
  if (attrs->is_big_endian) {
    set_32 = & simple_object_set_big_32;
  } else {
    set_32 = & simple_object_set_little_32;
  }
  nscns = 0U;
  section = sobj->sections;
  while (1) {
    while_2_continue:  ;
    if (! ((unsigned long )section != (unsigned long )((void *)0))) {
      goto while_2_break;
    }
    nscns ++;
    section = section->next;
  }
  while_2_break:  ;
  scnhdr_offset = (long )sizeof(struct external_filehdr );
  offset = (unsigned long )scnhdr_offset + (unsigned long )nscns * sizeof(struct external_scnhdr );
  name_offset = 4UL;
  section = sobj->sections;
  while (1) {
    while_3_continue:  ;
    if (! ((unsigned long )section != (unsigned long )((void *)0))) {
      goto while_3_break;
    }
    mask = (unsigned long )((1U << section->align) - 1U);
    new_offset = offset & mask;
    new_offset &= ~ mask;
    {
    while (1) {
      while_4_continue:  ;
      if (! (new_offset > offset)) {
        goto while_4_break;
      }
      {

      write___0 = new_offset - offset;
      }
      if (write___0 > sizeof(unsigned char [16])) {
        write___0 = sizeof(unsigned char [16]);
      }
      {
      tmp = __dyc_funcallvar_1;
      }
      if (! tmp) {
        goto __dyc_dummy_label;
      }
    }
    while_4_break:  ;
    }
    scnsize = 0UL;
    buffer = section->buffers;
    {
    while (1) {
      while_5_continue:  ;
      if (! ((unsigned long )buffer != (unsigned long )((void *)0))) {
        goto while_5_break;
      }
      {
      tmp___0 = __dyc_funcallvar_2;
      }
      if (! tmp___0) {
        goto __dyc_dummy_label;
      }
      scnsize += buffer->size;
      buffer = buffer->next;
    }
    while_5_break:  ;
    }
    {
    tmp___1 = __dyc_funcallvar_3;
    }
    if (! tmp___1) {
      goto __dyc_dummy_label;
    }
    scnhdr_offset = (long )((unsigned long )scnhdr_offset + sizeof(struct external_scnhdr ));
    offset += scnsize;
    section = section->next;
  }
  while_3_break:  ;
  offset += offset & 1UL;
  nsyms = 2U * (nscns + 1U);
  symtab_offset = offset;
  offset += (unsigned long )nsyms * sizeof(struct external_syment );




  syms[0].sym.e_sclass[0] = (unsigned char)103;
  syms[0].sym.e_numaux[0] = (unsigned char)1;
  sflen = __dyc_funcallvar_4;
  if (sflen <= 18UL) {
    {

    }
  } else {
    {

    tmp___2 = __dyc_funcallvar_5;
    }
    if (! tmp___2) {
      goto __dyc_dummy_label;
    }
    {
    tmp___3 = __dyc_funcallvar_6;
    name_offset += tmp___3 + 1UL;
    }
  }
  tmp___4 = __dyc_funcallvar_7;
  if (tmp___4) {

  }
  __dyc_dummy_label:  ;
  __dyc_printpre_byte(scnhdr_offset);
  __dyc_printpre_byte(symtab_offset);
  __dyc_printpre_byte(offset);
  __dyc_printpre_byte(name_offset);
  __dyc_print_ptr__char(source_filename);
  __dyc_print_ptr__fun_name_is_not_here(set_16);
  __dyc_print_ptr__fun_name_is_not_here(set_32);
  __dyc_printpre_byte(scnsize);
  __dyc_printpre_byte(write___0);
}
}
