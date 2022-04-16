#include "../../include/dycfoo.h"
#include "../../include/regex.i.hd.c.h"
void __dyc_foo(void) 
{ char byte_reg_unset_dummy ;
  int mcnt ;
  char const   *end1 ;
  char const   *end2 ;
  char const   *end_match_1 ;
  char const   *end_match_2 ;
  byte_fail_stack_type fail_stack ;
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
  void *tmp ;
  void *tmp___0 ;
  void *tmp___1 ;
  void *tmp___2 ;
  void *tmp___3 ;
  void *tmp___4 ;
  void *tmp___5 ;
  void *tmp___6 ;
  void *tmp___7 ;
  void *tmp___8 ;
  struct re_pattern_buffer *bufp ;
  char const   *string1 ;
  int size1 ;
  char const   *string2 ;
  int size2 ;
  int pos ;
  int stop ;
  void *__dyc_funcallvar_1 ;
  void *__dyc_funcallvar_2 ;
  void *__dyc_funcallvar_3 ;
  void *__dyc_funcallvar_4 ;
  void *__dyc_funcallvar_5 ;
  void *__dyc_funcallvar_6 ;
  void *__dyc_funcallvar_7 ;
  void *__dyc_funcallvar_8 ;
  void *__dyc_funcallvar_9 ;
  void *__dyc_funcallvar_10 ;

  {
  byte_reg_unset_dummy = (char )__dyc_readpre_byte();
  num_regs = (size_t )__dyc_readpre_byte();
  bufp = __dyc_read_ptr__comp_30re_pattern_buffer();
  string1 = (char const   *)__dyc_read_ptr__char();
  size1 = __dyc_readpre_byte();
  string2 = (char const   *)__dyc_read_ptr__char();
  size2 = __dyc_readpre_byte();
  pos = __dyc_readpre_byte();
  stop = __dyc_readpre_byte();
  __dyc_funcallvar_1 = __dyc_read_ptr__void();
  __dyc_funcallvar_2 = __dyc_read_ptr__void();
  __dyc_funcallvar_3 = __dyc_read_ptr__void();
  __dyc_funcallvar_4 = __dyc_read_ptr__void();
  __dyc_funcallvar_5 = __dyc_read_ptr__void();
  __dyc_funcallvar_6 = __dyc_read_ptr__void();
  __dyc_funcallvar_7 = __dyc_read_ptr__void();
  __dyc_funcallvar_8 = __dyc_read_ptr__void();
  __dyc_funcallvar_9 = __dyc_read_ptr__void();
  __dyc_funcallvar_10 = __dyc_read_ptr__void();
  mcnt = 0;
  end1 = 0;
  end2 = 0;
  end_match_1 = 0;
  end_match_2 = 0;
  memset(& fail_stack, 0, sizeof(byte_fail_stack_type ));
  regstart = 0;
  regend = 0;
  old_regstart = 0;
  old_regend = 0;
  reg_info = 0;
  best_regstart = 0;
  best_regend = 0;
  reg_dummy = 0;
  reg_info_dummy = 0;
  tmp = 0;
  tmp___0 = 0;
  tmp___1 = 0;
  tmp___2 = 0;
  tmp___3 = 0;
  tmp___4 = 0;
  tmp___5 = 0;
  tmp___6 = 0;
  tmp___7 = 0;
  tmp___8 = 0;
  while (1) {
    while_139_continue:  ;
    {
    tmp = __dyc_funcallvar_1;
    fail_stack.stack = (byte_fail_stack_elt_t *)tmp;
    }
    if ((unsigned long )fail_stack.stack == (unsigned long )((void *)0)) {
      goto __dyc_dummy_label;
    }
    fail_stack.size = 5U;
    fail_stack.avail = 0U;
    goto while_139_break;
  }
  while_139_break:  ;
  if (bufp->re_nsub) {
    {
    tmp___0 = __dyc_funcallvar_2;
    regstart = (char const   **)tmp___0;
    tmp___1 = __dyc_funcallvar_3;
    regend = (char const   **)tmp___1;
    tmp___2 = __dyc_funcallvar_4;
    old_regstart = (char const   **)tmp___2;
    tmp___3 = __dyc_funcallvar_5;
    old_regend = (char const   **)tmp___3;
    tmp___4 = __dyc_funcallvar_6;
    best_regstart = (char const   **)tmp___4;
    tmp___5 = __dyc_funcallvar_7;
    best_regend = (char const   **)tmp___5;
    tmp___6 = __dyc_funcallvar_8;
    reg_info = (byte_register_info_type *)tmp___6;
    tmp___7 = __dyc_funcallvar_9;
    reg_dummy = (char const   **)tmp___7;
    tmp___8 = __dyc_funcallvar_10;
    reg_info_dummy = (byte_register_info_type *)tmp___8;
    }
    if (regstart) {
      if (regend) {
        if (old_regstart) {
          if (old_regend) {
            if (reg_info) {
              if (best_regstart) {
                if (best_regend) {
                  if (reg_dummy) {
                    if (! reg_info_dummy) {
                      goto _L___6;
                    }
                  } else {
                    goto _L___6;
                  }
                } else {
                  goto _L___6;
                }
              } else {
                goto _L___6;
              }
            } else {
              goto _L___6;
            }
          } else {
            goto _L___6;
          }
        } else {
          goto _L___6;
        }
      } else {
        goto _L___6;
      }
    } else {
      _L___6:  
      {
      while (1) {
        while_140_continue:  ;
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
        goto while_140_break;
      }
      while_140_break:  ;
      }
      goto __dyc_dummy_label;
    }
  } else {
    reg_dummy = (char const   **)((void *)0);
    best_regend = reg_dummy;
    best_regstart = best_regend;
    old_regend = best_regstart;
    old_regstart = old_regend;
    regend = old_regstart;
    regstart = regend;
    reg_info_dummy = (byte_register_info_type *)((void *)0);
    reg_info = reg_info_dummy;
  }
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
  if (stop <= size1) {
    end_match_1 = string1 + stop;
    end_match_2 = string2;
  } else {
    end_match_1 = end1;
    end_match_2 = (string2 + stop) - size1;
  }
  __dyc_dummy_label:  ;
  __dyc_print_ptr__char(end1);
  __dyc_print_ptr__char(end2);
  __dyc_print_ptr__char(end_match_1);
  __dyc_print_ptr__char(end_match_2);
  __dyc_print_comp_34__anonstruct_byte_fail_stack_type_25(fail_stack);
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
