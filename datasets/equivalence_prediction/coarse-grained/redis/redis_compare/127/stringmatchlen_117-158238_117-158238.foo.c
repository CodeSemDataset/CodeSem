#include "../../include/dycfoo.h"
#include "../../include/util.i.hd.c.h"
void __dyc_foo(void) 
{ int match ;
  int __res___2 ;
  int __attribute__((__leaf__, __gnu_inline__))  tmp___14 ;
  __int32_t const   **tmp___15 ;
  int __res___3 ;
  int __attribute__((__leaf__, __gnu_inline__))  tmp___18 ;
  __int32_t const   **tmp___19 ;
  char const   *pattern ;
  char const   *string ;
  int nocase ;
  int __attribute__((__leaf__, __gnu_inline__))  __dyc_funcallvar_8 ;
  __int32_t const   **__dyc_funcallvar_9 ;
  int __attribute__((__leaf__, __gnu_inline__))  __dyc_funcallvar_10 ;
  __int32_t const   **__dyc_funcallvar_11 ;

  {
  pattern = (char const   *)__dyc_read_ptr__char();
  string = (char const   *)__dyc_read_ptr__char();
  nocase = __dyc_readpre_byte();
  __dyc_funcallvar_8 = (int __attribute__((__leaf__,
  __gnu_inline__))  )__dyc_readpre_byte();
  __dyc_funcallvar_9 = (__int32_t const   **)__dyc_read_ptr__ptr__typdef___int32_t();
  __dyc_funcallvar_10 = (int __attribute__((__leaf__,
  __gnu_inline__))  )__dyc_readpre_byte();
  __dyc_funcallvar_11 = (__int32_t const   **)__dyc_read_ptr__ptr__typdef___int32_t();
  match = 0;
  __res___2 = 0;
  tmp___14 = 0;
  tmp___15 = 0;
  __res___3 = 0;
  tmp___18 = 0;
  tmp___19 = 0;
  _L:  
  if (! nocase) {
    if ((int const   )*(pattern + 0) == (int const   )*(string + 0)) {
      match = 1;
    }
  } else {
    if (sizeof(int ) > 1UL) {
      {
      tmp___14 = __dyc_funcallvar_8;
      __res___2 = (int )tmp___14;
      }
    } else {
      {
      tmp___15 = __dyc_funcallvar_9;
      __res___2 = (int )*(*tmp___15 + (int )*(pattern + 0));
      }
    }
    if (sizeof(int ) > 1UL) {
      {
      tmp___18 = __dyc_funcallvar_10;
      __res___3 = (int )tmp___18;
      }
    } else {
      {
      tmp___19 = __dyc_funcallvar_11;
      __res___3 = (int )*(*tmp___19 + (int )*(string + 0));
      }
    }
    if (__res___2 == __res___3) {
      match = 1;
    }
  }
  __dyc_dummy_label:  ;
  __dyc_printpre_byte(match);
}
}
