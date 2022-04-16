#include "../../include/dycfoo.h"
#include "../../include/sds.i.hd.c.h"
void __dyc_foo(void) 
{ char const   *p ;
  char *current ;
  int done ;
  unsigned char byte ;
  int tmp___0 ;
  int tmp___1 ;
  char c ;
  unsigned short const   **tmp___2 ;
  int tmp___3 ;
  int tmp___4 ;
  int __dyc_funcallvar_3 ;
  int __dyc_funcallvar_4 ;
  int __dyc_funcallvar_5 ;
  int __dyc_funcallvar_6 ;
  sds __dyc_funcallvar_7 ;
  sds __dyc_funcallvar_8 ;
  unsigned short const   **__dyc_funcallvar_9 ;
  sds __dyc_funcallvar_10 ;

  {
  p = (char const   *)__dyc_read_ptr__char();
  __dyc_funcallvar_3 = __dyc_readpre_byte();
  __dyc_funcallvar_4 = __dyc_readpre_byte();
  __dyc_funcallvar_5 = __dyc_readpre_byte();
  __dyc_funcallvar_6 = __dyc_readpre_byte();
  __dyc_funcallvar_7 = __dyc_read_ptr__char();
  __dyc_funcallvar_8 = __dyc_read_ptr__char();
  __dyc_funcallvar_9 = (unsigned short const   **)__dyc_read_ptr__ptr__short();
  __dyc_funcallvar_10 = __dyc_read_ptr__char();
  current = 0;
  done = 0;
  byte = 0;
  tmp___0 = 0;
  tmp___1 = 0;
  c = 0;
  tmp___2 = 0;
  tmp___3 = 0;
  tmp___4 = 0;
  if ((int const   )*(p + 1) == 120) {
    {
    tmp___3 = __dyc_funcallvar_3;
    }
    if (tmp___3) {
      {
      tmp___4 = __dyc_funcallvar_4;
      }
      if (tmp___4) {
        {
        tmp___0 = __dyc_funcallvar_5;
        tmp___1 = __dyc_funcallvar_6;
        byte = (unsigned char )(tmp___0 * 16 + tmp___1);
        current = __dyc_funcallvar_7;
        p += 3;
        }
      } else {
        goto _L___2;
      }
    } else {
      goto _L___2;
    }
  }
  _L___2:  
  if ((int const   )*p == 92) {
    if (*(p + 1)) {
      p ++;
      if ((int )*p == 110) {
        goto switch_30_110;
      } else {
        if ((int )*p == 114) {
          goto switch_30_114;
        } else {
          if ((int )*p == 116) {
            goto switch_30_116;
          } else {
            if ((int )*p == 98) {
              goto switch_30_98;
            } else {
              if ((int )*p == 97) {
                goto switch_30_97;
              } else {
                {
                goto switch_30_default;
                if (0) {
                  switch_30_110:  
                  c = (char )'\n';
                  goto switch_30_break;
                  switch_30_114:  
                  c = (char )'\r';
                  goto switch_30_break;
                  switch_30_116:  
                  c = (char )'\t';
                  goto switch_30_break;
                  switch_30_98:  
                  c = (char )'\b';
                  goto switch_30_break;
                  switch_30_97:  
                  c = (char )'\a';
                  goto switch_30_break;
                  switch_30_default:  
                  c = (char )*p;
                  goto switch_30_break;
                } else {
                  switch_30_break:  ;
                }
                }
              }
            }
          }
        }
      }
      {
      current = __dyc_funcallvar_8;
      }
    } else {
      goto _L;
    }
  } else {
    _L:  
    if ((int const   )*p == 34) {
      if (*(p + 1)) {
        {
        tmp___2 = __dyc_funcallvar_9;
        }
        if (! ((int const   )*(*tmp___2 + (int )*(p + 1)) & 8192)) {
          goto __dyc_dummy_label;
        }
      }
      done = 1;
    } else {
      if (! *p) {
        goto __dyc_dummy_label;
      } else {
        {
        current = __dyc_funcallvar_10;
        }
      }
    }
  }
  __dyc_dummy_label:  ;
  __dyc_print_ptr__char(p);
  __dyc_print_ptr__char(current);
  __dyc_printpre_byte(done);
  __dyc_printpre_byte(byte);
  __dyc_printpre_byte(c);
}
}
