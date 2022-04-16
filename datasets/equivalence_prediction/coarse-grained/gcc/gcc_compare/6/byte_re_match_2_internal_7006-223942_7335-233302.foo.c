#include "../../include/dycfoo.h"
#include "../../include/regex.i.hd.c.h"
void __dyc_foo(void) 
{ char re_syntax_table[256] ;
  int xre_max_failures ;
  int mcnt ;
  unsigned char *p1 ;
  char const   *end1 ;
  char const   *end2 ;
  char const   *d ;
  unsigned char *p ;
  unsigned char *pend ;
  byte_fail_stack_type fail_stack ;
  active_reg_t lowest_active_reg ;
  active_reg_t highest_active_reg ;
  char const   **regstart ;
  char const   **regend ;
  byte_register_info_type *reg_info ;
  int set_regs_matched_done ;
  char const   **reg_dummy ;
  byte_register_info_type *reg_info_dummy ;
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
  boolean prevchar ;
  boolean thischar ;
  char const   *tmp___107 ;
  int tmp___109 ;
  int tmp___111 ;
  boolean prevchar___0 ;
  boolean thischar___0 ;
  char const   *tmp___112 ;
  int tmp___114 ;
  int tmp___116 ;
  struct re_pattern_buffer *bufp ;
  char const   *string1 ;
  int size1 ;
  char const   *string2 ;
  int size2 ;
  void *__dyc_funcallvar_24 ;
  void __attribute__((__artificial__))  * __attribute__((__leaf__)) __dyc_funcallvar_25 ;
  void *__dyc_funcallvar_26 ;
  void __attribute__((__artificial__))  * __attribute__((__leaf__)) __dyc_funcallvar_27 ;

  {
  xre_max_failures = __dyc_readpre_byte();
  mcnt = __dyc_readpre_byte();
  end1 = (char const   *)__dyc_read_ptr__char();
  end2 = (char const   *)__dyc_read_ptr__char();
  d = (char const   *)__dyc_read_ptr__char();
  p = __dyc_read_ptr__char();
  pend = __dyc_read_ptr__char();
  fail_stack = __dyc_read_comp_34__anonstruct_byte_fail_stack_type_25();
  lowest_active_reg = (active_reg_t )__dyc_readpre_byte();
  highest_active_reg = (active_reg_t )__dyc_readpre_byte();
  regstart = (char const   **)__dyc_read_ptr__ptr__char();
  regend = (char const   **)__dyc_read_ptr__ptr__char();
  reg_info = __dyc_read_ptr__typdef_byte_register_info_type();
  reg_dummy = (char const   **)__dyc_read_ptr__ptr__char();
  reg_info_dummy = __dyc_read_ptr__typdef_byte_register_info_type();
  p2 = __dyc_read_ptr__char();
  bufp = __dyc_read_ptr__comp_30re_pattern_buffer();
  string1 = (char const   *)__dyc_read_ptr__char();
  size1 = __dyc_readpre_byte();
  string2 = (char const   *)__dyc_read_ptr__char();
  size2 = __dyc_readpre_byte();
  __dyc_funcallvar_24 = __dyc_read_ptr__void();
  __dyc_funcallvar_25 = (void __attribute__((__artificial__))  * __attribute__((__leaf__)) )__dyc_read_ptr__void();
  __dyc_funcallvar_26 = __dyc_read_ptr__void();
  __dyc_funcallvar_27 = (void __attribute__((__artificial__))  * __attribute__((__leaf__)) )__dyc_read_ptr__void();
  p1 = 0;
  set_regs_matched_done = 0;
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
  prevchar = 0;
  thischar = 0;
  tmp___107 = 0;
  tmp___109 = 0;
  tmp___111 = 0;
  prevchar___0 = 0;
  thischar___0 = 0;
  tmp___112 = 0;
  tmp___114 = 0;
  tmp___116 = 0;
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
  while (1) {
    while_204_continue:  ;
    mcnt = (int )*(p + 2) & 255;
    mcnt = (int )((unsigned int )mcnt + ((unsigned int )((signed char )*((p + 2) + 1)) << 8));
    goto while_204_break;
  }
  while_204_break:  ;
  if (mcnt > 0) {
    mcnt --;
    p += 2;
    {
    while (1) {
      while_205_continue:  ;
      {
      while (1) {
        while_206_continue:  ;
        *(p + 0) = (unsigned char )(mcnt & 255);
        *(p + 1) = (unsigned char )(mcnt >> 8);
        goto while_206_break;
      }
      while_206_break:  ;
      }
      p += 2;
      goto while_205_break;
    }
    while_205_break:  ;
    }
  } else {
    if (mcnt == 0) {
      *(p + 2) = (unsigned char)0;
      *(p + 3) = (unsigned char)0;
      goto __dyc_dummy_label;
    }
  }
  goto __dyc_dummy_label;
  while (1) {
    while_207_continue:  ;
    mcnt = (int )*(p + 2) & 255;
    mcnt = (int )((unsigned int )mcnt + ((unsigned int )((signed char )*((p + 2) + 1)) << 8));
    goto while_207_break;
  }
  while_207_break:  ;
  if (mcnt) {
    mcnt --;
    {
    while (1) {
      while_208_continue:  ;
      *((p + 2) + 0) = (unsigned char )(mcnt & 255);
      *((p + 2) + 1) = (unsigned char )(mcnt >> 8);
      goto while_208_break;
    }
    while_208_break:  ;
    }
    goto unconditional_jump;
  } else {
    p += 4;
  }
  goto __dyc_dummy_label;
  while (1) {
    while_209_continue:  ;
    {
    while (1) {
      while_210_continue:  ;
      mcnt = (int )*p & 255;
      mcnt = (int )((unsigned int )mcnt + ((unsigned int )((signed char )*(p + 1)) << 8));
      goto while_210_break;
    }
    while_210_break:  ;
    }
    p += 2;
    goto while_209_break;
  }
  while_209_break:  ;
  p1 = p + mcnt;
  while (1) {
    while_211_continue:  ;
    {
    while (1) {
      while_212_continue:  ;
      mcnt = (int )*p & 255;
      mcnt = (int )((unsigned int )mcnt + ((unsigned int )((signed char )*(p + 1)) << 8));
      goto while_212_break;
    }
    while_212_break:  ;
    }
    p += 2;
    goto while_211_break;
  }
  while_211_break:  ;
  while (1) {
    while_213_continue:  ;
    *(p1 + 0) = (unsigned char )(mcnt & 255);
    *(p1 + 1) = (unsigned char )(mcnt >> 8);
    goto while_213_break;
  }
  while_213_break:  ;
  goto __dyc_dummy_label;
  switch_151_28:  
  if (size1) {
    tmp___107 = string1;
  } else {
    tmp___107 = string2;
  }
  if ((unsigned long )d == (unsigned long )tmp___107) {
    goto __dyc_dummy_label;
  } else {
    if (! size2) {
      goto __dyc_dummy_label;
    } else {
      if ((unsigned long )d == (unsigned long )end2) {
        goto __dyc_dummy_label;
      }
    }
  }
  if ((unsigned long )(d - 1) == (unsigned long )end1) {
    tmp___109 = (int const   )*string2;
  } else {
    if ((unsigned long )(d - 1) == (unsigned long )(string2 - 1)) {
      tmp___109 = (int const   )*(end1 - 1);
    } else {
      tmp___109 = (int const   )*(d - 1);
    }
  }
  prevchar = (char )((int )re_syntax_table[(unsigned char )tmp___109] == 1);
  if ((unsigned long )d == (unsigned long )end1) {
    tmp___111 = (int const   )*string2;
  } else {
    if ((unsigned long )d == (unsigned long )(string2 - 1)) {
      tmp___111 = (int const   )*(end1 - 1);
    } else {
      tmp___111 = (int const   )*d;
    }
  }
  thischar = (char )((int )re_syntax_table[(unsigned char )tmp___111] == 1);
  if ((int )prevchar != (int )thischar) {
    goto __dyc_dummy_label;
  }
  goto __dyc_dummy_label;
  switch_151_29:  
  if (size1) {
    tmp___112 = string1;
  } else {
    tmp___112 = string2;
  }
  if ((unsigned long )d == (unsigned long )tmp___112) {
    goto __dyc_dummy_label;
  } else {
    if (! size2) {
      goto __dyc_dummy_label;
    } else {
      if ((unsigned long )d == (unsigned long )end2) {
        goto __dyc_dummy_label;
      }
    }
  }
  if ((unsigned long )(d - 1) == (unsigned long )end1) {
    tmp___114 = (int const   )*string2;
  } else {
    if ((unsigned long )(d - 1) == (unsigned long )(string2 - 1)) {
      tmp___114 = (int const   )*(end1 - 1);
    } else {
      tmp___114 = (int const   )*(d - 1);
    }
  }
  prevchar___0 = (char )((int )re_syntax_table[(unsigned char )tmp___114] == 1);
  if ((unsigned long )d == (unsigned long )end1) {
    tmp___116 = (int const   )*string2;
  } else {
    if ((unsigned long )d == (unsigned long )(string2 - 1)) {
      tmp___116 = (int const   )*(end1 - 1);
    } else {
      tmp___116 = (int const   )*d;
    }
  }
  thischar___0 = (char )((int )re_syntax_table[(unsigned char )tmp___116] == 1);
  if ((int )prevchar___0 != (int )thischar___0) {
    goto __dyc_dummy_label;
  }
  goto __dyc_dummy_label;
  __dyc_dummy_label:  ;
  __dyc_print_ptr__char(p1);
  __dyc_print_ptr__char(p);
  __dyc_print_comp_34__anonstruct_byte_fail_stack_type_25(fail_stack);
  __dyc_printpre_byte(set_regs_matched_done);
  __dyc_printpre_byte(c___0);
  __dyc_print_ptr__char(pdummy);
  __dyc_print_ptr__char(sdummy);
  __dyc_print_ptr__char(destination___2);
  __dyc_print_ptr__char(destination___3);
}
}
