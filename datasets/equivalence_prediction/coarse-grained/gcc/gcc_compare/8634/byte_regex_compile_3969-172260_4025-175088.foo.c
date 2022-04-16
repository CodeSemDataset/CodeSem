#include "../../include/dycfoo.h"
#include "../../include/regex.i.hd.c.h"
void __dyc_foo(void) 
{ unsigned char c ;
  unsigned char *b ;
  char const   *p ;
  char const   *pend ;
  unsigned char *pending_exact ;
  unsigned char *laststart ;
  unsigned char *begalt ;
  unsigned char *fixup_alt_jump ;
  char const   *beg_interval ;
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
  reg_syntax_t syntax ;
  struct re_pattern_buffer *bufp ;
  void *__dyc_funcallvar_159 ;
  void *__dyc_funcallvar_160 ;
  void *__dyc_funcallvar_161 ;

  {
  b = __dyc_read_ptr__char();
  p = (char const   *)__dyc_read_ptr__char();
  pend = (char const   *)__dyc_read_ptr__char();
  pending_exact = __dyc_read_ptr__char();
  laststart = __dyc_read_ptr__char();
  begalt = __dyc_read_ptr__char();
  fixup_alt_jump = __dyc_read_ptr__char();
  beg_interval = (char const   *)__dyc_read_ptr__char();
  syntax = (reg_syntax_t )__dyc_readpre_byte();
  bufp = __dyc_read_ptr__comp_30re_pattern_buffer();
  __dyc_funcallvar_159 = __dyc_read_ptr__void();
  __dyc_funcallvar_160 = __dyc_read_ptr__void();
  __dyc_funcallvar_161 = __dyc_read_ptr__void();
  c = 0;
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
  pending_exact = (unsigned char *)0;
  goto __dyc_dummy_label;
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
    goto __dyc_dummy_label;
  }
  switch_52_119:  
  if (syntax & (((((((((((((((((((1UL << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1)) {
    goto __dyc_dummy_label;
  }
  laststart = b;
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
  goto __dyc_dummy_label;
  switch_52_87:  
  if (syntax & (((((((((((((((((((1UL << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1)) {
    goto __dyc_dummy_label;
  }
  laststart = b;
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
  goto __dyc_dummy_label;
  switch_52_60:  
  if (syntax & (((((((((((((((((((1UL << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1)) {
    goto __dyc_dummy_label;
  }
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
    goto __dyc_dummy_label;
  }
  __dyc_dummy_label:  ;
  __dyc_printpre_byte(c);
  __dyc_print_ptr__char(b);
  __dyc_print_ptr__char(p);
  __dyc_print_ptr__char(pending_exact);
  __dyc_print_ptr__char(laststart);
  __dyc_print_ptr__char(begalt);
  __dyc_print_ptr__char(fixup_alt_jump);
  __dyc_printpre_byte(tmp___511);
  __dyc_print_ptr__char(old_buffer___15);
  __dyc_print_ptr__char(old_buffer___16);
  __dyc_print_ptr__char(old_buffer___17);
}
}
