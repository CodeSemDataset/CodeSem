#include "../../include/dycfoo.h"
#include "../../include/lvm.i.hd.c.h"
void __dyc_foo(void) 
{ StkId top ;
  int n ;
  int tmp ;
  int __attribute__((__visibility__("hidden")))  tmp___0 ;
  int tmp___1 ;
  size_t tl ;
  char *buffer ;
  int i ;
  size_t l ;
  int __attribute__((__visibility__("hidden")))  tmp___2 ;
  char __attribute__((__visibility__("hidden")))  *tmp___3 ;
  size_t l___0 ;
  TValue *i_o ;
  TString __attribute__((__visibility__("hidden")))  *tmp___4 ;
  int __attribute__((__visibility__("hidden")))  tmp___5 ;
  int total ;
  int __attribute__((__visibility__("hidden")))  __dyc_funcallvar_1 ;
  int __attribute__((__visibility__("hidden")))  __dyc_funcallvar_2 ;
  int __attribute__((__visibility__("hidden")))  __dyc_funcallvar_3 ;
  char __attribute__((__visibility__("hidden")))  *__dyc_funcallvar_4 ;
  TString __attribute__((__visibility__("hidden")))  *__dyc_funcallvar_5 ;
  int __dyc_funcallvar_6 ;

  {
  top = __dyc_read_ptr__typdef_TValue();
  total = __dyc_readpre_byte();
  __dyc_funcallvar_1 = (int __attribute__((__visibility__("hidden")))  )__dyc_readpre_byte();
  __dyc_funcallvar_2 = (int __attribute__((__visibility__("hidden")))  )__dyc_readpre_byte();
  __dyc_funcallvar_3 = (int __attribute__((__visibility__("hidden")))  )__dyc_readpre_byte();
  __dyc_funcallvar_4 = (char __attribute__((__visibility__("hidden")))  *)__dyc_read_ptr__char();
  __dyc_funcallvar_5 = (TString __attribute__((__visibility__("hidden")))  *)__dyc_read_ptr__typdef_TString();
  __dyc_funcallvar_6 = __dyc_readpre_byte();
  n = 0;
  tmp = 0;
  tmp___0 = 0;
  tmp___1 = 0;
  tl = 0;
  buffer = 0;
  i = 0;
  l = 0;
  tmp___2 = 0;
  tmp___3 = 0;
  l___0 = 0;
  i_o = 0;
  tmp___4 = 0;
  tmp___5 = 0;
  _L___1:  
  if ((top - 1)->tt == 4) {
    goto _L___0;
  } else {
    {
    tmp___5 = __dyc_funcallvar_1;
    }
    if (tmp___5) {
      _L___0:  
      if (((top - 1)->value.gc)->ts.tsv.len == 0UL) {
        if ((top - 2)->tt == 4) {
          tmp___1 = 1;
        } else {
          {
          tmp___0 = __dyc_funcallvar_2;
          }
          if (tmp___0) {
            tmp___1 = 1;
          } else {
            tmp___1 = 0;
          }
        }
      } else {
        tl = ((top - 1)->value.gc)->ts.tsv.len;
        n = 1;
        {
        while (1) {
          while_5_continue:  ;
          if (n < total) {
            if (! (((top - n) - 1)->tt == 4)) {
              {
              tmp___2 = __dyc_funcallvar_3;
              }
              if (! tmp___2) {
                goto while_5_break;
              }
            }
          } else {
            goto while_5_break;
          }
          l = (((top - n) - 1)->value.gc)->ts.tsv.len;
          if (l >= 0xfffffffdUL - tl) {
            {

            }
          }
          tl += l;
          n ++;
        }
        while_5_break:  ;
        }
        {
        tmp___3 = __dyc_funcallvar_4;
        buffer = (char *)tmp___3;
        tl = 0UL;
        i = n;
        }
        {
        while (1) {
          while_6_continue:  ;
          if (! (i > 0)) {
            goto while_6_break;
          }
          {
          l___0 = ((top - i)->value.gc)->ts.tsv.len;

          tl += l___0;
          i --;
          }
        }
        while_6_break:  ;
        }
        {
        i_o = top - n;
        tmp___4 = __dyc_funcallvar_5;
        i_o->value.gc = (GCObject *)tmp___4;
        i_o->tt = 4;
        }
      }
    } else {
      _L:  
      {
      tmp = __dyc_funcallvar_6;
      }
      if (! tmp) {
        {

        }
      }
    }
  }
  goto _L;
  __dyc_dummy_label:  ;
  __dyc_printpre_byte(tmp___1);
  __dyc_printpre_byte(tl);
  __dyc_print_ptr__char(buffer);
}
}
