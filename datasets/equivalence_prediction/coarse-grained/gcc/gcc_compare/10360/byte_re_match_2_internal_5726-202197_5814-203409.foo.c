#include "../../include/dycfoo.h"
#include "../../include/regex.i.hd.c.h"
void __dyc_foo(void) 
{ char byte_reg_unset_dummy ;
  int mcnt ;
  char const   *end1 ;
  char const   *end2 ;
  size_t num_regs ;
  char const   **regstart ;
  char const   **regend ;
  char const   **old_regstart ;
  char const   **old_regend ;
  byte_register_info_type *reg_info ;
  char const   **best_regstart ;
  char const   **best_regend ;
  char const   **reg_dummy ;
  byte_register_info_type *reg_info_dummy ;
  char const   *string1 ;
  int size1 ;
  char const   *string2 ;
  int size2 ;
  int pos ;

  {
  byte_reg_unset_dummy = (char )__dyc_readpre_byte();
  num_regs = (size_t )__dyc_readpre_byte();
  regstart = (char const   **)__dyc_read_ptr__ptr__char();
  regend = (char const   **)__dyc_read_ptr__ptr__char();
  old_regstart = (char const   **)__dyc_read_ptr__ptr__char();
  old_regend = (char const   **)__dyc_read_ptr__ptr__char();
  reg_info = __dyc_read_ptr__typdef_byte_register_info_type();
  best_regstart = (char const   **)__dyc_read_ptr__ptr__char();
  best_regend = (char const   **)__dyc_read_ptr__ptr__char();
  reg_dummy = (char const   **)__dyc_read_ptr__ptr__char();
  reg_info_dummy = __dyc_read_ptr__typdef_byte_register_info_type();
  string1 = (char const   *)__dyc_read_ptr__char();
  size1 = __dyc_readpre_byte();
  string2 = (char const   *)__dyc_read_ptr__char();
  size2 = __dyc_readpre_byte();
  pos = __dyc_readpre_byte();
  mcnt = 0;
  end1 = 0;
  end2 = 0;
  if (pos < 0) {
    goto _L___7;
  } else {
    if (pos > size1 + size2) {
      _L___7:  
      {
      while (1) {
        while_141_continue:  ;
        if (regstart) {

        }
        regstart = (char const   **)((void *)0);
        if (regend) {

        }
        regend = (char const   **)((void *)0);
        if (old_regstart) {

        }
        old_regstart = (char const   **)((void *)0);
        if (old_regend) {

        }
        old_regend = (char const   **)((void *)0);
        if (best_regstart) {

        }
        best_regstart = (char const   **)((void *)0);
        if (best_regend) {

        }
        best_regend = (char const   **)((void *)0);
        if (reg_info) {

        }
        reg_info = (byte_register_info_type *)((void *)0);
        if (reg_dummy) {

        }
        reg_dummy = (char const   **)((void *)0);
        if (reg_info_dummy) {

        }
        reg_info_dummy = (byte_register_info_type *)((void *)0);
        goto while_141_break;
      }
      while_141_break:  ;
      }
      goto __dyc_dummy_label;
    }
  }
  mcnt = 1;
  while (1) {
    while_142_continue:  ;
    if (! ((size_t )((unsigned int )mcnt) < num_regs)) {
      goto while_142_break;
    }
    *(old_regend + mcnt) = (char const   *)(& byte_reg_unset_dummy);
    *(old_regstart + mcnt) = *(old_regend + mcnt);
    *(regend + mcnt) = *(old_regstart + mcnt);
    *(regstart + mcnt) = *(regend + mcnt);
    (reg_info + mcnt)->bits.match_null_string_p = 3U;
    (reg_info + mcnt)->bits.is_active = 0U;
    (reg_info + mcnt)->bits.matched_something = 0U;
    (reg_info + mcnt)->bits.ever_matched_something = 0U;
    mcnt ++;
  }
  while_142_break:  ;
  if (size2 == 0) {
    if ((unsigned long )string1 != (unsigned long )((void *)0)) {
      string2 = string1;
      size2 = size1;
      string1 = (char const   *)0;
      size1 = 0;
    }
  }
  end1 = string1 + size1;
  end2 = string2 + size2;
  __dyc_dummy_label:  ;
  __dyc_print_ptr__char(end1);
  __dyc_print_ptr__char(end2);
  __dyc_print_ptr__ptr__char(regstart);
  __dyc_print_ptr__ptr__char(regend);
  __dyc_print_ptr__ptr__char(old_regstart);
  __dyc_print_ptr__ptr__char(old_regend);
  __dyc_print_ptr__typdef_byte_register_info_type(reg_info);
  __dyc_print_ptr__ptr__char(best_regstart);
  __dyc_print_ptr__ptr__char(best_regend);
  __dyc_print_ptr__ptr__char(reg_dummy);
  __dyc_print_ptr__typdef_byte_register_info_type(reg_info_dummy);
}
}
