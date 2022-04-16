#include "../../include/dycfoo.h"
#include "../../include/regex.i.hd.c.h"
void __dyc_foo(void) 
{ char re_syntax_table[256] ;
  char const   *end1 ;
  char const   *end_match_2 ;
  char const   *d ;
  char const   *dend ;
  active_reg_t lowest_active_reg ;
  active_reg_t highest_active_reg ;
  byte_register_info_type *reg_info ;
  int set_regs_matched_done ;
  int tmp___128 ;
  active_reg_t r___5 ;
  int tmp___130 ;
  char const   *string2 ;

  {
  end1 = (char const   *)__dyc_read_ptr__char();
  end_match_2 = (char const   *)__dyc_read_ptr__char();
  d = (char const   *)__dyc_read_ptr__char();
  dend = (char const   *)__dyc_read_ptr__char();
  lowest_active_reg = (active_reg_t )__dyc_readpre_byte();
  highest_active_reg = (active_reg_t )__dyc_readpre_byte();
  reg_info = __dyc_read_ptr__typdef_byte_register_info_type();
  set_regs_matched_done = __dyc_readpre_byte();
  tmp___128 = __dyc_readpre_byte();
  string2 = (char const   *)__dyc_read_ptr__char();
  r___5 = 0;
  tmp___130 = 0;
  if (! ((int )re_syntax_table[(unsigned char )tmp___128] == 1)) {
    goto __dyc_dummy_label;
  }
  while (1) {
    while_215_continue:  ;
    if (! set_regs_matched_done) {
      set_regs_matched_done = 1;
      r___5 = lowest_active_reg;
      {
      while (1) {
        while_216_continue:  ;
        if (! (r___5 <= highest_active_reg)) {
          goto while_216_break;
        }
        (reg_info + r___5)->bits.ever_matched_something = 1U;
        (reg_info + r___5)->bits.matched_something = (reg_info + r___5)->bits.ever_matched_something;
        r___5 ++;
      }
      while_216_break:  ;
      }
    }
    goto while_215_break;
  }
  while_215_break:  ;
  d ++;
  goto __dyc_dummy_label;
  switch_151_25:  ;
  while (1) {
    while_217_continue:  ;
    if (! ((unsigned long )d == (unsigned long )dend)) {
      goto while_217_break;
    }
    if ((unsigned long )dend == (unsigned long )end_match_2) {
      goto __dyc_dummy_label;
    }
    d = string2;
    dend = end_match_2;
  }
  while_217_break:  ;
  if ((unsigned long )d == (unsigned long )end1) {
    tmp___130 = (int const   )*string2;
  } else {
    if ((unsigned long )d == (unsigned long )(string2 - 1)) {
      tmp___130 = (int const   )*(end1 - 1);
    } else {
      tmp___130 = (int const   )*d;
    }
  }
  if ((int )re_syntax_table[(unsigned char )tmp___130] == 1) {
    goto __dyc_dummy_label;
  }
  __dyc_dummy_label:  ;
  __dyc_print_ptr__char(d);
  __dyc_printpre_byte(set_regs_matched_done);
}
}
