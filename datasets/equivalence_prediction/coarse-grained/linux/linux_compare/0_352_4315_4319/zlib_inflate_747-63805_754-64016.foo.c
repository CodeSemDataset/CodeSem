#include "../../include/dycfoo.h"
#include "../../include/inflate.i.hd.c.h"
void __dyc_foo(void) 
{ unsigned int in ;
  unsigned int out ;
  int ret ;
  int tmp___27 ;
  z_streamp strm ;
  int flush ;
  int __dyc_funcallvar_8 ;

  {
  in = (unsigned int )__dyc_readpre_byte();
  out = (unsigned int )__dyc_readpre_byte();
  ret = __dyc_readpre_byte();
  strm = __dyc_read_ptr__typdef_z_stream();
  flush = __dyc_readpre_byte();
  __dyc_funcallvar_8 = __dyc_readpre_byte();
  tmp___27 = 0;
  if (flush == 2) {
    if (ret == 0) {
      if (strm->avail_out != 0U) {
        if (strm->avail_in == 0U) {
          {
          tmp___27 = __dyc_funcallvar_8;
          }
          goto __dyc_dummy_label;
        }
      }
    }
  }
  if (in == 0U) {
    if (out == 0U) {
      goto _L;
    } else {
      goto _L___0;
    }
  } else {
    _L___0:  
    if (flush == 5) {
      _L:  
      if (ret == 0) {
        ret = -5;
      }
    }
  }
  goto __dyc_dummy_label;
  __dyc_dummy_label:  ;
  __dyc_printpre_byte(ret);
  __dyc_printpre_byte(tmp___27);
}
}
