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
  int set_regs_matched_done ;
  char const   **reg_dummy ;
  byte_register_info_type *reg_info_dummy ;
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
  struct re_pattern_buffer *bufp ;
  void *__dyc_funcallvar_22 ;
  void __attribute__((__artificial__))  * __attribute__((__leaf__)) __dyc_funcallvar_23 ;

  {
  xre_max_failures = __dyc_readpre_byte();
  mcnt = __dyc_readpre_byte();
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
  bufp = __dyc_read_ptr__comp_30re_pattern_buffer();
  __dyc_funcallvar_22 = __dyc_read_ptr__void();
  __dyc_funcallvar_23 = (void __attribute__((__artificial__))  * __attribute__((__leaf__)) )__dyc_read_ptr__void();
  p1 = 0;
  set_regs_matched_done = 0;
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
    goto __dyc_dummy_label;
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
  __dyc_dummy_label:  ;
  __dyc_print_ptr__char(p1);
  __dyc_print_comp_34__anonstruct_byte_fail_stack_type_25(fail_stack);
  __dyc_printpre_byte(set_regs_matched_done);
  __dyc_print_ptr__char(destination___1);
  __dyc_printpre_byte(c___0);
  __dyc_print_ptr__char(pdummy);
  __dyc_print_ptr__char(sdummy);
}
}
