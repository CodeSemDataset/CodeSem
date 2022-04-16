#include "../../include/dycfoo.h"
#include "../../include/cp-demangle.i.hd.c.h"
void __dyc_foo(void) 
{ struct demangle_builtin_type_info  const  cplus_demangle_builtin_types[34] ;
  unsigned int i___0 ;
  struct d_print_mod dpm___1 ;
  size_t len ;
  unsigned long flush_count ;
  struct demangle_component *type ;
  struct demangle_component *list ;
  struct demangle_operator_info  const  *op ;
  int len___0 ;
  struct demangle_component *op___0 ;
  struct demangle_component *operand ;
  char const   *code ;
  size_t __s1_len___1 ;
  size_t __s2_len___1 ;
  int tmp___58 ;
  int tmp___63 ;
  int tmp___64 ;
  int tmp___65 ;
  int tmp___66 ;
  struct demangle_component *a___1 ;
  struct demangle_component *tmp___67 ;
  int len___1 ;
  int tmp___68 ;
  int len___2 ;
  int tmp___69 ;
  size_t __s1_len___2 ;
  size_t __s2_len___2 ;
  int tmp___79 ;
  int tmp___84 ;
  int tmp___85 ;
  int tmp___86 ;
  int tmp___87 ;
  size_t __s1_len___3 ;
  size_t __s2_len___3 ;
  int tmp___97 ;
  int tmp___102 ;
  int tmp___103 ;
  int tmp___104 ;
  int tmp___105 ;
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
  struct d_print_info *dpi ;
  struct demangle_component *dc ;
  int __dyc_funcallvar_18 ;
  int __dyc_funcallvar_19 ;
  int __dyc_funcallvar_20 ;
  int __dyc_funcallvar_21 ;
  int __dyc_funcallvar_22 ;
  int __dyc_funcallvar_23 ;
  int __dyc_funcallvar_24 ;
  int __dyc_funcallvar_25 ;
  int __dyc_funcallvar_26 ;
  int __dyc_funcallvar_27 ;
  struct demangle_component *__dyc_funcallvar_28 ;
  int __dyc_funcallvar_29 ;
  int __dyc_funcallvar_30 ;
  int __dyc_funcallvar_31 ;
  int __dyc_funcallvar_32 ;
  int __dyc_funcallvar_33 ;
  int __dyc_funcallvar_34 ;
  int __dyc_funcallvar_35 ;
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

  {
  i___0 = (unsigned int )__dyc_readpre_byte();
  dpi = __dyc_read_ptr__comp_68d_print_info();
  dc = __dyc_read_ptr__comp_46demangle_component();
  __dyc_funcallvar_18 = __dyc_readpre_byte();
  __dyc_funcallvar_19 = __dyc_readpre_byte();
  __dyc_funcallvar_20 = __dyc_readpre_byte();
  __dyc_funcallvar_21 = __dyc_readpre_byte();
  __dyc_funcallvar_22 = __dyc_readpre_byte();
  __dyc_funcallvar_23 = __dyc_readpre_byte();
  __dyc_funcallvar_24 = __dyc_readpre_byte();
  __dyc_funcallvar_25 = __dyc_readpre_byte();
  __dyc_funcallvar_26 = __dyc_readpre_byte();
  __dyc_funcallvar_27 = __dyc_readpre_byte();
  __dyc_funcallvar_28 = __dyc_read_ptr__comp_46demangle_component();
  __dyc_funcallvar_29 = __dyc_readpre_byte();
  __dyc_funcallvar_30 = __dyc_readpre_byte();
  __dyc_funcallvar_31 = __dyc_readpre_byte();
  __dyc_funcallvar_32 = __dyc_readpre_byte();
  __dyc_funcallvar_33 = __dyc_readpre_byte();
  __dyc_funcallvar_34 = __dyc_readpre_byte();
  __dyc_funcallvar_35 = __dyc_readpre_byte();
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
  memset(& dpm___1, 0, sizeof(struct d_print_mod ));
  len = 0;
  flush_count = 0;
  type = 0;
  list = 0;
  op = 0;
  len___0 = 0;
  op___0 = 0;
  operand = 0;
  code = 0;
  __s1_len___1 = 0;
  __s2_len___1 = 0;
  tmp___58 = 0;
  tmp___63 = 0;
  tmp___64 = 0;
  tmp___65 = 0;
  tmp___66 = 0;
  a___1 = 0;
  tmp___67 = 0;
  len___1 = 0;
  tmp___68 = 0;
  len___2 = 0;
  tmp___69 = 0;
  __s1_len___2 = 0;
  __s2_len___2 = 0;
  tmp___79 = 0;
  tmp___84 = 0;
  tmp___85 = 0;
  tmp___86 = 0;
  tmp___87 = 0;
  __s1_len___3 = 0;
  __s2_len___3 = 0;
  tmp___97 = 0;
  tmp___102 = 0;
  tmp___103 = 0;
  tmp___104 = 0;
  tmp___105 = 0;
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
  while (1) {
    while_57_continue:  ;
    if (! (i___0 > 1U)) {
      goto while_57_break;
    }
    {
    i___0 --;

    }
  }
  while_57_break:  ;

  goto __dyc_dummy_label;
  dpm___1.next = dpi->modifiers;
  dpi->modifiers = & dpm___1;
  dpm___1.mod = dc;
  dpm___1.printed = 0;
  dpm___1.templates = dpi->templates;

  if (! dpm___1.printed) {
    {

    }
  }
  dpi->modifiers = dpm___1.next;
  goto __dyc_dummy_label;
  switch_50_44:  
  if (dc->u.s_fixed.sat) {
    {

    }
  }
  if ((unsigned long )(dc->u.s_fixed.length)->u.s_builtin.type != (unsigned long )(& cplus_demangle_builtin_types[8])) {
    {


    }
  }
  if (dc->u.s_fixed.accum) {
    {

    }
  } else {
    {

    }
  }
  goto __dyc_dummy_label;
  switch_50_46:  
  switch_50_47:  
  if ((unsigned long )dc->u.s_binary.left != (unsigned long )((void *)0)) {
    {

    }
  }
  if ((unsigned long )dc->u.s_binary.right != (unsigned long )((void *)0)) {
    if (dpi->len >= sizeof(char [256]) - 2UL) {
      {

      }
    }
    {

    len = dpi->len;
    flush_count = dpi->flush_count;

    }
    if (dpi->flush_count == flush_count) {
      if (dpi->len == len) {
        dpi->len -= 2UL;
      }
    }
  }
  goto __dyc_dummy_label;
  switch_50_49:  
  type = dc->u.s_binary.left;
  list = dc->u.s_binary.right;
  if (type) {
    {

    }
  }



  goto __dyc_dummy_label;
  op = dc->u.s_operator.op;
  len___0 = (int )op->len;

  if ((int const   )*(op->name + 0) >= 97) {
    if ((int const   )*(op->name + 0) <= 122) {
      {

      }
    }
  }
  if ((int const   )*(op->name + (len___0 - 1)) == 32) {
    len___0 --;
  }

  goto __dyc_dummy_label;


  goto __dyc_dummy_label;


  goto __dyc_dummy_label;

  goto __dyc_dummy_label;
  switch_50_55:  
  op___0 = dc->u.s_binary.left;
  operand = dc->u.s_binary.right;
  code = (char const   *)((void *)0);
  if ((int )op___0->type == 50) {
    code = (char const   *)(op___0->u.s_operator.op)->code;
    if (0) {
      {
      tmp___64 = __dyc_funcallvar_18;
      __s1_len___1 = (unsigned long )tmp___64;
      tmp___65 = __dyc_funcallvar_19;
      __s2_len___1 = (unsigned long )tmp___65;
      }
      if (! ((unsigned long )((void const   *)(code + 1)) - (unsigned long )((void const   *)code) == 1UL)) {
        goto _L___8;
      } else {
        if (__s1_len___1 >= 4UL) {
          _L___8:  
          if (! ((unsigned long )((void const   *)("ad" + 1)) - (unsigned long )((void const   *)"ad") == 1UL)) {
            tmp___66 = 1;
          } else {
            if (__s2_len___1 >= 4UL) {
              tmp___66 = 1;
            } else {
              tmp___66 = 0;
            }
          }
        } else {
          tmp___66 = 0;
        }
      }
      if (tmp___66) {
        {
        tmp___58 = __dyc_funcallvar_20;
        }
      } else {
        {
        tmp___63 = __dyc_funcallvar_21;
        tmp___58 = tmp___63;
        }
      }
    } else {
      {
      tmp___63 = __dyc_funcallvar_22;
      tmp___58 = tmp___63;
      }
    }
    if (! tmp___58) {
      if ((int )operand->type == 3) {
        if ((int )(operand->u.s_binary.left)->type == 1) {
          if ((int )(operand->u.s_binary.right)->type == 41) {
            operand = operand->u.s_binary.left;
          }
        }
      }
    }
    if ((int )operand->type == 57) {
      {
      operand = operand->u.s_binary.left;


      }
      goto __dyc_dummy_label;
    }
  }
  if (code) {
    if (0) {
      {
      tmp___103 = __dyc_funcallvar_23;
      __s1_len___3 = (unsigned long )tmp___103;
      tmp___104 = __dyc_funcallvar_24;
      __s2_len___3 = (unsigned long )tmp___104;
      }
      if (! ((unsigned long )((void const   *)(code + 1)) - (unsigned long )((void const   *)code) == 1UL)) {
        goto _L___12;
      } else {
        if (__s1_len___3 >= 4UL) {
          _L___12:  
          if (! ((unsigned long )((void const   *)("sZ" + 1)) - (unsigned long )((void const   *)"sZ") == 1UL)) {
            tmp___105 = 1;
          } else {
            if (__s2_len___3 >= 4UL) {
              tmp___105 = 1;
            } else {
              tmp___105 = 0;
            }
          }
        } else {
          tmp___105 = 0;
        }
      }
      if (tmp___105) {
        {
        tmp___97 = __dyc_funcallvar_25;
        }
      } else {
        {
        tmp___102 = __dyc_funcallvar_26;
        tmp___97 = tmp___102;
        }
      }
    } else {
      {
      tmp___102 = __dyc_funcallvar_27;
      tmp___97 = tmp___102;
      }
    }
    if (tmp___97) {
      goto _L___13;
    } else {
      {
      tmp___67 = __dyc_funcallvar_28;
      a___1 = tmp___67;
      tmp___68 = __dyc_funcallvar_29;
      len___1 = tmp___68;

      }
      goto __dyc_dummy_label;
    }
  } else {
    _L___13:  
    if (code) {
      if (0) {
        {
        tmp___85 = __dyc_funcallvar_30;
        __s1_len___2 = (unsigned long )tmp___85;
        tmp___86 = __dyc_funcallvar_31;
        __s2_len___2 = (unsigned long )tmp___86;
        }
        if (! ((unsigned long )((void const   *)(code + 1)) - (unsigned long )((void const   *)code) == 1UL)) {
          goto _L___10;
        } else {
          if (__s1_len___2 >= 4UL) {
            _L___10:  
            if (! ((unsigned long )((void const   *)("sP" + 1)) - (unsigned long )((void const   *)"sP") == 1UL)) {
              tmp___87 = 1;
            } else {
              if (__s2_len___2 >= 4UL) {
                tmp___87 = 1;
              } else {
                tmp___87 = 0;
              }
            }
          } else {
            tmp___87 = 0;
          }
        }
        if (tmp___87) {
          {
          tmp___79 = __dyc_funcallvar_32;
          }
        } else {
          {
          tmp___84 = __dyc_funcallvar_33;
          tmp___79 = tmp___84;
          }
        }
      } else {
        {
        tmp___84 = __dyc_funcallvar_34;
        tmp___79 = tmp___84;
        }
      }
      if (! tmp___79) {
        {
        tmp___69 = __dyc_funcallvar_35;
        len___2 = tmp___69;

        }
        goto __dyc_dummy_label;
      }
    }
  }
  if ((int )op___0->type != 52) {
    {

    }
  } else {
    {



    }
  }
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
  __dyc_dummy_label:  ;
  __dyc_printpre_byte(len);
  __dyc_print_ptr__comp_46demangle_component(list);
  __dyc_printpre_byte(len___0);
  __dyc_print_ptr__comp_46demangle_component(operand);
  __dyc_print_ptr__char(code);
  __dyc_printpre_byte(__s1_len___1);
  __dyc_printpre_byte(__s2_len___1);
  __dyc_print_ptr__comp_46demangle_component(a___1);
  __dyc_printpre_byte(len___1);
  __dyc_printpre_byte(len___2);
  __dyc_printpre_byte(__s1_len___2);
  __dyc_printpre_byte(__s2_len___2);
  __dyc_printpre_byte(__s1_len___3);
  __dyc_printpre_byte(__s2_len___3);
  __dyc_printpre_byte(__s1_len___4);
  __dyc_printpre_byte(__s2_len___4);
  __dyc_printpre_byte(__s1_len___5);
  __dyc_printpre_byte(__s2_len___5);
}
}
