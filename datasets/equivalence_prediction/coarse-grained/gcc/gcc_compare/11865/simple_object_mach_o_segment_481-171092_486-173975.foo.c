#include "../../include/dycfoo.h"
#include "../../include/simple-object-mach-o.i.hd.c.h"
void __dyc_foo(void) 
{ struct simple_object_mach_o_read *omr ;
  size_t sechdrsize ;
  size_t segname_offset ;
  unsigned int nsects ;
  unsigned char *secdata ;
  unsigned int i ;
  size_t nameoff ;
  size_t __s1_len ;
  size_t __s2_len ;
  int tmp___10 ;
  int tmp___15 ;
  int tmp___16 ;
  int tmp___17 ;
  int tmp___18 ;
  int __dyc_funcallvar_5 ;
  int __dyc_funcallvar_6 ;
  int __dyc_funcallvar_7 ;
  int __dyc_funcallvar_8 ;
  int __dyc_funcallvar_9 ;

  {
  omr = __dyc_read_ptr__comp_58simple_object_mach_o_read();
  sechdrsize = (size_t )__dyc_readpre_byte();
  segname_offset = (size_t )__dyc_readpre_byte();
  nsects = (unsigned int )__dyc_readpre_byte();
  secdata = (unsigned char *)__dyc_read_ptr__char();
  i = (unsigned int )__dyc_readpre_byte();
  __dyc_funcallvar_5 = __dyc_readpre_byte();
  __dyc_funcallvar_6 = __dyc_readpre_byte();
  __dyc_funcallvar_7 = __dyc_readpre_byte();
  __dyc_funcallvar_8 = __dyc_readpre_byte();
  __dyc_funcallvar_9 = __dyc_readpre_byte();
  nameoff = 0;
  __s1_len = 0;
  __s2_len = 0;
  tmp___10 = 0;
  tmp___15 = 0;
  tmp___16 = 0;
  tmp___17 = 0;
  tmp___18 = 0;
  if (! (i < nsects)) {
    goto __dyc_dummy_label;
  }
  nameoff = (size_t )i * sechdrsize + segname_offset;
  if (0) {
    {
    tmp___16 = __dyc_funcallvar_5;
    __s1_len = (unsigned long )tmp___16;
    tmp___17 = __dyc_funcallvar_6;
    __s2_len = (unsigned long )tmp___17;
    }
    if (! ((unsigned long )((void const   *)(((char *)secdata + nameoff) + 1)) - (unsigned long )((void const   *)((char *)secdata + nameoff)) == 1UL)) {
      goto _L___0;
    } else {
      if (__s1_len >= 4UL) {
        _L___0:  
        if (! ((unsigned long )((void const   *)(omr->segment_name + 1)) - (unsigned long )((void const   *)omr->segment_name) == 1UL)) {
          tmp___18 = 1;
        } else {
          if (__s2_len >= 4UL) {
            tmp___18 = 1;
          } else {
            tmp___18 = 0;
          }
        }
      } else {
        tmp___18 = 0;
      }
    }
    if (tmp___18) {
      {
      tmp___10 = __dyc_funcallvar_7;
      }
    } else {
      {
      tmp___15 = __dyc_funcallvar_8;
      tmp___10 = tmp___15;
      }
    }
  } else {
    {
    tmp___15 = __dyc_funcallvar_9;
    tmp___10 = tmp___15;
    }
  }
  if (tmp___10 != 0) {
    goto __dyc_dummy_label;
  }
  __dyc_dummy_label:  ;
  __dyc_printpre_byte(nameoff);
  __dyc_printpre_byte(__s1_len);
  __dyc_printpre_byte(__s2_len);
}
}
