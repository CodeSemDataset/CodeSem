#include "../../include/dycfoo.h"
#include "../../include/regex.i.hd.c.h"
void __dyc_foo(void) 
{ char const   *p1 ;
  unsigned char *b ;
  char const   *p ;
  char const   *pend ;
  unsigned char *pending_exact ;
  unsigned char *laststart ;
  unsigned char *begalt ;
  unsigned char *fixup_alt_jump ;
  unsigned char *old_buffer___5 ;
  void *tmp___21 ;
  ptrdiff_t incr___5 ;
  unsigned char *old_buffer___6 ;
  void *tmp___22 ;
  ptrdiff_t incr___6 ;
  unsigned char *tmp___23 ;
  int tmp___24 ;
  unsigned char *old_buffer___7 ;
  void *tmp___25 ;
  ptrdiff_t incr___7 ;
  unsigned char *tmp___26 ;
  reg_syntax_t syntax ;
  struct re_pattern_buffer *bufp ;
  void *__dyc_funcallvar_12 ;
  void *__dyc_funcallvar_13 ;
  void *__dyc_funcallvar_14 ;

  {
  b = __dyc_read_ptr__char();
  p = (char const   *)__dyc_read_ptr__char();
  pend = (char const   *)__dyc_read_ptr__char();
  pending_exact = __dyc_read_ptr__char();
  laststart = __dyc_read_ptr__char();
  begalt = __dyc_read_ptr__char();
  fixup_alt_jump = __dyc_read_ptr__char();
  syntax = (reg_syntax_t )__dyc_readpre_byte();
  bufp = __dyc_read_ptr__comp_30re_pattern_buffer();
  __dyc_funcallvar_12 = __dyc_read_ptr__void();
  __dyc_funcallvar_13 = __dyc_read_ptr__void();
  __dyc_funcallvar_14 = __dyc_read_ptr__void();
  p1 = 0;
  old_buffer___5 = 0;
  tmp___21 = 0;
  incr___5 = 0;
  old_buffer___6 = 0;
  tmp___22 = 0;
  incr___6 = 0;
  tmp___23 = 0;
  tmp___24 = 0;
  old_buffer___7 = 0;
  tmp___25 = 0;
  incr___7 = 0;
  tmp___26 = 0;
  if ((unsigned long )p == (unsigned long )pend) {
    {

    }
    goto __dyc_dummy_label;
  }
  while (1) {
    while_22_continue:  ;
    if (! ((unsigned long )((b - bufp->buffer) + 34) > bufp->allocated)) {
      goto while_22_break;
    }
    {
    while (1) {
      while_23_continue:  ;
      old_buffer___5 = bufp->buffer;
      if (bufp->allocated == (unsigned long )(1L << 16)) {
        goto __dyc_dummy_label;
      }
      bufp->allocated <<= 1;
      if (bufp->allocated > (unsigned long )(1L << 16)) {
        bufp->allocated = (unsigned long )(1L << 16);
      }
      {
      tmp___21 = __dyc_funcallvar_12;
      bufp->buffer = (unsigned char *)tmp___21;
      }
      if ((unsigned long )bufp->buffer == (unsigned long )((void *)0)) {
        goto __dyc_dummy_label;
      }
      if ((unsigned long )old_buffer___5 != (unsigned long )bufp->buffer) {
        incr___5 = (ptrdiff_t )(bufp->buffer - old_buffer___5);
        b += incr___5;
        begalt += incr___5;
        if (fixup_alt_jump) {
          fixup_alt_jump += incr___5;
        }
        if (laststart) {
          laststart += incr___5;
        }
        if (pending_exact) {
          pending_exact += incr___5;
        }
      }
      goto while_23_break;
    }
    while_23_break:  ;
    }
  }
  while_22_break:  ;
  laststart = b;
  while (1) {
    while_24_continue:  ;
    {
    while (1) {
      while_25_continue:  ;
      if (! ((unsigned long )((b - bufp->buffer) + 1) > bufp->allocated)) {
        goto while_25_break;
      }
      {
      while (1) {
        while_26_continue:  ;
        old_buffer___6 = bufp->buffer;
        if (bufp->allocated == (unsigned long )(1L << 16)) {
          goto __dyc_dummy_label;
        }
        bufp->allocated <<= 1;
        if (bufp->allocated > (unsigned long )(1L << 16)) {
          bufp->allocated = (unsigned long )(1L << 16);
        }
        {
        tmp___22 = __dyc_funcallvar_13;
        bufp->buffer = (unsigned char *)tmp___22;
        }
        if ((unsigned long )bufp->buffer == (unsigned long )((void *)0)) {
          goto __dyc_dummy_label;
        }
        if ((unsigned long )old_buffer___6 != (unsigned long )bufp->buffer) {
          incr___6 = (ptrdiff_t )(bufp->buffer - old_buffer___6);
          b += incr___6;
          begalt += incr___6;
          if (fixup_alt_jump) {
            fixup_alt_jump += incr___6;
          }
          if (laststart) {
            laststart += incr___6;
          }
          if (pending_exact) {
            pending_exact += incr___6;
          }
        }
        goto while_26_break;
      }
      while_26_break:  ;
      }
    }
    while_25_break:  ;
    }
    tmp___23 = b;
    b ++;
    if ((int const   )*p == 94) {
      tmp___24 = 5;
    } else {
      tmp___24 = 4;
    }
    *tmp___23 = (unsigned char )tmp___24;
    goto while_24_break;
  }
  while_24_break:  ;
  if ((int const   )*p == 94) {
    p ++;
  }
  p1 = p;
  while (1) {
    while_27_continue:  ;
    {
    while (1) {
      while_28_continue:  ;
      if (! ((unsigned long )((b - bufp->buffer) + 1) > bufp->allocated)) {
        goto while_28_break;
      }
      {
      while (1) {
        while_29_continue:  ;
        old_buffer___7 = bufp->buffer;
        if (bufp->allocated == (unsigned long )(1L << 16)) {
          goto __dyc_dummy_label;
        }
        bufp->allocated <<= 1;
        if (bufp->allocated > (unsigned long )(1L << 16)) {
          bufp->allocated = (unsigned long )(1L << 16);
        }
        {
        tmp___25 = __dyc_funcallvar_14;
        bufp->buffer = (unsigned char *)tmp___25;
        }
        if ((unsigned long )bufp->buffer == (unsigned long )((void *)0)) {
          goto __dyc_dummy_label;
        }
        if ((unsigned long )old_buffer___7 != (unsigned long )bufp->buffer) {
          incr___7 = (ptrdiff_t )(bufp->buffer - old_buffer___7);
          b += incr___7;
          begalt += incr___7;
          if (fixup_alt_jump) {
            fixup_alt_jump += incr___7;
          }
          if (laststart) {
            laststart += incr___7;
          }
          if (pending_exact) {
            pending_exact += incr___7;
          }
        }
        goto while_29_break;
      }
      while_29_break:  ;
      }
    }
    while_28_break:  ;
    }
    tmp___26 = b;
    b ++;
    *tmp___26 = (unsigned char )((1 << 8) / 8);
    goto while_27_break;
  }
  while_27_break:  ;

  if ((int )((enum __anonenum_re_opcode_t_24 )*(b + -2)) == 5) {
    if (syntax & ((((((((1UL << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1)) {
      *(b + 1) = (unsigned char )((int )*(b + 1) | (1 << 2));
    }
  }
  __dyc_dummy_label:  ;
  __dyc_print_ptr__char(p1);
  __dyc_print_ptr__char(pending_exact);
  __dyc_print_ptr__char(laststart);
  __dyc_print_ptr__char(begalt);
  __dyc_print_ptr__char(fixup_alt_jump);
  __dyc_print_ptr__char(old_buffer___5);
  __dyc_print_ptr__char(old_buffer___6);
  __dyc_print_ptr__char(old_buffer___7);
}
}
