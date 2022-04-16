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
  void *tmp___10 ;
  void *tmp___11 ;
  struct re_pattern_buffer *bufp ;
  struct re_registers *regs ;
  void *__dyc_funcallvar_12 ;

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
  tmp___10 = __dyc_read_ptr__void();
  bufp = __dyc_read_ptr__comp_30re_pattern_buffer();
  regs = __dyc_read_ptr__comp_31re_registers();
  __dyc_funcallvar_12 = __dyc_read_ptr__void();
  tmp___11 = 0;
  regs->start = (xregoff_t *)tmp___10;
  tmp___11 = __dyc_funcallvar_12;
  regs->end = (xregoff_t *)tmp___11;
  if ((unsigned long )regs->start == (unsigned long )((void *)0)) {
    goto _L___9;
  } else {
    if ((unsigned long )regs->end == (unsigned long )((void *)0)) {
      _L___9:  
      {
      while (1) {
        while_146_continue:  ;
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
        goto while_146_break;
      }
      while_146_break:  ;
      }
      goto __dyc_dummy_label;
    }
  }
  bufp->regs_allocated = 1U;
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
