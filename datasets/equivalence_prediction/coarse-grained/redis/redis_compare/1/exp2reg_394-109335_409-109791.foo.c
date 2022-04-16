#include "../../include/dycfoo.h"
#include "../../include/lcode.i.hd.c.h"
void __dyc_foo(void) 
{ int final ;
  int p_f ;
  int p_t ;
  int fj ;
  int tmp___0 ;
  int __attribute__((__visibility__("hidden")))  tmp___1 ;
  int tmp___2 ;
  int tmp___3 ;
  int __attribute__((__visibility__("hidden")))  tmp___4 ;
  expdesc *e ;
  int reg ;
  int __dyc_funcallvar_1 ;
  int __dyc_funcallvar_2 ;
  int __attribute__((__visibility__("hidden")))  __dyc_funcallvar_3 ;
  int __dyc_funcallvar_4 ;
  int __dyc_funcallvar_5 ;
  int __attribute__((__visibility__("hidden")))  __dyc_funcallvar_6 ;

  {
  e = __dyc_read_ptr__typdef_expdesc();
  reg = __dyc_readpre_byte();
  __dyc_funcallvar_1 = __dyc_readpre_byte();
  __dyc_funcallvar_2 = __dyc_readpre_byte();
  __dyc_funcallvar_3 = (int __attribute__((__visibility__("hidden")))  )__dyc_readpre_byte();
  __dyc_funcallvar_4 = __dyc_readpre_byte();
  __dyc_funcallvar_5 = __dyc_readpre_byte();
  __dyc_funcallvar_6 = (int __attribute__((__visibility__("hidden")))  )__dyc_readpre_byte();
  final = 0;
  p_f = 0;
  p_t = 0;
  fj = 0;
  tmp___0 = 0;
  tmp___1 = 0;
  tmp___2 = 0;
  tmp___3 = 0;
  tmp___4 = 0;
  if (e->t != e->f) {
    {
    p_f = -1;
    p_t = -1;
    tmp___2 = __dyc_funcallvar_1;
    }
    if (tmp___2) {
      goto _L;
    } else {
      {
      tmp___3 = __dyc_funcallvar_2;
      }
      if (tmp___3) {
        _L:  
        if ((int )e->k == 10) {
          tmp___0 = -1;
        } else {
          {
          tmp___1 = __dyc_funcallvar_3;
          tmp___0 = (int )tmp___1;
          }
        }
        {
        fj = tmp___0;
        p_f = __dyc_funcallvar_4;
        p_t = __dyc_funcallvar_5;

        }
      }
    }
    {
    tmp___4 = __dyc_funcallvar_6;
    final = (int )tmp___4;


    }
  }
  e->t = -1;
  e->f = e->t;
  e->u.s.info = reg;
  e->k = 12;
  __dyc_dummy_label:  ;
  __dyc_printpre_byte(final);
  __dyc_printpre_byte(p_f);
  __dyc_printpre_byte(p_t);
  __dyc_printpre_byte(fj);
}
}
