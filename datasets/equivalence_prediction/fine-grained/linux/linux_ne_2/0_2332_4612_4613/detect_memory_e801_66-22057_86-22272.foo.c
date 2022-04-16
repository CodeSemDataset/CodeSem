#include "../../include/dycfoo.h"
#include "../../include/memory.i.hd.c.h"
void __dyc_foo(void) 
{ struct boot_params boot_params ;
  u16 ax ;
  u16 bx ;
  u16 cx ;
  u16 dx ;
  u8 err ;

  {
  err = (u8 )__dyc_readpre_byte();
  memset(& boot_params, 0, sizeof(struct boot_params ));
  ax = 0;
  bx = 0;
  cx = 0;
  dx = 0;
  dx = (unsigned short)0;
  cx = dx;
  bx = cx;
  ax = (unsigned short)59393;
  if (err) {
    goto __dyc_dummy_label;
  }
  if (cx) {
    ax = cx;
    bx = dx;
  } else {
    if (dx) {
      ax = cx;
      bx = dx;
    }
  }
  if ((int )ax > 15360) {
    goto __dyc_dummy_label;
  }
  if ((int )ax == 15360) {
    boot_params.alt_mem_k = (unsigned int )(((int )dx << 6) + (int )ax);
  } else {
    boot_params.alt_mem_k = (unsigned int )ax;
  }
  __dyc_dummy_label:  ;
  __dyc_print_comp_35boot_params(boot_params);
  __dyc_printpre_byte(ax);
  __dyc_printpre_byte(bx);
}
}
