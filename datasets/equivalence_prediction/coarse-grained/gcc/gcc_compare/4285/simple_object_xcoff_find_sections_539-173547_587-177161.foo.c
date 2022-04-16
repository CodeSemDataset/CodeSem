#include "../../include/dycfoo.h"
#include "../../include/simple-object-xcoff.i.hd.c.h"
void __dyc_foo(void) 
{ int u64 ;
  size_t scnhdr_size ;
  unsigned char *scnbuf ;
  unsigned int nscns ;
  char *strtab ;
  size_t strtab_size ;
  struct external_syment *symtab ;
  unsigned int i ;
  char const   *n_name ;
  off_t size___0 ;
  off_t n_value ;
  unsigned int n_numaux ;
  unsigned int n_offset ;
  unsigned int n_zeroes ;
  short n_scnum ;
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
  u64 = __dyc_readpre_byte();
  scnhdr_size = (size_t )__dyc_readpre_byte();
  scnbuf = (unsigned char *)__dyc_read_ptr__char();
  nscns = (unsigned int )__dyc_readpre_byte();
  strtab = __dyc_read_ptr__char();
  strtab_size = (size_t )__dyc_readpre_byte();
  symtab = __dyc_read_ptr__comp_59external_syment();
  i = (unsigned int )__dyc_readpre_byte();
  n_numaux = (unsigned int )__dyc_readpre_byte();
  n_scnum = (short )__dyc_readpre_byte();
  err = __dyc_read_ptr__int();
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
  n_name = 0;
  size___0 = 0;
  n_value = 0;
  n_offset = 0;
  n_zeroes = 0;
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
  if ((int )n_scnum < 1) {
    goto __dyc_dummy_label;
  } else {
    if ((unsigned int )n_scnum > nscns) {
      goto __dyc_dummy_label;
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
      goto __dyc_dummy_label;
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
        goto __dyc_dummy_label;
      } else {
        if ((int )auxent->u.xcoff64.x_csect.x_smclas != 7) {
          goto __dyc_dummy_label;
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
        goto __dyc_dummy_label;
      } else {
        if ((int )auxent->u.xcoff32.x_csect.x_smclas != 7) {
          goto __dyc_dummy_label;
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
      goto __dyc_dummy_label;
    }
    {

    }
    goto __dyc_dummy_label;
  }
  __dyc_dummy_label:  ;
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
