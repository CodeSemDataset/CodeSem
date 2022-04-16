#include "../../include/dycfoo.h"
#include "../../include/lua_cmsgpack.i.hd.c.h"
void __dyc_foo(void) 
{ size_t len ;
  mp_cur c ;
  int cnt ;
  int decode_all ;
  int tmp___2 ;
  int tmp___3 ;
  int offset___0 ;
  int tmp___4 ;
  int limit ;
  int __dyc_funcallvar_5 ;
  int __dyc_funcallvar_6 ;

  {
  len = (size_t )__dyc_readpre_byte();
  c = __dyc_read_comp_45mp_cur();
  cnt = __dyc_readpre_byte();
  decode_all = __dyc_readpre_byte();
  limit = __dyc_readpre_byte();
  __dyc_funcallvar_5 = __dyc_readpre_byte();
  __dyc_funcallvar_6 = __dyc_readpre_byte();
  tmp___2 = 0;
  tmp___3 = 0;
  offset___0 = 0;
  tmp___4 = 0;
  while (1) {
    while_58_continue:  ;
    if (c.left > 0UL) {
      if (! (cnt < limit)) {
        goto while_58_break;
      }
    } else {
      goto while_58_break;
    }
    {

    }
    if (c.err == 1) {
      {
      tmp___2 = __dyc_funcallvar_5;
      }
      goto __dyc_dummy_label;
    } else {
      if (c.err == 2) {
        {
        tmp___3 = __dyc_funcallvar_6;
        }
        goto __dyc_dummy_label;
      }
    }
    cnt ++;
  }
  while_58_break:  ;
  if (! decode_all) {
    {
    offset___0 = (int )(len - c.left);

    }
    if (c.left == 0UL) {
      tmp___4 = -1;
    } else {
      tmp___4 = offset___0;
    }
    {


    cnt ++;
    }
  }
  __dyc_dummy_label:  ;
  __dyc_printpre_byte(cnt);
  __dyc_printpre_byte(tmp___2);
  __dyc_printpre_byte(tmp___3);
  __dyc_printpre_byte(offset___0);
  __dyc_printpre_byte(tmp___4);
}
}
