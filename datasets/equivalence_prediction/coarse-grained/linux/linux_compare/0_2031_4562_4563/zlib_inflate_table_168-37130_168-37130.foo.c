#include "../../include/dycfoo.h"
#include "../../include/inftrees.i.hd.c.h"
void __dyc_foo(void) 
{ unsigned short const   lbase[31] ;
  unsigned short const   lext[31] ;
  unsigned short const   dbase[32] ;
  unsigned short const   dext[32] ;
  unsigned short const   *base ;
  unsigned short const   *extra ;
  int end ;
  unsigned short *work ;

  {
  work = __dyc_read_ptr__short();
  base = 0;
  extra = 0;
  end = 0;
  if (0) {
    switch_7_0:  
    extra = (unsigned short const   *)work;
    base = extra;
    end = 19;
    goto switch_7_break;
    switch_7_1:  
    base = lbase;
    base -= 257;
    extra = lext;
    extra -= 257;
    end = 256;
    goto switch_7_break;
    switch_7_default:  
    base = dbase;
    extra = dext;
    end = -1;
  } else {
    switch_7_break:  ;
  }
  __dyc_dummy_label:  ;
  __dyc_print_ptr__short(base);
  __dyc_printpre_byte(end);
}
}
