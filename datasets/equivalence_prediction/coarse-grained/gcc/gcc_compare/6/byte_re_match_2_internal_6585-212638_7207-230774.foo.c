#include "../../include/dycfoo.h"
#include "../../include/regex.i.hd.c.h"
void __dyc_foo(void) 
{ int xre_max_failures ;
  char byte_reg_unset_dummy ;
  int mcnt ;
  unsigned char *p1 ;
  char const   *end1 ;
  char const   *end2 ;
  char const   *end_match_1 ;
  char const   *end_match_2 ;
  char const   *d ;
  char const   *dend ;
  unsigned char *p ;
  unsigned char *pend ;
  unsigned char *just_past_start_mem ;
  char *translate ;
  byte_fail_stack_type fail_stack ;
  active_reg_t lowest_active_reg ;
  active_reg_t highest_active_reg ;
  char const   **regstart ;
  char const   **regend ;
  char const   **old_regstart ;
  char const   **old_regend ;
  byte_register_info_type *reg_info ;
  int set_regs_matched_done ;
  char const   **reg_dummy ;
  byte_register_info_type *reg_info_dummy ;
  boolean tmp___26 ;
  unsigned char r___2 ;
  boolean is_a_jump_n ;
  unsigned char *tmp___29 ;
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
  char const   *d2 ;
  char const   *dend2 ;
  int regno ;
  unsigned char *tmp___43 ;
  int tmp___46 ;
  int tmp___47 ;
  int tmp___50 ;
  active_reg_t r___4 ;
  char const   *tmp___51 ;
  int tmp___52 ;
  char const   *tmp___53 ;
  char *destination___0 ;
  active_reg_t this_reg___0 ;
  int tmp___57 ;
  void *tmp___58 ;
  void __attribute__((__artificial__))  * __attribute__((__leaf__)) tmp___59 ;
  unsigned int tmp___60 ;
  unsigned int tmp___61 ;
  unsigned int tmp___62 ;
  unsigned int tmp___63 ;
  unsigned int tmp___64 ;
  unsigned int tmp___65 ;
  unsigned int tmp___66 ;
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
  unsigned char *p2 ;
  unsigned char c___0 ;
  int tmp___80 ;
  int negate___0 ;
  int idx ;
  int idx___0 ;
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
  struct re_pattern_buffer *bufp ;
  char const   *string1 ;
  int size1 ;
  char const   *string2 ;
  int size2 ;
  boolean __dyc_funcallvar_15 ;
  void *__dyc_funcallvar_16 ;
  void __attribute__((__artificial__))  * __attribute__((__leaf__)) __dyc_funcallvar_17 ;
  int __dyc_funcallvar_18 ;
  int __dyc_funcallvar_19 ;
  void *__dyc_funcallvar_20 ;
  void __attribute__((__artificial__))  * __attribute__((__leaf__)) __dyc_funcallvar_21 ;
  void *__dyc_funcallvar_22 ;
  void __attribute__((__artificial__))  * __attribute__((__leaf__)) __dyc_funcallvar_23 ;
  void *__dyc_funcallvar_24 ;
  void __attribute__((__artificial__))  * __attribute__((__leaf__)) __dyc_funcallvar_25 ;
  void *__dyc_funcallvar_26 ;
  void __attribute__((__artificial__))  * __attribute__((__leaf__)) __dyc_funcallvar_27 ;

  {
  xre_max_failures = __dyc_readpre_byte();
  byte_reg_unset_dummy = (char )__dyc_readpre_byte();
  end1 = (char const   *)__dyc_read_ptr__char();
  end2 = (char const   *)__dyc_read_ptr__char();
  end_match_1 = (char const   *)__dyc_read_ptr__char();
  end_match_2 = (char const   *)__dyc_read_ptr__char();
  d = (char const   *)__dyc_read_ptr__char();
  dend = (char const   *)__dyc_read_ptr__char();
  p = __dyc_read_ptr__char();
  pend = __dyc_read_ptr__char();
  just_past_start_mem = __dyc_read_ptr__char();
  translate = (char *)__dyc_read_ptr__char();
  fail_stack = __dyc_read_comp_34__anonstruct_byte_fail_stack_type_25();
  lowest_active_reg = (active_reg_t )__dyc_readpre_byte();
  highest_active_reg = (active_reg_t )__dyc_readpre_byte();
  regstart = (char const   **)__dyc_read_ptr__ptr__char();
  regend = (char const   **)__dyc_read_ptr__ptr__char();
  old_regstart = (char const   **)__dyc_read_ptr__ptr__char();
  old_regend = (char const   **)__dyc_read_ptr__ptr__char();
  reg_info = __dyc_read_ptr__typdef_byte_register_info_type();
  set_regs_matched_done = __dyc_readpre_byte();
  reg_dummy = (char const   **)__dyc_read_ptr__ptr__char();
  reg_info_dummy = __dyc_read_ptr__typdef_byte_register_info_type();
  bufp = __dyc_read_ptr__comp_30re_pattern_buffer();
  string1 = (char const   *)__dyc_read_ptr__char();
  size1 = __dyc_readpre_byte();
  string2 = (char const   *)__dyc_read_ptr__char();
  size2 = __dyc_readpre_byte();
  __dyc_funcallvar_15 = (boolean )__dyc_readpre_byte();
  __dyc_funcallvar_16 = __dyc_read_ptr__void();
  __dyc_funcallvar_17 = (void __attribute__((__artificial__))  * __attribute__((__leaf__)) )__dyc_read_ptr__void();
  __dyc_funcallvar_18 = __dyc_readpre_byte();
  __dyc_funcallvar_19 = __dyc_readpre_byte();
  __dyc_funcallvar_20 = __dyc_read_ptr__void();
  __dyc_funcallvar_21 = (void __attribute__((__artificial__))  * __attribute__((__leaf__)) )__dyc_read_ptr__void();
  __dyc_funcallvar_22 = __dyc_read_ptr__void();
  __dyc_funcallvar_23 = (void __attribute__((__artificial__))  * __attribute__((__leaf__)) )__dyc_read_ptr__void();
  __dyc_funcallvar_24 = __dyc_read_ptr__void();
  __dyc_funcallvar_25 = (void __attribute__((__artificial__))  * __attribute__((__leaf__)) )__dyc_read_ptr__void();
  __dyc_funcallvar_26 = __dyc_read_ptr__void();
  __dyc_funcallvar_27 = (void __attribute__((__artificial__))  * __attribute__((__leaf__)) )__dyc_read_ptr__void();
  mcnt = 0;
  p1 = 0;
  tmp___26 = 0;
  r___2 = 0;
  is_a_jump_n = 0;
  tmp___29 = 0;
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
  d2 = 0;
  dend2 = 0;
  regno = 0;
  tmp___43 = 0;
  tmp___46 = 0;
  tmp___47 = 0;
  tmp___50 = 0;
  r___4 = 0;
  tmp___51 = 0;
  tmp___52 = 0;
  tmp___53 = 0;
  destination___0 = 0;
  this_reg___0 = 0;
  tmp___57 = 0;
  tmp___58 = 0;
  tmp___59 = 0;
  tmp___60 = 0;
  tmp___61 = 0;
  tmp___62 = 0;
  tmp___63 = 0;
  tmp___64 = 0;
  tmp___65 = 0;
  tmp___66 = 0;
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
  p2 = 0;
  c___0 = 0;
  tmp___80 = 0;
  negate___0 = 0;
  idx = 0;
  idx___0 = 0;
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
  *(regstart + *p) = d;
  (reg_info + *p)->bits.is_active = 1U;
  (reg_info + *p)->bits.matched_something = 0U;
  set_regs_matched_done = 0;
  highest_active_reg = (unsigned long )*p;
  if (lowest_active_reg == (active_reg_t )((1 << 8) + 1)) {
    lowest_active_reg = (unsigned long )*p;
  }
  p += 2;
  just_past_start_mem = p;
  goto __dyc_dummy_label;
  switch_151_7:  ;
  if ((reg_info + *p)->bits.match_null_string_p) {
    if ((unsigned long )*(regend + *p) == (unsigned long )(& byte_reg_unset_dummy)) {
      *(old_regend + *p) = d;
    } else {
      *(old_regend + *p) = *(regend + *p);
    }
  } else {
    *(old_regend + *p) = *(regend + *p);
  }
  *(regend + *p) = d;
  (reg_info + *p)->bits.is_active = 0U;
  set_regs_matched_done = 0;
  if (lowest_active_reg == highest_active_reg) {
    lowest_active_reg = (unsigned long )((1 << 8) + 1);
    highest_active_reg = (unsigned long )(1 << 8);
  } else {
    r___2 = (unsigned char )((int )*p - 1);
    {
    while (1) {
      while_164_continue:  ;
      if ((int )r___2 > 0) {
        if (! (! (reg_info + r___2)->bits.is_active)) {
          goto while_164_break;
        }
      } else {
        goto while_164_break;
      }
      r___2 = (unsigned char )((int )r___2 - 1);
    }
    while_164_break:  ;
    }
    if ((int )r___2 == 0) {
      lowest_active_reg = (unsigned long )((1 << 8) + 1);
      highest_active_reg = (unsigned long )(1 << 8);
    } else {
      highest_active_reg = (unsigned long )r___2;
    }
  }
  if (! (reg_info + *p)->bits.matched_something) {
    goto _L___12;
  } else {
    if ((unsigned long )just_past_start_mem == (unsigned long )(p - 1)) {
      _L___12:  
      if ((unsigned long )(p + 2) < (unsigned long )pend) {
        is_a_jump_n = (boolean )0;
        p1 = p + 2;
        mcnt = 0;
        tmp___29 = p1;
        p1 ++;
        if ((int )((enum __anonenum_re_opcode_t_24 )*tmp___29) == 22) {
          goto switch_165_22;
        } else {
          if ((int )((enum __anonenum_re_opcode_t_24 )*tmp___29) == 17) {
            goto switch_165_17;
          } else {
            if ((int )((enum __anonenum_re_opcode_t_24 )*tmp___29) == 18) {
              goto switch_165_17;
            } else {
              if ((int )((enum __anonenum_re_opcode_t_24 )*tmp___29) == 13) {
                goto switch_165_17;
              } else {
                if ((int )((enum __anonenum_re_opcode_t_24 )*tmp___29) == 19) {
                  goto switch_165_17;
                } else {
                  {
                  goto switch_165_default;
                  if (0) {
                    switch_165_22:  
                    is_a_jump_n = (char)1;
                    switch_165_17:  
                    switch_165_18:  
                    switch_165_13:  
                    switch_165_19:  
                    {
                    while (1) {
                      while_166_continue:  ;
                      {
                      while (1) {
                        while_167_continue:  ;
                        mcnt = (int )*p1 & 255;
                        mcnt = (int )((unsigned int )mcnt + ((unsigned int )((signed char )*(p1 + 1)) << 8));
                        goto while_167_break;
                      }
                      while_167_break:  ;
                      }
                      p1 += 2;
                      goto while_166_break;
                    }
                    while_166_break:  ;
                    }
                    if (is_a_jump_n) {
                      p1 += 2;
                    }
                    goto switch_165_break;
                    switch_165_default:  ;
                  } else {
                    switch_165_break:  ;
                  }
                  }
                }
              }
            }
          }
        }
        p1 += mcnt;
        if (mcnt < 0) {
          if ((int )((enum __anonenum_re_opcode_t_24 )*p1) == 15) {
            if ((int )((enum __anonenum_re_opcode_t_24 )*(p1 + 3)) == 6) {
              if ((int )*(p1 + 4) == (int )*p) {
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
                {
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
                }
                {
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
                  goto while_171_break;
                }
                while_171_break:  ;
                }
                goto __dyc_dummy_label;
              }
            }
          }
        }
      }
    }
  }
  p += 2;
  goto __dyc_dummy_label;
  switch_151_8:  
  tmp___43 = p;
  p ++;
  regno = (int )*tmp___43;
  if ((unsigned long )*(regstart + regno) == (unsigned long )(& byte_reg_unset_dummy)) {
    goto __dyc_dummy_label;
  } else {
    if ((unsigned long )*(regend + regno) == (unsigned long )(& byte_reg_unset_dummy)) {
      goto __dyc_dummy_label;
    }
  }
  d2 = *(regstart + regno);
  if (size1) {
    if ((unsigned long )string1 <= (unsigned long )*(regstart + regno)) {
      if ((unsigned long )*(regstart + regno) <= (unsigned long )(string1 + size1)) {
        tmp___46 = 1;
      } else {
        tmp___46 = 0;
      }
    } else {
      tmp___46 = 0;
    }
  } else {
    tmp___46 = 0;
  }
  if (size1) {
    if ((unsigned long )string1 <= (unsigned long )*(regend + regno)) {
      if ((unsigned long )*(regend + regno) <= (unsigned long )(string1 + size1)) {
        tmp___47 = 1;
      } else {
        tmp___47 = 0;
      }
    } else {
      tmp___47 = 0;
    }
  } else {
    tmp___47 = 0;
  }
  if (tmp___46 == tmp___47) {
    dend2 = *(regend + regno);
  } else {
    dend2 = end_match_1;
  }
  while (1) {
    while_174_continue:  ;
    {
    while (1) {
      while_175_continue:  ;
      if (! ((unsigned long )d2 == (unsigned long )dend2)) {
        goto while_175_break;
      }
      if ((unsigned long )dend2 == (unsigned long )end_match_2) {
        goto while_175_break;
      }
      if ((unsigned long )dend2 == (unsigned long )*(regend + regno)) {
        goto while_175_break;
      }
      d2 = string2;
      dend2 = *(regend + regno);
    }
    while_175_break:  ;
    }
    if ((unsigned long )d2 == (unsigned long )dend2) {
      goto while_174_break;
    }
    {
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
    }
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
    {
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
      goto while_177_break;
    }
    while_177_break:  ;
    }
  }
  while_174_break:  ;
  goto __dyc_dummy_label;
  switch_151_9:  ;
  if (size1) {
    tmp___51 = string1;
  } else {
    tmp___51 = string2;
  }
  if ((unsigned long )d == (unsigned long )tmp___51) {
    goto _L___13;
  } else {
    if (! size2) {
      _L___13:  
      if (! bufp->not_bol) {
        goto __dyc_dummy_label;
      }
    } else {
      if ((int const   )*(d + -1) == 10) {
        if (bufp->newline_anchor) {
          goto __dyc_dummy_label;
        }
      }
    }
  }
  goto __dyc_dummy_label;
  switch_151_10:  ;
  if ((unsigned long )d == (unsigned long )end2) {
    if (! bufp->not_eol) {
      goto __dyc_dummy_label;
    }
  } else {
    if ((unsigned long )d == (unsigned long )end1) {
      tmp___52 = (int const   )*string2;
    } else {
      tmp___52 = (int const   )*d;
    }
    if (tmp___52 == 10) {
      if (bufp->newline_anchor) {
        goto __dyc_dummy_label;
      }
    }
  }
  goto __dyc_dummy_label;
  switch_151_11:  ;
  if (size1) {
    tmp___53 = string1;
  } else {
    tmp___53 = string2;
  }
  if ((unsigned long )d == (unsigned long )tmp___53) {
    goto __dyc_dummy_label;
  } else {
    if (! size2) {
      goto __dyc_dummy_label;
    }
  }
  goto __dyc_dummy_label;
  switch_151_12:  ;
  if ((unsigned long )d == (unsigned long )end2) {
    goto __dyc_dummy_label;
  }
  goto __dyc_dummy_label;
  switch_151_16:  ;
  while (1) {
    while_179_continue:  ;
    {
    while (1) {
      while_180_continue:  ;
      mcnt = (int )*p & 255;
      mcnt = (int )((unsigned int )mcnt + ((unsigned int )((signed char )*(p + 1)) << 8));
      goto while_180_break;
    }
    while_180_break:  ;
    }
    p += 2;
    goto while_179_break;
  }
  while_179_break:  ;
  while (1) {
    while_181_continue:  ;
    {
    while (1) {
      while_182_continue:  ;
      if (! ((active_reg_t )(fail_stack.size - fail_stack.avail) < ((highest_active_reg - lowest_active_reg) + 1UL) * 3UL + 4UL)) {
        goto while_182_break;
      }
      if (fail_stack.size > (unsigned int )(xre_max_failures * 19)) {
        tmp___57 = 0;
      } else {
        {
        tmp___58 = __dyc_funcallvar_20;
        destination___0 = (char *)tmp___58;
        tmp___59 = __dyc_funcallvar_21;
        fail_stack.stack = (byte_fail_stack_elt_t *)tmp___59;
        }
        if ((unsigned long )fail_stack.stack == (unsigned long )((void *)0)) {
          tmp___57 = 0;
        } else {
          fail_stack.size <<= 1;
          tmp___57 = 1;
        }
      }
      if (! tmp___57) {
        goto __dyc_dummy_label;
      }
    }
    while_182_break:  ;
    }
    this_reg___0 = lowest_active_reg;
    {
    while (1) {
      while_183_continue:  ;
      if (! (this_reg___0 <= highest_active_reg)) {
        goto while_183_break;
      }
      tmp___60 = fail_stack.avail;
      (fail_stack.avail) ++;
      (fail_stack.stack + tmp___60)->pointer = (unsigned char *)*(regstart + this_reg___0);
      tmp___61 = fail_stack.avail;
      (fail_stack.avail) ++;
      (fail_stack.stack + tmp___61)->pointer = (unsigned char *)*(regend + this_reg___0);
      tmp___62 = fail_stack.avail;
      (fail_stack.avail) ++;
      *(fail_stack.stack + tmp___62) = (reg_info + this_reg___0)->word;
      this_reg___0 ++;
    }
    while_183_break:  ;
    }
    tmp___63 = fail_stack.avail;
    (fail_stack.avail) ++;
    (fail_stack.stack + tmp___63)->integer = (int )lowest_active_reg;
    tmp___64 = fail_stack.avail;
    (fail_stack.avail) ++;
    (fail_stack.stack + tmp___64)->integer = (int )highest_active_reg;
    tmp___65 = fail_stack.avail;
    (fail_stack.avail) ++;
    (fail_stack.stack + tmp___65)->pointer = p + mcnt;
    tmp___66 = fail_stack.avail;
    (fail_stack.avail) ++;
    (fail_stack.stack + tmp___66)->pointer = (unsigned char *)((void *)0);
    goto while_181_break;
  }
  while_181_break:  ;
  goto __dyc_dummy_label;
  on_failure: 
  switch_151_15:  ;
  while (1) {
    while_184_continue:  ;
    {
    while (1) {
      while_185_continue:  ;
      mcnt = (int )*p & 255;
      mcnt = (int )((unsigned int )mcnt + ((unsigned int )((signed char )*(p + 1)) << 8));
      goto while_185_break;
    }
    while_185_break:  ;
    }
    p += 2;
    goto while_184_break;
  }
  while_184_break:  ;
  p1 = p;
  while (1) {
    while_186_continue:  ;
    if ((unsigned long )p1 < (unsigned long )pend) {
      if (! ((int )((enum __anonenum_re_opcode_t_24 )*p1) == 0)) {
        goto while_186_break;
      }
    } else {
      goto while_186_break;
    }
    p1 ++;
  }
  while_186_break:  ;
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
    goto while_187_break;
  }
  while_187_break:  ;
  goto __dyc_dummy_label;
  while (1) {
    while_190_continue:  ;
    {
    while (1) {
      while_191_continue:  ;
      mcnt = (int )*p & 255;
      mcnt = (int )((unsigned int )mcnt + ((unsigned int )((signed char )*(p + 1)) << 8));
      goto while_191_break;
    }
    while_191_break:  ;
    }
    p += 2;
    goto while_190_break;
  }
  while_190_break:  ;
  p2 = p;
  while (1) {
    while_192_continue:  ;
    if ((unsigned long )(p2 + 2) < (unsigned long )pend) {
      if ((int )((enum __anonenum_re_opcode_t_24 )*p2) == 7) {
        p2 += 3;
      } else {
        if ((int )((enum __anonenum_re_opcode_t_24 )*p2) == 6) {
          p2 += 3;
        } else {
          goto _L___14;
        }
      }
    } else {
      _L___14:  
      if ((unsigned long )((p2 + 2) + 4) < (unsigned long )pend) {
        if ((int )((enum __anonenum_re_opcode_t_24 )*p2) == 19) {
          p2 += 6;
        } else {
          goto while_192_break;
        }
      } else {
        goto while_192_break;
      }
    }
  }
  while_192_break:  ;
  p1 = p + mcnt;
  if ((unsigned long )p2 == (unsigned long )pend) {
    *(p + -3) = (unsigned char)17;
  } else {
    if ((int )((enum __anonenum_re_opcode_t_24 )*p2) == 2) {
      goto _L___18;
    } else {
      if (bufp->newline_anchor) {
        if ((int )((enum __anonenum_re_opcode_t_24 )*p2) == 10) {
          _L___18:  
          if ((int )*p2 == 10) {
            tmp___80 = '\n';
          } else {
            tmp___80 = (int )*(p2 + 2);
          }
          c___0 = (unsigned char )tmp___80;
          if ((int )((enum __anonenum_re_opcode_t_24 )*(p1 + 3)) == 2) {
            if ((int )*(p1 + 5) != (int )c___0) {
              *(p + -3) = (unsigned char)17;
            } else {
              goto _L___16;
            }
          } else {
            _L___16:  
            if ((int )((enum __anonenum_re_opcode_t_24 )*(p1 + 3)) == 4) {
              goto _L___15;
            } else {
              if ((int )((enum __anonenum_re_opcode_t_24 )*(p1 + 3)) == 5) {
                _L___15:  
                negate___0 = (int )((enum __anonenum_re_opcode_t_24 )*(p1 + 3)) == 5;
                if ((unsigned int )c___0 < (unsigned int )((int )*(p1 + 4) * 8)) {
                  if ((int )*(p1 + (5 + (int )c___0 / 8)) & (1 << (int )c___0 % 8)) {
                    negate___0 = ! negate___0;
                  }
                }
                if (! negate___0) {
                  *(p + -3) = (unsigned char)17;
                }
              }
            }
          }
        } else {
          goto _L___19;
        }
      } else {
        _L___19:  
        if ((int )((enum __anonenum_re_opcode_t_24 )*p2) == 4) {
          if ((int )((enum __anonenum_re_opcode_t_24 )*(p1 + 3)) == 2) {
            if ((int )*(p2 + 1) * 8 > (int )*(p1 + 5)) {
              if ((int )*(p2 + (2 + (int )*(p1 + 5) / 8)) & (1 << (int )*(p1 + 5) % 8)) {
                goto _L___17;
              } else {
                *(p + -3) = (unsigned char)17;
              }
            } else {
              *(p + -3) = (unsigned char)17;
            }
          } else {
            _L___17:  
            if ((int )((enum __anonenum_re_opcode_t_24 )*(p1 + 3)) == 5) {
              idx = 0;
              {
              while (1) {
                while_193_continue:  ;
                if (! (idx < (int )*(p2 + 1))) {
                  goto while_193_break;
                }
                if (! ((int )*(p2 + (2 + idx)) == 0)) {
                  if (idx < (int )*(p1 + 4)) {
                    if (! (((int )*(p2 + (2 + idx)) & ~ ((int )*(p1 + (5 + idx)))) == 0)) {
                      goto while_193_break;
                    }
                  } else {
                    goto while_193_break;
                  }
                }
                idx ++;
              }
              while_193_break:  ;
              }
              if (idx == (int )*(p2 + 1)) {
                *(p + -3) = (unsigned char)17;
              }
            } else {
              if ((int )((enum __anonenum_re_opcode_t_24 )*(p1 + 3)) == 4) {
                idx___0 = 0;
                {
                while (1) {
                  while_194_continue:  ;
                  if (idx___0 < (int )*(p2 + 1)) {
                    if (! (idx___0 < (int )*(p1 + 4))) {
                      goto while_194_break;
                    }
                  } else {
                    goto while_194_break;
                  }
                  if (((int )*(p2 + (2 + idx___0)) & (int )*(p1 + (5 + idx___0))) != 0) {
                    goto while_194_break;
                  }
                  idx___0 ++;
                }
                while_194_break:  ;
                }
                if (idx___0 == (int )*(p2 + 1)) {
                  *(p + -3) = (unsigned char)17;
                } else {
                  if (idx___0 == (int )*(p1 + 4)) {
                    *(p + -3) = (unsigned char)17;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  p -= 2;
  if ((int )((enum __anonenum_re_opcode_t_24 )*(p + -1)) != 17) {
    *(p + -1) = (unsigned char)13;
    goto unconditional_jump;
  }
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
  __dyc_printpre_byte(mcnt);
  __dyc_print_ptr__char(p1);
  __dyc_print_ptr__char(d);
  __dyc_print_ptr__char(p);
  __dyc_print_ptr__char(just_past_start_mem);
  __dyc_print_comp_34__anonstruct_byte_fail_stack_type_25(fail_stack);
  __dyc_printpre_byte(lowest_active_reg);
  __dyc_printpre_byte(highest_active_reg);
  __dyc_printpre_byte(set_regs_matched_done);
  __dyc_printpre_byte(is_a_jump_n);
  __dyc_print_ptr__char(destination);
  __dyc_print_ptr__char(destination___0);
  __dyc_print_ptr__char(destination___1);
  __dyc_printpre_byte(c___0);
  __dyc_print_ptr__char(pdummy);
  __dyc_print_ptr__char(sdummy);
  __dyc_print_ptr__char(destination___2);
  __dyc_print_ptr__char(destination___3);
}
}
