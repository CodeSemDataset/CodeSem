#include "../../include/dycfoo.h"
#include "../../include/lua_struct.i.hd.c.h"
void __dyc_foo(void) 
{ size_t ld ;
  size_t pos ;
  int n ;
  size_t size ;
  int tmp___11 ;
  lua_Number tmp___12 ;
  int tmp___13 ;
  int tmp___14 ;
  int __dyc_funcallvar_10 ;
  lua_Number __dyc_funcallvar_11 ;
  int __dyc_funcallvar_12 ;

  {
  ld = (size_t )__dyc_readpre_byte();
  pos = (size_t )__dyc_readpre_byte();
  n = __dyc_readpre_byte();
  size = (size_t )__dyc_readpre_byte();
  __dyc_funcallvar_10 = __dyc_readpre_byte();
  __dyc_funcallvar_11 = (lua_Number )__dyc_readpre_byte();
  __dyc_funcallvar_12 = __dyc_readpre_byte();
  tmp___11 = 0;
  tmp___12 = 0;
  tmp___13 = 0;
  tmp___14 = 0;
  n ++;
  goto __dyc_dummy_label;
  switch_12_120:  
  goto __dyc_dummy_label;



  n ++;
  goto __dyc_dummy_label;



  n ++;
  goto __dyc_dummy_label;
  switch_12_99:  
  if (size == 0UL) {
    if (n == 0) {
      {

      }
    } else {
      {
      tmp___11 = __dyc_funcallvar_10;
      }
      if (! tmp___11) {
        {

        }
      }
    }
    {
    tmp___12 = __dyc_funcallvar_11;
    size = (unsigned long )tmp___12;

    n --;
    }
    if (size <= ld) {
      if (pos <= ld - size) {
        tmp___14 = 1;
      } else {
        goto _L___0;
      }
    } else {
      _L___0:  
      {
      tmp___13 = __dyc_funcallvar_12;
      }
      if (tmp___13) {
        tmp___14 = 1;
      } else {
        tmp___14 = 0;
      }
    }
  }

  n ++;
  __dyc_dummy_label:  ;
  __dyc_printpre_byte(n);
  __dyc_printpre_byte(tmp___14);
}
}
