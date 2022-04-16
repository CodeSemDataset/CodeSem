#include "../../include/dycfoo.h"
#include "../../include/ltablib.i.hd.c.h"
void __dyc_foo(void) 
{ int i ;
  int j ;
  int tmp ;
  int tmp___0 ;
  int tmp___1 ;
  int tmp___2 ;
  int tmp___3 ;
  int l ;
  int u ;
  int __dyc_funcallvar_1 ;
  int __dyc_funcallvar_2 ;
  int __dyc_funcallvar_3 ;
  int __dyc_funcallvar_4 ;
  int __dyc_funcallvar_5 ;

  {
  l = __dyc_readpre_byte();
  u = __dyc_readpre_byte();
  __dyc_funcallvar_1 = __dyc_readpre_byte();
  __dyc_funcallvar_2 = __dyc_readpre_byte();
  __dyc_funcallvar_3 = __dyc_readpre_byte();
  __dyc_funcallvar_4 = __dyc_readpre_byte();
  __dyc_funcallvar_5 = __dyc_readpre_byte();
  i = 0;
  j = 0;
  tmp = 0;
  tmp___0 = 0;
  tmp___1 = 0;
  tmp___2 = 0;
  tmp___3 = 0;
  if (! (l < u)) {
    goto __dyc_dummy_label;
  }


  tmp = __dyc_funcallvar_1;
  if (tmp) {
    {

    }
  } else {
    {

    }
  }
  if (u - l == 1) {
    goto __dyc_dummy_label;
  }
  i = (l + u) / 2;


  tmp___1 = __dyc_funcallvar_2;
  if (tmp___1) {
    {

    }
  } else {
    {


    tmp___0 = __dyc_funcallvar_3;
    }
    if (tmp___0) {
      {

      }
    } else {
      {

      }
    }
  }
  if (u - l == 2) {
    goto __dyc_dummy_label;
  }




  i = l;
  j = u - 1;
  while (1) {
    while_8_continue:  ;
    {
    while (1) {
      while_9_continue:  ;
      {
      i ++;

      tmp___2 = __dyc_funcallvar_4;
      }
      if (! tmp___2) {
        goto while_9_break;
      }
      if (i > u) {
        {

        }
      }
      {

      }
    }
    while_9_break:  ;
    }
    {
    while (1) {
      while_10_continue:  ;
      {
      j --;

      tmp___3 = __dyc_funcallvar_5;
      }
      if (! tmp___3) {
        goto while_10_break;
      }
      if (j < l) {
        {

        }
      }
      {

      }
    }
    while_10_break:  ;
    }
    if (j < i) {
      {

      }
      goto __dyc_dummy_label;
    }
    {

    }
  }
  __dyc_dummy_label:  ;
  __dyc_printpre_byte(i);
}
}
