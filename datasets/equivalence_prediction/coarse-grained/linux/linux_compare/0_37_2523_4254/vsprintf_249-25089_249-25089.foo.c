#include "../../include/dycfoo.h"
#include "../../include/printf.i.hd.c.h"
void __dyc_foo(void) 
{ int len ;
  int i ;
  int base ;
  char *str ;
  char const   *s ;
  int flags ;
  int field_width ;
  int qualifier ;
  char *tmp___2 ;
  char *tmp___3 ;
  int tmp___4 ;
  char *tmp___5 ;
  size_t tmp___6 ;
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
  char *tmp___16 ;
  char *tmp___17 ;
  char *tmp___18 ;
  char *buf ;
  char const   *fmt ;
  size_t __dyc_funcallvar_5 ;
  char *__dyc_funcallvar_6 ;

  {
  str = __dyc_read_ptr__char();
  flags = __dyc_readpre_byte();
  fmt = (char const   *)__dyc_read_ptr__char();
  len = 0;
  i = 0;
  base = 0;
  s = 0;
  field_width = 0;
  qualifier = 0;
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
  ip = 0;
  tmp___14 = 0;
  ip___0 = 0;
  tmp___15 = 0;
  tmp___16 = 0;
  tmp___17 = 0;
  tmp___18 = 0;
  buf = 0;
  __dyc_funcallvar_5 = 0;
  __dyc_funcallvar_6 = 0;
  if ((int )*fmt == 120) {
    goto switch_9_120;
  } else {
    if ((int )*fmt == 100) {
      goto switch_9_100;
    } else {
      if ((int )*fmt == 105) {
        goto switch_9_100;
      } else {
        if ((int )*fmt == 117) {
          goto switch_9_117;
        } else {
          {
          goto switch_9_default;
          if (0) {
            switch_9_99:  
            if (! (flags & 16)) {
              {
              while (1) {
                while_10_continue:  ;
                field_width --;
                if (! (field_width > 0)) {
                  goto while_10_break;
                }
                tmp___2 = str;
                str ++;
                *tmp___2 = (char )' ';
              }
              while_10_break:  ;
              }
            }
            {
            tmp___3 = str;
            str ++;

            *tmp___3 = (char )((unsigned char )tmp___4);
            }
            {
            while (1) {
              while_11_continue:  ;
              field_width --;
              if (! (field_width > 0)) {
                goto while_11_break;
              }
              tmp___5 = str;
              str ++;
              *tmp___5 = (char )' ';
            }
            while_11_break:  ;
            }
            goto __dyc_dummy_label;
            switch_9_115:  
            {

            tmp___6 = __dyc_funcallvar_5;
            len = (int )tmp___6;
            }
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
            {
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
            }
            {
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
            }
            goto __dyc_dummy_label;
            switch_9_112:  
            if (field_width == -1) {
              field_width = (int )(2UL * sizeof(void *));
              flags |= 1;
            }
            {

            str = __dyc_funcallvar_6;
            }
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
            switch_9_37:  
            tmp___16 = str;
            str ++;
            *tmp___16 = (char )'%';
            goto __dyc_dummy_label;
            switch_9_111:  
            base = 8;
            goto switch_9_break;
            switch_9_88:  
            flags |= 64;
            switch_9_120:  
            base = 16;
            goto switch_9_break;
            switch_9_100:  
            switch_9_105:  
            flags |= 2;
            switch_9_117:  
            goto switch_9_break;
            switch_9_default:  
            tmp___17 = str;
            str ++;
            *tmp___17 = (char )'%';
            if (*fmt) {
              tmp___18 = str;
              str ++;
              *tmp___18 = (char )*fmt;
            } else {
              fmt --;
            }
            goto __dyc_dummy_label;
          } else {
            switch_9_break:  ;
          }
          }
        }
      }
    }
  }
  __dyc_dummy_label:  ;
  __dyc_printpre_byte(base);
  __dyc_print_ptr__char(str);
  __dyc_printpre_byte(flags);
  __dyc_print_ptr__char(fmt);
}
}
