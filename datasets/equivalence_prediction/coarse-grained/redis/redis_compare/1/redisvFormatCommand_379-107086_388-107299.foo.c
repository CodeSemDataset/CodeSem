#include "../../include/dycfoo.h"
#include "../../include/hiredis.i.hd.c.h"
void __dyc_foo(void) 
{ char const   *c ;
  sds curarg ;
  char **curargv ;
  char **newargv ;
  int argc ;
  int totlen ;
  void *tmp___25 ;
  int tmp___26 ;
  size_t tmp___27 ;
  size_t tmp___28 ;
  void *__dyc_funcallvar_21 ;
  size_t __dyc_funcallvar_22 ;
  size_t __dyc_funcallvar_23 ;

  {
  c = (char const   *)__dyc_read_ptr__char();
  curarg = __dyc_read_ptr__char();
  argc = __dyc_readpre_byte();
  totlen = __dyc_readpre_byte();
  __dyc_funcallvar_21 = __dyc_read_ptr__void();
  __dyc_funcallvar_22 = (size_t )__dyc_readpre_byte();
  __dyc_funcallvar_23 = (size_t )__dyc_readpre_byte();
  curargv = 0;
  newargv = 0;
  tmp___25 = 0;
  tmp___26 = 0;
  tmp___27 = 0;
  tmp___28 = 0;
  c ++;
  tmp___25 = __dyc_funcallvar_21;
  newargv = (char **)tmp___25;
  if ((unsigned long )newargv == (unsigned long )((void *)0)) {
    goto __dyc_dummy_label;
  }
  curargv = newargv;
  tmp___26 = argc;
  argc ++;
  *(curargv + tmp___26) = curarg;
  tmp___27 = __dyc_funcallvar_22;
  tmp___28 = __dyc_funcallvar_23;
  totlen = (int )((size_t )totlen + tmp___28);
  __dyc_dummy_label:  ;
  __dyc_print_ptr__char(c);
  __dyc_printpre_byte(argc);
  __dyc_printpre_byte(totlen);
  __dyc_printpre_byte(tmp___27);
}
}
