#include "../../include/dycfoo.h"
#include "../../include/simple-object-elf.i.hd.c.h"
void __dyc_foo(void) 
{ unsigned char ei_class ;
  unsigned int shnum ;
  int *pfnret ;
  unsigned int entsize___0 ;
  unsigned char *ent___0 ;
  unsigned int st_shndx___0 ;
  unsigned int raw_st_shndx ;
  unsigned char *st_info___0 ;
  unsigned char *st_other___0 ;
  int discard ;
  int bind ;
  int other ;
  unsigned int __dyc_funcallvar_63 ;

  {
  ei_class = (unsigned char )__dyc_readpre_byte();
  shnum = (unsigned int )__dyc_readpre_byte();
  pfnret = __dyc_read_ptr__int();
  entsize___0 = (unsigned int )__dyc_readpre_byte();
  ent___0 = (unsigned char *)__dyc_read_ptr__char();
  st_shndx___0 = (unsigned int )__dyc_readpre_byte();
  raw_st_shndx = (unsigned int )__dyc_readpre_byte();
  st_info___0 = (unsigned char *)__dyc_read_ptr__char();
  st_other___0 = (unsigned char *)__dyc_read_ptr__char();
  discard = __dyc_readpre_byte();
  __dyc_funcallvar_63 = (unsigned int )__dyc_readpre_byte();
  bind = 0;
  other = 0;
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
  __dyc_dummy_label:  ;
  __dyc_print_ptr__char(ent___0);
}
}
