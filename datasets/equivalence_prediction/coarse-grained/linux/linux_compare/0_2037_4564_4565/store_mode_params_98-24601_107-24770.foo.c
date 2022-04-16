#include "../../include/dycfoo.h"
#include "../../include/video.i.hd.c.h"
void __dyc_foo(void) 
{ struct boot_params boot_params ;
  int adapter ;
  int force_x ;
  int force_y ;
  int x ;
  int y ;
  u16 tmp ;
  u8 tmp___1 ;
  u8 __dyc_funcallvar_3 ;

  {
  adapter = __dyc_readpre_byte();
  force_x = __dyc_readpre_byte();
  force_y = __dyc_readpre_byte();
  tmp = (u16 )__dyc_readpre_byte();
  __dyc_funcallvar_3 = (u8 )__dyc_readpre_byte();
  memset(& boot_params, 0, sizeof(struct boot_params ));
  x = 0;
  y = 0;
  tmp___1 = 0;
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
  boot_params.screen_info.orig_video_cols = (unsigned char )x;
  boot_params.screen_info.orig_video_lines = (unsigned char )y;
  __dyc_dummy_label:  ;
  __dyc_print_comp_35boot_params(boot_params);
}
}
