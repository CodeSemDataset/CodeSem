#include "../../include/dycfoo.h"
#include "../../include/regex.i.hd.c.h"
void __dyc_foo(void) 
{ int mcnt ;
  char const   *end_match_1 ;
  char const   *end_match_2 ;
  char const   *d ;
  char const   *dend ;
  char *translate ;
  char const   **regend ;
  char const   *d2 ;
  char const   *dend2 ;
  int regno ;
  int tmp___50 ;
  char const   *string2 ;
  int __dyc_funcallvar_18 ;
  int __dyc_funcallvar_19 ;

  {
  end_match_1 = (char const   *)__dyc_read_ptr__char();
  end_match_2 = (char const   *)__dyc_read_ptr__char();
  d = (char const   *)__dyc_read_ptr__char();
  dend = (char const   *)__dyc_read_ptr__char();
  translate = (char *)__dyc_read_ptr__char();
  regend = (char const   **)__dyc_read_ptr__ptr__char();
  d2 = (char const   *)__dyc_read_ptr__char();
  dend2 = (char const   *)__dyc_read_ptr__char();
  regno = __dyc_readpre_byte();
  string2 = (char const   *)__dyc_read_ptr__char();
  __dyc_funcallvar_18 = __dyc_readpre_byte();
  __dyc_funcallvar_19 = __dyc_readpre_byte();
  mcnt = 0;
  tmp___50 = 0;
  dend2 = end_match_1;
  while_174_continue:  ;
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
  if ((unsigned long )d2 == (unsigned long )dend2) {
    goto __dyc_dummy_label;
  }
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
  __dyc_dummy_label:  ;
  __dyc_printpre_byte(mcnt);
  __dyc_print_ptr__char(d);
  __dyc_print_ptr__char(d2);
  __dyc_print_ptr__char(dend2);
}
}
