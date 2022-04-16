#include "../../include/dycfoo.h"
#include "../../include/util.i.hd.c.h"
void __dyc_foo(void) 
{ int match ;
  int start ;
  int end ;
  int c ;
  int t ;
  int __res ;
  int __attribute__((__leaf__, __gnu_inline__))  tmp___2 ;
  __int32_t const   **tmp___3 ;
  int __res___0 ;
  int __attribute__((__leaf__, __gnu_inline__))  tmp___6 ;
  __int32_t const   **tmp___7 ;
  int __res___1 ;
  int __attribute__((__leaf__, __gnu_inline__))  tmp___10 ;
  __int32_t const   **tmp___11 ;
  char const   *pattern ;
  int patternLen ;
  char const   *string ;
  int nocase ;
  int __attribute__((__leaf__, __gnu_inline__))  __dyc_funcallvar_2 ;
  __int32_t const   **__dyc_funcallvar_3 ;
  int __attribute__((__leaf__, __gnu_inline__))  __dyc_funcallvar_4 ;
  __int32_t const   **__dyc_funcallvar_5 ;
  int __attribute__((__leaf__, __gnu_inline__))  __dyc_funcallvar_6 ;
  __int32_t const   **__dyc_funcallvar_7 ;

  {
  pattern = (char const   *)__dyc_read_ptr__char();
  patternLen = __dyc_readpre_byte();
  string = (char const   *)__dyc_read_ptr__char();
  nocase = __dyc_readpre_byte();
  __dyc_funcallvar_2 = (int __attribute__((__leaf__,
  __gnu_inline__))  )__dyc_readpre_byte();
  __dyc_funcallvar_3 = (__int32_t const   **)__dyc_read_ptr__ptr__typdef___int32_t();
  __dyc_funcallvar_4 = (int __attribute__((__leaf__,
  __gnu_inline__))  )__dyc_readpre_byte();
  __dyc_funcallvar_5 = (__int32_t const   **)__dyc_read_ptr__ptr__typdef___int32_t();
  __dyc_funcallvar_6 = (int __attribute__((__leaf__,
  __gnu_inline__))  )__dyc_readpre_byte();
  __dyc_funcallvar_7 = (__int32_t const   **)__dyc_read_ptr__ptr__typdef___int32_t();
  match = 0;
  start = 0;
  end = 0;
  c = 0;
  t = 0;
  __res = 0;
  tmp___2 = 0;
  tmp___3 = 0;
  __res___0 = 0;
  tmp___6 = 0;
  tmp___7 = 0;
  __res___1 = 0;
  tmp___10 = 0;
  tmp___11 = 0;
  start = (int )*(pattern + 0);
  end = (int )*(pattern + 2);
  c = (int )*(string + 0);
  if (start > end) {
    t = start;
    start = end;
    end = t;
  }
  if (nocase) {
    if (sizeof(int ) > 1UL) {
      {
      tmp___2 = __dyc_funcallvar_2;
      __res = (int )tmp___2;
      }
    } else {
      {
      tmp___3 = __dyc_funcallvar_3;
      __res = (int )*(*tmp___3 + start);
      }
    }
    start = __res;
    if (sizeof(int ) > 1UL) {
      {
      tmp___6 = __dyc_funcallvar_4;
      __res___0 = (int )tmp___6;
      }
    } else {
      {
      tmp___7 = __dyc_funcallvar_5;
      __res___0 = (int )*(*tmp___7 + end);
      }
    }
    end = __res___0;
    if (sizeof(int ) > 1UL) {
      {
      tmp___10 = __dyc_funcallvar_6;
      __res___1 = (int )tmp___10;
      }
    } else {
      {
      tmp___11 = __dyc_funcallvar_7;
      __res___1 = (int )*(*tmp___11 + c);
      }
    }
    c = __res___1;
  }
  pattern += 2;
  patternLen -= 2;
  if (c >= start) {
    if (c <= end) {
      match = 1;
    }
  }
  goto __dyc_dummy_label;
  __dyc_dummy_label:  ;
  __dyc_printpre_byte(match);
  __dyc_print_ptr__char(pattern);
  __dyc_printpre_byte(patternLen);
}
}
