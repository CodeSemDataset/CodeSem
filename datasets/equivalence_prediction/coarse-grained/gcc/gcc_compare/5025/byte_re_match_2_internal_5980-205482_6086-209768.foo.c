#include "../../include/dycfoo.h"
#include "../../include/regex.i.hd.c.h"
void __dyc_foo(void) 
{ char byte_reg_unset_dummy ;
  int mcnt ;
  char const   *end_match_1 ;
  char const   *d ;
  char const   *dend ;
  size_t num_regs ;
  char const   **regstart ;
  char const   **regend ;
  char const   **old_regstart ;
  char const   **old_regend ;
  byte_register_info_type *reg_info ;
  char const   **best_regstart ;
  char const   **best_regend ;
  char const   **reg_dummy ;
  byte_register_info_type *reg_info_dummy ;
  void *tmp___10 ;
  void *tmp___11 ;
  void *tmp___12 ;
  void *tmp___13 ;
  int tmp___14 ;
  int tmp___15 ;
  size_t tmp___16 ;
  char const   *tmp___17 ;
  struct re_pattern_buffer *bufp ;
  char const   *string1 ;
  int size1 ;
  char const   *string2 ;
  int pos ;
  struct re_registers *regs ;
  void *__dyc_funcallvar_11 ;
  void *__dyc_funcallvar_12 ;
  void *__dyc_funcallvar_13 ;
  void *__dyc_funcallvar_14 ;

  {
  byte_reg_unset_dummy = (char )__dyc_readpre_byte();
  end_match_1 = (char const   *)__dyc_read_ptr__char();
  d = (char const   *)__dyc_read_ptr__char();
  dend = (char const   *)__dyc_read_ptr__char();
  num_regs = (size_t )__dyc_readpre_byte();
  regstart = (char const   **)__dyc_read_ptr__ptr__char();
  regend = (char const   **)__dyc_read_ptr__ptr__char();
  old_regstart = (char const   **)__dyc_read_ptr__ptr__char();
  old_regend = (char const   **)__dyc_read_ptr__ptr__char();
  reg_info = __dyc_read_ptr__typdef_byte_register_info_type();
  best_regstart = (char const   **)__dyc_read_ptr__ptr__char();
  best_regend = (char const   **)__dyc_read_ptr__ptr__char();
  reg_dummy = (char const   **)__dyc_read_ptr__ptr__char();
  reg_info_dummy = __dyc_read_ptr__typdef_byte_register_info_type();
  bufp = __dyc_read_ptr__comp_30re_pattern_buffer();
  string1 = (char const   *)__dyc_read_ptr__char();
  size1 = __dyc_readpre_byte();
  string2 = (char const   *)__dyc_read_ptr__char();
  pos = __dyc_readpre_byte();
  regs = __dyc_read_ptr__comp_31re_registers();
  __dyc_funcallvar_11 = __dyc_read_ptr__void();
  __dyc_funcallvar_12 = __dyc_read_ptr__void();
  __dyc_funcallvar_13 = __dyc_read_ptr__void();
  __dyc_funcallvar_14 = __dyc_read_ptr__void();
  mcnt = 0;
  tmp___10 = 0;
  tmp___11 = 0;
  tmp___12 = 0;
  tmp___13 = 0;
  tmp___14 = 0;
  tmp___15 = 0;
  tmp___16 = 0;
  tmp___17 = 0;
  if (regs) {
    if (! bufp->no_sub) {
      if (bufp->regs_allocated == 0U) {
        if (30UL > num_regs + 1UL) {
          regs->num_regs = 30U;
        } else {
          regs->num_regs = (unsigned int )(num_regs + 1UL);
        }
        {
        tmp___10 = __dyc_funcallvar_11;
        regs->start = (xregoff_t *)tmp___10;
        tmp___11 = __dyc_funcallvar_12;
        regs->end = (xregoff_t *)tmp___11;
        }
        if ((unsigned long )regs->start == (unsigned long )((void *)0)) {
          goto _L___9;
        } else {
          if ((unsigned long )regs->end == (unsigned long )((void *)0)) {
            _L___9:  
            {
            while (1) {
              while_146_continue:  ;
              if (regstart) {

              }
              regstart = (char const   **)((void *)0);
              if (regend) {

              }
              regend = (char const   **)((void *)0);
              if (old_regstart) {

              }
              old_regstart = (char const   **)((void *)0);
              if (old_regend) {

              }
              old_regend = (char const   **)((void *)0);
              if (best_regstart) {

              }
              best_regstart = (char const   **)((void *)0);
              if (best_regend) {

              }
              best_regend = (char const   **)((void *)0);
              if (reg_info) {

              }
              reg_info = (byte_register_info_type *)((void *)0);
              if (reg_dummy) {

              }
              reg_dummy = (char const   **)((void *)0);
              if (reg_info_dummy) {

              }
              reg_info_dummy = (byte_register_info_type *)((void *)0);
              goto while_146_break;
            }
            while_146_break:  ;
            }
            goto __dyc_dummy_label;
          }
        }
        bufp->regs_allocated = 1U;
      } else {
        if (bufp->regs_allocated == 1U) {
          if ((size_t )regs->num_regs < num_regs + 1UL) {
            {
            regs->num_regs = (unsigned int )(num_regs + 1UL);
            tmp___12 = __dyc_funcallvar_13;
            regs->start = (xregoff_t *)tmp___12;
            tmp___13 = __dyc_funcallvar_14;
            regs->end = (xregoff_t *)tmp___13;
            }
            if ((unsigned long )regs->start == (unsigned long )((void *)0)) {
              goto _L___10;
            } else {
              if ((unsigned long )regs->end == (unsigned long )((void *)0)) {
                _L___10:  
                {
                while (1) {
                  while_147_continue:  ;
                  if (regstart) {

                  }
                  regstart = (char const   **)((void *)0);
                  if (regend) {

                  }
                  regend = (char const   **)((void *)0);
                  if (old_regstart) {

                  }
                  old_regstart = (char const   **)((void *)0);
                  if (old_regend) {

                  }
                  old_regend = (char const   **)((void *)0);
                  if (best_regstart) {

                  }
                  best_regstart = (char const   **)((void *)0);
                  if (best_regend) {

                  }
                  best_regend = (char const   **)((void *)0);
                  if (reg_info) {

                  }
                  reg_info = (byte_register_info_type *)((void *)0);
                  if (reg_dummy) {

                  }
                  reg_dummy = (char const   **)((void *)0);
                  if (reg_info_dummy) {

                  }
                  reg_info_dummy = (byte_register_info_type *)((void *)0);
                  goto while_147_break;
                }
                while_147_break:  ;
                }
                goto __dyc_dummy_label;
              }
            }
          }
        }
      }
      if (regs->num_regs > 0U) {
        *(regs->start + 0) = pos;
        if ((unsigned long )dend == (unsigned long )end_match_1) {
          *(regs->end + 0) = d - string1;
        } else {
          *(regs->end + 0) = (d - string2) + size1;
        }
      }
      mcnt = 1;
      {
      while (1) {
        while_148_continue:  ;
        if (num_regs < (size_t )regs->num_regs) {
          tmp___16 = num_regs;
        } else {
          tmp___16 = (unsigned long )regs->num_regs;
        }
        if (! ((size_t )((unsigned int )mcnt) < tmp___16)) {
          goto while_148_break;
        }
        if ((unsigned long )*(regstart + mcnt) == (unsigned long )(& byte_reg_unset_dummy)) {
          *(regs->end + mcnt) = -1;
          *(regs->start + mcnt) = *(regs->end + mcnt);
        } else {
          if ((unsigned long )*(regend + mcnt) == (unsigned long )(& byte_reg_unset_dummy)) {
            *(regs->end + mcnt) = -1;
            *(regs->start + mcnt) = *(regs->end + mcnt);
          } else {
            if (size1) {
              if ((unsigned long )string1 <= (unsigned long )*(regstart + mcnt)) {
                if ((unsigned long )*(regstart + mcnt) <= (unsigned long )(string1 + size1)) {
                  tmp___14 = *(regstart + mcnt) - string1;
                } else {
                  tmp___14 = (*(regstart + mcnt) - string2) + size1;
                }
              } else {
                tmp___14 = (*(regstart + mcnt) - string2) + size1;
              }
            } else {
              tmp___14 = (*(regstart + mcnt) - string2) + size1;
            }
            *(regs->start + mcnt) = tmp___14;
            if (size1) {
              if ((unsigned long )string1 <= (unsigned long )*(regend + mcnt)) {
                if ((unsigned long )*(regend + mcnt) <= (unsigned long )(string1 + size1)) {
                  tmp___15 = *(regend + mcnt) - string1;
                } else {
                  tmp___15 = (*(regend + mcnt) - string2) + size1;
                }
              } else {
                tmp___15 = (*(regend + mcnt) - string2) + size1;
              }
            } else {
              tmp___15 = (*(regend + mcnt) - string2) + size1;
            }
            *(regs->end + mcnt) = tmp___15;
          }
        }
        mcnt ++;
      }
      while_148_break:  ;
      }
      mcnt = (int )num_regs;
      {
      while (1) {
        while_149_continue:  ;
        if (! ((unsigned int )mcnt < regs->num_regs)) {
          goto while_149_break;
        }
        *(regs->end + mcnt) = -1;
        *(regs->start + mcnt) = *(regs->end + mcnt);
        mcnt ++;
      }
      while_149_break:  ;
      }
    }
  }
  if ((unsigned long )dend == (unsigned long )end_match_1) {
    tmp___17 = string1;
  } else {
    tmp___17 = string2 - size1;
  }
  mcnt = (d - pos) - tmp___17;
  while (1) {
    while_150_continue:  ;
    if (regstart) {

    }
    regstart = (char const   **)((void *)0);
    if (regend) {

    }
    regend = (char const   **)((void *)0);
    if (old_regstart) {

    }
    old_regstart = (char const   **)((void *)0);
    if (old_regend) {

    }
    old_regend = (char const   **)((void *)0);
    if (best_regstart) {

    }
    best_regstart = (char const   **)((void *)0);
    if (best_regend) {

    }
    best_regend = (char const   **)((void *)0);
    if (reg_info) {

    }
    reg_info = (byte_register_info_type *)((void *)0);
    if (reg_dummy) {

    }
    reg_dummy = (char const   **)((void *)0);
    if (reg_info_dummy) {

    }
    reg_info_dummy = (byte_register_info_type *)((void *)0);
    goto while_150_break;
  }
  while_150_break:  ;
  goto __dyc_dummy_label;
  __dyc_dummy_label:  ;
  __dyc_printpre_byte(mcnt);
  __dyc_print_ptr__ptr__char(regstart);
  __dyc_print_ptr__ptr__char(regend);
  __dyc_print_ptr__ptr__char(old_regstart);
  __dyc_print_ptr__ptr__char(old_regend);
  __dyc_print_ptr__typdef_byte_register_info_type(reg_info);
  __dyc_print_ptr__ptr__char(best_regstart);
  __dyc_print_ptr__ptr__char(best_regend);
  __dyc_print_ptr__ptr__char(reg_dummy);
  __dyc_print_ptr__typdef_byte_register_info_type(reg_info_dummy);
}
}
