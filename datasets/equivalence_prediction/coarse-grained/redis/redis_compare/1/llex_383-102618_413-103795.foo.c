#include "../../include/dycfoo.h"
#include "../../include/llex.i.hd.c.h"
void __dyc_foo(void) 
{ char const   *tmp___52 ;
  int __attribute__((__visibility__("hidden")))  tmp___53 ;
  size_t tmp___54 ;
  char const   *tmp___58 ;
  int __attribute__((__visibility__("hidden")))  tmp___59 ;
  size_t tmp___60 ;
  char const   *tmp___64 ;
  int __attribute__((__visibility__("hidden")))  tmp___65 ;
  size_t tmp___66 ;
  char const   *tmp___70 ;
  int __attribute__((__visibility__("hidden")))  tmp___71 ;
  size_t tmp___72 ;
  int tmp___73 ;
  unsigned short const   **tmp___74 ;
  int tmp___75 ;
  char const   *tmp___79 ;
  int __attribute__((__visibility__("hidden")))  tmp___80 ;
  size_t tmp___81 ;
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
  unsigned short const   **tmp___97 ;
  unsigned short const   **tmp___98 ;
  LexState *ls ;
  SemInfo *seminfo ;
  int __attribute__((__visibility__("hidden")))  __dyc_funcallvar_11 ;
  int __attribute__((__visibility__("hidden")))  __dyc_funcallvar_12 ;
  int __attribute__((__visibility__("hidden")))  __dyc_funcallvar_13 ;
  int __attribute__((__visibility__("hidden")))  __dyc_funcallvar_14 ;
  int __dyc_funcallvar_15 ;
  int __dyc_funcallvar_16 ;
  unsigned short const   **__dyc_funcallvar_17 ;
  unsigned short const   **__dyc_funcallvar_18 ;
  int __attribute__((__visibility__("hidden")))  __dyc_funcallvar_19 ;
  unsigned short const   **__dyc_funcallvar_20 ;
  unsigned short const   **__dyc_funcallvar_21 ;
  int __attribute__((__visibility__("hidden")))  __dyc_funcallvar_22 ;
  unsigned short const   **__dyc_funcallvar_23 ;
  TString __attribute__((__visibility__("hidden")))  *__dyc_funcallvar_24 ;
  int __attribute__((__visibility__("hidden")))  __dyc_funcallvar_25 ;

  {
  ls = __dyc_read_ptr__typdef_LexState();
  seminfo = __dyc_read_ptr__typdef_SemInfo();
  __dyc_funcallvar_11 = (int __attribute__((__visibility__("hidden")))  )__dyc_readpre_byte();
  __dyc_funcallvar_12 = (int __attribute__((__visibility__("hidden")))  )__dyc_readpre_byte();
  __dyc_funcallvar_13 = (int __attribute__((__visibility__("hidden")))  )__dyc_readpre_byte();
  __dyc_funcallvar_14 = (int __attribute__((__visibility__("hidden")))  )__dyc_readpre_byte();
  __dyc_funcallvar_15 = __dyc_readpre_byte();
  __dyc_funcallvar_16 = __dyc_readpre_byte();
  __dyc_funcallvar_17 = (unsigned short const   **)__dyc_read_ptr__ptr__short();
  __dyc_funcallvar_18 = (unsigned short const   **)__dyc_read_ptr__ptr__short();
  __dyc_funcallvar_19 = (int __attribute__((__visibility__("hidden")))  )__dyc_readpre_byte();
  __dyc_funcallvar_20 = (unsigned short const   **)__dyc_read_ptr__ptr__short();
  __dyc_funcallvar_21 = (unsigned short const   **)__dyc_read_ptr__ptr__short();
  __dyc_funcallvar_22 = (int __attribute__((__visibility__("hidden")))  )__dyc_readpre_byte();
  __dyc_funcallvar_23 = (unsigned short const   **)__dyc_read_ptr__ptr__short();
  __dyc_funcallvar_24 = (TString __attribute__((__visibility__("hidden")))  *)__dyc_read_ptr__typdef_TString();
  __dyc_funcallvar_25 = (int __attribute__((__visibility__("hidden")))  )__dyc_readpre_byte();
  tmp___52 = 0;
  tmp___53 = 0;
  tmp___54 = 0;
  tmp___58 = 0;
  tmp___59 = 0;
  tmp___60 = 0;
  tmp___64 = 0;
  tmp___65 = 0;
  tmp___66 = 0;
  tmp___70 = 0;
  tmp___71 = 0;
  tmp___72 = 0;
  tmp___73 = 0;
  tmp___74 = 0;
  tmp___75 = 0;
  tmp___79 = 0;
  tmp___80 = 0;
  tmp___81 = 0;
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
  tmp___97 = 0;
  tmp___98 = 0;
  if (ls->current != 61) {
    goto __dyc_dummy_label;
  } else {
    tmp___54 = (ls->z)->n;
    ((ls->z)->n) --;
    if (tmp___54 > 0UL) {
      tmp___52 = (ls->z)->p;
      ((ls->z)->p) ++;
      ls->current = (int )((unsigned char )*tmp___52);
    } else {
      {
      tmp___53 = __dyc_funcallvar_11;
      ls->current = (int )tmp___53;
      }
    }
    goto __dyc_dummy_label;
  }
  switch_13_126:  
  tmp___60 = (ls->z)->n;
  ((ls->z)->n) --;
  if (tmp___60 > 0UL) {
    tmp___58 = (ls->z)->p;
    ((ls->z)->p) ++;
    ls->current = (int )((unsigned char )*tmp___58);
  } else {
    {
    tmp___59 = __dyc_funcallvar_12;
    ls->current = (int )tmp___59;
    }
  }
  if (ls->current != 61) {
    goto __dyc_dummy_label;
  } else {
    tmp___66 = (ls->z)->n;
    ((ls->z)->n) --;
    if (tmp___66 > 0UL) {
      tmp___64 = (ls->z)->p;
      ((ls->z)->p) ++;
      ls->current = (int )((unsigned char )*tmp___64);
    } else {
      {
      tmp___65 = __dyc_funcallvar_13;
      ls->current = (int )tmp___65;
      }
    }
    goto __dyc_dummy_label;
  }

  goto __dyc_dummy_label;

  tmp___72 = (ls->z)->n;
  ((ls->z)->n) --;
  if (tmp___72 > 0UL) {
    tmp___70 = (ls->z)->p;
    ((ls->z)->p) ++;
    ls->current = (int )((unsigned char )*tmp___70);
  } else {
    {
    tmp___71 = __dyc_funcallvar_14;
    ls->current = (int )tmp___71;
    }
  }
  tmp___75 = __dyc_funcallvar_15;
  if (tmp___75) {
    {
    tmp___73 = __dyc_funcallvar_16;
    }
    if (tmp___73) {
      goto __dyc_dummy_label;
    } else {
      goto __dyc_dummy_label;
    }
  } else {
    {
    tmp___74 = __dyc_funcallvar_17;
    }
    if ((int const   )*(*tmp___74 + ls->current) & 2048) {
      {

      }
      goto __dyc_dummy_label;
    } else {
      goto __dyc_dummy_label;
    }
  }
  switch_13_neg_1:  
  goto __dyc_dummy_label;
  tmp___98 = __dyc_funcallvar_18;
  if ((int const   )*(*tmp___98 + ls->current) & 8192) {
    tmp___81 = (ls->z)->n;
    ((ls->z)->n) --;
    if (tmp___81 > 0UL) {
      tmp___79 = (ls->z)->p;
      ((ls->z)->p) ++;
      ls->current = (int )((unsigned char )*tmp___79);
    } else {
      {
      tmp___80 = __dyc_funcallvar_19;
      ls->current = (int )tmp___80;
      }
    }
    goto __dyc_dummy_label;
  } else {
    {
    tmp___97 = __dyc_funcallvar_20;
    }
    if ((int const   )*(*tmp___97 + ls->current) & 2048) {
      {

      }
      goto __dyc_dummy_label;
    } else {
      {
      tmp___96 = __dyc_funcallvar_21;
      }
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
    }
  }
  __dyc_dummy_label:  ;
  __dyc_printpre_byte(c);
}
}
