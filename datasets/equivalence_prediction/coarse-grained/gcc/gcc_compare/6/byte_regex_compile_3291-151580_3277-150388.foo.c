#include "../../include/dycfoo.h"
#include "../../include/regex.i.hd.c.h"
void __dyc_foo(void) 
{ unsigned char *b ;
  char *translate ;
  int ch ;
  boolean is_lower ;
  boolean is_punct ;
  boolean is_space ;
  boolean is_upper ;
  boolean is_xdigit ;
  unsigned short const   **tmp___475 ;
  unsigned short const   **tmp___476 ;
  unsigned short const   **tmp___477 ;
  unsigned short const   **tmp___478 ;
  unsigned short const   **tmp___479 ;
  unsigned short const   **tmp___480 ;
  unsigned short const   **__dyc_funcallvar_145 ;
  unsigned short const   **__dyc_funcallvar_146 ;
  unsigned short const   **__dyc_funcallvar_147 ;
  unsigned short const   **__dyc_funcallvar_148 ;
  unsigned short const   **__dyc_funcallvar_149 ;
  unsigned short const   **__dyc_funcallvar_150 ;

  {
  b = __dyc_read_ptr__char();
  translate = (char *)__dyc_read_ptr__char();
  ch = __dyc_readpre_byte();
  is_lower = (boolean )__dyc_readpre_byte();
  is_punct = (boolean )__dyc_readpre_byte();
  is_space = (boolean )__dyc_readpre_byte();
  is_upper = (boolean )__dyc_readpre_byte();
  is_xdigit = (boolean )__dyc_readpre_byte();
  __dyc_funcallvar_145 = (unsigned short const   **)__dyc_read_ptr__ptr__short();
  __dyc_funcallvar_146 = (unsigned short const   **)__dyc_read_ptr__ptr__short();
  __dyc_funcallvar_147 = (unsigned short const   **)__dyc_read_ptr__ptr__short();
  __dyc_funcallvar_148 = (unsigned short const   **)__dyc_read_ptr__ptr__short();
  __dyc_funcallvar_149 = (unsigned short const   **)__dyc_read_ptr__ptr__short();
  __dyc_funcallvar_150 = (unsigned short const   **)__dyc_read_ptr__ptr__short();
  tmp___475 = 0;
  tmp___476 = 0;
  tmp___477 = 0;
  tmp___478 = 0;
  tmp___479 = 0;
  tmp___480 = 0;
  if (is_punct) {
    {
    tmp___475 = __dyc_funcallvar_145;
    }
    if ((int const   )*(*tmp___475 + ch) & 4) {
      *(b + (int )((unsigned char )ch) / 8) = (unsigned char )((int )*(b + (int )((unsigned char )ch) / 8) | (1 << (int )((unsigned char )ch) % 8));
    } else {
      goto _L___59;
    }
  } else {
    _L___59:  
    if (is_space) {
      {
      tmp___476 = __dyc_funcallvar_146;
      }
      if ((int const   )*(*tmp___476 + ch) & 8192) {
        *(b + (int )((unsigned char )ch) / 8) = (unsigned char )((int )*(b + (int )((unsigned char )ch) / 8) | (1 << (int )((unsigned char )ch) % 8));
      } else {
        goto _L___58;
      }
    } else {
      _L___58:  
      if (is_upper) {
        {
        tmp___477 = __dyc_funcallvar_147;
        }
        if ((int const   )*(*tmp___477 + ch) & 256) {
          *(b + (int )((unsigned char )ch) / 8) = (unsigned char )((int )*(b + (int )((unsigned char )ch) / 8) | (1 << (int )((unsigned char )ch) % 8));
        } else {
          goto _L___57;
        }
      } else {
        _L___57:  
        if (is_xdigit) {
          {
          tmp___478 = __dyc_funcallvar_148;
          }
          if ((int const   )*(*tmp___478 + ch) & 4096) {
            *(b + (int )((unsigned char )ch) / 8) = (unsigned char )((int )*(b + (int )((unsigned char )ch) / 8) | (1 << (int )((unsigned char )ch) % 8));
          }
        }
      }
    }
  }
  if (translate) {
    if (is_upper) {
      goto _L___60;
    } else {
      if (is_lower) {
        _L___60:  
        {
        tmp___479 = __dyc_funcallvar_149;
        }
        if ((int const   )*(*tmp___479 + ch) & 256) {
          *(b + (int )((unsigned char )ch) / 8) = (unsigned char )((int )*(b + (int )((unsigned char )ch) / 8) | (1 << (int )((unsigned char )ch) % 8));
        } else {
          {
          tmp___480 = __dyc_funcallvar_150;
          }
          if ((int const   )*(*tmp___480 + ch) & 512) {
            *(b + (int )((unsigned char )ch) / 8) = (unsigned char )((int )*(b + (int )((unsigned char )ch) / 8) | (1 << (int )((unsigned char )ch) % 8));
          }
        }
      }
    }
  }
  ch ++;
  __dyc_dummy_label:  ;
  __dyc_printpre_byte(ch);
}
}
