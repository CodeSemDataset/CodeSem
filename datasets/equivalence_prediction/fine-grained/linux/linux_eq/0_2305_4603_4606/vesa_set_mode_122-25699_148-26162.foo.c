#include "../../include/dycfoo.h"
#include "../../include/video-vesa.i.hd.c.h"
void __dyc_foo(void) 
{ int force_x ;
  int force_y ;
  int do_restore ;
  int graphic_mode ;
  struct vesa_mode_info vminfo ;
  u16 ax ;
  u16 bx ;
  u16 di ;
  int is_graphic ;
  u16 vesa_mode ;
  struct mode_info *mode ;

  {
  vminfo = __dyc_read_comp_40vesa_mode_info();
  ax = (u16 )__dyc_readpre_byte();
  vesa_mode = (u16 )__dyc_readpre_byte();
  mode = __dyc_read_ptr__comp_36mode_info();
  force_x = 0;
  force_y = 0;
  do_restore = 0;
  graphic_mode = 0;
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
  graphic_mode = is_graphic;
  if (! is_graphic) {
    force_x = (int )mode->x;
    force_y = (int )mode->y;
    do_restore = 1;
  } else {
    {

    }
  }
  __dyc_dummy_label:  ;
  __dyc_printpre_byte(force_x);
  __dyc_printpre_byte(force_y);
  __dyc_printpre_byte(do_restore);
  __dyc_printpre_byte(graphic_mode);
  __dyc_printpre_byte(bx);
  __dyc_printpre_byte(di);
  __dyc_printpre_byte(is_graphic);
}
}
