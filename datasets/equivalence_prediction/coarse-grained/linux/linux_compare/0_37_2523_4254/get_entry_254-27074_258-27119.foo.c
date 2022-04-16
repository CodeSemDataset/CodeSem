#include "../../include/dycfoo.h"
#include "../../include/video.i.hd.c.h"
void __dyc_foo(void) 
{ char entry_buf[4] ;
  int len ;
  int key ;
  int tmp ;
  int __dyc_funcallvar_1 ;

  {
  __dyc_funcallvar_1 = __dyc_readpre_byte();
  len = 0;
  key = 0;
  tmp = 0;
  len = 0;
  while (1) {
    while_6_continue:  ;
    {
    key = __dyc_funcallvar_1;
    }
    if (key == 8) {
      if (len > 0) {
        {

        len --;
        }
      }
    } else {
      if (key >= 48) {
        if (key <= 57) {
          goto _L;
        } else {
          goto _L___1;
        }
      } else {
        _L___1:  
        if (key >= 65) {
          if (key <= 90) {
            goto _L;
          } else {
            goto _L___0;
          }
        } else {
          _L___0:  
          if (key >= 97) {
            if (key <= 122) {
              _L:  
              if ((unsigned long )len < sizeof(char [4])) {
                {
                tmp = len;
                len ++;
                entry_buf[tmp] = (char )key;

                }
              }
            }
          }
        }
      }
    }
    if (! (key != 13)) {
      goto __dyc_dummy_label;
    }
  }
  __dyc_dummy_label:  ;
  __dyc_printpre_byte(len);
}
}
