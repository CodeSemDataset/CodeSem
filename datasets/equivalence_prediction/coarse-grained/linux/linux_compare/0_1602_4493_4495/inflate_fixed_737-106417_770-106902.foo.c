#include "../../include/dycfoo.h"
#include "../../include/misc_64.i.hd.c.h"
void __dyc_foo(void) 
{ int i ;
  int bl ;
  int bd ;
  unsigned int *l ;
  int tmp___0 ;
  int __dyc_funcallvar_2 ;
  int __dyc_funcallvar_3 ;
  int __dyc_funcallvar_4 ;

  {
  l = __dyc_read_ptr__int();
  __dyc_funcallvar_2 = __dyc_readpre_byte();
  __dyc_funcallvar_3 = __dyc_readpre_byte();
  __dyc_funcallvar_4 = __dyc_readpre_byte();
  i = 0;
  bl = 0;
  bd = 0;
  tmp___0 = 0;
  if ((unsigned long )l == (unsigned long )((void *)0)) {
    goto __dyc_dummy_label;
  }
  i = 0;
  while (1) {
    while_29_continue:  ;
    if (! (i < 144)) {
      goto while_29_break;
    }
    *(l + i) = 8U;
    i ++;
  }
  while_29_break:  ;
  while (1) {
    while_30_continue:  ;
    if (! (i < 256)) {
      goto while_30_break;
    }
    *(l + i) = 9U;
    i ++;
  }
  while_30_break:  ;
  while (1) {
    while_31_continue:  ;
    if (! (i < 280)) {
      goto while_31_break;
    }
    *(l + i) = 7U;
    i ++;
  }
  while_31_break:  ;
  while (1) {
    while_32_continue:  ;
    if (! (i < 288)) {
      goto while_32_break;
    }
    *(l + i) = 8U;
    i ++;
  }
  while_32_break:  ;
  bl = 7;
  i = __dyc_funcallvar_2;
  if (i != 0) {
    {

    }
    goto __dyc_dummy_label;
  }
  i = 0;
  while (1) {
    while_33_continue:  ;
    if (! (i < 30)) {
      goto while_33_break;
    }
    *(l + i) = 5U;
    i ++;
  }
  while_33_break:  ;
  bd = 5;
  i = __dyc_funcallvar_3;
  if (i > 1) {
    {


    }
    goto __dyc_dummy_label;
  }
  tmp___0 = __dyc_funcallvar_4;
  if (tmp___0) {
    {

    }
    goto __dyc_dummy_label;
  }
  __dyc_dummy_label:  ;
  __dyc_printpre_byte(bl);
  __dyc_printpre_byte(bd);
}
}