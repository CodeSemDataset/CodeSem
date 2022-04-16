#include "../../include/dycfoo.h"
#include "../../include/util.i.hd.c.h"
void __dyc_foo(void) 
{ int match ;
  int __res___4 ;
  int __attribute__((__leaf__, __gnu_inline__))  tmp___22 ;
  __int32_t const   **tmp___23 ;
  int __res___5 ;
  int __attribute__((__leaf__, __gnu_inline__))  tmp___26 ;
  __int32_t const   **tmp___27 ;
  char const   *pattern ;
  int patternLen ;
  char const   *string ;
  int stringLen ;
  int nocase ;
  int __attribute__((__leaf__, __gnu_inline__))  __dyc_funcallvar_12 ;
  __int32_t const   **__dyc_funcallvar_13 ;
  int __attribute__((__leaf__, __gnu_inline__))  __dyc_funcallvar_14 ;
  __int32_t const   **__dyc_funcallvar_15 ;

  {
  match = __dyc_readpre_byte();
  pattern = (char const   *)__dyc_read_ptr__char();
  patternLen = __dyc_readpre_byte();
  string = (char const   *)__dyc_read_ptr__char();
  stringLen = __dyc_readpre_byte();
  nocase = __dyc_readpre_byte();
  __dyc_funcallvar_12 = (int __attribute__((__leaf__,
  __gnu_inline__))  )__dyc_readpre_byte();
  __dyc_funcallvar_13 = (__int32_t const   **)__dyc_read_ptr__ptr__typdef___int32_t();
  __dyc_funcallvar_14 = (int __attribute__((__leaf__,
  __gnu_inline__))  )__dyc_readpre_byte();
  __dyc_funcallvar_15 = (__int32_t const   **)__dyc_read_ptr__ptr__typdef___int32_t();
  __res___4 = 0;
  tmp___22 = 0;
  tmp___23 = 0;
  __res___5 = 0;
  tmp___26 = 0;
  tmp___27 = 0;
  if (! match) {
    goto __dyc_dummy_label;
  }
  string ++;
  stringLen --;
  goto __dyc_dummy_label;
  switch_2_92:  
  if (patternLen >= 2) {
    pattern ++;
    patternLen --;
  }
  switch_2_default:  ;
  if (! nocase) {
    if ((int const   )*(pattern + 0) != (int const   )*(string + 0)) {
      goto __dyc_dummy_label;
    }
  } else {
    if (sizeof(int ) > 1UL) {
      {
      tmp___22 = __dyc_funcallvar_12;
      __res___4 = (int )tmp___22;
      }
    } else {
      {
      tmp___23 = __dyc_funcallvar_13;
      __res___4 = (int )*(*tmp___23 + (int )*(pattern + 0));
      }
    }
    if (sizeof(int ) > 1UL) {
      {
      tmp___26 = __dyc_funcallvar_14;
      __res___5 = (int )tmp___26;
      }
    } else {
      {
      tmp___27 = __dyc_funcallvar_15;
      __res___5 = (int )*(*tmp___27 + (int )*(string + 0));
      }
    }
    if (__res___4 != __res___5) {
      goto __dyc_dummy_label;
    }
  }
  string ++;
  stringLen --;
  __dyc_dummy_label:  ;
  __dyc_print_ptr__char(pattern);
  __dyc_printpre_byte(patternLen);
  __dyc_print_ptr__char(string);
  __dyc_printpre_byte(stringLen);
}
}
