#include "../../include/dycfoo.h"
#include "../../include/llex.i.hd.c.h"
void __dyc_foo(void) 
{ int __attribute__((__visibility__("hidden")))  tmp___80 ;
  TString *ts ;
  char const   *tmp___85 ;
  int __attribute__((__visibility__("hidden")))  tmp___86 ;
  size_t tmp___87 ;
  unsigned short const   **tmp___88 ;
  TString __attribute__((__visibility__("hidden")))  *tmp___89 ;
  int c ;
  char const   *tmp___93 ;
  int __attribute__((__visibility__("hidden")))  tmp___94 ;
  size_t tmp___95 ;
  unsigned short const   **tmp___96 ;
  LexState *ls ;
  SemInfo *seminfo ;
  unsigned short const   **__dyc_funcallvar_21 ;
  int __attribute__((__visibility__("hidden")))  __dyc_funcallvar_22 ;
  unsigned short const   **__dyc_funcallvar_23 ;
  TString __attribute__((__visibility__("hidden")))  *__dyc_funcallvar_24 ;
  int __attribute__((__visibility__("hidden")))  __dyc_funcallvar_25 ;

  {
  tmp___80 = (int __attribute__((__visibility__("hidden")))  )__dyc_readpre_byte();
  ls = __dyc_read_ptr__typdef_LexState();
  seminfo = __dyc_read_ptr__typdef_SemInfo();
  __dyc_funcallvar_21 = (unsigned short const   **)__dyc_read_ptr__ptr__short();
  __dyc_funcallvar_22 = (int __attribute__((__visibility__("hidden")))  )__dyc_readpre_byte();
  __dyc_funcallvar_23 = (unsigned short const   **)__dyc_read_ptr__ptr__short();
  __dyc_funcallvar_24 = (TString __attribute__((__visibility__("hidden")))  *)__dyc_read_ptr__typdef_TString();
  __dyc_funcallvar_25 = (int __attribute__((__visibility__("hidden")))  )__dyc_readpre_byte();
  ts = 0;
  tmp___85 = 0;
  tmp___86 = 0;
  tmp___87 = 0;
  tmp___88 = 0;
  tmp___89 = 0;
  c = 0;
  tmp___93 = 0;
  tmp___94 = 0;
  tmp___95 = 0;
  tmp___96 = 0;
  ls->current = (int )tmp___80;

  goto __dyc_dummy_label;
  tmp___96 = __dyc_funcallvar_21;
  if ((int const   )*(*tmp___96 + ls->current) & 1024) {
    goto _L;
  } else {
    if (ls->current == 95) {
      _L:  
      {
      while (1) {
        while_15_continue:  ;
        {

        tmp___87 = (ls->z)->n;
        ((ls->z)->n) --;
        }
        if (tmp___87 > 0UL) {
          tmp___85 = (ls->z)->p;
          ((ls->z)->p) ++;
          ls->current = (int )((unsigned char )*tmp___85);
        } else {
          {
          tmp___86 = __dyc_funcallvar_22;
          ls->current = (int )tmp___86;
          }
        }
        {
        tmp___88 = __dyc_funcallvar_23;
        }
        if (! ((int const   )*(*tmp___88 + ls->current) & 8)) {
          if (! (ls->current == 95)) {
            goto while_15_break;
          }
        }
      }
      while_15_break:  ;
      }
      {
      tmp___89 = __dyc_funcallvar_24;
      ts = (TString *)tmp___89;
      }
      if ((int )ts->tsv.reserved > 0) {
        goto __dyc_dummy_label;
      } else {
        seminfo->ts = ts;
        goto __dyc_dummy_label;
      }
    } else {
      c = ls->current;
      tmp___95 = (ls->z)->n;
      ((ls->z)->n) --;
      if (tmp___95 > 0UL) {
        tmp___93 = (ls->z)->p;
        ((ls->z)->p) ++;
        ls->current = (int )((unsigned char )*tmp___93);
      } else {
        {
        tmp___94 = __dyc_funcallvar_25;
        ls->current = (int )tmp___94;
        }
      }
      goto __dyc_dummy_label;
    }
  }
  __dyc_dummy_label:  ;
  __dyc_printpre_byte(c);
}
}
