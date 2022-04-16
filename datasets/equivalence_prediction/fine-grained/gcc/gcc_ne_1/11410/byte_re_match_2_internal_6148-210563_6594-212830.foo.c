#include "../../include/dycfoo.h"
#include "../../include/regex.i.hd.c.h"
void __dyc_foo(void) 
{ char byte_reg_unset_dummy ;
  unsigned char *p1 ;
  char const   *end_match_2 ;
  char const   *d ;
  char const   *dend ;
  unsigned char *p ;
  char *translate ;
  active_reg_t lowest_active_reg ;
  active_reg_t highest_active_reg ;
  char const   **regstart ;
  char const   **old_regstart ;
  byte_register_info_type *reg_info ;
  int set_regs_matched_done ;
  active_reg_t r ;
  int tmp___24 ;
  int tmp___25 ;
  active_reg_t r___0 ;
  unsigned char c ;
  boolean negate ;
  active_reg_t r___1 ;
  boolean tmp___26 ;
  struct re_pattern_buffer *bufp ;
  char const   *string2 ;
  boolean __dyc_funcallvar_15 ;

  {
  byte_reg_unset_dummy = (char )__dyc_readpre_byte();
  end_match_2 = (char const   *)__dyc_read_ptr__char();
  d = (char const   *)__dyc_read_ptr__char();
  dend = (char const   *)__dyc_read_ptr__char();
  p = __dyc_read_ptr__char();
  translate = (char *)__dyc_read_ptr__char();
  lowest_active_reg = (active_reg_t )__dyc_readpre_byte();
  highest_active_reg = (active_reg_t )__dyc_readpre_byte();
  regstart = (char const   **)__dyc_read_ptr__ptr__char();
  old_regstart = (char const   **)__dyc_read_ptr__ptr__char();
  reg_info = __dyc_read_ptr__typdef_byte_register_info_type();
  set_regs_matched_done = __dyc_readpre_byte();
  bufp = __dyc_read_ptr__comp_30re_pattern_buffer();
  string2 = (char const   *)__dyc_read_ptr__char();
  __dyc_funcallvar_15 = (boolean )__dyc_readpre_byte();
  p1 = 0;
  r = 0;
  tmp___24 = 0;
  tmp___25 = 0;
  r___0 = 0;
  c = 0;
  negate = 0;
  r___1 = 0;
  tmp___26 = 0;
  while (1) {
    while_156_continue:  ;
    if (! set_regs_matched_done) {
      set_regs_matched_done = 1;
      r = lowest_active_reg;
      {
      while (1) {
        while_157_continue:  ;
        if (! (r <= highest_active_reg)) {
          goto while_157_break;
        }
        (reg_info + r)->bits.ever_matched_something = 1U;
        (reg_info + r)->bits.matched_something = (reg_info + r)->bits.ever_matched_something;
        r ++;
      }
      while_157_break:  ;
      }
    }
    goto while_156_break;
  }
  while_156_break:  ;
  goto __dyc_dummy_label;
  switch_151_3:  ;
  while (1) {
    while_158_continue:  ;
    if (! ((unsigned long )d == (unsigned long )dend)) {
      goto while_158_break;
    }
    if ((unsigned long )dend == (unsigned long )end_match_2) {
      goto __dyc_dummy_label;
    }
    d = string2;
    dend = end_match_2;
  }
  while_158_break:  ;
  if (! (bufp->syntax & ((((((1UL << 1) << 1) << 1) << 1) << 1) << 1))) {
    if (translate) {
      tmp___24 = (int )*(translate + (unsigned char )*d);
    } else {
      tmp___24 = (int )((char )*d);
    }
    if (tmp___24 == 10) {
      goto __dyc_dummy_label;
    } else {
      goto _L___11;
    }
  } else {
    _L___11:  
    if (bufp->syntax & (((((((1UL << 1) << 1) << 1) << 1) << 1) << 1) << 1)) {
      if (translate) {
        tmp___25 = (int )*(translate + (unsigned char )*d);
      } else {
        tmp___25 = (int )((char )*d);
      }
      if (tmp___25 == 0) {
        goto __dyc_dummy_label;
      }
    }
  }
  while (1) {
    while_159_continue:  ;
    if (! set_regs_matched_done) {
      set_regs_matched_done = 1;
      r___0 = lowest_active_reg;
      {
      while (1) {
        while_160_continue:  ;
        if (! (r___0 <= highest_active_reg)) {
          goto while_160_break;
        }
        (reg_info + r___0)->bits.ever_matched_something = 1U;
        (reg_info + r___0)->bits.matched_something = (reg_info + r___0)->bits.ever_matched_something;
        r___0 ++;
      }
      while_160_break:  ;
      }
    }
    goto while_159_break;
  }
  while_159_break:  ;
  d ++;
  goto __dyc_dummy_label;
  switch_151_4:  
  switch_151_5:  
  negate = (boolean )((int )((enum __anonenum_re_opcode_t_24 )*(p - 1)) == 5);
  while (1) {
    while_161_continue:  ;
    if (! ((unsigned long )d == (unsigned long )dend)) {
      goto while_161_break;
    }
    if ((unsigned long )dend == (unsigned long )end_match_2) {
      goto __dyc_dummy_label;
    }
    d = string2;
    dend = end_match_2;
  }
  while_161_break:  ;
  if (translate) {
    c = (unsigned char )*(translate + (unsigned char )*d);
  } else {
    c = (unsigned char )((char )*d);
  }
  if ((unsigned int )c < (unsigned int )((int )*p * 8)) {
    if ((int )*(p + (1 + (int )c / 8)) & (1 << (int )c % 8)) {
      negate = (char )(! negate);
    }
  }
  p += 1 + (int )*p;
  if (! negate) {
    goto __dyc_dummy_label;
  }
  while (1) {
    while_162_continue:  ;
    if (! set_regs_matched_done) {
      set_regs_matched_done = 1;
      r___1 = lowest_active_reg;
      {
      while (1) {
        while_163_continue:  ;
        if (! (r___1 <= highest_active_reg)) {
          goto while_163_break;
        }
        (reg_info + r___1)->bits.ever_matched_something = 1U;
        (reg_info + r___1)->bits.matched_something = (reg_info + r___1)->bits.ever_matched_something;
        r___1 ++;
      }
      while_163_break:  ;
      }
    }
    goto while_162_break;
  }
  while_162_break:  ;
  d ++;
  goto __dyc_dummy_label;
  switch_151_6:  
  p1 = p;
  if ((reg_info + *p)->bits.match_null_string_p == 3U) {
    {
    tmp___26 = __dyc_funcallvar_15;
    (reg_info + *p)->bits.match_null_string_p = (unsigned int )tmp___26;
    }
  }
  if ((reg_info + *p)->bits.match_null_string_p) {
    if ((unsigned long )*(regstart + *p) == (unsigned long )(& byte_reg_unset_dummy)) {
      *(old_regstart + *p) = d;
    } else {
      *(old_regstart + *p) = *(regstart + *p);
    }
  } else {
    *(old_regstart + *p) = *(regstart + *p);
  }
  __dyc_dummy_label:  ;
  __dyc_print_ptr__char(p1);
  __dyc_print_ptr__char(d);
  __dyc_print_ptr__char(p);
  __dyc_printpre_byte(set_regs_matched_done);
  __dyc_printpre_byte(negate);
}
}
