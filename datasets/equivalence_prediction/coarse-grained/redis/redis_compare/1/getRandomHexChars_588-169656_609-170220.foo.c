#include "../../include/dycfoo.h"
#include "../../include/util.i.hd.c.h"
void __dyc_foo(void) 
{ char *charset ;
  unsigned int j ;
  char *x ;
  unsigned int l ;
  pid_t pid ;
  __pid_t tmp___2 ;
  int tmp___3 ;
  char *p ;
  unsigned int len ;
  int __dyc_funcallvar_4 ;

  {
  charset = __dyc_read_ptr__char();
  x = __dyc_read_ptr__char();
  l = (unsigned int )__dyc_readpre_byte();
  tmp___2 = __dyc_readpre_byte();
  p = __dyc_read_ptr__char();
  len = (unsigned int )__dyc_readpre_byte();
  __dyc_funcallvar_4 = __dyc_readpre_byte();
  j = 0;
  pid = 0;
  tmp___3 = 0;
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
  __dyc_print_ptr__char(x);
  __dyc_printpre_byte(l);
  __dyc_printpre_byte(pid);
}
}
