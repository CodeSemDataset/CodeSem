#include "../../include/dycfoo.h"
#include "../../include/simple-object-elf.i.hd.c.h"
void __dyc_foo(void) 
{ unsigned char ei_class ;
  struct simple_object_elf_read *eor ;
  unsigned short tmp___13 ;
  unsigned short tmp___14 ;
  unsigned long tmp___15 ;
  int tmp___16 ;
  ulong_type tmp___19 ;
  ulong_type tmp___20 ;
  char const   **errmsg ;
  int *err ;
  unsigned short __dyc_funcallvar_11 ;
  unsigned short __dyc_funcallvar_12 ;
  int __dyc_funcallvar_13 ;
  ulong_type __dyc_funcallvar_14 ;
  ulong_type __dyc_funcallvar_15 ;
  unsigned int __dyc_funcallvar_16 ;
  unsigned int __dyc_funcallvar_17 ;

  {
  ei_class = (unsigned char )__dyc_readpre_byte();
  eor = __dyc_read_ptr__comp_60simple_object_elf_read();
  errmsg = (char const   **)__dyc_read_ptr__ptr__char();
  err = __dyc_read_ptr__int();
  __dyc_funcallvar_11 = (unsigned short )__dyc_readpre_byte();
  __dyc_funcallvar_12 = (unsigned short )__dyc_readpre_byte();
  __dyc_funcallvar_13 = __dyc_readpre_byte();
  __dyc_funcallvar_14 = (ulong_type )__dyc_readpre_byte();
  __dyc_funcallvar_15 = (ulong_type )__dyc_readpre_byte();
  __dyc_funcallvar_16 = (unsigned int )__dyc_readpre_byte();
  __dyc_funcallvar_17 = (unsigned int )__dyc_readpre_byte();
  tmp___13 = 0;
  tmp___14 = 0;
  tmp___15 = 0;
  tmp___16 = 0;
  tmp___19 = 0;
  tmp___20 = 0;
  if ((int )ei_class == 1) {
    {
    tmp___13 = __dyc_funcallvar_11;
    eor->shstrndx = (unsigned int )tmp___13;
    }
  } else {
    {
    tmp___14 = __dyc_funcallvar_12;
    eor->shstrndx = (unsigned int )tmp___14;
    }
  }
  if (eor->shnum == 0U) {
    goto _L;
  } else {
    if (eor->shstrndx == 65535U) {
      _L:  
      if (eor->shoff != 0UL) {
        if ((int )ei_class == 1) {
          tmp___15 = sizeof(Elf32_External_Shdr );
        } else {
          tmp___15 = sizeof(Elf64_External_Shdr );
        }
        {
        tmp___16 = __dyc_funcallvar_13;
        }
        if (! tmp___16) {
          {

          }
          goto __dyc_dummy_label;
        }
        if (eor->shnum == 0U) {
          if ((int )ei_class == 1) {
            {
            tmp___19 = __dyc_funcallvar_14;
            eor->shnum = (unsigned int )tmp___19;
            }
          } else {
            {
            tmp___20 = __dyc_funcallvar_15;
            eor->shnum = (unsigned int )tmp___20;
            }
          }
        }
        if (eor->shstrndx == 65535U) {
          if ((int )ei_class == 1) {
            {
            eor->shstrndx = __dyc_funcallvar_16;
            }
          } else {
            {
            eor->shstrndx = __dyc_funcallvar_17;
            }
          }
          if (eor->shstrndx >= eor->shnum) {
            if (eor->shstrndx >= 65536U) {
              eor->shstrndx -= 256U;
            }
          }
        }
      }
    }
  }
  if (eor->shstrndx >= eor->shnum) {
    {
    *errmsg = "invalid ELF shstrndx >= shnum";
    *err = 0;

    }
    goto __dyc_dummy_label;
  }
  if (eor->shstrndx == 0U) {
    {
    *errmsg = "invalid ELF shstrndx == 0";
    *err = 0;

    }
    goto __dyc_dummy_label;
  }
  goto __dyc_dummy_label;
  __dyc_dummy_label:  ;
  __dyc_printpre_byte(tmp___15);
}
}
