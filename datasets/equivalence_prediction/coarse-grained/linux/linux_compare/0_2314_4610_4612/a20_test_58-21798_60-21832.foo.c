#include "../../include/dycfoo.h"
#include "../../include/a20.i.hd.c.h"
void __dyc_foo(void) 
{ int ok ;
  int saved ;
  int ctr ;
  u32 tmp ;
  u32 tmp___0 ;
  int tmp___1 ;
  int loops ;
  u32 __dyc_funcallvar_2 ;

  {
  tmp = (u32 )__dyc_readpre_byte();
  loops = __dyc_readpre_byte();
  __dyc_funcallvar_2 = (u32 )__dyc_readpre_byte();
  ok = 0;
  saved = 0;
  ctr = 0;
  tmp___0 = 0;
  tmp___1 = 0;
  ctr = (int )tmp;
  saved = ctr;
  while (1) {
    while_1_continue:  ;
    tmp___1 = loops;
    loops --;
    if (! tmp___1) {
      goto __dyc_dummy_label;
    }
    {
    ctr ++;


    tmp___0 = __dyc_funcallvar_2;
    ok = (int )(tmp___0 ^ (unsigned int )ctr);
    }
    if (ok) {
      goto __dyc_dummy_label;
    }
  }
  __dyc_dummy_label:  ;
  __dyc_printpre_byte(saved);
  __dyc_printpre_byte(loops);
}
}
