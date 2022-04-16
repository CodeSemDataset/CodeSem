#include "../../include/dycfoo.h"
#include "../../include/lstrlib.i.hd.c.h"
void __dyc_foo(void) 
{ int res ;
  int __res ;
  int __attribute__((__leaf__))  tmp___1 ;
  __int32_t const   **tmp___2 ;
  unsigned short const   **tmp___3 ;
  unsigned short const   **tmp___4 ;
  unsigned short const   **tmp___5 ;
  unsigned short const   **tmp___6 ;
  unsigned short const   **tmp___7 ;
  unsigned short const   **tmp___8 ;
  unsigned short const   **tmp___9 ;
  unsigned short const   **tmp___10 ;
  unsigned short const   **tmp___11 ;
  int c ;
  int cl ;
  int __attribute__((__leaf__))  __dyc_funcallvar_1 ;
  __int32_t const   **__dyc_funcallvar_2 ;
  unsigned short const   **__dyc_funcallvar_3 ;
  unsigned short const   **__dyc_funcallvar_4 ;
  unsigned short const   **__dyc_funcallvar_5 ;
  unsigned short const   **__dyc_funcallvar_6 ;
  unsigned short const   **__dyc_funcallvar_7 ;
  unsigned short const   **__dyc_funcallvar_8 ;
  unsigned short const   **__dyc_funcallvar_9 ;
  unsigned short const   **__dyc_funcallvar_10 ;
  unsigned short const   **__dyc_funcallvar_11 ;

  {
  c = __dyc_readpre_byte();
  cl = __dyc_readpre_byte();
  __dyc_funcallvar_1 = (int __attribute__((__leaf__))  )__dyc_readpre_byte();
  __dyc_funcallvar_2 = (__int32_t const   **)__dyc_read_ptr__ptr__typdef___int32_t();
  __dyc_funcallvar_3 = (unsigned short const   **)__dyc_read_ptr__ptr__short();
  __dyc_funcallvar_4 = (unsigned short const   **)__dyc_read_ptr__ptr__short();
  __dyc_funcallvar_5 = (unsigned short const   **)__dyc_read_ptr__ptr__short();
  __dyc_funcallvar_6 = (unsigned short const   **)__dyc_read_ptr__ptr__short();
  __dyc_funcallvar_7 = (unsigned short const   **)__dyc_read_ptr__ptr__short();
  __dyc_funcallvar_8 = (unsigned short const   **)__dyc_read_ptr__ptr__short();
  __dyc_funcallvar_9 = (unsigned short const   **)__dyc_read_ptr__ptr__short();
  __dyc_funcallvar_10 = (unsigned short const   **)__dyc_read_ptr__ptr__short();
  __dyc_funcallvar_11 = (unsigned short const   **)__dyc_read_ptr__ptr__short();
  res = 0;
  __res = 0;
  tmp___1 = 0;
  tmp___2 = 0;
  tmp___3 = 0;
  tmp___4 = 0;
  tmp___5 = 0;
  tmp___6 = 0;
  tmp___7 = 0;
  tmp___8 = 0;
  tmp___9 = 0;
  tmp___10 = 0;
  tmp___11 = 0;
  if (sizeof(int ) > 1UL) {
    {
    tmp___1 = __dyc_funcallvar_1;
    __res = (int )tmp___1;
    }
  } else {
    {
    tmp___2 = __dyc_funcallvar_2;
    __res = (int )*(*tmp___2 + cl);
    }
  }
  if (__res == 97) {
    goto switch_9_97;
  } else {
    if (__res == 99) {
      goto switch_9_99;
    } else {
      if (__res == 100) {
        goto switch_9_100;
      } else {
        if (__res == 108) {
          goto switch_9_108;
        } else {
          if (__res == 112) {
            goto switch_9_112;
          } else {
            if (__res == 115) {
              goto switch_9_115;
            } else {
              if (__res == 117) {
                goto switch_9_117;
              } else {
                if (__res == 119) {
                  goto switch_9_119;
                } else {
                  if (__res == 120) {
                    goto switch_9_120;
                  } else {
                    if (__res == 122) {
                      goto switch_9_122;
                    } else {
                      {
                      goto switch_9_default;
                      if (0) {
                        switch_9_97:  
                        {
                        tmp___3 = __dyc_funcallvar_3;
                        res = (int )((int const   )*(*tmp___3 + c) & 1024);
                        }
                        goto switch_9_break;
                        switch_9_99:  
                        {
                        tmp___4 = __dyc_funcallvar_4;
                        res = (int )((int const   )*(*tmp___4 + c) & 2);
                        }
                        goto switch_9_break;
                        switch_9_100:  
                        {
                        tmp___5 = __dyc_funcallvar_5;
                        res = (int )((int const   )*(*tmp___5 + c) & 2048);
                        }
                        goto switch_9_break;
                        switch_9_108:  
                        {
                        tmp___6 = __dyc_funcallvar_6;
                        res = (int )((int const   )*(*tmp___6 + c) & 512);
                        }
                        goto switch_9_break;
                        switch_9_112:  
                        {
                        tmp___7 = __dyc_funcallvar_7;
                        res = (int )((int const   )*(*tmp___7 + c) & 4);
                        }
                        goto switch_9_break;
                        switch_9_115:  
                        {
                        tmp___8 = __dyc_funcallvar_8;
                        res = (int )((int const   )*(*tmp___8 + c) & 8192);
                        }
                        goto switch_9_break;
                        switch_9_117:  
                        {
                        tmp___9 = __dyc_funcallvar_9;
                        res = (int )((int const   )*(*tmp___9 + c) & 256);
                        }
                        goto switch_9_break;
                        switch_9_119:  
                        {
                        tmp___10 = __dyc_funcallvar_10;
                        res = (int )((int const   )*(*tmp___10 + c) & 8);
                        }
                        goto switch_9_break;
                        switch_9_120:  
                        {
                        tmp___11 = __dyc_funcallvar_11;
                        res = (int )((int const   )*(*tmp___11 + c) & 4096);
                        }
                        goto switch_9_break;
                        switch_9_122:  
                        res = c == 0;
                        goto switch_9_break;
                        switch_9_default:  ;
                        goto __dyc_dummy_label;
                      } else {
                        switch_9_break:  ;
                      }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  __dyc_dummy_label:  ;
  __dyc_printpre_byte(res);
}
}
