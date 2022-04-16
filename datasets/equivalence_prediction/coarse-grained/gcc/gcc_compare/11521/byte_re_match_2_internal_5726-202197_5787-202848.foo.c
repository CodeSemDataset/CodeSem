#include "../../include/dycfoo.h"
#include "../../include/regex.i.hd.c.h"
void __dyc_foo(void) 
{ char byte_reg_unset_dummy ;
  int mcnt ;
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
  int size1 ;
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
  size1 = __dyc_readpre_byte();
  size2 = __dyc_readpre_byte();
  pos = __dyc_readpre_byte();
  mcnt = 0;
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
      goto __dyc_dummy_label;
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
  __dyc_dummy_label:  ;
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
