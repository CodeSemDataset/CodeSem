#include "../../include/dycfoo.h"
#include "../../include/early_printk.i.hd.c.h"
void __dyc_foo(void) 
{ int max_ypos ;
  int max_xpos ;
  int current_ypos ;
  int current_xpos ;
  char c ;
  int tmp___0 ;

  {
  max_ypos = __dyc_readpre_byte();
  max_xpos = __dyc_readpre_byte();
  current_ypos = __dyc_readpre_byte();
  current_xpos = __dyc_readpre_byte();
  c = (char )__dyc_readpre_byte();
  tmp___0 = 0;
  current_ypos = max_ypos - 1;
  current_xpos = 0;
  current_ypos ++;
  if ((int )c != 13) {
    {
    tmp___0 = current_xpos;
    current_xpos ++;

    }
    if (current_xpos >= max_xpos) {
      current_xpos = 0;
      current_ypos ++;
    }
  }
  __dyc_dummy_label:  ;
  __dyc_printpre_byte(current_ypos);
  __dyc_printpre_byte(current_xpos);
  __dyc_printpre_byte(tmp___0);
}
}
