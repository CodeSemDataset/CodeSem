#include "../../include/dycfoo.h"
#include "../../include/d-demangle.i.hd.c.h"
void __dyc_foo(void) 
{ long len ;
  int tmp___279 ;
  int tmp___300 ;
  int tmp___322 ;
  size_t __s1_len___14 ;
  size_t __s2_len___14 ;
  int tmp___332 ;
  int tmp___337 ;
  int tmp___338 ;
  int tmp___339 ;
  int tmp___340 ;
  int tmp___343 ;
  int tmp___365 ;
  size_t __s1_len___16 ;
  size_t __s2_len___16 ;
  int tmp___375 ;
  int tmp___380 ;
  int tmp___381 ;
  int tmp___382 ;
  int tmp___383 ;
  char const   *mangled ;
  int __dyc_funcallvar_53 ;
  int __dyc_funcallvar_54 ;
  int __dyc_funcallvar_55 ;
  int __dyc_funcallvar_56 ;
  int __dyc_funcallvar_57 ;
  int __dyc_funcallvar_58 ;
  int __dyc_funcallvar_59 ;
  int __dyc_funcallvar_60 ;
  int __dyc_funcallvar_61 ;
  int __dyc_funcallvar_62 ;
  int __dyc_funcallvar_63 ;
  int __dyc_funcallvar_64 ;
  int __dyc_funcallvar_65 ;
  int __dyc_funcallvar_66 ;

  {
  len = (long )__dyc_readpre_byte();
  tmp___279 = __dyc_readpre_byte();
  mangled = (char const   *)__dyc_read_ptr__char();
  __dyc_funcallvar_53 = __dyc_readpre_byte();
  __dyc_funcallvar_54 = __dyc_readpre_byte();
  __dyc_funcallvar_55 = __dyc_readpre_byte();
  __dyc_funcallvar_56 = __dyc_readpre_byte();
  __dyc_funcallvar_57 = __dyc_readpre_byte();
  __dyc_funcallvar_58 = __dyc_readpre_byte();
  __dyc_funcallvar_59 = __dyc_readpre_byte();
  __dyc_funcallvar_60 = __dyc_readpre_byte();
  __dyc_funcallvar_61 = __dyc_readpre_byte();
  __dyc_funcallvar_62 = __dyc_readpre_byte();
  __dyc_funcallvar_63 = __dyc_readpre_byte();
  __dyc_funcallvar_64 = __dyc_readpre_byte();
  __dyc_funcallvar_65 = __dyc_readpre_byte();
  __dyc_funcallvar_66 = __dyc_readpre_byte();
  tmp___300 = 0;
  tmp___322 = 0;
  __s1_len___14 = 0;
  __s2_len___14 = 0;
  tmp___332 = 0;
  tmp___337 = 0;
  tmp___338 = 0;
  tmp___339 = 0;
  tmp___340 = 0;
  tmp___343 = 0;
  tmp___365 = 0;
  __s1_len___16 = 0;
  __s2_len___16 = 0;
  tmp___375 = 0;
  tmp___380 = 0;
  tmp___381 = 0;
  tmp___382 = 0;
  tmp___383 = 0;
  if (tmp___279 == 0) {
    {

    mangled += len + 3L;
    }
    goto __dyc_dummy_label;
  }
  goto __dyc_dummy_label;
  switch_14_11:  
  if (0) {
    if (0) {
      {
      tmp___338 = __dyc_funcallvar_53;
      __s1_len___14 = (unsigned long )tmp___338;
      tmp___339 = __dyc_funcallvar_54;
      __s2_len___14 = (unsigned long )tmp___339;
      }
      if (! ((unsigned long )((void const   *)(mangled + 1)) - (unsigned long )((void const   *)mangled) == 1UL)) {
        goto _L___30;
      } else {
        if (__s1_len___14 >= 4UL) {
          _L___30:  
          if (! ((unsigned long )((void const   *)("__InterfaceZ" + 1)) - (unsigned long )((void const   *)"__InterfaceZ") == 1UL)) {
            tmp___340 = 1;
          } else {
            if (__s2_len___14 >= 4UL) {
              tmp___340 = 1;
            } else {
              tmp___340 = 0;
            }
          }
        } else {
          tmp___340 = 0;
        }
      }
      if (tmp___340) {
        {
        tmp___332 = __dyc_funcallvar_55;
        }
      } else {
        {
        tmp___337 = __dyc_funcallvar_56;
        tmp___332 = tmp___337;
        }
      }
    } else {
      {
      tmp___337 = __dyc_funcallvar_57;
      tmp___332 = tmp___337;
      }
    }
    tmp___322 = tmp___332;
  } else {
    {
    tmp___322 = __dyc_funcallvar_58;
    }
  }
  if (tmp___322 == 0) {
    {

    tmp___300 = __dyc_funcallvar_59;

    mangled += len;
    }
    goto __dyc_dummy_label;
  }
  goto __dyc_dummy_label;
  switch_14_12:  
  if (0) {
    if (0) {
      {
      tmp___381 = __dyc_funcallvar_60;
      __s1_len___16 = (unsigned long )tmp___381;
      tmp___382 = __dyc_funcallvar_61;
      __s2_len___16 = (unsigned long )tmp___382;
      }
      if (! ((unsigned long )((void const   *)(mangled + 1)) - (unsigned long )((void const   *)mangled) == 1UL)) {
        goto _L___34;
      } else {
        if (__s1_len___16 >= 4UL) {
          _L___34:  
          if (! ((unsigned long )((void const   *)("__ModuleInfoZ" + 1)) - (unsigned long )((void const   *)"__ModuleInfoZ") == 1UL)) {
            tmp___383 = 1;
          } else {
            if (__s2_len___16 >= 4UL) {
              tmp___383 = 1;
            } else {
              tmp___383 = 0;
            }
          }
        } else {
          tmp___383 = 0;
        }
      }
      if (tmp___383) {
        {
        tmp___375 = __dyc_funcallvar_62;
        }
      } else {
        {
        tmp___380 = __dyc_funcallvar_63;
        tmp___375 = tmp___380;
        }
      }
    } else {
      {
      tmp___380 = __dyc_funcallvar_64;
      tmp___375 = tmp___380;
      }
    }
    tmp___365 = tmp___375;
  } else {
    {
    tmp___365 = __dyc_funcallvar_65;
    }
  }
  if (tmp___365 == 0) {
    {

    tmp___343 = __dyc_funcallvar_66;

    mangled += len;
    }
    goto __dyc_dummy_label;
  }
  __dyc_dummy_label:  ;
  __dyc_printpre_byte(tmp___300);
  __dyc_printpre_byte(__s1_len___14);
  __dyc_printpre_byte(__s2_len___14);
  __dyc_printpre_byte(tmp___343);
  __dyc_printpre_byte(__s1_len___16);
  __dyc_printpre_byte(__s2_len___16);
  __dyc_print_ptr__char(mangled);
}
}
