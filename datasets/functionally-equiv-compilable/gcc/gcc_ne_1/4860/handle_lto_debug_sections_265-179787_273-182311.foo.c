#include "../../include/dycfoo.h"
#include "../../include/simple-object.i.hd.c.h"
void __dyc_foo(void) 
{ char *newname ;
  char *tmp___2 ;
  int tmp___26 ;
  size_t __s1_len___0 ;
  size_t __s2_len___0 ;
  int tmp___36 ;
  int tmp___41 ;
  int tmp___42 ;
  int tmp___43 ;
  int tmp___44 ;
  int tmp___68 ;
  size_t __s1_len___2 ;
  size_t __s2_len___2 ;
  int tmp___78 ;
  int tmp___83 ;
  int tmp___84 ;
  int tmp___85 ;
  int tmp___86 ;
  char const   *name ;
  int rename___0 ;
  int __dyc_funcallvar_4 ;
  int __dyc_funcallvar_5 ;
  int __dyc_funcallvar_6 ;
  int __dyc_funcallvar_7 ;
  int __dyc_funcallvar_8 ;
  int __dyc_funcallvar_9 ;
  int __dyc_funcallvar_10 ;
  int __dyc_funcallvar_11 ;
  int __dyc_funcallvar_12 ;
  int __dyc_funcallvar_13 ;
  int __dyc_funcallvar_14 ;
  int __dyc_funcallvar_15 ;

  {
  tmp___2 = __dyc_read_ptr__char();
  name = (char const   *)__dyc_read_ptr__char();
  rename___0 = __dyc_readpre_byte();
  __dyc_funcallvar_4 = __dyc_readpre_byte();
  __dyc_funcallvar_5 = __dyc_readpre_byte();
  __dyc_funcallvar_6 = __dyc_readpre_byte();
  __dyc_funcallvar_7 = __dyc_readpre_byte();
  __dyc_funcallvar_8 = __dyc_readpre_byte();
  __dyc_funcallvar_9 = __dyc_readpre_byte();
  __dyc_funcallvar_10 = __dyc_readpre_byte();
  __dyc_funcallvar_11 = __dyc_readpre_byte();
  __dyc_funcallvar_12 = __dyc_readpre_byte();
  __dyc_funcallvar_13 = __dyc_readpre_byte();
  __dyc_funcallvar_14 = __dyc_readpre_byte();
  __dyc_funcallvar_15 = __dyc_readpre_byte();
  newname = 0;
  tmp___26 = 0;
  __s1_len___0 = 0;
  __s2_len___0 = 0;
  tmp___36 = 0;
  tmp___41 = 0;
  tmp___42 = 0;
  tmp___43 = 0;
  tmp___44 = 0;
  tmp___68 = 0;
  __s1_len___2 = 0;
  __s2_len___2 = 0;
  tmp___78 = 0;
  tmp___83 = 0;
  tmp___84 = 0;
  tmp___85 = 0;
  tmp___86 = 0;
  newname = tmp___2;
  if (0) {
    if (0) {
      {
      tmp___84 = __dyc_funcallvar_4;
      __s1_len___2 = (unsigned long )tmp___84;
      tmp___85 = __dyc_funcallvar_5;
      __s2_len___2 = (unsigned long )tmp___85;
      }
      if (! ((unsigned long )((void const   *)(name + 1)) - (unsigned long )((void const   *)name) == 1UL)) {
        goto _L___6;
      } else {
        if (__s1_len___2 >= 4UL) {
          _L___6:  
          if (! ((unsigned long )((void const   *)(".rela" + 1)) - (unsigned long )((void const   *)".rela") == 1UL)) {
            tmp___86 = 1;
          } else {
            if (__s2_len___2 >= 4UL) {
              tmp___86 = 1;
            } else {
              tmp___86 = 0;
            }
          }
        } else {
          tmp___86 = 0;
        }
      }
      if (tmp___86) {
        {
        tmp___78 = __dyc_funcallvar_6;
        }
      } else {
        {
        tmp___83 = __dyc_funcallvar_7;
        tmp___78 = tmp___83;
        }
      }
    } else {
      {
      tmp___83 = __dyc_funcallvar_8;
      tmp___78 = tmp___83;
      }
    }
    tmp___68 = tmp___78;
  } else {
    {
    tmp___68 = __dyc_funcallvar_9;
    }
  }
  if (tmp___68 == 0) {
    if (rename___0) {
      {

      }
    }
    name += sizeof(".rela") - 1UL;
  } else {
    if (0) {
      if (0) {
        {
        tmp___42 = __dyc_funcallvar_10;
        __s1_len___0 = (unsigned long )tmp___42;
        tmp___43 = __dyc_funcallvar_11;
        __s2_len___0 = (unsigned long )tmp___43;
        }
        if (! ((unsigned long )((void const   *)(name + 1)) - (unsigned long )((void const   *)name) == 1UL)) {
          goto _L___2;
        } else {
          if (__s1_len___0 >= 4UL) {
            _L___2:  
            if (! ((unsigned long )((void const   *)(".rel" + 1)) - (unsigned long )((void const   *)".rel") == 1UL)) {
              tmp___44 = 1;
            } else {
              if (__s2_len___0 >= 4UL) {
                tmp___44 = 1;
              } else {
                tmp___44 = 0;
              }
            }
          } else {
            tmp___44 = 0;
          }
        }
        if (tmp___44) {
          {
          tmp___36 = __dyc_funcallvar_12;
          }
        } else {
          {
          tmp___41 = __dyc_funcallvar_13;
          tmp___36 = tmp___41;
          }
        }
      } else {
        {
        tmp___41 = __dyc_funcallvar_14;
        tmp___36 = tmp___41;
        }
      }
      tmp___26 = tmp___36;
    } else {
      {
      tmp___26 = __dyc_funcallvar_15;
      }
    }
    if (tmp___26 == 0) {
      if (rename___0) {
        {

        }
      }
      name += sizeof(".rel") - 1UL;
    }
  }
  __dyc_dummy_label:  ;
  __dyc_print_ptr__char(newname);
  __dyc_printpre_byte(__s1_len___0);
  __dyc_printpre_byte(__s2_len___0);
  __dyc_printpre_byte(__s1_len___2);
  __dyc_printpre_byte(__s2_len___2);
  __dyc_print_ptr__char(name);
}
}
