#include "../../include/dycfoo.h"
#include "../../include/net.i.hd.c.h"
void __dyc_foo(void) 
{ int rv ;
  int blocking ;
  int reuseaddr ;
  int reuses ;
  int tmp___28 ;
  int *tmp___29 ;
  int *tmp___30 ;
  int *tmp___31 ;
  int tmp___32 ;
  int tmp___33 ;
  int tmp___34 ;
  redisContext *c ;
  int *__dyc_funcallvar_17 ;
  int *__dyc_funcallvar_18 ;
  int *__dyc_funcallvar_19 ;
  int __dyc_funcallvar_20 ;
  int __dyc_funcallvar_21 ;
  int __dyc_funcallvar_22 ;

  {
  blocking = __dyc_readpre_byte();
  reuseaddr = __dyc_readpre_byte();
  reuses = __dyc_readpre_byte();
  tmp___32 = __dyc_readpre_byte();
  c = __dyc_read_ptr__typdef_redisContext();
  __dyc_funcallvar_17 = __dyc_read_ptr__int();
  __dyc_funcallvar_18 = __dyc_read_ptr__int();
  __dyc_funcallvar_19 = __dyc_read_ptr__int();
  __dyc_funcallvar_20 = __dyc_readpre_byte();
  __dyc_funcallvar_21 = __dyc_readpre_byte();
  __dyc_funcallvar_22 = __dyc_readpre_byte();
  rv = 0;
  tmp___28 = 0;
  tmp___29 = 0;
  tmp___30 = 0;
  tmp___31 = 0;
  tmp___33 = 0;
  tmp___34 = 0;
  if (tmp___32 == -1) {
    {
    tmp___31 = __dyc_funcallvar_17;
    }
    if (*tmp___31 == 113) {
      {

      }
      goto __dyc_dummy_label;
    } else {
      {
      tmp___30 = __dyc_funcallvar_18;
      }
      if (*tmp___30 == 115) {
        if (! (! blocking)) {
          goto _L___0;
        }
      } else {
        _L___0:  
        {
        tmp___29 = __dyc_funcallvar_19;
        }
        if (*tmp___29 == 99) {
          if (reuseaddr) {
            reuses ++;
            if (reuses >= 10) {
              goto __dyc_dummy_label;
            } else {
              {

              }
              goto __dyc_dummy_label;
            }
          } else {
            goto _L;
          }
        } else {
          _L:  
          {
          tmp___28 = __dyc_funcallvar_20;
          }
          if (tmp___28 != 0) {
            goto __dyc_dummy_label;
          }
        }
      }
    }
  }
  if (blocking) {
    {
    tmp___33 = __dyc_funcallvar_21;
    }
    if (tmp___33 != 0) {
      goto __dyc_dummy_label;
    }
  }
  tmp___34 = __dyc_funcallvar_22;
  if (tmp___34 != 0) {
    goto __dyc_dummy_label;
  }
  c->flags |= 2;
  rv = 0;
  __dyc_dummy_label:  ;
  __dyc_printpre_byte(rv);
}
}
