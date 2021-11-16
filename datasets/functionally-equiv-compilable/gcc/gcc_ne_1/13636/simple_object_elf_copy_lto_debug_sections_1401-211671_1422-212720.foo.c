#include "../../include/dycfoo.h"
#include "../../include/simple-object-elf.i.hd.c.h"
void __dyc_foo(void) 
{ unsigned char ei_class ;
  unsigned int shnum ;
  int *pfnret ;
  off_t length___0 ;
  unsigned char *buf___0 ;
  size_t prevailing_name_idx ;
  unsigned char *ent___0 ;
  unsigned int st_shndx ;
  int tmp___72 ;
  unsigned short tmp___73 ;
  unsigned short tmp___74 ;
  unsigned char *st_info ;
  unsigned char *st_other ;
  unsigned int tmp___77 ;
  unsigned int tmp___78 ;
  unsigned short __dyc_funcallvar_56 ;
  unsigned short __dyc_funcallvar_57 ;
  unsigned int __dyc_funcallvar_58 ;
  unsigned int __dyc_funcallvar_59 ;
  unsigned int __dyc_funcallvar_60 ;

  {
  ei_class = (unsigned char )__dyc_readpre_byte();
  shnum = (unsigned int )__dyc_readpre_byte();
  pfnret = __dyc_read_ptr__int();
  length___0 = (off_t )__dyc_readpre_byte();
  buf___0 = (unsigned char *)__dyc_read_ptr__char();
  ent___0 = (unsigned char *)__dyc_read_ptr__char();
  __dyc_funcallvar_56 = (unsigned short )__dyc_readpre_byte();
  __dyc_funcallvar_57 = (unsigned short )__dyc_readpre_byte();
  __dyc_funcallvar_58 = (unsigned int )__dyc_readpre_byte();
  __dyc_funcallvar_59 = (unsigned int )__dyc_readpre_byte();
  __dyc_funcallvar_60 = (unsigned int )__dyc_readpre_byte();
  prevailing_name_idx = 0;
  st_shndx = 0;
  tmp___72 = 0;
  tmp___73 = 0;
  tmp___74 = 0;
  st_info = 0;
  st_other = 0;
  tmp___77 = 0;
  tmp___78 = 0;
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
  __dyc_dummy_label:  ;
  __dyc_printpre_byte(prevailing_name_idx);
}
}
