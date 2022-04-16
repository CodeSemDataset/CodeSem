#include "../../include/dycfoo.h"
#include "../../include/regex.i.hd.c.h"
void __dyc_foo(void) 
{ int mcnt ;
  char const   *end1 ;
  char const   *end_match_1 ;
  char const   *end_match_2 ;
  char const   *d ;
  char const   *dend ;
  byte_fail_stack_type fail_stack ;
  size_t num_regs ;
  char const   **regstart ;
  char const   **regend ;
  unsigned int best_regs_set ;
  char const   **best_regstart ;
  char const   **best_regend ;
  char const   *match_end ;
  boolean best_match_p ;
  char const   *string1 ;

  {
  end1 = (char const   *)__dyc_read_ptr__char();
  end_match_1 = (char const   *)__dyc_read_ptr__char();
  end_match_2 = (char const   *)__dyc_read_ptr__char();
  d = (char const   *)__dyc_read_ptr__char();
  fail_stack = __dyc_read_comp_34__anonstruct_byte_fail_stack_type_25();
  num_regs = (size_t )__dyc_readpre_byte();
  regstart = (char const   **)__dyc_read_ptr__ptr__char();
  regend = (char const   **)__dyc_read_ptr__ptr__char();
  best_regs_set = (unsigned int )__dyc_readpre_byte();
  best_regstart = (char const   **)__dyc_read_ptr__ptr__char();
  best_regend = (char const   **)__dyc_read_ptr__ptr__char();
  match_end = (char const   *)__dyc_read_ptr__char();
  best_match_p = (boolean )__dyc_readpre_byte();
  string1 = (char const   *)__dyc_read_ptr__char();
  mcnt = 0;
  dend = 0;
  if (! (fail_stack.avail == 0U)) {
    if (! best_regs_set) {
      goto _L___8;
    } else {
      if (best_match_p) {
        _L___8:  
        best_regs_set = 1U;
        match_end = d;
        mcnt = 1;
        {
        while (1) {
          while_144_continue:  ;
          if (! ((size_t )((unsigned int )mcnt) < num_regs)) {
            goto while_144_break;
          }
          *(best_regstart + mcnt) = *(regstart + mcnt);
          *(best_regend + mcnt) = *(regend + mcnt);
          mcnt ++;
        }
        while_144_break:  ;
        }
      }
    }
    goto __dyc_dummy_label;
  } else {
    if (best_regs_set) {
      if (! best_match_p) {
        restore_best_regs: 
        d = match_end;
        if ((unsigned long )d >= (unsigned long )string1) {
          if ((unsigned long )d <= (unsigned long )end1) {
            dend = end_match_1;
          } else {
            dend = end_match_2;
          }
        } else {
          dend = end_match_2;
        }
        mcnt = 1;
        {
        while (1) {
          while_145_continue:  ;
          if (! ((size_t )((unsigned int )mcnt) < num_regs)) {
            goto while_145_break;
          }
          *(regstart + mcnt) = *(best_regstart + mcnt);
          *(regend + mcnt) = *(best_regend + mcnt);
          mcnt ++;
        }
        while_145_break:  ;
        }
      }
    }
  }
  __dyc_dummy_label:  ;
  __dyc_print_ptr__char(dend);
  __dyc_printpre_byte(best_regs_set);
  __dyc_print_ptr__char(match_end);
}
}
