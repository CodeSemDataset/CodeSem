#include "../../include/dycfoo.h"
#include "../../include/regex.i.hd.c.h"
void __dyc_foo(void) 
{ int xre_max_failures ;
  int mcnt ;
  unsigned char *p1 ;
  char const   *d ;
  unsigned char *p ;
  unsigned char *pend ;
  byte_fail_stack_type fail_stack ;
  active_reg_t lowest_active_reg ;
  active_reg_t highest_active_reg ;
  char const   **regstart ;
  char const   **regend ;
  byte_register_info_type *reg_info ;
  char *destination___1 ;
  active_reg_t this_reg___1 ;
  int tmp___70 ;
  void *tmp___71 ;
  void __attribute__((__artificial__))  * __attribute__((__leaf__)) tmp___72 ;
  unsigned int tmp___73 ;
  unsigned int tmp___74 ;
  unsigned int tmp___75 ;
  unsigned int tmp___76 ;
  unsigned int tmp___77 ;
  unsigned int tmp___78 ;
  unsigned int tmp___79 ;
  void *__dyc_funcallvar_22 ;
  void __attribute__((__artificial__))  * __attribute__((__leaf__)) __dyc_funcallvar_23 ;

  {
  xre_max_failures = __dyc_readpre_byte();
  mcnt = __dyc_readpre_byte();
  p1 = __dyc_read_ptr__char();
  d = (char const   *)__dyc_read_ptr__char();
  p = __dyc_read_ptr__char();
  pend = __dyc_read_ptr__char();
  fail_stack = __dyc_read_comp_34__anonstruct_byte_fail_stack_type_25();
  lowest_active_reg = (active_reg_t )__dyc_readpre_byte();
  highest_active_reg = (active_reg_t )__dyc_readpre_byte();
  regstart = (char const   **)__dyc_read_ptr__ptr__char();
  regend = (char const   **)__dyc_read_ptr__ptr__char();
  reg_info = __dyc_read_ptr__typdef_byte_register_info_type();
  __dyc_funcallvar_22 = __dyc_read_ptr__void();
  __dyc_funcallvar_23 = (void __attribute__((__artificial__))  * __attribute__((__leaf__)) )__dyc_read_ptr__void();
  destination___1 = 0;
  this_reg___1 = 0;
  tmp___70 = 0;
  tmp___71 = 0;
  tmp___72 = 0;
  tmp___73 = 0;
  tmp___74 = 0;
  tmp___75 = 0;
  tmp___76 = 0;
  tmp___77 = 0;
  tmp___78 = 0;
  tmp___79 = 0;
  if ((unsigned long )p1 < (unsigned long )pend) {
    if ((int )((enum __anonenum_re_opcode_t_24 )*p1) == 6) {
      highest_active_reg = (unsigned long )((int )*(p1 + 1) + (int )*(p1 + 2));
      if (lowest_active_reg == (active_reg_t )((1 << 8) + 1)) {
        lowest_active_reg = (unsigned long )*(p1 + 1);
      }
    }
  }
  while (1) {
    while_187_continue:  ;
    {
    while (1) {
      while_188_continue:  ;
      if (! ((active_reg_t )(fail_stack.size - fail_stack.avail) < ((highest_active_reg - lowest_active_reg) + 1UL) * 3UL + 4UL)) {
        goto while_188_break;
      }
      if (fail_stack.size > (unsigned int )(xre_max_failures * 19)) {
        tmp___70 = 0;
      } else {
        {
        tmp___71 = __dyc_funcallvar_22;
        destination___1 = (char *)tmp___71;
        tmp___72 = __dyc_funcallvar_23;
        fail_stack.stack = (byte_fail_stack_elt_t *)tmp___72;
        }
        if ((unsigned long )fail_stack.stack == (unsigned long )((void *)0)) {
          tmp___70 = 0;
        } else {
          fail_stack.size <<= 1;
          tmp___70 = 1;
        }
      }
      if (! tmp___70) {
        goto __dyc_dummy_label;
      }
    }
    while_188_break:  ;
    }
    this_reg___1 = lowest_active_reg;
    {
    while (1) {
      while_189_continue:  ;
      if (! (this_reg___1 <= highest_active_reg)) {
        goto while_189_break;
      }
      tmp___73 = fail_stack.avail;
      (fail_stack.avail) ++;
      (fail_stack.stack + tmp___73)->pointer = (unsigned char *)*(regstart + this_reg___1);
      tmp___74 = fail_stack.avail;
      (fail_stack.avail) ++;
      (fail_stack.stack + tmp___74)->pointer = (unsigned char *)*(regend + this_reg___1);
      tmp___75 = fail_stack.avail;
      (fail_stack.avail) ++;
      *(fail_stack.stack + tmp___75) = (reg_info + this_reg___1)->word;
      this_reg___1 ++;
    }
    while_189_break:  ;
    }
    tmp___76 = fail_stack.avail;
    (fail_stack.avail) ++;
    (fail_stack.stack + tmp___76)->integer = (int )lowest_active_reg;
    tmp___77 = fail_stack.avail;
    (fail_stack.avail) ++;
    (fail_stack.stack + tmp___77)->integer = (int )highest_active_reg;
    tmp___78 = fail_stack.avail;
    (fail_stack.avail) ++;
    (fail_stack.stack + tmp___78)->pointer = p + mcnt;
    tmp___79 = fail_stack.avail;
    (fail_stack.avail) ++;
    (fail_stack.stack + tmp___79)->pointer = (unsigned char *)d;
    goto __dyc_dummy_label;
  }
  __dyc_dummy_label:  ;
  __dyc_print_comp_34__anonstruct_byte_fail_stack_type_25(fail_stack);
  __dyc_print_ptr__char(destination___1);
}
}
