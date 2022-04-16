#include "../../include/dycfoo.h"
#include "../../include/util.i.hd.c.h"
void __dyc_foo(void) 
{ int not ;
  int match ;
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
  int __res___2 ;
  int __attribute__((__leaf__, __gnu_inline__))  tmp___14 ;
  __int32_t const   **tmp___15 ;
  int __res___3 ;
  int __attribute__((__leaf__, __gnu_inline__))  tmp___18 ;
  __int32_t const   **tmp___19 ;
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
  int __attribute__((__leaf__, __gnu_inline__))  __dyc_funcallvar_2 ;
  __int32_t const   **__dyc_funcallvar_3 ;
  int __attribute__((__leaf__, __gnu_inline__))  __dyc_funcallvar_4 ;
  __int32_t const   **__dyc_funcallvar_5 ;
  int __attribute__((__leaf__, __gnu_inline__))  __dyc_funcallvar_6 ;
  __int32_t const   **__dyc_funcallvar_7 ;
  int __attribute__((__leaf__, __gnu_inline__))  __dyc_funcallvar_8 ;
  __int32_t const   **__dyc_funcallvar_9 ;
  int __attribute__((__leaf__, __gnu_inline__))  __dyc_funcallvar_10 ;
  __int32_t const   **__dyc_funcallvar_11 ;
  int __attribute__((__leaf__, __gnu_inline__))  __dyc_funcallvar_12 ;
  __int32_t const   **__dyc_funcallvar_13 ;
  int __attribute__((__leaf__, __gnu_inline__))  __dyc_funcallvar_14 ;
  __int32_t const   **__dyc_funcallvar_15 ;

  {
  not = __dyc_readpre_byte();
  pattern = (char const   *)__dyc_read_ptr__char();
  patternLen = __dyc_readpre_byte();
  string = (char const   *)__dyc_read_ptr__char();
  stringLen = __dyc_readpre_byte();
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
  __dyc_funcallvar_8 = (int __attribute__((__leaf__,
  __gnu_inline__))  )__dyc_readpre_byte();
  __dyc_funcallvar_9 = (__int32_t const   **)__dyc_read_ptr__ptr__typdef___int32_t();
  __dyc_funcallvar_10 = (int __attribute__((__leaf__,
  __gnu_inline__))  )__dyc_readpre_byte();
  __dyc_funcallvar_11 = (__int32_t const   **)__dyc_read_ptr__ptr__typdef___int32_t();
  __dyc_funcallvar_12 = (int __attribute__((__leaf__,
  __gnu_inline__))  )__dyc_readpre_byte();
  __dyc_funcallvar_13 = (__int32_t const   **)__dyc_read_ptr__ptr__typdef___int32_t();
  __dyc_funcallvar_14 = (int __attribute__((__leaf__,
  __gnu_inline__))  )__dyc_readpre_byte();
  __dyc_funcallvar_15 = (__int32_t const   **)__dyc_read_ptr__ptr__typdef___int32_t();
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
  __res___2 = 0;
  tmp___14 = 0;
  tmp___15 = 0;
  __res___3 = 0;
  tmp___18 = 0;
  tmp___19 = 0;
  __res___4 = 0;
  tmp___22 = 0;
  tmp___23 = 0;
  __res___5 = 0;
  tmp___26 = 0;
  tmp___27 = 0;
  match = 0;
  while (1) {
    while_5_continue:  ;
    if ((int const   )*(pattern + 0) == 92) {
      if (patternLen >= 2) {
        pattern ++;
        patternLen --;
        if ((int const   )*(pattern + 0) == (int const   )*(string + 0)) {
          match = 1;
        }
      } else {
        goto _L___0;
      }
    } else {
      _L___0:  
      if ((int const   )*(pattern + 0) == 93) {
        goto while_5_break;
      } else {
        if (patternLen == 0) {
          pattern --;
          patternLen ++;
          goto while_5_break;
        } else {
          if ((int const   )*(pattern + 1) == 45) {
            if (patternLen >= 3) {
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
            } else {
              goto _L;
            }
          } else {
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
          }
        }
      }
    }
    pattern ++;
    patternLen --;
  }
  while_5_break:  ;
  if (not) {
    match = ! match;
  }
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
  __dyc_dummy_label:  ;
  __dyc_printpre_byte(end);
  __dyc_print_ptr__char(pattern);
  __dyc_printpre_byte(patternLen);
  __dyc_print_ptr__char(string);
  __dyc_printpre_byte(stringLen);
}
}
