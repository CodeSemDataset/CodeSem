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
  char const   *segment_name ;
  char const   **errmsg ;
  int *err ;
  unsigned int __dyc_funcallvar_2 ;
  size_t __dyc_funcallvar_3 ;
  int __dyc_funcallvar_4 ;
  unsigned int __dyc_funcallvar_5 ;
  void *__dyc_funcallvar_6 ;
  char *__dyc_funcallvar_7 ;
  unsigned int __dyc_funcallvar_8 ;

  {
  magic = (unsigned int )__dyc_readpre_byte();
  segment_name = (char const   *)__dyc_read_ptr__char();
  errmsg = (char const   **)__dyc_read_ptr__ptr__char();
  err = __dyc_read_ptr__int();
  __dyc_funcallvar_2 = (unsigned int )__dyc_readpre_byte();
  __dyc_funcallvar_3 = (size_t )__dyc_readpre_byte();
  __dyc_funcallvar_4 = __dyc_readpre_byte();
  __dyc_funcallvar_5 = (unsigned int )__dyc_readpre_byte();
  __dyc_funcallvar_6 = __dyc_read_ptr__void();
  __dyc_funcallvar_7 = __dyc_read_ptr__char();
  __dyc_funcallvar_8 = (unsigned int )__dyc_readpre_byte();
  is_big_endian = 0;
  fetch_32 = 0;
  filetype = 0;
  omr = 0;
  b = 0;
  tmp = 0;
  tmp___0 = 0;
  tmp___1 = 0;
  tmp___2 = 0;
  if (magic == 4277009102U) {
    is_big_endian = 1;
  } else {
    if (magic == 4277009103U) {
      is_big_endian = 1;
    } else {
      {
      magic = __dyc_funcallvar_2;
      }
      if (magic == 4277009102U) {
        is_big_endian = 0;
      } else {
        if (magic == 4277009103U) {
          is_big_endian = 0;
        } else {
          *errmsg = (char const   *)((void *)0);
          *err = 0;
          goto __dyc_dummy_label;
        }
      }
    }
  }
  if ((unsigned long )segment_name == (unsigned long )((void *)0)) {
    *errmsg = "Mach-O file found but no segment name specified";
    *err = 0;
    goto __dyc_dummy_label;
  }
  tmp = __dyc_funcallvar_3;
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
  omr->segment_name = __dyc_funcallvar_7;
  omr->magic = magic;
  omr->is_big_endian = is_big_endian;
  omr->cputype = __dyc_funcallvar_8;
  __dyc_dummy_label:  ;
  __dyc_printpre_byte(is_big_endian);
  __dyc_print_ptr__fun_name_is_not_here(fetch_32);
  __dyc_print_ptr__char(b);
  __dyc_printpre_byte(tmp___0);
}
}
