#include "../../include/dycfoo.h"
#include "../../include/inffast.i.hd.c.h"
void __dyc_foo(void) 
{ unsigned char *out ;
  unsigned int wsize ;
  unsigned int write ;
  unsigned char *window ;
  unsigned int op ;
  unsigned int len ;
  unsigned int dist ;
  unsigned char *from ;

  {
  out = (unsigned char *)__dyc_read_ptr__char();
  wsize = (unsigned int )__dyc_readpre_byte();
  write = (unsigned int )__dyc_readpre_byte();
  window = (unsigned char *)__dyc_read_ptr__char();
  op = (unsigned int )__dyc_readpre_byte();
  len = (unsigned int )__dyc_readpre_byte();
  dist = (unsigned int )__dyc_readpre_byte();
  from = 0;
  from = window - 1;
  if (write == 0U) {
    from += wsize - op;
    if (op < len) {
      len -= op;
      {
      while (1) {
        while_1_continue:  ;
        out ++;
        from ++;
        *out = *from;
        op --;
        if (! op) {
          goto while_1_break;
        }
      }
      while_1_break:  ;
      }
      from = out - dist;
    }
  } else {
    if (write < op) {
      from += (wsize + write) - op;
      op -= write;
      if (op < len) {
        len -= op;
        {
        while (1) {
          while_2_continue:  ;
          out ++;
          from ++;
          *out = *from;
          op --;
          if (! op) {
            goto while_2_break;
          }
        }
        while_2_break:  ;
        }
        from = window - 1;
        if (write < len) {
          op = write;
          len -= op;
          {
          while (1) {
            while_3_continue:  ;
            out ++;
            from ++;
            *out = *from;
            op --;
            if (! op) {
              goto while_3_break;
            }
          }
          while_3_break:  ;
          }
          from = out - dist;
        }
      }
    } else {
      from += write - op;
      if (op < len) {
        len -= op;
        {
        while (1) {
          while_4_continue:  ;
          out ++;
          from ++;
          *out = *from;
          op --;
          if (! op) {
            goto while_4_break;
          }
        }
        while_4_break:  ;
        }
        from = out - dist;
      }
    }
  }
  while (1) {
    while_5_continue:  ;
    if (! (len > 2U)) {
      goto while_5_break;
    }
    out ++;
    from ++;
    *out = *from;
    out ++;
    from ++;
    *out = *from;
    out ++;
    from ++;
    *out = *from;
    len -= 3U;
  }
  while_5_break:  ;
  if (len) {
    out ++;
    from ++;
    *out = *from;
    if (len > 1U) {
      out ++;
      from ++;
      *out = *from;
    }
  }
  from = out - dist;
  __dyc_dummy_label:  ;
  __dyc_print_ptr__char(from);
}
}
