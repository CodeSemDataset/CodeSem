#include "../../include/dycfoo.h"
#include "../../include/dotdot.i.hd.c.h"
void __dyc_foo(void) 
{ size_t inlen ;
  char *clone ;
  size_t clen ;
  char *out ;
  void *tmp___0 ;
  char *outptr ;
  char *orgclone ;
  char *queryp ;
  void *__dyc_funcallvar_2 ;
  char *__dyc_funcallvar_3 ;
  char *__dyc_funcallvar_4 ;

  {
  inlen = (size_t )__dyc_readpre_byte();
  __dyc_funcallvar_2 = __dyc_read_ptr__void();
  __dyc_funcallvar_3 = __dyc_read_ptr__char();
  __dyc_funcallvar_4 = __dyc_read_ptr__char();
  clone = 0;
  clen = 0;
  out = 0;
  tmp___0 = 0;
  outptr = 0;
  orgclone = 0;
  queryp = 0;
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
  __dyc_dummy_label:  ;
  __dyc_printpre_byte(clen);
  __dyc_print_ptr__char(outptr);
  __dyc_print_ptr__char(orgclone);
}
}
