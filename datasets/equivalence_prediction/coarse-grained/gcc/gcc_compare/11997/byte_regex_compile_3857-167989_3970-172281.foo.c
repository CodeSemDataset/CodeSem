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
  int upper_bound ;
  char const   *tmp___508 ;
  unsigned char *old_buffer___13 ;
  void *tmp___509 ;
  ptrdiff_t incr___13 ;
  unsigned int nbytes ;
  unsigned char *old_buffer___14 ;
  void *tmp___510 ;
  ptrdiff_t incr___14 ;
  reg_syntax_t syntax ;
  struct re_pattern_buffer *bufp ;
  void *__dyc_funcallvar_157 ;
  void *__dyc_funcallvar_158 ;

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
  upper_bound = __dyc_readpre_byte();
  syntax = (reg_syntax_t )__dyc_readpre_byte();
  bufp = __dyc_read_ptr__comp_30re_pattern_buffer();
  __dyc_funcallvar_157 = __dyc_read_ptr__void();
  __dyc_funcallvar_158 = __dyc_read_ptr__void();
  tmp___508 = 0;
  old_buffer___13 = 0;
  tmp___509 = 0;
  incr___13 = 0;
  nbytes = 0;
  old_buffer___14 = 0;
  tmp___510 = 0;
  incr___14 = 0;
  if (! (syntax & ((((((((((((1UL << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1))) {
    if ((int )c != 92) {
      goto __dyc_dummy_label;
    } else {
      if ((unsigned long )p == (unsigned long )pend) {
        goto __dyc_dummy_label;
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
    goto __dyc_dummy_label;
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
        goto __dyc_dummy_label;
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
  goto __dyc_dummy_label;
  __dyc_dummy_label:  ;
  __dyc_print_ptr__char(b);
  __dyc_print_ptr__char(p);
  __dyc_print_ptr__char(pending_exact);
  __dyc_print_ptr__char(laststart);
  __dyc_print_ptr__char(begalt);
  __dyc_print_ptr__char(fixup_alt_jump);
  __dyc_print_ptr__char(old_buffer___13);
  __dyc_print_ptr__char(old_buffer___14);
}
}
