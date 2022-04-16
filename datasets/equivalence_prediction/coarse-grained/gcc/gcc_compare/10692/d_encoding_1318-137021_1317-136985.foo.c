#include "../../include/dycfoo.h"
#include "../../include/cp-demangle.i.hd.c.h"
void __dyc_foo(void) 
{ char peek ;
  struct demangle_component *dc ;
  int tmp ;
  int tmp___0 ;
  struct demangle_component *ftype ;
  int tmp___1 ;
  struct d_info *di ;
  int top_level ;
  struct demangle_component *__dyc_funcallvar_1 ;
  struct demangle_component *__dyc_funcallvar_2 ;
  struct demangle_component *__dyc_funcallvar_3 ;
  int __dyc_funcallvar_4 ;
  int __dyc_funcallvar_5 ;
  int __dyc_funcallvar_6 ;
  struct demangle_component *__dyc_funcallvar_7 ;
  struct demangle_component *__dyc_funcallvar_8 ;

  {
  peek = (char )__dyc_readpre_byte();
  di = __dyc_read_ptr__comp_60d_info();
  top_level = __dyc_readpre_byte();
  __dyc_funcallvar_1 = __dyc_read_ptr__comp_46demangle_component();
  __dyc_funcallvar_2 = __dyc_read_ptr__comp_46demangle_component();
  __dyc_funcallvar_3 = __dyc_read_ptr__comp_46demangle_component();
  __dyc_funcallvar_4 = __dyc_readpre_byte();
  __dyc_funcallvar_5 = __dyc_readpre_byte();
  __dyc_funcallvar_6 = __dyc_readpre_byte();
  __dyc_funcallvar_7 = __dyc_read_ptr__comp_46demangle_component();
  __dyc_funcallvar_8 = __dyc_read_ptr__comp_46demangle_component();
  dc = 0;
  tmp = 0;
  tmp___0 = 0;
  ftype = 0;
  tmp___1 = 0;
  dc = __dyc_funcallvar_1;
  if ((int )peek == 84) {
    {
    dc = __dyc_funcallvar_2;
    }
  } else {
    {
    dc = __dyc_funcallvar_3;
    }
    if (! (! dc)) {
      if (top_level) {
        if ((di->options & 1) == 0) {
          {
          while (1) {
            while_5_continue:  ;
            {
            tmp = __dyc_funcallvar_4;
            }
            if (! tmp) {
              goto while_5_break;
            }
            dc = dc->u.s_binary.left;
          }
          while_5_break:  ;
          }
          if ((int )dc->type == 2) {
            {
            while (1) {
              while_6_continue:  ;
              if ((unsigned long )dc->u.s_binary.right != (unsigned long )((void *)0)) {
                {
                tmp___0 = __dyc_funcallvar_5;
                }
                if (! tmp___0) {
                  goto while_6_break;
                }
              } else {
                goto while_6_break;
              }
              dc->u.s_binary.right = (dc->u.s_binary.right)->u.s_binary.left;
            }
            while_6_break:  ;
            }
            if ((unsigned long )dc->u.s_binary.right == (unsigned long )((void *)0)) {
              dc = (struct demangle_component *)((void *)0);
            }
          }
        } else {
          goto _L;
        }
      } else {
        _L:  
        peek = (char )*(di->n);
        if ((int )peek != 0) {
          if ((int )peek != 69) {
            {
            tmp___1 = __dyc_funcallvar_6;
            ftype = __dyc_funcallvar_7;
            }
            if (ftype) {
              if (! top_level) {
                if ((int )dc->type == 2) {
                  if ((int )ftype->type == 41) {
                    ftype->u.s_binary.left = (struct demangle_component *)((void *)0);
                  }
                }
              }
              {
              dc = __dyc_funcallvar_8;
              }
            } else {
              dc = (struct demangle_component *)((void *)0);
            }
          }
        }
      }
    }
  }
  __dyc_dummy_label:  ;
  __dyc_print_ptr__comp_46demangle_component(dc);
  __dyc_printpre_byte(tmp___1);
}
}
