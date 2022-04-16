#include "../../include/dycfoo.h"
#include "../../include/simple-object-elf.i.hd.c.h"
void __dyc_foo(void) 
{ unsigned char ei_class ;
  size_t name_size ;
  unsigned int i ;
  char const   **pfnname ;
  unsigned int sh_name___0 ;
  unsigned int sh_type___1 ;
  char const   *name___0 ;
  off_t offset___0 ;
  off_t length___0 ;
  ulong_type tmp___47 ;
  ulong_type tmp___48 ;
  ulong_type tmp___51 ;
  ulong_type tmp___52 ;
  int *err ;
  ulong_type __dyc_funcallvar_38 ;
  ulong_type __dyc_funcallvar_39 ;
  ulong_type __dyc_funcallvar_40 ;
  ulong_type __dyc_funcallvar_41 ;
  unsigned int __dyc_funcallvar_42 ;
  unsigned int __dyc_funcallvar_43 ;

  {
  ei_class = (unsigned char )__dyc_readpre_byte();
  name_size = (size_t )__dyc_readpre_byte();
  i = (unsigned int )__dyc_readpre_byte();
  pfnname = (char const   **)__dyc_read_ptr__ptr__char();
  sh_name___0 = (unsigned int )__dyc_readpre_byte();
  err = __dyc_read_ptr__int();
  __dyc_funcallvar_38 = (ulong_type )__dyc_readpre_byte();
  __dyc_funcallvar_39 = (ulong_type )__dyc_readpre_byte();
  __dyc_funcallvar_40 = (ulong_type )__dyc_readpre_byte();
  __dyc_funcallvar_41 = (ulong_type )__dyc_readpre_byte();
  __dyc_funcallvar_42 = (unsigned int )__dyc_readpre_byte();
  __dyc_funcallvar_43 = (unsigned int )__dyc_readpre_byte();
  sh_type___1 = 0;
  name___0 = 0;
  offset___0 = 0;
  length___0 = 0;
  tmp___47 = 0;
  tmp___48 = 0;
  tmp___51 = 0;
  tmp___52 = 0;
  if ((size_t )sh_name___0 >= name_size) {
    {
    *err = 0;



    }
    goto __dyc_dummy_label;
  }
  name___0 = *(pfnname + (i - 1U));
  if ((int )ei_class == 1) {
    {
    tmp___47 = __dyc_funcallvar_38;
    offset___0 = (long )tmp___47;
    }
  } else {
    {
    tmp___48 = __dyc_funcallvar_39;
    offset___0 = (long )tmp___48;
    }
  }
  if ((int )ei_class == 1) {
    {
    tmp___51 = __dyc_funcallvar_40;
    length___0 = (long )tmp___51;
    }
  } else {
    {
    tmp___52 = __dyc_funcallvar_41;
    length___0 = (long )tmp___52;
    }
  }
  if ((int )ei_class == 1) {
    {
    sh_type___1 = __dyc_funcallvar_42;
    }
  } else {
    {
    sh_type___1 = __dyc_funcallvar_43;
    }
  }
  __dyc_dummy_label:  ;
  __dyc_printpre_byte(sh_type___1);
  __dyc_print_ptr__char(name___0);
  __dyc_printpre_byte(offset___0);
  __dyc_printpre_byte(length___0);
}
}
