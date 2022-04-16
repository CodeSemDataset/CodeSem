#include "../../include/dycfoo.h"
#include "../../include/lstrlib.i.hd.c.h"
void __dyc_foo(void) 
{ size_t l ;
  char const   *s ;
  char const   *tmp ;
  char *tmp___0 ;
  int tmp___1 ;
  char *tmp___2 ;
  char *tmp___3 ;
  int tmp___4 ;
  char *tmp___5 ;
  char *tmp___6 ;
  int tmp___7 ;
  char *tmp___8 ;
  char *tmp___9 ;
  int tmp___10 ;
  char *tmp___11 ;
  size_t tmp___12 ;
  char *tmp___13 ;
  int tmp___14 ;
  char *tmp___15 ;
  luaL_Buffer *b ;
  char *__dyc_funcallvar_2 ;
  char *__dyc_funcallvar_3 ;
  char *__dyc_funcallvar_4 ;
  char *__dyc_funcallvar_5 ;
  char *__dyc_funcallvar_6 ;

  {
  l = (size_t )__dyc_readpre_byte();
  tmp = (char const   *)__dyc_read_ptr__char();
  b = __dyc_read_ptr__typdef_luaL_Buffer();
  __dyc_funcallvar_2 = __dyc_read_ptr__char();
  __dyc_funcallvar_3 = __dyc_read_ptr__char();
  __dyc_funcallvar_4 = __dyc_read_ptr__char();
  __dyc_funcallvar_5 = __dyc_read_ptr__char();
  __dyc_funcallvar_6 = __dyc_read_ptr__char();
  s = 0;
  tmp___0 = 0;
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
  tmp___12 = 0;
  tmp___13 = 0;
  tmp___14 = 0;
  tmp___15 = 0;
  s = tmp;
  if ((unsigned long )b->p < (unsigned long )(b->buffer + 8192)) {
    tmp___1 = 1;
  } else {
    {
    tmp___0 = __dyc_funcallvar_2;
    }
    if (tmp___0) {
      tmp___1 = 1;
    } else {
      tmp___1 = 0;
    }
  }
  tmp___2 = b->p;
  (b->p) ++;
  *tmp___2 = (char )'\"';
  while (1) {
    while_26_continue:  ;
    tmp___12 = l;
    l --;
    if (! tmp___12) {
      goto while_26_break;
    }
    if ((int )*s == 34) {
      goto switch_27_34;
    } else {
      if ((int )*s == 92) {
        goto switch_27_34;
      } else {
        if ((int )*s == 10) {
          goto switch_27_34;
        } else {
          if ((int )*s == 13) {
            goto switch_27_13;
          } else {
            if ((int )*s == 0) {
              goto switch_27_0;
            } else {
              {
              goto switch_27_default;
              if (0) {
                switch_27_34:  
                switch_27_92:  
                switch_27_10:  
                if ((unsigned long )b->p < (unsigned long )(b->buffer + 8192)) {
                  tmp___4 = 1;
                } else {
                  {
                  tmp___3 = __dyc_funcallvar_3;
                  }
                  if (tmp___3) {
                    tmp___4 = 1;
                  } else {
                    tmp___4 = 0;
                  }
                }
                tmp___5 = b->p;
                (b->p) ++;
                *tmp___5 = (char )'\\';
                if ((unsigned long )b->p < (unsigned long )(b->buffer + 8192)) {
                  tmp___7 = 1;
                } else {
                  {
                  tmp___6 = __dyc_funcallvar_4;
                  }
                  if (tmp___6) {
                    tmp___7 = 1;
                  } else {
                    tmp___7 = 0;
                  }
                }
                tmp___8 = b->p;
                (b->p) ++;
                *tmp___8 = (char )*s;
                goto switch_27_break;
                switch_27_13:  
                {

                }
                goto switch_27_break;
                switch_27_0:  
                {

                }
                goto switch_27_break;
                switch_27_default:  ;
                if ((unsigned long )b->p < (unsigned long )(b->buffer + 8192)) {
                  tmp___10 = 1;
                } else {
                  {
                  tmp___9 = __dyc_funcallvar_5;
                  }
                  if (tmp___9) {
                    tmp___10 = 1;
                  } else {
                    tmp___10 = 0;
                  }
                }
                tmp___11 = b->p;
                (b->p) ++;
                *tmp___11 = (char )*s;
                goto switch_27_break;
              } else {
                switch_27_break:  ;
              }
              }
            }
          }
        }
      }
    }
    s ++;
  }
  while_26_break:  ;
  if ((unsigned long )b->p < (unsigned long )(b->buffer + 8192)) {
    tmp___14 = 1;
  } else {
    {
    tmp___13 = __dyc_funcallvar_6;
    }
    if (tmp___13) {
      tmp___14 = 1;
    } else {
      tmp___14 = 0;
    }
  }
  tmp___15 = b->p;
  (b->p) ++;
  *tmp___15 = (char )'\"';
  __dyc_dummy_label:  ;
  __dyc_printpre_byte(l);
  __dyc_print_ptr__char(s);
  __dyc_printpre_byte(tmp___1);
  __dyc_printpre_byte(tmp___4);
  __dyc_printpre_byte(tmp___7);
  __dyc_printpre_byte(tmp___10);
  __dyc_printpre_byte(tmp___14);
}
}
