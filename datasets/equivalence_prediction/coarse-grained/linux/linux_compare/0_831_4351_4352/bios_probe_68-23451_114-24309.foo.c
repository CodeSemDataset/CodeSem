#include "../../include/dycfoo.h"
#include "../../include/video-bios.i.hd.c.h"
void __dyc_foo(void) 
{ struct boot_params boot_params ;
  int adapter ;
  u8 mode ;
  u8 saved_mode ;
  u16 crtc ;
  struct mode_info *mi ;
  int nmodes ;
  char *tmp ;
  bool tmp___0 ;
  int tmp___1 ;
  int tmp___2 ;
  u8 tmp___3 ;
  u8 tmp___4 ;
  u8 tmp___5 ;
  char *tmp___6 ;
  u16 tmp___7 ;
  u8 tmp___8 ;
  struct card_info video_bios ;
  u16 __dyc_funcallvar_1 ;
  char *__dyc_funcallvar_2 ;
  bool __dyc_funcallvar_3 ;
  int __dyc_funcallvar_4 ;
  int __dyc_funcallvar_5 ;
  u8 __dyc_funcallvar_6 ;
  u8 __dyc_funcallvar_7 ;
  u8 __dyc_funcallvar_8 ;
  char *__dyc_funcallvar_9 ;
  u16 __dyc_funcallvar_10 ;
  u8 __dyc_funcallvar_11 ;

  {
  boot_params = __dyc_read_comp_35boot_params();
  adapter = __dyc_readpre_byte();
  __dyc_funcallvar_1 = (u16 )__dyc_readpre_byte();
  __dyc_funcallvar_2 = __dyc_read_ptr__char();
  __dyc_funcallvar_3 = (bool )__dyc_readpre_byte();
  __dyc_funcallvar_4 = __dyc_readpre_byte();
  __dyc_funcallvar_5 = __dyc_readpre_byte();
  __dyc_funcallvar_6 = (u8 )__dyc_readpre_byte();
  __dyc_funcallvar_7 = (u8 )__dyc_readpre_byte();
  __dyc_funcallvar_8 = (u8 )__dyc_readpre_byte();
  __dyc_funcallvar_9 = __dyc_read_ptr__char();
  __dyc_funcallvar_10 = (u16 )__dyc_readpre_byte();
  __dyc_funcallvar_11 = (u8 )__dyc_readpre_byte();
  mode = 0;
  saved_mode = 0;
  crtc = 0;
  mi = 0;
  nmodes = 0;
  tmp = 0;
  tmp___0 = 0;
  tmp___1 = 0;
  tmp___2 = 0;
  tmp___3 = 0;
  tmp___4 = 0;
  tmp___5 = 0;
  tmp___6 = 0;
  tmp___7 = 0;
  tmp___8 = 0;
  memset(& video_bios, 0, sizeof(struct card_info ));
  saved_mode = boot_params.screen_info.orig_video_mode;
  nmodes = 0;
  if (adapter != 1) {
    if (adapter != 2) {
      goto __dyc_dummy_label;
    }
  }

  crtc = __dyc_funcallvar_1;
  tmp = __dyc_funcallvar_2;
  video_bios.modes = (struct mode_info *)tmp;
  mode = (unsigned char)20;
  while (1) {
    while_0_continue:  ;
    if (! ((int )mode <= 127)) {
      goto while_0_break;
    }
    {
    tmp___0 = __dyc_funcallvar_3;
    }
    if (! tmp___0) {
      goto while_0_break;
    }
    {
    tmp___1 = __dyc_funcallvar_4;
    }
    if (tmp___1) {
      goto __Cont;
    }
    {
    tmp___2 = __dyc_funcallvar_5;
    }
    if (tmp___2) {
      goto __Cont;
    }
    {
    tmp___3 = __dyc_funcallvar_6;
    }
    if ((int )tmp___3 & 1) {
      goto __Cont;
    }
    {
    tmp___4 = __dyc_funcallvar_7;
    }
    if ((int )tmp___4 & 1) {
      goto __Cont;
    }
    {
    tmp___5 = __dyc_funcallvar_8;
    }
    if (tmp___5) {
      goto __Cont;
    }
    {
    tmp___6 = __dyc_funcallvar_9;
    mi = (struct mode_info *)tmp___6;
    mi->mode = (unsigned short )(256 + (int )mode);
    tmp___7 = __dyc_funcallvar_10;
    mi->x = (unsigned char )tmp___7;
    tmp___8 = __dyc_funcallvar_11;
    mi->y = (unsigned char )((int )tmp___8 + 1);
    nmodes ++;
    }
    __Cont:  
    mode = (u8 )((int )mode + 1);
  }
  while_0_break:  ;

  goto __dyc_dummy_label;
  __dyc_dummy_label:  ;
  __dyc_printpre_byte(saved_mode);
  __dyc_printpre_byte(crtc);
  __dyc_printpre_byte(nmodes);
  __dyc_print_comp_37card_info(video_bios);
}
}
