#include "../../include/dycfoo.h"
#include "../../include/video.i.hd.c.h"
void __dyc_foo(void) 
{ int nmode ;
  struct mode_info *mi ;
  int visible ;
  int tmp ;
  int tmp___0 ;
  u16 mode ;
  u16 *real_mode ;
  int __dyc_funcallvar_1 ;
  int __dyc_funcallvar_2 ;
  int __dyc_funcallvar_3 ;

  {
  nmode = __dyc_readpre_byte();
  mi = __dyc_read_ptr__comp_36mode_info();
  tmp = __dyc_readpre_byte();
  mode = (u16 )__dyc_readpre_byte();
  real_mode = __dyc_read_ptr__typdef_u16();
  __dyc_funcallvar_1 = __dyc_readpre_byte();
  __dyc_funcallvar_2 = __dyc_readpre_byte();
  __dyc_funcallvar_3 = __dyc_readpre_byte();
  visible = 0;
  tmp___0 = 0;
  visible = tmp;
  if ((int )mode == nmode) {
    if (visible) {
      {
      *real_mode = mi->mode;
      tmp___0 = __dyc_funcallvar_1;
      }
      goto __dyc_dummy_label;
    } else {
      goto _L;
    }
  } else {
    _L:  
    if ((int )mode == (int )mi->mode) {
      {
      *real_mode = mi->mode;
      tmp___0 = __dyc_funcallvar_2;
      }
      goto __dyc_dummy_label;
    } else {
      if ((int )mode == ((int )mi->y << 8) + (int )mi->x) {
        {
        *real_mode = mi->mode;
        tmp___0 = __dyc_funcallvar_3;
        }
        goto __dyc_dummy_label;
      }
    }
  }
  __dyc_dummy_label:  ;
  __dyc_printpre_byte(visible);
  __dyc_printpre_byte(tmp___0);
}
}
