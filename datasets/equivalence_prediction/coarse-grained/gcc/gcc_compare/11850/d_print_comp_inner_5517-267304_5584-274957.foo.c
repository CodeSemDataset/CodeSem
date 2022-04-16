#include "../../include/dycfoo.h"
#include "../../include/cp-demangle.i.hd.c.h"
void __dyc_foo(void) 
{ size_t __s1_len___7 ;
  size_t __s2_len___7 ;
  int tmp___171 ;
  int tmp___176 ;
  int tmp___177 ;
  int tmp___178 ;
  int tmp___179 ;
  int tmp___189 ;
  int tmp___198 ;
  struct demangle_component *op___1 ;
  struct demangle_component *first ;
  struct demangle_component *second ;
  struct demangle_component *third ;
  size_t __s1_len___9 ;
  size_t __s2_len___9 ;
  int tmp___208 ;
  int tmp___213 ;
  int tmp___214 ;
  int tmp___215 ;
  int tmp___216 ;
  struct demangle_component *dc ;
  int __dyc_funcallvar_58 ;
  int __dyc_funcallvar_59 ;
  int __dyc_funcallvar_60 ;
  int __dyc_funcallvar_61 ;
  int __dyc_funcallvar_62 ;
  int __dyc_funcallvar_63 ;
  int __dyc_funcallvar_64 ;
  int __dyc_funcallvar_65 ;
  int __dyc_funcallvar_66 ;
  int __dyc_funcallvar_67 ;
  int __dyc_funcallvar_68 ;

  {
  tmp___189 = __dyc_readpre_byte();
  dc = __dyc_read_ptr__comp_46demangle_component();
  __dyc_funcallvar_58 = __dyc_readpre_byte();
  __dyc_funcallvar_59 = __dyc_readpre_byte();
  __dyc_funcallvar_60 = __dyc_readpre_byte();
  __dyc_funcallvar_61 = __dyc_readpre_byte();
  __dyc_funcallvar_62 = __dyc_readpre_byte();
  __dyc_funcallvar_63 = __dyc_readpre_byte();
  __dyc_funcallvar_64 = __dyc_readpre_byte();
  __dyc_funcallvar_65 = __dyc_readpre_byte();
  __dyc_funcallvar_66 = __dyc_readpre_byte();
  __dyc_funcallvar_67 = __dyc_readpre_byte();
  __dyc_funcallvar_68 = __dyc_readpre_byte();
  __s1_len___7 = 0;
  __s2_len___7 = 0;
  tmp___171 = 0;
  tmp___176 = 0;
  tmp___177 = 0;
  tmp___178 = 0;
  tmp___179 = 0;
  tmp___198 = 0;
  op___1 = 0;
  first = 0;
  second = 0;
  third = 0;
  __s1_len___9 = 0;
  __s2_len___9 = 0;
  tmp___208 = 0;
  tmp___213 = 0;
  tmp___214 = 0;
  tmp___215 = 0;
  tmp___216 = 0;
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
  switch_50_58:  
  if ((int )(dc->u.s_binary.right)->type != 59) {
    {

    }
    goto __dyc_dummy_label;
  } else {
    if ((int )((dc->u.s_binary.right)->u.s_binary.right)->type != 60) {
      {

      }
      goto __dyc_dummy_label;
    }
  }
  tmp___198 = __dyc_funcallvar_63;
  if (tmp___198) {
    goto __dyc_dummy_label;
  }
  op___1 = dc->u.s_binary.left;
  first = (dc->u.s_binary.right)->u.s_binary.left;
  second = ((dc->u.s_binary.right)->u.s_binary.right)->u.s_binary.left;
  third = ((dc->u.s_binary.right)->u.s_binary.right)->u.s_binary.right;
  if (0) {
    {
    tmp___214 = __dyc_funcallvar_64;
    __s1_len___9 = (unsigned long )tmp___214;
    tmp___215 = __dyc_funcallvar_65;
    __s2_len___9 = (unsigned long )tmp___215;
    }
    if (! ((unsigned long )((void const   *)((op___1->u.s_operator.op)->code + 1)) - (unsigned long )((void const   *)(op___1->u.s_operator.op)->code) == 1UL)) {
      goto _L___26;
    } else {
      if (__s1_len___9 >= 4UL) {
        _L___26:  
        if (! ((unsigned long )((void const   *)("qu" + 1)) - (unsigned long )((void const   *)"qu") == 1UL)) {
          tmp___216 = 1;
        } else {
          if (__s2_len___9 >= 4UL) {
            tmp___216 = 1;
          } else {
            tmp___216 = 0;
          }
        }
      } else {
        tmp___216 = 0;
      }
    }
    if (tmp___216) {
      {
      tmp___208 = __dyc_funcallvar_66;
      }
    } else {
      {
      tmp___213 = __dyc_funcallvar_67;
      tmp___208 = tmp___213;
      }
    }
  } else {
    {
    tmp___213 = __dyc_funcallvar_68;
    tmp___208 = tmp___213;
    }
  }
  if (tmp___208) {
    {

    }
    if ((unsigned long )first->u.s_binary.left != (unsigned long )((void *)0)) {
      {


      }
    }
    {

    }
    if (third) {
      {

      }
    }
  } else {
    {





    }
  }
  goto __dyc_dummy_label;

  goto __dyc_dummy_label;
  __dyc_dummy_label:  ;
  __dyc_printpre_byte(__s1_len___7);
  __dyc_printpre_byte(__s2_len___7);
  __dyc_print_ptr__comp_46demangle_component(op___1);
  __dyc_print_ptr__comp_46demangle_component(first);
  __dyc_print_ptr__comp_46demangle_component(second);
  __dyc_print_ptr__comp_46demangle_component(third);
  __dyc_printpre_byte(__s1_len___9);
  __dyc_printpre_byte(__s2_len___9);
}
}
