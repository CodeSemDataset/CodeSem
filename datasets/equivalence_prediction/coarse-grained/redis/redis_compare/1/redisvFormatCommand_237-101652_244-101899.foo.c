#include "../../include/dycfoo.h"
#include "../../include/hiredis.i.hd.c.h"
void __dyc_foo(void) 
{ sds curarg ;
  int touched ;
  char **curargv ;
  char **newargv ;
  int argc ;
  int totlen ;
  int tmp___0 ;
  size_t tmp___1 ;
  size_t tmp___2 ;
  size_t __dyc_funcallvar_3 ;
  size_t __dyc_funcallvar_4 ;
  sds __dyc_funcallvar_5 ;

  {
  curarg = __dyc_read_ptr__char();
  newargv = __dyc_read_ptr__ptr__char();
  argc = __dyc_readpre_byte();
  totlen = __dyc_readpre_byte();
  __dyc_funcallvar_3 = (size_t )__dyc_readpre_byte();
  __dyc_funcallvar_4 = (size_t )__dyc_readpre_byte();
  __dyc_funcallvar_5 = __dyc_read_ptr__char();
  touched = 0;
  curargv = 0;
  tmp___0 = 0;
  tmp___1 = 0;
  tmp___2 = 0;
  curargv = newargv;
  tmp___0 = argc;
  argc ++;
  *(curargv + tmp___0) = curarg;
  tmp___1 = __dyc_funcallvar_3;
  tmp___2 = __dyc_funcallvar_4;
  totlen = (int )((size_t )totlen + tmp___2);
  curarg = __dyc_funcallvar_5;
  if ((unsigned long )curarg == (unsigned long )((void *)0)) {
    goto __dyc_dummy_label;
  }
  touched = 0;
  __dyc_dummy_label:  ;
  __dyc_printpre_byte(touched);
  __dyc_printpre_byte(argc);
  __dyc_printpre_byte(totlen);
  __dyc_printpre_byte(tmp___1);
}
}
