#include "../../include/dycfoo.h"
#include "../../include/regex.i.hd.c.h"
void __dyc_foo(void) 
{ int mcnt ;
  unsigned char *p1 ;
  char const   *end1 ;
  char const   *end_match_1 ;
  char const   *d ;
  char const   *dend ;
  unsigned char *p ;
  unsigned char *pend ;
  byte_fail_stack_type fail_stack ;
  active_reg_t lowest_active_reg ;
  char const   **regstart ;
  char const   **regend ;
  byte_register_info_type *reg_info ;
  int set_regs_matched_done ;
  active_reg_t this_reg___5 ;
  boolean is_a_jump_n___0 ;
  char const   *string1 ;

  {
  end1 = (char const   *)__dyc_read_ptr__char();
  end_match_1 = (char const   *)__dyc_read_ptr__char();
  d = (char const   *)__dyc_read_ptr__char();
  p = __dyc_read_ptr__char();
  pend = __dyc_read_ptr__char();
  fail_stack = __dyc_read_comp_34__anonstruct_byte_fail_stack_type_25();
  lowest_active_reg = (active_reg_t )__dyc_readpre_byte();
  regstart = (char const   **)__dyc_read_ptr__ptr__char();
  regend = (char const   **)__dyc_read_ptr__ptr__char();
  reg_info = __dyc_read_ptr__typdef_byte_register_info_type();
  this_reg___5 = (active_reg_t )__dyc_readpre_byte();
  string1 = (char const   *)__dyc_read_ptr__char();
  mcnt = 0;
  p1 = 0;
  dend = 0;
  set_regs_matched_done = 0;
  is_a_jump_n___0 = 0;
  while (1) {
    while_220_continue:  ;
    if (! (this_reg___5 >= lowest_active_reg)) {
      goto while_220_break;
    }
    (fail_stack.avail) --;
    (reg_info + this_reg___5)->word = *(fail_stack.stack + fail_stack.avail);
    (fail_stack.avail) --;
    *(regend + this_reg___5) = (char const   *)(fail_stack.stack + fail_stack.avail)->pointer;
    (fail_stack.avail) --;
    *(regstart + this_reg___5) = (char const   *)(fail_stack.stack + fail_stack.avail)->pointer;
    this_reg___5 --;
  }
  while_220_break:  ;
  set_regs_matched_done = 0;
  if (! p) {
    goto __dyc_dummy_label;
  }
  if ((unsigned long )p < (unsigned long )pend) {
    is_a_jump_n___0 = (boolean )0;
    if ((int )((enum __anonenum_re_opcode_t_24 )*p) == 22) {
      goto switch_221_22;
    } else {
      if ((int )((enum __anonenum_re_opcode_t_24 )*p) == 18) {
        goto switch_221_18;
      } else {
        if ((int )((enum __anonenum_re_opcode_t_24 )*p) == 17) {
          goto switch_221_18;
        } else {
          if ((int )((enum __anonenum_re_opcode_t_24 )*p) == 13) {
            goto switch_221_18;
          } else {
            {
            goto switch_221_default;
            if (0) {
              switch_221_22:  
              is_a_jump_n___0 = (char)1;
              switch_221_18:  
              switch_221_17:  
              switch_221_13:  
              p1 = p + 1;
              {
              while (1) {
                while_222_continue:  ;
                {
                while (1) {
                  while_223_continue:  ;
                  mcnt = (int )*p1 & 255;
                  mcnt = (int )((unsigned int )mcnt + ((unsigned int )((signed char )*(p1 + 1)) << 8));
                  goto while_223_break;
                }
                while_223_break:  ;
                }
                p1 += 2;
                goto while_222_break;
              }
              while_222_break:  ;
              }
              p1 += mcnt;
              if (is_a_jump_n___0) {
                if ((int )((enum __anonenum_re_opcode_t_24 )*p1) == 21) {
                  goto __dyc_dummy_label;
                } else {
                  goto _L___20;
                }
              } else {
                _L___20:  
                if (! is_a_jump_n___0) {
                  if ((int )((enum __anonenum_re_opcode_t_24 )*p1) == 15) {
                    goto __dyc_dummy_label;
                  }
                }
              }
              goto switch_221_break;
              switch_221_default:  ;
            } else {
              switch_221_break:  ;
            }
            }
          }
        }
      }
    }
  }
  if ((unsigned long )d >= (unsigned long )string1) {
    if ((unsigned long )d <= (unsigned long )end1) {
      dend = end_match_1;
    }
  }
  goto __dyc_dummy_label;
  __dyc_dummy_label:  ;
  __dyc_print_ptr__char(p1);
  __dyc_print_ptr__char(dend);
  __dyc_printpre_byte(set_regs_matched_done);
  __dyc_printpre_byte(is_a_jump_n___0);
}
}
