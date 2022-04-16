#include "../../include/dycfoo.h"
#include "../../include/regex.i.hd.c.h"
void __dyc_foo(void) 
{ unsigned char c ;
  unsigned char c1 ;
  unsigned char *b ;
  compile_stack_type compile_stack ;
  char const   *p ;
  char const   *pend ;
  char *translate ;
  unsigned char *pending_exact ;
  unsigned char *laststart ;
  unsigned char *begalt ;
  unsigned char *fixup_alt_jump ;
  regnum_t regnum ;
  void *tmp___493 ;
  unsigned char *old_buffer___8 ;
  void *tmp___494 ;
  ptrdiff_t incr___8 ;
  unsigned char *tmp___495 ;
  unsigned char *tmp___496 ;
  unsigned char *tmp___497 ;
  unsigned char *old_buffer___9 ;
  void *tmp___498 ;
  ptrdiff_t incr___9 ;
  unsigned char *tmp___499 ;
  regnum_t this_group_regnum ;
  unsigned char *inner_group_loc ;
  unsigned char *old_buffer___10 ;
  void *tmp___500 ;
  ptrdiff_t incr___10 ;
  unsigned char *tmp___501 ;
  unsigned char *tmp___502 ;
  unsigned char *tmp___503 ;
  unsigned char *old_buffer___11 ;
  void *tmp___504 ;
  ptrdiff_t incr___11 ;
  unsigned char *old_buffer___12 ;
  void *tmp___505 ;
  ptrdiff_t incr___12 ;
  int lower_bound ;
  int upper_bound ;
  char const   *beg_interval ;
  char const   *tmp___506 ;
  char const   *tmp___507 ;
  char const   *tmp___508 ;
  unsigned char *old_buffer___13 ;
  void *tmp___509 ;
  ptrdiff_t incr___13 ;
  unsigned int nbytes ;
  unsigned char *old_buffer___14 ;
  void *tmp___510 ;
  ptrdiff_t incr___14 ;
  int tmp___511 ;
  unsigned char *old_buffer___15 ;
  void *tmp___512 ;
  ptrdiff_t incr___15 ;
  unsigned char *tmp___513 ;
  unsigned char *old_buffer___16 ;
  void *tmp___514 ;
  ptrdiff_t incr___16 ;
  unsigned char *tmp___515 ;
  unsigned char *old_buffer___17 ;
  void *tmp___516 ;
  ptrdiff_t incr___17 ;
  unsigned char *tmp___517 ;
  unsigned char *old_buffer___18 ;
  void *tmp___518 ;
  ptrdiff_t incr___18 ;
  unsigned char *tmp___519 ;
  unsigned char *old_buffer___19 ;
  void *tmp___520 ;
  ptrdiff_t incr___19 ;
  unsigned char *tmp___521 ;
  unsigned char *old_buffer___20 ;
  void *tmp___522 ;
  ptrdiff_t incr___20 ;
  unsigned char *tmp___523 ;
  unsigned char *old_buffer___21 ;
  void *tmp___524 ;
  ptrdiff_t incr___21 ;
  unsigned char *tmp___525 ;
  unsigned char *old_buffer___22 ;
  void *tmp___526 ;
  ptrdiff_t incr___22 ;
  unsigned char *tmp___527 ;
  boolean tmp___528 ;
  unsigned char *old_buffer___23 ;
  void *tmp___529 ;
  ptrdiff_t incr___23 ;
  unsigned char *tmp___530 ;
  unsigned char *tmp___531 ;
  reg_syntax_t syntax ;
  struct re_pattern_buffer *bufp ;
  void *__dyc_funcallvar_151 ;
  void *__dyc_funcallvar_152 ;
  void *__dyc_funcallvar_153 ;
  void *__dyc_funcallvar_154 ;
  void *__dyc_funcallvar_155 ;
  void *__dyc_funcallvar_156 ;
  void *__dyc_funcallvar_157 ;
  void *__dyc_funcallvar_158 ;
  void *__dyc_funcallvar_159 ;
  void *__dyc_funcallvar_160 ;
  void *__dyc_funcallvar_161 ;
  void *__dyc_funcallvar_162 ;
  void *__dyc_funcallvar_163 ;
  void *__dyc_funcallvar_164 ;
  void *__dyc_funcallvar_165 ;
  void *__dyc_funcallvar_166 ;
  boolean __dyc_funcallvar_167 ;
  void *__dyc_funcallvar_168 ;

  {
  c = (unsigned char )__dyc_readpre_byte();
  b = __dyc_read_ptr__char();
  translate = (char *)__dyc_read_ptr__char();
  pending_exact = __dyc_read_ptr__char();
  laststart = __dyc_read_ptr__char();
  begalt = __dyc_read_ptr__char();
  fixup_alt_jump = __dyc_read_ptr__char();
  regnum = (regnum_t )__dyc_readpre_byte();
  syntax = (reg_syntax_t )__dyc_readpre_byte();
  bufp = __dyc_read_ptr__comp_30re_pattern_buffer();
  __dyc_funcallvar_159 = __dyc_read_ptr__void();
  __dyc_funcallvar_160 = __dyc_read_ptr__void();
  __dyc_funcallvar_161 = __dyc_read_ptr__void();
  __dyc_funcallvar_162 = __dyc_read_ptr__void();
  __dyc_funcallvar_163 = __dyc_read_ptr__void();
  __dyc_funcallvar_164 = __dyc_read_ptr__void();
  __dyc_funcallvar_165 = __dyc_read_ptr__void();
  __dyc_funcallvar_166 = __dyc_read_ptr__void();
  __dyc_funcallvar_167 = (boolean )__dyc_readpre_byte();
  __dyc_funcallvar_168 = __dyc_read_ptr__void();
  c1 = 0;
  memset(& compile_stack, 0, sizeof(compile_stack_type ));
  p = 0;
  pend = 0;
  tmp___493 = 0;
  old_buffer___8 = 0;
  tmp___494 = 0;
  incr___8 = 0;
  tmp___495 = 0;
  tmp___496 = 0;
  tmp___497 = 0;
  old_buffer___9 = 0;
  tmp___498 = 0;
  incr___9 = 0;
  tmp___499 = 0;
  this_group_regnum = 0;
  inner_group_loc = 0;
  old_buffer___10 = 0;
  tmp___500 = 0;
  incr___10 = 0;
  tmp___501 = 0;
  tmp___502 = 0;
  tmp___503 = 0;
  old_buffer___11 = 0;
  tmp___504 = 0;
  incr___11 = 0;
  old_buffer___12 = 0;
  tmp___505 = 0;
  incr___12 = 0;
  lower_bound = 0;
  upper_bound = 0;
  beg_interval = 0;
  tmp___506 = 0;
  tmp___507 = 0;
  tmp___508 = 0;
  old_buffer___13 = 0;
  tmp___509 = 0;
  incr___13 = 0;
  nbytes = 0;
  old_buffer___14 = 0;
  tmp___510 = 0;
  incr___14 = 0;
  tmp___511 = 0;
  old_buffer___15 = 0;
  tmp___512 = 0;
  incr___15 = 0;
  tmp___513 = 0;
  old_buffer___16 = 0;
  tmp___514 = 0;
  incr___16 = 0;
  tmp___515 = 0;
  old_buffer___17 = 0;
  tmp___516 = 0;
  incr___17 = 0;
  tmp___517 = 0;
  old_buffer___18 = 0;
  tmp___518 = 0;
  incr___18 = 0;
  tmp___519 = 0;
  old_buffer___19 = 0;
  tmp___520 = 0;
  incr___19 = 0;
  tmp___521 = 0;
  old_buffer___20 = 0;
  tmp___522 = 0;
  incr___20 = 0;
  tmp___523 = 0;
  old_buffer___21 = 0;
  tmp___524 = 0;
  incr___21 = 0;
  tmp___525 = 0;
  old_buffer___22 = 0;
  tmp___526 = 0;
  incr___22 = 0;
  tmp___527 = 0;
  tmp___528 = 0;
  old_buffer___23 = 0;
  tmp___529 = 0;
  incr___23 = 0;
  tmp___530 = 0;
  tmp___531 = 0;
  __dyc_funcallvar_151 = 0;
  __dyc_funcallvar_152 = 0;
  __dyc_funcallvar_153 = 0;
  __dyc_funcallvar_154 = 0;
  __dyc_funcallvar_155 = 0;
  __dyc_funcallvar_156 = 0;
  __dyc_funcallvar_157 = 0;
  __dyc_funcallvar_158 = 0;
  if ((int )c == 119) {
    goto switch_52_119;
  } else {
    if ((int )c == 87) {
      goto switch_52_87;
    } else {
      if ((int )c == 60) {
        goto switch_52_60;
      } else {
        if ((int )c == 62) {
          goto switch_52_62;
        } else {
          if ((int )c == 98) {
            goto switch_52_98;
          } else {
            if ((int )c == 66) {
              goto switch_52_66;
            } else {
              if ((int )c == 96) {
                goto switch_52_96;
              } else {
                if ((int )c == 39) {
                  goto switch_52_39;
                } else {
                  if ((int )c == 49) {
                    goto switch_52_49;
                  } else {
                    if ((int )c == 50) {
                      goto switch_52_49;
                    } else {
                      if ((int )c == 51) {
                        goto switch_52_49;
                      } else {
                        if ((int )c == 52) {
                          goto switch_52_49;
                        } else {
                          if ((int )c == 53) {
                            goto switch_52_49;
                          } else {
                            if ((int )c == 54) {
                              goto switch_52_49;
                            } else {
                              if ((int )c == 55) {
                                goto switch_52_49;
                              } else {
                                if ((int )c == 56) {
                                  goto switch_52_49;
                                } else {
                                  if ((int )c == 57) {
                                    goto switch_52_49;
                                  } else {
                                    if ((int )c == 43) {
                                      goto switch_52_43;
                                    } else {
                                      if ((int )c == 63) {
                                        goto switch_52_43;
                                      } else {
                                        {
                                        goto switch_52_default;
                                        if (0) {
                                          switch_52_40:  
                                          if (syntax & (((((((((((((1UL << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1)) {
                                            goto normal_backslash;
                                          }
                                          handle_open: 
                                          (bufp->re_nsub) ++;
                                          regnum ++;
                                          if (compile_stack.avail == compile_stack.size) {
                                            {
                                            tmp___493 = __dyc_funcallvar_151;
                                            compile_stack.stack = (compile_stack_elt_t *)tmp___493;
                                            }
                                            if ((unsigned long )compile_stack.stack == (unsigned long )((void *)0)) {
                                              goto __dyc_dummy_label;
                                            }
                                            compile_stack.size <<= 1;
                                          }
                                          (compile_stack.stack + compile_stack.avail)->begalt_offset = (long )(begalt - bufp->buffer);
                                          if (fixup_alt_jump) {
                                            (compile_stack.stack + compile_stack.avail)->fixup_alt_jump = (long )((fixup_alt_jump - bufp->buffer) + 1);
                                          } else {
                                            (compile_stack.stack + compile_stack.avail)->fixup_alt_jump = 0L;
                                          }
                                          (compile_stack.stack + compile_stack.avail)->laststart_offset = (long )(b - bufp->buffer);
                                          (compile_stack.stack + compile_stack.avail)->regnum = regnum;
                                          if (regnum <= 255U) {
                                            (compile_stack.stack + compile_stack.avail)->inner_group_offset = (long )((b - bufp->buffer) + 2);
                                            {
                                            while (1) {
                                              while_53_continue:  ;
                                              {
                                              while (1) {
                                                while_54_continue:  ;
                                                if (! ((unsigned long )((b - bufp->buffer) + 3) > bufp->allocated)) {
                                                  goto while_54_break;
                                                }
                                                {
                                                while (1) {
                                                  while_55_continue:  ;
                                                  old_buffer___8 = bufp->buffer;
                                                  if (bufp->allocated == (unsigned long )(1L << 16)) {
                                                    goto __dyc_dummy_label;
                                                  }
                                                  bufp->allocated <<= 1;
                                                  if (bufp->allocated > (unsigned long )(1L << 16)) {
                                                    bufp->allocated = (unsigned long )(1L << 16);
                                                  }
                                                  {
                                                  tmp___494 = __dyc_funcallvar_152;
                                                  bufp->buffer = (unsigned char *)tmp___494;
                                                  }
                                                  if ((unsigned long )bufp->buffer == (unsigned long )((void *)0)) {
                                                    goto __dyc_dummy_label;
                                                  }
                                                  if ((unsigned long )old_buffer___8 != (unsigned long )bufp->buffer) {
                                                    incr___8 = (ptrdiff_t )(bufp->buffer - old_buffer___8);
                                                    b += incr___8;
                                                    begalt += incr___8;
                                                    if (fixup_alt_jump) {
                                                      fixup_alt_jump += incr___8;
                                                    }
                                                    if (laststart) {
                                                      laststart += incr___8;
                                                    }
                                                    if (pending_exact) {
                                                      pending_exact += incr___8;
                                                    }
                                                  }
                                                  goto while_55_break;
                                                }
                                                while_55_break:  ;
                                                }
                                              }
                                              while_54_break:  ;
                                              }
                                              tmp___495 = b;
                                              b ++;
                                              *tmp___495 = (unsigned char)6;
                                              tmp___496 = b;
                                              b ++;
                                              *tmp___496 = (unsigned char )regnum;
                                              tmp___497 = b;
                                              b ++;
                                              *tmp___497 = (unsigned char)0;
                                              goto while_53_break;
                                            }
                                            while_53_break:  ;
                                            }
                                          }
                                          (compile_stack.avail) ++;
                                          fixup_alt_jump = (unsigned char *)0;
                                          laststart = (unsigned char *)0;
                                          begalt = b;
                                          pending_exact = (unsigned char *)0;
                                          goto switch_52_break;
                                          switch_52_41:  
                                          if (syntax & (((((((((((((1UL << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1)) {
                                            goto normal_backslash;
                                          }
                                          if (compile_stack.avail == 0U) {
                                            if (syntax & (((((((((((((((((1UL << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1)) {
                                              goto normal_backslash;
                                            } else {
                                              {

                                              }
                                              goto __dyc_dummy_label;
                                            }
                                          }
                                          handle_close: 
                                          if (fixup_alt_jump) {
                                            {
                                            while (1) {
                                              while_56_continue:  ;
                                              {
                                              while (1) {
                                                while_57_continue:  ;
                                                if (! ((unsigned long )((b - bufp->buffer) + 1) > bufp->allocated)) {
                                                  goto while_57_break;
                                                }
                                                {
                                                while (1) {
                                                  while_58_continue:  ;
                                                  old_buffer___9 = bufp->buffer;
                                                  if (bufp->allocated == (unsigned long )(1L << 16)) {
                                                    goto __dyc_dummy_label;
                                                  }
                                                  bufp->allocated <<= 1;
                                                  if (bufp->allocated > (unsigned long )(1L << 16)) {
                                                    bufp->allocated = (unsigned long )(1L << 16);
                                                  }
                                                  {
                                                  tmp___498 = __dyc_funcallvar_153;
                                                  bufp->buffer = (unsigned char *)tmp___498;
                                                  }
                                                  if ((unsigned long )bufp->buffer == (unsigned long )((void *)0)) {
                                                    goto __dyc_dummy_label;
                                                  }
                                                  if ((unsigned long )old_buffer___9 != (unsigned long )bufp->buffer) {
                                                    incr___9 = (ptrdiff_t )(bufp->buffer - old_buffer___9);
                                                    b += incr___9;
                                                    begalt += incr___9;
                                                    if (fixup_alt_jump) {
                                                      fixup_alt_jump += incr___9;
                                                    }
                                                    if (laststart) {
                                                      laststart += incr___9;
                                                    }
                                                    if (pending_exact) {
                                                      pending_exact += incr___9;
                                                    }
                                                  }
                                                  goto while_58_break;
                                                }
                                                while_58_break:  ;
                                                }
                                              }
                                              while_57_break:  ;
                                              }
                                              tmp___499 = b;
                                              b ++;
                                              *tmp___499 = (unsigned char)20;
                                              goto while_56_break;
                                            }
                                            while_56_break:  ;
                                            }
                                            {

                                            }
                                          }
                                          if (compile_stack.avail == 0U) {
                                            if (syntax & (((((((((((((((((1UL << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1)) {
                                              goto __dyc_dummy_label;
                                            } else {
                                              {

                                              }
                                              goto __dyc_dummy_label;
                                            }
                                          }
                                          (compile_stack.avail) --;
                                          begalt = bufp->buffer + (compile_stack.stack + compile_stack.avail)->begalt_offset;
                                          if ((compile_stack.stack + compile_stack.avail)->fixup_alt_jump) {
                                            fixup_alt_jump = (bufp->buffer + (compile_stack.stack + compile_stack.avail)->fixup_alt_jump) - 1;
                                          } else {
                                            fixup_alt_jump = (unsigned char *)0;
                                          }
                                          laststart = bufp->buffer + (compile_stack.stack + compile_stack.avail)->laststart_offset;
                                          this_group_regnum = (compile_stack.stack + compile_stack.avail)->regnum;
                                          pending_exact = (unsigned char *)0;
                                          if (this_group_regnum <= 255U) {
                                            inner_group_loc = bufp->buffer + (compile_stack.stack + compile_stack.avail)->inner_group_offset;
                                            *inner_group_loc = (unsigned char )(regnum - this_group_regnum);
                                            {
                                            while (1) {
                                              while_59_continue:  ;
                                              {
                                              while (1) {
                                                while_60_continue:  ;
                                                if (! ((unsigned long )((b - bufp->buffer) + 3) > bufp->allocated)) {
                                                  goto while_60_break;
                                                }
                                                {
                                                while (1) {
                                                  while_61_continue:  ;
                                                  old_buffer___10 = bufp->buffer;
                                                  if (bufp->allocated == (unsigned long )(1L << 16)) {
                                                    goto __dyc_dummy_label;
                                                  }
                                                  bufp->allocated <<= 1;
                                                  if (bufp->allocated > (unsigned long )(1L << 16)) {
                                                    bufp->allocated = (unsigned long )(1L << 16);
                                                  }
                                                  {
                                                  tmp___500 = __dyc_funcallvar_154;
                                                  bufp->buffer = (unsigned char *)tmp___500;
                                                  }
                                                  if ((unsigned long )bufp->buffer == (unsigned long )((void *)0)) {
                                                    goto __dyc_dummy_label;
                                                  }
                                                  if ((unsigned long )old_buffer___10 != (unsigned long )bufp->buffer) {
                                                    incr___10 = (ptrdiff_t )(bufp->buffer - old_buffer___10);
                                                    b += incr___10;
                                                    begalt += incr___10;
                                                    if (fixup_alt_jump) {
                                                      fixup_alt_jump += incr___10;
                                                    }
                                                    if (laststart) {
                                                      laststart += incr___10;
                                                    }
                                                    if (pending_exact) {
                                                      pending_exact += incr___10;
                                                    }
                                                  }
                                                  goto while_61_break;
                                                }
                                                while_61_break:  ;
                                                }
                                              }
                                              while_60_break:  ;
                                              }
                                              tmp___501 = b;
                                              b ++;
                                              *tmp___501 = (unsigned char)7;
                                              tmp___502 = b;
                                              b ++;
                                              *tmp___502 = (unsigned char )this_group_regnum;
                                              tmp___503 = b;
                                              b ++;
                                              *tmp___503 = (unsigned char )(regnum - this_group_regnum);
                                              goto while_59_break;
                                            }
                                            while_59_break:  ;
                                            }
                                          }
                                          goto switch_52_break;
                                          switch_52_124:  
                                          if (syntax & ((((((((((1UL << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1)) {
                                            goto normal_backslash;
                                          } else {
                                            if (syntax & (((((((((((((((1UL << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1)) {
                                              goto normal_backslash;
                                            }
                                          }
                                          handle_alt: 
                                          if (syntax & ((((((((((1UL << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1)) {
                                            goto __dyc_dummy_label;
                                          }
                                          {
                                          while (1) {
                                            while_62_continue:  ;
                                            if (! ((unsigned long )((b - bufp->buffer) + 3) > bufp->allocated)) {
                                              goto while_62_break;
                                            }
                                            {
                                            while (1) {
                                              while_63_continue:  ;
                                              old_buffer___11 = bufp->buffer;
                                              if (bufp->allocated == (unsigned long )(1L << 16)) {
                                                goto __dyc_dummy_label;
                                              }
                                              bufp->allocated <<= 1;
                                              if (bufp->allocated > (unsigned long )(1L << 16)) {
                                                bufp->allocated = (unsigned long )(1L << 16);
                                              }
                                              {
                                              tmp___504 = __dyc_funcallvar_155;
                                              bufp->buffer = (unsigned char *)tmp___504;
                                              }
                                              if ((unsigned long )bufp->buffer == (unsigned long )((void *)0)) {
                                                goto __dyc_dummy_label;
                                              }
                                              if ((unsigned long )old_buffer___11 != (unsigned long )bufp->buffer) {
                                                incr___11 = (ptrdiff_t )(bufp->buffer - old_buffer___11);
                                                b += incr___11;
                                                begalt += incr___11;
                                                if (fixup_alt_jump) {
                                                  fixup_alt_jump += incr___11;
                                                }
                                                if (laststart) {
                                                  laststart += incr___11;
                                                }
                                                if (pending_exact) {
                                                  pending_exact += incr___11;
                                                }
                                              }
                                              goto while_63_break;
                                            }
                                            while_63_break:  ;
                                            }
                                          }
                                          while_62_break:  ;
                                          }
                                          {

                                          pending_exact = (unsigned char *)0;
                                          b += 3;
                                          }
                                          if (fixup_alt_jump) {
                                            {

                                            }
                                          }
                                          fixup_alt_jump = b;
                                          {
                                          while (1) {
                                            while_64_continue:  ;
                                            if (! ((unsigned long )((b - bufp->buffer) + 3) > bufp->allocated)) {
                                              goto while_64_break;
                                            }
                                            {
                                            while (1) {
                                              while_65_continue:  ;
                                              old_buffer___12 = bufp->buffer;
                                              if (bufp->allocated == (unsigned long )(1L << 16)) {
                                                goto __dyc_dummy_label;
                                              }
                                              bufp->allocated <<= 1;
                                              if (bufp->allocated > (unsigned long )(1L << 16)) {
                                                bufp->allocated = (unsigned long )(1L << 16);
                                              }
                                              {
                                              tmp___505 = __dyc_funcallvar_156;
                                              bufp->buffer = (unsigned char *)tmp___505;
                                              }
                                              if ((unsigned long )bufp->buffer == (unsigned long )((void *)0)) {
                                                goto __dyc_dummy_label;
                                              }
                                              if ((unsigned long )old_buffer___12 != (unsigned long )bufp->buffer) {
                                                incr___12 = (ptrdiff_t )(bufp->buffer - old_buffer___12);
                                                b += incr___12;
                                                begalt += incr___12;
                                                if (fixup_alt_jump) {
                                                  fixup_alt_jump += incr___12;
                                                }
                                                if (laststart) {
                                                  laststart += incr___12;
                                                }
                                                if (pending_exact) {
                                                  pending_exact += incr___12;
                                                }
                                              }
                                              goto while_65_break;
                                            }
                                            while_65_break:  ;
                                            }
                                          }
                                          while_64_break:  ;
                                          }
                                          b += 3;
                                          laststart = (unsigned char *)0;
                                          begalt = b;
                                          goto switch_52_break;
                                          switch_52_123:  
                                          if (! (syntax & (((((((((1UL << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1))) {
                                            goto normal_backslash;
                                          } else {
                                            if (syntax & ((((((((((((1UL << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1)) {
                                              goto normal_backslash;
                                            }
                                          }
                                          handle_interval: 
                                          lower_bound = -1;
                                          upper_bound = -1;
                                          beg_interval = p;
                                          if ((unsigned long )p == (unsigned long )pend) {
                                            goto invalid_interval;
                                          }
                                          {
                                          while (1) {
                                            while_66_continue:  ;
                                            if (! ((unsigned long )p != (unsigned long )pend)) {
                                              goto while_66_break;
                                            }
                                            {
                                            while (1) {
                                              while_67_continue:  ;
                                              if ((unsigned long )p == (unsigned long )pend) {
                                                goto __dyc_dummy_label;
                                              }
                                              tmp___506 = p;
                                              p ++;
                                              c = (unsigned char )*tmp___506;
                                              if (translate) {
                                                c = (unsigned char )*(translate + c);
                                              }
                                              goto while_67_break;
                                            }
                                            while_67_break:  ;
                                            }
                                            if ((int )c < 48) {
                                              goto while_66_break;
                                            } else {
                                              if ((int )c > 57) {
                                                goto while_66_break;
                                              }
                                            }
                                            if (lower_bound <= 32767) {
                                              if (lower_bound < 0) {
                                                lower_bound = 0;
                                              }
                                              lower_bound = (lower_bound * 10 + (int )c) - 48;
                                            }
                                          }
                                          while_66_break:  ;
                                          }
                                          if ((int )c == 44) {
                                            {
                                            while (1) {
                                              while_68_continue:  ;
                                              if (! ((unsigned long )p != (unsigned long )pend)) {
                                                goto while_68_break;
                                              }
                                              {
                                              while (1) {
                                                while_69_continue:  ;
                                                if ((unsigned long )p == (unsigned long )pend) {
                                                  goto __dyc_dummy_label;
                                                }
                                                tmp___507 = p;
                                                p ++;
                                                c = (unsigned char )*tmp___507;
                                                if (translate) {
                                                  c = (unsigned char )*(translate + c);
                                                }
                                                goto while_69_break;
                                              }
                                              while_69_break:  ;
                                              }
                                              if ((int )c < 48) {
                                                goto while_68_break;
                                              } else {
                                                if ((int )c > 57) {
                                                  goto while_68_break;
                                                }
                                              }
                                              if (upper_bound <= 32767) {
                                                if (upper_bound < 0) {
                                                  upper_bound = 0;
                                                }
                                                upper_bound = (upper_bound * 10 + (int )c) - 48;
                                              }
                                            }
                                            while_68_break:  ;
                                            }
                                            if (upper_bound < 0) {
                                              upper_bound = 32767;
                                            }
                                          } else {
                                            upper_bound = lower_bound;
                                          }
                                          if (0 <= lower_bound) {
                                            if (! (lower_bound <= upper_bound)) {
                                              goto invalid_interval;
                                            }
                                          } else {
                                            goto invalid_interval;
                                          }
                                          if (! (syntax & ((((((((((((1UL << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1))) {
                                            if ((int )c != 92) {
                                              goto invalid_interval;
                                            } else {
                                              if ((unsigned long )p == (unsigned long )pend) {
                                                goto invalid_interval;
                                              }
                                            }
                                            {
                                            while (1) {
                                              while_70_continue:  ;
                                              if ((unsigned long )p == (unsigned long )pend) {
                                                goto __dyc_dummy_label;
                                              }
                                              tmp___508 = p;
                                              p ++;
                                              c = (unsigned char )*tmp___508;
                                              if (translate) {
                                                c = (unsigned char )*(translate + c);
                                              }
                                              goto while_70_break;
                                            }
                                            while_70_break:  ;
                                            }
                                          }
                                          if ((int )c != 125) {
                                            goto invalid_interval;
                                          }
                                          if (! laststart) {
                                            if (syntax & (((((1UL << 1) << 1) << 1) << 1) << 1)) {
                                              if (! (syntax & (((((((((((((((((((((1UL << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1))) {
                                                {

                                                }
                                                goto __dyc_dummy_label;
                                              } else {
                                                goto _L___79;
                                              }
                                            } else {
                                              _L___79:  
                                              if (syntax & ((((1UL << 1) << 1) << 1) << 1)) {
                                                laststart = b;
                                              } else {
                                                goto unfetch_interval;
                                              }
                                            }
                                          }
                                          if (32767 < upper_bound) {
                                            {

                                            }
                                            goto __dyc_dummy_label;
                                          }
                                          if (upper_bound == 0) {
                                            {
                                            while (1) {
                                              while_71_continue:  ;
                                              if (! ((unsigned long )((b - bufp->buffer) + 3) > bufp->allocated)) {
                                                goto while_71_break;
                                              }
                                              {
                                              while (1) {
                                                while_72_continue:  ;
                                                old_buffer___13 = bufp->buffer;
                                                if (bufp->allocated == (unsigned long )(1L << 16)) {
                                                  goto __dyc_dummy_label;
                                                }
                                                bufp->allocated <<= 1;
                                                if (bufp->allocated > (unsigned long )(1L << 16)) {
                                                  bufp->allocated = (unsigned long )(1L << 16);
                                                }
                                                {
                                                tmp___509 = __dyc_funcallvar_157;
                                                bufp->buffer = (unsigned char *)tmp___509;
                                                }
                                                if ((unsigned long )bufp->buffer == (unsigned long )((void *)0)) {
                                                  goto __dyc_dummy_label;
                                                }
                                                if ((unsigned long )old_buffer___13 != (unsigned long )bufp->buffer) {
                                                  incr___13 = (ptrdiff_t )(bufp->buffer - old_buffer___13);
                                                  b += incr___13;
                                                  begalt += incr___13;
                                                  if (fixup_alt_jump) {
                                                    fixup_alt_jump += incr___13;
                                                  }
                                                  if (laststart) {
                                                    laststart += incr___13;
                                                  }
                                                  if (pending_exact) {
                                                    pending_exact += incr___13;
                                                  }
                                                }
                                                goto while_72_break;
                                              }
                                              while_72_break:  ;
                                              }
                                            }
                                            while_71_break:  ;
                                            }
                                            {

                                            b += 3;
                                            }
                                          } else {
                                            nbytes = (unsigned int )(10 + (upper_bound > 1) * 10);
                                            {
                                            while (1) {
                                              while_73_continue:  ;
                                              if (! ((unsigned long )((unsigned int )(b - bufp->buffer) + nbytes) > bufp->allocated)) {
                                                goto while_73_break;
                                              }
                                              {
                                              while (1) {
                                                while_74_continue:  ;
                                                old_buffer___14 = bufp->buffer;
                                                if (bufp->allocated == (unsigned long )(1L << 16)) {
                                                  goto __dyc_dummy_label;
                                                }
                                                bufp->allocated <<= 1;
                                                if (bufp->allocated > (unsigned long )(1L << 16)) {
                                                  bufp->allocated = (unsigned long )(1L << 16);
                                                }
                                                {
                                                tmp___510 = __dyc_funcallvar_158;
                                                bufp->buffer = (unsigned char *)tmp___510;
                                                }
                                                if ((unsigned long )bufp->buffer == (unsigned long )((void *)0)) {
                                                  goto __dyc_dummy_label;
                                                }
                                                if ((unsigned long )old_buffer___14 != (unsigned long )bufp->buffer) {
                                                  incr___14 = (ptrdiff_t )(bufp->buffer - old_buffer___14);
                                                  b += incr___14;
                                                  begalt += incr___14;
                                                  if (fixup_alt_jump) {
                                                    fixup_alt_jump += incr___14;
                                                  }
                                                  if (laststart) {
                                                    laststart += incr___14;
                                                  }
                                                  if (pending_exact) {
                                                    pending_exact += incr___14;
                                                  }
                                                }
                                                goto while_74_break;
                                              }
                                              while_74_break:  ;
                                              }
                                            }
                                            while_73_break:  ;
                                            }
                                            {

                                            b += 5;

                                            b += 5;
                                            }
                                            if (upper_bound > 1) {
                                              {

                                              b += 5;

                                              b += 5;
                                              }
                                            }
                                          }
                                          pending_exact = (unsigned char *)0;
                                          goto switch_52_break;
                                          invalid_interval: 
                                          if (! (syntax & (((((((((((((((((((((1UL << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1))) {
                                            {

                                            }
                                            if ((unsigned long )p == (unsigned long )pend) {
                                              tmp___511 = 9;
                                            } else {
                                              tmp___511 = 10;
                                            }
                                            goto __dyc_dummy_label;
                                          }
                                          unfetch_interval: 
                                          p = beg_interval;
                                          c = (unsigned char )'{';
                                          if (syntax & ((((((((((((1UL << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1)) {
                                            goto __dyc_dummy_label;
                                          } else {
                                            goto normal_backslash;
                                          }
                                          switch_52_119:  
                                          if (syntax & (((((((((((((((((((1UL << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1)) {
                                            goto __dyc_dummy_label;
                                          }
                                          laststart = b;
                                          {
                                          while (1) {
                                            while_75_continue:  ;
                                            {
                                            while (1) {
                                              while_76_continue:  ;
                                              if (! ((unsigned long )((b - bufp->buffer) + 1) > bufp->allocated)) {
                                                goto while_76_break;
                                              }
                                              {
                                              while (1) {
                                                while_77_continue:  ;
                                                old_buffer___15 = bufp->buffer;
                                                if (bufp->allocated == (unsigned long )(1L << 16)) {
                                                  goto __dyc_dummy_label;
                                                }
                                                bufp->allocated <<= 1;
                                                if (bufp->allocated > (unsigned long )(1L << 16)) {
                                                  bufp->allocated = (unsigned long )(1L << 16);
                                                }
                                                {
                                                tmp___512 = __dyc_funcallvar_159;
                                                bufp->buffer = (unsigned char *)tmp___512;
                                                }
                                                if ((unsigned long )bufp->buffer == (unsigned long )((void *)0)) {
                                                  goto __dyc_dummy_label;
                                                }
                                                if ((unsigned long )old_buffer___15 != (unsigned long )bufp->buffer) {
                                                  incr___15 = (ptrdiff_t )(bufp->buffer - old_buffer___15);
                                                  b += incr___15;
                                                  begalt += incr___15;
                                                  if (fixup_alt_jump) {
                                                    fixup_alt_jump += incr___15;
                                                  }
                                                  if (laststart) {
                                                    laststart += incr___15;
                                                  }
                                                  if (pending_exact) {
                                                    pending_exact += incr___15;
                                                  }
                                                }
                                                goto while_77_break;
                                              }
                                              while_77_break:  ;
                                              }
                                            }
                                            while_76_break:  ;
                                            }
                                            tmp___513 = b;
                                            b ++;
                                            *tmp___513 = (unsigned char)24;
                                            goto while_75_break;
                                          }
                                          while_75_break:  ;
                                          }
                                          goto switch_52_break;
                                          switch_52_87:  
                                          if (syntax & (((((((((((((((((((1UL << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1)) {
                                            goto __dyc_dummy_label;
                                          }
                                          laststart = b;
                                          {
                                          while (1) {
                                            while_78_continue:  ;
                                            {
                                            while (1) {
                                              while_79_continue:  ;
                                              if (! ((unsigned long )((b - bufp->buffer) + 1) > bufp->allocated)) {
                                                goto while_79_break;
                                              }
                                              {
                                              while (1) {
                                                while_80_continue:  ;
                                                old_buffer___16 = bufp->buffer;
                                                if (bufp->allocated == (unsigned long )(1L << 16)) {
                                                  goto __dyc_dummy_label;
                                                }
                                                bufp->allocated <<= 1;
                                                if (bufp->allocated > (unsigned long )(1L << 16)) {
                                                  bufp->allocated = (unsigned long )(1L << 16);
                                                }
                                                {
                                                tmp___514 = __dyc_funcallvar_160;
                                                bufp->buffer = (unsigned char *)tmp___514;
                                                }
                                                if ((unsigned long )bufp->buffer == (unsigned long )((void *)0)) {
                                                  goto __dyc_dummy_label;
                                                }
                                                if ((unsigned long )old_buffer___16 != (unsigned long )bufp->buffer) {
                                                  incr___16 = (ptrdiff_t )(bufp->buffer - old_buffer___16);
                                                  b += incr___16;
                                                  begalt += incr___16;
                                                  if (fixup_alt_jump) {
                                                    fixup_alt_jump += incr___16;
                                                  }
                                                  if (laststart) {
                                                    laststart += incr___16;
                                                  }
                                                  if (pending_exact) {
                                                    pending_exact += incr___16;
                                                  }
                                                }
                                                goto while_80_break;
                                              }
                                              while_80_break:  ;
                                              }
                                            }
                                            while_79_break:  ;
                                            }
                                            tmp___515 = b;
                                            b ++;
                                            *tmp___515 = (unsigned char)25;
                                            goto while_78_break;
                                          }
                                          while_78_break:  ;
                                          }
                                          goto switch_52_break;
                                          switch_52_60:  
                                          if (syntax & (((((((((((((((((((1UL << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1)) {
                                            goto __dyc_dummy_label;
                                          }
                                          {
                                          while (1) {
                                            while_81_continue:  ;
                                            {
                                            while (1) {
                                              while_82_continue:  ;
                                              if (! ((unsigned long )((b - bufp->buffer) + 1) > bufp->allocated)) {
                                                goto while_82_break;
                                              }
                                              {
                                              while (1) {
                                                while_83_continue:  ;
                                                old_buffer___17 = bufp->buffer;
                                                if (bufp->allocated == (unsigned long )(1L << 16)) {
                                                  goto __dyc_dummy_label;
                                                }
                                                bufp->allocated <<= 1;
                                                if (bufp->allocated > (unsigned long )(1L << 16)) {
                                                  bufp->allocated = (unsigned long )(1L << 16);
                                                }
                                                {
                                                tmp___516 = __dyc_funcallvar_161;
                                                bufp->buffer = (unsigned char *)tmp___516;
                                                }
                                                if ((unsigned long )bufp->buffer == (unsigned long )((void *)0)) {
                                                  goto __dyc_dummy_label;
                                                }
                                                if ((unsigned long )old_buffer___17 != (unsigned long )bufp->buffer) {
                                                  incr___17 = (ptrdiff_t )(bufp->buffer - old_buffer___17);
                                                  b += incr___17;
                                                  begalt += incr___17;
                                                  if (fixup_alt_jump) {
                                                    fixup_alt_jump += incr___17;
                                                  }
                                                  if (laststart) {
                                                    laststart += incr___17;
                                                  }
                                                  if (pending_exact) {
                                                    pending_exact += incr___17;
                                                  }
                                                }
                                                goto while_83_break;
                                              }
                                              while_83_break:  ;
                                              }
                                            }
                                            while_82_break:  ;
                                            }
                                            tmp___517 = b;
                                            b ++;
                                            *tmp___517 = (unsigned char)26;
                                            goto while_81_break;
                                          }
                                          while_81_break:  ;
                                          }
                                          goto switch_52_break;
                                          switch_52_62:  
                                          if (syntax & (((((((((((((((((((1UL << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1)) {
                                            goto __dyc_dummy_label;
                                          }
                                          {
                                          while (1) {
                                            while_84_continue:  ;
                                            {
                                            while (1) {
                                              while_85_continue:  ;
                                              if (! ((unsigned long )((b - bufp->buffer) + 1) > bufp->allocated)) {
                                                goto while_85_break;
                                              }
                                              {
                                              while (1) {
                                                while_86_continue:  ;
                                                old_buffer___18 = bufp->buffer;
                                                if (bufp->allocated == (unsigned long )(1L << 16)) {
                                                  goto __dyc_dummy_label;
                                                }
                                                bufp->allocated <<= 1;
                                                if (bufp->allocated > (unsigned long )(1L << 16)) {
                                                  bufp->allocated = (unsigned long )(1L << 16);
                                                }
                                                {
                                                tmp___518 = __dyc_funcallvar_162;
                                                bufp->buffer = (unsigned char *)tmp___518;
                                                }
                                                if ((unsigned long )bufp->buffer == (unsigned long )((void *)0)) {
                                                  goto __dyc_dummy_label;
                                                }
                                                if ((unsigned long )old_buffer___18 != (unsigned long )bufp->buffer) {
                                                  incr___18 = (ptrdiff_t )(bufp->buffer - old_buffer___18);
                                                  b += incr___18;
                                                  begalt += incr___18;
                                                  if (fixup_alt_jump) {
                                                    fixup_alt_jump += incr___18;
                                                  }
                                                  if (laststart) {
                                                    laststart += incr___18;
                                                  }
                                                  if (pending_exact) {
                                                    pending_exact += incr___18;
                                                  }
                                                }
                                                goto while_86_break;
                                              }
                                              while_86_break:  ;
                                              }
                                            }
                                            while_85_break:  ;
                                            }
                                            tmp___519 = b;
                                            b ++;
                                            *tmp___519 = (unsigned char)27;
                                            goto while_84_break;
                                          }
                                          while_84_break:  ;
                                          }
                                          goto switch_52_break;
                                          switch_52_98:  
                                          if (syntax & (((((((((((((((((((1UL << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1)) {
                                            goto __dyc_dummy_label;
                                          }
                                          {
                                          while (1) {
                                            while_87_continue:  ;
                                            {
                                            while (1) {
                                              while_88_continue:  ;
                                              if (! ((unsigned long )((b - bufp->buffer) + 1) > bufp->allocated)) {
                                                goto while_88_break;
                                              }
                                              {
                                              while (1) {
                                                while_89_continue:  ;
                                                old_buffer___19 = bufp->buffer;
                                                if (bufp->allocated == (unsigned long )(1L << 16)) {
                                                  goto __dyc_dummy_label;
                                                }
                                                bufp->allocated <<= 1;
                                                if (bufp->allocated > (unsigned long )(1L << 16)) {
                                                  bufp->allocated = (unsigned long )(1L << 16);
                                                }
                                                {
                                                tmp___520 = __dyc_funcallvar_163;
                                                bufp->buffer = (unsigned char *)tmp___520;
                                                }
                                                if ((unsigned long )bufp->buffer == (unsigned long )((void *)0)) {
                                                  goto __dyc_dummy_label;
                                                }
                                                if ((unsigned long )old_buffer___19 != (unsigned long )bufp->buffer) {
                                                  incr___19 = (ptrdiff_t )(bufp->buffer - old_buffer___19);
                                                  b += incr___19;
                                                  begalt += incr___19;
                                                  if (fixup_alt_jump) {
                                                    fixup_alt_jump += incr___19;
                                                  }
                                                  if (laststart) {
                                                    laststart += incr___19;
                                                  }
                                                  if (pending_exact) {
                                                    pending_exact += incr___19;
                                                  }
                                                }
                                                goto while_89_break;
                                              }
                                              while_89_break:  ;
                                              }
                                            }
                                            while_88_break:  ;
                                            }
                                            tmp___521 = b;
                                            b ++;
                                            *tmp___521 = (unsigned char)28;
                                            goto while_87_break;
                                          }
                                          while_87_break:  ;
                                          }
                                          goto switch_52_break;
                                          switch_52_66:  
                                          if (syntax & (((((((((((((((((((1UL << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1)) {
                                            goto __dyc_dummy_label;
                                          }
                                          {
                                          while (1) {
                                            while_90_continue:  ;
                                            {
                                            while (1) {
                                              while_91_continue:  ;
                                              if (! ((unsigned long )((b - bufp->buffer) + 1) > bufp->allocated)) {
                                                goto while_91_break;
                                              }
                                              {
                                              while (1) {
                                                while_92_continue:  ;
                                                old_buffer___20 = bufp->buffer;
                                                if (bufp->allocated == (unsigned long )(1L << 16)) {
                                                  goto __dyc_dummy_label;
                                                }
                                                bufp->allocated <<= 1;
                                                if (bufp->allocated > (unsigned long )(1L << 16)) {
                                                  bufp->allocated = (unsigned long )(1L << 16);
                                                }
                                                {
                                                tmp___522 = __dyc_funcallvar_164;
                                                bufp->buffer = (unsigned char *)tmp___522;
                                                }
                                                if ((unsigned long )bufp->buffer == (unsigned long )((void *)0)) {
                                                  goto __dyc_dummy_label;
                                                }
                                                if ((unsigned long )old_buffer___20 != (unsigned long )bufp->buffer) {
                                                  incr___20 = (ptrdiff_t )(bufp->buffer - old_buffer___20);
                                                  b += incr___20;
                                                  begalt += incr___20;
                                                  if (fixup_alt_jump) {
                                                    fixup_alt_jump += incr___20;
                                                  }
                                                  if (laststart) {
                                                    laststart += incr___20;
                                                  }
                                                  if (pending_exact) {
                                                    pending_exact += incr___20;
                                                  }
                                                }
                                                goto while_92_break;
                                              }
                                              while_92_break:  ;
                                              }
                                            }
                                            while_91_break:  ;
                                            }
                                            tmp___523 = b;
                                            b ++;
                                            *tmp___523 = (unsigned char)29;
                                            goto while_90_break;
                                          }
                                          while_90_break:  ;
                                          }
                                          goto switch_52_break;
                                          switch_52_96:  
                                          if (syntax & (((((((((((((((((((1UL << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1)) {
                                            goto __dyc_dummy_label;
                                          }
                                          {
                                          while (1) {
                                            while_93_continue:  ;
                                            {
                                            while (1) {
                                              while_94_continue:  ;
                                              if (! ((unsigned long )((b - bufp->buffer) + 1) > bufp->allocated)) {
                                                goto while_94_break;
                                              }
                                              {
                                              while (1) {
                                                while_95_continue:  ;
                                                old_buffer___21 = bufp->buffer;
                                                if (bufp->allocated == (unsigned long )(1L << 16)) {
                                                  goto __dyc_dummy_label;
                                                }
                                                bufp->allocated <<= 1;
                                                if (bufp->allocated > (unsigned long )(1L << 16)) {
                                                  bufp->allocated = (unsigned long )(1L << 16);
                                                }
                                                {
                                                tmp___524 = __dyc_funcallvar_165;
                                                bufp->buffer = (unsigned char *)tmp___524;
                                                }
                                                if ((unsigned long )bufp->buffer == (unsigned long )((void *)0)) {
                                                  goto __dyc_dummy_label;
                                                }
                                                if ((unsigned long )old_buffer___21 != (unsigned long )bufp->buffer) {
                                                  incr___21 = (ptrdiff_t )(bufp->buffer - old_buffer___21);
                                                  b += incr___21;
                                                  begalt += incr___21;
                                                  if (fixup_alt_jump) {
                                                    fixup_alt_jump += incr___21;
                                                  }
                                                  if (laststart) {
                                                    laststart += incr___21;
                                                  }
                                                  if (pending_exact) {
                                                    pending_exact += incr___21;
                                                  }
                                                }
                                                goto while_95_break;
                                              }
                                              while_95_break:  ;
                                              }
                                            }
                                            while_94_break:  ;
                                            }
                                            tmp___525 = b;
                                            b ++;
                                            *tmp___525 = (unsigned char)11;
                                            goto while_93_break;
                                          }
                                          while_93_break:  ;
                                          }
                                          goto switch_52_break;
                                          switch_52_39:  
                                          if (syntax & (((((((((((((((((((1UL << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1)) {
                                            goto __dyc_dummy_label;
                                          }
                                          {
                                          while (1) {
                                            while_96_continue:  ;
                                            {
                                            while (1) {
                                              while_97_continue:  ;
                                              if (! ((unsigned long )((b - bufp->buffer) + 1) > bufp->allocated)) {
                                                goto while_97_break;
                                              }
                                              {
                                              while (1) {
                                                while_98_continue:  ;
                                                old_buffer___22 = bufp->buffer;
                                                if (bufp->allocated == (unsigned long )(1L << 16)) {
                                                  goto __dyc_dummy_label;
                                                }
                                                bufp->allocated <<= 1;
                                                if (bufp->allocated > (unsigned long )(1L << 16)) {
                                                  bufp->allocated = (unsigned long )(1L << 16);
                                                }
                                                {
                                                tmp___526 = __dyc_funcallvar_166;
                                                bufp->buffer = (unsigned char *)tmp___526;
                                                }
                                                if ((unsigned long )bufp->buffer == (unsigned long )((void *)0)) {
                                                  goto __dyc_dummy_label;
                                                }
                                                if ((unsigned long )old_buffer___22 != (unsigned long )bufp->buffer) {
                                                  incr___22 = (ptrdiff_t )(bufp->buffer - old_buffer___22);
                                                  b += incr___22;
                                                  begalt += incr___22;
                                                  if (fixup_alt_jump) {
                                                    fixup_alt_jump += incr___22;
                                                  }
                                                  if (laststart) {
                                                    laststart += incr___22;
                                                  }
                                                  if (pending_exact) {
                                                    pending_exact += incr___22;
                                                  }
                                                }
                                                goto while_98_break;
                                              }
                                              while_98_break:  ;
                                              }
                                            }
                                            while_97_break:  ;
                                            }
                                            tmp___527 = b;
                                            b ++;
                                            *tmp___527 = (unsigned char)12;
                                            goto while_96_break;
                                          }
                                          while_96_break:  ;
                                          }
                                          goto switch_52_break;
                                          switch_52_49:  
                                          switch_52_50:  
                                          switch_52_51:  
                                          switch_52_52:  
                                          switch_52_53:  
                                          switch_52_54:  
                                          switch_52_55:  
                                          switch_52_56:  
                                          switch_52_57:  
                                          if (syntax & ((((((((((((((1UL << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1)) {
                                            goto __dyc_dummy_label;
                                          }
                                          c1 = (unsigned char )((int )c - 48);
                                          if ((regnum_t )c1 > regnum) {
                                            {

                                            }
                                            goto __dyc_dummy_label;
                                          }
                                          {
                                          tmp___528 = __dyc_funcallvar_167;
                                          }
                                          if (tmp___528) {
                                            goto __dyc_dummy_label;
                                          }
                                          laststart = b;
                                          {
                                          while (1) {
                                            while_99_continue:  ;
                                            {
                                            while (1) {
                                              while_100_continue:  ;
                                              if (! ((unsigned long )((b - bufp->buffer) + 2) > bufp->allocated)) {
                                                goto while_100_break;
                                              }
                                              {
                                              while (1) {
                                                while_101_continue:  ;
                                                old_buffer___23 = bufp->buffer;
                                                if (bufp->allocated == (unsigned long )(1L << 16)) {
                                                  goto __dyc_dummy_label;
                                                }
                                                bufp->allocated <<= 1;
                                                if (bufp->allocated > (unsigned long )(1L << 16)) {
                                                  bufp->allocated = (unsigned long )(1L << 16);
                                                }
                                                {
                                                tmp___529 = __dyc_funcallvar_168;
                                                bufp->buffer = (unsigned char *)tmp___529;
                                                }
                                                if ((unsigned long )bufp->buffer == (unsigned long )((void *)0)) {
                                                  goto __dyc_dummy_label;
                                                }
                                                if ((unsigned long )old_buffer___23 != (unsigned long )bufp->buffer) {
                                                  incr___23 = (ptrdiff_t )(bufp->buffer - old_buffer___23);
                                                  b += incr___23;
                                                  begalt += incr___23;
                                                  if (fixup_alt_jump) {
                                                    fixup_alt_jump += incr___23;
                                                  }
                                                  if (laststart) {
                                                    laststart += incr___23;
                                                  }
                                                  if (pending_exact) {
                                                    pending_exact += incr___23;
                                                  }
                                                }
                                                goto while_101_break;
                                              }
                                              while_101_break:  ;
                                              }
                                            }
                                            while_100_break:  ;
                                            }
                                            tmp___530 = b;
                                            b ++;
                                            *tmp___530 = (unsigned char)8;
                                            tmp___531 = b;
                                            b ++;
                                            *tmp___531 = c1;
                                            goto while_99_break;
                                          }
                                          while_99_break:  ;
                                          }
                                          goto switch_52_break;
                                          switch_52_43:  
                                          switch_52_63:  
                                          if (syntax & (1UL << 1)) {
                                            goto __dyc_dummy_label;
                                          } else {
                                            goto normal_backslash;
                                          }
                                          switch_52_default:  ;
                                          normal_backslash: 
                                          if (translate) {
                                            c = (unsigned char )*(translate + c);
                                          } else {
                                            c = (unsigned char )((char )c);
                                          }
                                          goto __dyc_dummy_label;
                                        } else {
                                          switch_52_break:  ;
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
  __dyc_printpre_byte(c);
  __dyc_print_ptr__char(b);
  __dyc_print_ptr__char(pending_exact);
  __dyc_print_ptr__char(laststart);
  __dyc_print_ptr__char(begalt);
  __dyc_print_ptr__char(fixup_alt_jump);
  __dyc_print_ptr__char(old_buffer___15);
  __dyc_print_ptr__char(old_buffer___16);
  __dyc_print_ptr__char(old_buffer___17);
  __dyc_print_ptr__char(old_buffer___18);
  __dyc_print_ptr__char(old_buffer___19);
  __dyc_print_ptr__char(old_buffer___20);
  __dyc_print_ptr__char(old_buffer___21);
  __dyc_print_ptr__char(old_buffer___22);
  __dyc_print_ptr__char(old_buffer___23);
}
}
