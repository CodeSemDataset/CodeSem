#include "../../include/dycfoo.h"
#include "../../include/make-relative-prefix.i.hd.c.h"
void __dyc_foo(void) 
{ char *full_progname ;
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
  char const   *progname ;
  char const   *bin_prefix ;
  char const   *prefix ;
  int resolve_links ;
  char const   *__dyc_funcallvar_1 ;
  char *__dyc_funcallvar_2 ;
  size_t __dyc_funcallvar_3 ;
  size_t __dyc_funcallvar_4 ;
  void *__dyc_funcallvar_5 ;
  void *__dyc_funcallvar_6 ;
  int __dyc_funcallvar_7 ;
  int __attribute__((__leaf__))  __dyc_funcallvar_8 ;
  char *__dyc_funcallvar_9 ;
  char *__dyc_funcallvar_10 ;

  {
  st = __dyc_read_comp_31stat();
  progname = (char const   *)__dyc_read_ptr__char();
  bin_prefix = (char const   *)__dyc_read_ptr__char();
  prefix = (char const   *)__dyc_read_ptr__char();
  resolve_links = __dyc_readpre_byte();
  __dyc_funcallvar_1 = (char const   *)__dyc_read_ptr__char();
  __dyc_funcallvar_2 = __dyc_read_ptr__char();
  __dyc_funcallvar_3 = (size_t )__dyc_readpre_byte();
  __dyc_funcallvar_4 = (size_t )__dyc_readpre_byte();
  __dyc_funcallvar_5 = __dyc_read_ptr__void();
  __dyc_funcallvar_6 = __dyc_read_ptr__void();
  __dyc_funcallvar_7 = __dyc_readpre_byte();
  __dyc_funcallvar_8 = (int __attribute__((__leaf__))  )__dyc_readpre_byte();
  __dyc_funcallvar_9 = __dyc_read_ptr__char();
  __dyc_funcallvar_10 = __dyc_read_ptr__char();
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
  tmp___5 = 0;
  tmp___15 = 0;
  if ((unsigned long )progname == (unsigned long )((void *)0)) {
    goto __dyc_dummy_label;
  } else {
    if ((unsigned long )bin_prefix == (unsigned long )((void *)0)) {
      goto __dyc_dummy_label;
    } else {
      if ((unsigned long )prefix == (unsigned long )((void *)0)) {
        goto __dyc_dummy_label;
      }
    }
  }
  tmp___5 = __dyc_funcallvar_1;
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
  __dyc_dummy_label:  ;
  __dyc_print_ptr__char(alloc_ptr);
  __dyc_print_ptr__char(progname);
}
}
