#include "../../include/dycfoo.h"
#include "../../include/simple-object-coff.i.hd.c.h"
void __dyc_foo(void) 
{ unsigned int (*simple_object_fetch_big_32)(unsigned char const   *buf ) ;
  unsigned int (*simple_object_fetch_little_32)(unsigned char const   *buf ) ;
  struct simple_object_coff_read *ocr ;
  size_t scnhdr_size ;
  unsigned char *scnbuf ;
  unsigned int (*fetch_32)(unsigned char const   * ) ;
  unsigned int nscns ;
  char *strtab ;
  size_t strtab_size ;
  unsigned int i ;
  void *tmp ;
  int tmp___0 ;
  unsigned char *scnhdr ;
  unsigned char *scnname ;
  char namebuf[9] ;
  char *name ;
  off_t scnptr ;
  unsigned int size ;
  size_t strindex ;
  char *end ;
  long tmp___1 ;
  unsigned int tmp___2 ;
  int tmp___3 ;
  int *err ;
  void *__dyc_funcallvar_1 ;
  int __dyc_funcallvar_2 ;
  long __dyc_funcallvar_3 ;
  char *__dyc_funcallvar_4 ;
  unsigned int __dyc_funcallvar_5 ;
  unsigned int __dyc_funcallvar_6 ;
  int __dyc_funcallvar_7 ;

  {
  ocr = __dyc_read_ptr__comp_60simple_object_coff_read();
  end = __dyc_read_ptr__char();
  err = __dyc_read_ptr__int();
  __dyc_funcallvar_1 = __dyc_read_ptr__void();
  __dyc_funcallvar_2 = __dyc_readpre_byte();
  __dyc_funcallvar_3 = (long )__dyc_readpre_byte();
  __dyc_funcallvar_4 = __dyc_read_ptr__char();
  __dyc_funcallvar_5 = (unsigned int )__dyc_readpre_byte();
  __dyc_funcallvar_6 = (unsigned int )__dyc_readpre_byte();
  __dyc_funcallvar_7 = __dyc_readpre_byte();
  scnhdr_size = 0;
  scnbuf = 0;
  fetch_32 = 0;
  nscns = 0;
  strtab = 0;
  strtab_size = 0;
  i = 0;
  tmp = 0;
  tmp___0 = 0;
  scnhdr = 0;
  scnname = 0;
  name = 0;
  scnptr = 0;
  size = 0;
  strindex = 0;
  tmp___1 = 0;
  tmp___2 = 0;
  tmp___3 = 0;
  scnhdr_size = sizeof(struct external_scnhdr );
  tmp = __dyc_funcallvar_1;
  scnbuf = (unsigned char *)tmp;
  tmp___0 = __dyc_funcallvar_2;
  if (! tmp___0) {
    {

    }
    goto __dyc_dummy_label;
  }
  if (ocr->is_big_endian) {
    fetch_32 = & simple_object_fetch_big_32;
  } else {
    fetch_32 = & simple_object_fetch_little_32;
  }
  nscns = (unsigned int )ocr->nscns;
  strtab = (char *)((void *)0);
  strtab_size = 0UL;
  i = 0U;
  while (1) {
    while_1_continue:  ;
    if (! (i < nscns)) {
      goto while_1_break;
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
    {
    tmp___2 = __dyc_funcallvar_5;
    scnptr = (long )tmp___2;
    size = __dyc_funcallvar_6;
    tmp___3 = __dyc_funcallvar_7;
    }
    if (! tmp___3) {
      goto while_1_break;
    }
    i ++;
  }
  while_1_break:  ;
  if ((unsigned long )strtab != (unsigned long )((void *)0)) {
    {

    }
  }
  __dyc_dummy_label:  ;
  __dyc_printpre_byte(scnhdr_size);
  __dyc_print_ptr__char(scnbuf);
  __dyc_print_ptr__fun_name_is_not_here(fetch_32);
  __dyc_printpre_byte(strtab_size);
  __dyc_print_ptr__char(scnname);
  __dyc_print_ptr__char(name);
  __dyc_printpre_byte(scnptr);
  __dyc_printpre_byte(size);
  __dyc_printpre_byte(strindex);
}
}
