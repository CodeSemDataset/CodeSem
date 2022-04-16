#include "../../include/dycfoo.h"
#include "../../include/simple-object-mach-o.i.hd.c.h"
void __dyc_foo(void) 
{ unsigned int (*simple_object_fetch_big_32)(unsigned char const   *buf ) ;
  unsigned int (*simple_object_fetch_little_32)(unsigned char const   *buf ) ;
  unsigned int magic ;
  int is_big_endian ;
  unsigned int (*fetch_32)(unsigned char const   * ) ;
  unsigned int filetype ;
  struct simple_object_mach_o_read *omr ;
  unsigned char buf[sizeof(struct mach_o_header_64 )] ;
  unsigned char *b ;
  size_t tmp ;
  unsigned long tmp___0 ;
  int tmp___1 ;
  void *tmp___2 ;
  char const   **errmsg ;
  int *err ;
  int __dyc_funcallvar_4 ;
  unsigned int __dyc_funcallvar_5 ;
  void *__dyc_funcallvar_6 ;

  {
  magic = (unsigned int )__dyc_readpre_byte();
  is_big_endian = __dyc_readpre_byte();
  tmp = (size_t )__dyc_readpre_byte();
  errmsg = (char const   **)__dyc_read_ptr__ptr__char();
  err = __dyc_read_ptr__int();
  __dyc_funcallvar_4 = __dyc_readpre_byte();
  __dyc_funcallvar_5 = (unsigned int )__dyc_readpre_byte();
  __dyc_funcallvar_6 = __dyc_read_ptr__void();
  fetch_32 = 0;
  filetype = 0;
  omr = 0;
  b = 0;
  tmp___0 = 0;
  tmp___1 = 0;
  tmp___2 = 0;
  if (tmp > 16UL) {
    *errmsg = "Mach-O segment name too long";
    *err = 0;
    goto __dyc_dummy_label;
  }
  if (is_big_endian) {
    fetch_32 = & simple_object_fetch_big_32;
  } else {
    fetch_32 = & simple_object_fetch_little_32;
  }
  if (magic == 4277009102U) {
    tmp___0 = sizeof(struct mach_o_header_32 );
  } else {
    tmp___0 = sizeof(struct mach_o_header_64 );
  }
  tmp___1 = __dyc_funcallvar_4;
  if (! tmp___1) {
    goto __dyc_dummy_label;
  }
  b = buf;
  filetype = __dyc_funcallvar_5;
  if (filetype != 1U) {
    *errmsg = "Mach-O file is not object file";
    *err = 0;
    goto __dyc_dummy_label;
  }
  tmp___2 = __dyc_funcallvar_6;
  omr = (struct simple_object_mach_o_read *)tmp___2;
  __dyc_dummy_label:  ;
  __dyc_print_ptr__fun_name_is_not_here(fetch_32);
  __dyc_print_ptr__comp_58simple_object_mach_o_read(omr);
  __dyc_print_ptr__char(b);
  __dyc_printpre_byte(tmp___0);
}
}
