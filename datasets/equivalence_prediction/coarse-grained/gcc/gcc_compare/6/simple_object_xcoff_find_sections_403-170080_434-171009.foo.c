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
  void *tmp ;
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
  simple_object_read *sobj ;
  int *err ;
  void *__dyc_funcallvar_1 ;
  int __dyc_funcallvar_2 ;
  long __dyc_funcallvar_3 ;
  char *__dyc_funcallvar_4 ;
  ulong_type __dyc_funcallvar_5 ;
  ulong_type __dyc_funcallvar_6 ;
  unsigned int __dyc_funcallvar_7 ;
  unsigned int __dyc_funcallvar_8 ;
  int __dyc_funcallvar_9 ;

  {
  end = __dyc_read_ptr__char();
  sobj = __dyc_read_ptr__typdef_simple_object_read();
  err = __dyc_read_ptr__int();
  __dyc_funcallvar_1 = __dyc_read_ptr__void();
  __dyc_funcallvar_2 = __dyc_readpre_byte();
  __dyc_funcallvar_3 = (long )__dyc_readpre_byte();
  __dyc_funcallvar_4 = __dyc_read_ptr__char();
  __dyc_funcallvar_5 = (ulong_type )__dyc_readpre_byte();
  __dyc_funcallvar_6 = (ulong_type )__dyc_readpre_byte();
  __dyc_funcallvar_7 = (unsigned int )__dyc_readpre_byte();
  __dyc_funcallvar_8 = (unsigned int )__dyc_readpre_byte();
  __dyc_funcallvar_9 = __dyc_readpre_byte();
  ocr = 0;
  u64 = 0;
  scnhdr_size = 0;
  scnbuf = 0;
  fetch_16 = 0;
  fetch_32 = 0;
  fetch_64 = 0;
  nscns = 0;
  strtab = 0;
  strtab_size = 0;
  symtab = 0;
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
  tmp___4 = 0;
  tmp___5 = 0;
  tmp___6 = 0;
  ocr = (struct simple_object_xcoff_read *)sobj->data;
  u64 = (int )ocr->magic == 503;
  symtab = (struct external_syment *)((void *)0);
  if (u64) {
    scnhdr_size = 68UL;
  } else {
    scnhdr_size = 40UL;
  }
  tmp = __dyc_funcallvar_1;
  scnbuf = (unsigned char *)tmp;
  tmp___0 = __dyc_funcallvar_2;
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
      goto __dyc_dummy_label;
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
      goto __dyc_dummy_label;
    }
    i ++;
  }
  __dyc_dummy_label:  ;
  __dyc_printpre_byte(scnhdr_size);
  __dyc_print_ptr__char(scnbuf);
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
}
}