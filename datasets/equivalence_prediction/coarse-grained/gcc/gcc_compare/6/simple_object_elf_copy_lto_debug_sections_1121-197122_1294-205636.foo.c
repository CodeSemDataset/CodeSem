#include "../../include/dycfoo.h"
#include "../../include/simple-object-elf.i.hd.c.h"
void __dyc_foo(void) 
{ struct simple_object_elf_read *eor ;
  unsigned char ei_class ;
  size_t shdr_size ;
  unsigned int shnum ;
  unsigned char *shdrs ;
  unsigned char *shstrhdr ;
  size_t name_size ;
  off_t shstroff ;
  unsigned char *names ;
  unsigned int i ;
  int changed ;
  int *pfnret ;
  char const   **pfnname ;
  unsigned int new_i ;
  unsigned int *sh_map ;
  unsigned int first_shndx ;
  unsigned int *symtab_indices_shndx ;
  void *tmp ;
  int tmp___0 ;
  ulong_type tmp___5 ;
  ulong_type tmp___6 ;
  void *tmp___7 ;
  int tmp___8 ;
  void *tmp___9 ;
  void *tmp___10 ;
  void *tmp___11 ;
  unsigned char *shdr ;
  unsigned int sh_name ;
  unsigned int sh_type ;
  char const   *name ;
  char *ret ;
  unsigned int sh_link ;
  unsigned char *shdr___0 ;
  unsigned int sh_type___0 ;
  unsigned int sh_info ;
  unsigned int sh_link___0 ;
  off_t offset ;
  off_t length ;
  unsigned int entsize ;
  ulong_type tmp___26 ;
  unsigned char *ent ;
  unsigned char *buf ;
  int keep ;
  ulong_type tmp___29 ;
  ulong_type tmp___30 ;
  ulong_type tmp___33 ;
  ulong_type tmp___34 ;
  void *tmp___35 ;
  int tmp___36 ;
  unsigned int sec ;
  unsigned int tmp___37 ;
  int tmp___38 ;
  int tmp___39 ;
  void *tmp___40 ;
  unsigned int tmp___41 ;
  int *err ;
  void *__dyc_funcallvar_1 ;
  int __dyc_funcallvar_2 ;
  ulong_type __dyc_funcallvar_3 ;
  ulong_type __dyc_funcallvar_4 ;
  ulong_type __dyc_funcallvar_5 ;
  ulong_type __dyc_funcallvar_6 ;
  void *__dyc_funcallvar_7 ;
  int __dyc_funcallvar_8 ;
  void *__dyc_funcallvar_9 ;
  void *__dyc_funcallvar_10 ;
  void *__dyc_funcallvar_11 ;
  unsigned int __dyc_funcallvar_12 ;
  unsigned int __dyc_funcallvar_13 ;
  char *__dyc_funcallvar_14 ;
  unsigned int __dyc_funcallvar_15 ;
  unsigned int __dyc_funcallvar_16 ;
  unsigned int __dyc_funcallvar_17 ;
  unsigned int __dyc_funcallvar_18 ;
  unsigned int __dyc_funcallvar_19 ;
  unsigned int __dyc_funcallvar_20 ;
  unsigned int __dyc_funcallvar_21 ;
  unsigned int __dyc_funcallvar_22 ;
  unsigned int __dyc_funcallvar_23 ;
  unsigned int __dyc_funcallvar_24 ;
  ulong_type __dyc_funcallvar_25 ;
  ulong_type __dyc_funcallvar_26 ;
  ulong_type __dyc_funcallvar_27 ;
  ulong_type __dyc_funcallvar_28 ;
  ulong_type __dyc_funcallvar_29 ;
  ulong_type __dyc_funcallvar_30 ;
  void *__dyc_funcallvar_31 ;
  int __dyc_funcallvar_32 ;
  unsigned int __dyc_funcallvar_33 ;
  void *__dyc_funcallvar_34 ;

  {
  eor = __dyc_read_ptr__comp_60simple_object_elf_read();
  ei_class = (unsigned char )__dyc_readpre_byte();
  shdr_size = (size_t )__dyc_readpre_byte();
  first_shndx = (unsigned int )__dyc_readpre_byte();
  err = __dyc_read_ptr__int();
  __dyc_funcallvar_1 = __dyc_read_ptr__void();
  __dyc_funcallvar_2 = __dyc_readpre_byte();
  __dyc_funcallvar_3 = (ulong_type )__dyc_readpre_byte();
  __dyc_funcallvar_4 = (ulong_type )__dyc_readpre_byte();
  __dyc_funcallvar_5 = (ulong_type )__dyc_readpre_byte();
  __dyc_funcallvar_6 = (ulong_type )__dyc_readpre_byte();
  __dyc_funcallvar_7 = __dyc_read_ptr__void();
  __dyc_funcallvar_8 = __dyc_readpre_byte();
  __dyc_funcallvar_9 = __dyc_read_ptr__void();
  __dyc_funcallvar_10 = __dyc_read_ptr__void();
  __dyc_funcallvar_11 = __dyc_read_ptr__void();
  __dyc_funcallvar_12 = (unsigned int )__dyc_readpre_byte();
  __dyc_funcallvar_13 = (unsigned int )__dyc_readpre_byte();
  __dyc_funcallvar_14 = __dyc_read_ptr__char();
  __dyc_funcallvar_15 = (unsigned int )__dyc_readpre_byte();
  __dyc_funcallvar_16 = (unsigned int )__dyc_readpre_byte();
  __dyc_funcallvar_17 = (unsigned int )__dyc_readpre_byte();
  __dyc_funcallvar_18 = (unsigned int )__dyc_readpre_byte();
  __dyc_funcallvar_19 = (unsigned int )__dyc_readpre_byte();
  __dyc_funcallvar_20 = (unsigned int )__dyc_readpre_byte();
  __dyc_funcallvar_21 = (unsigned int )__dyc_readpre_byte();
  __dyc_funcallvar_22 = (unsigned int )__dyc_readpre_byte();
  __dyc_funcallvar_23 = (unsigned int )__dyc_readpre_byte();
  __dyc_funcallvar_24 = (unsigned int )__dyc_readpre_byte();
  __dyc_funcallvar_25 = (ulong_type )__dyc_readpre_byte();
  __dyc_funcallvar_26 = (ulong_type )__dyc_readpre_byte();
  __dyc_funcallvar_27 = (ulong_type )__dyc_readpre_byte();
  __dyc_funcallvar_28 = (ulong_type )__dyc_readpre_byte();
  __dyc_funcallvar_29 = (ulong_type )__dyc_readpre_byte();
  __dyc_funcallvar_30 = (ulong_type )__dyc_readpre_byte();
  __dyc_funcallvar_31 = __dyc_read_ptr__void();
  __dyc_funcallvar_32 = __dyc_readpre_byte();
  __dyc_funcallvar_33 = (unsigned int )__dyc_readpre_byte();
  __dyc_funcallvar_34 = __dyc_read_ptr__void();
  shnum = 0;
  shdrs = 0;
  shstrhdr = 0;
  name_size = 0;
  shstroff = 0;
  names = 0;
  i = 0;
  changed = 0;
  pfnret = 0;
  pfnname = 0;
  new_i = 0;
  sh_map = 0;
  symtab_indices_shndx = 0;
  tmp = 0;
  tmp___0 = 0;
  tmp___5 = 0;
  tmp___6 = 0;
  tmp___7 = 0;
  tmp___8 = 0;
  tmp___9 = 0;
  tmp___10 = 0;
  tmp___11 = 0;
  shdr = 0;
  sh_name = 0;
  sh_type = 0;
  name = 0;
  ret = 0;
  sh_link = 0;
  shdr___0 = 0;
  sh_type___0 = 0;
  sh_info = 0;
  sh_link___0 = 0;
  offset = 0;
  length = 0;
  entsize = 0;
  tmp___26 = 0;
  ent = 0;
  buf = 0;
  keep = 0;
  tmp___29 = 0;
  tmp___30 = 0;
  tmp___33 = 0;
  tmp___34 = 0;
  tmp___35 = 0;
  tmp___36 = 0;
  sec = 0;
  tmp___37 = 0;
  tmp___38 = 0;
  tmp___39 = 0;
  tmp___40 = 0;
  tmp___41 = 0;
  shnum = eor->shnum;
  tmp = __dyc_funcallvar_1;
  shdrs = (unsigned char *)tmp;
  tmp___0 = __dyc_funcallvar_2;
  if (! tmp___0) {
    {

    }
    goto __dyc_dummy_label;
  }
  shstrhdr = shdrs + (size_t )(eor->shstrndx - 1U) * shdr_size;
  if ((int )ei_class == 1) {
    {
    name_size = __dyc_funcallvar_3;
    }
  } else {
    {
    name_size = __dyc_funcallvar_4;
    }
  }
  if ((int )ei_class == 1) {
    {
    tmp___5 = __dyc_funcallvar_5;
    shstroff = (long )tmp___5;
    }
  } else {
    {
    tmp___6 = __dyc_funcallvar_6;
    shstroff = (long )tmp___6;
    }
  }
  tmp___7 = __dyc_funcallvar_7;
  names = (unsigned char *)tmp___7;
  tmp___8 = __dyc_funcallvar_8;
  if (! tmp___8) {
    {


    }
    goto __dyc_dummy_label;
  }
  tmp___9 = __dyc_funcallvar_9;
  pfnret = (int *)tmp___9;
  tmp___10 = __dyc_funcallvar_10;
  pfnname = (char const   **)tmp___10;
  tmp___11 = __dyc_funcallvar_11;
  symtab_indices_shndx = (unsigned int *)tmp___11;
  i = 1U;
  while (1) {
    while_9_continue:  ;
    if (! (i < shnum)) {
      goto while_9_break;
    }
    shdr = shdrs + (size_t )(i - 1U) * shdr_size;
    if ((int )ei_class == 1) {
      {
      sh_name = __dyc_funcallvar_12;
      }
    } else {
      {
      sh_name = __dyc_funcallvar_13;
      }
    }
    if ((size_t )sh_name >= name_size) {
      {
      *err = 0;


      }
      goto __dyc_dummy_label;
    }
    {
    name = (char const   *)names + sh_name;
    ret = __dyc_funcallvar_14;
    }
    if ((unsigned long )ret == (unsigned long )((void *)0)) {
      *(pfnret + (i - 1U)) = -1;
    } else {
      *(pfnret + (i - 1U)) = 0;
    }
    if ((unsigned long )ret == (unsigned long )((void *)0)) {
      *(pfnname + (i - 1U)) = name;
    } else {
      *(pfnname + (i - 1U)) = (char const   *)ret;
    }
    if (first_shndx == 0U) {
      if (*(pfnret + (i - 1U)) == 0) {
        first_shndx = i;
      }
    }
    if ((int )ei_class == 1) {
      {
      sh_type = __dyc_funcallvar_15;
      }
    } else {
      {
      sh_type = __dyc_funcallvar_16;
      }
    }
    if (sh_type == 18U) {
      if ((int )ei_class == 1) {
        {
        sh_link = __dyc_funcallvar_17;
        }
      } else {
        {
        sh_link = __dyc_funcallvar_18;
        }
      }
      *(symtab_indices_shndx + (sh_link - 1U)) = i - 1U;
      *(pfnret + (i - 1U)) = -1;
    }
    i ++;
  }
  while_9_break:  ;
  while (1) {
    while_10_continue:  ;
    changed = 0;
    i = 1U;
    {
    while (1) {
      while_11_continue:  ;
      if (! (i < shnum)) {
        goto while_11_break;
      }
      shdr___0 = shdrs + (size_t )(i - 1U) * shdr_size;
      if ((int )ei_class == 1) {
        {
        sh_type___0 = __dyc_funcallvar_19;
        }
      } else {
        {
        sh_type___0 = __dyc_funcallvar_20;
        }
      }
      if ((int )ei_class == 1) {
        {
        sh_info = __dyc_funcallvar_21;
        }
      } else {
        {
        sh_info = __dyc_funcallvar_22;
        }
      }
      if ((int )ei_class == 1) {
        {
        sh_link___0 = __dyc_funcallvar_23;
        }
      } else {
        {
        sh_link___0 = __dyc_funcallvar_24;
        }
      }
      if (sh_type___0 == 17U) {
        if ((int )ei_class == 1) {
          {
          tmp___26 = __dyc_funcallvar_25;
          }
        } else {
          {
          tmp___26 = __dyc_funcallvar_26;
          }
        }
        entsize = (unsigned int )tmp___26;
        keep = 0;
        if ((int )ei_class == 1) {
          {
          tmp___29 = __dyc_funcallvar_27;
          offset = (long )tmp___29;
          }
        } else {
          {
          tmp___30 = __dyc_funcallvar_28;
          offset = (long )tmp___30;
          }
        }
        if ((int )ei_class == 1) {
          {
          tmp___33 = __dyc_funcallvar_29;
          length = (long )tmp___33;
          }
        } else {
          {
          tmp___34 = __dyc_funcallvar_30;
          length = (long )tmp___34;
          }
        }
        {
        tmp___35 = __dyc_funcallvar_31;
        buf = (unsigned char *)tmp___35;
        tmp___36 = __dyc_funcallvar_32;
        }
        if (! tmp___36) {
          {



          }
          goto __dyc_dummy_label;
        }
        ent = buf + entsize;
        {
        while (1) {
          while_12_continue:  ;
          if (! ((unsigned long )ent < (unsigned long )(buf + length))) {
            goto while_12_break;
          }
          {
          tmp___37 = __dyc_funcallvar_33;
          sec = tmp___37;
          }
          if (*(pfnret + (sec - 1U)) == 0) {
            keep = 1;
          }
          ent += entsize;
        }
        while_12_break:  ;
        }
        if (keep) {
          if (*(pfnret + (sh_link___0 - 1U)) == -1) {
            tmp___38 = 1;
          } else {
            if (*(pfnret + (i - 1U)) == -1) {
              tmp___38 = 1;
            } else {
              tmp___38 = 0;
            }
          }
          changed |= tmp___38;
          *(pfnret + (sh_link___0 - 1U)) = 0;
          *(pfnret + (i - 1U)) = 0;
        }
      }
      if (sh_type___0 == 4U) {
        goto _L;
      } else {
        if (sh_type___0 == 9U) {
          _L:  
          if (*(pfnret + (sh_info - 1U)) == 0) {
            if (*(pfnret + (sh_link___0 - 1U)) == -1) {
              tmp___39 = 1;
            } else {
              if (*(pfnret + (i - 1U)) == -1) {
                tmp___39 = 1;
              } else {
                tmp___39 = 0;
              }
            }
            changed |= tmp___39;
            *(pfnret + (sh_link___0 - 1U)) = 0;
            *(pfnret + (i - 1U)) = 0;
          }
        }
      }
      if (sh_type___0 == 2U) {
        if (*(pfnret + (i - 1U)) == 0) {
          changed |= *(pfnret + (sh_link___0 - 1U)) == -1;
          *(pfnret + (sh_link___0 - 1U)) = 0;
        }
      }
      i ++;
    }
    while_11_break:  ;
    }
    if (! changed) {
      goto while_10_break;
    }
  }
  while_10_break:  ;
  tmp___40 = __dyc_funcallvar_34;
  sh_map = (unsigned int *)tmp___40;
  *(sh_map + 0) = 0U;
  new_i = 1U;
  i = 1U;
  while (1) {
    while_13_continue:  ;
    if (! (i < shnum)) {
      goto while_13_break;
    }
    if (*(pfnret + (i - 1U)) == -1) {
      *(sh_map + i) = 0U;
    } else {
      tmp___41 = new_i;
      new_i ++;
      *(sh_map + i) = tmp___41;
    }
    i ++;
  }
  while_13_break:  ;
  if (new_i - 1U >= 65280U) {
    *err = 95;
    goto __dyc_dummy_label;
  }
  __dyc_dummy_label:  ;
  __dyc_printpre_byte(shnum);
  __dyc_print_ptr__char(shdrs);
  __dyc_print_ptr__char(shstrhdr);
  __dyc_printpre_byte(name_size);
  __dyc_printpre_byte(shstroff);
  __dyc_print_ptr__char(names);
  __dyc_printpre_byte(changed);
  __dyc_print_ptr__int(pfnret);
  __dyc_print_ptr__ptr__char(pfnname);
  __dyc_printpre_byte(first_shndx);
  __dyc_print_ptr__int(symtab_indices_shndx);
  __dyc_print_ptr__char(shdr);
  __dyc_print_ptr__char(name);
  __dyc_print_ptr__char(shdr___0);
  __dyc_printpre_byte(sh_info);
  __dyc_printpre_byte(sh_link___0);
  __dyc_printpre_byte(offset);
  __dyc_printpre_byte(length);
  __dyc_printpre_byte(entsize);
  __dyc_print_ptr__char(buf);
  __dyc_printpre_byte(keep);
}
}
