#include "../../include/dycfoo.h"
#include "../../include/inflate.i.hd.c.h"
void __dyc_foo(void) 
{ unsigned char *put ;
  unsigned int left ;
  unsigned int copy ;
  unsigned char *from ;
  unsigned char *tmp___21 ;
  unsigned char *tmp___22 ;

  {
  put = (unsigned char *)__dyc_read_ptr__char();
  left = (unsigned int )__dyc_readpre_byte();
  copy = (unsigned int )__dyc_readpre_byte();
  from = (unsigned char *)__dyc_read_ptr__char();
  tmp___21 = 0;
  tmp___22 = 0;
  copy = left;
  while_85_continue:  ;
  tmp___21 = put;
  put ++;
  tmp___22 = from;
  from ++;
  *tmp___21 = *tmp___22;
  copy --;
  if (copy) {

  }
  __dyc_dummy_label:  ;
  __dyc_print_ptr__char(put);
  __dyc_printpre_byte(copy);
  __dyc_print_ptr__char(from);
}
}
