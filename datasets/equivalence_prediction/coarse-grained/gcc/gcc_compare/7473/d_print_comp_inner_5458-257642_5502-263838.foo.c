#include "../../include/dycfoo.h"
#include "../../include/cp-demangle.i.hd.c.h"
void __dyc_foo(void) 
{ char const   *code ;
  size_t __s1_len___4 ;
  size_t __s2_len___4 ;
  int tmp___115 ;
  int tmp___120 ;
  int tmp___121 ;
  int tmp___122 ;
  int tmp___123 ;
  size_t __s1_len___5 ;
  size_t __s2_len___5 ;
  int tmp___133 ;
  int tmp___138 ;
  int tmp___139 ;
  int tmp___140 ;
  int tmp___141 ;
  int tmp___142 ;
  int tmp___143 ;
  struct demangle_component  const  *func ;
  size_t __s1_len___6 ;
  size_t __s2_len___6 ;
  int tmp___153 ;
  int tmp___158 ;
  int tmp___159 ;
  int tmp___160 ;
  int tmp___161 ;
  struct demangle_component *dc ;
  int __dyc_funcallvar_36 ;
  int __dyc_funcallvar_37 ;
  int __dyc_funcallvar_38 ;
  int __dyc_funcallvar_39 ;
  int __dyc_funcallvar_40 ;
  int __dyc_funcallvar_41 ;
  int __dyc_funcallvar_42 ;
  int __dyc_funcallvar_43 ;
  int __dyc_funcallvar_44 ;
  int __dyc_funcallvar_45 ;
  int __dyc_funcallvar_46 ;
  int __dyc_funcallvar_47 ;
  int __dyc_funcallvar_48 ;
  int __dyc_funcallvar_49 ;
  int __dyc_funcallvar_50 ;
  int __dyc_funcallvar_51 ;
  int __dyc_funcallvar_52 ;

  {
  code = (char const   *)__dyc_read_ptr__char();
  dc = __dyc_read_ptr__comp_46demangle_component();
  __dyc_funcallvar_36 = __dyc_readpre_byte();
  __dyc_funcallvar_37 = __dyc_readpre_byte();
  __dyc_funcallvar_38 = __dyc_readpre_byte();
  __dyc_funcallvar_39 = __dyc_readpre_byte();
  __dyc_funcallvar_40 = __dyc_readpre_byte();
  __dyc_funcallvar_41 = __dyc_readpre_byte();
  __dyc_funcallvar_42 = __dyc_readpre_byte();
  __dyc_funcallvar_43 = __dyc_readpre_byte();
  __dyc_funcallvar_44 = __dyc_readpre_byte();
  __dyc_funcallvar_45 = __dyc_readpre_byte();
  __dyc_funcallvar_46 = __dyc_readpre_byte();
  __dyc_funcallvar_47 = __dyc_readpre_byte();
  __dyc_funcallvar_48 = __dyc_readpre_byte();
  __dyc_funcallvar_49 = __dyc_readpre_byte();
  __dyc_funcallvar_50 = __dyc_readpre_byte();
  __dyc_funcallvar_51 = __dyc_readpre_byte();
  __dyc_funcallvar_52 = __dyc_readpre_byte();
  __s1_len___4 = 0;
  __s2_len___4 = 0;
  tmp___115 = 0;
  tmp___120 = 0;
  tmp___121 = 0;
  tmp___122 = 0;
  tmp___123 = 0;
  __s1_len___5 = 0;
  __s2_len___5 = 0;
  tmp___133 = 0;
  tmp___138 = 0;
  tmp___139 = 0;
  tmp___140 = 0;
  tmp___141 = 0;
  tmp___142 = 0;
  tmp___143 = 0;
  func = 0;
  __s1_len___6 = 0;
  __s2_len___6 = 0;
  tmp___153 = 0;
  tmp___158 = 0;
  tmp___159 = 0;
  tmp___160 = 0;
  tmp___161 = 0;
  if (code) {
    if (0) {
      {
      tmp___139 = __dyc_funcallvar_36;
      __s1_len___5 = (unsigned long )tmp___139;
      tmp___140 = __dyc_funcallvar_37;
      __s2_len___5 = (unsigned long )tmp___140;
      }
      if (! ((unsigned long )((void const   *)(code + 1)) - (unsigned long )((void const   *)code) == 1UL)) {
        goto _L___17;
      } else {
        if (__s1_len___5 >= 4UL) {
          _L___17:  
          if (! ((unsigned long )((void const   *)("gs" + 1)) - (unsigned long )((void const   *)"gs") == 1UL)) {
            tmp___141 = 1;
          } else {
            if (__s2_len___5 >= 4UL) {
              tmp___141 = 1;
            } else {
              tmp___141 = 0;
            }
          }
        } else {
          tmp___141 = 0;
        }
      }
      if (tmp___141) {
        {
        tmp___133 = __dyc_funcallvar_38;
        }
      } else {
        {
        tmp___138 = __dyc_funcallvar_39;
        tmp___133 = tmp___138;
        }
      }
    } else {
      {
      tmp___138 = __dyc_funcallvar_40;
      tmp___133 = tmp___138;
      }
    }
    if (tmp___133) {
      goto _L___18;
    } else {
      {

      }
    }
  } else {
    _L___18:  
    if (code) {
      if (0) {
        {
        tmp___121 = __dyc_funcallvar_41;
        __s1_len___4 = (unsigned long )tmp___121;
        tmp___122 = __dyc_funcallvar_42;
        __s2_len___4 = (unsigned long )tmp___122;
        }
        if (! ((unsigned long )((void const   *)(code + 1)) - (unsigned long )((void const   *)code) == 1UL)) {
          goto _L___15;
        } else {
          if (__s1_len___4 >= 4UL) {
            _L___15:  
            if (! ((unsigned long )((void const   *)("st" + 1)) - (unsigned long )((void const   *)"st") == 1UL)) {
              tmp___123 = 1;
            } else {
              if (__s2_len___4 >= 4UL) {
                tmp___123 = 1;
              } else {
                tmp___123 = 0;
              }
            }
          } else {
            tmp___123 = 0;
          }
        }
        if (tmp___123) {
          {
          tmp___115 = __dyc_funcallvar_43;
          }
        } else {
          {
          tmp___120 = __dyc_funcallvar_44;
          tmp___115 = tmp___120;
          }
        }
      } else {
        {
        tmp___120 = __dyc_funcallvar_45;
        tmp___115 = tmp___120;
        }
      }
      if (tmp___115) {
        {

        }
      } else {
        {



        }
      }
    } else {
      {

      }
    }
  }
  goto __dyc_dummy_label;
  switch_50_56:  
  if ((int )(dc->u.s_binary.right)->type != 57) {
    {

    }
    goto __dyc_dummy_label;
  }
  tmp___142 = __dyc_funcallvar_46;
  if (tmp___142) {
    {






    }
    goto __dyc_dummy_label;
  }
  tmp___143 = __dyc_funcallvar_47;
  if (tmp___143) {
    goto __dyc_dummy_label;
  }
  if ((int )(dc->u.s_binary.left)->type == 50) {
    if (((dc->u.s_binary.left)->u.s_operator.op)->len == 1) {
      if ((int const   )*(((dc->u.s_binary.left)->u.s_operator.op)->name + 0) == 62) {
        {

        }
      }
    }
  }
  if (0) {
    {
    tmp___159 = __dyc_funcallvar_48;
    __s1_len___6 = (unsigned long )tmp___159;
    tmp___160 = __dyc_funcallvar_49;
    __s2_len___6 = (unsigned long )tmp___160;
    }
    if (! ((unsigned long )((void const   *)(((dc->u.s_binary.left)->u.s_operator.op)->code + 1)) - (unsigned long )((void const   *)((dc->u.s_binary.left)->u.s_operator.op)->code) == 1UL)) {
      goto _L___20;
    } else {
      if (__s1_len___6 >= 4UL) {
        _L___20:  
        if (! ((unsigned long )((void const   *)("cl" + 1)) - (unsigned long )((void const   *)"cl") == 1UL)) {
          tmp___161 = 1;
        } else {
          if (__s2_len___6 >= 4UL) {
            tmp___161 = 1;
          } else {
            tmp___161 = 0;
          }
        }
      } else {
        tmp___161 = 0;
      }
    }
    if (tmp___161) {
      {
      tmp___153 = __dyc_funcallvar_50;
      }
    } else {
      {
      tmp___158 = __dyc_funcallvar_51;
      tmp___153 = tmp___158;
      }
    }
  } else {
    {
    tmp___158 = __dyc_funcallvar_52;
    tmp___153 = tmp___158;
    }
  }
  if (tmp___153 == 0) {
    if ((int )((dc->u.s_binary.right)->u.s_binary.left)->type == 3) {
      func = (struct demangle_component  const  *)(dc->u.s_binary.right)->u.s_binary.left;
      if ((int )(func->u.s_binary.right)->type != 41) {
        {

        }
      }
      {

      }
    } else {
      {

      }
    }
  } else {
    {

    }
  }
  __dyc_dummy_label:  ;
  __dyc_printpre_byte(__s1_len___4);
  __dyc_printpre_byte(__s2_len___4);
  __dyc_printpre_byte(__s1_len___5);
  __dyc_printpre_byte(__s2_len___5);
  __dyc_printpre_byte(__s1_len___6);
  __dyc_printpre_byte(__s2_len___6);
}
}
