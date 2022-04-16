#include "../../include/dycfoo.h"
#include "../../include/cp-demangle.i.hd.c.h"
void __dyc_foo(void) 
{ struct d_print_mod *hold_dpm ;
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
  struct d_print_info *dpi ;
  int options ;
  int __dyc_funcallvar_4 ;
  int __dyc_funcallvar_5 ;
  int __dyc_funcallvar_6 ;
  int __dyc_funcallvar_7 ;
  int __dyc_funcallvar_8 ;
  int __dyc_funcallvar_9 ;
  char __dyc_funcallvar_10 ;
  char __dyc_funcallvar_11 ;

  {
  hold_dpm = __dyc_read_ptr__comp_63d_print_mod();
  dcl = __dyc_read_ptr__comp_46demangle_component();
  hold_current = (struct demangle_component  const  *)__dyc_read_ptr__comp_46demangle_component();
  dpi = __dyc_read_ptr__comp_68d_print_info();
  options = __dyc_readpre_byte();
  __dyc_funcallvar_4 = __dyc_readpre_byte();
  __dyc_funcallvar_5 = __dyc_readpre_byte();
  __dyc_funcallvar_6 = __dyc_readpre_byte();
  __dyc_funcallvar_7 = __dyc_readpre_byte();
  __dyc_funcallvar_8 = __dyc_readpre_byte();
  __dyc_funcallvar_9 = __dyc_readpre_byte();
  __dyc_funcallvar_10 = (char )__dyc_readpre_byte();
  __dyc_funcallvar_11 = (char )__dyc_readpre_byte();
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
  __dyc_dummy_label:  ;
  __dyc_printpre_byte(__s1_len___0);
  __dyc_printpre_byte(__s2_len___0);
}
}
