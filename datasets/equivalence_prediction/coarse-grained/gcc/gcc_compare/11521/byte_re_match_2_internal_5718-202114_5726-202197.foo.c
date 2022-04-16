#include "../../include/dycfoo.h"
#include "../../include/regex.i.hd.c.h"
void __dyc_foo(void) 
{ char const   **regstart ;
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

  reg_dummy = (char const   **)((void *)0);
  best_regend = reg_dummy;
  best_regstart = best_regend;
  old_regend = best_regstart;
  old_regstart = old_regend;
  regend = old_regstart;
  regstart = regend;
  reg_info_dummy = (byte_register_info_type *)((void *)0);
  reg_info = reg_info_dummy;
  goto _L___7;
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
