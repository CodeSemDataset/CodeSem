#include "../../include/dycfoo.h"
#include "../../include/simple-object-mach-o.i.hd.c.h"
void __dyc_foo(void) 
{ struct simple_object_mach_o_read *omr ;
  int is_32 ;
  size_t seghdrsize ;
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
  off_t wrapper_sect_offset ;
  void *tmp ;
  int tmp___0 ;
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
  unsigned char const   *sechdr ;
  char namebuf[34] ;
  char *name ;
  off_t secoffset ;
  size_t secsize ;
  int l ;
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
  unsigned long stringoffset ;
  int tmp___116 ;
  size_t tmp___117 ;
  int tmp___118 ;
  char const   **errmsg ;
  int *err ;
  unsigned int __dyc_funcallvar_1 ;
  unsigned int __dyc_funcallvar_2 ;
  void *__dyc_funcallvar_3 ;
  int __dyc_funcallvar_4 ;
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
  int __dyc_funcallvar_36 ;
  int __dyc_funcallvar_37 ;
  int __dyc_funcallvar_38 ;
  int __dyc_funcallvar_39 ;
  int __dyc_funcallvar_40 ;
  unsigned int __dyc_funcallvar_41 ;
  unsigned int __dyc_funcallvar_42 ;
  unsigned int __dyc_funcallvar_43 ;
  int __dyc_funcallvar_44 ;
  int __dyc_funcallvar_45 ;
  size_t __dyc_funcallvar_46 ;
  int __dyc_funcallvar_47 ;

  {
  omr = __dyc_read_ptr__comp_58simple_object_mach_o_read();
  is_32 = __dyc_readpre_byte();
  strtab_size = (size_t )__dyc_readpre_byte();
  index_size = (size_t )__dyc_readpre_byte();
  wrapper_sect_offset = (off_t )__dyc_readpre_byte();
  stringoffset = (unsigned long )__dyc_readpre_byte();
  errmsg = (char const   **)__dyc_read_ptr__ptr__char();
  err = __dyc_read_ptr__int();
  __dyc_funcallvar_1 = (unsigned int )__dyc_readpre_byte();
  __dyc_funcallvar_2 = (unsigned int )__dyc_readpre_byte();
  __dyc_funcallvar_3 = __dyc_read_ptr__void();
  __dyc_funcallvar_4 = __dyc_readpre_byte();
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
  __dyc_funcallvar_36 = __dyc_readpre_byte();
  __dyc_funcallvar_37 = __dyc_readpre_byte();
  __dyc_funcallvar_38 = __dyc_readpre_byte();
  __dyc_funcallvar_39 = __dyc_readpre_byte();
  __dyc_funcallvar_40 = __dyc_readpre_byte();
  __dyc_funcallvar_41 = (unsigned int )__dyc_readpre_byte();
  __dyc_funcallvar_42 = (unsigned int )__dyc_readpre_byte();
  __dyc_funcallvar_43 = (unsigned int )__dyc_readpre_byte();
  __dyc_funcallvar_44 = __dyc_readpre_byte();
  __dyc_funcallvar_45 = __dyc_readpre_byte();
  __dyc_funcallvar_46 = (size_t )__dyc_readpre_byte();
  __dyc_funcallvar_47 = __dyc_readpre_byte();
  seghdrsize = 0;
  sechdrsize = 0;
  segname_offset = 0;
  sectname_offset = 0;
  nsects = 0;
  secdata = 0;
  i = 0;
  gnu_sections_found = 0;
  strtab_index = 0;
  index_index = 0;
  nametab_index = 0;
  sections_index = 0;
  strtab = 0;
  nametab = 0;
  index___0 = 0;
  nametab_size = 0;
  n_wrapped_sects = 0;
  tmp = 0;
  tmp___0 = 0;
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
  sechdr = 0;
  name = 0;
  secoffset = 0;
  secsize = 0;
  l = 0;
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
  tmp___116 = 0;
  tmp___117 = 0;
  tmp___118 = 0;
  if (is_32) {
    {
    seghdrsize = sizeof(struct mach_o_segment_command_32 );
    sechdrsize = sizeof(struct mach_o_section_32 );
    segname_offset = (unsigned long )((unsigned int )(& ((struct mach_o_section_32 *)0)->segname));
    sectname_offset = (unsigned long )((unsigned int )(& ((struct mach_o_section_32 *)0)->sectname));
    nsects = __dyc_funcallvar_1;
    }
  } else {
    {
    seghdrsize = sizeof(struct mach_o_segment_command_64 );
    sechdrsize = sizeof(struct mach_o_section_64 );
    segname_offset = (unsigned long )((unsigned int )(& ((struct mach_o_section_64 *)0)->segname));
    sectname_offset = (unsigned long )((unsigned int )(& ((struct mach_o_section_64 *)0)->sectname));
    nsects = __dyc_funcallvar_2;
    }
  }
  tmp = __dyc_funcallvar_3;
  secdata = (unsigned char *)tmp;
  tmp___0 = __dyc_funcallvar_4;
  if (! tmp___0) {
    {

    }
    goto __dyc_dummy_label;
  }
  gnu_sections_found = 0U;
  index_index = nsects;
  sections_index = nsects;
  strtab_index = nsects;
  nametab_index = nsects;
  i = 0U;
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
  i = 0U;
  while (1) {
    while_1_continue:  ;
    if (! (i < nsects)) {
      goto __dyc_dummy_label;
    }
    sechdr = (unsigned char const   *)(secdata + (size_t )i * sechdrsize);
    if ((gnu_sections_found & 8U) != 0U) {
      if (i == strtab_index) {
        goto __Cont___0;
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
    {

    tmp___118 = __dyc_funcallvar_47;
    }
    if (! tmp___118) {
      {
      *errmsg = (char const   *)((void *)0);
      *err = 0;




      }
      goto __dyc_dummy_label;
    }
    __Cont___0:  
    i ++;
  }
  __dyc_dummy_label:  ;
  __dyc_printpre_byte(seghdrsize);
  __dyc_printpre_byte(sechdrsize);
  __dyc_printpre_byte(segname_offset);
  __dyc_printpre_byte(sectname_offset);
  __dyc_printpre_byte(nsects);
  __dyc_print_ptr__char(secdata);
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
  __dyc_print_ptr__char(sechdr);
  __dyc_print_ptr__char(name);
  __dyc_printpre_byte(secoffset);
  __dyc_printpre_byte(secsize);
  __dyc_printpre_byte(__s1_len___4);
  __dyc_printpre_byte(__s2_len___4);
}
}
