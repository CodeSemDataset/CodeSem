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
  ch = (char )__dyc_readpre_byte();
  mi = 0;
  i = 0;
  visible = 0;
  tmp = 0;
  mode_id = 0;
  tmp___0 = 0;
  mi = card->modes;
  i = 0;
  while (1) {
    while_9_continue:  ;
    if (! (i < card->nmodes)) {
      goto while_9_break;
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
      goto __Cont;
    }
    {

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
    __Cont:  
    i ++;
    mi ++;
  }
  while_9_break:  ;
  card ++;
  __dyc_dummy_label:  ;
  __dyc_print_ptr__comp_37card_info(card);
  __dyc_print_ptr__comp_36mode_info(mi);
  __dyc_printpre_byte(ch);
  __dyc_printpre_byte(mode_id);
}
}
