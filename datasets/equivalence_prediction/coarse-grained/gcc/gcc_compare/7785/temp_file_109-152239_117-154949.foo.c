#include "../../include/dycfoo.h"
#include "../../include/pex-common.i.hd.c.h"
void __dyc_foo(void) 
{ int len ;
  size_t tmp ;
  size_t __s1_len ;
  size_t __s2_len ;
  int tmp___9 ;
  int tmp___14 ;
  int tmp___15 ;
  int tmp___16 ;
  int tmp___17 ;
  struct pex_obj *obj ;
  char *name ;
  char *__dyc_funcallvar_1 ;
  size_t __dyc_funcallvar_2 ;
  int __dyc_funcallvar_3 ;
  int __dyc_funcallvar_4 ;
  int __dyc_funcallvar_5 ;
  int __dyc_funcallvar_6 ;
  int __dyc_funcallvar_7 ;
  char *__dyc_funcallvar_8 ;
  char *__dyc_funcallvar_9 ;
  char *__dyc_funcallvar_10 ;

  {
  obj = __dyc_read_ptr__comp_13pex_obj();
  __dyc_funcallvar_1 = __dyc_read_ptr__char();
  __dyc_funcallvar_2 = (size_t )__dyc_readpre_byte();
  __dyc_funcallvar_3 = __dyc_readpre_byte();
  __dyc_funcallvar_4 = __dyc_readpre_byte();
  __dyc_funcallvar_5 = __dyc_readpre_byte();
  __dyc_funcallvar_6 = __dyc_readpre_byte();
  __dyc_funcallvar_7 = __dyc_readpre_byte();
  __dyc_funcallvar_8 = __dyc_read_ptr__char();
  __dyc_funcallvar_9 = __dyc_read_ptr__char();
  __dyc_funcallvar_10 = __dyc_read_ptr__char();
  len = 0;
  tmp = 0;
  __s1_len = 0;
  __s2_len = 0;
  tmp___9 = 0;
  tmp___14 = 0;
  tmp___15 = 0;
  tmp___16 = 0;
  tmp___17 = 0;
  name = 0;
  name = __dyc_funcallvar_1;
  tmp = __dyc_funcallvar_2;
  len = (int )tmp;
  if (len >= 6) {
    if (0) {
      {
      tmp___15 = __dyc_funcallvar_3;
      __s1_len = (unsigned long )tmp___15;
      tmp___16 = __dyc_funcallvar_4;
      __s2_len = (unsigned long )tmp___16;
      }
      if (! ((unsigned long )((void const   *)(((obj->tempbase + len) - 6) + 1)) - (unsigned long )((void const   *)((obj->tempbase + len) - 6)) == 1UL)) {
        goto _L___0;
      } else {
        if (__s1_len >= 4UL) {
          _L___0:  
          if (! ((unsigned long )((void const   *)("XXXXXX" + 1)) - (unsigned long )((void const   *)"XXXXXX") == 1UL)) {
            tmp___17 = 1;
          } else {
            if (__s2_len >= 4UL) {
              tmp___17 = 1;
            } else {
              tmp___17 = 0;
            }
          }
        } else {
          tmp___17 = 0;
        }
      }
      if (tmp___17) {
        {
        tmp___9 = __dyc_funcallvar_5;
        }
      } else {
        {
        tmp___14 = __dyc_funcallvar_6;
        tmp___9 = tmp___14;
        }
      }
    } else {
      {
      tmp___14 = __dyc_funcallvar_7;
      tmp___9 = tmp___14;
      }
    }
    if (tmp___9 == 0) {
      {
      name = __dyc_funcallvar_8;
      }
    } else {
      {
      name = __dyc_funcallvar_9;
      }
    }
  } else {
    {
    name = __dyc_funcallvar_10;
    }
  }
  __dyc_dummy_label:  ;
  __dyc_printpre_byte(__s1_len);
  __dyc_printpre_byte(__s2_len);
  __dyc_print_ptr__char(name);
}
}
