#include "../../include/dycfoo.h"
#include "../../include/ltable.i.hd.c.h"
void __dyc_foo(void) 
{ int lg ;
  int ttlg ;
  int ause ;
  int i ;
  int lc ;
  int lim ;
  Table const   *t ;
  int *nums ;

  {
  lg = __dyc_readpre_byte();
  ttlg = __dyc_readpre_byte();
  ause = __dyc_readpre_byte();
  i = __dyc_readpre_byte();
  lc = __dyc_readpre_byte();
  lim = __dyc_readpre_byte();
  t = (Table const   *)__dyc_read_ptr__typdef_Table();
  nums = __dyc_read_ptr__int();

  if (lim > (int )t->sizearray) {
    lim = (int )t->sizearray;
    if (i > lim) {
      goto __dyc_dummy_label;
    }
  }
  while (1) {
    while_7_continue:  ;
    if (! (i <= lim)) {
      goto while_7_break;
    }
    if (! ((t->array + (i - 1))->tt == 0)) {
      lc ++;
    }
    i ++;
  }
  while_7_break:  ;
  *(nums + lg) += lc;
  ause += lc;
  lg ++;
  ttlg *= 2;
  __dyc_dummy_label:  ;
  __dyc_printpre_byte(lg);
  __dyc_printpre_byte(ttlg);
  __dyc_printpre_byte(ause);
}
}
