#include "../../include/dycfoo.h"
#include "../../include/simple-object-mach-o.i.hd.c.h"
void __dyc_foo(void) 
{ void (*simple_object_set_big_32)(unsigned char *buf , unsigned int val ) ;
  void (*simple_object_set_little_32)(unsigned char *buf , unsigned int val ) ;
  struct simple_object_mach_o_attributes *attrs ;
  void (*set_32)(unsigned char * , unsigned int  ) ;
  size_t hdrsize ;
  size_t seghdrsize ;
  size_t sechdrsize ;
  size_t cmdsize ;
  size_t offset ;
  size_t sechdr_offset ;
  size_t secaddr ;
  unsigned int name_offset ;
  simple_object_write_section *section ;
  unsigned char hdrbuf[sizeof(struct mach_o_segment_command_64 )] ;
  unsigned char *hdr ;
  size_t nsects_in ;
  unsigned int *index___0 ;
  char *snames ;
  unsigned int sect ;
  void *tmp ;
  size_t tmp___0 ;
  size_t tmp___1 ;
  void *tmp___2 ;
  size_t mask ;
  size_t new_offset ;
  size_t secsize ;
  struct simple_object_write_section_buffer *buffer ;
  size_t write___0 ;
  int tmp___3 ;
  int tmp___4 ;
  char *comma ;
  char *tmp___6 ;
  int len ;
  int tmp___7 ;
  size_t secsize___0 ;
  unsigned int i ;
  int tmp___8 ;
  int tmp___9 ;
  int tmp___10 ;
  int tmp___11 ;
  int tmp___12 ;
  simple_object_write *sobj ;
  size_t *nsects ;
  void *__dyc_funcallvar_1 ;
  size_t __dyc_funcallvar_2 ;
  size_t __dyc_funcallvar_3 ;
  void *__dyc_funcallvar_4 ;
  int __dyc_funcallvar_5 ;
  int __dyc_funcallvar_6 ;
  char *__dyc_funcallvar_7 ;
  int __dyc_funcallvar_8 ;
  int __dyc_funcallvar_9 ;
  int __dyc_funcallvar_10 ;
  int __dyc_funcallvar_11 ;
  int __dyc_funcallvar_12 ;
  int __dyc_funcallvar_13 ;

  {
  sobj = __dyc_read_ptr__typdef_simple_object_write();
  nsects = __dyc_read_ptr__typdef_size_t();
  __dyc_funcallvar_1 = __dyc_read_ptr__void();
  __dyc_funcallvar_2 = (size_t )__dyc_readpre_byte();
  __dyc_funcallvar_3 = (size_t )__dyc_readpre_byte();
  __dyc_funcallvar_4 = __dyc_read_ptr__void();
  __dyc_funcallvar_5 = __dyc_readpre_byte();
  __dyc_funcallvar_6 = __dyc_readpre_byte();
  __dyc_funcallvar_7 = __dyc_read_ptr__char();
  __dyc_funcallvar_8 = __dyc_readpre_byte();
  __dyc_funcallvar_9 = __dyc_readpre_byte();
  __dyc_funcallvar_10 = __dyc_readpre_byte();
  __dyc_funcallvar_11 = __dyc_readpre_byte();
  __dyc_funcallvar_12 = __dyc_readpre_byte();
  __dyc_funcallvar_13 = __dyc_readpre_byte();
  attrs = 0;
  set_32 = 0;
  hdrsize = 0;
  seghdrsize = 0;
  sechdrsize = 0;
  cmdsize = 0;
  offset = 0;
  sechdr_offset = 0;
  secaddr = 0;
  name_offset = 0;
  section = 0;
  hdr = 0;
  nsects_in = 0;
  index___0 = 0;
  snames = 0;
  sect = 0;
  tmp = 0;
  tmp___0 = 0;
  tmp___1 = 0;
  tmp___2 = 0;
  mask = 0;
  new_offset = 0;
  secsize = 0;
  buffer = 0;
  write___0 = 0;
  tmp___3 = 0;
  tmp___4 = 0;
  comma = 0;
  tmp___6 = 0;
  len = 0;
  tmp___7 = 0;
  secsize___0 = 0;
  i = 0;
  tmp___8 = 0;
  tmp___9 = 0;
  tmp___10 = 0;
  tmp___11 = 0;
  tmp___12 = 0;
  attrs = (struct simple_object_mach_o_attributes *)sobj->data;
  if (attrs->is_big_endian) {
    set_32 = & simple_object_set_big_32;
  } else {
    set_32 = & simple_object_set_little_32;
  }
  if (attrs->magic == 4277009102U) {
    hdrsize = sizeof(struct mach_o_header_32 );
    seghdrsize = sizeof(struct mach_o_segment_command_32 );
    sechdrsize = sizeof(struct mach_o_section_32 );
  } else {
    hdrsize = sizeof(struct mach_o_header_64 );
    seghdrsize = sizeof(struct mach_o_segment_command_64 );
    sechdrsize = sizeof(struct mach_o_section_64 );
  }
  name_offset = 0U;
  nsects_in = 0UL;
  *nsects = nsects_in;
  section = sobj->sections;
  while (1) {
    while_4_continue:  ;
    if (! ((unsigned long )section != (unsigned long )((void *)0))) {
      goto while_4_break;
    }
    nsects_in ++;
    section = section->next;
  }
  while_4_break:  ;
  if ((unsigned long )sobj->segment_name != (unsigned long )((void *)0)) {
    {
    *nsects = 3UL;
    tmp = __dyc_funcallvar_1;
    index___0 = (unsigned int *)tmp;
    section = sobj->sections;
    sect = 0U;
    }
    {
    while (1) {
      while_5_continue:  ;
      if (! ((unsigned long )section != (unsigned long )((void *)0))) {
        goto while_5_break;
      }
      {
      *(index___0 + (sect * 4U + 2U)) = name_offset;
      tmp___0 = __dyc_funcallvar_2;
      *(index___0 + (sect * 4U + 3U)) = (unsigned int )(tmp___0 + 1UL);
      tmp___1 = __dyc_funcallvar_3;
      name_offset = (unsigned int )((size_t )name_offset + (tmp___1 + 1UL));
      section = section->next;
      sect ++;
      }
    }
    while_5_break:  ;
    }
    {
    tmp___2 = __dyc_funcallvar_4;
    snames = (char *)tmp___2;
    }
  } else {
    *nsects = nsects_in;
    index___0 = (unsigned int *)((void *)0);
    snames = (char *)((void *)0);
  }
  sechdr_offset = hdrsize + seghdrsize;
  cmdsize = seghdrsize + *nsects * sechdrsize;
  offset = hdrsize + cmdsize;
  secaddr = 0UL;
  section = sobj->sections;
  sect = 0U;
  while (1) {
    while_6_continue:  ;
    if (! ((unsigned long )section != (unsigned long )((void *)0))) {
      goto while_6_break;
    }
    mask = (unsigned long )((1U << section->align) - 1U);
    new_offset = offset + mask;
    new_offset &= ~ mask;
    {
    while (1) {
      while_7_continue:  ;
      if (! (new_offset > offset)) {
        goto while_7_break;
      }
      {

      write___0 = new_offset - offset;
      }
      if (write___0 > sizeof(unsigned char [16])) {
        write___0 = sizeof(unsigned char [16]);
      }
      {
      tmp___3 = __dyc_funcallvar_5;
      }
      if (! tmp___3) {
        goto __dyc_dummy_label;
      }
      offset += write___0;
    }
    while_7_break:  ;
    }
    secsize = 0UL;
    buffer = section->buffers;
    {
    while (1) {
      while_8_continue:  ;
      if (! ((unsigned long )buffer != (unsigned long )((void *)0))) {
        goto while_8_break;
      }
      {
      tmp___4 = __dyc_funcallvar_6;
      }
      if (! tmp___4) {
        goto __dyc_dummy_label;
      }
      secsize += buffer->size;
      buffer = buffer->next;
    }
    while_8_break:  ;
    }
    if ((unsigned long )sobj->segment_name != (unsigned long )((void *)0)) {
      {
      *(index___0 + sect * 4U) = (unsigned int )offset;
      *(index___0 + (sect * 4U + 1U)) = (unsigned int )secsize;

      }
    } else {
      {


      tmp___6 = __dyc_funcallvar_7;
      comma = tmp___6;
      }
      if ((unsigned long )comma != (unsigned long )((void *)0)) {
        len = comma - section->name;
        if (len > 16) {
          len = 16;
        } else {
          len = len;
        }
        {


        }
      } else {
        {

        }
      }
      {
      tmp___7 = __dyc_funcallvar_8;
      }
      if (! tmp___7) {
        goto __dyc_dummy_label;
      }
      sechdr_offset += sechdrsize;
    }
    offset += secsize;
    secaddr += secsize;
    section = section->next;
    sect ++;
  }
  while_6_break:  ;
  if ((unsigned long )sobj->segment_name != (unsigned long )((void *)0)) {
    {
    secsize___0 = offset - (size_t )*(index___0 + 0);
    tmp___8 = __dyc_funcallvar_9;
    }
    if (! tmp___8) {
      goto __dyc_dummy_label;
    }
    i = 1U;
    {
    while (1) {
      while_9_continue:  ;
      if (! ((size_t )i < nsects_in)) {
        goto while_9_break;
      }
      *(index___0 + 4U * i) -= *(index___0 + 0);
      i ++;
    }
    while_9_break:  ;
    }
    {
    *(index___0 + 0) = 0U;
    sechdr_offset += sechdrsize;
    tmp___9 = __dyc_funcallvar_10;
    }
    if (! tmp___9) {
      goto __dyc_dummy_label;
    }
    {
    tmp___10 = __dyc_funcallvar_11;
    }
    if (! tmp___10) {
      goto __dyc_dummy_label;
    }
    {
    sechdr_offset += sechdrsize;
    secaddr += (size_t )name_offset;
    offset += (size_t )name_offset;
    offset += 3UL;
    offset &= 0xfffffffcUL;
    tmp___11 = __dyc_funcallvar_12;
    }
    if (! tmp___11) {
      goto __dyc_dummy_label;
    }
    {
    tmp___12 = __dyc_funcallvar_13;
    }
    if (! tmp___12) {
      goto __dyc_dummy_label;
    }
    {


    }
  }

  hdr = hdrbuf;
  __dyc_dummy_label:  ;
  __dyc_print_ptr__fun_name_is_not_here(set_32);
  __dyc_printpre_byte(offset);
  __dyc_printpre_byte(sechdr_offset);
  __dyc_printpre_byte(secaddr);
  __dyc_printpre_byte(name_offset);
  __dyc_print_ptr__char(hdr);
  __dyc_printpre_byte(nsects_in);
  __dyc_print_ptr__int(index___0);
  __dyc_print_ptr__char(snames);
  __dyc_printpre_byte(sect);
  __dyc_printpre_byte(secsize);
  __dyc_printpre_byte(write___0);
  __dyc_printpre_byte(len);
  __dyc_printpre_byte(secsize___0);
}
}
