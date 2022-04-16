#include "../../include/dycfoo.h"
#include "../../include/cpu.i.hd.c.h"
void __dyc_foo(void) 
{ u32 *err_flags ;
  char *tmp___0 ;
  int i ;
  int j ;
  u32 e ;
  char *__dyc_funcallvar_2 ;

  {
  err_flags = __dyc_read_ptr__typdef_u32();
  __dyc_funcallvar_2 = __dyc_read_ptr__char();
  tmp___0 = 0;
  i = 0;
  j = 0;
  e = 0;
  tmp___0 = __dyc_funcallvar_2;

  goto __dyc_dummy_label;

  i = 0;
  while (1) {
    while_0_continue:  ;
    if (! (i < 8)) {
      goto while_0_break;
    }
    e = *(err_flags + i);
    j = 0;
    {
    while (1) {
      while_1_continue:  ;
      if (! (j < 32)) {
        goto while_1_break;
      }
      if (e & 1U) {
        {

        }
      }
      e >>= 1;
      j ++;
    }
    while_1_break:  ;
    }
    i ++;
  }
  while_0_break:  ;

  goto __dyc_dummy_label;
  goto __dyc_dummy_label;
  __dyc_dummy_label:  ;
  __dyc_print_ptr__char(tmp___0);
  __dyc_printpre_byte(e);
}
}
