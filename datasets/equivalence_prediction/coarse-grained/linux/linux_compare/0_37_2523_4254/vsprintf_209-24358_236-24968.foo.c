#include "../../include/dycfoo.h"
#include "../../include/printf.i.hd.c.h"
void __dyc_foo(void) 
{ int len ;
  int i ;
  char *str ;
  char const   *s ;
  int flags ;
  int field_width ;
  int qualifier ;
  char *tmp___7 ;
  int tmp___8 ;
  char *tmp___9 ;
  char const   *tmp___10 ;
  char *tmp___11 ;
  int tmp___12 ;
  long *ip ;
  long *tmp___14 ;
  int *ip___0 ;
  int *tmp___15 ;
  char *buf ;
  char *__dyc_funcallvar_6 ;

  {
  len = __dyc_readpre_byte();
  str = __dyc_read_ptr__char();
  s = (char const   *)__dyc_read_ptr__char();
  flags = __dyc_readpre_byte();
  field_width = __dyc_readpre_byte();
  qualifier = __dyc_readpre_byte();
  tmp___14 = __dyc_read_ptr__long();
  tmp___15 = __dyc_read_ptr__int();
  buf = __dyc_read_ptr__char();
  __dyc_funcallvar_6 = __dyc_read_ptr__char();
  i = 0;
  tmp___7 = 0;
  tmp___8 = 0;
  tmp___9 = 0;
  tmp___10 = 0;
  tmp___11 = 0;
  tmp___12 = 0;
  ip = 0;
  ip___0 = 0;
  if (! (flags & 16)) {
    {
    while (1) {
      while_12_continue:  ;
      tmp___8 = field_width;
      field_width --;
      if (! (len < tmp___8)) {
        goto while_12_break;
      }
      tmp___7 = str;
      str ++;
      *tmp___7 = (char )' ';
    }
    while_12_break:  ;
    }
  }
  i = 0;
  while (1) {
    while_13_continue:  ;
    if (! (i < len)) {
      goto while_13_break;
    }
    tmp___9 = str;
    str ++;
    tmp___10 = s;
    s ++;
    *tmp___9 = (char )*tmp___10;
    i ++;
  }
  while_13_break:  ;
  while (1) {
    while_14_continue:  ;
    tmp___12 = field_width;
    field_width --;
    if (! (len < tmp___12)) {
      goto while_14_break;
    }
    tmp___11 = str;
    str ++;
    *tmp___11 = (char )' ';
  }
  while_14_break:  ;
  goto __dyc_dummy_label;
  switch_9_112:  
  if (field_width == -1) {
    field_width = (int )(2UL * sizeof(void *));
    flags |= 1;
  }

  str = __dyc_funcallvar_6;
  goto __dyc_dummy_label;
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
  __dyc_dummy_label:  ;
  __dyc_print_ptr__char(str);
  __dyc_print_ptr__char(s);
  __dyc_printpre_byte(flags);
  __dyc_printpre_byte(field_width);
}
}
