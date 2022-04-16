#include "../../include/dycfoo.h"
#include "../../include/argv.i.hd.c.h"
void __dyc_foo(void) 
{ unsigned short const   _sch_istable[256] ;
  char *arg ;
  char *copybuf ;
  int squote ;
  int dquote ;
  int bsquote ;
  int argc ;
  int maxargc ;
  char **argv ;
  char **nargv ;
  void *tmp___1 ;
  void *tmp___2 ;
  char *tmp___3 ;
  char *tmp___4 ;
  char *tmp___5 ;
  char *tmp___6 ;
  char const   *input ;
  void *__dyc_funcallvar_3 ;
  void *__dyc_funcallvar_4 ;
  char *__dyc_funcallvar_5 ;

  {
  copybuf = __dyc_read_ptr__char();
  squote = __dyc_readpre_byte();
  dquote = __dyc_readpre_byte();
  bsquote = __dyc_readpre_byte();
  argc = __dyc_readpre_byte();
  maxargc = __dyc_readpre_byte();
  argv = __dyc_read_ptr__ptr__char();
  input = (char const   *)__dyc_read_ptr__char();
  __dyc_funcallvar_3 = __dyc_read_ptr__void();
  __dyc_funcallvar_4 = __dyc_read_ptr__void();
  __dyc_funcallvar_5 = __dyc_read_ptr__char();
  arg = 0;
  nargv = 0;
  tmp___1 = 0;
  tmp___2 = 0;
  tmp___3 = 0;
  tmp___4 = 0;
  tmp___5 = 0;
  tmp___6 = 0;
  if (maxargc == 0) {
    goto _L;
  } else {
    if (argc >= maxargc - 1) {
      _L:  
      if ((unsigned long )argv == (unsigned long )((void *)0)) {
        {
        maxargc = 8;
        tmp___1 = __dyc_funcallvar_3;
        nargv = (char **)tmp___1;
        }
      } else {
        {
        maxargc *= 2;
        tmp___2 = __dyc_funcallvar_4;
        nargv = (char **)tmp___2;
        }
      }
      argv = nargv;
      *(argv + argc) = (char *)((void *)0);
    }
  }
  arg = copybuf;
  while (1) {
    while_6_continue:  ;
    if (! ((int const   )*input != 0)) {
      goto while_6_break;
    }
    if ((int const   )_sch_istable[(int const   )*input & 255] & 64) {
      if (! squote) {
        if (! dquote) {
          if (! bsquote) {
            goto while_6_break;
          } else {
            goto _L___2;
          }
        } else {
          goto _L___2;
        }
      } else {
        goto _L___2;
      }
    } else {
      _L___2:  
      if (bsquote) {
        bsquote = 0;
        tmp___3 = arg;
        arg ++;
        *tmp___3 = (char )*input;
      } else {
        if ((int const   )*input == 92) {
          bsquote = 1;
        } else {
          if (squote) {
            if ((int const   )*input == 39) {
              squote = 0;
            } else {
              tmp___4 = arg;
              arg ++;
              *tmp___4 = (char )*input;
            }
          } else {
            if (dquote) {
              if ((int const   )*input == 34) {
                dquote = 0;
              } else {
                tmp___5 = arg;
                arg ++;
                *tmp___5 = (char )*input;
              }
            } else {
              if ((int const   )*input == 39) {
                squote = 1;
              } else {
                if ((int const   )*input == 34) {
                  dquote = 1;
                } else {
                  tmp___6 = arg;
                  arg ++;
                  *tmp___6 = (char )*input;
                }
              }
            }
          }
        }
      }
      input ++;
    }
  }
  while_6_break:  ;
  *arg = (char )'\000';
  *(argv + argc) = __dyc_funcallvar_5;
  argc ++;
  *(argv + argc) = (char *)((void *)0);

  if ((int const   )*input != 0) {

  }
  __dyc_dummy_label:  ;
  __dyc_printpre_byte(squote);
  __dyc_printpre_byte(dquote);
  __dyc_printpre_byte(bsquote);
  __dyc_printpre_byte(maxargc);
}
}
