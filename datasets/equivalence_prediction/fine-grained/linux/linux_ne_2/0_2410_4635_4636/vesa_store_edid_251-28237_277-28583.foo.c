#include "../../include/dycfoo.h"
#include "../../include/video-vesa.i.hd.c.h"
void __dyc_foo(void) 
{ struct boot_params boot_params ;
  struct vesa_general_info vginfo ;
  u16 ax ;
  u16 bx ;
  u16 cx ;
  u16 dx ;
  u16 di ;

  {
  boot_params = __dyc_read_comp_35boot_params();
  vginfo = __dyc_read_comp_39vesa_general_info();
  ax = 0;
  bx = 0;
  cx = 0;
  dx = 0;
  di = 0;
  if ((int )vginfo.version < 512) {
    goto __dyc_dummy_label;
  }
  ax = (unsigned short)20245;
  bx = (unsigned short)0;
  cx = (unsigned short)0;
  di = (unsigned short)0;
  if ((int )ax != 79) {
    goto __dyc_dummy_label;
  }
  ax = (unsigned short)20245;
  bx = (unsigned short)1;
  cx = (unsigned short)0;
  dx = (unsigned short)0;
  di = (unsigned short )((unsigned long )(& boot_params.edid_info));
  __dyc_dummy_label:  ;
  __dyc_printpre_byte(ax);
  __dyc_printpre_byte(bx);
  __dyc_printpre_byte(cx);
  __dyc_printpre_byte(dx);
  __dyc_printpre_byte(di);
}
}
