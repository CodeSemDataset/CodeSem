#include "../../include/dycfoo.h"
#include "../../include/printf.i.hd.c.h"
void __dyc_foo(void) 
{ int base ;
  char *str ;
  int flags ;
  int qualifier ;
  long *ip ;
  long *tmp___14 ;
  int *ip___0 ;
  int *tmp___15 ;
  char *tmp___16 ;
  char *buf ;

  {
  str = __dyc_read_ptr__char();
  flags = __dyc_readpre_byte();
  qualifier = __dyc_readpre_byte();
  tmp___14 = __dyc_read_ptr__long();
  tmp___15 = __dyc_read_ptr__int();
  buf = __dyc_read_ptr__char();
  base = 0;
  ip = 0;
  ip___0 = 0;
  tmp___16 = 0;
  switch_9_110:  
  if (qualifier == 108) {
    {

    ip = tmp___14;
    *ip = (long )(str - buf);
    }
  } else {
    {

    ip___0 = tmp___15;
    *ip___0 = str - buf;
    }
  }
  goto __dyc_dummy_label;
  switch_9_37:  
  tmp___16 = str;
  str ++;
  *tmp___16 = (char )'%';
  goto __dyc_dummy_label;
  switch_9_111:  
  base = 8;
  goto __dyc_dummy_label;
  switch_9_88:  
  flags |= 64;
  switch_9_120:  
  base = 16;
  goto __dyc_dummy_label;
  __dyc_dummy_label:  ;
  __dyc_printpre_byte(base);
  __dyc_print_ptr__char(str);
  __dyc_printpre_byte(flags);
}
}
