#include "../../include/dycfoo.h"
#include "../../include/video-vesa.i.hd.c.h"
void __dyc_foo(void) 
{ struct vesa_general_info vginfo ;
  struct vesa_mode_info vminfo ;
  u16 ax ;
  u16 cx ;
  u16 di ;
  u16 mode ;
  addr_t mode_ptr ;
  struct mode_info *mi ;
  int nmodes ;
  bool tmp___0 ;
  char *tmp___1 ;
  char *tmp___2 ;
  u16 __dyc_funcallvar_2 ;
  bool __dyc_funcallvar_3 ;
  char *__dyc_funcallvar_4 ;
  char *__dyc_funcallvar_5 ;

  {
  vginfo = __dyc_read_comp_39vesa_general_info();
  vminfo = __dyc_read_comp_40vesa_mode_info();
  nmodes = __dyc_readpre_byte();
  __dyc_funcallvar_2 = (u16 )__dyc_readpre_byte();
  __dyc_funcallvar_3 = (bool )__dyc_readpre_byte();
  __dyc_funcallvar_4 = __dyc_read_ptr__char();
  __dyc_funcallvar_5 = __dyc_read_ptr__char();
  ax = 0;
  cx = 0;
  di = 0;
  mode = 0;
  mode_ptr = 0;
  mi = 0;
  tmp___0 = 0;
  tmp___1 = 0;
  tmp___2 = 0;
  mode_ptr = (unsigned int )vginfo.video_mode_ptr.off;
  while (1) {
    while_0_continue:  ;
    {
    mode = __dyc_funcallvar_2;
    }
    if (! ((int )mode != 65535)) {
      goto while_0_break;
    }
    {
    mode_ptr += 2U;
    tmp___0 = __dyc_funcallvar_3;
    }
    if (! tmp___0) {
      goto while_0_break;
    }
    if ((int )mode & -512) {
      goto while_0_continue;
    }
    {

    ax = (unsigned short)20225;
    cx = mode;
    di = (unsigned short )((unsigned long )(& vminfo));

    }
    if ((int )ax != 79) {
      goto while_0_continue;
    }
    if (((int )vminfo.mode_attr & 21) == 5) {
      {
      tmp___1 = __dyc_funcallvar_4;
      mi = (struct mode_info *)tmp___1;
      mi->mode = (unsigned short )((int )mode + 512);
      mi->x = (unsigned char )vminfo.h_res;
      mi->y = (unsigned char )vminfo.v_res;
      nmodes ++;
      }
    } else {
      if (((int )vminfo.mode_attr & 153) == 153) {
        {
        tmp___2 = __dyc_funcallvar_5;
        mi = (struct mode_info *)tmp___2;
        mi->mode = (unsigned short )((int )mode + 512);
        mi->y = (unsigned char)0;
        mi->x = mi->y;
        nmodes ++;
        }
      }
    }
  }
  while_0_break:  ;
  goto __dyc_dummy_label;
  __dyc_dummy_label:  ;
  __dyc_printpre_byte(cx);
  __dyc_printpre_byte(di);
  __dyc_printpre_byte(mode_ptr);
  __dyc_printpre_byte(nmodes);
}
}
