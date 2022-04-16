#include "../../include/dycfoo.h"
#include "../../include/video-vesa.i.hd.c.h"
void __dyc_foo(void) 
{ struct boot_params boot_params ;
  struct vesa_general_info vginfo ;
  u8 dac_size ;
  u16 ax ;
  u16 bx ;

  {
  vginfo = __dyc_read_comp_39vesa_general_info();
  memset(& boot_params, 0, sizeof(struct boot_params ));
  dac_size = 0;
  ax = 0;
  bx = 0;
  dac_size = (u8 )6;
  if (vginfo.capabilities & 1U) {
    ax = (unsigned short)20232;
    bx = (unsigned short)2048;
    if ((int )ax == 79) {
      dac_size = (unsigned char )((int )bx >> 8);
    }
  }
  boot_params.screen_info.red_size = dac_size;
  boot_params.screen_info.green_size = dac_size;
  boot_params.screen_info.blue_size = dac_size;
  boot_params.screen_info.rsvd_size = dac_size;
  boot_params.screen_info.red_pos = (unsigned char)0;
  boot_params.screen_info.green_pos = (unsigned char)0;
  boot_params.screen_info.blue_pos = (unsigned char)0;
  boot_params.screen_info.rsvd_pos = (unsigned char)0;
  __dyc_dummy_label:  ;
  __dyc_print_comp_35boot_params(boot_params);
  __dyc_printpre_byte(bx);
}
}
