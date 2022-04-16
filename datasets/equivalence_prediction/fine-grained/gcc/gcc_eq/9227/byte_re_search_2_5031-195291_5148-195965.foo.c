#include "../../include/dycfoo.h"
#include "../../include/regex.i.hd.c.h"
void __dyc_foo(void) 
{ int val ;
  char *fastmap ;
  char *translate ;
  int total_size ;
  int endpos ;
  int tmp ;
  char const   *d ;
  int lim ;
  int irange ;
  char const   *tmp___0 ;
  char const   *tmp___1 ;
  char const   *tmp___2 ;
  char c ;
  int tmp___3 ;
  int tmp___4 ;
  struct re_pattern_buffer *bufp ;
  char const   *string1 ;
  int size1 ;
  char const   *string2 ;
  int startpos ;
  int range ;
  int __dyc_funcallvar_1 ;
  int __dyc_funcallvar_2 ;

  {
  fastmap = (char *)__dyc_read_ptr__char();
  translate = (char *)__dyc_read_ptr__char();
  total_size = __dyc_readpre_byte();
  endpos = __dyc_readpre_byte();
  bufp = __dyc_read_ptr__comp_30re_pattern_buffer();
  string1 = (char const   *)__dyc_read_ptr__char();
  size1 = __dyc_readpre_byte();
  string2 = (char const   *)__dyc_read_ptr__char();
  startpos = __dyc_readpre_byte();
  range = __dyc_readpre_byte();
  __dyc_funcallvar_1 = __dyc_readpre_byte();
  __dyc_funcallvar_2 = __dyc_readpre_byte();
  val = 0;
  tmp = 0;
  d = 0;
  lim = 0;
  irange = 0;
  tmp___0 = 0;
  tmp___1 = 0;
  tmp___2 = 0;
  c = 0;
  tmp___3 = 0;
  tmp___4 = 0;
  if (startpos < 0) {
    goto __dyc_dummy_label;
  } else {
    if (startpos > total_size) {
      goto __dyc_dummy_label;
    }
  }
  if (endpos < 0) {
    range = 0 - startpos;
  } else {
    if (endpos > total_size) {
      range = total_size - startpos;
    }
  }
  if (bufp->used > 0UL) {
    if (range > 0) {
      if ((int )((enum __anonenum_re_opcode_t_24 )*(bufp->buffer + 0)) == 11) {
        goto _L;
      } else {
        if ((int )((enum __anonenum_re_opcode_t_24 )*(bufp->buffer + 0)) == 9) {
          if (! bufp->newline_anchor) {
            _L:  
            if (startpos > 0) {
              goto __dyc_dummy_label;
            } else {
              range = 1;
            }
          }
        }
      }
    }
  }
  if (fastmap) {
    if (! bufp->fastmap_accurate) {
      {
      tmp = __dyc_funcallvar_1;
      }
      if (tmp == -2) {
        goto __dyc_dummy_label;
      }
    }
  }
  while (1) {
    while_136_continue:  ;
    if (fastmap) {
      if (startpos < total_size) {
        if (! bufp->can_be_null) {
          if (range > 0) {
            lim = 0;
            irange = range;
            if (startpos < size1) {
              if (startpos + range >= size1) {
                lim = range - (size1 - startpos);
              }
            }
            if (startpos >= size1) {
              tmp___0 = string2 - size1;
            } else {
              tmp___0 = string1;
            }
            d = tmp___0 + startpos;
            if (translate) {
              {
              while (1) {
                while_137_continue:  ;
                if (range > lim) {
                  tmp___1 = d;
                  d ++;
                  if (*(fastmap + (unsigned char )*(translate + (unsigned char )*tmp___1))) {
                    goto while_137_break;
                  }
                } else {
                  goto while_137_break;
                }
                range --;
              }
              while_137_break:  ;
              }
            } else {
              {
              while (1) {
                while_138_continue:  ;
                if (range > lim) {
                  tmp___2 = d;
                  d ++;
                  if (*(fastmap + (unsigned char )*tmp___2)) {
                    goto while_138_break;
                  }
                } else {
                  goto while_138_break;
                }
                range --;
              }
              while_138_break:  ;
              }
            }
            startpos += irange - range;
          } else {
            if (size1 == 0) {
              tmp___3 = (int const   )*(string2 + (startpos - size1));
            } else {
              if (startpos >= size1) {
                tmp___3 = (int const   )*(string2 + (startpos - size1));
              } else {
                tmp___3 = (int const   )*(string1 + startpos);
              }
            }
            c = (char )tmp___3;
            if (translate) {
              tmp___4 = (int )*(translate + (unsigned char )c);
            } else {
              tmp___4 = (int )c;
            }
            if (! *(fastmap + (unsigned char )tmp___4)) {
              goto advance;
            }
          }
        }
      }
    }
    if (range >= 0) {
      if (startpos == total_size) {
        if (fastmap) {
          if (! bufp->can_be_null) {
            goto __dyc_dummy_label;
          }
        }
      }
    }
    {
    val = __dyc_funcallvar_2;
    }
    if (val >= 0) {
      goto __dyc_dummy_label;
    }
    if (val == -2) {
      goto __dyc_dummy_label;
    }
    advance: 
    if (! range) {
      goto __dyc_dummy_label;
    } else {
      if (range > 0) {
        range --;
        startpos ++;
      } else {
        range ++;
        startpos --;
      }
    }
  }
  __dyc_dummy_label:  ;
  __dyc_print_ptr__char(d);
  __dyc_printpre_byte(startpos);
  __dyc_printpre_byte(range);
}
}
