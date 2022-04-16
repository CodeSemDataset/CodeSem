#include "../../include/dycfoo.h"
#include "../../include/simple-object-elf.i.hd.c.h"
void __dyc_foo(void) 
{ unsigned char ei_class ;
  size_t shdr_size ;
  unsigned int shnum ;
  unsigned char *shdrs ;
  unsigned int i ;
  int *pfnret ;
  unsigned int *symtab_indices_shndx ;
  off_t length___0 ;
  unsigned char *buf___0 ;
  unsigned int entsize___0 ;
  ulong_type tmp___59 ;
  size_t prevailing_name_idx ;
  unsigned char *ent___0 ;
  unsigned int *shndx_table ;
  unsigned char *sidxhdr ;
  off_t sidxoff ;
  ulong_type tmp___62 ;
  size_t sidxsz ;
  ulong_type tmp___65 ;
  unsigned int shndx_type ;
  unsigned int tmp___68 ;
  void *tmp___69 ;
  unsigned int st_shndx ;
  int tmp___72 ;
  unsigned short tmp___73 ;
  unsigned short tmp___74 ;
  unsigned char *st_info ;
  unsigned char *st_other ;
  unsigned int tmp___77 ;
  unsigned int tmp___78 ;
  ulong_type __dyc_funcallvar_49 ;
  ulong_type __dyc_funcallvar_50 ;
  ulong_type __dyc_funcallvar_51 ;
  ulong_type __dyc_funcallvar_52 ;
  unsigned int __dyc_funcallvar_53 ;
  unsigned int __dyc_funcallvar_54 ;
  void *__dyc_funcallvar_55 ;
  unsigned short __dyc_funcallvar_56 ;
  unsigned short __dyc_funcallvar_57 ;
  unsigned int __dyc_funcallvar_58 ;
  unsigned int __dyc_funcallvar_59 ;
  unsigned int __dyc_funcallvar_60 ;

  {
  ei_class = (unsigned char )__dyc_readpre_byte();
  shdr_size = (size_t )__dyc_readpre_byte();
  shnum = (unsigned int )__dyc_readpre_byte();
  shdrs = (unsigned char *)__dyc_read_ptr__char();
  i = (unsigned int )__dyc_readpre_byte();
  pfnret = __dyc_read_ptr__int();
  symtab_indices_shndx = (unsigned int *)__dyc_read_ptr__int();
  length___0 = (off_t )__dyc_readpre_byte();
  buf___0 = (unsigned char *)__dyc_read_ptr__char();
  tmp___59 = (ulong_type )__dyc_readpre_byte();
  __dyc_funcallvar_49 = (ulong_type )__dyc_readpre_byte();
  __dyc_funcallvar_50 = (ulong_type )__dyc_readpre_byte();
  __dyc_funcallvar_51 = (ulong_type )__dyc_readpre_byte();
  __dyc_funcallvar_52 = (ulong_type )__dyc_readpre_byte();
  __dyc_funcallvar_53 = (unsigned int )__dyc_readpre_byte();
  __dyc_funcallvar_54 = (unsigned int )__dyc_readpre_byte();
  __dyc_funcallvar_55 = __dyc_read_ptr__void();
  __dyc_funcallvar_56 = (unsigned short )__dyc_readpre_byte();
  __dyc_funcallvar_57 = (unsigned short )__dyc_readpre_byte();
  __dyc_funcallvar_58 = (unsigned int )__dyc_readpre_byte();
  __dyc_funcallvar_59 = (unsigned int )__dyc_readpre_byte();
  __dyc_funcallvar_60 = (unsigned int )__dyc_readpre_byte();
  entsize___0 = 0;
  prevailing_name_idx = 0;
  ent___0 = 0;
  shndx_table = 0;
  sidxhdr = 0;
  sidxoff = 0;
  tmp___62 = 0;
  sidxsz = 0;
  tmp___65 = 0;
  shndx_type = 0;
  tmp___68 = 0;
  tmp___69 = 0;
  st_shndx = 0;
  tmp___72 = 0;
  tmp___73 = 0;
  tmp___74 = 0;
  st_info = 0;
  st_other = 0;
  tmp___77 = 0;
  tmp___78 = 0;
  entsize___0 = (unsigned int )tmp___59;
  prevailing_name_idx = (size_t )0;
  shndx_table = (unsigned int *)((void *)0);
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
  ent___0 = buf___0;
  while (1) {
    while_15_continue:  ;
    if (! ((unsigned long )ent___0 < (unsigned long )(buf___0 + length___0))) {
      goto __dyc_dummy_label;
    }
    if ((int )ei_class == 1) {
      {
      tmp___73 = __dyc_funcallvar_56;
      tmp___72 = (int )tmp___73;
      }
    } else {
      {
      tmp___74 = __dyc_funcallvar_57;
      tmp___72 = (int )tmp___74;
      }
    }
    st_shndx = (unsigned int )tmp___72;
    if ((int )ei_class == 1) {
      st_info = & ((Elf32_External_Sym *)ent___0)->st_info;
      st_other = & ((Elf32_External_Sym *)ent___0)->st_other;
    } else {
      st_info = & ((Elf64_External_Sym *)ent___0)->st_info;
      st_other = & ((Elf64_External_Sym *)ent___0)->st_other;
    }
    if (st_shndx == 65535U) {
      {
      st_shndx = __dyc_funcallvar_58;
      }
    }
    if (st_shndx != 65522U) {
      if (st_shndx != 0U) {
        if (st_shndx < shnum) {
          if (! (*(pfnret + (st_shndx - 1U)) == -1)) {
            goto _L___1;
          }
        } else {
          goto _L___1;
        }
      } else {
        _L___1:  
        if ((int )*st_info >> 4 == 2) {
          if ((int )*st_other == 2) {
            if ((int )ei_class == 1) {
              {
              tmp___77 = __dyc_funcallvar_59;
              prevailing_name_idx = (unsigned long )tmp___77;
              }
            } else {
              {
              tmp___78 = __dyc_funcallvar_60;
              prevailing_name_idx = (unsigned long )tmp___78;
              }
            }
            goto __dyc_dummy_label;
          }
        }
      }
    }
    ent___0 += entsize___0;
  }
  __dyc_dummy_label:  ;
  __dyc_printpre_byte(entsize___0);
  __dyc_printpre_byte(prevailing_name_idx);
  __dyc_print_ptr__int(shndx_table);
  __dyc_print_ptr__char(sidxhdr);
  __dyc_printpre_byte(sidxoff);
  __dyc_printpre_byte(sidxsz);
  __dyc_print_ptr__char(st_info);
  __dyc_print_ptr__char(st_other);
}
}
