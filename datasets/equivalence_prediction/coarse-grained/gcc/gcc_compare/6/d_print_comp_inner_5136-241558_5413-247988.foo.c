#include "../../include/dycfoo.h"
#include "../../include/cp-demangle.i.hd.c.h"
void __dyc_foo(void) 
{ struct demangle_builtin_type_info  const  cplus_demangle_builtin_types[34] ;
  struct demangle_component *mod_inner ;
  struct d_print_template *saved_templates ;
  int need_template_restore ;
  struct demangle_component *sub ;
  struct d_print_mod dpm ;
  struct d_print_mod dpm___0 ;
  struct d_print_mod *hold_modifiers___0 ;
  struct d_print_mod adpm___0[4] ;
  unsigned int i___0 ;
  struct d_print_mod *pdpm___0 ;
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
  struct d_print_info *dpi ;
  int options ;
  struct demangle_component *dc ;
  int __dyc_funcallvar_18 ;
  int __dyc_funcallvar_19 ;
  int __dyc_funcallvar_20 ;
  int __dyc_funcallvar_21 ;
  int __dyc_funcallvar_22 ;

  {
  mod_inner = __dyc_read_ptr__comp_46demangle_component();
  saved_templates = __dyc_read_ptr__comp_62d_print_template();
  need_template_restore = __dyc_readpre_byte();
  sub = __dyc_read_ptr__comp_46demangle_component();
  dpi = __dyc_read_ptr__comp_68d_print_info();
  options = __dyc_readpre_byte();
  dc = __dyc_read_ptr__comp_46demangle_component();
  __dyc_funcallvar_18 = __dyc_readpre_byte();
  __dyc_funcallvar_19 = __dyc_readpre_byte();
  __dyc_funcallvar_20 = __dyc_readpre_byte();
  __dyc_funcallvar_21 = __dyc_readpre_byte();
  __dyc_funcallvar_22 = __dyc_readpre_byte();
  memset(& dpm, 0, sizeof(struct d_print_mod ));
  memset(& dpm___0, 0, sizeof(struct d_print_mod ));
  hold_modifiers___0 = 0;
  i___0 = 0;
  pdpm___0 = 0;
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
  if ((int )sub->type == 35) {
    dc = sub;
  } else {
    if ((int )sub->type == (int )dc->type) {
      dc = sub;
    } else {
      if ((int )sub->type == 36) {
        mod_inner = sub->u.s_binary.left;
      }
    }
  }
  modifier: 
  switch_50_33:  
  switch_50_34:  
  switch_50_37:  
  switch_50_38:  
  switch_50_28:  
  switch_50_29:  
  switch_50_30:  
  switch_50_31:  
  switch_50_32:  
  switch_50_77:  
  switch_50_79:  
  switch_50_80:  
  dpm.next = dpi->modifiers;
  dpi->modifiers = & dpm;
  dpm.mod = dc;
  dpm.printed = 0;
  dpm.templates = dpi->templates;
  if (! mod_inner) {
    mod_inner = dc->u.s_binary.left;
  }

  if (! dpm.printed) {
    {

    }
  }
  dpi->modifiers = dpm.next;
  if (need_template_restore) {
    dpi->templates = saved_templates;
  }
  goto __dyc_dummy_label;
  switch_50_39:  
  if ((options & (1 << 2)) == 0) {
    {

    }
  } else {
    {

    }
  }
  goto __dyc_dummy_label;

  goto __dyc_dummy_label;
  switch_50_41:  
  if ((options & (1 << 5)) != 0) {
    {

    }
  }
  if ((unsigned long )dc->u.s_binary.left != (unsigned long )((void *)0)) {
    if ((options & (1 << 5)) != 0) {
      {

      }
    } else {
      goto _L___6;
    }
  } else {
    _L___6:  
    if ((unsigned long )dc->u.s_binary.left != (unsigned long )((void *)0)) {
      if ((options & (1 << 6)) == 0) {
        {
        dpm___0.next = dpi->modifiers;
        dpi->modifiers = & dpm___0;
        dpm___0.mod = dc;
        dpm___0.printed = 0;
        dpm___0.templates = dpi->templates;

        dpi->modifiers = dpm___0.next;
        }
        if (dpm___0.printed) {
          goto __dyc_dummy_label;
        }
        if ((options & (1 << 5)) == 0) {
          {

          }
        }
      }
    }
  }
  if ((options & (1 << 5)) == 0) {
    {

    }
  }
  goto __dyc_dummy_label;
  switch_50_42:  
  hold_modifiers___0 = dpi->modifiers;
  adpm___0[0].next = hold_modifiers___0;
  dpi->modifiers = adpm___0;
  adpm___0[0].mod = dc;
  adpm___0[0].printed = 0;
  adpm___0[0].templates = dpi->templates;
  i___0 = 1U;
  pdpm___0 = hold_modifiers___0;
  while (1) {
    while_56_continue:  ;
    if ((unsigned long )pdpm___0 != (unsigned long )((void *)0)) {
      if (! ((int )(pdpm___0->mod)->type == 25)) {
        if (! ((int )(pdpm___0->mod)->type == 26)) {
          if (! ((int )(pdpm___0->mod)->type == 27)) {
            goto while_56_break;
          }
        }
      }
    } else {
      goto while_56_break;
    }
    if (! pdpm___0->printed) {
      if ((unsigned long )i___0 >= sizeof(struct d_print_mod [4]) / sizeof(struct d_print_mod )) {
        {

        }
        goto __dyc_dummy_label;
      }
      adpm___0[i___0] = *pdpm___0;
      adpm___0[i___0].next = dpi->modifiers;
      dpi->modifiers = & adpm___0[i___0];
      pdpm___0->printed = 1;
      i___0 ++;
    }
    pdpm___0 = pdpm___0->next;
  }
  while_56_break:  ;

  dpi->modifiers = hold_modifiers___0;
  if (adpm___0[0].printed) {
    goto __dyc_dummy_label;
  }
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
  __dyc_dummy_label:  ;
  __dyc_print_ptr__comp_46demangle_component(mod_inner);
  __dyc_printpre_byte(i___0);
  __dyc_printpre_byte(len);
  __dyc_print_ptr__comp_46demangle_component(list);
  __dyc_printpre_byte(len___0);
  __dyc_print_ptr__comp_46demangle_component(operand);
  __dyc_print_ptr__char(code);
  __dyc_printpre_byte(__s1_len___1);
  __dyc_printpre_byte(__s2_len___1);
}
}
