#include "../../include/dycfoo.h"
#include "../../include/deftree.i.hd.c.h"
void __dyc_foo(void) 
{ int prevlen ;
  int curlen ;
  int nextlen ;
  int count ;
  int max_count ;
  int min_count ;

  {
  curlen = __dyc_readpre_byte();
  nextlen = __dyc_readpre_byte();
  prevlen = 0;
  count = 0;
  max_count = 0;
  min_count = 0;
  count = 0;
  prevlen = curlen;
  if (nextlen == 0) {
    max_count = 138;
    min_count = 3;
  } else {
    if (curlen == nextlen) {
      max_count = 6;
      min_count = 3;
    } else {
      max_count = 7;
      min_count = 4;
    }
  }
  __dyc_dummy_label:  ;
  __dyc_printpre_byte(prevlen);
  __dyc_printpre_byte(count);
  __dyc_printpre_byte(max_count);
  __dyc_printpre_byte(min_count);
}
}
