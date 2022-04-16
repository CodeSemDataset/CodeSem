#include "../../include/dycfoo.h"
#include "../../include/memtest.i.hd.c.h"
void __dyc_foo(void) 
{ unsigned long *p ;
  size_t left ;
  int errors ;
  int pass ;
  size_t len ;
  unsigned long tmp ;
  int tmp___0 ;
  int tmp___1 ;
  int tmp___2 ;
  int tmp___3 ;
  size_t bytes ;
  int passes ;
  int __dyc_funcallvar_1 ;
  int __dyc_funcallvar_2 ;
  int __dyc_funcallvar_3 ;
  int __dyc_funcallvar_4 ;

  {
  p = __dyc_read_ptr__long();
  left = (size_t )__dyc_readpre_byte();
  errors = __dyc_readpre_byte();
  bytes = (size_t )__dyc_readpre_byte();
  passes = __dyc_readpre_byte();
  __dyc_funcallvar_1 = __dyc_readpre_byte();
  __dyc_funcallvar_2 = __dyc_readpre_byte();
  __dyc_funcallvar_3 = __dyc_readpre_byte();
  __dyc_funcallvar_4 = __dyc_readpre_byte();
  pass = 0;
  len = 0;
  tmp = 0;
  tmp___0 = 0;
  tmp___1 = 0;
  tmp___2 = 0;
  tmp___3 = 0;
  if (bytes < 8192UL) {
    goto __dyc_dummy_label;
  }
  while (1) {
    while_12_continue:  ;
    if (! left) {
      goto while_12_break;
    }
    if (left == 4096UL) {
      left += 4096UL;
      p -= 4096UL / sizeof(unsigned long );
    }
    pass = 0;
    if (left > sizeof(unsigned long [1024UL * (1024UL / sizeof(long ))])) {
      tmp = sizeof(unsigned long [1024UL * (1024UL / sizeof(long ))]);
    } else {
      tmp = left;
    }
    len = tmp;
    if ((len / 4096UL) % 2UL) {
      len -= 4096UL;
    }
    {

    }
    {
    while (1) {
      while_13_continue:  ;
      if (! (pass != passes)) {
        goto while_13_break;
      }
      {
      pass ++;
      tmp___0 = __dyc_funcallvar_1;
      errors += tmp___0;

      }
      if (bytes >= 8192UL) {
        {


        }
      }
      {
      tmp___1 = __dyc_funcallvar_2;
      errors += tmp___1;

      }
      if (bytes >= 8192UL) {
        {


        }
      }
      {
      tmp___2 = __dyc_funcallvar_3;
      errors += tmp___2;

      }
      if (bytes >= 8192UL) {
        {


        }
      }
      {
      tmp___3 = __dyc_funcallvar_4;
      errors += tmp___3;
      }
    }
    while_13_break:  ;
    }
    {

    left -= len;
    p += len / sizeof(unsigned long );
    }
  }
  while_12_break:  ;
  goto __dyc_dummy_label;
  __dyc_dummy_label:  ;
  __dyc_print_ptr__long(p);
  __dyc_printpre_byte(errors);
}
}
