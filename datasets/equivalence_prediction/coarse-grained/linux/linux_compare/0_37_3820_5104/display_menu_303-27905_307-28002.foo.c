#include "../../include/dycfoo.h"
#include "../../include/video.i.hd.c.h"
void __dyc_foo(void) 
{ struct mode_info *mi ;
  int visible ;
  int tmp ;
  u16 mode_id ;
  int tmp___0 ;

  {
  mi = __dyc_read_ptr__comp_36mode_info();
  visible = 0;
  tmp = 0;
  mode_id = 0;
  tmp___0 = 0;
  if (mi->x) {
    if (mi->y) {
      tmp = 1;
    } else {
      tmp = 0;
    }
  } else {
    tmp = 0;
  }
  visible = tmp;
  if (mi->mode) {
    tmp___0 = (int )mi->mode;
  } else {
    tmp___0 = ((int )mi->y << 8) + (int )mi->x;
  }
  mode_id = (u16 )tmp___0;
  if (! visible) {
    goto __dyc_dummy_label;
  }
  __dyc_dummy_label:  ;
  __dyc_printpre_byte(mode_id);
}
}
