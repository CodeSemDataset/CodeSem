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
  int common ;
  int needed_len ;
  char *ret ;
  size_t __s1_len ;
  size_t __s2_len ;
  int tmp___25 ;
  int tmp___30 ;
  int tmp___31 ;
  int tmp___32 ;
  int tmp___33 ;
  size_t __s1_len___0 ;
  size_t __s2_len___0 ;
  int tmp___43 ;
  int tmp___48 ;
  int tmp___49 ;
  int tmp___50 ;
  int tmp___51 ;
  size_t tmp___52 ;
  size_t tmp___53 ;
  void *tmp___54 ;
  char **__dyc_funcallvar_11 ;
  char **__dyc_funcallvar_12 ;
  int __dyc_funcallvar_13 ;
  int __dyc_funcallvar_14 ;
  int __dyc_funcallvar_15 ;
  int __dyc_funcallvar_16 ;
  int __dyc_funcallvar_17 ;
  char **__dyc_funcallvar_18 ;
  int __dyc_funcallvar_19 ;
  int __dyc_funcallvar_20 ;
  int __dyc_funcallvar_21 ;
  int __dyc_funcallvar_22 ;
  int __dyc_funcallvar_23 ;
  size_t __dyc_funcallvar_24 ;
  size_t __dyc_funcallvar_25 ;
  void *__dyc_funcallvar_26 ;

  {
  prog_num = __dyc_readpre_byte();
  bin_num = __dyc_readpre_byte();
  prefix_num = __dyc_readpre_byte();
  __dyc_funcallvar_11 = __dyc_read_ptr__ptr__char();
  __dyc_funcallvar_12 = __dyc_read_ptr__ptr__char();
  __dyc_funcallvar_13 = __dyc_readpre_byte();
  __dyc_funcallvar_14 = __dyc_readpre_byte();
  __dyc_funcallvar_15 = __dyc_readpre_byte();
  __dyc_funcallvar_16 = __dyc_readpre_byte();
  __dyc_funcallvar_17 = __dyc_readpre_byte();
  __dyc_funcallvar_18 = __dyc_read_ptr__ptr__char();
  __dyc_funcallvar_19 = __dyc_readpre_byte();
  __dyc_funcallvar_20 = __dyc_readpre_byte();
  __dyc_funcallvar_21 = __dyc_readpre_byte();
  __dyc_funcallvar_22 = __dyc_readpre_byte();
  __dyc_funcallvar_23 = __dyc_readpre_byte();
  __dyc_funcallvar_24 = (size_t )__dyc_readpre_byte();
  __dyc_funcallvar_25 = (size_t )__dyc_readpre_byte();
  __dyc_funcallvar_26 = __dyc_read_ptr__void();
  prog_dirs = 0;
  bin_dirs = 0;
  prefix_dirs = 0;
  i = 0;
  n = 0;
  common = 0;
  needed_len = 0;
  ret = 0;
  __s1_len = 0;
  __s2_len = 0;
  tmp___25 = 0;
  tmp___30 = 0;
  tmp___31 = 0;
  tmp___32 = 0;
  tmp___33 = 0;
  __s1_len___0 = 0;
  __s2_len___0 = 0;
  tmp___43 = 0;
  tmp___48 = 0;
  tmp___49 = 0;
  tmp___50 = 0;
  tmp___51 = 0;
  tmp___52 = 0;
  tmp___53 = 0;
  tmp___54 = 0;
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
  common = 0;
  while (1) {
    while_7_continue:  ;
    if (! (common < n)) {
      goto while_7_break;
    }
    if (0) {
      {
      tmp___49 = __dyc_funcallvar_19;
      __s1_len___0 = (unsigned long )tmp___49;
      tmp___50 = __dyc_funcallvar_20;
      __s2_len___0 = (unsigned long )tmp___50;
      }
      if (! ((unsigned long )((void const   *)(*(bin_dirs + common) + 1)) - (unsigned long )((void const   *)*(bin_dirs + common)) == 1UL)) {
        goto _L___3;
      } else {
        if (__s1_len___0 >= 4UL) {
          _L___3:  
          if (! ((unsigned long )((void const   *)(*(prefix_dirs + common) + 1)) - (unsigned long )((void const   *)*(prefix_dirs + common)) == 1UL)) {
            tmp___51 = 1;
          } else {
            if (__s2_len___0 >= 4UL) {
              tmp___51 = 1;
            } else {
              tmp___51 = 0;
            }
          }
        } else {
          tmp___51 = 0;
        }
      }
      if (tmp___51) {
        {
        tmp___43 = __dyc_funcallvar_21;
        }
      } else {
        {
        tmp___48 = __dyc_funcallvar_22;
        tmp___43 = tmp___48;
        }
      }
    } else {
      {
      tmp___48 = __dyc_funcallvar_23;
      tmp___43 = tmp___48;
      }
    }
    if (tmp___43 != 0) {
      goto while_7_break;
    }
    common ++;
  }
  while_7_break:  ;
  if (common == 0) {
    goto __dyc_dummy_label;
  }
  needed_len = 0;
  i = 0;
  while (1) {
    while_8_continue:  ;
    if (! (i < prog_num)) {
      goto while_8_break;
    }
    {
    tmp___52 = __dyc_funcallvar_24;
    needed_len = (int )((size_t )needed_len + tmp___52);
    i ++;
    }
  }
  while_8_break:  ;
  needed_len = (int )((unsigned long )needed_len + sizeof("..") * (unsigned long )(bin_num - common));
  i = common;
  while (1) {
    while_9_continue:  ;
    if (! (i < prefix_num)) {
      goto while_9_break;
    }
    {
    tmp___53 = __dyc_funcallvar_25;
    needed_len = (int )((size_t )needed_len + tmp___53);
    i ++;
    }
  }
  while_9_break:  ;
  needed_len ++;
  tmp___54 = __dyc_funcallvar_26;
  ret = (char *)tmp___54;
  __dyc_dummy_label:  ;
  __dyc_printpre_byte(needed_len);
  __dyc_print_ptr__char(ret);
  __dyc_printpre_byte(__s1_len);
  __dyc_printpre_byte(__s2_len);
  __dyc_printpre_byte(__s1_len___0);
  __dyc_printpre_byte(__s2_len___0);
}
}
