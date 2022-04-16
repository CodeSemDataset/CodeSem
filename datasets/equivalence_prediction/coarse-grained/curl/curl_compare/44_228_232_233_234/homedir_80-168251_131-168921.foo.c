#include "../../include/dycfoo.h"
#include "../../include/tool_homedir.i.hd.c.h"
void __dyc_foo(void) 
{ char *home ;
  char *c ;
  char *tmp ;
  int fd ;
  int tmp___0 ;
  struct passwd *pw ;
  __uid_t tmp___1 ;
  struct passwd *tmp___2 ;
  char const   *fname ;
  char *__dyc_funcallvar_1 ;
  char *__dyc_funcallvar_2 ;
  char *__dyc_funcallvar_3 ;
  int __dyc_funcallvar_4 ;
  char *__dyc_funcallvar_5 ;
  __uid_t __dyc_funcallvar_6 ;
  struct passwd *__dyc_funcallvar_7 ;
  char *__dyc_funcallvar_8 ;

  {
  fname = (char const   *)__dyc_read_ptr__char();
  __dyc_funcallvar_1 = __dyc_read_ptr__char();
  __dyc_funcallvar_2 = __dyc_read_ptr__char();
  __dyc_funcallvar_3 = __dyc_read_ptr__char();
  __dyc_funcallvar_4 = __dyc_readpre_byte();
  __dyc_funcallvar_5 = __dyc_read_ptr__char();
  __dyc_funcallvar_6 = (__uid_t )__dyc_readpre_byte();
  __dyc_funcallvar_7 = __dyc_read_ptr__comp_77passwd();
  __dyc_funcallvar_8 = __dyc_read_ptr__char();
  home = 0;
  c = 0;
  tmp = 0;
  fd = 0;
  tmp___0 = 0;
  pw = 0;
  tmp___1 = 0;
  tmp___2 = 0;
  home = __dyc_funcallvar_1;
  if (home) {
    goto __dyc_dummy_label;
  }
  if (fname) {
    {
    home = __dyc_funcallvar_2;
    }
    if (home) {
      {
      tmp = __dyc_funcallvar_3;
      c = tmp;
      }
      if (c) {
        {
        tmp___0 = __dyc_funcallvar_4;
        fd = tmp___0;

        }
        if (fd >= 0) {
          {

          }
          goto __dyc_dummy_label;
        }
      }
      {

      }
    }
  }
  home = __dyc_funcallvar_5;
  if (home) {
    goto __dyc_dummy_label;
  }
  tmp___1 = __dyc_funcallvar_6;
  tmp___2 = __dyc_funcallvar_7;
  pw = tmp___2;
  if (pw) {
    home = pw->pw_dir;
    if (home) {
      if (*(home + 0)) {
        {
        home = __dyc_funcallvar_8;
        }
      } else {
        home = (char *)((void *)0);
      }
    } else {
      home = (char *)((void *)0);
    }
  }
  goto __dyc_dummy_label;
  __dyc_dummy_label:  ;
  __dyc_print_ptr__char(home);
  __dyc_printpre_byte(tmp___1);
}
}
