#include "../../include/dycfoo.h"
#include "../../include/misc_64.i.hd.c.h"
void __dyc_foo(void) 
{ char *vidmem ;
  int lines ;
  int cols ;
  int x ;
  int y ;
  char c ;
  char const   *tmp ;
  char const   *s ;

  {
  vidmem = __dyc_read_ptr__char();
  lines = __dyc_readpre_byte();
  cols = __dyc_readpre_byte();
  x = __dyc_readpre_byte();
  y = __dyc_readpre_byte();
  s = (char const   *)__dyc_read_ptr__char();
  c = 0;
  tmp = 0;
  while (1) {
    while_60_continue:  ;
    tmp = s;
    s ++;
    c = (char )*tmp;
    if (! ((int )c != 0)) {
      goto __dyc_dummy_label;
    }
    if ((int )c == 10) {
      x = 0;
      y ++;
      if (y >= lines) {
        {

        y --;
        }
      }
    } else {
      *(vidmem + (x + cols * y) * 2) = c;
      x ++;
      if (x >= cols) {
        x = 0;
        y ++;
        if (y >= lines) {
          {

          y --;
          }
        }
      }
    }
  }
  __dyc_dummy_label:  ;
  __dyc_printpre_byte(x);
  __dyc_printpre_byte(y);
  __dyc_print_ptr__char(s);
}
}
