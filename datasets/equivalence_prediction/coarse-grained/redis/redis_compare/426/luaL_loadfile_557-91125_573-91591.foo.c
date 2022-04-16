#include "../../include/dycfoo.h"
#include "../../include/lauxlib.i.hd.c.h"
void __dyc_foo(void) 
{ struct _IO_FILE *stdin ;
  LoadF lf ;
  int c ;
  int tmp___0 ;
  int tmp___1 ;
  char const   *filename ;
  FILE *__dyc_funcallvar_2 ;
  int __dyc_funcallvar_3 ;
  int __dyc_funcallvar_4 ;
  int __dyc_funcallvar_5 ;
  int __dyc_funcallvar_6 ;
  FILE *__dyc_funcallvar_7 ;
  int __dyc_funcallvar_8 ;
  int __dyc_funcallvar_9 ;

  {
  stdin = __dyc_read_ptr__comp_4_IO_FILE();
  filename = (char const   *)__dyc_read_ptr__char();
  __dyc_funcallvar_2 = __dyc_read_ptr__typdef_FILE();
  __dyc_funcallvar_3 = __dyc_readpre_byte();
  __dyc_funcallvar_4 = __dyc_readpre_byte();
  __dyc_funcallvar_5 = __dyc_readpre_byte();
  __dyc_funcallvar_6 = __dyc_readpre_byte();
  __dyc_funcallvar_7 = __dyc_read_ptr__typdef_FILE();
  __dyc_funcallvar_8 = __dyc_readpre_byte();
  __dyc_funcallvar_9 = __dyc_readpre_byte();
  memset(& lf, 0, sizeof(LoadF ));
  c = 0;
  tmp___0 = 0;
  tmp___1 = 0;
  lf.extraline = 0;
  if ((unsigned long )filename == (unsigned long )((void *)0)) {
    {

    lf.f = stdin;
    }
  } else {
    {

    lf.f = __dyc_funcallvar_2;
    }
    if ((unsigned long )lf.f == (unsigned long )((void *)0)) {
      {
      tmp___0 = __dyc_funcallvar_3;
      }
      goto __dyc_dummy_label;
    }
  }
  c = __dyc_funcallvar_4;
  if (c == 35) {
    lf.extraline = 1;
    {
    while (1) {
      while_8_continue:  ;
      {
      c = __dyc_funcallvar_5;
      }
      if (c != -1) {
        if (! (c != 10)) {
          goto while_8_break;
        }
      } else {
        goto while_8_break;
      }
    }
    while_8_break:  ;
    }
    if (c == 10) {
      {
      c = __dyc_funcallvar_6;
      }
    }
  }
  if (c == (int )*("\033Lua" + 0)) {
    if (filename) {
      {
      lf.f = __dyc_funcallvar_7;
      }
      if ((unsigned long )lf.f == (unsigned long )((void *)0)) {
        {
        tmp___1 = __dyc_funcallvar_8;
        }
        goto __dyc_dummy_label;
      }
      {
      while (1) {
        while_9_continue:  ;
        {
        c = __dyc_funcallvar_9;
        }
        if (c != -1) {
          if (! (c != (int )*("\033Lua" + 0))) {
            goto while_9_break;
          }
        } else {
          goto while_9_break;
        }
      }
      while_9_break:  ;
      }
      lf.extraline = 0;
    }
  }
  __dyc_dummy_label:  ;
  __dyc_print_comp_42LoadF(lf);
  __dyc_printpre_byte(tmp___0);
  __dyc_printpre_byte(tmp___1);
}
}
