#include "../../include/dycfoo.h"
#include "../../include/simple-object-elf.i.hd.c.h"
void __dyc_foo(void) 
{ unsigned char ei_class ;
  size_t shdr_size ;
  unsigned char *shdrs ;
  unsigned int i ;
  unsigned int *symtab_indices_shndx ;
  unsigned int *shndx_table ;
  unsigned char *sidxhdr ;
  off_t sidxoff ;
  ulong_type tmp___62 ;
  size_t sidxsz ;
  ulong_type tmp___65 ;
  unsigned int shndx_type ;
  unsigned int tmp___68 ;
  void *tmp___69 ;
  ulong_type __dyc_funcallvar_49 ;
  ulong_type __dyc_funcallvar_50 ;
  ulong_type __dyc_funcallvar_51 ;
  ulong_type __dyc_funcallvar_52 ;
  unsigned int __dyc_funcallvar_53 ;
  unsigned int __dyc_funcallvar_54 ;
  void *__dyc_funcallvar_55 ;

  {
  ei_class = (unsigned char )__dyc_readpre_byte();
  shdr_size = (size_t )__dyc_readpre_byte();
  shdrs = (unsigned char *)__dyc_read_ptr__char();
  i = (unsigned int )__dyc_readpre_byte();
  symtab_indices_shndx = (unsigned int *)__dyc_read_ptr__int();
  __dyc_funcallvar_49 = (ulong_type )__dyc_readpre_byte();
  __dyc_funcallvar_50 = (ulong_type )__dyc_readpre_byte();
  __dyc_funcallvar_51 = (ulong_type )__dyc_readpre_byte();
  __dyc_funcallvar_52 = (ulong_type )__dyc_readpre_byte();
  __dyc_funcallvar_53 = (unsigned int )__dyc_readpre_byte();
  __dyc_funcallvar_54 = (unsigned int )__dyc_readpre_byte();
  __dyc_funcallvar_55 = __dyc_read_ptr__void();
  shndx_table = 0;
  sidxhdr = 0;
  sidxoff = 0;
  tmp___62 = 0;
  sidxsz = 0;
  tmp___65 = 0;
  shndx_type = 0;
  tmp___68 = 0;
  tmp___69 = 0;
  if (*(symtab_indices_shndx + (i - 1U)) != 0U) {
    sidxhdr = shdrs + (size_t )*(symtab_indices_shndx + (i - 1U)) * shdr_size;
    if ((int )ei_class == 1) {
      {
      tmp___62 = __dyc_funcallvar_49;
      }
    } else {
      {
      tmp___62 = __dyc_funcallvar_50;
      }
    }
    sidxoff = (off_t )tmp___62;
    if ((int )ei_class == 1) {
      {
      tmp___65 = __dyc_funcallvar_51;
      }
    } else {
      {
      tmp___65 = __dyc_funcallvar_52;
      }
    }
    sidxsz = tmp___65;
    if ((int )ei_class == 1) {
      {
      tmp___68 = __dyc_funcallvar_53;
      }
    } else {
      {
      tmp___68 = __dyc_funcallvar_54;
      }
    }
    shndx_type = tmp___68;
    if (shndx_type != 18U) {
      goto __dyc_dummy_label;
    }
    {
    tmp___69 = __dyc_funcallvar_55;
    shndx_table = (unsigned int *)((char *)tmp___69);

    }
  }
  __dyc_dummy_label:  ;
  __dyc_print_ptr__int(shndx_table);
  __dyc_print_ptr__char(sidxhdr);
  __dyc_printpre_byte(sidxoff);
  __dyc_printpre_byte(sidxsz);
}
}
