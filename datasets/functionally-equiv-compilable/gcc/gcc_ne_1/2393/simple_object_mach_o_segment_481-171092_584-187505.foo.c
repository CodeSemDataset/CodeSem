#include "../../include/dycfoo.h"
#include "../../include/simple-object-mach-o.i.hd.c.h"
void __dyc_foo(void) 
{ struct simple_object_mach_o_read *omr ;
  size_t sechdrsize ;
  size_t segname_offset ;
  size_t sectname_offset ;
  unsigned int nsects ;
  unsigned char *secdata ;
  unsigned int i ;
  unsigned int gnu_sections_found ;
  unsigned int strtab_index ;
  unsigned int index_index ;
  unsigned int nametab_index ;
  unsigned int sections_index ;
  char *strtab ;
  char *nametab ;
  unsigned char *index___0 ;
  size_t strtab_size ;
  size_t nametab_size ;
  size_t index_size ;
  unsigned int n_wrapped_sects ;
  size_t nameoff ;
  size_t __s1_len ;
  size_t __s2_len ;
  int tmp___10 ;
  int tmp___15 ;
  int tmp___16 ;
  int tmp___17 ;
  int tmp___18 ;
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
  size_t __s1_len___2 ;
  size_t __s2_len___2 ;
  int tmp___64 ;
  int tmp___69 ;
  int tmp___70 ;
  int tmp___71 ;
  int tmp___72 ;
  size_t __s1_len___3 ;
  size_t __s2_len___3 ;
  int tmp___82 ;
  int tmp___87 ;
  int tmp___88 ;
  int tmp___89 ;
  int tmp___90 ;
  void *tmp___91 ;
  int tmp___92 ;
  void *tmp___93 ;
  int tmp___94 ;
  void *tmp___95 ;
  int tmp___96 ;
  char const   **errmsg ;
  int *err ;
  int __dyc_funcallvar_5 ;
  int __dyc_funcallvar_6 ;
  int __dyc_funcallvar_7 ;
  int __dyc_funcallvar_8 ;
  int __dyc_funcallvar_9 ;
  int __dyc_funcallvar_10 ;
  int __dyc_funcallvar_11 ;
  int __dyc_funcallvar_12 ;
  int __dyc_funcallvar_13 ;
  int __dyc_funcallvar_14 ;
  int __dyc_funcallvar_15 ;
  int __dyc_funcallvar_16 ;
  int __dyc_funcallvar_17 ;
  int __dyc_funcallvar_18 ;
  int __dyc_funcallvar_19 ;
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
  void *__dyc_funcallvar_30 ;
  int __dyc_funcallvar_31 ;
  void *__dyc_funcallvar_32 ;
  int __dyc_funcallvar_33 ;
  void *__dyc_funcallvar_34 ;
  int __dyc_funcallvar_35 ;

  {
  omr = __dyc_read_ptr__comp_58simple_object_mach_o_read();
  sechdrsize = (size_t )__dyc_readpre_byte();
  segname_offset = (size_t )__dyc_readpre_byte();
  sectname_offset = (size_t )__dyc_readpre_byte();
  nsects = (unsigned int )__dyc_readpre_byte();
  secdata = (unsigned char *)__dyc_read_ptr__char();
  i = (unsigned int )__dyc_readpre_byte();
  gnu_sections_found = (unsigned int )__dyc_readpre_byte();
  index_size = (size_t )__dyc_readpre_byte();
  errmsg = (char const   **)__dyc_read_ptr__ptr__char();
  err = __dyc_read_ptr__int();
  __dyc_funcallvar_5 = __dyc_readpre_byte();
  __dyc_funcallvar_6 = __dyc_readpre_byte();
  __dyc_funcallvar_7 = __dyc_readpre_byte();
  __dyc_funcallvar_8 = __dyc_readpre_byte();
  __dyc_funcallvar_9 = __dyc_readpre_byte();
  __dyc_funcallvar_10 = __dyc_readpre_byte();
  __dyc_funcallvar_11 = __dyc_readpre_byte();
  __dyc_funcallvar_12 = __dyc_readpre_byte();
  __dyc_funcallvar_13 = __dyc_readpre_byte();
  __dyc_funcallvar_14 = __dyc_readpre_byte();
  __dyc_funcallvar_15 = __dyc_readpre_byte();
  __dyc_funcallvar_16 = __dyc_readpre_byte();
  __dyc_funcallvar_17 = __dyc_readpre_byte();
  __dyc_funcallvar_18 = __dyc_readpre_byte();
  __dyc_funcallvar_19 = __dyc_readpre_byte();
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
  __dyc_funcallvar_30 = __dyc_read_ptr__void();
  __dyc_funcallvar_31 = __dyc_readpre_byte();
  __dyc_funcallvar_32 = __dyc_read_ptr__void();
  __dyc_funcallvar_33 = __dyc_readpre_byte();
  __dyc_funcallvar_34 = __dyc_read_ptr__void();
  __dyc_funcallvar_35 = __dyc_readpre_byte();
  strtab_index = 0;
  index_index = 0;
  nametab_index = 0;
  sections_index = 0;
  strtab = 0;
  nametab = 0;
  index___0 = 0;
  strtab_size = 0;
  nametab_size = 0;
  n_wrapped_sects = 0;
  nameoff = 0;
  __s1_len = 0;
  __s2_len = 0;
  tmp___10 = 0;
  tmp___15 = 0;
  tmp___16 = 0;
  tmp___17 = 0;
  tmp___18 = 0;
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
  __s1_len___2 = 0;
  __s2_len___2 = 0;
  tmp___64 = 0;
  tmp___69 = 0;
  tmp___70 = 0;
  tmp___71 = 0;
  tmp___72 = 0;
  __s1_len___3 = 0;
  __s2_len___3 = 0;
  tmp___82 = 0;
  tmp___87 = 0;
  tmp___88 = 0;
  tmp___89 = 0;
  tmp___90 = 0;
  tmp___91 = 0;
  tmp___92 = 0;
  tmp___93 = 0;
  tmp___94 = 0;
  tmp___95 = 0;
  tmp___96 = 0;
  while (1) {
    while_0_continue:  ;
    if (! (i < nsects)) {
      goto while_0_break;
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
      goto __Cont;
    }
    nameoff = (size_t )i * sechdrsize + sectname_offset;
    if (0) {
      {
      tmp___88 = __dyc_funcallvar_10;
      __s1_len___3 = (unsigned long )tmp___88;
      tmp___89 = __dyc_funcallvar_11;
      __s2_len___3 = (unsigned long )tmp___89;
      }
      if (! ((unsigned long )((void const   *)(((char *)secdata + nameoff) + 1)) - (unsigned long )((void const   *)((char *)secdata + nameoff)) == 1UL)) {
        goto _L___8;
      } else {
        if (__s1_len___3 >= 4UL) {
          _L___8:  
          if (! ((unsigned long )((void const   *)("__wrapper_names" + 1)) - (unsigned long )((void const   *)"__wrapper_names") == 1UL)) {
            tmp___90 = 1;
          } else {
            if (__s2_len___3 >= 4UL) {
              tmp___90 = 1;
            } else {
              tmp___90 = 0;
            }
          }
        } else {
          tmp___90 = 0;
        }
      }
      if (tmp___90) {
        {
        tmp___82 = __dyc_funcallvar_12;
        }
      } else {
        {
        tmp___87 = __dyc_funcallvar_13;
        tmp___82 = tmp___87;
        }
      }
    } else {
      {
      tmp___87 = __dyc_funcallvar_14;
      tmp___82 = tmp___87;
      }
    }
    if (tmp___82 == 0) {
      nametab_index = i;
      gnu_sections_found |= 4U;
    } else {
      if (0) {
        {
        tmp___70 = __dyc_funcallvar_15;
        __s1_len___2 = (unsigned long )tmp___70;
        tmp___71 = __dyc_funcallvar_16;
        __s2_len___2 = (unsigned long )tmp___71;
        }
        if (! ((unsigned long )((void const   *)(((char *)secdata + nameoff) + 1)) - (unsigned long )((void const   *)((char *)secdata + nameoff)) == 1UL)) {
          goto _L___6;
        } else {
          if (__s1_len___2 >= 4UL) {
            _L___6:  
            if (! ((unsigned long )((void const   *)("__wrapper_index" + 1)) - (unsigned long )((void const   *)"__wrapper_index") == 1UL)) {
              tmp___72 = 1;
            } else {
              if (__s2_len___2 >= 4UL) {
                tmp___72 = 1;
              } else {
                tmp___72 = 0;
              }
            }
          } else {
            tmp___72 = 0;
          }
        }
        if (tmp___72) {
          {
          tmp___64 = __dyc_funcallvar_17;
          }
        } else {
          {
          tmp___69 = __dyc_funcallvar_18;
          tmp___64 = tmp___69;
          }
        }
      } else {
        {
        tmp___69 = __dyc_funcallvar_19;
        tmp___64 = tmp___69;
        }
      }
      if (tmp___64 == 0) {
        index_index = i;
        gnu_sections_found |= 2U;
      } else {
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
      }
    }
    __Cont:  
    i ++;
  }
  while_0_break:  ;
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
  __dyc_printpre_byte(index_index);
  __dyc_printpre_byte(nametab_index);
  __dyc_printpre_byte(sections_index);
  __dyc_print_ptr__char(strtab);
  __dyc_print_ptr__char(nametab);
  __dyc_print_ptr__char(index___0);
  __dyc_printpre_byte(strtab_size);
  __dyc_printpre_byte(nametab_size);
  __dyc_printpre_byte(index_size);
  __dyc_printpre_byte(n_wrapped_sects);
  __dyc_printpre_byte(nameoff);
  __dyc_printpre_byte(__s1_len);
  __dyc_printpre_byte(__s2_len);
  __dyc_printpre_byte(__s1_len___0);
  __dyc_printpre_byte(__s2_len___0);
  __dyc_printpre_byte(__s1_len___1);
  __dyc_printpre_byte(__s2_len___1);
  __dyc_printpre_byte(__s1_len___2);
  __dyc_printpre_byte(__s2_len___2);
  __dyc_printpre_byte(__s1_len___3);
  __dyc_printpre_byte(__s2_len___3);
}
}
