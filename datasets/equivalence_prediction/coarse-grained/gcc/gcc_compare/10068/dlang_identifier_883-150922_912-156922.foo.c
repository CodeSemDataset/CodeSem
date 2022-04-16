#include "../../include/dycfoo.h"
#include "../../include/d-demangle.i.hd.c.h"
void __dyc_foo(void) 
{ long len ;
  int tmp___215 ;
  int tmp___237 ;
  int tmp___279 ;
  size_t __s1_len___12 ;
  size_t __s2_len___12 ;
  int tmp___289 ;
  int tmp___294 ;
  int tmp___295 ;
  int tmp___296 ;
  int tmp___297 ;
  int tmp___300 ;
  int tmp___322 ;
  size_t __s1_len___14 ;
  size_t __s2_len___14 ;
  int tmp___332 ;
  int tmp___337 ;
  int tmp___338 ;
  int tmp___339 ;
  int tmp___340 ;
  char const   *mangled ;
  int __dyc_funcallvar_46 ;
  int __dyc_funcallvar_47 ;
  int __dyc_funcallvar_48 ;
  int __dyc_funcallvar_49 ;
  int __dyc_funcallvar_50 ;
  int __dyc_funcallvar_51 ;
  int __dyc_funcallvar_52 ;
  int __dyc_funcallvar_53 ;
  int __dyc_funcallvar_54 ;
  int __dyc_funcallvar_55 ;
  int __dyc_funcallvar_56 ;
  int __dyc_funcallvar_57 ;
  int __dyc_funcallvar_58 ;
  int __dyc_funcallvar_59 ;

  {
  len = (long )__dyc_readpre_byte();
  tmp___237 = __dyc_readpre_byte();
  mangled = (char const   *)__dyc_read_ptr__char();
  __dyc_funcallvar_46 = __dyc_readpre_byte();
  __dyc_funcallvar_47 = __dyc_readpre_byte();
  __dyc_funcallvar_48 = __dyc_readpre_byte();
  __dyc_funcallvar_49 = __dyc_readpre_byte();
  __dyc_funcallvar_50 = __dyc_readpre_byte();
  __dyc_funcallvar_51 = __dyc_readpre_byte();
  __dyc_funcallvar_52 = __dyc_readpre_byte();
  __dyc_funcallvar_53 = __dyc_readpre_byte();
  __dyc_funcallvar_54 = __dyc_readpre_byte();
  __dyc_funcallvar_55 = __dyc_readpre_byte();
  __dyc_funcallvar_56 = __dyc_readpre_byte();
  __dyc_funcallvar_57 = __dyc_readpre_byte();
  __dyc_funcallvar_58 = __dyc_readpre_byte();
  __dyc_funcallvar_59 = __dyc_readpre_byte();
  tmp___215 = 0;
  tmp___279 = 0;
  __s1_len___12 = 0;
  __s2_len___12 = 0;
  tmp___289 = 0;
  tmp___294 = 0;
  tmp___295 = 0;
  tmp___296 = 0;
  tmp___297 = 0;
  tmp___300 = 0;
  tmp___322 = 0;
  __s1_len___14 = 0;
  __s2_len___14 = 0;
  tmp___332 = 0;
  tmp___337 = 0;
  tmp___338 = 0;
  tmp___339 = 0;
  tmp___340 = 0;
  if (tmp___237 == 0) {
    {

    tmp___215 = __dyc_funcallvar_46;

    mangled += len;
    }
    goto __dyc_dummy_label;
  }
  goto __dyc_dummy_label;
  switch_14_10:  
  if (0) {
    if (0) {
      {
      tmp___295 = __dyc_funcallvar_47;
      __s1_len___12 = (unsigned long )tmp___295;
      tmp___296 = __dyc_funcallvar_48;
      __s2_len___12 = (unsigned long )tmp___296;
      }
      if (! ((unsigned long )((void const   *)(mangled + 1)) - (unsigned long )((void const   *)mangled) == 1UL)) {
        goto _L___26;
      } else {
        if (__s1_len___12 >= 4UL) {
          _L___26:  
          if (! ((unsigned long )((void const   *)("__postblitMFZ" + 1)) - (unsigned long )((void const   *)"__postblitMFZ") == 1UL)) {
            tmp___297 = 1;
          } else {
            if (__s2_len___12 >= 4UL) {
              tmp___297 = 1;
            } else {
              tmp___297 = 0;
            }
          }
        } else {
          tmp___297 = 0;
        }
      }
      if (tmp___297) {
        {
        tmp___289 = __dyc_funcallvar_49;
        }
      } else {
        {
        tmp___294 = __dyc_funcallvar_50;
        tmp___289 = tmp___294;
        }
      }
    } else {
      {
      tmp___294 = __dyc_funcallvar_51;
      tmp___289 = tmp___294;
      }
    }
    tmp___279 = tmp___289;
  } else {
    {
    tmp___279 = __dyc_funcallvar_52;
    }
  }
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
  __dyc_dummy_label:  ;
  __dyc_printpre_byte(tmp___215);
  __dyc_printpre_byte(__s1_len___12);
  __dyc_printpre_byte(__s2_len___12);
  __dyc_printpre_byte(tmp___300);
  __dyc_printpre_byte(__s1_len___14);
  __dyc_printpre_byte(__s2_len___14);
  __dyc_print_ptr__char(mangled);
}
}
