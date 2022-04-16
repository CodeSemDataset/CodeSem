#include "../../include/dycfoo.h"
#include "../../include/luac.i.hd.c.h"
void __dyc_foo(void) 
{ int i ;
  size_t __s1_len___0 ;
  size_t __s2_len___0 ;
  int tmp___26 ;
  int tmp___31 ;
  int tmp___34 ;
  char **argv ;
  int __dyc_funcallvar_38 ;
  int __dyc_funcallvar_39 ;
  int __dyc_funcallvar_40 ;

  {
  i = __dyc_readpre_byte();
  __s1_len___0 = (size_t )__dyc_readpre_byte();
  __s2_len___0 = (size_t )__dyc_readpre_byte();
  argv = __dyc_read_ptr__ptr__char();
  __dyc_funcallvar_38 = __dyc_readpre_byte();
  __dyc_funcallvar_39 = __dyc_readpre_byte();
  __dyc_funcallvar_40 = __dyc_readpre_byte();
  tmp___26 = 0;
  tmp___31 = 0;
  tmp___34 = 0;
  if (! ((unsigned long )((void const   *)(*(argv + i) + 1)) - (unsigned long )((void const   *)*(argv + i)) == 1UL)) {
    goto _L___2;
  } else {
    if (__s1_len___0 >= 4UL) {
      _L___2:  
      if (! ((unsigned long )((void const   *)("-v" + 1)) - (unsigned long )((void const   *)"-v") == 1UL)) {
        tmp___34 = 1;
      } else {
        if (__s2_len___0 >= 4UL) {
          tmp___34 = 1;
        } else {
          tmp___34 = 0;
        }
      }
    } else {
      tmp___34 = 0;
    }
  }
  if (tmp___34) {
    {
    tmp___26 = __dyc_funcallvar_38;
    }
  } else {
    {
    tmp___31 = __dyc_funcallvar_39;
    tmp___26 = tmp___31;
    }
  }
  tmp___31 = __dyc_funcallvar_40;
  tmp___26 = tmp___31;
  __dyc_dummy_label:  ;
  __dyc_printpre_byte(tmp___26);
}
}
