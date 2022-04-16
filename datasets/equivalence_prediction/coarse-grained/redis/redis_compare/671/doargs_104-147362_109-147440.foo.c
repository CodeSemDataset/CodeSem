#include "../../include/dycfoo.h"
#include "../../include/luac.i.hd.c.h"
void __dyc_foo(void) 
{ int listing ;
  int dumping ;
  char Output[9] ;
  int i ;
  int version ;
  int argc ;
  char **argv ;

  {
  listing = __dyc_readpre_byte();
  dumping = __dyc_readpre_byte();
  i = __dyc_readpre_byte();
  version = __dyc_readpre_byte();
  argc = __dyc_readpre_byte();
  argv = __dyc_read_ptr__ptr__char();

  if (i == argc) {
    if (listing) {
      dumping = 0;
      i --;
      *(argv + i) = Output;
    } else {
      if (! dumping) {
        dumping = 0;
        i --;
        *(argv + i) = Output;
      }
    }
  }
  if (version) {
    {

    }
    if (version == argc - 1) {
      {

      }
    }
  }
  __dyc_dummy_label:  ;
  __dyc_printpre_byte(dumping);
}
}
