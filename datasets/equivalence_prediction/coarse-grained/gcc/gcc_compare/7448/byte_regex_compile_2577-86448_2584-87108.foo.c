#include "../../include/dycfoo.h"
#include "../../include/regex.i.hd.c.h"
void __dyc_foo(void) 
{ unsigned char *b ;
  char const   *p ;
  char const   *pend ;
  char *translate ;
  unsigned char *pending_exact ;
  unsigned char *laststart ;
  unsigned char *begalt ;
  unsigned char *fixup_alt_jump ;
  boolean keep_string_p ;
  char zero_times_ok ;
  unsigned char *old_buffer___1 ;
  void *tmp___11 ;
  ptrdiff_t incr___1 ;
  int tmp___12 ;
  int tmp___13 ;
  int tmp___14 ;
  int tmp___15 ;
  reg_syntax_t syntax ;
  struct re_pattern_buffer *bufp ;
  void *__dyc_funcallvar_8 ;

  {
  b = __dyc_read_ptr__char();
  p = (char const   *)__dyc_read_ptr__char();
  pend = (char const   *)__dyc_read_ptr__char();
  translate = (char *)__dyc_read_ptr__char();
  pending_exact = __dyc_read_ptr__char();
  laststart = __dyc_read_ptr__char();
  begalt = __dyc_read_ptr__char();
  fixup_alt_jump = __dyc_read_ptr__char();
  zero_times_ok = (char )__dyc_readpre_byte();
  syntax = (reg_syntax_t )__dyc_readpre_byte();
  bufp = __dyc_read_ptr__comp_30re_pattern_buffer();
  __dyc_funcallvar_8 = __dyc_read_ptr__void();
  keep_string_p = 0;
  old_buffer___1 = 0;
  tmp___11 = 0;
  incr___1 = 0;
  tmp___12 = 0;
  tmp___13 = 0;
  tmp___14 = 0;
  tmp___15 = 0;
  while (1) {
    while_13_continue:  ;
    if (! ((unsigned long )((b - bufp->buffer) + 3) > bufp->allocated)) {
      goto while_13_break;
    }
    {
    while (1) {
      while_14_continue:  ;
      old_buffer___1 = bufp->buffer;
      if (bufp->allocated == (unsigned long )(1L << 16)) {
        goto __dyc_dummy_label;
      }
      bufp->allocated <<= 1;
      if (bufp->allocated > (unsigned long )(1L << 16)) {
        bufp->allocated = (unsigned long )(1L << 16);
      }
      {
      tmp___11 = __dyc_funcallvar_8;
      bufp->buffer = (unsigned char *)tmp___11;
      }
      if ((unsigned long )bufp->buffer == (unsigned long )((void *)0)) {
        goto __dyc_dummy_label;
      }
      if ((unsigned long )old_buffer___1 != (unsigned long )bufp->buffer) {
        incr___1 = (ptrdiff_t )(bufp->buffer - old_buffer___1);
        b += incr___1;
        begalt += incr___1;
        if (fixup_alt_jump) {
          fixup_alt_jump += incr___1;
        }
        if (laststart) {
          laststart += incr___1;
        }
        if (pending_exact) {
          pending_exact += incr___1;
        }
      }
      goto while_14_break;
    }
    while_14_break:  ;
    }
  }
  while_13_break:  ;
  if (translate) {
    tmp___12 = (int )*(translate + (unsigned char )*(p - 2));
  } else {
    tmp___12 = (int )((char )*(p - 2));
  }
  if (translate) {
    tmp___13 = (int )*(translate + (unsigned char )'.');
  } else {
    tmp___13 = (int )((char )'.');
  }
  if (tmp___12 == tmp___13) {
    if (zero_times_ok) {
      if ((unsigned long )p < (unsigned long )pend) {
        if (translate) {
          tmp___14 = (int )*(translate + (unsigned char )*p);
        } else {
          tmp___14 = (int )((char )*p);
        }
        if (translate) {
          tmp___15 = (int )*(translate + (unsigned char )'\n');
        } else {
          tmp___15 = (int )((char )'\n');
        }
        if (tmp___14 == tmp___15) {
          if (! (syntax & ((((((1UL << 1) << 1) << 1) << 1) << 1) << 1))) {
            {

            keep_string_p = (char)1;
            }
          } else {
            {

            }
          }
        } else {
          {

          }
        }
      } else {
        {

        }
      }
    } else {
      {

      }
    }
  } else {
    {

    }
  }
  __dyc_dummy_label:  ;
  __dyc_print_ptr__char(pending_exact);
  __dyc_print_ptr__char(laststart);
  __dyc_print_ptr__char(begalt);
  __dyc_print_ptr__char(fixup_alt_jump);
  __dyc_printpre_byte(keep_string_p);
  __dyc_print_ptr__char(old_buffer___1);
}
}
