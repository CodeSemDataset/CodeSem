#include "../../include/dycfoo.h"
#include "../../include/video-vesa.i.hd.c.h"
void __dyc_foo(void) 
{ struct vesa_mode_info vminfo ;
  u16 ax ;
  u16 bx ;
  u16 di ;
  int is_graphic ;
  u16 vesa_mode ;

  {
  vminfo = __dyc_read_comp_40vesa_mode_info();
  ax = (u16 )__dyc_readpre_byte();
  vesa_mode = (u16 )__dyc_readpre_byte();
  bx = 0;
  di = 0;
  is_graphic = 0;
  if ((int )ax != 79) {
    goto __dyc_dummy_label;
  }
  if (((int )vminfo.mode_attr & 21) == 5) {
    is_graphic = 0;
  } else {
    if (((int )vminfo.mode_attr & 153) == 153) {
      is_graphic = 1;
      vesa_mode = (unsigned short )((int )vesa_mode | 16384);
    } else {
      goto __dyc_dummy_label;
    }
  }
  ax = (unsigned short)20226;
  bx = vesa_mode;
  di = (unsigned short)0;
  if ((int )ax != 79) {
    goto __dyc_dummy_label;
  }
  __dyc_dummy_label:  ;
  __dyc_printpre_byte(bx);
  __dyc_printpre_byte(di);
  __dyc_printpre_byte(is_graphic);
}
}
