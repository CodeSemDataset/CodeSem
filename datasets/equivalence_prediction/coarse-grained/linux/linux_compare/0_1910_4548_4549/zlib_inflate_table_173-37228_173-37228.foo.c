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
  codetype type ;
  unsigned short *work ;

  {
  type = (codetype )__dyc_readpre_byte();
  base = 0;
  extra = 0;
  end = 0;
  work = 0;
  if ((int )type == 1) {
    goto switch_7_1;
  } else {
    {
    goto switch_7_default;
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
    }
  }
  __dyc_dummy_label:  ;
  __dyc_print_ptr__short(base);
  __dyc_print_ptr__short(extra);
  __dyc_printpre_byte(end);
}
}
