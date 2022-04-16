#include "../../include/dycfoo.h"
#include "../../include/util.i.hd.c.h"
void __dyc_foo(void) 
{ uint64_t counter ;
  char *charset ;
  unsigned int j ;
  FILE *fp ;
  unsigned int copylen ;
  unsigned int tmp___1 ;
  char *x ;
  unsigned int l ;
  pid_t pid ;
  __pid_t tmp___2 ;
  int tmp___3 ;
  char *p ;
  unsigned int len ;
  __pid_t __dyc_funcallvar_3 ;
  int __dyc_funcallvar_4 ;

  {
  counter = (uint64_t )__dyc_readpre_byte();
  charset = __dyc_read_ptr__char();
  fp = __dyc_read_ptr__typdef_FILE();
  p = __dyc_read_ptr__char();
  len = (unsigned int )__dyc_readpre_byte();
  __dyc_funcallvar_3 = __dyc_readpre_byte();
  __dyc_funcallvar_4 = __dyc_readpre_byte();
  j = 0;
  copylen = 0;
  tmp___1 = 0;
  x = 0;
  l = 0;
  pid = 0;
  tmp___2 = 0;
  tmp___3 = 0;
  if (fp) {
    {

    }
  }
  while (1) {
    while_11_continue:  ;
    if (! len) {
      goto while_11_break;
    }
    if (len > 20U) {
      tmp___1 = 20U;
    } else {
      tmp___1 = len;
    }
    {
    copylen = tmp___1;




    counter ++;

    j = 0U;
    }
    {
    while (1) {
      while_12_continue:  ;
      if (! (j < copylen)) {
        goto while_12_break;
      }
      *(p + j) = *(charset + ((int )*(p + j) & 15));
      j ++;
    }
    while_12_break:  ;
    }
    len -= copylen;
    p += copylen;
  }
  while_11_break:  ;
  x = p;
  l = len;
  tmp___2 = __dyc_funcallvar_3;
  pid = tmp___2;

  if ((unsigned long )l >= sizeof(__suseconds_t )) {
    {

    l = (unsigned int )((unsigned long )l - sizeof(__suseconds_t ));
    x += sizeof(__suseconds_t );
    }
  }
  if ((unsigned long )l >= sizeof(__time_t )) {
    {

    l = (unsigned int )((unsigned long )l - sizeof(__time_t ));
    x += sizeof(__time_t );
    }
  }
  if ((unsigned long )l >= sizeof(pid_t )) {
    {

    l = (unsigned int )((unsigned long )l - sizeof(pid_t ));
    x += sizeof(pid_t );
    }
  }
  j = 0U;
  while (1) {
    while_13_continue:  ;
    if (! (j < len)) {
      goto __dyc_dummy_label;
    }
    {
    tmp___3 = __dyc_funcallvar_4;
    *(p + j) = (char )((int )*(p + j) ^ tmp___3);
    *(p + j) = *(charset + ((int )*(p + j) & 15));
    j ++;
    }
  }
  __dyc_dummy_label:  ;
  __dyc_printpre_byte(counter);
  __dyc_print_ptr__char(x);
  __dyc_printpre_byte(l);
  __dyc_printpre_byte(pid);
  __dyc_print_ptr__char(p);
}
}
