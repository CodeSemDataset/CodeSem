#include "../../include/dycfoo.h"
#include "../../include/regex.i.hd.c.h"
void __dyc_foo(void) 
{ unsigned char c ;
  unsigned char c1 ;
  unsigned char *b ;
  char *translate ;
  unsigned char *pending_exact ;
  unsigned char *laststart ;
  unsigned char *begalt ;
  unsigned char *fixup_alt_jump ;
  regnum_t regnum ;
  boolean tmp___528 ;
  unsigned char *old_buffer___23 ;
  void *tmp___529 ;
  ptrdiff_t incr___23 ;
  unsigned char *tmp___530 ;
  unsigned char *tmp___531 ;
  reg_syntax_t syntax ;
  struct re_pattern_buffer *bufp ;
  boolean __dyc_funcallvar_167 ;
  void *__dyc_funcallvar_168 ;

  {
  c = (unsigned char )__dyc_readpre_byte();
  c1 = (unsigned char )__dyc_readpre_byte();
  b = __dyc_read_ptr__char();
  translate = (char *)__dyc_read_ptr__char();
  pending_exact = __dyc_read_ptr__char();
  begalt = __dyc_read_ptr__char();
  fixup_alt_jump = __dyc_read_ptr__char();
  regnum = (regnum_t )__dyc_readpre_byte();
  syntax = (reg_syntax_t )__dyc_readpre_byte();
  bufp = __dyc_read_ptr__comp_30re_pattern_buffer();
  __dyc_funcallvar_167 = (boolean )__dyc_readpre_byte();
  __dyc_funcallvar_168 = __dyc_read_ptr__void();
  laststart = 0;
  tmp___528 = 0;
  old_buffer___23 = 0;
  tmp___529 = 0;
  incr___23 = 0;
  tmp___530 = 0;
  tmp___531 = 0;
  if ((regnum_t )c1 > regnum) {
    {

    }
    goto __dyc_dummy_label;
  }
  tmp___528 = __dyc_funcallvar_167;
  if (tmp___528) {
    goto __dyc_dummy_label;
  }
  laststart = b;
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
  goto __dyc_dummy_label;
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
  __dyc_dummy_label:  ;
  __dyc_printpre_byte(c);
  __dyc_print_ptr__char(b);
  __dyc_print_ptr__char(pending_exact);
  __dyc_print_ptr__char(laststart);
  __dyc_print_ptr__char(begalt);
  __dyc_print_ptr__char(fixup_alt_jump);
  __dyc_print_ptr__char(old_buffer___23);
}
}
