#include "../../include/dycfoo.h"
#include "../../include/simple-object-elf.i.hd.c.h"
void __dyc_foo(void) 
{ unsigned char ei_class ;
  unsigned int i ;
  int changed ;
  int *pfnret ;
  unsigned int sh_type___0 ;
  unsigned int sh_info ;
  unsigned int sh_link___0 ;
  off_t offset ;
  off_t length ;
  unsigned int entsize ;
  ulong_type tmp___26 ;
  unsigned char *ent ;
  unsigned char *buf ;
  int keep ;
  ulong_type tmp___29 ;
  ulong_type tmp___30 ;
  ulong_type tmp___33 ;
  ulong_type tmp___34 ;
  void *tmp___35 ;
  int tmp___36 ;
  unsigned int sec ;
  unsigned int tmp___37 ;
  int tmp___38 ;
  int tmp___39 ;
  ulong_type __dyc_funcallvar_25 ;
  ulong_type __dyc_funcallvar_26 ;
  ulong_type __dyc_funcallvar_27 ;
  ulong_type __dyc_funcallvar_28 ;
  ulong_type __dyc_funcallvar_29 ;
  ulong_type __dyc_funcallvar_30 ;
  void *__dyc_funcallvar_31 ;
  int __dyc_funcallvar_32 ;
  unsigned int __dyc_funcallvar_33 ;

  {
  ei_class = (unsigned char )__dyc_readpre_byte();
  i = (unsigned int )__dyc_readpre_byte();
  changed = __dyc_readpre_byte();
  pfnret = __dyc_read_ptr__int();
  sh_type___0 = (unsigned int )__dyc_readpre_byte();
  sh_info = (unsigned int )__dyc_readpre_byte();
  sh_link___0 = (unsigned int )__dyc_readpre_byte();
  __dyc_funcallvar_25 = (ulong_type )__dyc_readpre_byte();
  __dyc_funcallvar_26 = (ulong_type )__dyc_readpre_byte();
  __dyc_funcallvar_27 = (ulong_type )__dyc_readpre_byte();
  __dyc_funcallvar_28 = (ulong_type )__dyc_readpre_byte();
  __dyc_funcallvar_29 = (ulong_type )__dyc_readpre_byte();
  __dyc_funcallvar_30 = (ulong_type )__dyc_readpre_byte();
  __dyc_funcallvar_31 = __dyc_read_ptr__void();
  __dyc_funcallvar_32 = __dyc_readpre_byte();
  __dyc_funcallvar_33 = (unsigned int )__dyc_readpre_byte();
  offset = 0;
  length = 0;
  entsize = 0;
  tmp___26 = 0;
  ent = 0;
  buf = 0;
  keep = 0;
  tmp___29 = 0;
  tmp___30 = 0;
  tmp___33 = 0;
  tmp___34 = 0;
  tmp___35 = 0;
  tmp___36 = 0;
  sec = 0;
  tmp___37 = 0;
  tmp___38 = 0;
  tmp___39 = 0;
  if (sh_type___0 == 17U) {
    if ((int )ei_class == 1) {
      {
      tmp___26 = __dyc_funcallvar_25;
      }
    } else {
      {
      tmp___26 = __dyc_funcallvar_26;
      }
    }
    entsize = (unsigned int )tmp___26;
    keep = 0;
    if ((int )ei_class == 1) {
      {
      tmp___29 = __dyc_funcallvar_27;
      offset = (long )tmp___29;
      }
    } else {
      {
      tmp___30 = __dyc_funcallvar_28;
      offset = (long )tmp___30;
      }
    }
    if ((int )ei_class == 1) {
      {
      tmp___33 = __dyc_funcallvar_29;
      length = (long )tmp___33;
      }
    } else {
      {
      tmp___34 = __dyc_funcallvar_30;
      length = (long )tmp___34;
      }
    }
    {
    tmp___35 = __dyc_funcallvar_31;
    buf = (unsigned char *)tmp___35;
    tmp___36 = __dyc_funcallvar_32;
    }
    if (! tmp___36) {
      {



      }
      goto __dyc_dummy_label;
    }
    ent = buf + entsize;
    {
    while (1) {
      while_12_continue:  ;
      if (! ((unsigned long )ent < (unsigned long )(buf + length))) {
        goto while_12_break;
      }
      {
      tmp___37 = __dyc_funcallvar_33;
      sec = tmp___37;
      }
      if (*(pfnret + (sec - 1U)) == 0) {
        keep = 1;
      }
      ent += entsize;
    }
    while_12_break:  ;
    }
    if (keep) {
      if (*(pfnret + (sh_link___0 - 1U)) == -1) {
        tmp___38 = 1;
      } else {
        if (*(pfnret + (i - 1U)) == -1) {
          tmp___38 = 1;
        } else {
          tmp___38 = 0;
        }
      }
      changed |= tmp___38;
      *(pfnret + (sh_link___0 - 1U)) = 0;
      *(pfnret + (i - 1U)) = 0;
    }
  }
  if (sh_type___0 == 4U) {
    goto _L;
  } else {
    if (sh_type___0 == 9U) {
      _L:  
      if (*(pfnret + (sh_info - 1U)) == 0) {
        if (*(pfnret + (sh_link___0 - 1U)) == -1) {
          tmp___39 = 1;
        } else {
          if (*(pfnret + (i - 1U)) == -1) {
            tmp___39 = 1;
          } else {
            tmp___39 = 0;
          }
        }
        changed |= tmp___39;
        *(pfnret + (sh_link___0 - 1U)) = 0;
        *(pfnret + (i - 1U)) = 0;
      }
    }
  }
  if (sh_type___0 == 2U) {
    if (*(pfnret + (i - 1U)) == 0) {
      changed |= *(pfnret + (sh_link___0 - 1U)) == -1;
      *(pfnret + (sh_link___0 - 1U)) = 0;
    }
  }
  __dyc_dummy_label:  ;
  __dyc_printpre_byte(changed);
  __dyc_printpre_byte(offset);
  __dyc_printpre_byte(length);
  __dyc_printpre_byte(entsize);
  __dyc_print_ptr__char(buf);
  __dyc_printpre_byte(keep);
}
}
