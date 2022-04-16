#include "../../include/dycfoo.h"
#include "../../include/tool_homedir.i.hd.c.h"
void __dyc_foo(void) 
{ char *home ;
  struct passwd *pw ;
  __uid_t tmp___1 ;
  struct passwd *tmp___2 ;
  __uid_t __dyc_funcallvar_6 ;
  struct passwd *__dyc_funcallvar_7 ;
  char *__dyc_funcallvar_8 ;

  {
  home = __dyc_read_ptr__char();
  __dyc_funcallvar_6 = (__uid_t )__dyc_readpre_byte();
  __dyc_funcallvar_7 = __dyc_read_ptr__comp_77passwd();
  __dyc_funcallvar_8 = __dyc_read_ptr__char();
  pw = 0;
  tmp___1 = 0;
  tmp___2 = 0;
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
  __dyc_dummy_label:  ;
  __dyc_print_ptr__char(home);
  __dyc_printpre_byte(tmp___1);
}
}
