#include "../../include/dycfoo.h"
#include "../../include/misc_64.i.hd.c.h"
void __dyc_foo(void) 
{ char *vidmem ;
  int lines ;
  int cols ;
  int x ;
  int y ;
  char c ;

  {
  vidmem = __dyc_read_ptr__char();
  lines = __dyc_readpre_byte();
  cols = __dyc_readpre_byte();
  x = __dyc_readpre_byte();
  y = __dyc_readpre_byte();
  c = (char )__dyc_readpre_byte();

  x = 0;
  y ++;
  if (y >= lines) {
    {

    y --;
    }
  }
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
  __dyc_dummy_label:  ;
  __dyc_printpre_byte(x);
  __dyc_printpre_byte(y);
}
}
