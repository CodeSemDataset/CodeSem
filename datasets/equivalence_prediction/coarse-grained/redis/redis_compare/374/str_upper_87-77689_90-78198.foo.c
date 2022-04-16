#include "../../include/dycfoo.h"
#include "../../include/lstrlib.i.hd.c.h"
void __dyc_foo(void) 
{ size_t l ;
  size_t i ;
  luaL_Buffer b ;
  char const   *s ;
  char *tmp___0 ;
  int tmp___1 ;
  char *tmp___2 ;
  int __res ;
  int __attribute__((__leaf__))  tmp___5 ;
  __int32_t const   **tmp___6 ;
  char *__dyc_funcallvar_2 ;
  int __attribute__((__leaf__))  __dyc_funcallvar_3 ;
  __int32_t const   **__dyc_funcallvar_4 ;

  {
  l = (size_t )__dyc_readpre_byte();
  i = (size_t )__dyc_readpre_byte();
  b = __dyc_read_comp_41luaL_Buffer();
  s = (char const   *)__dyc_read_ptr__char();
  __dyc_funcallvar_2 = __dyc_read_ptr__char();
  __dyc_funcallvar_3 = (int __attribute__((__leaf__))  )__dyc_readpre_byte();
  __dyc_funcallvar_4 = (__int32_t const   **)__dyc_read_ptr__ptr__typdef___int32_t();
  tmp___0 = 0;
  tmp___1 = 0;
  tmp___2 = 0;
  __res = 0;
  tmp___5 = 0;
  tmp___6 = 0;
  while (1) {
    while_2_continue:  ;
    if (! (i < l)) {
      goto while_2_break;
    }
    if ((unsigned long )b.p < (unsigned long )(b.buffer + 8192)) {
      tmp___1 = 1;
    } else {
      {
      tmp___0 = __dyc_funcallvar_2;
      }
      if (tmp___0) {
        tmp___1 = 1;
      } else {
        tmp___1 = 0;
      }
    }
    tmp___2 = b.p;
    (b.p) ++;
    if (sizeof(unsigned char ) > 1UL) {
      {
      tmp___5 = __dyc_funcallvar_3;
      __res = (int )tmp___5;
      }
    } else {
      {
      tmp___6 = __dyc_funcallvar_4;
      __res = (int )*(*tmp___6 + (int )((unsigned char )*(s + i)));
      }
    }
    *tmp___2 = (char )__res;
    i ++;
  }
  while_2_break:  ;

  goto __dyc_dummy_label;
  __dyc_dummy_label:  ;
  __dyc_print_comp_41luaL_Buffer(b);
  __dyc_printpre_byte(tmp___1);
}
}
