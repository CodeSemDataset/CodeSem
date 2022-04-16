#include "../../include/dycfoo.h"
#include "../../include/make-temp-file.i.hd.c.h"
void __dyc_foo(void) 
{ char *memoized_tmpdir ;
  char const   *base ;
  char *tmpdir ;
  unsigned int len ;
  char *tmp___1 ;
  char *tmp___2 ;
  size_t __s1_len ;
  size_t __s2_len ;
  int tmp___12 ;
  int tmp___17 ;
  int tmp___18 ;
  int tmp___19 ;
  int tmp___20 ;
  size_t tmp___21 ;
  void *tmp___22 ;
  char const   *__dyc_funcallvar_2 ;
  char *__dyc_funcallvar_3 ;
  char const   *__dyc_funcallvar_4 ;
  char *__dyc_funcallvar_5 ;
  char const   *__dyc_funcallvar_6 ;
  int __dyc_funcallvar_7 ;
  int __dyc_funcallvar_8 ;
  int __dyc_funcallvar_9 ;
  int __dyc_funcallvar_10 ;
  int __dyc_funcallvar_11 ;
  char const   *__dyc_funcallvar_12 ;
  char const   *__dyc_funcallvar_13 ;
  char const   *__dyc_funcallvar_14 ;
  char const   *__dyc_funcallvar_15 ;
  char const   *__dyc_funcallvar_16 ;
  size_t __dyc_funcallvar_17 ;
  void *__dyc_funcallvar_18 ;

  {
  __dyc_funcallvar_2 = (char const   *)__dyc_read_ptr__char();
  __dyc_funcallvar_3 = __dyc_read_ptr__char();
  __dyc_funcallvar_4 = (char const   *)__dyc_read_ptr__char();
  __dyc_funcallvar_5 = __dyc_read_ptr__char();
  __dyc_funcallvar_6 = (char const   *)__dyc_read_ptr__char();
  __dyc_funcallvar_7 = __dyc_readpre_byte();
  __dyc_funcallvar_8 = __dyc_readpre_byte();
  __dyc_funcallvar_9 = __dyc_readpre_byte();
  __dyc_funcallvar_10 = __dyc_readpre_byte();
  __dyc_funcallvar_11 = __dyc_readpre_byte();
  __dyc_funcallvar_12 = (char const   *)__dyc_read_ptr__char();
  __dyc_funcallvar_13 = (char const   *)__dyc_read_ptr__char();
  __dyc_funcallvar_14 = (char const   *)__dyc_read_ptr__char();
  __dyc_funcallvar_15 = (char const   *)__dyc_read_ptr__char();
  __dyc_funcallvar_16 = (char const   *)__dyc_read_ptr__char();
  __dyc_funcallvar_17 = (size_t )__dyc_readpre_byte();
  __dyc_funcallvar_18 = __dyc_read_ptr__void();
  memoized_tmpdir = 0;
  base = 0;
  tmpdir = 0;
  len = 0;
  tmp___1 = 0;
  tmp___2 = 0;
  __s1_len = 0;
  __s2_len = 0;
  tmp___12 = 0;
  tmp___17 = 0;
  tmp___18 = 0;
  tmp___19 = 0;
  tmp___20 = 0;
  tmp___21 = 0;
  tmp___22 = 0;
  base = __dyc_funcallvar_2;
  tmp___1 = __dyc_funcallvar_3;
  base = __dyc_funcallvar_4;
  tmp___2 = __dyc_funcallvar_5;
  base = __dyc_funcallvar_6;
  if (0) {
    {
    tmp___18 = __dyc_funcallvar_7;
    __s1_len = (unsigned long )tmp___18;
    tmp___19 = __dyc_funcallvar_8;
    __s2_len = (unsigned long )tmp___19;
    }
    if (! ((unsigned long )((void const   *)("/tmp" + 1)) - (unsigned long )((void const   *)"/tmp") == 1UL)) {
      goto _L___0;
    } else {
      if (__s1_len >= 4UL) {
        _L___0:  
        if (! ((unsigned long )((void const   *)("\\" + 1)) - (unsigned long )((void const   *)"\\") == 1UL)) {
          tmp___20 = 1;
        } else {
          if (__s2_len >= 4UL) {
            tmp___20 = 1;
          } else {
            tmp___20 = 0;
          }
        }
      } else {
        tmp___20 = 0;
      }
    }
    if (tmp___20) {
      {
      tmp___12 = __dyc_funcallvar_9;
      }
    } else {
      {
      tmp___17 = __dyc_funcallvar_10;
      tmp___12 = tmp___17;
      }
    }
  } else {
    {
    tmp___17 = __dyc_funcallvar_11;
    tmp___12 = tmp___17;
    }
  }
  if (tmp___12 == 0) {
    {
    base = __dyc_funcallvar_12;
    }
  } else {
    {
    base = __dyc_funcallvar_13;
    }
  }
  base = __dyc_funcallvar_14;
  base = __dyc_funcallvar_15;
  base = __dyc_funcallvar_16;
  if ((unsigned long )base == (unsigned long )((char const   *)0)) {
    base = ".";
  }
  tmp___21 = __dyc_funcallvar_17;
  len = (unsigned int )tmp___21;
  tmp___22 = __dyc_funcallvar_18;
  tmpdir = (char *)tmp___22;

  *(tmpdir + len) = (char )'/';
  *(tmpdir + (len + 1U)) = (char )'\000';
  memoized_tmpdir = tmpdir;
  __dyc_dummy_label:  ;
  __dyc_print_ptr__char(memoized_tmpdir);
  __dyc_print_ptr__char(base);
  __dyc_print_ptr__char(tmp___1);
  __dyc_print_ptr__char(tmp___2);
  __dyc_printpre_byte(__s1_len);
  __dyc_printpre_byte(__s2_len);
}
}
