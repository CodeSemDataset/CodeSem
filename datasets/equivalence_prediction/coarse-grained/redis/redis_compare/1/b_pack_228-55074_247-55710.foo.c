#include "../../include/dycfoo.h"
#include "../../include/lua_struct.i.hd.c.h"
void __dyc_foo(void) 
{ luaL_Buffer b ;
  int arg ;
  size_t size ;
  char *tmp___10 ;
  float f ;
  int tmp___11 ;
  lua_Number tmp___12 ;
  double d ;
  int tmp___13 ;
  lua_Number tmp___14 ;
  size_t l ;
  char const   *s ;
  int tmp___15 ;
  char const   *tmp___16 ;
  int tmp___17 ;
  int tmp___18 ;
  lua_Number __dyc_funcallvar_6 ;
  lua_Number __dyc_funcallvar_7 ;
  char const   *__dyc_funcallvar_8 ;
  int __dyc_funcallvar_9 ;

  {
  b = __dyc_read_comp_15luaL_Buffer();
  arg = __dyc_readpre_byte();
  size = (size_t )__dyc_readpre_byte();
  l = (size_t )__dyc_readpre_byte();
  __dyc_funcallvar_6 = (lua_Number )__dyc_readpre_byte();
  __dyc_funcallvar_7 = (lua_Number )__dyc_readpre_byte();
  __dyc_funcallvar_8 = (char const   *)__dyc_read_ptr__char();
  __dyc_funcallvar_9 = __dyc_readpre_byte();
  tmp___10 = 0;
  f = 0;
  tmp___11 = 0;
  tmp___12 = 0;
  d = 0;
  tmp___13 = 0;
  tmp___14 = 0;
  s = 0;
  tmp___15 = 0;
  tmp___16 = 0;
  tmp___17 = 0;
  tmp___18 = 0;
  tmp___10 = b.p;
  (b.p) ++;
  *tmp___10 = (char )'\000';
  goto __dyc_dummy_label;
  tmp___11 = arg;
  arg ++;
  tmp___12 = __dyc_funcallvar_6;
  f = (float )tmp___12;


  goto __dyc_dummy_label;
  tmp___13 = arg;
  arg ++;
  tmp___14 = __dyc_funcallvar_7;
  d = tmp___14;


  goto __dyc_dummy_label;
  tmp___15 = arg;
  arg ++;
  tmp___16 = __dyc_funcallvar_8;
  s = tmp___16;
  if (size == 0UL) {
    size = l;
  }
  if (l >= size) {
    tmp___18 = 1;
  } else {
    {
    tmp___17 = __dyc_funcallvar_9;
    }
    if (tmp___17) {
      tmp___18 = 1;
    } else {
      tmp___18 = 0;
    }
  }
  __dyc_dummy_label:  ;
  __dyc_print_comp_15luaL_Buffer(b);
  __dyc_printpre_byte(arg);
  __dyc_printpre_byte(f);
  __dyc_printpre_byte(tmp___11);
  __dyc_printpre_byte(d);
  __dyc_printpre_byte(tmp___13);
  __dyc_print_ptr__char(s);
  __dyc_printpre_byte(tmp___15);
  __dyc_printpre_byte(tmp___18);
}
}
