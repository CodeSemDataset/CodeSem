#include "../../include/dycfoo.h"
#include "../../include/simple-object-xcoff.i.hd.c.h"
void __dyc_foo(void) 
{ unsigned short (*simple_object_fetch_big_16)(unsigned char const   *buf ) ;
  unsigned int (*simple_object_fetch_big_32)(unsigned char const   *buf ) ;
  ulong_type (*simple_object_fetch_big_64)(unsigned char const   *buf ) ;
  struct simple_object_xcoff_read *ocr ;
  int u64 ;
  size_t scnhdr_size ;
  unsigned char *scnbuf ;
  unsigned short (*fetch_16)(unsigned char const   * ) ;
  unsigned int (*fetch_32)(unsigned char const   * ) ;
  ulong_type (*fetch_64)(unsigned char const   * ) ;
  unsigned int nscns ;
  char *strtab ;
  size_t strtab_size ;
  struct external_syment *symtab ;
  unsigned int i ;
  int tmp___0 ;
  unsigned char *scnhdr ;
  unsigned char *scnname ;
  char namebuf[9] ;
  char *name ;
  off_t scnptr ;
  off_t size ;
  size_t strindex ;
  char *end ;
  long tmp___1 ;
  ulong_type tmp___2 ;
  ulong_type tmp___3 ;
  unsigned int tmp___4 ;
  unsigned int tmp___5 ;
  int tmp___6 ;
  unsigned char *sym ;
  char const   *n_name ;
  off_t size___0 ;
  off_t n_value ;
  unsigned int n_numaux ;
  unsigned int n_offset ;
  unsigned int n_zeroes ;
  short n_scnum ;
  void *tmp___7 ;
  int tmp___8 ;
  unsigned short tmp___9 ;
  ulong_type tmp___10 ;
  unsigned int tmp___11 ;
  union external_auxent *auxent ;
  unsigned char *aux ;
  unsigned char *scnhdr___0 ;
  off_t scnptr___0 ;
  off_t x_scnlen ;
  ulong_type x_scnlen64 ;
  unsigned int tmp___12 ;
  unsigned int tmp___13 ;
  unsigned int tmp___14 ;
  ulong_type tmp___15 ;
  ulong_type tmp___16 ;
  unsigned int tmp___17 ;
  unsigned int tmp___18 ;
  size_t __s1_len ;
  size_t __s2_len ;
  int tmp___28 ;
  int tmp___33 ;
  int tmp___34 ;
  int tmp___35 ;
  int tmp___36 ;
  int *err ;
  long __dyc_funcallvar_3 ;
  char *__dyc_funcallvar_4 ;
  ulong_type __dyc_funcallvar_5 ;
  ulong_type __dyc_funcallvar_6 ;
  unsigned int __dyc_funcallvar_7 ;
  unsigned int __dyc_funcallvar_8 ;
  int __dyc_funcallvar_9 ;
  void *__dyc_funcallvar_10 ;
  int __dyc_funcallvar_11 ;
  unsigned short __dyc_funcallvar_12 ;
  ulong_type __dyc_funcallvar_13 ;
  unsigned int __dyc_funcallvar_14 ;
  unsigned int __dyc_funcallvar_15 ;
  unsigned int __dyc_funcallvar_16 ;
  unsigned int __dyc_funcallvar_17 ;
  char *__dyc_funcallvar_18 ;
  int __dyc_funcallvar_19 ;
  int __dyc_funcallvar_20 ;
  int __dyc_funcallvar_21 ;
  int __dyc_funcallvar_22 ;
  int __dyc_funcallvar_23 ;
  unsigned int __dyc_funcallvar_24 ;
  unsigned int __dyc_funcallvar_25 ;
  unsigned int __dyc_funcallvar_26 ;
  ulong_type __dyc_funcallvar_27 ;
  ulong_type __dyc_funcallvar_28 ;
  unsigned int __dyc_funcallvar_29 ;
  unsigned int __dyc_funcallvar_30 ;

  {
  ocr = __dyc_read_ptr__comp_75simple_object_xcoff_read();
  u64 = __dyc_readpre_byte();
  scnhdr_size = (size_t )__dyc_readpre_byte();
  scnbuf = (unsigned char *)__dyc_read_ptr__char();
  symtab = __dyc_read_ptr__comp_59external_syment();
  tmp___0 = __dyc_readpre_byte();
  end = __dyc_read_ptr__char();
  err = __dyc_read_ptr__int();
  __dyc_funcallvar_3 = (long )__dyc_readpre_byte();
  __dyc_funcallvar_4 = __dyc_read_ptr__char();
  __dyc_funcallvar_5 = (ulong_type )__dyc_readpre_byte();
  __dyc_funcallvar_6 = (ulong_type )__dyc_readpre_byte();
  __dyc_funcallvar_7 = (unsigned int )__dyc_readpre_byte();
  __dyc_funcallvar_8 = (unsigned int )__dyc_readpre_byte();
  __dyc_funcallvar_9 = __dyc_readpre_byte();
  __dyc_funcallvar_10 = __dyc_read_ptr__void();
  __dyc_funcallvar_11 = __dyc_readpre_byte();
  __dyc_funcallvar_12 = (unsigned short )__dyc_readpre_byte();
  __dyc_funcallvar_13 = (ulong_type )__dyc_readpre_byte();
  __dyc_funcallvar_14 = (unsigned int )__dyc_readpre_byte();
  __dyc_funcallvar_15 = (unsigned int )__dyc_readpre_byte();
  __dyc_funcallvar_16 = (unsigned int )__dyc_readpre_byte();
  __dyc_funcallvar_17 = (unsigned int )__dyc_readpre_byte();
  __dyc_funcallvar_18 = __dyc_read_ptr__char();
  __dyc_funcallvar_19 = __dyc_readpre_byte();
  __dyc_funcallvar_20 = __dyc_readpre_byte();
  __dyc_funcallvar_21 = __dyc_readpre_byte();
  __dyc_funcallvar_22 = __dyc_readpre_byte();
  __dyc_funcallvar_23 = __dyc_readpre_byte();
  __dyc_funcallvar_24 = (unsigned int )__dyc_readpre_byte();
  __dyc_funcallvar_25 = (unsigned int )__dyc_readpre_byte();
  __dyc_funcallvar_26 = (unsigned int )__dyc_readpre_byte();
  __dyc_funcallvar_27 = (ulong_type )__dyc_readpre_byte();
  __dyc_funcallvar_28 = (ulong_type )__dyc_readpre_byte();
  __dyc_funcallvar_29 = (unsigned int )__dyc_readpre_byte();
  __dyc_funcallvar_30 = (unsigned int )__dyc_readpre_byte();
  fetch_16 = 0;
  fetch_32 = 0;
  fetch_64 = 0;
  nscns = 0;
  strtab = 0;
  strtab_size = 0;
  i = 0;
  scnhdr = 0;
  scnname = 0;
  name = 0;
  scnptr = 0;
  size = 0;
  strindex = 0;
  tmp___1 = 0;
  tmp___2 = 0;
  tmp___3 = 0;
  tmp___4 = 0;
  tmp___5 = 0;
  tmp___6 = 0;
  sym = 0;
  n_name = 0;
  size___0 = 0;
  n_value = 0;
  n_numaux = 0;
  n_offset = 0;
  n_zeroes = 0;
  n_scnum = 0;
  tmp___7 = 0;
  tmp___8 = 0;
  tmp___9 = 0;
  tmp___10 = 0;
  tmp___11 = 0;
  auxent = 0;
  aux = 0;
  scnhdr___0 = 0;
  scnptr___0 = 0;
  x_scnlen = 0;
  x_scnlen64 = 0;
  tmp___12 = 0;
  tmp___13 = 0;
  tmp___14 = 0;
  tmp___15 = 0;
  tmp___16 = 0;
  tmp___17 = 0;
  tmp___18 = 0;
  __s1_len = 0;
  __s2_len = 0;
  tmp___28 = 0;
  tmp___33 = 0;
  tmp___34 = 0;
  tmp___35 = 0;
  tmp___36 = 0;
  if (! tmp___0) {
    {

    }
    goto __dyc_dummy_label;
  }
  fetch_16 = & simple_object_fetch_big_16;
  fetch_32 = & simple_object_fetch_big_32;
  fetch_64 = & simple_object_fetch_big_64;
  nscns = (unsigned int )ocr->nscns;
  strtab = (char *)((void *)0);
  strtab_size = 0UL;
  i = 0U;
  while (1) {
    while_0_continue:  ;
    if (! (i < nscns)) {
      goto while_0_break;
    }
    {
    scnhdr = scnbuf + (size_t )i * scnhdr_size;
    scnname = scnhdr + (unsigned int )(& ((struct external_scnhdr *)0)->s_name);

    namebuf[8] = (char )'\000';
    name = namebuf;
    }
    if ((int )namebuf[0] == 47) {
      {
      tmp___1 = __dyc_funcallvar_3;
      strindex = (unsigned long )tmp___1;
      }
      if ((int )*end == 0) {
        if ((unsigned long )strtab == (unsigned long )((void *)0)) {
          {
          strtab = __dyc_funcallvar_4;
          }
          if ((unsigned long )strtab == (unsigned long )((void *)0)) {
            {

            }
            goto __dyc_dummy_label;
          }
        }
        if (strindex < 4UL) {
          {


          *err = 0;
          }
          goto __dyc_dummy_label;
        } else {
          if (strindex >= strtab_size) {
            {


            *err = 0;
            }
            goto __dyc_dummy_label;
          }
        }
        name = strtab + strindex;
      }
    }
    if (u64) {
      {
      tmp___2 = __dyc_funcallvar_5;
      scnptr = (long )tmp___2;
      tmp___3 = __dyc_funcallvar_6;
      size = (long )tmp___3;
      }
    } else {
      {
      tmp___4 = __dyc_funcallvar_7;
      scnptr = (long )tmp___4;
      tmp___5 = __dyc_funcallvar_8;
      size = (long )tmp___5;
      }
    }
    {
    tmp___6 = __dyc_funcallvar_9;
    }
    if (! tmp___6) {
      goto while_0_break;
    }
    i ++;
  }
  while_0_break:  ;
  if (ocr->nsyms > 0U) {
    {
    tmp___7 = __dyc_funcallvar_10;
    symtab = (struct external_syment *)tmp___7;
    tmp___8 = __dyc_funcallvar_11;
    }
    if (! tmp___8) {
      {


      }
      goto __dyc_dummy_label;
    }
    i = 0U;
    {
    while (1) {
      while_1_continue:  ;
      if (! (i < ocr->nsyms)) {
        goto while_1_break;
      }
      sym = (unsigned char *)(symtab + i);
      n_numaux = (unsigned int )(symtab + i)->n_numaux[0];
      if ((int )(symtab + i)->n_sclass[0] != 2) {
        if ((int )(symtab + i)->n_sclass[0] != 107) {
          goto __Cont;
        }
      }
      if (n_numaux < 1U) {
        goto __Cont;
      } else {
        if (i + n_numaux >= ocr->nsyms) {
          goto __Cont;
        }
      }
      {
      tmp___9 = __dyc_funcallvar_12;
      n_scnum = (short )tmp___9;
      }
      if ((int )n_scnum < 1) {
        goto __Cont;
      } else {
        if ((unsigned int )n_scnum > nscns) {
          goto __Cont;
        }
      }
      if (u64) {
        {
        tmp___10 = __dyc_funcallvar_13;
        n_value = (long )tmp___10;
        n_offset = __dyc_funcallvar_14;
        }
      } else {
        {
        n_zeroes = __dyc_funcallvar_15;
        }
        if (n_zeroes != 0U) {
          goto __Cont;
        }
        {
        tmp___11 = __dyc_funcallvar_16;
        n_value = (long )tmp___11;
        n_offset = __dyc_funcallvar_17;
        }
      }
      if ((unsigned long )strtab == (unsigned long )((void *)0)) {
        {
        strtab = __dyc_funcallvar_18;
        }
        if ((unsigned long )strtab == (unsigned long )((void *)0)) {
          {


          }
          goto __dyc_dummy_label;
        }
      }
      if ((size_t )n_offset >= strtab_size) {
        {



        *err = 0;
        }
        goto __dyc_dummy_label;
      }
      n_name = (char const   *)(strtab + n_offset);
      if (0) {
        {
        tmp___34 = __dyc_funcallvar_19;
        __s1_len = (unsigned long )tmp___34;
        tmp___35 = __dyc_funcallvar_20;
        __s2_len = (unsigned long )tmp___35;
        }
        if (! ((unsigned long )((void const   *)(n_name + 1)) - (unsigned long )((void const   *)n_name) == 1UL)) {
          goto _L___0;
        } else {
          if (__s1_len >= 4UL) {
            _L___0:  
            if (! ((unsigned long )((void const   *)(".go_export" + 1)) - (unsigned long )((void const   *)".go_export") == 1UL)) {
              tmp___36 = 1;
            } else {
              if (__s2_len >= 4UL) {
                tmp___36 = 1;
              } else {
                tmp___36 = 0;
              }
            }
          } else {
            tmp___36 = 0;
          }
        }
        if (tmp___36) {
          {
          tmp___28 = __dyc_funcallvar_21;
          }
        } else {
          {
          tmp___33 = __dyc_funcallvar_22;
          tmp___28 = tmp___33;
          }
        }
      } else {
        {
        tmp___33 = __dyc_funcallvar_23;
        tmp___28 = tmp___33;
        }
      }
      if (! tmp___28) {
        auxent = (union external_auxent *)(symtab + (i + n_numaux));
        aux = (unsigned char *)auxent;
        if (u64) {
          if (((int )auxent->u.xcoff64.x_csect.x_smtyp & 7) != 1) {
            goto __Cont;
          } else {
            if ((int )auxent->u.xcoff64.x_csect.x_smclas != 7) {
              goto __Cont;
            }
          }
          {
          tmp___12 = __dyc_funcallvar_24;
          x_scnlen64 = (unsigned long )tmp___12;
          tmp___13 = __dyc_funcallvar_25;
          x_scnlen = (long )((x_scnlen64 << 32) | (unsigned long )tmp___13);
          }
        } else {
          if (((int )auxent->u.xcoff32.x_csect.x_smtyp & 7) != 1) {
            goto __Cont;
          } else {
            if ((int )auxent->u.xcoff32.x_csect.x_smclas != 7) {
              goto __Cont;
            }
          }
          {
          tmp___14 = __dyc_funcallvar_26;
          x_scnlen = (long )tmp___14;
          }
        }
        scnhdr___0 = scnbuf + (size_t )((int )n_scnum - 1) * scnhdr_size;
        if (u64) {
          {
          tmp___15 = __dyc_funcallvar_27;
          scnptr___0 = (long )tmp___15;
          tmp___16 = __dyc_funcallvar_28;
          size___0 = (long )tmp___16;
          }
        } else {
          {
          tmp___17 = __dyc_funcallvar_29;
          scnptr___0 = (long )tmp___17;
          tmp___18 = __dyc_funcallvar_30;
          size___0 = (long )tmp___18;
          }
        }
        if (n_value + x_scnlen > size___0) {
          goto while_1_break;
        }
        {

        }
        goto while_1_break;
      }
      __Cont:  
      i += n_numaux + 1U;
    }
    while_1_break:  ;
    }
  }
  if ((unsigned long )symtab != (unsigned long )((void *)0)) {
    {

    }
  }
  if ((unsigned long )strtab != (unsigned long )((void *)0)) {
    {

    }
  }

  goto __dyc_dummy_label;
  __dyc_dummy_label:  ;
  __dyc_print_ptr__fun_name_is_not_here(fetch_16);
  __dyc_print_ptr__fun_name_is_not_here(fetch_32);
  __dyc_print_ptr__fun_name_is_not_here(fetch_64);
  __dyc_print_ptr__char(strtab);
  __dyc_printpre_byte(strtab_size);
  __dyc_print_ptr__comp_59external_syment(symtab);
  __dyc_print_ptr__char(scnname);
  __dyc_print_ptr__char(name);
  __dyc_printpre_byte(scnptr);
  __dyc_printpre_byte(size);
  __dyc_printpre_byte(strindex);
  __dyc_print_ptr__char(sym);
  __dyc_print_ptr__char(n_name);
  __dyc_printpre_byte(n_value);
  __dyc_printpre_byte(n_offset);
  __dyc_print_ptr__char(aux);
  __dyc_print_ptr__char(scnhdr___0);
  __dyc_printpre_byte(scnptr___0);
  __dyc_printpre_byte(__s1_len);
  __dyc_printpre_byte(__s2_len);
}
}
