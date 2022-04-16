#include "../../include/dycfoo.h"
#include "../../include/regex.i.hd.c.h"
void __dyc_foo(void) 
{ int xre_max_failures ;
  int mcnt ;
  unsigned char *p1 ;
  char const   *d ;
  unsigned char *p ;
  byte_fail_stack_type fail_stack ;
  active_reg_t lowest_active_reg ;
  active_reg_t highest_active_reg ;
  char const   **regstart ;
  char const   **regend ;
  char const   **old_regstart ;
  char const   **old_regend ;
  byte_register_info_type *reg_info ;
  unsigned int r___3 ;
  char *destination ;
  active_reg_t this_reg ;
  int tmp___33 ;
  void *tmp___34 ;
  void __attribute__((__artificial__))  * __attribute__((__leaf__)) tmp___35 ;
  unsigned int tmp___36 ;
  unsigned int tmp___37 ;
  unsigned int tmp___38 ;
  unsigned int tmp___39 ;
  unsigned int tmp___40 ;
  unsigned int tmp___41 ;
  unsigned int tmp___42 ;
  void *__dyc_funcallvar_16 ;
  void __attribute__((__artificial__))  * __attribute__((__leaf__)) __dyc_funcallvar_17 ;

  {
  xre_max_failures = __dyc_readpre_byte();
  p1 = __dyc_read_ptr__char();
  d = (char const   *)__dyc_read_ptr__char();
  p = __dyc_read_ptr__char();
  fail_stack = __dyc_read_comp_34__anonstruct_byte_fail_stack_type_25();
  lowest_active_reg = (active_reg_t )__dyc_readpre_byte();
  highest_active_reg = (active_reg_t )__dyc_readpre_byte();
  regstart = (char const   **)__dyc_read_ptr__ptr__char();
  regend = (char const   **)__dyc_read_ptr__ptr__char();
  old_regstart = (char const   **)__dyc_read_ptr__ptr__char();
  old_regend = (char const   **)__dyc_read_ptr__ptr__char();
  reg_info = __dyc_read_ptr__typdef_byte_register_info_type();
  __dyc_funcallvar_16 = __dyc_read_ptr__void();
  __dyc_funcallvar_17 = (void __attribute__((__artificial__))  * __attribute__((__leaf__)) )__dyc_read_ptr__void();
  mcnt = 0;
  r___3 = 0;
  destination = 0;
  this_reg = 0;
  tmp___33 = 0;
  tmp___34 = 0;
  tmp___35 = 0;
  tmp___36 = 0;
  tmp___37 = 0;
  tmp___38 = 0;
  tmp___39 = 0;
  tmp___40 = 0;
  tmp___41 = 0;
  tmp___42 = 0;
  if ((reg_info + *p)->bits.ever_matched_something) {
    (reg_info + *p)->bits.ever_matched_something = 0U;
    r___3 = (unsigned int )*p;
    {
    while (1) {
      while_168_continue:  ;
      if (! (r___3 < (unsigned int )*p + (unsigned int )*(p + 1))) {
        goto while_168_break;
      }
      *(regstart + r___3) = *(old_regstart + r___3);
      if ((unsigned long )*(old_regend + r___3) >= (unsigned long )*(regstart + r___3)) {
        *(regend + r___3) = *(old_regend + r___3);
      }
      r___3 ++;
    }
    while_168_break:  ;
    }
  }
  p1 ++;
  while (1) {
    while_169_continue:  ;
    {
    while (1) {
      while_170_continue:  ;
      mcnt = (int )*p1 & 255;
      mcnt = (int )((unsigned int )mcnt + ((unsigned int )((signed char )*(p1 + 1)) << 8));
      goto while_170_break;
    }
    while_170_break:  ;
    }
    p1 += 2;
    goto while_169_break;
  }
  while_169_break:  ;
  while (1) {
    while_171_continue:  ;
    {
    while (1) {
      while_172_continue:  ;
      if (! ((active_reg_t )(fail_stack.size - fail_stack.avail) < ((highest_active_reg - lowest_active_reg) + 1UL) * 3UL + 4UL)) {
        goto while_172_break;
      }
      if (fail_stack.size > (unsigned int )(xre_max_failures * 19)) {
        tmp___33 = 0;
      } else {
        {
        tmp___34 = __dyc_funcallvar_16;
        destination = (char *)tmp___34;
        tmp___35 = __dyc_funcallvar_17;
        fail_stack.stack = (byte_fail_stack_elt_t *)tmp___35;
        }
        if ((unsigned long )fail_stack.stack == (unsigned long )((void *)0)) {
          tmp___33 = 0;
        } else {
          fail_stack.size <<= 1;
          tmp___33 = 1;
        }
      }
      if (! tmp___33) {
        goto __dyc_dummy_label;
      }
    }
    while_172_break:  ;
    }
    this_reg = lowest_active_reg;
    {
    while (1) {
      while_173_continue:  ;
      if (! (this_reg <= highest_active_reg)) {
        goto while_173_break;
      }
      tmp___36 = fail_stack.avail;
      (fail_stack.avail) ++;
      (fail_stack.stack + tmp___36)->pointer = (unsigned char *)*(regstart + this_reg);
      tmp___37 = fail_stack.avail;
      (fail_stack.avail) ++;
      (fail_stack.stack + tmp___37)->pointer = (unsigned char *)*(regend + this_reg);
      tmp___38 = fail_stack.avail;
      (fail_stack.avail) ++;
      *(fail_stack.stack + tmp___38) = (reg_info + this_reg)->word;
      this_reg ++;
    }
    while_173_break:  ;
    }
    tmp___39 = fail_stack.avail;
    (fail_stack.avail) ++;
    (fail_stack.stack + tmp___39)->integer = (int )lowest_active_reg;
    tmp___40 = fail_stack.avail;
    (fail_stack.avail) ++;
    (fail_stack.stack + tmp___40)->integer = (int )highest_active_reg;
    tmp___41 = fail_stack.avail;
    (fail_stack.avail) ++;
    (fail_stack.stack + tmp___41)->pointer = p1 + mcnt;
    tmp___42 = fail_stack.avail;
    (fail_stack.avail) ++;
    (fail_stack.stack + tmp___42)->pointer = (unsigned char *)d;
    goto __dyc_dummy_label;
  }
  __dyc_dummy_label:  ;
  __dyc_printpre_byte(mcnt);
  __dyc_print_ptr__char(p1);
  __dyc_print_comp_34__anonstruct_byte_fail_stack_type_25(fail_stack);
  __dyc_print_ptr__char(destination);
}
}
