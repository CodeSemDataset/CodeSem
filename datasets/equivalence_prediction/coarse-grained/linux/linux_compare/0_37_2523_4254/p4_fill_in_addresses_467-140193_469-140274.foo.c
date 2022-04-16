#include "../../include/dycfoo.h"
#include "../../include/op_model_p4.i.hd.c.h"
void __dyc_foo(void) 
{ unsigned int i ;
  unsigned int tmp___12 ;
  int tmp___13 ;
  unsigned int tmp___14 ;
  int tmp___15 ;
  struct op_msrs *msrs ;
  int __dyc_funcallvar_15 ;
  int __dyc_funcallvar_16 ;

  {
  i = (unsigned int )__dyc_readpre_byte();
  msrs = __dyc_read_ptr__comp_137op_msrs();
  __dyc_funcallvar_15 = __dyc_readpre_byte();
  __dyc_funcallvar_16 = __dyc_readpre_byte();
  tmp___12 = 0;
  tmp___13 = 0;
  tmp___14 = 0;
  tmp___15 = 0;
  tmp___13 = __dyc_funcallvar_15;
  if (tmp___13) {
    tmp___12 = i;
    i ++;
    (msrs->controls + tmp___12)->addr = 993UL;
  }
  tmp___15 = __dyc_funcallvar_16;
  if (tmp___15) {
    tmp___14 = i;
    i ++;
    (msrs->controls + tmp___14)->addr = 992UL;
  }
  __dyc_dummy_label:  ;
  __dyc_printpre_byte(i);
}
}
