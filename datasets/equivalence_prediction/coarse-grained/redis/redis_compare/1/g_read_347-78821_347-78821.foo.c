#include "../../include/dycfoo.h"
#include "../../include/liolib.i.hd.c.h"
void __dyc_foo(void) 
{ int success ;
  size_t l ;
  lua_Integer tmp___0 ;
  char const   *p ;
  char const   *tmp___3 ;
  int tmp___4 ;
  int tmp___5 ;
  int tmp___6 ;
  int tmp___7 ;
  lua_Integer __dyc_funcallvar_4 ;
  int __dyc_funcallvar_5 ;
  int __dyc_funcallvar_6 ;
  char const   *__dyc_funcallvar_7 ;
  int __dyc_funcallvar_8 ;
  int __dyc_funcallvar_9 ;
  int __dyc_funcallvar_10 ;
  int __dyc_funcallvar_11 ;

  {
  tmp___7 = __dyc_readpre_byte();
  __dyc_funcallvar_4 = (lua_Integer )__dyc_readpre_byte();
  __dyc_funcallvar_5 = __dyc_readpre_byte();
  __dyc_funcallvar_6 = __dyc_readpre_byte();
  __dyc_funcallvar_7 = (char const   *)__dyc_read_ptr__char();
  __dyc_funcallvar_8 = __dyc_readpre_byte();
  __dyc_funcallvar_9 = __dyc_readpre_byte();
  __dyc_funcallvar_10 = __dyc_readpre_byte();
  __dyc_funcallvar_11 = __dyc_readpre_byte();
  success = 0;
  l = 0;
  tmp___0 = 0;
  p = 0;
  tmp___3 = 0;
  tmp___4 = 0;
  tmp___5 = 0;
  tmp___6 = 0;
  if (tmp___7 == 3) {
    {
    tmp___0 = __dyc_funcallvar_4;
    l = (unsigned long )tmp___0;
    }
    if (l == 0UL) {
      {
      success = __dyc_funcallvar_5;
      }
    } else {
      {
      success = __dyc_funcallvar_6;
      }
    }
  } else {
    {
    tmp___3 = __dyc_funcallvar_7;
    p = tmp___3;
    }
    if (p) {
      if ((int const   )*(p + 0) == 42) {
        tmp___5 = 1;
      } else {
        goto _L;
      }
    } else {
      _L:  
      {
      tmp___4 = __dyc_funcallvar_8;
      }
      if (tmp___4) {
        tmp___5 = 1;
      } else {
        tmp___5 = 0;
      }
    }
    if ((int )*(p + 1) == 110) {
      goto switch_3_110;
    } else {
      if ((int )*(p + 1) == 108) {
        goto switch_3_108;
      } else {
        if ((int )*(p + 1) == 97) {
          goto switch_3_97;
        } else {
          {
          goto switch_3_default;
          if (0) {
            switch_3_110:  
            {
            success = __dyc_funcallvar_9;
            }
            goto switch_3_break;
            switch_3_108:  
            {
            success = __dyc_funcallvar_10;
            }
            goto switch_3_break;
            switch_3_97:  
            {

            success = 1;
            }
            goto switch_3_break;
            switch_3_default:  
            {
            tmp___6 = __dyc_funcallvar_11;
            }
            goto __dyc_dummy_label;
          } else {
            switch_3_break:  ;
          }
          }
        }
      }
    }
  }
  __dyc_dummy_label:  ;
  __dyc_printpre_byte(success);
  __dyc_printpre_byte(tmp___5);
  __dyc_printpre_byte(tmp___6);
}
}
