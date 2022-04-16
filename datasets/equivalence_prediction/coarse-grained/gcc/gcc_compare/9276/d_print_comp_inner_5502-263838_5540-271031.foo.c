#include "../../include/dycfoo.h"
#include "../../include/cp-demangle.i.hd.c.h"
void __dyc_foo(void) 
{ struct demangle_component  const  *func ;
  int tmp___153 ;
  size_t __s1_len___7 ;
  size_t __s2_len___7 ;
  int tmp___171 ;
  int tmp___176 ;
  int tmp___177 ;
  int tmp___178 ;
  int tmp___179 ;
  size_t __s1_len___8 ;
  size_t __s2_len___8 ;
  int tmp___189 ;
  int tmp___194 ;
  int tmp___195 ;
  int tmp___196 ;
  int tmp___197 ;
  struct demangle_component *dc ;
  int __dyc_funcallvar_53 ;
  int __dyc_funcallvar_54 ;
  int __dyc_funcallvar_55 ;
  int __dyc_funcallvar_56 ;
  int __dyc_funcallvar_57 ;
  int __dyc_funcallvar_58 ;
  int __dyc_funcallvar_59 ;
  int __dyc_funcallvar_60 ;
  int __dyc_funcallvar_61 ;
  int __dyc_funcallvar_62 ;

  {
  tmp___153 = __dyc_readpre_byte();
  dc = __dyc_read_ptr__comp_46demangle_component();
  __dyc_funcallvar_53 = __dyc_readpre_byte();
  __dyc_funcallvar_54 = __dyc_readpre_byte();
  __dyc_funcallvar_55 = __dyc_readpre_byte();
  __dyc_funcallvar_56 = __dyc_readpre_byte();
  __dyc_funcallvar_57 = __dyc_readpre_byte();
  __dyc_funcallvar_58 = __dyc_readpre_byte();
  __dyc_funcallvar_59 = __dyc_readpre_byte();
  __dyc_funcallvar_60 = __dyc_readpre_byte();
  __dyc_funcallvar_61 = __dyc_readpre_byte();
  __dyc_funcallvar_62 = __dyc_readpre_byte();
  func = 0;
  __s1_len___7 = 0;
  __s2_len___7 = 0;
  tmp___171 = 0;
  tmp___176 = 0;
  tmp___177 = 0;
  tmp___178 = 0;
  tmp___179 = 0;
  __s1_len___8 = 0;
  __s2_len___8 = 0;
  tmp___189 = 0;
  tmp___194 = 0;
  tmp___195 = 0;
  tmp___196 = 0;
  tmp___197 = 0;
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
  if (0) {
    {
    tmp___195 = __dyc_funcallvar_53;
    __s1_len___8 = (unsigned long )tmp___195;
    tmp___196 = __dyc_funcallvar_54;
    __s2_len___8 = (unsigned long )tmp___196;
    }
    if (! ((unsigned long )((void const   *)(((dc->u.s_binary.left)->u.s_operator.op)->code + 1)) - (unsigned long )((void const   *)((dc->u.s_binary.left)->u.s_operator.op)->code) == 1UL)) {
      goto _L___24;
    } else {
      if (__s1_len___8 >= 4UL) {
        _L___24:  
        if (! ((unsigned long )((void const   *)("ix" + 1)) - (unsigned long )((void const   *)"ix") == 1UL)) {
          tmp___197 = 1;
        } else {
          if (__s2_len___8 >= 4UL) {
            tmp___197 = 1;
          } else {
            tmp___197 = 0;
          }
        }
      } else {
        tmp___197 = 0;
      }
    }
    if (tmp___197) {
      {
      tmp___189 = __dyc_funcallvar_55;
      }
    } else {
      {
      tmp___194 = __dyc_funcallvar_56;
      tmp___189 = tmp___194;
      }
    }
  } else {
    {
    tmp___194 = __dyc_funcallvar_57;
    tmp___189 = tmp___194;
    }
  }
  if (tmp___189 == 0) {
    {



    }
  } else {
    if (0) {
      {
      tmp___177 = __dyc_funcallvar_58;
      __s1_len___7 = (unsigned long )tmp___177;
      tmp___178 = __dyc_funcallvar_59;
      __s2_len___7 = (unsigned long )tmp___178;
      }
      if (! ((unsigned long )((void const   *)(((dc->u.s_binary.left)->u.s_operator.op)->code + 1)) - (unsigned long )((void const   *)((dc->u.s_binary.left)->u.s_operator.op)->code) == 1UL)) {
        goto _L___22;
      } else {
        if (__s1_len___7 >= 4UL) {
          _L___22:  
          if (! ((unsigned long )((void const   *)("cl" + 1)) - (unsigned long )((void const   *)"cl") == 1UL)) {
            tmp___179 = 1;
          } else {
            if (__s2_len___7 >= 4UL) {
              tmp___179 = 1;
            } else {
              tmp___179 = 0;
            }
          }
        } else {
          tmp___179 = 0;
        }
      }
      if (tmp___179) {
        {
        tmp___171 = __dyc_funcallvar_60;
        }
      } else {
        {
        tmp___176 = __dyc_funcallvar_61;
        tmp___171 = tmp___176;
        }
      }
    } else {
      {
      tmp___176 = __dyc_funcallvar_62;
      tmp___171 = tmp___176;
      }
    }
    if (tmp___171 != 0) {
      {

      }
    }
    {

    }
  }
  if ((int )(dc->u.s_binary.left)->type == 50) {
    if (((dc->u.s_binary.left)->u.s_operator.op)->len == 1) {
      if ((int const   )*(((dc->u.s_binary.left)->u.s_operator.op)->name + 0) == 62) {
        {

        }
      }
    }
  }
  goto __dyc_dummy_label;

  goto __dyc_dummy_label;
  __dyc_dummy_label:  ;
  __dyc_printpre_byte(__s1_len___7);
  __dyc_printpre_byte(__s2_len___7);
  __dyc_printpre_byte(__s1_len___8);
  __dyc_printpre_byte(__s2_len___8);
}
}
