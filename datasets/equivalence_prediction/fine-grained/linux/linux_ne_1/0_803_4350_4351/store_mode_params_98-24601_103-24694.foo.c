#include "../../include/dycfoo.h"
#include "../../include/video.i.hd.c.h"
void __dyc_foo(void) 
{ int adapter ;
  int force_x ;
  int force_y ;
  int x ;
  int y ;
  u16 tmp ;
  u8 tmp___1 ;
  u16 __dyc_funcallvar_2 ;
  u8 __dyc_funcallvar_3 ;

  {
  adapter = __dyc_readpre_byte();
  force_x = __dyc_readpre_byte();
  force_y = __dyc_readpre_byte();
  __dyc_funcallvar_2 = (u16 )__dyc_readpre_byte();
  __dyc_funcallvar_3 = (u8 )__dyc_readpre_byte();
  x = 0;
  y = 0;
  tmp = 0;
  tmp___1 = 0;
  tmp = __dyc_funcallvar_2;
  x = (int )tmp;
  if (adapter == 0) {
    y = 25;
  } else {
    {
    tmp___1 = __dyc_funcallvar_3;
    y = (int )tmp___1 + 1;
    }
  }
  if (force_x) {
    x = force_x;
  }
  if (force_y) {
    y = force_y;
  }
  __dyc_dummy_label:  ;
  __dyc_printpre_byte(x);
  __dyc_printpre_byte(y);
}
}
