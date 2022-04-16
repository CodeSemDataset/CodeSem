#include "../../include/dycfoo.h"
#include "../../include/loslib.i.hd.c.h"
void __dyc_foo(void) 
{ char const   *s ;
  struct tm *stm ;
  char cc[3] ;
  luaL_Buffer b ;
  char *tmp___6 ;
  int tmp___7 ;
  char *tmp___8 ;
  size_t reslen ;
  size_t __s1_len ;
  size_t __s2_len ;
  int tmp___18 ;
  int tmp___23 ;
  int tmp___24 ;
  int tmp___25 ;
  int tmp___26 ;
  struct tm *__dyc_funcallvar_5 ;
  struct tm *__dyc_funcallvar_6 ;
  int __dyc_funcallvar_7 ;
  int __dyc_funcallvar_8 ;
  int __dyc_funcallvar_9 ;
  int __dyc_funcallvar_10 ;
  int __dyc_funcallvar_11 ;
  char *__dyc_funcallvar_12 ;
  size_t __dyc_funcallvar_13 ;

  {
  s = (char const   *)__dyc_read_ptr__char();
  b = __dyc_read_comp_45luaL_Buffer();
  __dyc_funcallvar_5 = __dyc_read_ptr__comp_31tm();
  __dyc_funcallvar_6 = __dyc_read_ptr__comp_31tm();
  __dyc_funcallvar_7 = __dyc_readpre_byte();
  __dyc_funcallvar_8 = __dyc_readpre_byte();
  __dyc_funcallvar_9 = __dyc_readpre_byte();
  __dyc_funcallvar_10 = __dyc_readpre_byte();
  __dyc_funcallvar_11 = __dyc_readpre_byte();
  __dyc_funcallvar_12 = __dyc_read_ptr__char();
  __dyc_funcallvar_13 = (size_t )__dyc_readpre_byte();
  stm = 0;
  tmp___6 = 0;
  tmp___7 = 0;
  tmp___8 = 0;
  reslen = 0;
  __s1_len = 0;
  __s2_len = 0;
  tmp___18 = 0;
  tmp___23 = 0;
  tmp___24 = 0;
  tmp___25 = 0;
  tmp___26 = 0;
  if ((int const   )*s == 33) {
    {
    stm = __dyc_funcallvar_5;
    s ++;
    }
  } else {
    {
    stm = __dyc_funcallvar_6;
    }
  }
  if ((unsigned long )stm == (unsigned long )((void *)0)) {
    {

    }
  } else {
    if (0) {
      {
      tmp___24 = __dyc_funcallvar_7;
      __s1_len = (unsigned long )tmp___24;
      tmp___25 = __dyc_funcallvar_8;
      __s2_len = (unsigned long )tmp___25;
      }
      if (! ((unsigned long )((void const   *)(s + 1)) - (unsigned long )((void const   *)s) == 1UL)) {
        goto _L___1;
      } else {
        if (__s1_len >= 4UL) {
          _L___1:  
          if (! ((unsigned long )((void const   *)("*t" + 1)) - (unsigned long )((void const   *)"*t") == 1UL)) {
            tmp___26 = 1;
          } else {
            if (__s2_len >= 4UL) {
              tmp___26 = 1;
            } else {
              tmp___26 = 0;
            }
          }
        } else {
          tmp___26 = 0;
        }
      }
      if (tmp___26) {
        {
        tmp___18 = __dyc_funcallvar_9;
        }
      } else {
        {
        tmp___23 = __dyc_funcallvar_10;
        tmp___18 = tmp___23;
        }
      }
    } else {
      {
      tmp___23 = __dyc_funcallvar_11;
      tmp___18 = tmp___23;
      }
    }
    if (tmp___18 == 0) {
      {










      }
    } else {
      {
      cc[0] = (char )'%';
      cc[2] = (char )'\000';

      }
      {
      while (1) {
        while_0_continue:  ;
        if (! *s) {
          goto while_0_break;
        }
        if ((int const   )*s != 37) {
          goto _L;
        } else {
          if ((int const   )*(s + 1) == 0) {
            _L:  
            if ((unsigned long )b.p < (unsigned long )(b.buffer + 8192)) {
              tmp___7 = 1;
            } else {
              {
              tmp___6 = __dyc_funcallvar_12;
              }
              if (tmp___6) {
                tmp___7 = 1;
              } else {
                tmp___7 = 0;
              }
            }
            tmp___8 = b.p;
            (b.p) ++;
            *tmp___8 = (char )*s;
          } else {
            {
            s ++;
            cc[1] = (char )*s;
            reslen = __dyc_funcallvar_13;

            }
          }
        }
        s ++;
      }
      while_0_break:  ;
      }
      {

      }
    }
  }
  __dyc_dummy_label:  ;
  __dyc_print_ptr__char(s);
  __dyc_print_comp_45luaL_Buffer(b);
  __dyc_printpre_byte(tmp___7);
  __dyc_printpre_byte(reslen);
  __dyc_printpre_byte(__s1_len);
  __dyc_printpre_byte(__s2_len);
}
}
