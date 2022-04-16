#include "../../include/dycfoo.h"
#include "../../include/inftrees.i.hd.c.h"
void __dyc_foo(void) 
{ unsigned int len ;
  unsigned int sym ;
  unsigned int min ;
  unsigned int max ;
  unsigned int root ;
  unsigned int curr ;
  unsigned int drop ;
  int left ;
  unsigned int used ;
  unsigned int huff ;
  unsigned int low ;
  unsigned int mask ;
  code *next ;
  unsigned short count[16] ;
  codetype type ;
  unsigned short *lens ;
  code **table ;
  unsigned short *work ;

  {
  len = (unsigned int )__dyc_readpre_byte();
  sym = (unsigned int )__dyc_readpre_byte();
  min = (unsigned int )__dyc_readpre_byte();
  max = (unsigned int )__dyc_readpre_byte();
  root = (unsigned int )__dyc_readpre_byte();
  drop = (unsigned int )__dyc_readpre_byte();
  used = (unsigned int )__dyc_readpre_byte();
  huff = (unsigned int )__dyc_readpre_byte();
  low = (unsigned int )__dyc_readpre_byte();
  mask = (unsigned int )__dyc_readpre_byte();
  next = __dyc_read_ptr__typdef_code();
  type = (codetype )__dyc_readpre_byte();
  lens = __dyc_read_ptr__short();
  table = __dyc_read_ptr__ptr__typdef_code();
  work = __dyc_read_ptr__short();
  curr = 0;
  left = 0;
  len = (unsigned int )*(lens + *(work + sym));
  if ((huff & mask) != low) {
    if (drop == 0U) {
      drop = root;
    }
    next += min;
    curr = len - drop;
    left = 1 << curr;
    {
    while (1) {
      while_11_continue:  ;
      if (! (curr + drop < max)) {
        goto while_11_break;
      }
      left -= (int )count[curr + drop];
      if (left <= 0) {
        goto while_11_break;
      }
      curr ++;
      left <<= 1;
    }
    while_11_break:  ;
    }
    used += 1U << curr;
    if ((int )type == 1) {
      if (used >= 1456U) {
        goto __dyc_dummy_label;
      }
    }
    low = huff & mask;
    (*table + low)->op = (unsigned char )curr;
    (*table + low)->bits = (unsigned char )root;
    (*table + low)->val = (unsigned short )(next - *table);
  }
  __dyc_dummy_label:  ;
  __dyc_printpre_byte(len);
  __dyc_printpre_byte(left);
  __dyc_printpre_byte(used);
  __dyc_print_ptr__typdef_code(next);
}
}
