#include "../../include/dycfoo.h"
#include "../../include/simple-object-elf.i.hd.c.h"
void __dyc_foo(void) 
{ unsigned char ei_class ;
  char const   *errmsg ;
  unsigned int *sh_map ;
  unsigned int sh_type___1 ;
  char const   *name___0 ;
  off_t flags ;
  ulong_type tmp___87 ;
  ulong_type tmp___88 ;
  unsigned int sh_info___0 ;
  unsigned int sh_link___1 ;
  size_t __s1_len ;
  size_t __s2_len ;
  int tmp___102 ;
  int tmp___107 ;
  int tmp___108 ;
  int tmp___109 ;
  int tmp___110 ;
  ulong_type __dyc_funcallvar_66 ;
  ulong_type __dyc_funcallvar_67 ;
  unsigned int __dyc_funcallvar_68 ;
  unsigned int __dyc_funcallvar_69 ;
  unsigned int __dyc_funcallvar_70 ;
  unsigned int __dyc_funcallvar_71 ;
  int __dyc_funcallvar_72 ;
  int __dyc_funcallvar_73 ;
  int __dyc_funcallvar_74 ;
  int __dyc_funcallvar_75 ;
  int __dyc_funcallvar_76 ;

  {
  ei_class = (unsigned char )__dyc_readpre_byte();
  errmsg = (char const   *)__dyc_read_ptr__char();
  sh_map = (unsigned int *)__dyc_read_ptr__int();
  sh_type___1 = (unsigned int )__dyc_readpre_byte();
  name___0 = (char const   *)__dyc_read_ptr__char();
  __dyc_funcallvar_66 = (ulong_type )__dyc_readpre_byte();
  __dyc_funcallvar_67 = (ulong_type )__dyc_readpre_byte();
  __dyc_funcallvar_68 = (unsigned int )__dyc_readpre_byte();
  __dyc_funcallvar_69 = (unsigned int )__dyc_readpre_byte();
  __dyc_funcallvar_70 = (unsigned int )__dyc_readpre_byte();
  __dyc_funcallvar_71 = (unsigned int )__dyc_readpre_byte();
  __dyc_funcallvar_72 = __dyc_readpre_byte();
  __dyc_funcallvar_73 = __dyc_readpre_byte();
  __dyc_funcallvar_74 = __dyc_readpre_byte();
  __dyc_funcallvar_75 = __dyc_readpre_byte();
  __dyc_funcallvar_76 = __dyc_readpre_byte();
  flags = 0;
  tmp___87 = 0;
  tmp___88 = 0;
  sh_info___0 = 0;
  sh_link___1 = 0;
  __s1_len = 0;
  __s2_len = 0;
  tmp___102 = 0;
  tmp___107 = 0;
  tmp___108 = 0;
  tmp___109 = 0;
  tmp___110 = 0;
  if (errmsg) {
    {



    }
    goto __dyc_dummy_label;
  }
  if ((int )ei_class == 1) {
    {
    tmp___87 = __dyc_funcallvar_66;
    flags = (long )tmp___87;
    }
  } else {
    {
    tmp___88 = __dyc_funcallvar_67;
    flags = (long )tmp___88;
    }
  }
  if (flags & 64L) {
    goto _L___5;
  } else {
    if (sh_type___1 == 9U) {
      goto _L___5;
    } else {
      if (sh_type___1 == 4U) {
        _L___5:  
        if ((int )ei_class == 1) {
          {
          sh_info___0 = __dyc_funcallvar_68;
          }
        } else {
          {
          sh_info___0 = __dyc_funcallvar_69;
          }
        }
        if (sh_info___0 < 65280U) {
          sh_info___0 = *(sh_map + sh_info___0);
        } else {
          if (sh_info___0 > 65535U) {
            sh_info___0 = *(sh_map + sh_info___0);
          }
        }
        if ((int )ei_class == 1) {
          {

          }
        } else {
          {

          }
        }
      }
    }
  }
  if ((int )ei_class == 1) {
    {
    sh_link___1 = __dyc_funcallvar_70;
    }
  } else {
    {
    sh_link___1 = __dyc_funcallvar_71;
    }
  }
  if (sh_link___1 < 65280U) {
    sh_link___1 = *(sh_map + sh_link___1);
  } else {
    if (sh_link___1 > 65535U) {
      sh_link___1 = *(sh_map + sh_link___1);
    }
  }
  if ((int )ei_class == 1) {
    {

    }
  } else {
    {

    }
  }
  if (0) {
    {
    tmp___108 = __dyc_funcallvar_72;
    __s1_len = (unsigned long )tmp___108;
    tmp___109 = __dyc_funcallvar_73;
    __s2_len = (unsigned long )tmp___109;
    }
    if (! ((unsigned long )((void const   *)(name___0 + 1)) - (unsigned long )((void const   *)name___0) == 1UL)) {
      goto _L___7;
    } else {
      if (__s1_len >= 4UL) {
        _L___7:  
        if (! ((unsigned long )((void const   *)(".note.GNU-stack" + 1)) - (unsigned long )((void const   *)".note.GNU-stack") == 1UL)) {
          tmp___110 = 1;
        } else {
          if (__s2_len >= 4UL) {
            tmp___110 = 1;
          } else {
            tmp___110 = 0;
          }
        }
      } else {
        tmp___110 = 0;
      }
    }
    if (tmp___110) {
      {
      tmp___102 = __dyc_funcallvar_74;
      }
    } else {
      {
      tmp___107 = __dyc_funcallvar_75;
      tmp___102 = tmp___107;
      }
    }
  } else {
    {
    tmp___107 = __dyc_funcallvar_76;
    tmp___102 = tmp___107;
    }
  }
  if (tmp___102 == 0) {
    flags &= -5L;
  }
  flags &= 2147483647L;
  __dyc_dummy_label:  ;
  __dyc_printpre_byte(flags);
  __dyc_printpre_byte(sh_info___0);
  __dyc_printpre_byte(sh_link___1);
  __dyc_printpre_byte(__s1_len);
  __dyc_printpre_byte(__s2_len);
}
}
