#include "../../include/dycfoo.h"
#include "../../include/regex.i.hd.c.h"
void __dyc_foo(void) 
{ int mcnt ;
  char const   *d ;
  char *translate ;
  active_reg_t lowest_active_reg ;
  active_reg_t highest_active_reg ;
  byte_register_info_type *reg_info ;
  int set_regs_matched_done ;
  char const   *d2 ;
  char const   *dend2 ;
  int tmp___50 ;
  active_reg_t r___4 ;
  int __dyc_funcallvar_18 ;
  int __dyc_funcallvar_19 ;

  {
  mcnt = __dyc_readpre_byte();
  d = (char const   *)__dyc_read_ptr__char();
  translate = (char *)__dyc_read_ptr__char();
  lowest_active_reg = (active_reg_t )__dyc_readpre_byte();
  highest_active_reg = (active_reg_t )__dyc_readpre_byte();
  reg_info = __dyc_read_ptr__typdef_byte_register_info_type();
  set_regs_matched_done = __dyc_readpre_byte();
  d2 = (char const   *)__dyc_read_ptr__char();
  dend2 = (char const   *)__dyc_read_ptr__char();
  __dyc_funcallvar_18 = __dyc_readpre_byte();
  __dyc_funcallvar_19 = __dyc_readpre_byte();
  tmp___50 = 0;
  r___4 = 0;
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
