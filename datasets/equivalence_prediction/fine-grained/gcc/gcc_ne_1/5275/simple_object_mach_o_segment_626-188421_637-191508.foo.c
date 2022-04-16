#include "../../include/dycfoo.h"
#include "../../include/simple-object-mach-o.i.hd.c.h"
void __dyc_foo(void) 
{ struct simple_object_mach_o_read *omr ;
  size_t segname_offset ;
  unsigned int i ;
  unsigned int gnu_sections_found ;
  unsigned int strtab_index ;
  unsigned int index_index ;
  unsigned int nametab_index ;
  unsigned int sections_index ;
  char *nametab ;
  unsigned int n_wrapped_sects ;
  off_t wrapper_sect_offset ;
  unsigned char const   *sechdr ;
  char *name ;
  off_t secoffset ;
  size_t secsize ;
  size_t __s1_len___4 ;
  size_t __s2_len___4 ;
  int tmp___106 ;
  int tmp___111 ;
  int tmp___112 ;
  int tmp___113 ;
  int tmp___114 ;
  unsigned int j ;
  unsigned int subsect_offset ;
  unsigned int subsect_length ;
  unsigned int name_offset ;
  int tmp___115 ;
  char const   **errmsg ;
  int *err ;
  int __dyc_funcallvar_36 ;
  int __dyc_funcallvar_37 ;
  int __dyc_funcallvar_38 ;
  int __dyc_funcallvar_39 ;
  int __dyc_funcallvar_40 ;
  unsigned int __dyc_funcallvar_41 ;
  unsigned int __dyc_funcallvar_42 ;
  unsigned int __dyc_funcallvar_43 ;
  int __dyc_funcallvar_44 ;

  {
  omr = __dyc_read_ptr__comp_58simple_object_mach_o_read();
  segname_offset = (size_t )__dyc_readpre_byte();
  i = (unsigned int )__dyc_readpre_byte();
  gnu_sections_found = (unsigned int )__dyc_readpre_byte();
  strtab_index = (unsigned int )__dyc_readpre_byte();
  index_index = (unsigned int )__dyc_readpre_byte();
  nametab_index = (unsigned int )__dyc_readpre_byte();
  sections_index = (unsigned int )__dyc_readpre_byte();
  nametab = __dyc_read_ptr__char();
  n_wrapped_sects = (unsigned int )__dyc_readpre_byte();
  wrapper_sect_offset = (off_t )__dyc_readpre_byte();
  sechdr = (unsigned char const   *)__dyc_read_ptr__char();
  errmsg = (char const   **)__dyc_read_ptr__ptr__char();
  err = __dyc_read_ptr__int();
  __dyc_funcallvar_36 = __dyc_readpre_byte();
  __dyc_funcallvar_37 = __dyc_readpre_byte();
  __dyc_funcallvar_38 = __dyc_readpre_byte();
  __dyc_funcallvar_39 = __dyc_readpre_byte();
  __dyc_funcallvar_40 = __dyc_readpre_byte();
  __dyc_funcallvar_41 = (unsigned int )__dyc_readpre_byte();
  __dyc_funcallvar_42 = (unsigned int )__dyc_readpre_byte();
  __dyc_funcallvar_43 = (unsigned int )__dyc_readpre_byte();
  __dyc_funcallvar_44 = __dyc_readpre_byte();
  name = 0;
  secoffset = 0;
  secsize = 0;
  __s1_len___4 = 0;
  __s2_len___4 = 0;
  tmp___106 = 0;
  tmp___111 = 0;
  tmp___112 = 0;
  tmp___113 = 0;
  tmp___114 = 0;
  j = 0;
  subsect_offset = 0;
  subsect_length = 0;
  name_offset = 0;
  tmp___115 = 0;
  if ((gnu_sections_found & 8U) != 0U) {
    if (i == strtab_index) {
      goto __dyc_dummy_label;
    }
  }
  if (0) {
    {
    tmp___112 = __dyc_funcallvar_36;
    __s1_len___4 = (unsigned long )tmp___112;
    tmp___113 = __dyc_funcallvar_37;
    __s2_len___4 = (unsigned long )tmp___113;
    }
    if (! ((unsigned long )((void const   *)(((char *)sechdr + segname_offset) + 1)) - (unsigned long )((void const   *)((char *)sechdr + segname_offset)) == 1UL)) {
      goto _L___10;
    } else {
      if (__s1_len___4 >= 4UL) {
        _L___10:  
        if (! ((unsigned long )((void const   *)(omr->segment_name + 1)) - (unsigned long )((void const   *)omr->segment_name) == 1UL)) {
          tmp___114 = 1;
        } else {
          if (__s2_len___4 >= 4UL) {
            tmp___114 = 1;
          } else {
            tmp___114 = 0;
          }
        }
      } else {
        tmp___114 = 0;
      }
    }
    if (tmp___114) {
      {
      tmp___106 = __dyc_funcallvar_38;
      }
    } else {
      {
      tmp___111 = __dyc_funcallvar_39;
      tmp___106 = tmp___111;
      }
    }
  } else {
    {
    tmp___111 = __dyc_funcallvar_40;
    tmp___106 = tmp___111;
    }
  }
  if (tmp___106 != 0) {
    goto __dyc_dummy_label;
  }
  if ((gnu_sections_found & 7U) != 0U) {
    if (i == nametab_index) {
      goto __dyc_dummy_label;
    } else {
      if (i == index_index) {
        goto __dyc_dummy_label;
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
      goto __dyc_dummy_label;
    }
  }
  __dyc_dummy_label:  ;
  __dyc_print_ptr__char(name);
  __dyc_printpre_byte(secoffset);
  __dyc_printpre_byte(secsize);
  __dyc_printpre_byte(__s1_len___4);
  __dyc_printpre_byte(__s2_len___4);
}
}
