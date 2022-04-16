#include "../../include/dycfoo.h"
#include "../../include/sds.i.hd.c.h"
void __dyc_foo(void) 
{ void *sh ;
  void *newsh ;
  char type ;
  char oldtype ;
  int hdrlen ;
  size_t len ;
  size_t tmp ;
  int tmp___0 ;
  sds s ;
  size_t __dyc_funcallvar_1 ;
  int __dyc_funcallvar_2 ;
  char __dyc_funcallvar_3 ;
  int __dyc_funcallvar_4 ;
  void *__dyc_funcallvar_5 ;
  void *__dyc_funcallvar_6 ;

  {
  s = __dyc_read_ptr__char();
  __dyc_funcallvar_1 = (size_t )__dyc_readpre_byte();
  __dyc_funcallvar_2 = __dyc_readpre_byte();
  __dyc_funcallvar_3 = (char )__dyc_readpre_byte();
  __dyc_funcallvar_4 = __dyc_readpre_byte();
  __dyc_funcallvar_5 = __dyc_read_ptr__void();
  __dyc_funcallvar_6 = __dyc_read_ptr__void();
  sh = 0;
  newsh = 0;
  type = 0;
  oldtype = 0;
  hdrlen = 0;
  len = 0;
  tmp = 0;
  tmp___0 = 0;
  oldtype = (char )((int )*(s + -1) & 7);
  tmp = __dyc_funcallvar_1;
  len = tmp;
  tmp___0 = __dyc_funcallvar_2;
  sh = (void *)(s - tmp___0);
  type = __dyc_funcallvar_3;
  hdrlen = __dyc_funcallvar_4;
  if ((int )oldtype == (int )type) {
    {
    newsh = __dyc_funcallvar_5;
    }
    if ((unsigned long )newsh == (unsigned long )((void *)0)) {
      goto __dyc_dummy_label;
    }
    s = (char *)newsh + hdrlen;
  } else {
    {
    newsh = __dyc_funcallvar_6;
    }
    if ((unsigned long )newsh == (unsigned long )((void *)0)) {
      goto __dyc_dummy_label;
    }
    {


    s = (char *)newsh + hdrlen;
    *(s + -1) = type;

    }
  }

  goto __dyc_dummy_label;
  __dyc_dummy_label:  ;
  __dyc_print_ptr__void(sh);
  __dyc_printpre_byte(hdrlen);
  __dyc_printpre_byte(len);
  __dyc_print_ptr__char(s);
}
}
