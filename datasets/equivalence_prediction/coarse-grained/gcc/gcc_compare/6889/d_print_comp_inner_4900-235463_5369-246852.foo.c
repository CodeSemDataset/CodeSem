#include "../../include/dycfoo.h"
#include "../../include/cp-demangle.i.hd.c.h"
void __dyc_foo(void) 
{ struct demangle_builtin_type_info  const  cplus_demangle_builtin_types[34] ;
  struct demangle_component *mod_inner ;
  struct d_print_template *saved_templates ;
  int need_template_restore ;
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
  struct d_print_info *dpi ;
  int options ;
  struct demangle_component *dc ;
  struct demangle_component *__dyc_funcallvar_12 ;
  struct demangle_component *__dyc_funcallvar_13 ;
  struct d_saved_scope *__dyc_funcallvar_14 ;
  int __dyc_funcallvar_15 ;
  struct demangle_component *__dyc_funcallvar_16 ;
  struct demangle_component *__dyc_funcallvar_17 ;

  {
  mod_inner = __dyc_read_ptr__comp_46demangle_component();
  saved_templates = __dyc_read_ptr__comp_62d_print_template();
  need_template_restore = __dyc_readpre_byte();
  dpi = __dyc_read_ptr__comp_68d_print_info();
  options = __dyc_readpre_byte();
  dc = __dyc_read_ptr__comp_46demangle_component();
  __dyc_funcallvar_12 = __dyc_read_ptr__comp_46demangle_component();
  __dyc_funcallvar_13 = __dyc_read_ptr__comp_46demangle_component();
  __dyc_funcallvar_14 = __dyc_read_ptr__comp_66d_saved_scope();
  __dyc_funcallvar_15 = __dyc_readpre_byte();
  __dyc_funcallvar_16 = __dyc_read_ptr__comp_46demangle_component();
  __dyc_funcallvar_17 = __dyc_read_ptr__comp_46demangle_component();
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
  __dyc_dummy_label:  ;
  __dyc_print_ptr__comp_46demangle_component(mod_inner);
  __dyc_print_ptr__comp_62d_print_template(saved_templates);
  __dyc_printpre_byte(i___0);
  __dyc_printpre_byte(len);
  __dyc_print_ptr__comp_46demangle_component(list);
}
}
