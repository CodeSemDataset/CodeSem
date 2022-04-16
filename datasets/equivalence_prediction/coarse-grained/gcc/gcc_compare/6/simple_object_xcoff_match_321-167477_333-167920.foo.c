#include "../../include/dycfoo.h"
#include "../../include/simple-object-xcoff.i.hd.c.h"
void __dyc_foo(void) 
{ unsigned int (*simple_object_fetch_big_32)(unsigned char const   *buf ) ;
  ulong_type (*simple_object_fetch_big_64)(unsigned char const   *buf ) ;
  unsigned short magic ;
  unsigned int (*fetch_32)(unsigned char const   * ) ;
  ulong_type (*fetch_64)(unsigned char const   * ) ;
  struct simple_object_xcoff_read *ocr ;
  int u64 ;
  int tmp ;
  void *tmp___0 ;
  ulong_type tmp___1 ;
  unsigned short tmp___2 ;
  unsigned int tmp___3 ;
  unsigned short tmp___4 ;
  int __dyc_funcallvar_2 ;
  void *__dyc_funcallvar_3 ;
  unsigned short __dyc_funcallvar_4 ;
  ulong_type __dyc_funcallvar_5 ;
  unsigned int __dyc_funcallvar_6 ;
  unsigned short __dyc_funcallvar_7 ;
  unsigned int __dyc_funcallvar_8 ;
  unsigned int __dyc_funcallvar_9 ;
  unsigned short __dyc_funcallvar_10 ;

  {
  magic = (unsigned short )__dyc_readpre_byte();
  __dyc_funcallvar_2 = __dyc_readpre_byte();
  __dyc_funcallvar_3 = __dyc_read_ptr__void();
  __dyc_funcallvar_4 = (unsigned short )__dyc_readpre_byte();
  __dyc_funcallvar_5 = (ulong_type )__dyc_readpre_byte();
  __dyc_funcallvar_6 = (unsigned int )__dyc_readpre_byte();
  __dyc_funcallvar_7 = (unsigned short )__dyc_readpre_byte();
  __dyc_funcallvar_8 = (unsigned int )__dyc_readpre_byte();
  __dyc_funcallvar_9 = (unsigned int )__dyc_readpre_byte();
  __dyc_funcallvar_10 = (unsigned short )__dyc_readpre_byte();
  fetch_32 = 0;
  fetch_64 = 0;
  ocr = 0;
  u64 = 0;
  tmp = 0;
  tmp___0 = 0;
  tmp___1 = 0;
  tmp___2 = 0;
  tmp___3 = 0;
  tmp___4 = 0;
  fetch_32 = & simple_object_fetch_big_32;
  fetch_64 = & simple_object_fetch_big_64;
  tmp = __dyc_funcallvar_2;
  if (! tmp) {
    goto __dyc_dummy_label;
  }
  u64 = (int )magic == 503;
  tmp___0 = __dyc_funcallvar_3;
  ocr = (struct simple_object_xcoff_read *)tmp___0;
  ocr->magic = magic;
  ocr->nscns = __dyc_funcallvar_4;
  if (u64) {
    {
    tmp___1 = __dyc_funcallvar_5;
    ocr->symptr = (long )tmp___1;
    ocr->nsyms = __dyc_funcallvar_6;
    tmp___2 = __dyc_funcallvar_7;
    ocr->scnhdr_offset = (long )(sizeof(struct external_filehdr ) + (unsigned long )tmp___2);
    }
  } else {
    {
    tmp___3 = __dyc_funcallvar_8;
    ocr->symptr = (long )tmp___3;
    ocr->nsyms = __dyc_funcallvar_9;
    tmp___4 = __dyc_funcallvar_10;
    ocr->scnhdr_offset = (long )((sizeof(struct external_filehdr ) - 4UL) + (unsigned long )tmp___4);
    }
  }
  __dyc_dummy_label:  ;
  __dyc_print_ptr__fun_name_is_not_here(fetch_32);
  __dyc_print_ptr__fun_name_is_not_here(fetch_64);
}
}
