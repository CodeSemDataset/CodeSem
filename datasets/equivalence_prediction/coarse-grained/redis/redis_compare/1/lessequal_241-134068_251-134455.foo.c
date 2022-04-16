#include "../../include/dycfoo.h"
#include "../../include/lvm.i.hd.c.h"
void __dyc_foo(void) 
{ int res ;
  int __attribute__((__visibility__("hidden")))  tmp ;
  int tmp___0 ;
  int __attribute__((__visibility__("hidden")))  tmp___1 ;
  TValue const   *l ;
  TValue const   *r ;
  int __attribute__((__visibility__("hidden")))  __dyc_funcallvar_1 ;
  int __dyc_funcallvar_2 ;
  int __dyc_funcallvar_3 ;
  int __dyc_funcallvar_4 ;
  int __attribute__((__visibility__("hidden")))  __dyc_funcallvar_5 ;

  {
  l = (TValue const   *)__dyc_read_ptr__typdef_TValue();
  r = (TValue const   *)__dyc_read_ptr__typdef_TValue();
  __dyc_funcallvar_1 = (int __attribute__((__visibility__("hidden")))  )__dyc_readpre_byte();
  __dyc_funcallvar_2 = __dyc_readpre_byte();
  __dyc_funcallvar_3 = __dyc_readpre_byte();
  __dyc_funcallvar_4 = __dyc_readpre_byte();
  __dyc_funcallvar_5 = (int __attribute__((__visibility__("hidden")))  )__dyc_readpre_byte();
  res = 0;
  tmp = 0;
  tmp___0 = 0;
  tmp___1 = 0;
  if (l->tt != r->tt) {
    {
    tmp = __dyc_funcallvar_1;
    }
    goto __dyc_dummy_label;
  } else {
    if (l->tt == 3) {
      goto __dyc_dummy_label;
    } else {
      if (l->tt == 4) {
        {
        tmp___0 = __dyc_funcallvar_2;
        }
        goto __dyc_dummy_label;
      } else {
        {
        res = __dyc_funcallvar_3;
        }
        if (res != -1) {
          goto __dyc_dummy_label;
        } else {
          {
          res = __dyc_funcallvar_4;
          }
          if (res != -1) {
            goto __dyc_dummy_label;
          }
        }
      }
    }
  }
  tmp___1 = __dyc_funcallvar_5;
  goto __dyc_dummy_label;
  __dyc_dummy_label:  ;
  __dyc_printpre_byte(tmp);
  __dyc_printpre_byte(tmp___0);
  __dyc_printpre_byte(tmp___1);
}
}
