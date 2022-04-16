#include "../../include/dycfoo.h"
#include "../../include/regex.i.hd.c.h"
void __dyc_foo(void) 
{ char re_syntax_table[256] ;
  char const   *end1 ;
  char const   *end2 ;
  char const   *end_match_2 ;
  char const   *d ;
  char const   *dend ;
  active_reg_t lowest_active_reg ;
  active_reg_t highest_active_reg ;
  byte_register_info_type *reg_info ;
  int set_regs_matched_done ;
  boolean prevchar ;
  boolean thischar ;
  int tmp___109 ;
  int tmp___111 ;
  boolean prevchar___0 ;
  boolean thischar___0 ;
  char const   *tmp___112 ;
  int tmp___114 ;
  int tmp___116 ;
  int tmp___118 ;
  char const   *tmp___119 ;
  int tmp___121 ;
  char const   *tmp___122 ;
  int tmp___124 ;
  int tmp___126 ;
  int tmp___128 ;
  active_reg_t r___5 ;
  int tmp___130 ;
  active_reg_t r___6 ;
  char const   *string1 ;
  int size1 ;
  char const   *string2 ;
  int size2 ;

  {
  end1 = (char const   *)__dyc_read_ptr__char();
  end2 = (char const   *)__dyc_read_ptr__char();
  end_match_2 = (char const   *)__dyc_read_ptr__char();
  d = (char const   *)__dyc_read_ptr__char();
  dend = (char const   *)__dyc_read_ptr__char();
  lowest_active_reg = (active_reg_t )__dyc_readpre_byte();
  highest_active_reg = (active_reg_t )__dyc_readpre_byte();
  reg_info = __dyc_read_ptr__typdef_byte_register_info_type();
  set_regs_matched_done = __dyc_readpre_byte();
  tmp___109 = __dyc_readpre_byte();
  string1 = (char const   *)__dyc_read_ptr__char();
  size1 = __dyc_readpre_byte();
  string2 = (char const   *)__dyc_read_ptr__char();
  size2 = __dyc_readpre_byte();
  prevchar = 0;
  thischar = 0;
  tmp___111 = 0;
  prevchar___0 = 0;
  thischar___0 = 0;
  tmp___112 = 0;
  tmp___114 = 0;
  tmp___116 = 0;
  tmp___118 = 0;
  tmp___119 = 0;
  tmp___121 = 0;
  tmp___122 = 0;
  tmp___124 = 0;
  tmp___126 = 0;
  tmp___128 = 0;
  r___5 = 0;
  tmp___130 = 0;
  r___6 = 0;
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
  switch_151_26:  ;
  if (! ((unsigned long )d == (unsigned long )end2)) {
    if ((unsigned long )d == (unsigned long )end1) {
      tmp___118 = (int const   )*string2;
    } else {
      if ((unsigned long )d == (unsigned long )(string2 - 1)) {
        tmp___118 = (int const   )*(end1 - 1);
      } else {
        tmp___118 = (int const   )*d;
      }
    }
    if ((int )re_syntax_table[(unsigned char )tmp___118] == 1) {
      if (size1) {
        tmp___119 = string1;
      } else {
        tmp___119 = string2;
      }
      if ((unsigned long )d == (unsigned long )tmp___119) {
        goto __dyc_dummy_label;
      } else {
        if (! size2) {
          goto __dyc_dummy_label;
        } else {
          if ((unsigned long )(d - 1) == (unsigned long )end1) {
            tmp___121 = (int const   )*string2;
          } else {
            if ((unsigned long )(d - 1) == (unsigned long )(string2 - 1)) {
              tmp___121 = (int const   )*(end1 - 1);
            } else {
              tmp___121 = (int const   )*(d - 1);
            }
          }
          if (! ((int )re_syntax_table[(unsigned char )tmp___121] == 1)) {
            goto __dyc_dummy_label;
          }
        }
      }
    }
  }
  goto __dyc_dummy_label;
  switch_151_27:  ;
  if (size1) {
    tmp___122 = string1;
  } else {
    tmp___122 = string2;
  }
  if (! ((unsigned long )d == (unsigned long )tmp___122)) {
    if (! (! size2)) {
      if ((unsigned long )(d - 1) == (unsigned long )end1) {
        tmp___124 = (int const   )*string2;
      } else {
        if ((unsigned long )(d - 1) == (unsigned long )(string2 - 1)) {
          tmp___124 = (int const   )*(end1 - 1);
        } else {
          tmp___124 = (int const   )*(d - 1);
        }
      }
      if ((int )re_syntax_table[(unsigned char )tmp___124] == 1) {
        if ((unsigned long )d == (unsigned long )end2) {
          goto __dyc_dummy_label;
        } else {
          if ((unsigned long )d == (unsigned long )end1) {
            tmp___126 = (int const   )*string2;
          } else {
            if ((unsigned long )d == (unsigned long )(string2 - 1)) {
              tmp___126 = (int const   )*(end1 - 1);
            } else {
              tmp___126 = (int const   )*d;
            }
          }
          if (! ((int )re_syntax_table[(unsigned char )tmp___126] == 1)) {
            goto __dyc_dummy_label;
          }
        }
      }
    }
  }
  goto __dyc_dummy_label;
  switch_151_24:  ;
  while (1) {
    while_214_continue:  ;
    if (! ((unsigned long )d == (unsigned long )dend)) {
      goto while_214_break;
    }
    if ((unsigned long )dend == (unsigned long )end_match_2) {
      goto __dyc_dummy_label;
    }
    d = string2;
    dend = end_match_2;
  }
  while_214_break:  ;
  if ((unsigned long )d == (unsigned long )end1) {
    tmp___128 = (int const   )*string2;
  } else {
    if ((unsigned long )d == (unsigned long )(string2 - 1)) {
      tmp___128 = (int const   )*(end1 - 1);
    } else {
      tmp___128 = (int const   )*d;
    }
  }
  if (! ((int )re_syntax_table[(unsigned char )tmp___128] == 1)) {
    goto __dyc_dummy_label;
  }
  while (1) {
    while_215_continue:  ;
    if (! set_regs_matched_done) {
      set_regs_matched_done = 1;
      r___5 = lowest_active_reg;
      {
      while (1) {
        while_216_continue:  ;
        if (! (r___5 <= highest_active_reg)) {
          goto while_216_break;
        }
        (reg_info + r___5)->bits.ever_matched_something = 1U;
        (reg_info + r___5)->bits.matched_something = (reg_info + r___5)->bits.ever_matched_something;
        r___5 ++;
      }
      while_216_break:  ;
      }
    }
    goto while_215_break;
  }
  while_215_break:  ;
  d ++;
  goto __dyc_dummy_label;
  switch_151_25:  ;
  while (1) {
    while_217_continue:  ;
    if (! ((unsigned long )d == (unsigned long )dend)) {
      goto while_217_break;
    }
    if ((unsigned long )dend == (unsigned long )end_match_2) {
      goto __dyc_dummy_label;
    }
    d = string2;
    dend = end_match_2;
  }
  while_217_break:  ;
  if ((unsigned long )d == (unsigned long )end1) {
    tmp___130 = (int const   )*string2;
  } else {
    if ((unsigned long )d == (unsigned long )(string2 - 1)) {
      tmp___130 = (int const   )*(end1 - 1);
    } else {
      tmp___130 = (int const   )*d;
    }
  }
  if ((int )re_syntax_table[(unsigned char )tmp___130] == 1) {
    goto __dyc_dummy_label;
  }
  while (1) {
    while_218_continue:  ;
    if (! set_regs_matched_done) {
      set_regs_matched_done = 1;
      r___6 = lowest_active_reg;
      {
      while (1) {
        while_219_continue:  ;
        if (! (r___6 <= highest_active_reg)) {
          goto while_219_break;
        }
        (reg_info + r___6)->bits.ever_matched_something = 1U;
        (reg_info + r___6)->bits.matched_something = (reg_info + r___6)->bits.ever_matched_something;
        r___6 ++;
      }
      while_219_break:  ;
      }
    }
    goto while_218_break;
  }
  while_218_break:  ;
  d ++;
  __dyc_dummy_label:  ;
  __dyc_print_ptr__char(d);
  __dyc_printpre_byte(set_regs_matched_done);
}
}
