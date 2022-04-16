#include "../../include/dycfoo.h"
#include "../../include/simple-object-elf.i.hd.c.h"
void __dyc_foo(void) 
{ unsigned char ei_class ;
  unsigned int shnum ;
  int *pfnret ;
  unsigned int sh_type___1 ;
  off_t length___0 ;
  unsigned char *buf___0 ;
  unsigned int entsize___0 ;
  unsigned char *ent___0 ;
  unsigned int st_shndx___0 ;
  int tmp___81 ;
  unsigned short tmp___82 ;
  unsigned short tmp___83 ;
  unsigned int raw_st_shndx ;
  unsigned char *st_info___0 ;
  unsigned char *st_other___0 ;
  int discard ;
  int bind ;
  int other ;
  unsigned char *ent___1 ;
  unsigned char *dst ;
  unsigned int shndx ;
  unsigned int tmp___84 ;
  unsigned short __dyc_funcallvar_61 ;
  unsigned short __dyc_funcallvar_62 ;
  unsigned int __dyc_funcallvar_63 ;
  unsigned int __dyc_funcallvar_64 ;

  {
  ei_class = (unsigned char )__dyc_readpre_byte();
  shnum = (unsigned int )__dyc_readpre_byte();
  pfnret = __dyc_read_ptr__int();
  sh_type___1 = (unsigned int )__dyc_readpre_byte();
  length___0 = (off_t )__dyc_readpre_byte();
  buf___0 = (unsigned char *)__dyc_read_ptr__char();
  entsize___0 = (unsigned int )__dyc_readpre_byte();
  ent___0 = (unsigned char *)__dyc_read_ptr__char();
  __dyc_funcallvar_61 = (unsigned short )__dyc_readpre_byte();
  __dyc_funcallvar_62 = (unsigned short )__dyc_readpre_byte();
  __dyc_funcallvar_63 = (unsigned int )__dyc_readpre_byte();
  __dyc_funcallvar_64 = (unsigned int )__dyc_readpre_byte();
  st_shndx___0 = 0;
  tmp___81 = 0;
  tmp___82 = 0;
  tmp___83 = 0;
  raw_st_shndx = 0;
  st_info___0 = 0;
  st_other___0 = 0;
  discard = 0;
  bind = 0;
  other = 0;
  ent___1 = 0;
  dst = 0;
  shndx = 0;
  tmp___84 = 0;
  while (1) {
    while_16_continue:  ;
    if (! ((unsigned long )ent___0 < (unsigned long )(buf___0 + length___0))) {
      goto while_16_break;
    }
    if ((int )ei_class == 1) {
      {
      tmp___82 = __dyc_funcallvar_61;
      tmp___81 = (int )tmp___82;
      }
    } else {
      {
      tmp___83 = __dyc_funcallvar_62;
      tmp___81 = (int )tmp___83;
      }
    }
    st_shndx___0 = (unsigned int )tmp___81;
    raw_st_shndx = st_shndx___0;
    discard = 0;
    if ((int )ei_class == 1) {
      st_info___0 = & ((Elf32_External_Sym *)ent___0)->st_info;
      st_other___0 = & ((Elf32_External_Sym *)ent___0)->st_other;
    } else {
      st_info___0 = & ((Elf64_External_Sym *)ent___0)->st_info;
      st_other___0 = & ((Elf64_External_Sym *)ent___0)->st_other;
    }
    if (st_shndx___0 == 65535U) {
      {
      st_shndx___0 = __dyc_funcallvar_63;
      }
    }
    if (st_shndx___0 == 65522U) {
      discard = 1;
    } else {
      if (st_shndx___0 != 0U) {
        if (st_shndx___0 < shnum) {
          if (*(pfnret + (st_shndx___0 - 1U)) == -1) {
            discard = 1;
          } else {
            goto _L___3;
          }
        } else {
          goto _L___3;
        }
      } else {
        _L___3:  
        if (st_shndx___0 == 0U) {
          if ((int )*st_info___0 >> 4 == 1) {
            discard = 1;
          }
        }
      }
    }
    if (discard) {
      bind = (int )*st_info___0 >> 4;
      other = 0;
      if (bind == 0) {
        if ((int )ei_class == 1) {
          {

          }
        } else {
          {

          }
        }
        if ((int )ei_class == 1) {
          {

          }
        } else {
          {

          }
        }
      } else {
        bind = 2;
        other = 2;
        if ((int )ei_class == 1) {
          {

          }
        } else {
          {

          }
        }
        if ((int )ei_class == 1) {
          {

          }
        } else {
          {

          }
        }
      }
      *st_other___0 = (unsigned char )other;
      *st_info___0 = (unsigned char )(bind << 4);
      if ((int )ei_class == 1) {
        {

        }
      } else {
        {

        }
      }
      if ((int )ei_class == 1) {
        {

        }
      } else {
        {

        }
      }
    } else {
      if (raw_st_shndx < 65280U) {
        goto _L___4;
      } else {
        if (raw_st_shndx == 65535U) {
          _L___4:  
          if ((int )ei_class == 1) {
            {

            }
          } else {
            {

            }
          }
        }
      }
    }
    ent___0 += entsize___0;
  }
  while_16_break:  ;

  if (sh_type___1 == 17U) {
    ent___1 = buf___0 + 4;
    dst = ent___1;
    {
    while (1) {
      while_17_continue:  ;
      if (! ((unsigned long )ent___1 < (unsigned long )(buf___0 + length___0))) {
        goto while_17_break;
      }
      {
      tmp___84 = __dyc_funcallvar_64;
      shndx = tmp___84;
      }
      if (! (*(pfnret + (shndx - 1U)) == -1)) {
        {

        dst += 4;
        }
      }
      ent___1 += 4;
    }
    while_17_break:  ;
    }
    length___0 = (long )(dst - buf___0);
  }
  __dyc_dummy_label:  ;
  __dyc_printpre_byte(length___0);
  __dyc_printpre_byte(raw_st_shndx);
  __dyc_print_ptr__char(st_info___0);
  __dyc_print_ptr__char(st_other___0);
}
}
