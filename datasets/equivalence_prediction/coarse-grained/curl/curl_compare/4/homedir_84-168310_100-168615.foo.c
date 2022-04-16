#include "../../include/dycfoo.h"
#include "../../include/tool_homedir.i.hd.c.h"
void __dyc_foo(void) 
{ char *home ;
  char *c ;
  char *tmp ;
  int fd ;
  int tmp___0 ;
  char const   *fname ;
  char *__dyc_funcallvar_2 ;
  char *__dyc_funcallvar_3 ;
  int __dyc_funcallvar_4 ;
  char *__dyc_funcallvar_5 ;

  {
  fname = (char const   *)__dyc_read_ptr__char();
  __dyc_funcallvar_2 = __dyc_read_ptr__char();
  __dyc_funcallvar_3 = __dyc_read_ptr__char();
  __dyc_funcallvar_4 = __dyc_readpre_byte();
  __dyc_funcallvar_5 = __dyc_read_ptr__char();
  home = 0;
  c = 0;
  tmp = 0;
  fd = 0;
  tmp___0 = 0;
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
  __dyc_dummy_label:  ;
  __dyc_print_ptr__char(home);
}
}
