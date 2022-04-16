#include "../../include/dycfoo.h"
#include "../../include/simple-object-coff.i.hd.c.h"
void __dyc_foo(void) 
{ unsigned short (*simple_object_fetch_big_16)(unsigned char const   *buf ) ;
  unsigned short (*simple_object_fetch_little_16)(unsigned char const   *buf ) ;
  unsigned int (*simple_object_fetch_big_32)(unsigned char const   *buf ) ;
  unsigned int (*simple_object_fetch_little_32)(unsigned char const   *buf ) ;
  struct coff_magic_struct  const  coff_magic[2] ;
  size_t c ;
  unsigned short magic_big ;
  unsigned short magic_little ;
  unsigned short magic ;
  size_t i ;
  int is_big_endian ;
  unsigned short (*fetch_16)(unsigned char const   * ) ;
  unsigned int (*fetch_32)(unsigned char const   * ) ;
  unsigned short flags ;
  int tmp___0 ;
  char const   **errmsg ;
  int *err ;
  int __dyc_funcallvar_3 ;
  unsigned short __dyc_funcallvar_4 ;

  {
  c = (size_t )__dyc_readpre_byte();
  magic_big = (unsigned short )__dyc_readpre_byte();
  magic_little = (unsigned short )__dyc_readpre_byte();
  i = (size_t )__dyc_readpre_byte();
  errmsg = (char const   **)__dyc_read_ptr__ptr__char();
  err = __dyc_read_ptr__int();
  __dyc_funcallvar_3 = __dyc_readpre_byte();
  __dyc_funcallvar_4 = (unsigned short )__dyc_readpre_byte();
  magic = 0;
  is_big_endian = 0;
  fetch_16 = 0;
  fetch_32 = 0;
  flags = 0;
  tmp___0 = 0;
  if (i >= c) {
    *errmsg = (char const   *)((void *)0);
    *err = 0;
    goto __dyc_dummy_label;
  }
  is_big_endian = (int )coff_magic[i].is_big_endian;
  if (is_big_endian) {
    magic = magic_big;
  } else {
    magic = magic_little;
  }
  if (is_big_endian) {
    fetch_16 = & simple_object_fetch_big_16;
  } else {
    fetch_16 = & simple_object_fetch_little_16;
  }
  if (is_big_endian) {
    fetch_32 = & simple_object_fetch_big_32;
  } else {
    fetch_32 = & simple_object_fetch_little_32;
  }
  tmp___0 = __dyc_funcallvar_3;
  if (! tmp___0) {
    goto __dyc_dummy_label;
  }
  flags = __dyc_funcallvar_4;
  __dyc_dummy_label:  ;
  __dyc_printpre_byte(magic);
  __dyc_print_ptr__fun_name_is_not_here(fetch_16);
  __dyc_print_ptr__fun_name_is_not_here(fetch_32);
  __dyc_printpre_byte(flags);
}
}
