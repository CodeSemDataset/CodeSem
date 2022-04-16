#include "../../include/dycfoo.h"
#include "../../include/loadlib.i.hd.c.h"
void __dyc_foo(void) 
{ int sentinel_ ;
  int i ;
  char const   *tmp___3 ;
  int tmp___4 ;
  int tmp___5 ;
  int tmp___6 ;
  int tmp___7 ;
  void *tmp___8 ;
  int __dyc_funcallvar_5 ;
  char const   *__dyc_funcallvar_6 ;
  int __dyc_funcallvar_7 ;
  int __dyc_funcallvar_8 ;
  int __dyc_funcallvar_9 ;
  void *__dyc_funcallvar_10 ;

  {
  sentinel_ = (int const   )__dyc_readpre_byte();
  i = __dyc_readpre_byte();
  __dyc_funcallvar_5 = __dyc_readpre_byte();
  __dyc_funcallvar_6 = (char const   *)__dyc_read_ptr__char();
  __dyc_funcallvar_7 = __dyc_readpre_byte();
  __dyc_funcallvar_8 = __dyc_readpre_byte();
  __dyc_funcallvar_9 = __dyc_readpre_byte();
  __dyc_funcallvar_10 = __dyc_read_ptr__void();
  tmp___3 = 0;
  tmp___4 = 0;
  tmp___5 = 0;
  tmp___6 = 0;
  tmp___7 = 0;
  tmp___8 = 0;
  while (1) {
    while_2_continue:  ;
    {

    tmp___4 = __dyc_funcallvar_5;
    }
    if (tmp___4 == 0) {
      {
      tmp___3 = __dyc_funcallvar_6;

      }
    }
    {


    tmp___6 = __dyc_funcallvar_7;
    }
    if (tmp___6 == 6) {
      goto while_2_break;
    } else {
      {
      tmp___5 = __dyc_funcallvar_8;
      }
      if (tmp___5) {
        {

        }
      } else {
        {

        }
      }
    }
    i ++;
  }
  while_2_break:  ;




  tmp___7 = __dyc_funcallvar_9;
  if (! (tmp___7 == 0)) {
    {

    }
  }

  tmp___8 = __dyc_funcallvar_10;
  if ((unsigned long )tmp___8 == (unsigned long )((void *)(& sentinel_))) {
    {



    }
  }
  __dyc_dummy_label:  ;
  __dyc_printpre_byte(i);
  __dyc_print_ptr__char(tmp___3);
}
}
