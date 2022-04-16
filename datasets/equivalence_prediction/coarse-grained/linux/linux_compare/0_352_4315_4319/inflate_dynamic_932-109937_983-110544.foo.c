#include "../../include/dycfoo.h"
#include "../../include/misc_64.i.hd.c.h"
void __dyc_foo(void) 
{ int dbits ;
  int i ;
  int bd ;
  int ret ;
  int tmp___39 ;
  int __dyc_funcallvar_12 ;
  int __dyc_funcallvar_13 ;

  {
  dbits = (int const   )__dyc_readpre_byte();
  i = __dyc_readpre_byte();
  __dyc_funcallvar_12 = __dyc_readpre_byte();
  __dyc_funcallvar_13 = __dyc_readpre_byte();
  bd = 0;
  ret = 0;
  tmp___39 = 0;
  if (i != 0) {
    if (i == 1) {
      {


      }
    }
    ret = i;
    goto __dyc_dummy_label;
  }
  bd = (int )dbits;
  i = __dyc_funcallvar_12;
  if (i != 0) {
    if (i == 1) {
      {


      }
    }
    {

    ret = i;
    }
    goto __dyc_dummy_label;
  }
  tmp___39 = __dyc_funcallvar_13;
  if (tmp___39) {
    ret = 1;
    goto __dyc_dummy_label;
  }


  ret = 0;

  goto __dyc_dummy_label;
  underrun: 
  ret = 4;
  goto __dyc_dummy_label;
  __dyc_dummy_label:  ;
  __dyc_printpre_byte(bd);
  __dyc_printpre_byte(ret);
}
}
