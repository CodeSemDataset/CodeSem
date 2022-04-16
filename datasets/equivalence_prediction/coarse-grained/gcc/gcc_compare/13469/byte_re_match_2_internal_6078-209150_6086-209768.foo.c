#include "../../include/dycfoo.h"
#include "../../include/regex.i.hd.c.h"
void __dyc_foo(void) 
{ int mcnt ;
  char const   *d ;
  char const   **regstart ;
  char const   **regend ;
  char const   **old_regstart ;
  char const   **old_regend ;
  byte_register_info_type *reg_info ;
  char const   **best_regstart ;
  char const   **best_regend ;
  char const   **reg_dummy ;
  byte_register_info_type *reg_info_dummy ;
  char const   *tmp___17 ;
  int pos ;

  {
  d = (char const   *)__dyc_read_ptr__char();
  regstart = (char const   **)__dyc_read_ptr__ptr__char();
  regend = (char const   **)__dyc_read_ptr__ptr__char();
  old_regstart = (char const   **)__dyc_read_ptr__ptr__char();
  old_regend = (char const   **)__dyc_read_ptr__ptr__char();
  reg_info = __dyc_read_ptr__typdef_byte_register_info_type();
  best_regstart = (char const   **)__dyc_read_ptr__ptr__char();
  best_regend = (char const   **)__dyc_read_ptr__ptr__char();
  reg_dummy = (char const   **)__dyc_read_ptr__ptr__char();
  reg_info_dummy = __dyc_read_ptr__typdef_byte_register_info_type();
  tmp___17 = (char const   *)__dyc_read_ptr__char();
  pos = __dyc_readpre_byte();
  mcnt = 0;
  mcnt = (d - pos) - tmp___17;
  while (1) {
    while_150_continue:  ;
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
    goto while_150_break;
  }
  while_150_break:  ;
  goto __dyc_dummy_label;
  __dyc_dummy_label:  ;
  __dyc_printpre_byte(mcnt);
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
