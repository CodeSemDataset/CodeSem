#include "../../include/dycfoo.h"
#include "../../include/lua_struct.i.hd.c.h"
void __dyc_foo(void) 
{ size_t ld ;
  char const   *data ;
  size_t pos ;
  int n ;
  int opt ;
  size_t size ;
  int issigned ;
  unsigned short const   **tmp___9 ;
  lua_Number res ;
  lua_Number tmp___10 ;
  int tmp___11 ;
  lua_Number tmp___12 ;
  int tmp___13 ;
  int tmp___14 ;
  char const   *e ;
  void *tmp___15 ;
  unsigned short const   **__dyc_funcallvar_8 ;
  lua_Number __dyc_funcallvar_9 ;
  int __dyc_funcallvar_10 ;
  lua_Number __dyc_funcallvar_11 ;
  int __dyc_funcallvar_12 ;
  void *__dyc_funcallvar_13 ;

  {
  ld = (size_t )__dyc_readpre_byte();
  data = (char const   *)__dyc_read_ptr__char();
  pos = (size_t )__dyc_readpre_byte();
  n = __dyc_readpre_byte();
  opt = __dyc_readpre_byte();
  size = (size_t )__dyc_readpre_byte();
  __dyc_funcallvar_10 = __dyc_readpre_byte();
  __dyc_funcallvar_11 = (lua_Number )__dyc_readpre_byte();
  __dyc_funcallvar_12 = __dyc_readpre_byte();
  __dyc_funcallvar_13 = __dyc_read_ptr__void();
  issigned = 0;
  tmp___9 = 0;
  res = 0;
  tmp___10 = 0;
  tmp___11 = 0;
  tmp___12 = 0;
  tmp___13 = 0;
  tmp___14 = 0;
  e = 0;
  tmp___15 = 0;
  __dyc_funcallvar_8 = 0;
  __dyc_funcallvar_9 = 0;
  if (opt == 99) {
    goto switch_12_99;
  } else {
    if (opt == 115) {
      goto switch_12_115;
    } else {
      {
      goto switch_12_default;
      if (0) {
        switch_12_98:  
        switch_12_66:  
        switch_12_104:  
        switch_12_72:  
        switch_12_108:  
        switch_12_76:  
        switch_12_84:  
        switch_12_105:  
        switch_12_73:  
        {
        tmp___9 = __dyc_funcallvar_8;
        issigned = (int )((int const   )*(*tmp___9 + opt) & 512);
        tmp___10 = __dyc_funcallvar_9;
        res = tmp___10;

        n ++;
        }
        goto switch_12_break;
        switch_12_120:  
        goto switch_12_break;
        switch_12_102:  
        {



        n ++;
        }
        goto switch_12_break;
        switch_12_100:  
        {



        n ++;
        }
        goto switch_12_break;
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
        {

        n ++;
        }
        goto switch_12_break;
        switch_12_115:  
        {
        tmp___15 = __dyc_funcallvar_13;
        e = (char const   *)tmp___15;
        }
        if ((unsigned long )e == (unsigned long )((void *)0)) {
          {

          }
        }
        {
        size = (unsigned long )((e - (data + pos)) + 1);

        n ++;
        }
        goto switch_12_break;
        switch_12_default:  
        {

        }
      } else {
        switch_12_break:  ;
      }
      }
    }
  }
  __dyc_dummy_label:  ;
  __dyc_printpre_byte(n);
  __dyc_printpre_byte(size);
  __dyc_printpre_byte(tmp___14);
}
}
