#include "../../include/dycfoo.h"
#include "../../include/lstrlib.i.hd.c.h"
void __dyc_foo(void) 
{ char const   *ep ;
  char previous ;
  int tmp___2 ;
  int tmp___3 ;
  unsigned short const   **tmp___4 ;
  MatchState *ms ;
  char const   *s ;
  char const   *p ;
  char const   *__dyc_funcallvar_5 ;
  int __dyc_funcallvar_6 ;
  int __dyc_funcallvar_7 ;
  unsigned short const   **__dyc_funcallvar_8 ;
  char const   *__dyc_funcallvar_9 ;

  {
  ms = __dyc_read_ptr__typdef_MatchState();
  s = (char const   *)__dyc_read_ptr__char();
  p = (char const   *)__dyc_read_ptr__char();
  __dyc_funcallvar_5 = (char const   *)__dyc_read_ptr__char();
  __dyc_funcallvar_6 = __dyc_readpre_byte();
  __dyc_funcallvar_7 = __dyc_readpre_byte();
  __dyc_funcallvar_8 = (unsigned short const   **)__dyc_read_ptr__ptr__short();
  __dyc_funcallvar_9 = (char const   *)__dyc_read_ptr__char();
  ep = 0;
  previous = 0;
  tmp___2 = 0;
  tmp___3 = 0;
  tmp___4 = 0;
  if ((unsigned long )s == (unsigned long )((void *)0)) {
    goto __dyc_dummy_label;
  }
  p += 4;
  goto __dyc_dummy_label;
  switch_17_102:  
  p += 2;
  if ((int const   )*p != 91) {
    {

    }
  }
  ep = __dyc_funcallvar_5;
  if ((unsigned long )s == (unsigned long )ms->src_init) {
    previous = (char )'\000';
  } else {
    previous = (char )*(s - 1);
  }
  tmp___2 = __dyc_funcallvar_6;
  if (tmp___2) {
    goto __dyc_dummy_label;
  } else {
    {
    tmp___3 = __dyc_funcallvar_7;
    }
    if (! tmp___3) {
      goto __dyc_dummy_label;
    }
  }
  p = ep;
  goto __dyc_dummy_label;
  tmp___4 = __dyc_funcallvar_8;
  if ((int const   )*(*tmp___4 + (int )((unsigned char )*(p + 1))) & 2048) {
    {
    s = __dyc_funcallvar_9;
    }
    if ((unsigned long )s == (unsigned long )((void *)0)) {
      goto __dyc_dummy_label;
    }
    p += 2;
    goto __dyc_dummy_label;
  }
  __dyc_dummy_label:  ;
  __dyc_print_ptr__char(ep);
  __dyc_printpre_byte(previous);
  __dyc_print_ptr__char(p);
}
}
