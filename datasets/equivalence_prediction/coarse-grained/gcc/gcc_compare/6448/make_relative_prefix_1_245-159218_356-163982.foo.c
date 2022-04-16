#include "../../include/dycfoo.h"
#include "../../include/make-relative-prefix.i.hd.c.h"
void __dyc_foo(void) 
{ char **prog_dirs ;
  char **bin_dirs ;
  char **prefix_dirs ;
  int prog_num ;
  int bin_num ;
  int prefix_num ;
  int i ;
  int n ;
  char *full_progname ;
  char *alloc_ptr ;
  char *temp ;
  char *startp ;
  char *endp ;
  char *nstore ;
  size_t prefixlen ;
  size_t tmp ;
  size_t len ;
  size_t tmp___0 ;
  void *tmp___1 ;
  void *tmp___2 ;
  struct stat st ;
  int __attribute__((__leaf__))  tmp___3 ;
  int tmp___4 ;
  char const   *tmp___5 ;
  char *tmp___15 ;
  size_t __s1_len ;
  size_t __s2_len ;
  int tmp___25 ;
  int tmp___30 ;
  int tmp___31 ;
  int tmp___32 ;
  int tmp___33 ;
  char const   *progname ;
  int resolve_links ;
  char *__dyc_funcallvar_2 ;
  size_t __dyc_funcallvar_3 ;
  size_t __dyc_funcallvar_4 ;
  void *__dyc_funcallvar_5 ;
  void *__dyc_funcallvar_6 ;
  int __dyc_funcallvar_7 ;
  int __attribute__((__leaf__))  __dyc_funcallvar_8 ;
  char *__dyc_funcallvar_9 ;
  char *__dyc_funcallvar_10 ;
  char **__dyc_funcallvar_11 ;
  char **__dyc_funcallvar_12 ;
  int __dyc_funcallvar_13 ;
  int __dyc_funcallvar_14 ;
  int __dyc_funcallvar_15 ;
  int __dyc_funcallvar_16 ;
  int __dyc_funcallvar_17 ;
  char **__dyc_funcallvar_18 ;

  {
  prog_num = __dyc_readpre_byte();
  bin_num = __dyc_readpre_byte();
  prefix_num = __dyc_readpre_byte();
  st = __dyc_read_comp_31stat();
  tmp___5 = (char const   *)__dyc_read_ptr__char();
  progname = (char const   *)__dyc_read_ptr__char();
  resolve_links = __dyc_readpre_byte();
  __dyc_funcallvar_2 = __dyc_read_ptr__char();
  __dyc_funcallvar_3 = (size_t )__dyc_readpre_byte();
  __dyc_funcallvar_4 = (size_t )__dyc_readpre_byte();
  __dyc_funcallvar_5 = __dyc_read_ptr__void();
  __dyc_funcallvar_6 = __dyc_read_ptr__void();
  __dyc_funcallvar_7 = __dyc_readpre_byte();
  __dyc_funcallvar_8 = (int __attribute__((__leaf__))  )__dyc_readpre_byte();
  __dyc_funcallvar_9 = __dyc_read_ptr__char();
  __dyc_funcallvar_10 = __dyc_read_ptr__char();
  __dyc_funcallvar_11 = __dyc_read_ptr__ptr__char();
  __dyc_funcallvar_12 = __dyc_read_ptr__ptr__char();
  __dyc_funcallvar_13 = __dyc_readpre_byte();
  __dyc_funcallvar_14 = __dyc_readpre_byte();
  __dyc_funcallvar_15 = __dyc_readpre_byte();
  __dyc_funcallvar_16 = __dyc_readpre_byte();
  __dyc_funcallvar_17 = __dyc_readpre_byte();
  __dyc_funcallvar_18 = __dyc_read_ptr__ptr__char();
  prog_dirs = 0;
  bin_dirs = 0;
  prefix_dirs = 0;
  i = 0;
  n = 0;
  full_progname = 0;
  alloc_ptr = 0;
  temp = 0;
  startp = 0;
  endp = 0;
  nstore = 0;
  prefixlen = 0;
  tmp = 0;
  len = 0;
  tmp___0 = 0;
  tmp___1 = 0;
  tmp___2 = 0;
  tmp___3 = 0;
  tmp___4 = 0;
  tmp___15 = 0;
  __s1_len = 0;
  __s2_len = 0;
  tmp___25 = 0;
  tmp___30 = 0;
  tmp___31 = 0;
  tmp___32 = 0;
  tmp___33 = 0;
  if ((unsigned long )tmp___5 == (unsigned long )progname) {
    {
    temp = __dyc_funcallvar_2;
    }
    if (temp) {
      {
      tmp = __dyc_funcallvar_3;
      prefixlen = tmp + 1UL;
      }
      if (prefixlen < 2UL) {
        prefixlen = 2UL;
      }
      {
      tmp___0 = __dyc_funcallvar_4;
      len = (prefixlen + tmp___0) + 1UL;
      }
      if (len < 4032UL) {
        {
        tmp___1 = __dyc_funcallvar_5;
        nstore = (char *)tmp___1;
        }
      } else {
        {
        tmp___2 = __dyc_funcallvar_6;
        nstore = (char *)tmp___2;
        alloc_ptr = nstore;
        }
      }
      endp = temp;
      startp = endp;
      {
      while (1) {
        while_5_continue:  ;
        if ((int )*endp == 58) {
          goto _L;
        } else {
          if ((int )*endp == 0) {
            _L:  
            if ((unsigned long )endp == (unsigned long )startp) {
              *(nstore + 0) = (char )'.';
              *(nstore + 1) = (char )'/';
              *(nstore + 2) = (char )'\000';
            } else {
              {

              }
              if (! ((int )*(endp + -1) == 47)) {
                *(nstore + (endp - startp)) = (char )'/';
                *(nstore + ((endp - startp) + 1)) = (char)0;
              } else {
                *(nstore + (endp - startp)) = (char)0;
              }
            }
            {

            tmp___4 = __dyc_funcallvar_7;
            }
            if (! tmp___4) {
              {
              tmp___3 = __dyc_funcallvar_8;
              }
              if (tmp___3 >= (int __attribute__((__leaf__))  )0) {
                if ((st.st_mode & 61440U) == 32768U) {
                  progname = (char const   *)nstore;
                  goto while_5_break;
                }
              }
            }
            if ((int )*endp == 0) {
              goto while_5_break;
            }
            startp = endp + 1;
            endp = startp;
          } else {
            endp ++;
          }
        }
      }
      while_5_break:  ;
      }
    }
  }
  if (resolve_links) {
    {
    full_progname = __dyc_funcallvar_9;
    }
  } else {
    {
    tmp___15 = __dyc_funcallvar_10;
    full_progname = tmp___15;
    }
  }
  if ((unsigned long )full_progname == (unsigned long )((void *)0)) {
    goto __dyc_dummy_label;
  }
  prog_dirs = __dyc_funcallvar_11;

  if ((unsigned long )prog_dirs == (unsigned long )((void *)0)) {
    goto __dyc_dummy_label;
  }
  bin_dirs = __dyc_funcallvar_12;
  if ((unsigned long )bin_dirs == (unsigned long )((void *)0)) {
    goto __dyc_dummy_label;
  }
  prog_num --;
  if (prog_num == bin_num) {
    i = 0;
    {
    while (1) {
      while_6_continue:  ;
      if (! (i < bin_num)) {
        goto while_6_break;
      }
      if (0) {
        {
        tmp___31 = __dyc_funcallvar_13;
        __s1_len = (unsigned long )tmp___31;
        tmp___32 = __dyc_funcallvar_14;
        __s2_len = (unsigned long )tmp___32;
        }
        if (! ((unsigned long )((void const   *)(*(prog_dirs + i) + 1)) - (unsigned long )((void const   *)*(prog_dirs + i)) == 1UL)) {
          goto _L___1;
        } else {
          if (__s1_len >= 4UL) {
            _L___1:  
            if (! ((unsigned long )((void const   *)(*(bin_dirs + i) + 1)) - (unsigned long )((void const   *)*(bin_dirs + i)) == 1UL)) {
              tmp___33 = 1;
            } else {
              if (__s2_len >= 4UL) {
                tmp___33 = 1;
              } else {
                tmp___33 = 0;
              }
            }
          } else {
            tmp___33 = 0;
          }
        }
        if (tmp___33) {
          {
          tmp___25 = __dyc_funcallvar_15;
          }
        } else {
          {
          tmp___30 = __dyc_funcallvar_16;
          tmp___25 = tmp___30;
          }
        }
      } else {
        {
        tmp___30 = __dyc_funcallvar_17;
        tmp___25 = tmp___30;
        }
      }
      if (tmp___25 != 0) {
        goto while_6_break;
      }
      i ++;
    }
    while_6_break:  ;
    }
    if (prog_num <= 0) {
      goto __dyc_dummy_label;
    } else {
      if (i == bin_num) {
        goto __dyc_dummy_label;
      }
    }
  }
  prefix_dirs = __dyc_funcallvar_18;
  if ((unsigned long )prefix_dirs == (unsigned long )((void *)0)) {
    goto __dyc_dummy_label;
  }
  if (prefix_num < bin_num) {
    n = prefix_num;
  } else {
    n = bin_num;
  }
  __dyc_dummy_label:  ;
  __dyc_printpre_byte(n);
  __dyc_print_ptr__char(alloc_ptr);
  __dyc_printpre_byte(__s1_len);
  __dyc_printpre_byte(__s2_len);
  __dyc_print_ptr__char(progname);
}
}
