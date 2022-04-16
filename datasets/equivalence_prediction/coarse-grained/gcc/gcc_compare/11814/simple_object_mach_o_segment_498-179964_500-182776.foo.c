#include "../../include/dycfoo.h"
#include "../../include/simple-object-mach-o.i.hd.c.h"
void __dyc_foo(void) 
{ unsigned char *secdata ;
  unsigned int i ;
  unsigned int gnu_sections_found ;
  unsigned int strtab_index ;
  unsigned int index_index ;
  unsigned int sections_index ;
  size_t nameoff ;
  size_t __s1_len___0 ;
  size_t __s2_len___0 ;
  int tmp___28 ;
  int tmp___33 ;
  int tmp___34 ;
  int tmp___35 ;
  int tmp___36 ;
  size_t __s1_len___1 ;
  size_t __s2_len___1 ;
  int tmp___46 ;
  int tmp___51 ;
  int tmp___52 ;
  int tmp___53 ;
  int tmp___54 ;
  int __dyc_funcallvar_20 ;
  int __dyc_funcallvar_21 ;
  int __dyc_funcallvar_22 ;
  int __dyc_funcallvar_23 ;
  int __dyc_funcallvar_24 ;
  int __dyc_funcallvar_25 ;
  int __dyc_funcallvar_26 ;
  int __dyc_funcallvar_27 ;
  int __dyc_funcallvar_28 ;
  int __dyc_funcallvar_29 ;

  {
  secdata = (unsigned char *)__dyc_read_ptr__char();
  i = (unsigned int )__dyc_readpre_byte();
  gnu_sections_found = (unsigned int )__dyc_readpre_byte();
  nameoff = (size_t )__dyc_readpre_byte();
  __dyc_funcallvar_20 = __dyc_readpre_byte();
  __dyc_funcallvar_21 = __dyc_readpre_byte();
  __dyc_funcallvar_22 = __dyc_readpre_byte();
  __dyc_funcallvar_23 = __dyc_readpre_byte();
  __dyc_funcallvar_24 = __dyc_readpre_byte();
  __dyc_funcallvar_25 = __dyc_readpre_byte();
  __dyc_funcallvar_26 = __dyc_readpre_byte();
  __dyc_funcallvar_27 = __dyc_readpre_byte();
  __dyc_funcallvar_28 = __dyc_readpre_byte();
  __dyc_funcallvar_29 = __dyc_readpre_byte();
  strtab_index = 0;
  index_index = 0;
  sections_index = 0;
  __s1_len___0 = 0;
  __s2_len___0 = 0;
  tmp___28 = 0;
  tmp___33 = 0;
  tmp___34 = 0;
  tmp___35 = 0;
  tmp___36 = 0;
  __s1_len___1 = 0;
  __s2_len___1 = 0;
  tmp___46 = 0;
  tmp___51 = 0;
  tmp___52 = 0;
  tmp___53 = 0;
  tmp___54 = 0;
  index_index = i;
  gnu_sections_found |= 2U;
  if (0) {
    {
    tmp___52 = __dyc_funcallvar_20;
    __s1_len___1 = (unsigned long )tmp___52;
    tmp___53 = __dyc_funcallvar_21;
    __s2_len___1 = (unsigned long )tmp___53;
    }
    if (! ((unsigned long )((void const   *)(((char *)secdata + nameoff) + 1)) - (unsigned long )((void const   *)((char *)secdata + nameoff)) == 1UL)) {
      goto _L___4;
    } else {
      if (__s1_len___1 >= 4UL) {
        _L___4:  
        if (! ((unsigned long )((void const   *)("__wrapper_sects" + 1)) - (unsigned long )((void const   *)"__wrapper_sects") == 1UL)) {
          tmp___54 = 1;
        } else {
          if (__s2_len___1 >= 4UL) {
            tmp___54 = 1;
          } else {
            tmp___54 = 0;
          }
        }
      } else {
        tmp___54 = 0;
      }
    }
    if (tmp___54) {
      {
      tmp___46 = __dyc_funcallvar_22;
      }
    } else {
      {
      tmp___51 = __dyc_funcallvar_23;
      tmp___46 = tmp___51;
      }
    }
  } else {
    {
    tmp___51 = __dyc_funcallvar_24;
    tmp___46 = tmp___51;
    }
  }
  if (tmp___46 == 0) {
    sections_index = i;
    gnu_sections_found |= 1U;
  } else {
    if (0) {
      {
      tmp___34 = __dyc_funcallvar_25;
      __s1_len___0 = (unsigned long )tmp___34;
      tmp___35 = __dyc_funcallvar_26;
      __s2_len___0 = (unsigned long )tmp___35;
      }
      if (! ((unsigned long )((void const   *)(((char *)secdata + nameoff) + 1)) - (unsigned long )((void const   *)((char *)secdata + nameoff)) == 1UL)) {
        goto _L___2;
      } else {
        if (__s1_len___0 >= 4UL) {
          _L___2:  
          if (! ((unsigned long )((void const   *)("__section_names" + 1)) - (unsigned long )((void const   *)"__section_names") == 1UL)) {
            tmp___36 = 1;
          } else {
            if (__s2_len___0 >= 4UL) {
              tmp___36 = 1;
            } else {
              tmp___36 = 0;
            }
          }
        } else {
          tmp___36 = 0;
        }
      }
      if (tmp___36) {
        {
        tmp___28 = __dyc_funcallvar_27;
        }
      } else {
        {
        tmp___33 = __dyc_funcallvar_28;
        tmp___28 = tmp___33;
        }
      }
    } else {
      {
      tmp___33 = __dyc_funcallvar_29;
      tmp___28 = tmp___33;
      }
    }
    if (tmp___28 == 0) {
      strtab_index = i;
      gnu_sections_found |= 8U;
    }
  }
  __dyc_dummy_label:  ;
  __dyc_printpre_byte(gnu_sections_found);
  __dyc_printpre_byte(strtab_index);
  __dyc_printpre_byte(index_index);
  __dyc_printpre_byte(sections_index);
  __dyc_printpre_byte(__s1_len___0);
  __dyc_printpre_byte(__s2_len___0);
  __dyc_printpre_byte(__s1_len___1);
  __dyc_printpre_byte(__s2_len___1);
}
}
