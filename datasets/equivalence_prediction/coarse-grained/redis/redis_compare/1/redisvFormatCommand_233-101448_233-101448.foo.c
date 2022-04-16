#include "../../include/dycfoo.h"
#include "../../include/hiredis.i.hd.c.h"
void __dyc_foo(void) 
{ char const   *c ;
  sds curarg ;
  sds newarg ;
  int touched ;
  char **curargv ;
  char **newargv ;
  int argc ;
  int totlen ;
  void *tmp ;
  int tmp___0 ;
  size_t tmp___1 ;
  size_t tmp___2 ;
  void *__dyc_funcallvar_2 ;
  size_t __dyc_funcallvar_3 ;
  size_t __dyc_funcallvar_4 ;
  sds __dyc_funcallvar_5 ;
  sds __dyc_funcallvar_6 ;

  {
  c = (char const   *)__dyc_read_ptr__char();
  curarg = __dyc_read_ptr__char();
  touched = __dyc_readpre_byte();
  argc = __dyc_readpre_byte();
  totlen = __dyc_readpre_byte();
  __dyc_funcallvar_2 = __dyc_read_ptr__void();
  __dyc_funcallvar_3 = (size_t )__dyc_readpre_byte();
  __dyc_funcallvar_4 = (size_t )__dyc_readpre_byte();
  __dyc_funcallvar_5 = __dyc_read_ptr__char();
  __dyc_funcallvar_6 = __dyc_read_ptr__char();
  newarg = 0;
  curargv = 0;
  newargv = 0;
  tmp = 0;
  tmp___0 = 0;
  tmp___1 = 0;
  tmp___2 = 0;
  _L:  
  if ((int const   )*c == 32) {
    if (touched) {
      {
      tmp = __dyc_funcallvar_2;
      newargv = (char **)tmp;
      }
      if ((unsigned long )newargv == (unsigned long )((void *)0)) {
        goto __dyc_dummy_label;
      }
      {
      curargv = newargv;
      tmp___0 = argc;
      argc ++;
      *(curargv + tmp___0) = curarg;
      tmp___1 = __dyc_funcallvar_3;
      tmp___2 = __dyc_funcallvar_4;
      totlen = (int )((size_t )totlen + tmp___2);
      curarg = __dyc_funcallvar_5;
      }
      if ((unsigned long )curarg == (unsigned long )((void *)0)) {
        goto __dyc_dummy_label;
      }
      touched = 0;
    }
  } else {
    {
    newarg = __dyc_funcallvar_6;
    }
    if ((unsigned long )newarg == (unsigned long )((void *)0)) {
      goto __dyc_dummy_label;
    }
    curarg = newarg;
    touched = 1;
  }
  __dyc_dummy_label:  ;
  __dyc_print_ptr__char(curarg);
  __dyc_printpre_byte(touched);
  __dyc_printpre_byte(argc);
  __dyc_printpre_byte(totlen);
  __dyc_printpre_byte(tmp___1);
}
}
