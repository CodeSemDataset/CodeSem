#include "../../include/dycfoo.h"
#include "../../include/regex.i.hd.c.h"
void __dyc_foo(void) 
{ char re_syntax_table[256] ;
  int xre_max_failures ;
  int j ;
  int k ;
  byte_fail_stack_type fail_stack ;
  char *destination ;
  char *fastmap ;
  unsigned char *pend ;
  unsigned char *p ;
  boolean path_can_be_null ;
  boolean succeed_n_p ;
  unsigned char *tmp___0 ;
  unsigned char *tmp___1 ;
  unsigned char *tmp___2 ;
  int fastmap_newline ;
  int tmp___10 ;
  unsigned int tmp___11 ;
  int tmp___15 ;
  void *tmp___16 ;
  void __attribute__((__artificial__))  * __attribute__((__leaf__)) tmp___17 ;
  struct re_pattern_buffer *bufp ;
  void *__dyc_funcallvar_2 ;
  void __attribute__((__artificial__))  * __attribute__((__leaf__)) __dyc_funcallvar_3 ;

  {
  xre_max_failures = __dyc_readpre_byte();
  fail_stack = __dyc_read_comp_34__anonstruct_byte_fail_stack_type_25();
  fastmap = (char *)__dyc_read_ptr__char();
  pend = __dyc_read_ptr__char();
  p = __dyc_read_ptr__char();
  path_can_be_null = (boolean )__dyc_readpre_byte();
  succeed_n_p = (boolean )__dyc_readpre_byte();
  tmp___0 = __dyc_read_ptr__char();
  bufp = __dyc_read_ptr__comp_30re_pattern_buffer();
  __dyc_funcallvar_2 = __dyc_read_ptr__void();
  __dyc_funcallvar_3 = (void __attribute__((__artificial__))  * __attribute__((__leaf__)) )__dyc_read_ptr__void();
  j = 0;
  k = 0;
  destination = 0;
  tmp___1 = 0;
  tmp___2 = 0;
  fastmap_newline = 0;
  tmp___10 = 0;
  tmp___11 = 0;
  tmp___15 = 0;
  tmp___16 = 0;
  tmp___17 = 0;
  bufp->can_be_null |= (unsigned int )path_can_be_null;
  path_can_be_null = (char)1;
  (fail_stack.avail) --;
  p = (fail_stack.stack + fail_stack.avail)->pointer;
  goto __dyc_dummy_label;
  goto __dyc_dummy_label;
  goto switch_119_4;
  if ((int )((enum __anonenum_re_opcode_t_24 )*tmp___0) == 5) {
    goto switch_119_5;
  } else {
    if ((int )((enum __anonenum_re_opcode_t_24 )*tmp___0) == 24) {
      goto switch_119_24;
    } else {
      if ((int )((enum __anonenum_re_opcode_t_24 )*tmp___0) == 25) {
        goto switch_119_25;
      } else {
        if ((int )((enum __anonenum_re_opcode_t_24 )*tmp___0) == 3) {
          goto switch_119_3;
        } else {
          if ((int )((enum __anonenum_re_opcode_t_24 )*tmp___0) == 0) {
            goto switch_119_0;
          } else {
            if ((int )((enum __anonenum_re_opcode_t_24 )*tmp___0) == 9) {
              goto switch_119_0;
            } else {
              if ((int )((enum __anonenum_re_opcode_t_24 )*tmp___0) == 10) {
                goto switch_119_0;
              } else {
                if ((int )((enum __anonenum_re_opcode_t_24 )*tmp___0) == 11) {
                  goto switch_119_0;
                } else {
                  if ((int )((enum __anonenum_re_opcode_t_24 )*tmp___0) == 12) {
                    goto switch_119_0;
                  } else {
                    if ((int )((enum __anonenum_re_opcode_t_24 )*tmp___0) == 28) {
                      goto switch_119_0;
                    } else {
                      if ((int )((enum __anonenum_re_opcode_t_24 )*tmp___0) == 29) {
                        goto switch_119_0;
                      } else {
                        if ((int )((enum __anonenum_re_opcode_t_24 )*tmp___0) == 26) {
                          goto switch_119_0;
                        } else {
                          if ((int )((enum __anonenum_re_opcode_t_24 )*tmp___0) == 27) {
                            goto switch_119_0;
                          } else {
                            if ((int )((enum __anonenum_re_opcode_t_24 )*tmp___0) == 20) {
                              goto switch_119_0;
                            } else {
                              if ((int )((enum __anonenum_re_opcode_t_24 )*tmp___0) == 22) {
                                goto switch_119_22;
                              } else {
                                if ((int )((enum __anonenum_re_opcode_t_24 )*tmp___0) == 17) {
                                  goto switch_119_22;
                                } else {
                                  if ((int )((enum __anonenum_re_opcode_t_24 )*tmp___0) == 18) {
                                    goto switch_119_22;
                                  } else {
                                    if ((int )((enum __anonenum_re_opcode_t_24 )*tmp___0) == 13) {
                                      goto switch_119_22;
                                    } else {
                                      if ((int )((enum __anonenum_re_opcode_t_24 )*tmp___0) == 14) {
                                        goto switch_119_22;
                                      } else {
                                        if ((int )((enum __anonenum_re_opcode_t_24 )*tmp___0) == 19) {
                                          goto switch_119_22;
                                        } else {
                                          if ((int )((enum __anonenum_re_opcode_t_24 )*tmp___0) == 15) {
                                            goto handle_on_failure_jump;
                                          } else {
                                            if ((int )((enum __anonenum_re_opcode_t_24 )*tmp___0) == 16) {
                                              goto handle_on_failure_jump;
                                            } else {
                                              if ((int )((enum __anonenum_re_opcode_t_24 )*tmp___0) == 21) {
                                                goto switch_119_21;
                                              } else {
                                                if ((int )((enum __anonenum_re_opcode_t_24 )*tmp___0) == 23) {
                                                  goto switch_119_23;
                                                } else {
                                                  if ((int )((enum __anonenum_re_opcode_t_24 )*tmp___0) == 6) {
                                                    goto switch_119_6;
                                                  } else {
                                                    if ((int )((enum __anonenum_re_opcode_t_24 )*tmp___0) == 7) {
                                                      goto switch_119_6;
                                                    } else {
                                                      {
                                                      goto switch_119_default;
                                                      if (0) {
                                                        switch_119_8:  
                                                        bufp->can_be_null = 1U;
                                                        goto __dyc_dummy_label;
                                                        switch_119_2:  
                                                        *(fastmap + *(p + 1)) = (char)1;
                                                        goto switch_119_break;
                                                        switch_119_4:  
                                                        tmp___1 = p;
                                                        p ++;
                                                        j = (int )*tmp___1 * 8 - 1;
                                                        {
                                                        while (1) {
                                                          while_120_continue:  ;
                                                          if (! (j >= 0)) {
                                                            goto while_120_break;
                                                          }
                                                          if ((int )*(p + j / 8) & (1 << j % 8)) {
                                                            *(fastmap + j) = (char)1;
                                                          }
                                                          j --;
                                                        }
                                                        while_120_break:  ;
                                                        }
                                                        goto switch_119_break;
                                                        switch_119_5:  
                                                        j = (int )*p * 8;
                                                        {
                                                        while (1) {
                                                          while_121_continue:  ;
                                                          if (! (j < 1 << 8)) {
                                                            goto while_121_break;
                                                          }
                                                          *(fastmap + j) = (char)1;
                                                          j ++;
                                                        }
                                                        while_121_break:  ;
                                                        }
                                                        tmp___2 = p;
                                                        p ++;
                                                        j = (int )*tmp___2 * 8 - 1;
                                                        {
                                                        while (1) {
                                                          while_122_continue:  ;
                                                          if (! (j >= 0)) {
                                                            goto while_122_break;
                                                          }
                                                          if (! ((int )*(p + j / 8) & (1 << j % 8))) {
                                                            *(fastmap + j) = (char)1;
                                                          }
                                                          j --;
                                                        }
                                                        while_122_break:  ;
                                                        }
                                                        goto switch_119_break;
                                                        switch_119_24:  
                                                        j = 0;
                                                        {
                                                        while (1) {
                                                          while_123_continue:  ;
                                                          if (! (j < 1 << 8)) {
                                                            goto while_123_break;
                                                          }
                                                          if ((int )re_syntax_table[(unsigned char )j] == 1) {
                                                            *(fastmap + j) = (char)1;
                                                          }
                                                          j ++;
                                                        }
                                                        while_123_break:  ;
                                                        }
                                                        goto switch_119_break;
                                                        switch_119_25:  
                                                        j = 0;
                                                        {
                                                        while (1) {
                                                          while_124_continue:  ;
                                                          if (! (j < 1 << 8)) {
                                                            goto while_124_break;
                                                          }
                                                          if ((int )re_syntax_table[(unsigned char )j] != 1) {
                                                            *(fastmap + j) = (char)1;
                                                          }
                                                          j ++;
                                                        }
                                                        while_124_break:  ;
                                                        }
                                                        goto switch_119_break;
                                                        switch_119_3:  
                                                        fastmap_newline = (int )*(fastmap + '\n');
                                                        j = 0;
                                                        {
                                                        while (1) {
                                                          while_125_continue:  ;
                                                          if (! (j < 1 << 8)) {
                                                            goto while_125_break;
                                                          }
                                                          *(fastmap + j) = (char)1;
                                                          j ++;
                                                        }
                                                        while_125_break:  ;
                                                        }
                                                        if (! (bufp->syntax & ((((((1UL << 1) << 1) << 1) << 1) << 1) << 1))) {
                                                          *(fastmap + '\n') = (char )fastmap_newline;
                                                        } else {
                                                          if (bufp->can_be_null) {
                                                            goto __dyc_dummy_label;
                                                          }
                                                        }
                                                        goto switch_119_break;
                                                        switch_119_0:  
                                                        switch_119_9:  
                                                        switch_119_10:  
                                                        switch_119_11:  
                                                        switch_119_12:  
                                                        switch_119_28:  
                                                        switch_119_29:  
                                                        switch_119_26:  
                                                        switch_119_27:  
                                                        switch_119_20:  
                                                        goto __dyc_dummy_label;
                                                        switch_119_22:  
                                                        switch_119_17:  
                                                        switch_119_18:  
                                                        switch_119_13:  
                                                        switch_119_14:  
                                                        switch_119_19:  
                                                        {
                                                        while (1) {
                                                          while_126_continue:  ;
                                                          {
                                                          while (1) {
                                                            while_127_continue:  ;
                                                            j = (int )*p & 255;
                                                            j = (int )((unsigned int )j + ((unsigned int )((signed char )*(p + 1)) << 8));
                                                            goto while_127_break;
                                                          }
                                                          while_127_break:  ;
                                                          }
                                                          p += 2;
                                                          goto while_126_break;
                                                        }
                                                        while_126_break:  ;
                                                        }
                                                        p += j;
                                                        if (j > 0) {
                                                          goto __dyc_dummy_label;
                                                        }
                                                        if ((int )((enum __anonenum_re_opcode_t_24 )*p) != 15) {
                                                          if ((int )((enum __anonenum_re_opcode_t_24 )*p) != 21) {
                                                            goto __dyc_dummy_label;
                                                          }
                                                        }
                                                        p ++;
                                                        {
                                                        while (1) {
                                                          while_128_continue:  ;
                                                          {
                                                          while (1) {
                                                            while_129_continue:  ;
                                                            j = (int )*p & 255;
                                                            j = (int )((unsigned int )j + ((unsigned int )((signed char )*(p + 1)) << 8));
                                                            goto while_129_break;
                                                          }
                                                          while_129_break:  ;
                                                          }
                                                          p += 2;
                                                          goto while_128_break;
                                                        }
                                                        while_128_break:  ;
                                                        }
                                                        p += j;
                                                        if (! (fail_stack.avail == 0U)) {
                                                          if ((unsigned long )(fail_stack.stack + (fail_stack.avail - 1U))->pointer == (unsigned long )p) {
                                                            (fail_stack.avail) --;
                                                          }
                                                        }
                                                        goto __dyc_dummy_label;
                                                        handle_on_failure_jump: 
                                                        switch_119_15:  
                                                        switch_119_16:  
                                                        {
                                                        while (1) {
                                                          while_130_continue:  ;
                                                          {
                                                          while (1) {
                                                            while_131_continue:  ;
                                                            j = (int )*p & 255;
                                                            j = (int )((unsigned int )j + ((unsigned int )((signed char )*(p + 1)) << 8));
                                                            goto while_131_break;
                                                          }
                                                          while_131_break:  ;
                                                          }
                                                          p += 2;
                                                          goto while_130_break;
                                                        }
                                                        while_130_break:  ;
                                                        }
                                                        if ((unsigned long )(p + j) < (unsigned long )pend) {
                                                          if (fail_stack.avail == fail_stack.size) {
                                                            if (fail_stack.size > (unsigned int )(xre_max_failures * 19)) {
                                                              tmp___15 = 0;
                                                            } else {
                                                              {
                                                              tmp___16 = __dyc_funcallvar_2;
                                                              destination = (char *)tmp___16;
                                                              tmp___17 = __dyc_funcallvar_3;
                                                              fail_stack.stack = (byte_fail_stack_elt_t *)tmp___17;
                                                              }
                                                              if ((unsigned long )fail_stack.stack == (unsigned long )((void *)0)) {
                                                                tmp___15 = 0;
                                                              } else {
                                                                fail_stack.size <<= 1;
                                                                tmp___15 = 1;
                                                              }
                                                            }
                                                            if (tmp___15) {
                                                              tmp___11 = fail_stack.avail;
                                                              (fail_stack.avail) ++;
                                                              (fail_stack.stack + tmp___11)->pointer = p + j;
                                                              tmp___10 = 1;
                                                            } else {
                                                              tmp___10 = 0;
                                                            }
                                                          } else {
                                                            tmp___11 = fail_stack.avail;
                                                            (fail_stack.avail) ++;
                                                            (fail_stack.stack + tmp___11)->pointer = p + j;
                                                            tmp___10 = 1;
                                                          }
                                                          if (! tmp___10) {
                                                            goto __dyc_dummy_label;
                                                          }
                                                        } else {
                                                          bufp->can_be_null = 1U;
                                                        }
                                                        if (succeed_n_p) {
                                                          {
                                                          while (1) {
                                                            while_132_continue:  ;
                                                            {
                                                            while (1) {
                                                              while_133_continue:  ;
                                                              k = (int )*p & 255;
                                                              k = (int )((unsigned int )k + ((unsigned int )((signed char )*(p + 1)) << 8));
                                                              goto while_133_break;
                                                            }
                                                            while_133_break:  ;
                                                            }
                                                            p += 2;
                                                            goto while_132_break;
                                                          }
                                                          while_132_break:  ;
                                                          }
                                                          succeed_n_p = (char)0;
                                                        }
                                                        goto __dyc_dummy_label;
                                                        switch_119_21:  
                                                        p += 2;
                                                        {
                                                        while (1) {
                                                          while_134_continue:  ;
                                                          {
                                                          while (1) {
                                                            while_135_continue:  ;
                                                            k = (int )*p & 255;
                                                            k = (int )((unsigned int )k + ((unsigned int )((signed char )*(p + 1)) << 8));
                                                            goto while_135_break;
                                                          }
                                                          while_135_break:  ;
                                                          }
                                                          p += 2;
                                                          goto while_134_break;
                                                        }
                                                        while_134_break:  ;
                                                        }
                                                        if (k == 0) {
                                                          p -= 4;
                                                          succeed_n_p = (char)1;
                                                          goto handle_on_failure_jump;
                                                        }
                                                        goto __dyc_dummy_label;
                                                        switch_119_23:  
                                                        p += 4;
                                                        goto __dyc_dummy_label;
                                                        switch_119_6:  
                                                        switch_119_7:  
                                                        p += 2;
                                                        goto __dyc_dummy_label;
                                                        switch_119_default:  
                                                        {

                                                        }
                                                      } else {
                                                        switch_119_break:  ;
                                                      }
                                                      }
                                                    }
                                                  }
                                                }
                                              }
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  __dyc_dummy_label:  ;
  __dyc_printpre_byte(k);
  __dyc_print_comp_34__anonstruct_byte_fail_stack_type_25(fail_stack);
  __dyc_print_ptr__char(destination);
  __dyc_print_ptr__char(p);
  __dyc_printpre_byte(path_can_be_null);
  __dyc_printpre_byte(succeed_n_p);
  __dyc_printpre_byte(fastmap_newline);
}
}
