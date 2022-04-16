#include "../../include/dycfoo.h"
#include "../../include/window-customize.i.hd.c.h"
void __dyc_foo(void) 
{ struct screen *s ;
  u_int cy ;
  int idx ;
  struct options_entry *o ;
  struct options_entry *parent ;
  struct options *go ;
  struct options *wo ;
  struct options_table_entry  const  *oe ;
  struct grid_cell gc ;
  char const   **choice ;
  char const   *text ;
  char const   *space ;
  char const   *unit ;
  char *value ;
  char *expanded ;
  char *default_value ;
  char choices[256] ;
  struct format_tree *ft ;
  int tmp___0 ;
  int tmp___1 ;
  int tmp___2 ;
  int tmp___3 ;
  size_t __s1_len ;
  size_t __s2_len ;
  int tmp___13 ;
  int tmp___18 ;
  int tmp___19 ;
  int tmp___20 ;
  int tmp___21 ;
  int tmp___22 ;
  int tmp___23 ;
  size_t __s1_len___0 ;
  size_t __s2_len___0 ;
  int tmp___33 ;
  int tmp___38 ;
  int tmp___39 ;
  int tmp___40 ;
  int tmp___41 ;
  size_t tmp___42 ;
  int tmp___43 ;
  int tmp___44 ;
  long long tmp___45 ;
  int tmp___46 ;
  int tmp___47 ;
  int tmp___48 ;
  int tmp___49 ;
  int tmp___50 ;
  struct options *tmp___51 ;
  int tmp___52 ;
  struct options *tmp___53 ;
  struct window_customize_itemdata *item ;
  u_int sy ;
  struct options_table_entry  const  *__dyc_funcallvar_3 ;
  struct format_tree *__dyc_funcallvar_4 ;
  int __dyc_funcallvar_5 ;
  int __dyc_funcallvar_6 ;
  int __dyc_funcallvar_7 ;
  int __dyc_funcallvar_8 ;
  char *__dyc_funcallvar_9 ;
  char *__dyc_funcallvar_10 ;
  int __dyc_funcallvar_11 ;
  int __dyc_funcallvar_12 ;
  int __dyc_funcallvar_13 ;
  int __dyc_funcallvar_14 ;
  int __dyc_funcallvar_15 ;
  int __dyc_funcallvar_16 ;
  char *__dyc_funcallvar_17 ;
  int __dyc_funcallvar_18 ;
  int __dyc_funcallvar_19 ;
  int __dyc_funcallvar_20 ;
  int __dyc_funcallvar_21 ;
  int __dyc_funcallvar_22 ;
  int __dyc_funcallvar_23 ;
  size_t __dyc_funcallvar_24 ;
  int __dyc_funcallvar_25 ;
  int __dyc_funcallvar_26 ;
  long long __dyc_funcallvar_27 ;
  int __dyc_funcallvar_28 ;
  int __dyc_funcallvar_29 ;
  int __dyc_funcallvar_30 ;
  int __dyc_funcallvar_31 ;
  struct options *__dyc_funcallvar_32 ;
  struct options *__dyc_funcallvar_33 ;
  struct options *__dyc_funcallvar_34 ;
  struct options *__dyc_funcallvar_35 ;
  struct options_entry *__dyc_funcallvar_36 ;
  char *__dyc_funcallvar_37 ;
  int __dyc_funcallvar_38 ;
  struct options *__dyc_funcallvar_39 ;
  struct options_entry *__dyc_funcallvar_40 ;
  char *__dyc_funcallvar_41 ;
  int __dyc_funcallvar_42 ;

  {
  s = __dyc_read_ptr__comp_192screen();
  cy = (u_int )__dyc_readpre_byte();
  idx = __dyc_readpre_byte();
  o = (struct options_entry *)__dyc_read_ptr__comp_160options_entry();
  default_value = __dyc_read_ptr__char();
  item = __dyc_read_ptr__comp_274window_customize_itemdata();
  sy = (u_int )__dyc_readpre_byte();
  __dyc_funcallvar_3 = (struct options_table_entry  const  *)__dyc_read_ptr__comp_267options_table_entry();
  __dyc_funcallvar_4 = (struct format_tree *)__dyc_read_ptr__comp_153format_tree();
  __dyc_funcallvar_5 = __dyc_readpre_byte();
  __dyc_funcallvar_6 = __dyc_readpre_byte();
  __dyc_funcallvar_7 = __dyc_readpre_byte();
  __dyc_funcallvar_8 = __dyc_readpre_byte();
  __dyc_funcallvar_9 = __dyc_read_ptr__char();
  __dyc_funcallvar_10 = __dyc_read_ptr__char();
  __dyc_funcallvar_11 = __dyc_readpre_byte();
  __dyc_funcallvar_12 = __dyc_readpre_byte();
  __dyc_funcallvar_13 = __dyc_readpre_byte();
  __dyc_funcallvar_14 = __dyc_readpre_byte();
  __dyc_funcallvar_15 = __dyc_readpre_byte();
  __dyc_funcallvar_16 = __dyc_readpre_byte();
  __dyc_funcallvar_17 = __dyc_read_ptr__char();
  __dyc_funcallvar_18 = __dyc_readpre_byte();
  __dyc_funcallvar_19 = __dyc_readpre_byte();
  __dyc_funcallvar_20 = __dyc_readpre_byte();
  __dyc_funcallvar_21 = __dyc_readpre_byte();
  __dyc_funcallvar_22 = __dyc_readpre_byte();
  __dyc_funcallvar_23 = __dyc_readpre_byte();
  __dyc_funcallvar_24 = (size_t )__dyc_readpre_byte();
  __dyc_funcallvar_25 = __dyc_readpre_byte();
  __dyc_funcallvar_26 = __dyc_readpre_byte();
  __dyc_funcallvar_27 = (long long )__dyc_readpre_byte();
  __dyc_funcallvar_28 = __dyc_readpre_byte();
  __dyc_funcallvar_29 = __dyc_readpre_byte();
  __dyc_funcallvar_30 = __dyc_readpre_byte();
  __dyc_funcallvar_31 = __dyc_readpre_byte();
  __dyc_funcallvar_32 = (struct options *)__dyc_read_ptr__comp_158options();
  __dyc_funcallvar_33 = (struct options *)__dyc_read_ptr__comp_158options();
  __dyc_funcallvar_34 = (struct options *)__dyc_read_ptr__comp_158options();
  __dyc_funcallvar_35 = (struct options *)__dyc_read_ptr__comp_158options();
  __dyc_funcallvar_36 = (struct options_entry *)__dyc_read_ptr__comp_160options_entry();
  __dyc_funcallvar_37 = __dyc_read_ptr__char();
  __dyc_funcallvar_38 = __dyc_readpre_byte();
  __dyc_funcallvar_39 = (struct options *)__dyc_read_ptr__comp_158options();
  __dyc_funcallvar_40 = (struct options_entry *)__dyc_read_ptr__comp_160options_entry();
  __dyc_funcallvar_41 = __dyc_read_ptr__char();
  __dyc_funcallvar_42 = __dyc_readpre_byte();
  parent = 0;
  go = 0;
  wo = 0;
  oe = 0;
  memset(& gc, 0, sizeof(struct grid_cell ));
  choice = 0;
  text = 0;
  space = 0;
  unit = 0;
  value = 0;
  expanded = 0;
  ft = 0;
  tmp___0 = 0;
  tmp___1 = 0;
  tmp___2 = 0;
  tmp___3 = 0;
  __s1_len = 0;
  __s2_len = 0;
  tmp___13 = 0;
  tmp___18 = 0;
  tmp___19 = 0;
  tmp___20 = 0;
  tmp___21 = 0;
  tmp___22 = 0;
  tmp___23 = 0;
  __s1_len___0 = 0;
  __s2_len___0 = 0;
  tmp___33 = 0;
  tmp___38 = 0;
  tmp___39 = 0;
  tmp___40 = 0;
  tmp___41 = 0;
  tmp___42 = 0;
  tmp___43 = 0;
  tmp___44 = 0;
  tmp___45 = 0;
  tmp___46 = 0;
  tmp___47 = 0;
  tmp___48 = 0;
  tmp___49 = 0;
  tmp___50 = 0;
  tmp___51 = 0;
  tmp___52 = 0;
  tmp___53 = 0;
  if ((unsigned long )o == (unsigned long )((void *)0)) {
    goto __dyc_dummy_label;
  }
  oe = __dyc_funcallvar_3;
  if ((unsigned long )oe != (unsigned long )((void *)0)) {
    if ((unsigned long )oe->unit != (unsigned long )((void *)0)) {
      space = " ";
      unit = (char const   *)oe->unit;
    }
  }
  ft = __dyc_funcallvar_4;
  if ((unsigned long )oe == (unsigned long )((void *)0)) {
    text = "This is a user option.";
  } else {
    if ((unsigned long )oe->text == (unsigned long )((void *)0)) {
      text = "This option doesn\'t have a description.";
    } else {
      text = (char const   *)oe->text;
    }
  }
  tmp___0 = __dyc_funcallvar_5;
  if (! tmp___0) {
    goto __dyc_dummy_label;
  }

  if (s->cy >= (cy + sy) - 1U) {
    goto __dyc_dummy_label;
  }
  if ((unsigned long )oe == (unsigned long )((void *)0)) {
    text = "user";
  } else {
    if ((oe->scope & 12) == 12) {
      text = "window and pane";
    } else {
      if (oe->scope & 4) {
        text = "window";
      } else {
        if (oe->scope & 2) {
          text = "session";
        } else {
          text = "server";
        }
      }
    }
  }
  tmp___1 = __dyc_funcallvar_6;
  if (! tmp___1) {
    goto __dyc_dummy_label;
  }
  if ((unsigned long )oe != (unsigned long )((void *)0)) {
    if (oe->flags & 1) {
      if (idx != -1) {
        {
        tmp___2 = __dyc_funcallvar_7;
        }
        if (! tmp___2) {
          goto __dyc_dummy_label;
        }
      } else {
        {
        tmp___3 = __dyc_funcallvar_8;
        }
        if (! tmp___3) {
          goto __dyc_dummy_label;
        }
      }
      if (idx == -1) {
        goto __dyc_dummy_label;
      }
    }
  }

  if (s->cy >= (cy + sy) - 1U) {
    goto __dyc_dummy_label;
  }
  value = __dyc_funcallvar_9;
  if ((unsigned long )oe != (unsigned long )((void *)0)) {
    if (idx == -1) {
      {
      default_value = __dyc_funcallvar_10;
      }
      if (0) {
        {
        tmp___19 = __dyc_funcallvar_11;
        __s1_len = (unsigned long )tmp___19;
        tmp___20 = __dyc_funcallvar_12;
        __s2_len = (unsigned long )tmp___20;
        }
        if (! ((unsigned long )((void const   *)(default_value + 1)) - (unsigned long )((void const   *)default_value) == 1UL)) {
          goto _L___0;
        } else {
          if (__s1_len >= 4UL) {
            _L___0:  
            if (! ((unsigned long )((void const   *)(value + 1)) - (unsigned long )((void const   *)value) == 1UL)) {
              tmp___21 = 1;
            } else {
              if (__s2_len >= 4UL) {
                tmp___21 = 1;
              } else {
                tmp___21 = 0;
              }
            }
          } else {
            tmp___21 = 0;
          }
        }
        if (tmp___21) {
          {
          tmp___13 = __dyc_funcallvar_13;
          }
        } else {
          {
          tmp___18 = __dyc_funcallvar_14;
          tmp___13 = tmp___18;
          }
        }
      } else {
        {
        tmp___18 = __dyc_funcallvar_15;
        tmp___13 = tmp___18;
        }
      }
      if (tmp___13 == 0) {
        {

        default_value = (char *)((void *)0);
        }
      }
    }
  }
  tmp___22 = __dyc_funcallvar_16;
  if (! tmp___22) {
    goto __dyc_dummy_label;
  }
  if ((unsigned long )oe == (unsigned long )((void *)0)) {
    goto _L___3;
  } else {
    if ((int const   )oe->type == 0) {
      _L___3:  
      {
      expanded = __dyc_funcallvar_17;
      }
      if (0) {
        {
        tmp___39 = __dyc_funcallvar_18;
        __s1_len___0 = (unsigned long )tmp___39;
        tmp___40 = __dyc_funcallvar_19;
        __s2_len___0 = (unsigned long )tmp___40;
        }
        if (! ((unsigned long )((void const   *)(expanded + 1)) - (unsigned long )((void const   *)expanded) == 1UL)) {
          goto _L___2;
        } else {
          if (__s1_len___0 >= 4UL) {
            _L___2:  
            if (! ((unsigned long )((void const   *)(value + 1)) - (unsigned long )((void const   *)value) == 1UL)) {
              tmp___41 = 1;
            } else {
              if (__s2_len___0 >= 4UL) {
                tmp___41 = 1;
              } else {
                tmp___41 = 0;
              }
            }
          } else {
            tmp___41 = 0;
          }
        }
        if (tmp___41) {
          {
          tmp___33 = __dyc_funcallvar_20;
          }
        } else {
          {
          tmp___38 = __dyc_funcallvar_21;
          tmp___33 = tmp___38;
          }
        }
      } else {
        {
        tmp___38 = __dyc_funcallvar_22;
        tmp___33 = tmp___38;
        }
      }
      if (tmp___33 != 0) {
        {
        tmp___23 = __dyc_funcallvar_23;
        }
        if (! tmp___23) {
          goto __dyc_dummy_label;
        }
      }
      {

      }
    }
  }
  if ((unsigned long )oe != (unsigned long )((void *)0)) {
    if ((int const   )oe->type == 5) {
      choice = (char const   **)oe->choices;
      {
      while (1) {
        while_10_continue:  ;
        if (! ((unsigned long )*choice != (unsigned long )((void *)0))) {
          goto while_10_break;
        }
        {


        choice ++;
        }
      }
      while_10_break:  ;
      }
      {
      tmp___42 = __dyc_funcallvar_24;
      choices[tmp___42 - 2UL] = (char )'\000';
      tmp___43 = __dyc_funcallvar_25;
      }
      if (! tmp___43) {
        goto __dyc_dummy_label;
      }
    }
  }
  if ((unsigned long )oe != (unsigned long )((void *)0)) {
    if ((int const   )oe->type == 3) {
      {
      tmp___44 = __dyc_funcallvar_26;
      }
      if (! tmp___44) {
        goto __dyc_dummy_label;
      }
      {

      tmp___45 = __dyc_funcallvar_27;
      gc.fg = (int )tmp___45;
      tmp___46 = __dyc_funcallvar_28;
      }
      if (! tmp___46) {
        goto __dyc_dummy_label;
      }
    }
  }
  if ((unsigned long )oe != (unsigned long )((void *)0)) {
    if (oe->flags & 4) {
      {
      tmp___47 = __dyc_funcallvar_29;
      }
      if (! tmp___47) {
        goto __dyc_dummy_label;
      }
      {

      tmp___48 = __dyc_funcallvar_30;
      }
      if (! tmp___48) {
        goto __dyc_dummy_label;
      }
    }
  }
  if ((unsigned long )default_value != (unsigned long )((void *)0)) {
    {
    tmp___49 = __dyc_funcallvar_31;
    }
    if (! tmp___49) {
      goto __dyc_dummy_label;
    }
  }

  if (s->cy > (cy + sy) - 1U) {
    goto __dyc_dummy_label;
  }
  if ((unsigned long )oe != (unsigned long )((void *)0)) {
    if (oe->flags & 1) {
      wo = (struct options *)((void *)0);
      go = (struct options *)((void *)0);
    } else {
      goto _L___4;
    }
  } else {
    _L___4:  
    if ((int )item->scope == 7) {
      goto switch_11_7;
    } else {
      if ((int )item->scope == 6) {
        goto switch_11_6;
      } else {
        if ((int )item->scope == 4) {
          goto switch_11_6;
        } else {
          {
          goto switch_11_default;
          if (0) {
            switch_11_7:  
            {
            wo = __dyc_funcallvar_32;
            go = __dyc_funcallvar_33;
            }
            goto switch_11_break;
            switch_11_6:  
            switch_11_4:  
            {
            wo = (struct options *)((void *)0);
            go = __dyc_funcallvar_34;
            }
            goto switch_11_break;
            switch_11_default:  
            wo = (struct options *)((void *)0);
            go = (struct options *)((void *)0);
            goto switch_11_break;
          } else {
            switch_11_break:  ;
          }
          }
        }
      }
    }
  }
  if ((unsigned long )wo != (unsigned long )((void *)0)) {
    {
    tmp___51 = __dyc_funcallvar_35;
    }
    if ((unsigned long )tmp___51 != (unsigned long )wo) {
      {
      parent = __dyc_funcallvar_36;
      }
      if ((unsigned long )parent != (unsigned long )((void *)0)) {
        {
        value = __dyc_funcallvar_37;
        tmp___50 = __dyc_funcallvar_38;
        }
        if (! tmp___50) {
          goto __dyc_dummy_label;
        }
      }
    }
  }
  if ((unsigned long )go != (unsigned long )((void *)0)) {
    {
    tmp___53 = __dyc_funcallvar_39;
    }
    if ((unsigned long )tmp___53 != (unsigned long )go) {
      {
      parent = __dyc_funcallvar_40;
      }
      if ((unsigned long )parent != (unsigned long )((void *)0)) {
        {
        value = __dyc_funcallvar_41;
        tmp___52 = __dyc_funcallvar_42;
        }
        if (! tmp___52) {
          goto __dyc_dummy_label;
        }
      }
    }
  }
  __dyc_dummy_label:  ;
  __dyc_print_ptr__comp_158options(go);
  __dyc_print_comp_178grid_cell(gc);
  __dyc_print_ptr__char(text);
  __dyc_print_ptr__char(space);
  __dyc_print_ptr__char(unit);
  __dyc_print_ptr__char(value);
  __dyc_print_ptr__char(expanded);
  __dyc_print_ptr__char(default_value);
  __dyc_print_ptr__comp_153format_tree(ft);
  __dyc_printpre_byte(__s1_len);
  __dyc_printpre_byte(__s2_len);
  __dyc_printpre_byte(__s1_len___0);
  __dyc_printpre_byte(__s2_len___0);
}
}
