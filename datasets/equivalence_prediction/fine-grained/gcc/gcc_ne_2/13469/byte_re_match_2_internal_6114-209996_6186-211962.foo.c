#include "../../include/dycfoo.h"
#include "../../include/regex.i.hd.c.h"
void __dyc_foo(void) 
{ int mcnt ;
  char const   *end_match_2 ;
  char const   *d ;
  char const   *dend ;
  unsigned char *p ;
  char *translate ;
  active_reg_t lowest_active_reg ;
  active_reg_t highest_active_reg ;
  byte_register_info_type *reg_info ;
  int set_regs_matched_done ;
  char const   *tmp___20 ;
  unsigned char *tmp___21 ;
  char const   *tmp___22 ;
  unsigned char *tmp___23 ;
  active_reg_t r ;
  int tmp___24 ;
  int tmp___25 ;
  active_reg_t r___0 ;
  unsigned char c ;
  boolean negate ;
  struct re_pattern_buffer *bufp ;
  char const   *string2 ;

  {
  mcnt = __dyc_readpre_byte();
  end_match_2 = (char const   *)__dyc_read_ptr__char();
  d = (char const   *)__dyc_read_ptr__char();
  dend = (char const   *)__dyc_read_ptr__char();
  p = __dyc_read_ptr__char();
  translate = (char *)__dyc_read_ptr__char();
  lowest_active_reg = (active_reg_t )__dyc_readpre_byte();
  highest_active_reg = (active_reg_t )__dyc_readpre_byte();
  reg_info = __dyc_read_ptr__typdef_byte_register_info_type();
  set_regs_matched_done = __dyc_readpre_byte();
  bufp = __dyc_read_ptr__comp_30re_pattern_buffer();
  string2 = (char const   *)__dyc_read_ptr__char();
  tmp___20 = 0;
  tmp___21 = 0;
  tmp___22 = 0;
  tmp___23 = 0;
  r = 0;
  tmp___24 = 0;
  tmp___25 = 0;
  r___0 = 0;
  c = 0;
  negate = 0;
  if (translate) {
    {
    while (1) {
      while_152_continue:  ;
      {
      while (1) {
        while_153_continue:  ;
        if (! ((unsigned long )d == (unsigned long )dend)) {
          goto while_153_break;
        }
        if ((unsigned long )dend == (unsigned long )end_match_2) {
          goto __dyc_dummy_label;
        }
        d = string2;
        dend = end_match_2;
      }
      while_153_break:  ;
      }
      tmp___20 = d;
      d ++;
      tmp___21 = p;
      p ++;
      if ((int )((unsigned char )*(translate + (unsigned char )*tmp___20)) != (int )*tmp___21) {
        goto __dyc_dummy_label;
      }
      mcnt --;
      if (! mcnt) {
        goto while_152_break;
      }
    }
    while_152_break:  ;
    }
  } else {
    {
    while (1) {
      while_154_continue:  ;
      {
      while (1) {
        while_155_continue:  ;
        if (! ((unsigned long )d == (unsigned long )dend)) {
          goto while_155_break;
        }
        if ((unsigned long )dend == (unsigned long )end_match_2) {
          goto __dyc_dummy_label;
        }
        d = string2;
        dend = end_match_2;
      }
      while_155_break:  ;
      }
      tmp___22 = d;
      d ++;
      tmp___23 = p;
      p ++;
      if ((int const   )*tmp___22 != (int const   )((char )*tmp___23)) {
        goto __dyc_dummy_label;
      }
      mcnt --;
      if (! mcnt) {
        goto while_154_break;
      }
    }
    while_154_break:  ;
    }
  }
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
  __dyc_dummy_label:  ;
  __dyc_print_ptr__char(d);
  __dyc_print_ptr__char(p);
  __dyc_printpre_byte(set_regs_matched_done);
  __dyc_printpre_byte(c);
  __dyc_printpre_byte(negate);
}
}
