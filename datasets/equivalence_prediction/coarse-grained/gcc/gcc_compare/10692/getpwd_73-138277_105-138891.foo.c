#include "../../include/dycfoo.h"
#include "../../include/getpwd.i.hd.c.h"
void __dyc_foo(void) 
{ char *pwd ;
  int failure_errno ;
  char *p ;
  size_t s ;
  struct stat dotstat ;
  struct stat pwdstat ;
  int e ;
  int *tmp ;
  int *tmp___0 ;
  void *tmp___1 ;
  char __attribute__((__warn_unused_result__,
  __artificial__))  * __attribute__((__leaf__)) tmp___2 ;
  int __attribute__((__leaf__))  tmp___3 ;
  int __attribute__((__leaf__))  tmp___4 ;
  int *tmp___5 ;
  int *__dyc_funcallvar_1 ;
  char *__dyc_funcallvar_2 ;
  int __attribute__((__leaf__))  __dyc_funcallvar_3 ;
  int __attribute__((__leaf__))  __dyc_funcallvar_4 ;
  void *__dyc_funcallvar_5 ;
  char __attribute__((__warn_unused_result__,
  __artificial__))  * __attribute__((__leaf__)) __dyc_funcallvar_6 ;
  int *__dyc_funcallvar_7 ;
  int *__dyc_funcallvar_8 ;

  {
  pwd = __dyc_read_ptr__char();
  failure_errno = __dyc_readpre_byte();
  dotstat = __dyc_read_comp_31stat();
  pwdstat = __dyc_read_comp_31stat();
  __dyc_funcallvar_1 = __dyc_read_ptr__int();
  __dyc_funcallvar_2 = __dyc_read_ptr__char();
  __dyc_funcallvar_3 = (int __attribute__((__leaf__))  )__dyc_readpre_byte();
  __dyc_funcallvar_4 = (int __attribute__((__leaf__))  )__dyc_readpre_byte();
  __dyc_funcallvar_5 = __dyc_read_ptr__void();
  __dyc_funcallvar_6 = (char __attribute__((__warn_unused_result__,
  __artificial__))  * __attribute__((__leaf__)) )__dyc_read_ptr__char();
  __dyc_funcallvar_7 = __dyc_read_ptr__int();
  __dyc_funcallvar_8 = __dyc_read_ptr__int();
  p = 0;
  s = 0;
  e = 0;
  tmp = 0;
  tmp___0 = 0;
  tmp___1 = 0;
  tmp___2 = 0;
  tmp___3 = 0;
  tmp___4 = 0;
  tmp___5 = 0;
  p = pwd;
  if (! p) {
    {
    tmp___5 = __dyc_funcallvar_1;
    *tmp___5 = failure_errno;
    }
    if (! *tmp___5) {
      {
      p = __dyc_funcallvar_2;
      }
      if ((unsigned long )p != (unsigned long )((char *)0)) {
        if ((int )*p == 47) {
          {
          tmp___3 = __dyc_funcallvar_3;
          }
          if (tmp___3 == (int __attribute__((__leaf__))  )0) {
            {
            tmp___4 = __dyc_funcallvar_4;
            }
            if (tmp___4 == (int __attribute__((__leaf__))  )0) {
              if (dotstat.st_ino == pwdstat.st_ino) {
                if (! (dotstat.st_dev == pwdstat.st_dev)) {
                  goto _L___3;
                }
              } else {
                goto _L___3;
              }
            } else {
              goto _L___3;
            }
          } else {
            goto _L___3;
          }
        } else {
          goto _L___3;
        }
      } else {
        _L___3:  
        s = 4097UL;
        {
        while (1) {
          while_0_continue:  ;
          {
          tmp___1 = __dyc_funcallvar_5;
          p = (char *)tmp___1;
          tmp___2 = __dyc_funcallvar_6;
          }
          if (tmp___2) {
            goto while_0_break;
          }
          {
          tmp = __dyc_funcallvar_7;
          e = *tmp;

          }
          if (e != 34) {
            {
            tmp___0 = __dyc_funcallvar_8;
            failure_errno = e;
            *tmp___0 = failure_errno;
            p = (char *)0;
            }
            goto while_0_break;
          }
          s *= 2UL;
        }
        while_0_break:  ;
        }
      }
      pwd = p;
    }
  }
  goto __dyc_dummy_label;
  __dyc_dummy_label:  ;
  __dyc_print_ptr__char(pwd);
  __dyc_printpre_byte(s);
}
}
