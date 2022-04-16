#include "../../include/dycfoo.h"
#include "../../include/liolib.i.hd.c.h"
void __dyc_foo(void) 
{ FILE *f ;
  int sucess ;
  int *tmp___0 ;
  char *tmp___1 ;
  int tmp___2 ;
  int tmp___3 ;
  int tmp___4 ;
  int __dyc_funcallvar_2 ;
  int __dyc_funcallvar_3 ;
  int *__dyc_funcallvar_4 ;
  char *__dyc_funcallvar_5 ;
  int __dyc_funcallvar_6 ;
  int __dyc_funcallvar_7 ;

  {
  f = __dyc_read_ptr__typdef_FILE();
  __dyc_funcallvar_2 = __dyc_readpre_byte();
  __dyc_funcallvar_3 = __dyc_readpre_byte();
  __dyc_funcallvar_4 = __dyc_read_ptr__int();
  __dyc_funcallvar_5 = __dyc_read_ptr__char();
  __dyc_funcallvar_6 = __dyc_readpre_byte();
  __dyc_funcallvar_7 = __dyc_readpre_byte();
  sucess = 0;
  tmp___0 = 0;
  tmp___1 = 0;
  tmp___2 = 0;
  tmp___3 = 0;
  tmp___4 = 0;
  if ((unsigned long )f == (unsigned long )((void *)0)) {
    {

    }
  }
  sucess = __dyc_funcallvar_2;
  tmp___3 = __dyc_funcallvar_3;
  if (tmp___3) {
    {
    tmp___0 = __dyc_funcallvar_4;
    tmp___1 = __dyc_funcallvar_5;
    tmp___2 = __dyc_funcallvar_6;
    }
    goto __dyc_dummy_label;
  }
  if (! sucess) {
    {
    tmp___4 = __dyc_funcallvar_7;
    }
    if (tmp___4) {
      {



      }
    }
    goto __dyc_dummy_label;
  }
  __dyc_dummy_label:  ;
  __dyc_printpre_byte(sucess);
  __dyc_print_ptr__int(tmp___0);
  __dyc_print_ptr__char(tmp___1);
  __dyc_printpre_byte(tmp___2);
}
}
