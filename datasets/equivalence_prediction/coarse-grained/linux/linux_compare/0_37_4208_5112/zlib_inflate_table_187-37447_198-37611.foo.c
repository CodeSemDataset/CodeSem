#include "../../include/dycfoo.h"
#include "../../include/inftrees.i.hd.c.h"
void __dyc_foo(void) 
{ unsigned int len ;
  unsigned int sym ;
  unsigned int min ;
  unsigned int root ;
  unsigned int curr ;
  unsigned int drop ;
  unsigned int used ;
  unsigned int huff ;
  unsigned int low ;
  unsigned int mask ;
  code *next ;
  codetype type ;
  code **table ;

  {
  min = (unsigned int )__dyc_readpre_byte();
  root = (unsigned int )__dyc_readpre_byte();
  type = (codetype )__dyc_readpre_byte();
  table = __dyc_read_ptr__ptr__typdef_code();
  len = 0;
  sym = 0;
  curr = 0;
  drop = 0;
  used = 0;
  huff = 0;
  low = 0;
  mask = 0;
  next = 0;
  huff = 0U;
  sym = 0U;
  len = min;
  next = *table;
  curr = root;
  drop = 0U;
  low = 4294967295U;
  used = 1U << root;
  mask = used - 1U;
  if ((int )type == 1) {
    if (used >= 1456U) {
      goto __dyc_dummy_label;
    }
  }
  __dyc_dummy_label:  ;
  __dyc_printpre_byte(len);
  __dyc_printpre_byte(sym);
  __dyc_printpre_byte(curr);
  __dyc_printpre_byte(drop);
  __dyc_printpre_byte(huff);
  __dyc_printpre_byte(low);
  __dyc_printpre_byte(mask);
  __dyc_print_ptr__typdef_code(next);
}
}
