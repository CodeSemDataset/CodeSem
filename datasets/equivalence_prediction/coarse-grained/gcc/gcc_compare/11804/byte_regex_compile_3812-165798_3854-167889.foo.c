#include "../../include/dycfoo.h"
#include "../../include/regex.i.hd.c.h"
void __dyc_foo(void) 
{ unsigned char c ;
  unsigned char *b ;
  char const   *p ;
  char const   *pend ;
  char *translate ;
  unsigned char *pending_exact ;
  unsigned char *laststart ;
  unsigned char *begalt ;
  unsigned char *fixup_alt_jump ;
  unsigned char *old_buffer___12 ;
  void *tmp___505 ;
  ptrdiff_t incr___12 ;
  int lower_bound ;
  int upper_bound ;
  char const   *beg_interval ;
  char const   *tmp___506 ;
  char const   *tmp___507 ;
  reg_syntax_t syntax ;
  struct re_pattern_buffer *bufp ;
  void *__dyc_funcallvar_156 ;

  {
  c = (unsigned char )__dyc_readpre_byte();
  b = __dyc_read_ptr__char();
  p = (char const   *)__dyc_read_ptr__char();
  pend = (char const   *)__dyc_read_ptr__char();
  translate = (char *)__dyc_read_ptr__char();
  pending_exact = __dyc_read_ptr__char();
  laststart = __dyc_read_ptr__char();
  begalt = __dyc_read_ptr__char();
  fixup_alt_jump = __dyc_read_ptr__char();
  syntax = (reg_syntax_t )__dyc_readpre_byte();
  bufp = __dyc_read_ptr__comp_30re_pattern_buffer();
  __dyc_funcallvar_156 = __dyc_read_ptr__void();
  old_buffer___12 = 0;
  tmp___505 = 0;
  incr___12 = 0;
  lower_bound = 0;
  upper_bound = 0;
  beg_interval = 0;
  tmp___506 = 0;
  tmp___507 = 0;
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
  b += 3;
  laststart = (unsigned char *)0;
  begalt = b;
  goto __dyc_dummy_label;
  switch_52_123:  
  if (! (syntax & (((((((((1UL << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1))) {
    goto __dyc_dummy_label;
  } else {
    if (syntax & ((((((((((((1UL << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1)) {
      goto __dyc_dummy_label;
    }
  }
  handle_interval: 
  lower_bound = -1;
  upper_bound = -1;
  beg_interval = p;
  if ((unsigned long )p == (unsigned long )pend) {
    goto __dyc_dummy_label;
  }
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
      goto __dyc_dummy_label;
    }
  }
  __dyc_dummy_label:  ;
  __dyc_print_ptr__char(p);
  __dyc_print_ptr__char(pending_exact);
  __dyc_print_ptr__char(laststart);
  __dyc_print_ptr__char(begalt);
  __dyc_print_ptr__char(fixup_alt_jump);
  __dyc_print_ptr__char(old_buffer___12);
  __dyc_printpre_byte(lower_bound);
  __dyc_printpre_byte(upper_bound);
  __dyc_print_ptr__char(beg_interval);
}
}
