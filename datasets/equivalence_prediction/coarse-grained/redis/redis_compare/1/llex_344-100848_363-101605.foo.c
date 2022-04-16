#include "../../include/dycfoo.h"
#include "../../include/llex.i.hd.c.h"
void __dyc_foo(void) 
{ char const   *tmp___2 ;
  int __attribute__((__visibility__("hidden")))  tmp___3 ;
  size_t tmp___4 ;
  char const   *tmp___8 ;
  int __attribute__((__visibility__("hidden")))  tmp___9 ;
  size_t tmp___10 ;
  int sep ;
  int tmp___11 ;
  char const   *tmp___15 ;
  int __attribute__((__visibility__("hidden")))  tmp___16 ;
  size_t tmp___17 ;
  int sep___0 ;
  int tmp___18 ;
  LexState *ls ;
  int __attribute__((__visibility__("hidden")))  __dyc_funcallvar_1 ;
  int __attribute__((__visibility__("hidden")))  __dyc_funcallvar_2 ;
  int __dyc_funcallvar_3 ;
  int __attribute__((__visibility__("hidden")))  __dyc_funcallvar_4 ;
  int __dyc_funcallvar_5 ;

  {
  tmp___4 = (size_t )__dyc_readpre_byte();
  ls = __dyc_read_ptr__typdef_LexState();
  __dyc_funcallvar_1 = (int __attribute__((__visibility__("hidden")))  )__dyc_readpre_byte();
  __dyc_funcallvar_2 = (int __attribute__((__visibility__("hidden")))  )__dyc_readpre_byte();
  __dyc_funcallvar_3 = __dyc_readpre_byte();
  __dyc_funcallvar_4 = (int __attribute__((__visibility__("hidden")))  )__dyc_readpre_byte();
  __dyc_funcallvar_5 = __dyc_readpre_byte();
  tmp___2 = 0;
  tmp___3 = 0;
  tmp___8 = 0;
  tmp___9 = 0;
  tmp___10 = 0;
  sep = 0;
  tmp___11 = 0;
  tmp___15 = 0;
  tmp___16 = 0;
  tmp___17 = 0;
  sep___0 = 0;
  tmp___18 = 0;
  if (tmp___4 > 0UL) {
    tmp___2 = (ls->z)->p;
    ((ls->z)->p) ++;
    ls->current = (int )((unsigned char )*tmp___2);
  } else {
    {
    tmp___3 = __dyc_funcallvar_1;
    ls->current = (int )tmp___3;
    }
  }
  if (ls->current != 45) {
    goto __dyc_dummy_label;
  }
  tmp___10 = (ls->z)->n;
  ((ls->z)->n) --;
  if (tmp___10 > 0UL) {
    tmp___8 = (ls->z)->p;
    ((ls->z)->p) ++;
    ls->current = (int )((unsigned char )*tmp___8);
  } else {
    {
    tmp___9 = __dyc_funcallvar_2;
    ls->current = (int )tmp___9;
    }
  }
  if (ls->current == 91) {
    {
    tmp___11 = __dyc_funcallvar_3;
    sep = tmp___11;
    (ls->buff)->n = 0UL;
    }
    if (sep >= 0) {
      {

      (ls->buff)->n = 0UL;
      }
      goto __dyc_dummy_label;
    }
  }
  while (1) {
    while_14_continue:  ;
    if (ls->current == 10) {
      goto while_14_break;
    } else {
      if (ls->current == 13) {
        goto while_14_break;
      } else {
        if (! (ls->current != -1)) {
          goto while_14_break;
        }
      }
    }
    tmp___17 = (ls->z)->n;
    ((ls->z)->n) --;
    if (tmp___17 > 0UL) {
      tmp___15 = (ls->z)->p;
      ((ls->z)->p) ++;
      ls->current = (int )((unsigned char )*tmp___15);
    } else {
      {
      tmp___16 = __dyc_funcallvar_4;
      ls->current = (int )tmp___16;
      }
    }
  }
  while_14_break:  ;
  goto __dyc_dummy_label;
  tmp___18 = __dyc_funcallvar_5;
  sep___0 = tmp___18;
  __dyc_dummy_label:  ;
  __dyc_printpre_byte(sep___0);
}
}
