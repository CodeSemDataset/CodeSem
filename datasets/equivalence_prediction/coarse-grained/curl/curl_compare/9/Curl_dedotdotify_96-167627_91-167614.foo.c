#include "../../include/dycfoo.h"
#include "../../include/dotdot.i.hd.c.h"
void __dyc_foo(void) 
{ char *clone ;
  size_t clen ;
  char *out ;
  char *outptr ;
  char *tmp___1 ;
  char *tmp___2 ;
  int tmp___3 ;
  int tmp___4 ;
  int tmp___5 ;
  int tmp___6 ;
  int tmp___7 ;
  int tmp___8 ;
  int tmp___9 ;
  int tmp___10 ;
  int __dyc_funcallvar_6 ;
  int __dyc_funcallvar_7 ;
  int __dyc_funcallvar_8 ;
  int __dyc_funcallvar_9 ;
  int __dyc_funcallvar_10 ;
  int __dyc_funcallvar_11 ;
  int __dyc_funcallvar_12 ;

  {
  clone = __dyc_read_ptr__char();
  clen = (size_t )__dyc_readpre_byte();
  out = __dyc_read_ptr__char();
  outptr = __dyc_read_ptr__char();
  tmp___10 = __dyc_readpre_byte();
  __dyc_funcallvar_6 = __dyc_readpre_byte();
  __dyc_funcallvar_7 = __dyc_readpre_byte();
  __dyc_funcallvar_8 = __dyc_readpre_byte();
  __dyc_funcallvar_9 = __dyc_readpre_byte();
  __dyc_funcallvar_10 = __dyc_readpre_byte();
  __dyc_funcallvar_11 = __dyc_readpre_byte();
  __dyc_funcallvar_12 = __dyc_readpre_byte();
  tmp___1 = 0;
  tmp___2 = 0;
  tmp___3 = 0;
  tmp___4 = 0;
  tmp___5 = 0;
  tmp___6 = 0;
  tmp___7 = 0;
  tmp___8 = 0;
  tmp___9 = 0;
  if (tmp___10) {
    {
    tmp___9 = __dyc_funcallvar_6;
    }
    if (tmp___9) {
      {
      tmp___8 = __dyc_funcallvar_7;
      }
      if (tmp___8) {
        {
        tmp___7 = __dyc_funcallvar_8;
        }
        if (tmp___7) {
          {
          tmp___6 = __dyc_funcallvar_9;
          }
          if (tmp___6) {
            {
            tmp___5 = __dyc_funcallvar_10;
            }
            if (tmp___5) {
              {
              tmp___3 = __dyc_funcallvar_11;
              }
              if (tmp___3) {
                {
                tmp___4 = __dyc_funcallvar_12;
                }
                if (tmp___4) {
                  {
                  while (1) {
                    while_1_continue:  ;
                    tmp___1 = outptr;
                    outptr ++;
                    tmp___2 = clone;
                    clone ++;
                    *tmp___1 = *tmp___2;
                    clen --;
                    if (*clone) {
                      if (! ((int )*clone != 47)) {
                        goto while_1_break;
                      }
                    } else {
                      goto while_1_break;
                    }
                  }
                  while_1_break:  ;
                  }
                  *outptr = (char)0;
                } else {
                  *clone = (char)0;
                  *out = (char)0;
                }
              } else {
                *clone = (char)0;
                *out = (char)0;
              }
            } else {
              *(clone + 2) = (char )'/';
              clone += 2;
              clen -= 2UL;
              {
              while (1) {
                while_2_continue:  ;
                if (! ((unsigned long )outptr > (unsigned long )out)) {
                  goto while_2_break;
                }
                outptr --;
                if ((int )*outptr == 47) {
                  goto while_2_break;
                }
              }
              while_2_break:  ;
              }
              *outptr = (char)0;
            }
          } else {
            clone += 3;
            clen -= 3UL;
            {
            while (1) {
              while_3_continue:  ;
              if (! ((unsigned long )outptr > (unsigned long )out)) {
                goto while_3_break;
              }
              outptr --;
              if ((int )*outptr == 47) {
                goto while_3_break;
              }
            }
            while_3_break:  ;
            }
            *outptr = (char)0;
          }
        } else {
          *(clone + 1) = (char )'/';
          clone ++;
          clen --;
        }
      } else {
        clone += 2;
        clen -= 2UL;
      }
    } else {
      clone += 3;
      clen -= 3UL;
    }
  } else {
    clone += 2;
    clen -= 2UL;
  }
  if (*clone) {

  }
  __dyc_dummy_label:  ;
  __dyc_printpre_byte(clen);
}
}
