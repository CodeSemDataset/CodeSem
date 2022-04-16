#include "../../include/dycfoo.h"
#include "../../include/regex.i.hd.c.h"
void __dyc_foo(void) 
{ int xre_max_failures ;
  int mcnt ;
  unsigned char *p ;
  byte_fail_stack_type fail_stack ;
  active_reg_t lowest_active_reg ;
  active_reg_t highest_active_reg ;
  char const   **regstart ;
  char const   **regend ;
  byte_register_info_type *reg_info ;
  int set_regs_matched_done ;
  char const   **reg_dummy ;
  byte_register_info_type *reg_info_dummy ;
  active_reg_t dummy_low_reg ;
  active_reg_t dummy_high_reg ;
  unsigned char *pdummy ;
  char const   *sdummy ;
  active_reg_t this_reg___2 ;
  unsigned char const   *string_temp ;
  char *destination___2 ;
  active_reg_t this_reg___3 ;
  int tmp___84 ;
  void *tmp___85 ;
  void __attribute__((__artificial__))  * __attribute__((__leaf__)) tmp___86 ;
  unsigned int tmp___87 ;
  unsigned int tmp___88 ;
  unsigned int tmp___89 ;
  unsigned int tmp___90 ;
  unsigned int tmp___91 ;
  unsigned int tmp___92 ;
  unsigned int tmp___93 ;
  char *destination___3 ;
  active_reg_t this_reg___4 ;
  int tmp___97 ;
  void *tmp___98 ;
  void __attribute__((__artificial__))  * __attribute__((__leaf__)) tmp___99 ;
  unsigned int tmp___100 ;
  unsigned int tmp___101 ;
  unsigned int tmp___102 ;
  unsigned int tmp___103 ;
  unsigned int tmp___104 ;
  unsigned int tmp___105 ;
  unsigned int tmp___106 ;
  void *__dyc_funcallvar_24 ;
  void __attribute__((__artificial__))  * __attribute__((__leaf__)) __dyc_funcallvar_25 ;
  void *__dyc_funcallvar_26 ;
  void __attribute__((__artificial__))  * __attribute__((__leaf__)) __dyc_funcallvar_27 ;

  {
  xre_max_failures = __dyc_readpre_byte();
  p = __dyc_read_ptr__char();
  fail_stack = __dyc_read_comp_34__anonstruct_byte_fail_stack_type_25();
  lowest_active_reg = (active_reg_t )__dyc_readpre_byte();
  highest_active_reg = (active_reg_t )__dyc_readpre_byte();
  regstart = (char const   **)__dyc_read_ptr__ptr__char();
  regend = (char const   **)__dyc_read_ptr__ptr__char();
  reg_info = __dyc_read_ptr__typdef_byte_register_info_type();
  reg_dummy = (char const   **)__dyc_read_ptr__ptr__char();
  reg_info_dummy = __dyc_read_ptr__typdef_byte_register_info_type();
  __dyc_funcallvar_24 = __dyc_read_ptr__void();
  __dyc_funcallvar_25 = (void __attribute__((__artificial__))  * __attribute__((__leaf__)) )__dyc_read_ptr__void();
  __dyc_funcallvar_26 = __dyc_read_ptr__void();
  __dyc_funcallvar_27 = (void __attribute__((__artificial__))  * __attribute__((__leaf__)) )__dyc_read_ptr__void();
  mcnt = 0;
  set_regs_matched_done = 0;
  dummy_low_reg = 0;
  dummy_high_reg = 0;
  pdummy = 0;
  sdummy = 0;
  this_reg___2 = 0;
  string_temp = 0;
  destination___2 = 0;
  this_reg___3 = 0;
  tmp___84 = 0;
  tmp___85 = 0;
  tmp___86 = 0;
  tmp___87 = 0;
  tmp___88 = 0;
  tmp___89 = 0;
  tmp___90 = 0;
  tmp___91 = 0;
  tmp___92 = 0;
  tmp___93 = 0;
  destination___3 = 0;
  this_reg___4 = 0;
  tmp___97 = 0;
  tmp___98 = 0;
  tmp___99 = 0;
  tmp___100 = 0;
  tmp___101 = 0;
  tmp___102 = 0;
  tmp___103 = 0;
  tmp___104 = 0;
  tmp___105 = 0;
  tmp___106 = 0;
  switch_151_17:  
  pdummy = (unsigned char *)((void *)0);
  sdummy = (char const   *)((void *)0);
  (fail_stack.avail) --;
  string_temp = (unsigned char const   *)(fail_stack.stack + fail_stack.avail)->pointer;
  if ((unsigned long )string_temp != (unsigned long )((void *)0)) {
    sdummy = (char const   *)string_temp;
  }
  (fail_stack.avail) --;
  pdummy = (fail_stack.stack + fail_stack.avail)->pointer;
  (fail_stack.avail) --;
  dummy_high_reg = (unsigned long )(fail_stack.stack + fail_stack.avail)->integer;
  (fail_stack.avail) --;
  dummy_low_reg = (unsigned long )(fail_stack.stack + fail_stack.avail)->integer;
  this_reg___2 = dummy_high_reg;
  while (1) {
    while_195_continue:  ;
    if (! (this_reg___2 >= dummy_low_reg)) {
      goto while_195_break;
    }
    (fail_stack.avail) --;
    (reg_info_dummy + this_reg___2)->word = *(fail_stack.stack + fail_stack.avail);
    (fail_stack.avail) --;
    *(reg_dummy + this_reg___2) = (char const   *)(fail_stack.stack + fail_stack.avail)->pointer;
    (fail_stack.avail) --;
    *(reg_dummy + this_reg___2) = (char const   *)(fail_stack.stack + fail_stack.avail)->pointer;
    this_reg___2 --;
  }
  while_195_break:  ;
  set_regs_matched_done = 0;
  unconditional_jump: ;
  while (1) {
    while_196_continue:  ;
    {
    while (1) {
      while_197_continue:  ;
      mcnt = (int )*p & 255;
      mcnt = (int )((unsigned int )mcnt + ((unsigned int )((signed char )*(p + 1)) << 8));
      goto while_197_break;
    }
    while_197_break:  ;
    }
    p += 2;
    goto while_196_break;
  }
  while_196_break:  ;
  p += mcnt;
  goto __dyc_dummy_label;
  switch_151_14:  ;
  goto unconditional_jump;
  switch_151_19:  ;
  while (1) {
    while_198_continue:  ;
    {
    while (1) {
      while_199_continue:  ;
      if (! ((active_reg_t )(fail_stack.size - fail_stack.avail) < ((highest_active_reg - lowest_active_reg) + 1UL) * 3UL + 4UL)) {
        goto while_199_break;
      }
      if (fail_stack.size > (unsigned int )(xre_max_failures * 19)) {
        tmp___84 = 0;
      } else {
        {
        tmp___85 = __dyc_funcallvar_24;
        destination___2 = (char *)tmp___85;
        tmp___86 = __dyc_funcallvar_25;
        fail_stack.stack = (byte_fail_stack_elt_t *)tmp___86;
        }
        if ((unsigned long )fail_stack.stack == (unsigned long )((void *)0)) {
          tmp___84 = 0;
        } else {
          fail_stack.size <<= 1;
          tmp___84 = 1;
        }
      }
      if (! tmp___84) {
        goto __dyc_dummy_label;
      }
    }
    while_199_break:  ;
    }
    this_reg___3 = lowest_active_reg;
    {
    while (1) {
      while_200_continue:  ;
      if (! (this_reg___3 <= highest_active_reg)) {
        goto while_200_break;
      }
      tmp___87 = fail_stack.avail;
      (fail_stack.avail) ++;
      (fail_stack.stack + tmp___87)->pointer = (unsigned char *)*(regstart + this_reg___3);
      tmp___88 = fail_stack.avail;
      (fail_stack.avail) ++;
      (fail_stack.stack + tmp___88)->pointer = (unsigned char *)*(regend + this_reg___3);
      tmp___89 = fail_stack.avail;
      (fail_stack.avail) ++;
      *(fail_stack.stack + tmp___89) = (reg_info + this_reg___3)->word;
      this_reg___3 ++;
    }
    while_200_break:  ;
    }
    tmp___90 = fail_stack.avail;
    (fail_stack.avail) ++;
    (fail_stack.stack + tmp___90)->integer = (int )lowest_active_reg;
    tmp___91 = fail_stack.avail;
    (fail_stack.avail) ++;
    (fail_stack.stack + tmp___91)->integer = (int )highest_active_reg;
    tmp___92 = fail_stack.avail;
    (fail_stack.avail) ++;
    (fail_stack.stack + tmp___92)->pointer = (unsigned char *)((void *)0);
    tmp___93 = fail_stack.avail;
    (fail_stack.avail) ++;
    (fail_stack.stack + tmp___93)->pointer = (unsigned char *)((void *)0);
    goto while_198_break;
  }
  while_198_break:  ;
  goto unconditional_jump;
  switch_151_20:  ;
  while (1) {
    while_201_continue:  ;
    {
    while (1) {
      while_202_continue:  ;
      if (! ((active_reg_t )(fail_stack.size - fail_stack.avail) < ((highest_active_reg - lowest_active_reg) + 1UL) * 3UL + 4UL)) {
        goto while_202_break;
      }
      if (fail_stack.size > (unsigned int )(xre_max_failures * 19)) {
        tmp___97 = 0;
      } else {
        {
        tmp___98 = __dyc_funcallvar_26;
        destination___3 = (char *)tmp___98;
        tmp___99 = __dyc_funcallvar_27;
        fail_stack.stack = (byte_fail_stack_elt_t *)tmp___99;
        }
        if ((unsigned long )fail_stack.stack == (unsigned long )((void *)0)) {
          tmp___97 = 0;
        } else {
          fail_stack.size <<= 1;
          tmp___97 = 1;
        }
      }
      if (! tmp___97) {
        goto __dyc_dummy_label;
      }
    }
    while_202_break:  ;
    }
    this_reg___4 = lowest_active_reg;
    {
    while (1) {
      while_203_continue:  ;
      if (! (this_reg___4 <= highest_active_reg)) {
        goto while_203_break;
      }
      tmp___100 = fail_stack.avail;
      (fail_stack.avail) ++;
      (fail_stack.stack + tmp___100)->pointer = (unsigned char *)*(regstart + this_reg___4);
      tmp___101 = fail_stack.avail;
      (fail_stack.avail) ++;
      (fail_stack.stack + tmp___101)->pointer = (unsigned char *)*(regend + this_reg___4);
      tmp___102 = fail_stack.avail;
      (fail_stack.avail) ++;
      *(fail_stack.stack + tmp___102) = (reg_info + this_reg___4)->word;
      this_reg___4 ++;
    }
    while_203_break:  ;
    }
    tmp___103 = fail_stack.avail;
    (fail_stack.avail) ++;
    (fail_stack.stack + tmp___103)->integer = (int )lowest_active_reg;
    tmp___104 = fail_stack.avail;
    (fail_stack.avail) ++;
    (fail_stack.stack + tmp___104)->integer = (int )highest_active_reg;
    tmp___105 = fail_stack.avail;
    (fail_stack.avail) ++;
    (fail_stack.stack + tmp___105)->pointer = (unsigned char *)((void *)0);
    tmp___106 = fail_stack.avail;
    (fail_stack.avail) ++;
    (fail_stack.stack + tmp___106)->pointer = (unsigned char *)((void *)0);
    goto while_201_break;
  }
  while_201_break:  ;
  goto __dyc_dummy_label;
  __dyc_dummy_label:  ;
  __dyc_print_ptr__char(p);
  __dyc_print_comp_34__anonstruct_byte_fail_stack_type_25(fail_stack);
  __dyc_printpre_byte(set_regs_matched_done);
  __dyc_print_ptr__char(pdummy);
  __dyc_print_ptr__char(sdummy);
  __dyc_print_ptr__char(destination___2);
  __dyc_print_ptr__char(destination___3);
}
}