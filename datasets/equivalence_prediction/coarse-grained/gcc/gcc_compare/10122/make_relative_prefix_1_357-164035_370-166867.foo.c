#include "../../include/dycfoo.h"
#include "../../include/make-relative-prefix.i.hd.c.h"
void __dyc_foo(void) 
{ char **bin_dirs ;
  char **prefix_dirs ;
  int prog_num ;
  int i ;
  int n ;
  int common ;
  int needed_len ;
  size_t __s1_len___0 ;
  size_t __s2_len___0 ;
  int tmp___43 ;
  int tmp___48 ;
  int tmp___49 ;
  int tmp___50 ;
  int tmp___51 ;
  size_t tmp___52 ;
  int __dyc_funcallvar_19 ;
  int __dyc_funcallvar_20 ;
  int __dyc_funcallvar_21 ;
  int __dyc_funcallvar_22 ;
  int __dyc_funcallvar_23 ;
  size_t __dyc_funcallvar_24 ;

  {
  bin_dirs = __dyc_read_ptr__ptr__char();
  prefix_dirs = __dyc_read_ptr__ptr__char();
  prog_num = __dyc_readpre_byte();
  n = __dyc_readpre_byte();
  common = __dyc_readpre_byte();
  __dyc_funcallvar_19 = __dyc_readpre_byte();
  __dyc_funcallvar_20 = __dyc_readpre_byte();
  __dyc_funcallvar_21 = __dyc_readpre_byte();
  __dyc_funcallvar_22 = __dyc_readpre_byte();
  __dyc_funcallvar_23 = __dyc_readpre_byte();
  __dyc_funcallvar_24 = (size_t )__dyc_readpre_byte();
  i = 0;
  needed_len = 0;
  __s1_len___0 = 0;
  __s2_len___0 = 0;
  tmp___43 = 0;
  tmp___48 = 0;
  tmp___49 = 0;
  tmp___50 = 0;
  tmp___51 = 0;
  tmp___52 = 0;
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
      goto __dyc_dummy_label;
    }
    {
    tmp___52 = __dyc_funcallvar_24;
    needed_len = (int )((size_t )needed_len + tmp___52);
    i ++;
    }
  }
  __dyc_dummy_label:  ;
  __dyc_printpre_byte(needed_len);
  __dyc_printpre_byte(__s1_len___0);
  __dyc_printpre_byte(__s2_len___0);
}
}