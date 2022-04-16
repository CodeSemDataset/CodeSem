#include "../../include/dycfoo.h"
#include "../../include/cp-demangle.i.hd.c.h"
void __dyc_foo(void) 
{ char peek ;
  struct demangle_component *tmp___9 ;
  struct demangle_component *type___0 ;
  struct demangle_component *tmp___10 ;
  struct demangle_component *tmp___11 ;
  struct demangle_component *op ;
  char const   *code ;
  int args ;
  struct demangle_component *tmp___12 ;
  struct demangle_component *tmp___13 ;
  size_t __s1_len ;
  size_t __s2_len ;
  int tmp___23 ;
  int tmp___28 ;
  int tmp___29 ;
  int tmp___30 ;
  int tmp___31 ;
  struct d_info *di ;
  struct demangle_component *__dyc_funcallvar_15 ;
  struct demangle_component *__dyc_funcallvar_16 ;
  struct demangle_component *__dyc_funcallvar_17 ;
  struct demangle_component *__dyc_funcallvar_18 ;
  struct demangle_component *__dyc_funcallvar_19 ;
  int __dyc_funcallvar_20 ;
  int __dyc_funcallvar_21 ;
  int __dyc_funcallvar_22 ;
  int __dyc_funcallvar_23 ;
  int __dyc_funcallvar_24 ;
  struct demangle_component *__dyc_funcallvar_25 ;
  struct demangle_component *__dyc_funcallvar_26 ;

  {
  peek = (char )__dyc_readpre_byte();
  di = __dyc_read_ptr__comp_60d_info();
  __dyc_funcallvar_15 = __dyc_read_ptr__comp_46demangle_component();
  __dyc_funcallvar_16 = __dyc_read_ptr__comp_46demangle_component();
  __dyc_funcallvar_17 = __dyc_read_ptr__comp_46demangle_component();
  __dyc_funcallvar_18 = __dyc_read_ptr__comp_46demangle_component();
  __dyc_funcallvar_19 = __dyc_read_ptr__comp_46demangle_component();
  __dyc_funcallvar_20 = __dyc_readpre_byte();
  __dyc_funcallvar_21 = __dyc_readpre_byte();
  __dyc_funcallvar_22 = __dyc_readpre_byte();
  __dyc_funcallvar_23 = __dyc_readpre_byte();
  __dyc_funcallvar_24 = __dyc_readpre_byte();
  __dyc_funcallvar_25 = __dyc_read_ptr__comp_46demangle_component();
  __dyc_funcallvar_26 = __dyc_read_ptr__comp_46demangle_component();
  tmp___9 = 0;
  type___0 = 0;
  tmp___10 = 0;
  tmp___11 = 0;
  op = 0;
  code = 0;
  args = 0;
  tmp___12 = 0;
  tmp___13 = 0;
  __s1_len = 0;
  __s2_len = 0;
  tmp___23 = 0;
  tmp___28 = 0;
  tmp___29 = 0;
  tmp___30 = 0;
  tmp___31 = 0;
  tmp___9 = __dyc_funcallvar_15;
  goto __dyc_dummy_label;
  goto __dyc_dummy_label;
  _L___16:  
  if ((int const   )*(di->n + 1) == 108) {
    type___0 = (struct demangle_component *)((void *)0);
    di->n += 2;
    if ((int )peek == 116) {
      {
      type___0 = __dyc_funcallvar_16;
      }
    }
    if (! *(di->n)) {
      goto __dyc_dummy_label;
    } else {
      if (! *(di->n + 1)) {
        goto __dyc_dummy_label;
      }
    }
    {
    tmp___10 = __dyc_funcallvar_17;
    tmp___11 = __dyc_funcallvar_18;
    }
    goto __dyc_dummy_label;
  } else {
    goto __dyc_dummy_label;
  }
  code = (char const   *)((void *)0);
  op = __dyc_funcallvar_19;
  if ((unsigned long )op == (unsigned long )((void *)0)) {
    goto __dyc_dummy_label;
  }
  if ((int )op->type == 50) {
    code = (char const   *)(op->u.s_operator.op)->code;
    di->expansion += (int )((op->u.s_operator.op)->len - 2);
    if (0) {
      {
      tmp___29 = __dyc_funcallvar_20;
      __s1_len = (unsigned long )tmp___29;
      tmp___30 = __dyc_funcallvar_21;
      __s2_len = (unsigned long )tmp___30;
      }
      if (! ((unsigned long )((void const   *)(code + 1)) - (unsigned long )((void const   *)code) == 1UL)) {
        goto _L___0;
      } else {
        if (__s1_len >= 4UL) {
          _L___0:  
          if (! ((unsigned long )((void const   *)("st" + 1)) - (unsigned long )((void const   *)"st") == 1UL)) {
            tmp___31 = 1;
          } else {
            if (__s2_len >= 4UL) {
              tmp___31 = 1;
            } else {
              tmp___31 = 0;
            }
          }
        } else {
          tmp___31 = 0;
        }
      }
      if (tmp___31) {
        {
        tmp___23 = __dyc_funcallvar_22;
        }
      } else {
        {
        tmp___28 = __dyc_funcallvar_23;
        tmp___23 = tmp___28;
        }
      }
    } else {
      {
      tmp___28 = __dyc_funcallvar_24;
      tmp___23 = tmp___28;
      }
    }
    if (tmp___23 == 0) {
      {
      tmp___12 = __dyc_funcallvar_25;
      tmp___13 = __dyc_funcallvar_26;
      }
      goto __dyc_dummy_label;
    }
  }
  if ((int )op->type == 50) {
    goto switch_32_50;
  } else {
    if ((int )op->type == 51) {
      goto switch_32_51;
    } else {
      if ((int )op->type == 52) {
        goto switch_32_52;
      } else {
        {
        goto switch_32_default;
        if (0) {
          switch_32_default:  ;
          goto __dyc_dummy_label;
          switch_32_50:  
          args = (int )(op->u.s_operator.op)->args;
          goto switch_32_break;
          switch_32_51:  
          args = op->u.s_extended_operator.args;
          goto switch_32_break;
          switch_32_52:  
          args = 1;
          goto switch_32_break;
        } else {
          switch_32_break:  ;
        }
        }
      }
    }
  }
  __dyc_dummy_label:  ;
  __dyc_print_ptr__comp_46demangle_component(tmp___9);
  __dyc_print_ptr__comp_46demangle_component(type___0);
  __dyc_print_ptr__comp_46demangle_component(tmp___10);
  __dyc_print_ptr__comp_46demangle_component(tmp___11);
  __dyc_print_ptr__char(code);
  __dyc_printpre_byte(args);
  __dyc_print_ptr__comp_46demangle_component(tmp___12);
  __dyc_print_ptr__comp_46demangle_component(tmp___13);
  __dyc_printpre_byte(__s1_len);
  __dyc_printpre_byte(__s2_len);
}
}
