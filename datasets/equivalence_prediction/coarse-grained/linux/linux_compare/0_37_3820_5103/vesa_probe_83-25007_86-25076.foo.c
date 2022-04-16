#include "../../include/dycfoo.h"
#include "../../include/video-vesa.i.hd.c.h"
void __dyc_foo(void) 
{ struct vesa_mode_info vminfo ;
  u16 mode ;
  struct mode_info *mi ;
  int nmodes ;
  char *tmp___2 ;
  char *__dyc_funcallvar_5 ;

  {
  vminfo = __dyc_read_comp_40vesa_mode_info();
  mode = (u16 )__dyc_readpre_byte();
  mi = __dyc_read_ptr__comp_36mode_info();
  nmodes = __dyc_readpre_byte();
  __dyc_funcallvar_5 = __dyc_read_ptr__char();
  tmp___2 = 0;
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
