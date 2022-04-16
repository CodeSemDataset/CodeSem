#include "../../include/dycfoo.h"
#include "../../include/printf.i.hd.c.h"
void __dyc_foo(void) 
{ char c ;
  char tmp[66] ;
  int i ;
  char *tmp___8 ;
  int tmp___9 ;
  char *tmp___10 ;
  int tmp___11 ;
  char *tmp___12 ;
  int tmp___13 ;
  char *tmp___14 ;
  int tmp___15 ;
  char *str ;
  int size ;
  int precision ;
  int type ;

  {
  c = (char )__dyc_readpre_byte();
  i = __dyc_readpre_byte();
  str = __dyc_read_ptr__char();
  size = __dyc_readpre_byte();
  precision = __dyc_readpre_byte();
  type = __dyc_readpre_byte();
  tmp___8 = 0;
  tmp___9 = 0;
  tmp___10 = 0;
  tmp___11 = 0;
  tmp___12 = 0;
  tmp___13 = 0;
  tmp___14 = 0;
  tmp___15 = 0;
  if (! (type & 16)) {
    {
    while (1) {
      while_3_continue:  ;
      tmp___9 = size;
      size --;
      if (! (tmp___9 > 0)) {
        goto while_3_break;
      }
      tmp___8 = str;
      str ++;
      *tmp___8 = c;
    }
    while_3_break:  ;
    }
  }
  while (1) {
    while_4_continue:  ;
    tmp___11 = precision;
    precision --;
    if (! (i < tmp___11)) {
      goto while_4_break;
    }
    tmp___10 = str;
    str ++;
    *tmp___10 = (char )'0';
  }
  while_4_break:  ;
  while (1) {
    while_5_continue:  ;
    tmp___13 = i;
    i --;
    if (! (tmp___13 > 0)) {
      goto while_5_break;
    }
    tmp___12 = str;
    str ++;
    *tmp___12 = tmp[i];
  }
  while_5_break:  ;
  while (1) {
    while_6_continue:  ;
    tmp___15 = size;
    size --;
    if (! (tmp___15 > 0)) {
      goto while_6_break;
    }
    tmp___14 = str;
    str ++;
    *tmp___14 = (char )' ';
  }
  while_6_break:  ;
  goto __dyc_dummy_label;
  __dyc_dummy_label:  ;
  __dyc_printpre_byte(i);
  __dyc_print_ptr__char(str);
  __dyc_printpre_byte(size);
  __dyc_printpre_byte(precision);
}
}
