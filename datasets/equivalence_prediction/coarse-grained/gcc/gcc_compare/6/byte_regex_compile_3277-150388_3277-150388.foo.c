#include "../../include/dycfoo.h"
#include "../../include/regex.i.hd.c.h"
void __dyc_foo(void) 
{ unsigned char *b ;
  char *translate ;
  int ch ;
  boolean is_alnum ;
  boolean is_alpha ;
  boolean is_blank ;
  boolean is_cntrl ;
  boolean is_digit ;
  boolean is_graph ;
  boolean is_lower ;
  boolean is_print ;
  boolean is_punct ;
  boolean is_space ;
  boolean is_upper ;
  boolean is_xdigit ;
  unsigned short const   **tmp___467 ;
  unsigned short const   **tmp___468 ;
  unsigned short const   **tmp___469 ;
  unsigned short const   **tmp___470 ;
  unsigned short const   **tmp___471 ;
  unsigned short const   **tmp___472 ;
  unsigned short const   **tmp___473 ;
  unsigned short const   **tmp___474 ;
  unsigned short const   **tmp___475 ;
  unsigned short const   **tmp___476 ;
  unsigned short const   **tmp___477 ;
  unsigned short const   **tmp___478 ;
  unsigned short const   **tmp___479 ;
  unsigned short const   **tmp___480 ;
  unsigned short const   **__dyc_funcallvar_137 ;
  unsigned short const   **__dyc_funcallvar_138 ;
  unsigned short const   **__dyc_funcallvar_139 ;
  unsigned short const   **__dyc_funcallvar_140 ;
  unsigned short const   **__dyc_funcallvar_141 ;
  unsigned short const   **__dyc_funcallvar_142 ;
  unsigned short const   **__dyc_funcallvar_143 ;
  unsigned short const   **__dyc_funcallvar_144 ;
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
  is_alnum = (boolean )__dyc_readpre_byte();
  is_alpha = (boolean )__dyc_readpre_byte();
  is_blank = (boolean )__dyc_readpre_byte();
  is_cntrl = (boolean )__dyc_readpre_byte();
  is_digit = (boolean )__dyc_readpre_byte();
  is_graph = (boolean )__dyc_readpre_byte();
  is_lower = (boolean )__dyc_readpre_byte();
  is_print = (boolean )__dyc_readpre_byte();
  is_punct = (boolean )__dyc_readpre_byte();
  is_space = (boolean )__dyc_readpre_byte();
  is_upper = (boolean )__dyc_readpre_byte();
  is_xdigit = (boolean )__dyc_readpre_byte();
  __dyc_funcallvar_137 = (unsigned short const   **)__dyc_read_ptr__ptr__short();
  __dyc_funcallvar_138 = (unsigned short const   **)__dyc_read_ptr__ptr__short();
  __dyc_funcallvar_139 = (unsigned short const   **)__dyc_read_ptr__ptr__short();
  __dyc_funcallvar_140 = (unsigned short const   **)__dyc_read_ptr__ptr__short();
  __dyc_funcallvar_141 = (unsigned short const   **)__dyc_read_ptr__ptr__short();
  __dyc_funcallvar_142 = (unsigned short const   **)__dyc_read_ptr__ptr__short();
  __dyc_funcallvar_143 = (unsigned short const   **)__dyc_read_ptr__ptr__short();
  __dyc_funcallvar_144 = (unsigned short const   **)__dyc_read_ptr__ptr__short();
  __dyc_funcallvar_145 = (unsigned short const   **)__dyc_read_ptr__ptr__short();
  __dyc_funcallvar_146 = (unsigned short const   **)__dyc_read_ptr__ptr__short();
  __dyc_funcallvar_147 = (unsigned short const   **)__dyc_read_ptr__ptr__short();
  __dyc_funcallvar_148 = (unsigned short const   **)__dyc_read_ptr__ptr__short();
  __dyc_funcallvar_149 = (unsigned short const   **)__dyc_read_ptr__ptr__short();
  __dyc_funcallvar_150 = (unsigned short const   **)__dyc_read_ptr__ptr__short();
  tmp___467 = 0;
  tmp___468 = 0;
  tmp___469 = 0;
  tmp___470 = 0;
  tmp___471 = 0;
  tmp___472 = 0;
  tmp___473 = 0;
  tmp___474 = 0;
  tmp___475 = 0;
  tmp___476 = 0;
  tmp___477 = 0;
  tmp___478 = 0;
  tmp___479 = 0;
  tmp___480 = 0;
  if (! (ch < 1 << 8)) {
    goto __dyc_dummy_label;
  }
  if (is_alnum) {
    {
    tmp___467 = __dyc_funcallvar_137;
    }
    if ((int const   )*(*tmp___467 + ch) & 8) {
      *(b + (int )((unsigned char )ch) / 8) = (unsigned char )((int )*(b + (int )((unsigned char )ch) / 8) | (1 << (int )((unsigned char )ch) % 8));
    } else {
      goto _L___53;
    }
  } else {
    _L___53:  
    if (is_alpha) {
      {
      tmp___468 = __dyc_funcallvar_138;
      }
      if ((int const   )*(*tmp___468 + ch) & 1024) {
        *(b + (int )((unsigned char )ch) / 8) = (unsigned char )((int )*(b + (int )((unsigned char )ch) / 8) | (1 << (int )((unsigned char )ch) % 8));
      } else {
        goto _L___52;
      }
    } else {
      _L___52:  
      if (is_blank) {
        {
        tmp___469 = __dyc_funcallvar_139;
        }
        if ((int const   )*(*tmp___469 + ch) & 1) {
          *(b + (int )((unsigned char )ch) / 8) = (unsigned char )((int )*(b + (int )((unsigned char )ch) / 8) | (1 << (int )((unsigned char )ch) % 8));
        } else {
          goto _L___51;
        }
      } else {
        _L___51:  
        if (is_cntrl) {
          {
          tmp___470 = __dyc_funcallvar_140;
          }
          if ((int const   )*(*tmp___470 + ch) & 2) {
            *(b + (int )((unsigned char )ch) / 8) = (unsigned char )((int )*(b + (int )((unsigned char )ch) / 8) | (1 << (int )((unsigned char )ch) % 8));
          }
        }
      }
    }
  }
  if (is_digit) {
    {
    tmp___471 = __dyc_funcallvar_141;
    }
    if ((int const   )*(*tmp___471 + ch) & 2048) {
      *(b + (int )((unsigned char )ch) / 8) = (unsigned char )((int )*(b + (int )((unsigned char )ch) / 8) | (1 << (int )((unsigned char )ch) % 8));
    } else {
      goto _L___56;
    }
  } else {
    _L___56:  
    if (is_graph) {
      {
      tmp___472 = __dyc_funcallvar_142;
      }
      if ((int const   )*(*tmp___472 + ch) & 32768) {
        *(b + (int )((unsigned char )ch) / 8) = (unsigned char )((int )*(b + (int )((unsigned char )ch) / 8) | (1 << (int )((unsigned char )ch) % 8));
      } else {
        goto _L___55;
      }
    } else {
      _L___55:  
      if (is_lower) {
        {
        tmp___473 = __dyc_funcallvar_143;
        }
        if ((int const   )*(*tmp___473 + ch) & 512) {
          *(b + (int )((unsigned char )ch) / 8) = (unsigned char )((int )*(b + (int )((unsigned char )ch) / 8) | (1 << (int )((unsigned char )ch) % 8));
        } else {
          goto _L___54;
        }
      } else {
        _L___54:  
        if (is_print) {
          {
          tmp___474 = __dyc_funcallvar_144;
          }
          if ((int const   )*(*tmp___474 + ch) & 16384) {
            *(b + (int )((unsigned char )ch) / 8) = (unsigned char )((int )*(b + (int )((unsigned char )ch) / 8) | (1 << (int )((unsigned char )ch) % 8));
          }
        }
      }
    }
  }
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
