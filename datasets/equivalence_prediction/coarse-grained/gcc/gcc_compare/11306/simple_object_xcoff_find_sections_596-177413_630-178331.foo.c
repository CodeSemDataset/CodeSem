#include "../../include/dycfoo.h"
#include "../../include/simple-object-xcoff.i.hd.c.h"
void __dyc_foo(void) 
{ int u64 ;
  size_t scnhdr_size ;
  unsigned char *scnbuf ;
  struct external_syment *symtab ;
  unsigned int i ;
  off_t size___0 ;
  unsigned int n_numaux ;
  short n_scnum ;
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
  symtab = __dyc_read_ptr__comp_59external_syment();
  i = (unsigned int )__dyc_readpre_byte();
  n_numaux = (unsigned int )__dyc_readpre_byte();
  n_scnum = (short )__dyc_readpre_byte();
  __dyc_funcallvar_24 = (unsigned int )__dyc_readpre_byte();
  __dyc_funcallvar_25 = (unsigned int )__dyc_readpre_byte();
  __dyc_funcallvar_26 = (unsigned int )__dyc_readpre_byte();
  __dyc_funcallvar_27 = (ulong_type )__dyc_readpre_byte();
  __dyc_funcallvar_28 = (ulong_type )__dyc_readpre_byte();
  __dyc_funcallvar_29 = (unsigned int )__dyc_readpre_byte();
  __dyc_funcallvar_30 = (unsigned int )__dyc_readpre_byte();
  size___0 = 0;
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
  __dyc_dummy_label:  ;
  __dyc_printpre_byte(size___0);
  __dyc_print_ptr__char(aux);
  __dyc_print_ptr__char(scnhdr___0);
  __dyc_printpre_byte(scnptr___0);
  __dyc_printpre_byte(x_scnlen);
}
}
