#include "../../include/dycfoo.h"
#include "../../include/cpu.i.hd.c.h"
void __dyc_foo(void) 
{ u32 *err_flags ;
  int cpu_level ;
  int req_level ;
  char *tmp ;
  char *tmp___0 ;
  int i ;
  int j ;
  u32 e ;
  char *__dyc_funcallvar_1 ;
  char *__dyc_funcallvar_2 ;

  {
  err_flags = __dyc_read_ptr__typdef_u32();
  cpu_level = __dyc_readpre_byte();
  req_level = __dyc_readpre_byte();
  __dyc_funcallvar_1 = __dyc_read_ptr__char();
  __dyc_funcallvar_2 = __dyc_read_ptr__char();
  tmp = 0;
  tmp___0 = 0;
  i = 0;
  j = 0;
  e = 0;
  if (cpu_level < req_level) {
    {
    tmp = __dyc_funcallvar_1;

    tmp___0 = __dyc_funcallvar_2;

    }
    goto __dyc_dummy_label;
  }
  if (err_flags) {
    {

    i = 0;
    }
    {
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
    }
    {

    }
    goto __dyc_dummy_label;
  }
  __dyc_dummy_label:  ;
  __dyc_print_ptr__char(tmp);
  __dyc_print_ptr__char(tmp___0);
  __dyc_printpre_byte(e);
}
}
