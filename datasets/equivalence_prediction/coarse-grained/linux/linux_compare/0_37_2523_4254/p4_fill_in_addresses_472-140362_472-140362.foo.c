#include "../../include/dycfoo.h"
#include "../../include/op_model_p4.i.hd.c.h"
void __dyc_foo(void) 
{ unsigned int i ;
  unsigned int stag ;
  unsigned int tmp___16 ;
  int tmp___17 ;
  unsigned int tmp___18 ;
  unsigned int tmp___19 ;
  int tmp___20 ;
  struct op_msrs *msrs ;
  int __dyc_funcallvar_17 ;
  int __dyc_funcallvar_18 ;

  {
  i = (unsigned int )__dyc_readpre_byte();
  stag = (unsigned int )__dyc_readpre_byte();
  msrs = __dyc_read_ptr__comp_137op_msrs();
  __dyc_funcallvar_17 = __dyc_readpre_byte();
  __dyc_funcallvar_18 = __dyc_readpre_byte();
  tmp___16 = 0;
  tmp___17 = 0;
  tmp___18 = 0;
  tmp___19 = 0;
  tmp___20 = 0;
  if (stag == 0U) {
    {
    tmp___17 = __dyc_funcallvar_17;
    }
    if (tmp___17) {
      tmp___16 = i;
      i ++;
      (msrs->controls + tmp___16)->addr = 992UL;
    }
  } else {
    {
    tmp___20 = __dyc_funcallvar_18;
    }
    if (tmp___20) {
      tmp___18 = i;
      i ++;
      (msrs->controls + tmp___18)->addr = 993UL;
      tmp___19 = i;
      i ++;
      (msrs->controls + tmp___19)->addr = 993UL;
    }
  }
  __dyc_dummy_label:  ;
  __dyc_printpre_byte(i);
}
}
