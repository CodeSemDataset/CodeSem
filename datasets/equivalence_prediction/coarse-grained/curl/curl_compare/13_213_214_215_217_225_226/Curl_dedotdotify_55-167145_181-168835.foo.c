#include "../../include/dycfoo.h"
#include "../../include/dotdot.i.hd.c.h"
void __dyc_foo(void) 
{ size_t inlen ;
  size_t tmp ;
  char *clone ;
  size_t clen ;
  char *out ;
  void *tmp___0 ;
  char *outptr ;
  char *orgclone ;
  char *queryp ;
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
  size_t qlen ;
  size_t oindex ;
  void *__dyc_funcallvar_2 ;
  char *__dyc_funcallvar_3 ;
  char *__dyc_funcallvar_4 ;
  int __dyc_funcallvar_5 ;
  int __dyc_funcallvar_6 ;
  int __dyc_funcallvar_7 ;
  int __dyc_funcallvar_8 ;
  int __dyc_funcallvar_9 ;
  int __dyc_funcallvar_10 ;
  int __dyc_funcallvar_11 ;
  int __dyc_funcallvar_12 ;
  size_t __dyc_funcallvar_13 ;

  {
  tmp = (size_t )__dyc_readpre_byte();
  __dyc_funcallvar_2 = __dyc_read_ptr__void();
  __dyc_funcallvar_3 = __dyc_read_ptr__char();
  __dyc_funcallvar_4 = __dyc_read_ptr__char();
  __dyc_funcallvar_5 = __dyc_readpre_byte();
  __dyc_funcallvar_6 = __dyc_readpre_byte();
  __dyc_funcallvar_7 = __dyc_readpre_byte();
  __dyc_funcallvar_8 = __dyc_readpre_byte();
  __dyc_funcallvar_9 = __dyc_readpre_byte();
  __dyc_funcallvar_10 = __dyc_readpre_byte();
  __dyc_funcallvar_11 = __dyc_readpre_byte();
  __dyc_funcallvar_12 = __dyc_readpre_byte();
  __dyc_funcallvar_13 = (size_t )__dyc_readpre_byte();
  inlen = 0;
  clone = 0;
  clen = 0;
  out = 0;
  tmp___0 = 0;
  outptr = 0;
  orgclone = 0;
  queryp = 0;
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
  qlen = 0;
  oindex = 0;
  inlen = tmp;
  clen = inlen;
  tmp___0 = __dyc_funcallvar_2;
  out = (char *)tmp___0;
  if (! out) {
    goto __dyc_dummy_label;
  }
  *out = (char)0;
  clone = __dyc_funcallvar_3;
  if (! clone) {
    {

    }
    goto __dyc_dummy_label;
  }
  orgclone = clone;
  outptr = out;
  if (! *clone) {
    {

    }
    goto __dyc_dummy_label;
  }
  queryp = __dyc_funcallvar_4;
  if (queryp) {
    *queryp = (char)0;
  }
  while (1) {
    while_0_continue:  ;
    {
    tmp___10 = __dyc_funcallvar_5;
    }
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
    if (! *clone) {
      goto while_0_break;
    }
  }
  while_0_break:  ;
  if (queryp) {
    {
    oindex = (size_t )(queryp - orgclone);
    qlen = __dyc_funcallvar_13;

    }
  }

  goto __dyc_dummy_label;
  __dyc_dummy_label:  ;
  __dyc_printpre_byte(clen);
  __dyc_print_ptr__char(outptr);
  __dyc_print_ptr__char(orgclone);
  __dyc_printpre_byte(qlen);
  __dyc_printpre_byte(oindex);
}
}
