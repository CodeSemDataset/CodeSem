#include "../../include/dycfoo.h"
#include "../../include/simple-object-elf.i.hd.c.h"
void __dyc_foo(void) 
{ struct simple_object_elf_read *eor ;
  struct simple_object_elf_write *eow ;
  unsigned char ei_class ;
  size_t shdr_size ;
  unsigned int shnum ;
  unsigned char *shdrs ;
  char const   *errmsg ;
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
  void *tmp___42 ;
  unsigned char *shdr___1 ;
  unsigned int sh_name___0 ;
  unsigned int sh_type___1 ;
  char const   *name___0 ;
  off_t offset___0 ;
  off_t length___0 ;
  simple_object_write_section *dest ;
  off_t flags ;
  unsigned char *buf___0 ;
  ulong_type tmp___47 ;
  ulong_type tmp___48 ;
  ulong_type tmp___51 ;
  ulong_type tmp___52 ;
  void *tmp___55 ;
  int tmp___56 ;
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
  ulong_type tmp___87 ;
  ulong_type tmp___88 ;
  unsigned int sh_info___0 ;
  unsigned int sh_link___1 ;
  size_t __s1_len ;
  size_t __s2_len ;
  int tmp___102 ;
  int tmp___107 ;
  int tmp___108 ;
  int tmp___109 ;
  int tmp___110 ;
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
  void *__dyc_funcallvar_35 ;
  unsigned int __dyc_funcallvar_36 ;
  unsigned int __dyc_funcallvar_37 ;
  ulong_type __dyc_funcallvar_38 ;
  ulong_type __dyc_funcallvar_39 ;
  ulong_type __dyc_funcallvar_40 ;
  ulong_type __dyc_funcallvar_41 ;
  unsigned int __dyc_funcallvar_42 ;
  unsigned int __dyc_funcallvar_43 ;
  simple_object_write_section *__dyc_funcallvar_44 ;
  void *__dyc_funcallvar_45 ;
  int __dyc_funcallvar_46 ;
  ulong_type __dyc_funcallvar_47 ;
  ulong_type __dyc_funcallvar_48 ;
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
  unsigned short __dyc_funcallvar_61 ;
  unsigned short __dyc_funcallvar_62 ;
  unsigned int __dyc_funcallvar_63 ;
  unsigned int __dyc_funcallvar_64 ;
  char const   *__dyc_funcallvar_65 ;
  ulong_type __dyc_funcallvar_66 ;
  ulong_type __dyc_funcallvar_67 ;
  unsigned int __dyc_funcallvar_68 ;
  unsigned int __dyc_funcallvar_69 ;
  unsigned int __dyc_funcallvar_70 ;
  unsigned int __dyc_funcallvar_71 ;
  int __dyc_funcallvar_72 ;
  int __dyc_funcallvar_73 ;
  int __dyc_funcallvar_74 ;
  int __dyc_funcallvar_75 ;
  int __dyc_funcallvar_76 ;

  {
  eor = __dyc_read_ptr__comp_60simple_object_elf_read();
  eow = __dyc_read_ptr__comp_62simple_object_elf_write();
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
  __dyc_funcallvar_35 = __dyc_read_ptr__void();
  __dyc_funcallvar_36 = (unsigned int )__dyc_readpre_byte();
  __dyc_funcallvar_37 = (unsigned int )__dyc_readpre_byte();
  __dyc_funcallvar_38 = (ulong_type )__dyc_readpre_byte();
  __dyc_funcallvar_39 = (ulong_type )__dyc_readpre_byte();
  __dyc_funcallvar_40 = (ulong_type )__dyc_readpre_byte();
  __dyc_funcallvar_41 = (ulong_type )__dyc_readpre_byte();
  __dyc_funcallvar_42 = (unsigned int )__dyc_readpre_byte();
  __dyc_funcallvar_43 = (unsigned int )__dyc_readpre_byte();
  __dyc_funcallvar_44 = __dyc_read_ptr__typdef_simple_object_write_section();
  __dyc_funcallvar_45 = __dyc_read_ptr__void();
  __dyc_funcallvar_46 = __dyc_readpre_byte();
  __dyc_funcallvar_47 = (ulong_type )__dyc_readpre_byte();
  __dyc_funcallvar_48 = (ulong_type )__dyc_readpre_byte();
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
  __dyc_funcallvar_61 = (unsigned short )__dyc_readpre_byte();
  __dyc_funcallvar_62 = (unsigned short )__dyc_readpre_byte();
  __dyc_funcallvar_63 = (unsigned int )__dyc_readpre_byte();
  __dyc_funcallvar_64 = (unsigned int )__dyc_readpre_byte();
  __dyc_funcallvar_65 = (char const   *)__dyc_read_ptr__char();
  __dyc_funcallvar_66 = (ulong_type )__dyc_readpre_byte();
  __dyc_funcallvar_67 = (ulong_type )__dyc_readpre_byte();
  __dyc_funcallvar_68 = (unsigned int )__dyc_readpre_byte();
  __dyc_funcallvar_69 = (unsigned int )__dyc_readpre_byte();
  __dyc_funcallvar_70 = (unsigned int )__dyc_readpre_byte();
  __dyc_funcallvar_71 = (unsigned int )__dyc_readpre_byte();
  __dyc_funcallvar_72 = __dyc_readpre_byte();
  __dyc_funcallvar_73 = __dyc_readpre_byte();
  __dyc_funcallvar_74 = __dyc_readpre_byte();
  __dyc_funcallvar_75 = __dyc_readpre_byte();
  __dyc_funcallvar_76 = __dyc_readpre_byte();
  shnum = 0;
  shdrs = 0;
  errmsg = 0;
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
  tmp___42 = 0;
  shdr___1 = 0;
  sh_name___0 = 0;
  sh_type___1 = 0;
  name___0 = 0;
  offset___0 = 0;
  length___0 = 0;
  dest = 0;
  flags = 0;
  buf___0 = 0;
  tmp___47 = 0;
  tmp___48 = 0;
  tmp___51 = 0;
  tmp___52 = 0;
  tmp___55 = 0;
  tmp___56 = 0;
  entsize___0 = 0;
  tmp___59 = 0;
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
  tmp___87 = 0;
  tmp___88 = 0;
  sh_info___0 = 0;
  sh_link___1 = 0;
  __s1_len = 0;
  __s2_len = 0;
  tmp___102 = 0;
  tmp___107 = 0;
  tmp___108 = 0;
  tmp___109 = 0;
  tmp___110 = 0;
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
  tmp___42 = __dyc_funcallvar_35;
  eow->shdrs = (unsigned char *)tmp___42;
  new_i = 0U;
  i = 1U;
  while (1) {
    while_14_continue:  ;
    if (! (i < shnum)) {
      goto __dyc_dummy_label;
    }
    if (*(pfnret + (i - 1U))) {
      goto __Cont;
    }
    new_i ++;
    shdr___1 = shdrs + (size_t )(i - 1U) * shdr_size;
    if ((int )ei_class == 1) {
      {
      sh_name___0 = __dyc_funcallvar_36;
      }
    } else {
      {
      sh_name___0 = __dyc_funcallvar_37;
      }
    }
    if ((size_t )sh_name___0 >= name_size) {
      {
      *err = 0;



      }
      goto __dyc_dummy_label;
    }
    name___0 = *(pfnname + (i - 1U));
    if ((int )ei_class == 1) {
      {
      tmp___47 = __dyc_funcallvar_38;
      offset___0 = (long )tmp___47;
      }
    } else {
      {
      tmp___48 = __dyc_funcallvar_39;
      offset___0 = (long )tmp___48;
      }
    }
    if ((int )ei_class == 1) {
      {
      tmp___51 = __dyc_funcallvar_40;
      length___0 = (long )tmp___51;
      }
    } else {
      {
      tmp___52 = __dyc_funcallvar_41;
      length___0 = (long )tmp___52;
      }
    }
    if ((int )ei_class == 1) {
      {
      sh_type___1 = __dyc_funcallvar_42;
      }
    } else {
      {
      sh_type___1 = __dyc_funcallvar_43;
      }
    }
    {
    dest = __dyc_funcallvar_44;
    }
    if ((unsigned long )dest == (unsigned long )((void *)0)) {
      {



      }
      goto __dyc_dummy_label;
    }
    {

    shdr___1 = eow->shdrs + (size_t )(new_i - 1U) * shdr_size;
    tmp___55 = __dyc_funcallvar_45;
    buf___0 = (unsigned char *)tmp___55;
    tmp___56 = __dyc_funcallvar_46;
    }
    if (! tmp___56) {
      {




      }
      goto __dyc_dummy_label;
    }
    if (sh_type___1 == 2U) {
      if ((int )ei_class == 1) {
        {
        tmp___59 = __dyc_funcallvar_47;
        }
      } else {
        {
        tmp___59 = __dyc_funcallvar_48;
        }
      }
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
      {
      while (1) {
        while_15_continue:  ;
        if (! ((unsigned long )ent___0 < (unsigned long )(buf___0 + length___0))) {
          goto while_15_break;
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
                goto while_15_break;
              }
            }
          }
        }
        ent___0 += entsize___0;
      }
      while_15_break:  ;
      }
      ent___0 = buf___0;
      {
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
      }
      {

      }
    } else {
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
    }
    {
    errmsg = __dyc_funcallvar_65;

    }
    if (errmsg) {
      {



      }
      goto __dyc_dummy_label;
    }
    if ((int )ei_class == 1) {
      {
      tmp___87 = __dyc_funcallvar_66;
      flags = (long )tmp___87;
      }
    } else {
      {
      tmp___88 = __dyc_funcallvar_67;
      flags = (long )tmp___88;
      }
    }
    if (flags & 64L) {
      goto _L___5;
    } else {
      if (sh_type___1 == 9U) {
        goto _L___5;
      } else {
        if (sh_type___1 == 4U) {
          _L___5:  
          if ((int )ei_class == 1) {
            {
            sh_info___0 = __dyc_funcallvar_68;
            }
          } else {
            {
            sh_info___0 = __dyc_funcallvar_69;
            }
          }
          if (sh_info___0 < 65280U) {
            sh_info___0 = *(sh_map + sh_info___0);
          } else {
            if (sh_info___0 > 65535U) {
              sh_info___0 = *(sh_map + sh_info___0);
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
      }
    }
    if ((int )ei_class == 1) {
      {
      sh_link___1 = __dyc_funcallvar_70;
      }
    } else {
      {
      sh_link___1 = __dyc_funcallvar_71;
      }
    }
    if (sh_link___1 < 65280U) {
      sh_link___1 = *(sh_map + sh_link___1);
    } else {
      if (sh_link___1 > 65535U) {
        sh_link___1 = *(sh_map + sh_link___1);
      }
    }
    if ((int )ei_class == 1) {
      {

      }
    } else {
      {

      }
    }
    if (0) {
      {
      tmp___108 = __dyc_funcallvar_72;
      __s1_len = (unsigned long )tmp___108;
      tmp___109 = __dyc_funcallvar_73;
      __s2_len = (unsigned long )tmp___109;
      }
      if (! ((unsigned long )((void const   *)(name___0 + 1)) - (unsigned long )((void const   *)name___0) == 1UL)) {
        goto _L___7;
      } else {
        if (__s1_len >= 4UL) {
          _L___7:  
          if (! ((unsigned long )((void const   *)(".note.GNU-stack" + 1)) - (unsigned long )((void const   *)".note.GNU-stack") == 1UL)) {
            tmp___110 = 1;
          } else {
            if (__s2_len >= 4UL) {
              tmp___110 = 1;
            } else {
              tmp___110 = 0;
            }
          }
        } else {
          tmp___110 = 0;
        }
      }
      if (tmp___110) {
        {
        tmp___102 = __dyc_funcallvar_74;
        }
      } else {
        {
        tmp___107 = __dyc_funcallvar_75;
        tmp___102 = tmp___107;
        }
      }
    } else {
      {
      tmp___107 = __dyc_funcallvar_76;
      tmp___102 = tmp___107;
      }
    }
    if (tmp___102 == 0) {
      flags &= -5L;
    }
    flags &= 2147483647L;
    if ((int )ei_class == 1) {
      {

      }
    } else {
      {

      }
    }
    __Cont:  
    i ++;
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
  __dyc_printpre_byte(new_i);
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
  __dyc_print_ptr__char(shdr___1);
  __dyc_printpre_byte(sh_type___1);
  __dyc_print_ptr__char(name___0);
  __dyc_printpre_byte(offset___0);
  __dyc_printpre_byte(length___0);
  __dyc_printpre_byte(flags);
  __dyc_print_ptr__char(buf___0);
  __dyc_printpre_byte(entsize___0);
  __dyc_printpre_byte(prevailing_name_idx);
  __dyc_print_ptr__int(shndx_table);
  __dyc_print_ptr__char(sidxhdr);
  __dyc_printpre_byte(sidxoff);
  __dyc_printpre_byte(sidxsz);
  __dyc_print_ptr__char(st_info);
  __dyc_print_ptr__char(st_other);
  __dyc_printpre_byte(raw_st_shndx);
  __dyc_print_ptr__char(st_info___0);
  __dyc_print_ptr__char(st_other___0);
  __dyc_printpre_byte(sh_info___0);
  __dyc_printpre_byte(sh_link___1);
  __dyc_printpre_byte(__s1_len);
  __dyc_printpre_byte(__s2_len);
}
}
