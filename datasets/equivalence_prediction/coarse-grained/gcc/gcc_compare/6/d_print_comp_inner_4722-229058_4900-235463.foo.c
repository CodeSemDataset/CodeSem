#include "../../include/dycfoo.h"
#include "../../include/cp-demangle.i.hd.c.h"
void __dyc_foo(void) 
{ struct demangle_component *local_name ;
  struct d_print_mod *hold_modifiers ;
  struct demangle_component *typed_name ;
  struct d_print_mod adpm[4] ;
  unsigned int i ;
  struct d_print_template dpt ;
  int tmp___0 ;
  int tmp___1 ;
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
  struct d_print_info *dpi ;
  int options ;
  struct demangle_component *dc ;
  int __dyc_funcallvar_2 ;
  int __dyc_funcallvar_3 ;
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

  {
  dpt = __dyc_read_comp_62d_print_template();
  dpi = __dyc_read_ptr__comp_68d_print_info();
  options = __dyc_readpre_byte();
  dc = __dyc_read_ptr__comp_46demangle_component();
  __dyc_funcallvar_2 = __dyc_readpre_byte();
  __dyc_funcallvar_3 = __dyc_readpre_byte();
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
  local_name = 0;
  hold_modifiers = 0;
  typed_name = 0;
  i = 0;
  tmp___0 = 0;
  tmp___1 = 0;
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
  if ((options & (1 << 2)) == 0) {
    {

    }
  } else {
    {

    }
  }
  local_name = dc->u.s_binary.right;
  if ((int )local_name->type == 71) {
    {



    local_name = local_name->u.s_unary_num.sub;
    }
  }

  goto __dyc_dummy_label;
  switch_50_3:  
  hold_modifiers = dpi->modifiers;
  dpi->modifiers = (struct d_print_mod *)0;
  i = 0U;
  typed_name = dc->u.s_binary.left;
  while (1) {
    while_51_continue:  ;
    if (! ((unsigned long )typed_name != (unsigned long )((void *)0))) {
      goto while_51_break;
    }
    if ((unsigned long )i >= sizeof(struct d_print_mod [4]) / sizeof(struct d_print_mod )) {
      {

      }
      goto __dyc_dummy_label;
    }
    {
    adpm[i].next = dpi->modifiers;
    dpi->modifiers = & adpm[i];
    adpm[i].mod = typed_name;
    adpm[i].printed = 0;
    adpm[i].templates = dpi->templates;
    i ++;
    tmp___0 = __dyc_funcallvar_2;
    }
    if (! tmp___0) {
      goto while_51_break;
    }
    typed_name = typed_name->u.s_binary.left;
  }
  while_51_break:  ;
  if ((unsigned long )typed_name == (unsigned long )((void *)0)) {
    {

    }
    goto __dyc_dummy_label;
  }
  if ((int )typed_name->type == 2) {
    typed_name = typed_name->u.s_binary.right;
    if ((int )typed_name->type == 71) {
      typed_name = typed_name->u.s_unary_num.sub;
    }
    {
    while (1) {
      while_52_continue:  ;
      if ((unsigned long )typed_name != (unsigned long )((void *)0)) {
        {
        tmp___1 = __dyc_funcallvar_3;
        }
        if (! tmp___1) {
          goto while_52_break;
        }
      } else {
        goto while_52_break;
      }
      if ((unsigned long )i >= sizeof(struct d_print_mod [4]) / sizeof(struct d_print_mod )) {
        {

        }
        goto __dyc_dummy_label;
      }
      adpm[i] = adpm[i - 1U];
      adpm[i].next = & adpm[i - 1U];
      dpi->modifiers = & adpm[i];
      adpm[i - 1U].mod = typed_name;
      adpm[i - 1U].printed = 0;
      adpm[i - 1U].templates = dpi->templates;
      i ++;
      typed_name = typed_name->u.s_binary.left;
    }
    while_52_break:  ;
    }
    if ((unsigned long )typed_name == (unsigned long )((void *)0)) {
      {

      }
      goto __dyc_dummy_label;
    }
  }
  if ((int )typed_name->type == 4) {
    dpt.next = dpi->templates;
    dpi->templates = & dpt;
    dpt.template_decl = (struct demangle_component  const  *)typed_name;
  }

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
  __dyc_dummy_label:  ;
  __dyc_print_ptr__comp_46demangle_component(local_name);
  __dyc_print_ptr__comp_63d_print_mod(hold_modifiers);
  __dyc_printpre_byte(i);
  __dyc_print_comp_62d_print_template(dpt);
  __dyc_print_ptr__comp_46demangle_component(dcl);
  __dyc_printpre_byte(__s1_len___0);
  __dyc_printpre_byte(__s2_len___0);
}
}
