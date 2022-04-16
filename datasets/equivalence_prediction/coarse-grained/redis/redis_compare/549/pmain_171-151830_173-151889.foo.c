#include "../../include/dycfoo.h"
#include "../../include/luac.i.hd.c.h"
void __dyc_foo(void) 
{ struct _IO_FILE *stdout ;
  int listing ;
  int dumping ;
  char const   *output ;
  Proto const   *f ;
  FILE *D ;
  struct _IO_FILE *tmp___41 ;
  int tmp___42 ;
  int tmp___43 ;
  Proto const   *__dyc_funcallvar_10 ;
  FILE *__dyc_funcallvar_11 ;
  int __dyc_funcallvar_12 ;
  int __dyc_funcallvar_13 ;

  {
  stdout = __dyc_read_ptr__comp_2_IO_FILE();
  listing = __dyc_readpre_byte();
  dumping = __dyc_readpre_byte();
  output = (char const   *)__dyc_read_ptr__char();
  __dyc_funcallvar_10 = (Proto const   *)__dyc_read_ptr__typdef_Proto();
  __dyc_funcallvar_11 = __dyc_read_ptr__typdef_FILE();
  __dyc_funcallvar_12 = __dyc_readpre_byte();
  __dyc_funcallvar_13 = __dyc_readpre_byte();
  f = 0;
  D = 0;
  tmp___41 = 0;
  tmp___42 = 0;
  tmp___43 = 0;
  f = __dyc_funcallvar_10;
  if (listing) {
    {

    }
  }
  if (dumping) {
    if ((unsigned long )output == (unsigned long )((void *)0)) {
      tmp___41 = stdout;
    } else {
      {
      tmp___41 = __dyc_funcallvar_11;
      }
    }
    D = tmp___41;
    if ((unsigned long )D == (unsigned long )((void *)0)) {
      {

      }
    }
    {

    tmp___42 = __dyc_funcallvar_12;
    }
    if (tmp___42) {
      {

      }
    }
    {
    tmp___43 = __dyc_funcallvar_13;
    }
    if (tmp___43) {
      {

      }
    }
  }
  __dyc_dummy_label:  ;
  __dyc_print_ptr__typdef_Proto(f);
}
}
