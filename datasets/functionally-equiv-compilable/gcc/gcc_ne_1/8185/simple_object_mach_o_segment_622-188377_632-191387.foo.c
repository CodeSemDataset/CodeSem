#include "../../include/dycfoo.h"
#include "../../include/simple-object-mach-o.i.hd.c.h"
void __dyc_foo(void) 
{ struct simple_object_mach_o_read *omr ;
  size_t sechdrsize ;
  size_t segname_offset ;
  unsigned char *secdata ;
  unsigned int i ;
  unsigned int gnu_sections_found ;
  unsigned int strtab_index ;
  unsigned char const   *sechdr ;
  size_t __s1_len___4 ;
  size_t __s2_len___4 ;
  int tmp___106 ;
  int tmp___111 ;
  int tmp___112 ;
  int tmp___113 ;
  int tmp___114 ;
  int __dyc_funcallvar_36 ;
  int __dyc_funcallvar_37 ;
  int __dyc_funcallvar_38 ;
  int __dyc_funcallvar_39 ;
  int __dyc_funcallvar_40 ;

  {
  omr = __dyc_read_ptr__comp_58simple_object_mach_o_read();
  sechdrsize = (size_t )__dyc_readpre_byte();
  segname_offset = (size_t )__dyc_readpre_byte();
  secdata = (unsigned char *)__dyc_read_ptr__char();
  i = (unsigned int )__dyc_readpre_byte();
  gnu_sections_found = (unsigned int )__dyc_readpre_byte();
  strtab_index = (unsigned int )__dyc_readpre_byte();
  __dyc_funcallvar_36 = __dyc_readpre_byte();
  __dyc_funcallvar_37 = __dyc_readpre_byte();
  __dyc_funcallvar_38 = __dyc_readpre_byte();
  __dyc_funcallvar_39 = __dyc_readpre_byte();
  __dyc_funcallvar_40 = __dyc_readpre_byte();
  sechdr = 0;
  __s1_len___4 = 0;
  __s2_len___4 = 0;
  tmp___106 = 0;
  tmp___111 = 0;
  tmp___112 = 0;
  tmp___113 = 0;
  tmp___114 = 0;
  sechdr = (unsigned char const   *)(secdata + (size_t )i * sechdrsize);
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
  __dyc_dummy_label:  ;
  __dyc_print_ptr__char(sechdr);
  __dyc_printpre_byte(__s1_len___4);
  __dyc_printpre_byte(__s2_len___4);
}
}
