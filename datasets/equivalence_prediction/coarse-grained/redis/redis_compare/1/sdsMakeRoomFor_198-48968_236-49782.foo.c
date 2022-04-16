#include "../../include/dycfoo.h"
#include "../../include/sds.i.hd.c.h"
void __dyc_foo(void) 
{ void *sh ;
  void *newsh ;
  size_t avail ;
  size_t len ;
  size_t newlen ;
  char type ;
  char oldtype ;
  int hdrlen ;
  int tmp___0 ;
  sds s ;
  size_t addlen ;
  size_t __dyc_funcallvar_2 ;
  int __dyc_funcallvar_3 ;
  char __dyc_funcallvar_4 ;
  int __dyc_funcallvar_5 ;
  void *__dyc_funcallvar_6 ;
  void *__dyc_funcallvar_7 ;

  {
  avail = (size_t )__dyc_readpre_byte();
  s = __dyc_read_ptr__char();
  addlen = (size_t )__dyc_readpre_byte();
  __dyc_funcallvar_2 = (size_t )__dyc_readpre_byte();
  __dyc_funcallvar_3 = __dyc_readpre_byte();
  __dyc_funcallvar_4 = (char )__dyc_readpre_byte();
  __dyc_funcallvar_5 = __dyc_readpre_byte();
  __dyc_funcallvar_6 = __dyc_read_ptr__void();
  __dyc_funcallvar_7 = __dyc_read_ptr__void();
  sh = 0;
  newsh = 0;
  len = 0;
  newlen = 0;
  type = 0;
  oldtype = 0;
  hdrlen = 0;
  tmp___0 = 0;
  oldtype = (char )((int )*(s + -1) & 7);
  if (avail >= addlen) {
    goto __dyc_dummy_label;
  }
  len = __dyc_funcallvar_2;
  tmp___0 = __dyc_funcallvar_3;
  sh = (void *)(s - tmp___0);
  newlen = len + addlen;
  if (newlen < 1048576UL) {
    newlen *= 2UL;
  } else {
    newlen += 1048576UL;
  }
  type = __dyc_funcallvar_4;
  if ((int )type == 0) {
    type = (char)1;
  }
  hdrlen = __dyc_funcallvar_5;
  if ((int )oldtype == (int )type) {
    {
    newsh = __dyc_funcallvar_6;
    }
    if ((unsigned long )newsh == (unsigned long )((void *)0)) {
      goto __dyc_dummy_label;
    }
    s = (char *)newsh + hdrlen;
  } else {
    {
    newsh = __dyc_funcallvar_7;
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
  __dyc_printpre_byte(newlen);
  __dyc_printpre_byte(oldtype);
  __dyc_printpre_byte(hdrlen);
  __dyc_print_ptr__char(s);
}
}
