#include "../../include/dycfoo.h"
#include "../../include/util.i.hd.c.h"
void __dyc_foo(void) 
{ long mul ;
  int tmp___0 ;
  int tmp___1 ;
  int tmp___2 ;
  int tmp___3 ;
  int tmp___4 ;
  int tmp___5 ;
  int *err ;
  int __dyc_funcallvar_4 ;
  int __dyc_funcallvar_5 ;
  int __dyc_funcallvar_6 ;
  int __dyc_funcallvar_7 ;
  int __dyc_funcallvar_8 ;

  {
  tmp___5 = __dyc_readpre_byte();
  err = __dyc_read_ptr__int();
  __dyc_funcallvar_4 = __dyc_readpre_byte();
  __dyc_funcallvar_5 = __dyc_readpre_byte();
  __dyc_funcallvar_6 = __dyc_readpre_byte();
  __dyc_funcallvar_7 = __dyc_readpre_byte();
  __dyc_funcallvar_8 = __dyc_readpre_byte();
  mul = 0;
  tmp___0 = 0;
  tmp___1 = 0;
  tmp___2 = 0;
  tmp___3 = 0;
  tmp___4 = 0;
  if (tmp___5) {
    {
    tmp___4 = __dyc_funcallvar_4;
    }
    if (tmp___4) {
      {
      tmp___3 = __dyc_funcallvar_5;
      }
      if (tmp___3) {
        {
        tmp___2 = __dyc_funcallvar_6;
        }
        if (tmp___2) {
          {
          tmp___1 = __dyc_funcallvar_7;
          }
          if (tmp___1) {
            {
            tmp___0 = __dyc_funcallvar_8;
            }
            if (tmp___0) {
              if (err) {
                *err = 1;
              }
              goto __dyc_dummy_label;
            } else {
              mul = 1073741824L;
            }
          } else {
            mul = 1000000000L;
          }
        } else {
          mul = 1048576L;
        }
      } else {
        mul = 1000000L;
      }
    } else {
      mul = 1024L;
    }
  } else {
    mul = 1000L;
  }
  mul = 1L;
  __dyc_dummy_label:  ;
  __dyc_printpre_byte(mul);
}
}
