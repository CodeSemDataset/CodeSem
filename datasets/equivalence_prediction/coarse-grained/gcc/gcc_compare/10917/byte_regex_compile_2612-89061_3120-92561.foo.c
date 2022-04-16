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
  char zero_times_ok ;
  unsigned char *old_buffer___3 ;
  void *tmp___18 ;
  ptrdiff_t incr___3 ;
  unsigned char *old_buffer___4 ;
  void *tmp___19 ;
  ptrdiff_t incr___4 ;
  unsigned char *tmp___20 ;
  boolean had_char_class ;
  unsigned int range_start ;
  unsigned char *old_buffer___5 ;
  void *tmp___21 ;
  ptrdiff_t incr___5 ;
  unsigned char *old_buffer___6 ;
  void *tmp___22 ;
  ptrdiff_t incr___6 ;
  unsigned char *tmp___23 ;
  int tmp___24 ;
  struct re_pattern_buffer *bufp ;
  void *__dyc_funcallvar_10 ;
  void *__dyc_funcallvar_11 ;
  void *__dyc_funcallvar_12 ;
  void *__dyc_funcallvar_13 ;

  {
  b = __dyc_read_ptr__char();
  p = (char const   *)__dyc_read_ptr__char();
  pend = (char const   *)__dyc_read_ptr__char();
  pending_exact = __dyc_read_ptr__char();
  laststart = __dyc_read_ptr__char();
  begalt = __dyc_read_ptr__char();
  fixup_alt_jump = __dyc_read_ptr__char();
  zero_times_ok = (char )__dyc_readpre_byte();
  bufp = __dyc_read_ptr__comp_30re_pattern_buffer();
  __dyc_funcallvar_10 = __dyc_read_ptr__void();
  __dyc_funcallvar_11 = __dyc_read_ptr__void();
  __dyc_funcallvar_12 = __dyc_read_ptr__void();
  __dyc_funcallvar_13 = __dyc_read_ptr__void();
  p1 = 0;
  old_buffer___3 = 0;
  tmp___18 = 0;
  incr___3 = 0;
  old_buffer___4 = 0;
  tmp___19 = 0;
  incr___4 = 0;
  tmp___20 = 0;
  had_char_class = 0;
  range_start = 0;
  old_buffer___5 = 0;
  tmp___21 = 0;
  incr___5 = 0;
  old_buffer___6 = 0;
  tmp___22 = 0;
  incr___6 = 0;
  tmp___23 = 0;
  tmp___24 = 0;
  if (! zero_times_ok) {
    {
    while (1) {
      while_17_continue:  ;
      if (! ((unsigned long )((b - bufp->buffer) + 3) > bufp->allocated)) {
        goto while_17_break;
      }
      {
      while (1) {
        while_18_continue:  ;
        old_buffer___3 = bufp->buffer;
        if (bufp->allocated == (unsigned long )(1L << 16)) {
          goto __dyc_dummy_label;
        }
        bufp->allocated <<= 1;
        if (bufp->allocated > (unsigned long )(1L << 16)) {
          bufp->allocated = (unsigned long )(1L << 16);
        }
        {
        tmp___18 = __dyc_funcallvar_10;
        bufp->buffer = (unsigned char *)tmp___18;
        }
        if ((unsigned long )bufp->buffer == (unsigned long )((void *)0)) {
          goto __dyc_dummy_label;
        }
        if ((unsigned long )old_buffer___3 != (unsigned long )bufp->buffer) {
          incr___3 = (ptrdiff_t )(bufp->buffer - old_buffer___3);
          b += incr___3;
          begalt += incr___3;
          if (fixup_alt_jump) {
            fixup_alt_jump += incr___3;
          }
          if (laststart) {
            laststart += incr___3;
          }
          if (pending_exact) {
            pending_exact += incr___3;
          }
        }
        goto while_18_break;
      }
      while_18_break:  ;
      }
    }
    while_17_break:  ;
    }
    {

    b += 3;
    }
  }
  goto __dyc_dummy_label;
  switch_3_46:  
  laststart = b;
  while (1) {
    while_19_continue:  ;
    {
    while (1) {
      while_20_continue:  ;
      if (! ((unsigned long )((b - bufp->buffer) + 1) > bufp->allocated)) {
        goto while_20_break;
      }
      {
      while (1) {
        while_21_continue:  ;
        old_buffer___4 = bufp->buffer;
        if (bufp->allocated == (unsigned long )(1L << 16)) {
          goto __dyc_dummy_label;
        }
        bufp->allocated <<= 1;
        if (bufp->allocated > (unsigned long )(1L << 16)) {
          bufp->allocated = (unsigned long )(1L << 16);
        }
        {
        tmp___19 = __dyc_funcallvar_11;
        bufp->buffer = (unsigned char *)tmp___19;
        }
        if ((unsigned long )bufp->buffer == (unsigned long )((void *)0)) {
          goto __dyc_dummy_label;
        }
        if ((unsigned long )old_buffer___4 != (unsigned long )bufp->buffer) {
          incr___4 = (ptrdiff_t )(bufp->buffer - old_buffer___4);
          b += incr___4;
          begalt += incr___4;
          if (fixup_alt_jump) {
            fixup_alt_jump += incr___4;
          }
          if (laststart) {
            laststart += incr___4;
          }
          if (pending_exact) {
            pending_exact += incr___4;
          }
        }
        goto while_21_break;
      }
      while_21_break:  ;
      }
    }
    while_20_break:  ;
    }
    tmp___20 = b;
    b ++;
    *tmp___20 = (unsigned char)3;
    goto while_19_break;
  }
  while_19_break:  ;
  goto __dyc_dummy_label;
  switch_3_91:  
  had_char_class = (boolean )0;
  range_start = 4294967295U;
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
  __dyc_dummy_label:  ;
  __dyc_print_ptr__char(p1);
  __dyc_print_ptr__char(b);
  __dyc_print_ptr__char(pending_exact);
  __dyc_print_ptr__char(laststart);
  __dyc_print_ptr__char(begalt);
  __dyc_print_ptr__char(fixup_alt_jump);
  __dyc_print_ptr__char(old_buffer___3);
  __dyc_print_ptr__char(old_buffer___4);
  __dyc_printpre_byte(had_char_class);
  __dyc_printpre_byte(range_start);
  __dyc_print_ptr__char(old_buffer___5);
  __dyc_print_ptr__char(old_buffer___6);
}
}
