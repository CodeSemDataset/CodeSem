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
  int __dyc_funcallvar_12 ;

  {
  clone = __dyc_read_ptr__char();
  clen = (size_t )__dyc_readpre_byte();
  out = __dyc_read_ptr__char();
  outptr = __dyc_read_ptr__char();
  tmp___3 = __dyc_readpre_byte();
  __dyc_funcallvar_12 = __dyc_readpre_byte();
  tmp___1 = 0;
  tmp___2 = 0;
  tmp___4 = 0;
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
  *(clone + 2) = (char )'/';
  clone += 2;
  clen -= 2UL;
  __dyc_dummy_label:  ;
  __dyc_print_ptr__char(clone);
  __dyc_printpre_byte(clen);
}
}
