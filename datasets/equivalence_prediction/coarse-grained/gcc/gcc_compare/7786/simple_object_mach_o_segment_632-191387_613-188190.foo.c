#include "../../include/dycfoo.h"
#include "../../include/simple-object-mach-o.i.hd.c.h"
void __dyc_foo(void) 
{ unsigned int i ;
  unsigned int gnu_sections_found ;
  unsigned int index_index ;
  unsigned int nametab_index ;
  unsigned int sections_index ;
  char *strtab ;
  char *nametab ;
  size_t strtab_size ;
  unsigned int n_wrapped_sects ;
  off_t wrapper_sect_offset ;
  char namebuf[34] ;
  char *name ;
  off_t secoffset ;
  size_t secsize ;
  int l ;
  int tmp___106 ;
  unsigned int j ;
  unsigned int subsect_offset ;
  unsigned int subsect_length ;
  unsigned int name_offset ;
  int tmp___115 ;
  unsigned long stringoffset ;
  int tmp___116 ;
  size_t tmp___117 ;
  int tmp___118 ;
  char const   **errmsg ;
  int *err ;
  unsigned int __dyc_funcallvar_41 ;
  unsigned int __dyc_funcallvar_42 ;
  unsigned int __dyc_funcallvar_43 ;
  int __dyc_funcallvar_44 ;
  int __dyc_funcallvar_45 ;
  size_t __dyc_funcallvar_46 ;
  int __dyc_funcallvar_47 ;

  {
  i = (unsigned int )__dyc_readpre_byte();
  gnu_sections_found = (unsigned int )__dyc_readpre_byte();
  index_index = (unsigned int )__dyc_readpre_byte();
  nametab_index = (unsigned int )__dyc_readpre_byte();
  sections_index = (unsigned int )__dyc_readpre_byte();
  strtab = __dyc_read_ptr__char();
  nametab = __dyc_read_ptr__char();
  strtab_size = (size_t )__dyc_readpre_byte();
  n_wrapped_sects = (unsigned int )__dyc_readpre_byte();
  wrapper_sect_offset = (off_t )__dyc_readpre_byte();
  tmp___106 = __dyc_readpre_byte();
  stringoffset = (unsigned long )__dyc_readpre_byte();
  errmsg = (char const   **)__dyc_read_ptr__ptr__char();
  err = __dyc_read_ptr__int();
  __dyc_funcallvar_41 = (unsigned int )__dyc_readpre_byte();
  __dyc_funcallvar_42 = (unsigned int )__dyc_readpre_byte();
  __dyc_funcallvar_43 = (unsigned int )__dyc_readpre_byte();
  __dyc_funcallvar_44 = __dyc_readpre_byte();
  __dyc_funcallvar_45 = __dyc_readpre_byte();
  __dyc_funcallvar_46 = (size_t )__dyc_readpre_byte();
  __dyc_funcallvar_47 = __dyc_readpre_byte();
  name = 0;
  secoffset = 0;
  secsize = 0;
  l = 0;
  j = 0;
  subsect_offset = 0;
  subsect_length = 0;
  name_offset = 0;
  tmp___115 = 0;
  tmp___116 = 0;
  tmp___117 = 0;
  tmp___118 = 0;
  if (tmp___106 != 0) {
    goto __Cont___0;
  }
  if ((gnu_sections_found & 7U) != 0U) {
    if (i == nametab_index) {
      goto __Cont___0;
    } else {
      if (i == index_index) {
        goto __Cont___0;
      }
    }
    if (i == sections_index) {
      j = 0U;
      {
      while (1) {
        while_2_continue:  ;
        if (! (j < n_wrapped_sects)) {
          goto while_2_break;
        }
        {
        subsect_offset = __dyc_funcallvar_41;
        subsect_length = __dyc_funcallvar_42;
        name_offset = __dyc_funcallvar_43;
        secoffset = wrapper_sect_offset + (off_t )subsect_offset;
        secsize = (unsigned long )subsect_length;
        name = nametab + name_offset;
        tmp___115 = __dyc_funcallvar_44;
        }
        if (! tmp___115) {
          {
          *errmsg = (char const   *)((void *)0);
          *err = 0;




          }
          goto __dyc_dummy_label;
        }
        j ++;
      }
      while_2_break:  ;
      }
      goto __Cont___0;
    }
  }
  if ((gnu_sections_found & 8U) != 0U) {
    {

    namebuf[16] = (char )'\000';
    name = namebuf;
    }
    if ((unsigned long )strtab != (unsigned long )((void *)0)) {
      if ((int )*(name + 0) == 95) {
        if ((int )*(name + 1) == 95) {
          {
          tmp___116 = __dyc_funcallvar_45;
          }
          if (tmp___116 == 1) {
            if (stringoffset >= strtab_size) {
              {
              *errmsg = "section name offset out of range";
              *err = 0;




              }
              goto __dyc_dummy_label;
            }
            name = strtab + stringoffset;
          }
        }
      }
    }
  } else {
    {
    name = namebuf;

    namebuf[16] = (char )'\000';
    tmp___117 = __dyc_funcallvar_46;
    l = (int )tmp___117;
    namebuf[l] = (char )',';

    namebuf[(l + 1) + 16] = (char )'\000';
    }
  }

  tmp___118 = __dyc_funcallvar_47;
  if (! tmp___118) {
    {
    *errmsg = (char const   *)((void *)0);
    *err = 0;




    }
    goto __dyc_dummy_label;
  }
  __Cont___0:  
  i ++;
  __dyc_dummy_label:  ;
  __dyc_printpre_byte(i);
  __dyc_print_ptr__char(name);
  __dyc_printpre_byte(secoffset);
  __dyc_printpre_byte(secsize);
}
}
