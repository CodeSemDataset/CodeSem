#include "../../include/dycfoo.h"
#include "../../include/llex.i.hd.c.h"
void __dyc_foo(void) 
{ int cont ;
  char const   *tmp___9 ;
  int __attribute__((__visibility__("hidden")))  tmp___10 ;
  size_t tmp___11 ;
  int tmp___12 ;
  char const   *tmp___16 ;
  int __attribute__((__visibility__("hidden")))  tmp___17 ;
  size_t tmp___18 ;
  int tmp___19 ;
  LexState *ls ;
  SemInfo *seminfo ;
  int sep ;
  int __attribute__((__visibility__("hidden")))  __dyc_funcallvar_3 ;
  int __dyc_funcallvar_4 ;
  int __attribute__((__visibility__("hidden")))  __dyc_funcallvar_5 ;

  {
  cont = __dyc_readpre_byte();
  tmp___12 = __dyc_readpre_byte();
  ls = __dyc_read_ptr__typdef_LexState();
  seminfo = __dyc_read_ptr__typdef_SemInfo();
  sep = __dyc_readpre_byte();
  __dyc_funcallvar_3 = (int __attribute__((__visibility__("hidden")))  )__dyc_readpre_byte();
  __dyc_funcallvar_4 = __dyc_readpre_byte();
  __dyc_funcallvar_5 = (int __attribute__((__visibility__("hidden")))  )__dyc_readpre_byte();
  tmp___9 = 0;
  tmp___10 = 0;
  tmp___11 = 0;
  tmp___16 = 0;
  tmp___17 = 0;
  tmp___18 = 0;
  tmp___19 = 0;
  if (tmp___12 == sep) {
    {

    tmp___11 = (ls->z)->n;
    ((ls->z)->n) --;
    }
    if (tmp___11 > 0UL) {
      tmp___9 = (ls->z)->p;
      ((ls->z)->p) ++;
      ls->current = (int )((unsigned char )*tmp___9);
    } else {
      {
      tmp___10 = __dyc_funcallvar_3;
      ls->current = (int )tmp___10;
      }
    }
    cont ++;
    if (sep == 0) {
      {

      }
    }
  }
  goto __dyc_dummy_label;
  tmp___19 = __dyc_funcallvar_4;
  if (tmp___19 == sep) {
    {

    tmp___18 = (ls->z)->n;
    ((ls->z)->n) --;
    }
    if (tmp___18 > 0UL) {
      tmp___16 = (ls->z)->p;
      ((ls->z)->p) ++;
      ls->current = (int )((unsigned char )*tmp___16);
    } else {
      {
      tmp___17 = __dyc_funcallvar_5;
      ls->current = (int )tmp___17;
      }
    }
    goto __dyc_dummy_label;
  }
  goto __dyc_dummy_label;


  if (! seminfo) {
    (ls->buff)->n = 0UL;
  }
  goto __dyc_dummy_label;
  __dyc_dummy_label:  ;
  __dyc_printpre_byte(cont);
}
}
