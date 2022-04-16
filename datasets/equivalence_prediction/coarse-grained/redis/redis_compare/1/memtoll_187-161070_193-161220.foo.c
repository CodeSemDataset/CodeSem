#include "../../include/dycfoo.h"
#include "../../include/util.i.hd.c.h"
void __dyc_foo(void) 
{ char const   *u ;
  long mul ;
  unsigned short const   **tmp ;
  int tmp___0 ;
  int tmp___1 ;
  int tmp___2 ;
  int tmp___3 ;
  int tmp___4 ;
  int tmp___5 ;
  int tmp___6 ;
  char const   *p ;
  int *err ;
  unsigned short const   **__dyc_funcallvar_1 ;
  int __dyc_funcallvar_2 ;
  int __dyc_funcallvar_3 ;
  int __dyc_funcallvar_4 ;
  int __dyc_funcallvar_5 ;
  int __dyc_funcallvar_6 ;
  int __dyc_funcallvar_7 ;
  int __dyc_funcallvar_8 ;

  {
  p = (char const   *)__dyc_read_ptr__char();
  err = __dyc_read_ptr__int();
  __dyc_funcallvar_1 = (unsigned short const   **)__dyc_read_ptr__ptr__short();
  __dyc_funcallvar_2 = __dyc_readpre_byte();
  __dyc_funcallvar_3 = __dyc_readpre_byte();
  __dyc_funcallvar_4 = __dyc_readpre_byte();
  __dyc_funcallvar_5 = __dyc_readpre_byte();
  __dyc_funcallvar_6 = __dyc_readpre_byte();
  __dyc_funcallvar_7 = __dyc_readpre_byte();
  __dyc_funcallvar_8 = __dyc_readpre_byte();
  u = 0;
  mul = 0;
  tmp = 0;
  tmp___0 = 0;
  tmp___1 = 0;
  tmp___2 = 0;
  tmp___3 = 0;
  tmp___4 = 0;
  tmp___5 = 0;
  tmp___6 = 0;
  if (err) {
    *err = 0;
  }
  u = p;
  if ((int const   )*u == 45) {
    u ++;
  }
  while (1) {
    while_7_continue:  ;
    if (*u) {
      {
      tmp = __dyc_funcallvar_1;
      }
      if (! ((int const   )*(*tmp + (int )*u) & 2048)) {
        goto while_7_break;
      }
    } else {
      goto while_7_break;
    }
    u ++;
  }
  while_7_break:  ;
  if ((int const   )*u == 0) {
    mul = 1L;
  } else {
    {
    tmp___6 = __dyc_funcallvar_2;
    }
    if (tmp___6) {
      {
      tmp___5 = __dyc_funcallvar_3;
      }
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
    } else {
      mul = 1L;
    }
  }
  __dyc_dummy_label:  ;
  __dyc_printpre_byte(mul);
}
}
