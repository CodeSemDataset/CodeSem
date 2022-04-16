#include "../../include/dycfoo.h"
#include "../../include/make-relative-prefix.i.hd.c.h"
void __dyc_foo(void) 
{ char **prog_dirs ;
  char **bin_dirs ;
  char **prefix_dirs ;
  int prog_num ;
  int bin_num ;
  int i ;
  char *full_progname ;
  size_t __s1_len ;
  size_t __s2_len ;
  int tmp___25 ;
  int tmp___30 ;
  int tmp___31 ;
  int tmp___32 ;
  int tmp___33 ;
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
  full_progname = __dyc_read_ptr__char();
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
  __s1_len = 0;
  __s2_len = 0;
  tmp___25 = 0;
  tmp___30 = 0;
  tmp___31 = 0;
  tmp___32 = 0;
  tmp___33 = 0;
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
  __dyc_dummy_label:  ;
  __dyc_print_ptr__ptr__char(prefix_dirs);
  __dyc_printpre_byte(__s1_len);
  __dyc_printpre_byte(__s2_len);
}
}
