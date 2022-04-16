#include "../../include/dycfoo.h"
#include "../../include/video.i.hd.c.h"
void __dyc_foo(void) 
{ struct card_info *card ;
  struct mode_info *mi ;
  char ch ;
  int i ;
  int visible ;
  int tmp ;
  u16 mode_id ;
  int tmp___0 ;

  {
  card = __dyc_read_ptr__comp_37card_info();
  mi = __dyc_read_ptr__comp_36mode_info();
  ch = (char )__dyc_readpre_byte();
  i = __dyc_readpre_byte();
  visible = 0;
  tmp = 0;
  mode_id = 0;
  tmp___0 = 0;
  if (! (i < card->nmodes)) {
    goto __dyc_dummy_label;
  }
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

  if ((int )ch == 57) {
    ch = (char )'a';
  } else {
    if ((int )ch == 122) {
      ch = (char )' ';
    } else {
      if ((int )ch == 32) {
        ch = (char )' ';
      } else {
        ch = (char )((int )ch + 1);
      }
    }
  }
  __dyc_dummy_label:  ;
  __dyc_printpre_byte(ch);
  __dyc_printpre_byte(mode_id);
}
}
