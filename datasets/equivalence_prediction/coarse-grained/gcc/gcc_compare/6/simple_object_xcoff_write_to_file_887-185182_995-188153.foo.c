#include "../../include/dycfoo.h"
#include "../../include/simple-object-xcoff.i.hd.c.h"
void __dyc_foo(void) 
{ void (*simple_object_set_big_16)(unsigned char *buf , unsigned short val ) ;
  void (*simple_object_set_big_32)(unsigned char *buf , unsigned int val ) ;
  struct simple_object_xcoff_read *ocr ;
  int u64 ;
  unsigned int nscns ;
  unsigned int secnum ;
  simple_object_write_section *section ;
  off_t scnhdr_offset ;
  size_t symtab_offset ;
  off_t secsym_offset ;
  unsigned int nsyms ;
  size_t offset ;
  size_t name_offset ;
  char const   *source_filename ;
  size_t sflen ;
  union __anonunion_syms_50 syms[2] ;
  void (*set_16)(unsigned char * , unsigned short  ) ;
  void (*set_32)(unsigned char * , unsigned int  ) ;
  int tmp ;
  int tmp___0 ;
  size_t mask ;
  size_t new_offset ;
  size_t scnsize ;
  struct simple_object_write_section_buffer *buffer ;
  size_t write___0 ;
  int tmp___1 ;
  int tmp___2 ;
  int tmp___3 ;
  int tmp___4 ;
  int tmp___5 ;
  size_t tmp___6 ;
  int tmp___7 ;
  int tmp___8 ;
  size_t namelen ;
  size_t scnsize___0 ;
  struct simple_object_write_section_buffer *buffer___0 ;
  unsigned int tmp___9 ;
  int tmp___10 ;
  size_t tmp___11 ;
  size_t tmp___12 ;
  size_t tmp___13 ;
  int tmp___14 ;
  simple_object_write *sobj ;
  int __dyc_funcallvar_1 ;
  int __dyc_funcallvar_2 ;
  int __dyc_funcallvar_3 ;
  size_t __dyc_funcallvar_4 ;
  int __dyc_funcallvar_5 ;
  size_t __dyc_funcallvar_6 ;
  int __dyc_funcallvar_7 ;
  int __dyc_funcallvar_8 ;
  size_t __dyc_funcallvar_9 ;
  int __dyc_funcallvar_10 ;
  size_t __dyc_funcallvar_11 ;
  size_t __dyc_funcallvar_12 ;
  size_t __dyc_funcallvar_13 ;
  int __dyc_funcallvar_14 ;

  {
  sobj = __dyc_read_ptr__typdef_simple_object_write();
  __dyc_funcallvar_1 = __dyc_readpre_byte();
  __dyc_funcallvar_2 = __dyc_readpre_byte();
  __dyc_funcallvar_3 = __dyc_readpre_byte();
  __dyc_funcallvar_4 = (size_t )__dyc_readpre_byte();
  __dyc_funcallvar_5 = __dyc_readpre_byte();
  __dyc_funcallvar_6 = (size_t )__dyc_readpre_byte();
  __dyc_funcallvar_7 = __dyc_readpre_byte();
  __dyc_funcallvar_8 = __dyc_readpre_byte();
  __dyc_funcallvar_9 = (size_t )__dyc_readpre_byte();
  __dyc_funcallvar_10 = __dyc_readpre_byte();
  __dyc_funcallvar_11 = (size_t )__dyc_readpre_byte();
  __dyc_funcallvar_12 = (size_t )__dyc_readpre_byte();
  __dyc_funcallvar_13 = (size_t )__dyc_readpre_byte();
  __dyc_funcallvar_14 = __dyc_readpre_byte();
  ocr = 0;
  u64 = 0;
  nscns = 0;
  secnum = 0;
  section = 0;
  scnhdr_offset = 0;
  symtab_offset = 0;
  secsym_offset = 0;
  nsyms = 0;
  offset = 0;
  name_offset = 0;
  source_filename = 0;
  sflen = 0;
  set_16 = 0;
  set_32 = 0;
  tmp = 0;
  tmp___0 = 0;
  mask = 0;
  new_offset = 0;
  scnsize = 0;
  buffer = 0;
  write___0 = 0;
  tmp___1 = 0;
  tmp___2 = 0;
  tmp___3 = 0;
  tmp___4 = 0;
  tmp___5 = 0;
  tmp___6 = 0;
  tmp___7 = 0;
  tmp___8 = 0;
  namelen = 0;
  scnsize___0 = 0;
  buffer___0 = 0;
  tmp___9 = 0;
  tmp___10 = 0;
  tmp___11 = 0;
  tmp___12 = 0;
  tmp___13 = 0;
  tmp___14 = 0;
  ocr = (struct simple_object_xcoff_read *)sobj->data;
  u64 = (int )ocr->magic == 503;
  source_filename = "fake";
  set_16 = & simple_object_set_big_16;
  set_32 = & simple_object_set_big_32;
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
  if (u64) {
    tmp = 4;
  } else {
    tmp = 0;
  }
  scnhdr_offset = (long )(sizeof(struct external_filehdr ) - (unsigned long )tmp);
  if (u64) {
    tmp___0 = 68;
  } else {
    tmp___0 = 40;
  }
  offset = (unsigned long )(scnhdr_offset + (off_t )(nscns * (unsigned int )tmp___0));
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
      tmp___1 = __dyc_funcallvar_1;
      }
      if (! tmp___1) {
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
      tmp___2 = __dyc_funcallvar_2;
      }
      if (! tmp___2) {
        goto __dyc_dummy_label;
      }
      scnsize += buffer->size;
      buffer = buffer->next;
    }
    while_5_break:  ;
    }
    {
    tmp___3 = __dyc_funcallvar_3;
    }
    if (! tmp___3) {
      goto __dyc_dummy_label;
    }
    if (u64) {
      tmp___4 = 68;
    } else {
      tmp___4 = 40;
    }
    scnhdr_offset += (off_t )tmp___4;
    offset += scnsize;
    section = section->next;
  }
  while_3_break:  ;
  offset += offset & 1UL;
  nsyms = 2U * (nscns + 1U);
  symtab_offset = offset;
  offset += (size_t )(nsyms * 18U);

  if (! u64) {
    {

    }
  }


  syms[0].sym.n_sclass[0] = (unsigned char)103;
  syms[0].sym.n_numaux[0] = (unsigned char)1;
  sflen = __dyc_funcallvar_4;
  if (sflen <= 14UL) {
    {

    }
  } else {
    {

    tmp___5 = __dyc_funcallvar_5;
    }
    if (! tmp___5) {
      goto __dyc_dummy_label;
    }
    {
    tmp___6 = __dyc_funcallvar_6;
    name_offset += tmp___6 + 1UL;
    }
  }
  tmp___7 = __dyc_funcallvar_7;
  if (! tmp___7) {
    goto __dyc_dummy_label;
  }

  tmp___8 = __dyc_funcallvar_8;
  if (! tmp___8) {
    goto __dyc_dummy_label;
  }
  name_offset = 4UL;
  secsym_offset = (long )(symtab_offset + sizeof(union __anonunion_syms_50 [2]));


  syms[0].sym.n_sclass[0] = (unsigned char)3;
  syms[0].sym.n_numaux[0] = (unsigned char)1;
  secnum = 1U;
  section = sobj->sections;
  while (1) {
    while_6_continue:  ;
    if (! ((unsigned long )section != (unsigned long )((void *)0))) {
      goto __dyc_dummy_label;
    }
    {
    namelen = __dyc_funcallvar_9;
    tmp___9 = secnum;
    secnum ++;

    scnsize___0 = 0UL;
    buffer___0 = section->buffers;
    }
    {
    while (1) {
      while_7_continue:  ;
      if (! ((unsigned long )buffer___0 != (unsigned long )((void *)0))) {
        goto while_7_break;
      }
      scnsize___0 += buffer___0->size;
      buffer___0 = buffer___0->next;
    }
    while_7_break:  ;
    }
    {

    }
    if (namelen > 8UL) {
      {


      tmp___10 = __dyc_funcallvar_10;
      }
      if (! tmp___10) {
        goto __dyc_dummy_label;
      }
      name_offset += namelen + 1UL;
    } else {
      {
      tmp___11 = __dyc_funcallvar_11;

      tmp___12 = __dyc_funcallvar_12;
      tmp___13 = __dyc_funcallvar_13;

      }
    }
    {
    tmp___14 = __dyc_funcallvar_14;
    }
    if (! tmp___14) {
      goto __dyc_dummy_label;
    }
    secsym_offset = (long )((unsigned long )secsym_offset + sizeof(union __anonunion_syms_50 [2]));
    section = section->next;
  }
  __dyc_dummy_label:  ;
  __dyc_printpre_byte(secnum);
  __dyc_printpre_byte(scnhdr_offset);
  __dyc_printpre_byte(symtab_offset);
  __dyc_printpre_byte(secsym_offset);
  __dyc_printpre_byte(offset);
  __dyc_printpre_byte(name_offset);
  __dyc_print_ptr__char(source_filename);
  __dyc_print_ptr__fun_name_is_not_here(set_16);
  __dyc_print_ptr__fun_name_is_not_here(set_32);
  __dyc_printpre_byte(scnsize);
  __dyc_printpre_byte(write___0);
  __dyc_printpre_byte(scnsize___0);
  __dyc_printpre_byte(tmp___9);
  __dyc_printpre_byte(tmp___11);
  __dyc_printpre_byte(tmp___12);
  __dyc_printpre_byte(tmp___13);
}
}
