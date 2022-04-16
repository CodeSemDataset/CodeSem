#include "../../include/dycfoo.h"
#include "../../include/getopt.i.hd.c.h"
void __dyc_foo(void) 
{ char *token ;
  char *val ;
  char *tmp ;
  char **optopt ;
  char *__dyc_funcallvar_1 ;
  char *__dyc_funcallvar_2 ;

  {
  optopt = __dyc_read_ptr__ptr__char();
  __dyc_funcallvar_1 = __dyc_read_ptr__char();
  __dyc_funcallvar_2 = __dyc_read_ptr__char();
  token = 0;
  val = 0;
  tmp = 0;
  while (1) {
    while_0_continue:  ;
    {
    token = __dyc_funcallvar_1;
    }
    if ((unsigned long )token == (unsigned long )((void *)0)) {
      goto __dyc_dummy_label;
    }
    if (! ((int )*token == 0)) {
      goto while_0_break;
    }
  }
  while_0_break:  ;
  if (optopt) {
    *optopt = token;
  }
  val = __dyc_funcallvar_2;
  if ((unsigned long )val != (unsigned long )((void *)0)) {
    tmp = val;
    val ++;
    *tmp = (char)0;
  }
  __dyc_dummy_label:  ;
  __dyc_print_ptr__char(val);
}
}
