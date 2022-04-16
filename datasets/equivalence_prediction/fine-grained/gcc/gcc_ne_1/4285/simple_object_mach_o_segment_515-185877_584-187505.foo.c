#include "../../include/dycfoo.h"
#include "../../include/simple-object-mach-o.i.hd.c.h"
void __dyc_foo(void) 
{ unsigned int nsects ;
  unsigned int gnu_sections_found ;
  unsigned int strtab_index ;
  char *strtab ;
  char *nametab ;
  unsigned char *index___0 ;
  size_t strtab_size ;
  size_t nametab_size ;
  size_t index_size ;
  unsigned int n_wrapped_sects ;
  void *tmp___91 ;
  int tmp___92 ;
  void *tmp___93 ;
  int tmp___94 ;
  void *tmp___95 ;
  int tmp___96 ;
  char const   **errmsg ;
  int *err ;
  void *__dyc_funcallvar_30 ;
  int __dyc_funcallvar_31 ;
  void *__dyc_funcallvar_32 ;
  int __dyc_funcallvar_33 ;
  void *__dyc_funcallvar_34 ;
  int __dyc_funcallvar_35 ;

  {
  nsects = (unsigned int )__dyc_readpre_byte();
  gnu_sections_found = (unsigned int )__dyc_readpre_byte();
  index_size = (size_t )__dyc_readpre_byte();
  errmsg = (char const   **)__dyc_read_ptr__ptr__char();
  err = __dyc_read_ptr__int();
  __dyc_funcallvar_30 = __dyc_read_ptr__void();
  __dyc_funcallvar_31 = __dyc_readpre_byte();
  __dyc_funcallvar_32 = __dyc_read_ptr__void();
  __dyc_funcallvar_33 = __dyc_readpre_byte();
  __dyc_funcallvar_34 = __dyc_read_ptr__void();
  __dyc_funcallvar_35 = __dyc_readpre_byte();
  strtab_index = 0;
  strtab = 0;
  nametab = 0;
  index___0 = 0;
  strtab_size = 0;
  nametab_size = 0;
  n_wrapped_sects = 0;
  tmp___91 = 0;
  tmp___92 = 0;
  tmp___93 = 0;
  tmp___94 = 0;
  tmp___95 = 0;
  tmp___96 = 0;
  if ((gnu_sections_found & 7U) != 0U) {
    if ((gnu_sections_found & 7U) != 7U) {
      {
      *errmsg = "GNU Mach-o section wrapper: required section missing";
      *err = 0;

      }
      goto __dyc_dummy_label;
    }
    {

    tmp___91 = __dyc_funcallvar_30;
    nametab = (char *)tmp___91;
    tmp___92 = __dyc_funcallvar_31;
    }
    if (! tmp___92) {
      {


      }
      goto __dyc_dummy_label;
    }
    {

    tmp___93 = __dyc_funcallvar_32;
    index___0 = (unsigned char *)tmp___93;
    tmp___94 = __dyc_funcallvar_33;
    }
    if (! tmp___94) {
      {



      }
      goto __dyc_dummy_label;
    }
    {
    n_wrapped_sects = (unsigned int )(index_size / 16UL);

    }
  } else {
    index___0 = (unsigned char *)((void *)0);
    index_size = 0UL;
    nametab = (char *)((void *)0);
    nametab_size = 0UL;
    n_wrapped_sects = 0U;
  }
  if ((gnu_sections_found & 8U) != 0U) {
    {

    tmp___95 = __dyc_funcallvar_34;
    strtab = (char *)tmp___95;
    tmp___96 = __dyc_funcallvar_35;
    }
    if (! tmp___96) {
      {




      }
      goto __dyc_dummy_label;
    }
  } else {
    strtab = (char *)((void *)0);
    strtab_size = 0UL;
    strtab_index = nsects;
  }
  __dyc_dummy_label:  ;
  __dyc_printpre_byte(strtab_index);
  __dyc_print_ptr__char(strtab);
  __dyc_print_ptr__char(nametab);
  __dyc_print_ptr__char(index___0);
  __dyc_printpre_byte(strtab_size);
  __dyc_printpre_byte(nametab_size);
  __dyc_printpre_byte(index_size);
  __dyc_printpre_byte(n_wrapped_sects);
}
}
