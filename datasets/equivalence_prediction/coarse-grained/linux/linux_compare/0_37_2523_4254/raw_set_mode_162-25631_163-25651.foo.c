#include "../../include/dycfoo.h"
#include "../../include/video.i.hd.c.h"
void __dyc_foo(void) 
{ int nmode ;
  int i ;
  struct card_info *card ;
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
  card = __dyc_read_ptr__comp_37card_info();
  mode = (u16 )__dyc_readpre_byte();
  real_mode = __dyc_read_ptr__typdef_u16();
  __dyc_funcallvar_1 = __dyc_readpre_byte();
  __dyc_funcallvar_2 = __dyc_readpre_byte();
  __dyc_funcallvar_3 = __dyc_readpre_byte();
  i = 0;
  mi = 0;
  visible = 0;
  tmp = 0;
  tmp___0 = 0;
  mi = card->modes;
  i = 0;
  while (1) {
    while_4_continue:  ;
    if (! (i < card->nmodes)) {
      goto __dyc_dummy_label;
    }
    if (mi->x) {
      tmp = 1;
    } else {
      if (mi->y) {
        tmp = 1;
      } else {
        tmp = 0;
      }
    }
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
    if (visible) {
      nmode ++;
    }
    i ++;
    mi ++;
  }
  __dyc_dummy_label:  ;
  __dyc_printpre_byte(nmode);
  __dyc_print_ptr__comp_36mode_info(mi);
  __dyc_printpre_byte(visible);
  __dyc_printpre_byte(tmp___0);
}
}
