#include "../../include/dycfoo.h"
#include "../../include/pqsort.i.hd.c.h"
void __dyc_foo(void) 
{ char *tmp___16 ;
  int tmp___22 ;
  int tmp___23 ;
  int tmp___29 ;
  int tmp___30 ;
  char *a ;
  char *b ;
  char *c ;
  int __dyc_funcallvar_3 ;
  int __dyc_funcallvar_4 ;
  int __dyc_funcallvar_5 ;

  {
  tmp___23 = __dyc_readpre_byte();
  a = __dyc_read_ptr__char();
  b = __dyc_read_ptr__char();
  c = __dyc_read_ptr__char();
  __dyc_funcallvar_3 = __dyc_readpre_byte();
  __dyc_funcallvar_4 = __dyc_readpre_byte();
  __dyc_funcallvar_5 = __dyc_readpre_byte();
  tmp___16 = 0;
  tmp___22 = 0;
  tmp___29 = 0;
  tmp___30 = 0;
  if (tmp___23 < 0) {
    tmp___16 = b;
  } else {
    {
    tmp___22 = __dyc_funcallvar_3;
    }
    if (tmp___22 < 0) {
      tmp___16 = c;
    } else {
      tmp___16 = a;
    }
  }
  tmp___30 = __dyc_funcallvar_4;
  if (tmp___30 > 0) {
    tmp___16 = b;
  } else {
    {
    tmp___29 = __dyc_funcallvar_5;
    }
    if (tmp___29 < 0) {
      tmp___16 = a;
    } else {
      tmp___16 = c;
    }
  }
  __dyc_dummy_label:  ;
  __dyc_print_ptr__char(tmp___16);
}
}
