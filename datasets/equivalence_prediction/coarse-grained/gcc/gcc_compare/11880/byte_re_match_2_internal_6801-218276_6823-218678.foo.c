#include "../../include/dycfoo.h"
#include "../../include/regex.i.hd.c.h"
void __dyc_foo(void) 
{ int mcnt ;
  char const   *end_match_2 ;
  char const   *d ;
  char const   *dend ;
  char *translate ;
  active_reg_t lowest_active_reg ;
  active_reg_t highest_active_reg ;
  byte_register_info_type *reg_info ;
  int set_regs_matched_done ;
  char const   *d2 ;
  char const   *dend2 ;
  int tmp___50 ;
  active_reg_t r___4 ;
  char const   *string2 ;
  int __dyc_funcallvar_18 ;
  int __dyc_funcallvar_19 ;

  {
  end_match_2 = (char const   *)__dyc_read_ptr__char();
  d = (char const   *)__dyc_read_ptr__char();
  dend = (char const   *)__dyc_read_ptr__char();
  translate = (char *)__dyc_read_ptr__char();
  lowest_active_reg = (active_reg_t )__dyc_readpre_byte();
  highest_active_reg = (active_reg_t )__dyc_readpre_byte();
  reg_info = __dyc_read_ptr__typdef_byte_register_info_type();
  set_regs_matched_done = __dyc_readpre_byte();
  d2 = (char const   *)__dyc_read_ptr__char();
  dend2 = (char const   *)__dyc_read_ptr__char();
  string2 = (char const   *)__dyc_read_ptr__char();
  __dyc_funcallvar_18 = __dyc_readpre_byte();
  __dyc_funcallvar_19 = __dyc_readpre_byte();
  mcnt = 0;
  tmp___50 = 0;
  r___4 = 0;
  if ((unsigned long )d2 == (unsigned long )dend2) {
    goto __dyc_dummy_label;
  }
  while (1) {
    while_176_continue:  ;
    if (! ((unsigned long )d == (unsigned long )dend)) {
      goto while_176_break;
    }
    if ((unsigned long )dend == (unsigned long )end_match_2) {
      goto __dyc_dummy_label;
    }
    d = string2;
    dend = end_match_2;
  }
  while_176_break:  ;
  mcnt = dend - d;
  if (mcnt > dend2 - d2) {
    mcnt = dend2 - d2;
  }
  if (translate) {
    {
    tmp___50 = __dyc_funcallvar_18;
    }
  } else {
    {
    tmp___50 = __dyc_funcallvar_19;
    }
  }
  if (tmp___50) {
    goto __dyc_dummy_label;
  }
  d += mcnt;
  d2 += mcnt;
  while (1) {
    while_177_continue:  ;
    if (! set_regs_matched_done) {
      set_regs_matched_done = 1;
      r___4 = lowest_active_reg;
      {
      while (1) {
        while_178_continue:  ;
        if (! (r___4 <= highest_active_reg)) {
          goto while_178_break;
        }
        (reg_info + r___4)->bits.ever_matched_something = 1U;
        (reg_info + r___4)->bits.matched_something = (reg_info + r___4)->bits.ever_matched_something;
        r___4 ++;
      }
      while_178_break:  ;
      }
    }
    goto __dyc_dummy_label;
  }
  __dyc_dummy_label:  ;
  __dyc_printpre_byte(mcnt);
  __dyc_print_ptr__char(d);
  __dyc_printpre_byte(set_regs_matched_done);
  __dyc_print_ptr__char(d2);
}
}
