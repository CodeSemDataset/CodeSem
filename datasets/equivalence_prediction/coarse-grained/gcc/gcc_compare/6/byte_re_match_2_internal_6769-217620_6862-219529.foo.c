#include "../../include/dycfoo.h"
#include "../../include/regex.i.hd.c.h"
void __dyc_foo(void) 
{ char byte_reg_unset_dummy ;
  int mcnt ;
  char const   *end1 ;
  char const   *end2 ;
  char const   *end_match_1 ;
  char const   *end_match_2 ;
  char const   *d ;
  char const   *dend ;
  unsigned char *p ;
  char *translate ;
  active_reg_t lowest_active_reg ;
  active_reg_t highest_active_reg ;
  char const   **regstart ;
  char const   **regend ;
  byte_register_info_type *reg_info ;
  int set_regs_matched_done ;
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
  struct re_pattern_buffer *bufp ;
  char const   *string1 ;
  int size1 ;
  char const   *string2 ;
  int size2 ;
  int __dyc_funcallvar_18 ;
  int __dyc_funcallvar_19 ;

  {
  byte_reg_unset_dummy = (char )__dyc_readpre_byte();
  end1 = (char const   *)__dyc_read_ptr__char();
  end2 = (char const   *)__dyc_read_ptr__char();
  end_match_1 = (char const   *)__dyc_read_ptr__char();
  end_match_2 = (char const   *)__dyc_read_ptr__char();
  d = (char const   *)__dyc_read_ptr__char();
  dend = (char const   *)__dyc_read_ptr__char();
  p = __dyc_read_ptr__char();
  translate = (char *)__dyc_read_ptr__char();
  lowest_active_reg = (active_reg_t )__dyc_readpre_byte();
  highest_active_reg = (active_reg_t )__dyc_readpre_byte();
  regstart = (char const   **)__dyc_read_ptr__ptr__char();
  regend = (char const   **)__dyc_read_ptr__ptr__char();
  reg_info = __dyc_read_ptr__typdef_byte_register_info_type();
  set_regs_matched_done = __dyc_readpre_byte();
  bufp = __dyc_read_ptr__comp_30re_pattern_buffer();
  string1 = (char const   *)__dyc_read_ptr__char();
  size1 = __dyc_readpre_byte();
  string2 = (char const   *)__dyc_read_ptr__char();
  size2 = __dyc_readpre_byte();
  __dyc_funcallvar_18 = __dyc_readpre_byte();
  __dyc_funcallvar_19 = __dyc_readpre_byte();
  mcnt = 0;
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
  __dyc_dummy_label:  ;
  __dyc_printpre_byte(mcnt);
  __dyc_print_ptr__char(d);
  __dyc_print_ptr__char(p);
  __dyc_printpre_byte(set_regs_matched_done);
}
}
