#include "../../include/dycfoo.h"
#include "../../include/video-vesa.i.hd.c.h"
void __dyc_foo(void) 
{ struct vesa_mode_info vminfo ;
  u16 mode ;
  struct mode_info *mi ;
  int nmodes ;
  char *tmp___1 ;
  char *tmp___2 ;
  char *__dyc_funcallvar_5 ;

  {
  vminfo = __dyc_read_comp_40vesa_mode_info();
  mode = (u16 )__dyc_readpre_byte();
  nmodes = __dyc_readpre_byte();
  tmp___1 = __dyc_read_ptr__char();
  __dyc_funcallvar_5 = __dyc_read_ptr__char();
  mi = 0;
  tmp___2 = 0;
  mi = (struct mode_info *)tmp___1;
  mi->mode = (unsigned short )((int )mode + 512);
  mi->x = (unsigned char )vminfo.h_res;
  mi->y = (unsigned char )vminfo.v_res;
  nmodes ++;
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
  __dyc_dummy_label:  ;
  __dyc_printpre_byte(nmodes);
}
}
