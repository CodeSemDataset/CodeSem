#include "../../include/dycfoo.h"
#include "../../include/liolib.i.hd.c.h"
void __dyc_foo(void) 
{ int nargs ;
  int tmp ;
  int success ;
  int n ;
  size_t l ;
  lua_Integer tmp___0 ;
  char const   *p ;
  char const   *tmp___3 ;
  int tmp___4 ;
  int tmp___5 ;
  int tmp___6 ;
  int tmp___7 ;
  int tmp___8 ;
  int tmp___9 ;
  int tmp___10 ;
  int first ;
  int __dyc_funcallvar_2 ;
  int __dyc_funcallvar_3 ;
  lua_Integer __dyc_funcallvar_4 ;
  int __dyc_funcallvar_5 ;
  int __dyc_funcallvar_6 ;
  char const   *__dyc_funcallvar_7 ;
  int __dyc_funcallvar_8 ;
  int __dyc_funcallvar_9 ;
  int __dyc_funcallvar_10 ;
  int __dyc_funcallvar_11 ;
  int __dyc_funcallvar_12 ;
  int __dyc_funcallvar_13 ;

  {
  tmp = __dyc_readpre_byte();
  first = __dyc_readpre_byte();
  __dyc_funcallvar_2 = __dyc_readpre_byte();
  __dyc_funcallvar_3 = __dyc_readpre_byte();
  __dyc_funcallvar_4 = (lua_Integer )__dyc_readpre_byte();
  __dyc_funcallvar_5 = __dyc_readpre_byte();
  __dyc_funcallvar_6 = __dyc_readpre_byte();
  __dyc_funcallvar_7 = (char const   *)__dyc_read_ptr__char();
  __dyc_funcallvar_8 = __dyc_readpre_byte();
  __dyc_funcallvar_9 = __dyc_readpre_byte();
  __dyc_funcallvar_10 = __dyc_readpre_byte();
  __dyc_funcallvar_11 = __dyc_readpre_byte();
  __dyc_funcallvar_12 = __dyc_readpre_byte();
  __dyc_funcallvar_13 = __dyc_readpre_byte();
  nargs = 0;
  success = 0;
  n = 0;
  l = 0;
  tmp___0 = 0;
  p = 0;
  tmp___3 = 0;
  tmp___4 = 0;
  tmp___5 = 0;
  tmp___6 = 0;
  tmp___7 = 0;
  tmp___8 = 0;
  tmp___9 = 0;
  tmp___10 = 0;
  nargs = tmp - 1;

  if (nargs == 0) {
    {
    success = __dyc_funcallvar_2;
    n = first + 1;
    }
  } else {
    {

    success = 1;
    n = first;
    }
    {
    while (1) {
      while_2_continue:  ;
      tmp___8 = nargs;
      nargs --;
      if (tmp___8) {
        if (! success) {
          goto while_2_break;
        }
      } else {
        goto while_2_break;
      }
      {
      tmp___7 = __dyc_funcallvar_3;
      }
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
      n ++;
    }
    while_2_break:  ;
    }
  }
  tmp___10 = __dyc_funcallvar_12;
  if (tmp___10) {
    {
    tmp___9 = __dyc_funcallvar_13;
    }
    goto __dyc_dummy_label;
  }
  if (! success) {
    {


    }
  }
  goto __dyc_dummy_label;
  __dyc_dummy_label:  ;
  __dyc_printpre_byte(nargs);
  __dyc_printpre_byte(success);
  __dyc_printpre_byte(n);
  __dyc_printpre_byte(tmp___5);
  __dyc_printpre_byte(tmp___6);
  __dyc_printpre_byte(tmp___9);
}
}
