#include "../../include/dycfoo.h"
#include "../../include/cp-demangle.i.hd.c.h"
void __dyc_foo(void) 
{ struct demangle_builtin_type_info  const  cplus_demangle_builtin_types[34] ;
  struct demangle_component *mod_inner ;
  struct d_print_template *saved_templates ;
  int need_template_restore ;
  struct d_print_mod *hold_modifiers ;
  struct demangle_component *typed_name ;
  struct d_print_mod adpm[4] ;
  unsigned int i ;
  struct d_print_template dpt ;
  struct d_print_mod *hold_dpm ;
  struct demangle_component *dcl ;
  struct demangle_component  const  *hold_current ;
  char tmp___2 ;
  char tmp___3 ;
  int tmp___25 ;
  size_t __s1_len___0 ;
  size_t __s2_len___0 ;
  int tmp___35 ;
  int tmp___40 ;
  int tmp___41 ;
  int tmp___42 ;
  int tmp___43 ;
  struct d_print_template *hold_dpt ;
  struct demangle_component *a ;
  struct demangle_component *tmp___46 ;
  struct d_print_mod *pdpm ;
  struct demangle_component *sub ;
  struct d_saved_scope *scope ;
  struct d_saved_scope *tmp___47 ;
  struct demangle_component *a___0 ;
  int tmp___48 ;
  struct d_component_stack  const  *dcse ;
  int found_self_or_parent ;
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
  struct d_print_info *dpi ;
  int options ;
  struct demangle_component *dc ;
  int __dyc_funcallvar_4 ;
  int __dyc_funcallvar_5 ;
  int __dyc_funcallvar_6 ;
  int __dyc_funcallvar_7 ;
  int __dyc_funcallvar_8 ;
  int __dyc_funcallvar_9 ;
  char __dyc_funcallvar_10 ;
  char __dyc_funcallvar_11 ;
  struct demangle_component *__dyc_funcallvar_12 ;
  struct demangle_component *__dyc_funcallvar_13 ;
  struct d_saved_scope *__dyc_funcallvar_14 ;
  int __dyc_funcallvar_15 ;
  struct demangle_component *__dyc_funcallvar_16 ;
  struct demangle_component *__dyc_funcallvar_17 ;
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

  {
  mod_inner = __dyc_read_ptr__comp_46demangle_component();
  saved_templates = __dyc_read_ptr__comp_62d_print_template();
  need_template_restore = __dyc_readpre_byte();
  hold_modifiers = __dyc_read_ptr__comp_63d_print_mod();
  typed_name = __dyc_read_ptr__comp_46demangle_component();
  i = (unsigned int )__dyc_readpre_byte();
  dpt = __dyc_read_comp_62d_print_template();
  dpi = __dyc_read_ptr__comp_68d_print_info();
  options = __dyc_readpre_byte();
  dc = __dyc_read_ptr__comp_46demangle_component();
  __dyc_funcallvar_4 = __dyc_readpre_byte();
  __dyc_funcallvar_5 = __dyc_readpre_byte();
  __dyc_funcallvar_6 = __dyc_readpre_byte();
  __dyc_funcallvar_7 = __dyc_readpre_byte();
  __dyc_funcallvar_8 = __dyc_readpre_byte();
  __dyc_funcallvar_9 = __dyc_readpre_byte();
  __dyc_funcallvar_10 = (char )__dyc_readpre_byte();
  __dyc_funcallvar_11 = (char )__dyc_readpre_byte();
  __dyc_funcallvar_12 = __dyc_read_ptr__comp_46demangle_component();
  __dyc_funcallvar_13 = __dyc_read_ptr__comp_46demangle_component();
  __dyc_funcallvar_14 = __dyc_read_ptr__comp_66d_saved_scope();
  __dyc_funcallvar_15 = __dyc_readpre_byte();
  __dyc_funcallvar_16 = __dyc_read_ptr__comp_46demangle_component();
  __dyc_funcallvar_17 = __dyc_read_ptr__comp_46demangle_component();
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
  hold_dpm = 0;
  dcl = 0;
  hold_current = 0;
  tmp___2 = 0;
  tmp___3 = 0;
  tmp___25 = 0;
  __s1_len___0 = 0;
  __s2_len___0 = 0;
  tmp___35 = 0;
  tmp___40 = 0;
  tmp___41 = 0;
  tmp___42 = 0;
  tmp___43 = 0;
  hold_dpt = 0;
  a = 0;
  tmp___46 = 0;
  pdpm = 0;
  sub = 0;
  scope = 0;
  tmp___47 = 0;
  a___0 = 0;
  tmp___48 = 0;
  dcse = 0;
  found_self_or_parent = 0;
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
  if ((int )typed_name->type == 4) {
    dpi->templates = dpt.next;
  }
  while (1) {
    while_53_continue:  ;
    if (! (i > 0U)) {
      goto while_53_break;
    }
    i --;
    if (! adpm[i].printed) {
      {


      }
    }
  }
  while_53_break:  ;
  dpi->modifiers = hold_modifiers;
  goto __dyc_dummy_label;
  switch_50_4:  
  hold_current = dpi->current_template;
  dpi->current_template = (struct demangle_component  const  *)dc;
  hold_dpm = dpi->modifiers;
  dpi->modifiers = (struct d_print_mod *)((void *)0);
  dcl = dc->u.s_binary.left;
  if ((options & (1 << 2)) != 0) {
    if ((int )dcl->type == 0) {
      if (dcl->u.s_name.len == 6) {
        if (0) {
          if (0) {
            {
            tmp___41 = __dyc_funcallvar_4;
            __s1_len___0 = (unsigned long )tmp___41;
            tmp___42 = __dyc_funcallvar_5;
            __s2_len___0 = (unsigned long )tmp___42;
            }
            if (! ((unsigned long )((void const   *)(dcl->u.s_name.s + 1)) - (unsigned long )((void const   *)dcl->u.s_name.s) == 1UL)) {
              goto _L___2;
            } else {
              if (__s1_len___0 >= 4UL) {
                _L___2:  
                if (! ((unsigned long )((void const   *)("JArray" + 1)) - (unsigned long )((void const   *)"JArray") == 1UL)) {
                  tmp___43 = 1;
                } else {
                  if (__s2_len___0 >= 4UL) {
                    tmp___43 = 1;
                  } else {
                    tmp___43 = 0;
                  }
                }
              } else {
                tmp___43 = 0;
              }
            }
            if (tmp___43) {
              {
              tmp___35 = __dyc_funcallvar_6;
              }
            } else {
              {
              tmp___40 = __dyc_funcallvar_7;
              tmp___35 = tmp___40;
              }
            }
          } else {
            {
            tmp___40 = __dyc_funcallvar_8;
            tmp___35 = tmp___40;
            }
          }
          tmp___25 = tmp___35;
        } else {
          {
          tmp___25 = __dyc_funcallvar_9;
          }
        }
        if (tmp___25 == 0) {
          {


          }
        } else {
          goto _L___5;
        }
      } else {
        goto _L___5;
      }
    } else {
      goto _L___5;
    }
  } else {
    _L___5:  
    {

    tmp___2 = __dyc_funcallvar_10;
    }
    if ((int )tmp___2 == 60) {
      {

      }
    }
    {


    tmp___3 = __dyc_funcallvar_11;
    }
    if ((int )tmp___3 == 62) {
      {

      }
    }
    {

    }
  }
  dpi->modifiers = hold_dpm;
  dpi->current_template = hold_current;
  goto __dyc_dummy_label;
  switch_50_5:  
  if (dpi->is_lambda_arg) {
    {


    }
  } else {
    {
    tmp___46 = __dyc_funcallvar_12;
    a = tmp___46;
    }
    if (a) {
      if ((int )a->type == 47) {
        {
        a = __dyc_funcallvar_13;
        }
      }
    }
    if ((unsigned long )a == (unsigned long )((void *)0)) {
      {

      }
      goto __dyc_dummy_label;
    }
    {
    hold_dpt = dpi->templates;
    dpi->templates = hold_dpt->next;

    dpi->templates = hold_dpt;
    }
  }
  goto __dyc_dummy_label;


  goto __dyc_dummy_label;

  goto __dyc_dummy_label;


  goto __dyc_dummy_label;


  goto __dyc_dummy_label;


  goto __dyc_dummy_label;




  goto __dyc_dummy_label;


  goto __dyc_dummy_label;


  goto __dyc_dummy_label;


  goto __dyc_dummy_label;


  goto __dyc_dummy_label;


  goto __dyc_dummy_label;


  goto __dyc_dummy_label;


  goto __dyc_dummy_label;


  goto __dyc_dummy_label;


  goto __dyc_dummy_label;


  goto __dyc_dummy_label;




  goto __dyc_dummy_label;


  goto __dyc_dummy_label;


  goto __dyc_dummy_label;


  goto __dyc_dummy_label;

  goto __dyc_dummy_label;
  switch_50_25:  
  switch_50_26:  
  switch_50_27:  
  pdpm = dpi->modifiers;
  while (1) {
    while_54_continue:  ;
    if (! ((unsigned long )pdpm != (unsigned long )((void *)0))) {
      goto while_54_break;
    }
    if (! pdpm->printed) {
      if ((int )(pdpm->mod)->type != 25) {
        if ((int )(pdpm->mod)->type != 26) {
          if ((int )(pdpm->mod)->type != 27) {
            goto while_54_break;
          }
        }
      }
      if ((int )(pdpm->mod)->type == (int )dc->type) {
        {

        }
        goto __dyc_dummy_label;
      }
    }
    pdpm = pdpm->next;
  }
  while_54_break:  ;
  goto modifier;
  switch_50_35:  
  switch_50_36:  
  sub = dc->u.s_binary.left;
  if (! dpi->is_lambda_arg) {
    if ((int )sub->type == 5) {
      {
      tmp___47 = __dyc_funcallvar_14;
      scope = tmp___47;
      }
      if ((unsigned long )scope == (unsigned long )((void *)0)) {
        {

        tmp___48 = __dyc_funcallvar_15;
        }
        if (tmp___48) {
          goto __dyc_dummy_label;
        }
      } else {
        found_self_or_parent = 0;
        dcse = dpi->component_stack;
        {
        while (1) {
          while_55_continue:  ;
          if (! ((unsigned long )dcse != (unsigned long )((void *)0))) {
            goto while_55_break;
          }
          if ((unsigned long )dcse->dc == (unsigned long )sub) {
            found_self_or_parent = 1;
            goto while_55_break;
          } else {
            if ((unsigned long )dcse->dc == (unsigned long )dc) {
              if ((unsigned long )dcse != (unsigned long )dpi->component_stack) {
                found_self_or_parent = 1;
                goto while_55_break;
              }
            }
          }
          dcse = (struct d_component_stack  const  *)dcse->parent;
        }
        while_55_break:  ;
        }
        if (! found_self_or_parent) {
          saved_templates = dpi->templates;
          dpi->templates = scope->templates;
          need_template_restore = 1;
        }
      }
      {
      a___0 = __dyc_funcallvar_16;
      }
      if (a___0) {
        if ((int )a___0->type == 47) {
          {
          a___0 = __dyc_funcallvar_17;
          }
        }
      }
      if ((unsigned long )a___0 == (unsigned long )((void *)0)) {
        if (need_template_restore) {
          dpi->templates = saved_templates;
        }
        {

        }
        goto __dyc_dummy_label;
      }
      sub = a___0;
    }
  }
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
  __dyc_dummy_label:  ;
  __dyc_print_ptr__comp_46demangle_component(mod_inner);
  __dyc_print_ptr__comp_62d_print_template(saved_templates);
  __dyc_print_ptr__comp_46demangle_component(dcl);
  __dyc_printpre_byte(__s1_len___0);
  __dyc_printpre_byte(__s2_len___0);
  __dyc_printpre_byte(i___0);
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
