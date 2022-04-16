#include "../../include/dycfoo.h"
#include "../../include/cp-demangle.i.hd.c.h"
void __dyc_foo(void) 
{ char peek ;
  struct demangle_component *ret ;
  int can_subst ;
  char const   *tmp___14 ;
  struct demangle_component *tmp___15 ;
  int tmp___17 ;
  char const   *tmp___18 ;
  struct demangle_component *tmp___19 ;
  int tmp___20 ;
  char const   *tmp___22 ;
  struct d_info *di ;
  struct demangle_component *__dyc_funcallvar_39 ;
  struct demangle_component *__dyc_funcallvar_40 ;
  struct demangle_component *__dyc_funcallvar_41 ;
  struct demangle_component *__dyc_funcallvar_42 ;
  struct demangle_component *__dyc_funcallvar_43 ;
  struct demangle_component *__dyc_funcallvar_44 ;
  struct demangle_component *__dyc_funcallvar_45 ;
  struct demangle_component *__dyc_funcallvar_46 ;
  struct demangle_component *__dyc_funcallvar_47 ;
  struct demangle_component *__dyc_funcallvar_48 ;
  struct demangle_component *__dyc_funcallvar_49 ;
  struct demangle_component *__dyc_funcallvar_50 ;
  struct demangle_component *__dyc_funcallvar_51 ;
  struct demangle_component *__dyc_funcallvar_52 ;
  struct demangle_component *__dyc_funcallvar_53 ;
  struct demangle_component *__dyc_funcallvar_54 ;
  struct demangle_component *__dyc_funcallvar_55 ;

  {
  di = __dyc_read_ptr__comp_60d_info();
  __dyc_funcallvar_39 = __dyc_read_ptr__comp_46demangle_component();
  __dyc_funcallvar_40 = __dyc_read_ptr__comp_46demangle_component();
  __dyc_funcallvar_41 = __dyc_read_ptr__comp_46demangle_component();
  __dyc_funcallvar_42 = __dyc_read_ptr__comp_46demangle_component();
  __dyc_funcallvar_43 = __dyc_read_ptr__comp_46demangle_component();
  __dyc_funcallvar_44 = __dyc_read_ptr__comp_46demangle_component();
  __dyc_funcallvar_45 = __dyc_read_ptr__comp_46demangle_component();
  __dyc_funcallvar_46 = __dyc_read_ptr__comp_46demangle_component();
  __dyc_funcallvar_47 = __dyc_read_ptr__comp_46demangle_component();
  __dyc_funcallvar_48 = __dyc_read_ptr__comp_46demangle_component();
  __dyc_funcallvar_49 = __dyc_read_ptr__comp_46demangle_component();
  __dyc_funcallvar_50 = __dyc_read_ptr__comp_46demangle_component();
  __dyc_funcallvar_51 = __dyc_read_ptr__comp_46demangle_component();
  __dyc_funcallvar_52 = __dyc_read_ptr__comp_46demangle_component();
  __dyc_funcallvar_53 = __dyc_read_ptr__comp_46demangle_component();
  __dyc_funcallvar_54 = __dyc_read_ptr__comp_46demangle_component();
  __dyc_funcallvar_55 = __dyc_read_ptr__comp_46demangle_component();
  peek = 0;
  ret = 0;
  can_subst = 0;
  tmp___14 = 0;
  tmp___15 = 0;
  tmp___17 = 0;
  tmp___18 = 0;
  tmp___19 = 0;
  tmp___20 = 0;
  tmp___22 = 0;
  if ((int const   )*(di->n) == 0) {
    peek = (char )'\000';
  } else {
    tmp___14 = di->n;
    (di->n) ++;
    peek = (char )*tmp___14;
  }
  if ((int )peek == 84) {
    goto switch_23_84;
  } else {
    if ((int )peek == 116) {
      goto switch_23_84;
    } else {
      if ((int )peek == 112) {
        goto switch_23_112;
      } else {
        if ((int )peek == 97) {
          goto switch_23_97;
        } else {
          if ((int )peek == 99) {
            goto switch_23_99;
          } else {
            if ((int )peek == 102) {
              goto switch_23_102;
            } else {
              if ((int )peek == 100) {
                goto switch_23_100;
              } else {
                if ((int )peek == 101) {
                  goto switch_23_101;
                } else {
                  if ((int )peek == 104) {
                    goto switch_23_104;
                  } else {
                    if ((int )peek == 117) {
                      goto switch_23_117;
                    } else {
                      if ((int )peek == 115) {
                        goto switch_23_115;
                      } else {
                        if ((int )peek == 105) {
                          goto switch_23_105;
                        } else {
                          if ((int )peek == 70) {
                            goto switch_23_70;
                          } else {
                            if ((int )peek == 118) {
                              goto switch_23_118;
                            } else {
                              if ((int )peek == 110) {
                                goto switch_23_110;
                              } else {
                                {
                                goto switch_23_default;
                                if (0) {
                                  switch_23_84:  
                                  switch_23_116:  
                                  {
                                  tmp___15 = __dyc_funcallvar_39;
                                  ret = __dyc_funcallvar_40;
                                  }
                                  if (ret) {
                                    if ((int const   )*(di->n) == 0) {
                                      tmp___17 = '\000';
                                    } else {
                                      tmp___18 = di->n;
                                      (di->n) ++;
                                      tmp___17 = (int )*tmp___18;
                                    }
                                    if (tmp___17 != 69) {
                                      ret = (struct demangle_component *)((void *)0);
                                    }
                                  }
                                  can_subst = 1;
                                  goto switch_23_break;
                                  switch_23_112:  
                                  {
                                  tmp___19 = __dyc_funcallvar_41;
                                  ret = __dyc_funcallvar_42;
                                  can_subst = 1;
                                  }
                                  goto switch_23_break;
                                  switch_23_97:  
                                  {
                                  ret = __dyc_funcallvar_43;
                                  }
                                  goto switch_23_break;
                                  switch_23_99:  
                                  {
                                  ret = __dyc_funcallvar_44;
                                  }
                                  goto switch_23_break;
                                  switch_23_102:  
                                  {
                                  ret = __dyc_funcallvar_45;
                                  di->expansion += (int )(ret->u.s_builtin.type)->len;
                                  }
                                  goto switch_23_break;
                                  switch_23_100:  
                                  {
                                  ret = __dyc_funcallvar_46;
                                  di->expansion += (int )(ret->u.s_builtin.type)->len;
                                  }
                                  goto switch_23_break;
                                  switch_23_101:  
                                  {
                                  ret = __dyc_funcallvar_47;
                                  di->expansion += (int )(ret->u.s_builtin.type)->len;
                                  }
                                  goto switch_23_break;
                                  switch_23_104:  
                                  {
                                  ret = __dyc_funcallvar_48;
                                  di->expansion += (int )(ret->u.s_builtin.type)->len;
                                  }
                                  goto switch_23_break;
                                  switch_23_117:  
                                  {
                                  ret = __dyc_funcallvar_49;
                                  di->expansion += (int )(ret->u.s_builtin.type)->len;
                                  }
                                  goto switch_23_break;
                                  switch_23_115:  
                                  {
                                  ret = __dyc_funcallvar_50;
                                  di->expansion += (int )(ret->u.s_builtin.type)->len;
                                  }
                                  goto switch_23_break;
                                  switch_23_105:  
                                  {
                                  ret = __dyc_funcallvar_51;
                                  di->expansion += (int )(ret->u.s_builtin.type)->len;
                                  }
                                  goto switch_23_break;
                                  switch_23_70:  
                                  {
                                  ret = __dyc_funcallvar_52;
                                  ret->type = 44;
                                  }
                                  if ((int const   )*(di->n) >= 48) {
                                    if ((int const   )*(di->n) <= 57) {
                                      tmp___20 = 1;
                                    } else {
                                      tmp___20 = 0;
                                    }
                                  } else {
                                    tmp___20 = 0;
                                  }
                                  ret->u.s_fixed.accum = (short )tmp___20;
                                  if (ret->u.s_fixed.accum) {
                                    {

                                    }
                                  }
                                  {
                                  ret->u.s_fixed.length = __dyc_funcallvar_53;
                                  }
                                  if ((unsigned long )ret->u.s_fixed.length == (unsigned long )((void *)0)) {
                                    goto __dyc_dummy_label;
                                  }
                                  {

                                  }
                                  if ((int const   )*(di->n) == 0) {
                                    peek = (char )'\000';
                                  } else {
                                    tmp___22 = di->n;
                                    (di->n) ++;
                                    peek = (char )*tmp___22;
                                  }
                                  ret->u.s_fixed.sat = (short )((int )peek == 115);
                                  goto switch_23_break;
                                  switch_23_118:  
                                  {
                                  ret = __dyc_funcallvar_54;
                                  can_subst = 1;
                                  }
                                  goto switch_23_break;
                                  switch_23_110:  
                                  {
                                  ret = __dyc_funcallvar_55;
                                  di->expansion += (int )(ret->u.s_builtin.type)->len;
                                  }
                                  goto switch_23_break;
                                  switch_23_default:  ;
                                  goto __dyc_dummy_label;
                                } else {
                                  switch_23_break:  ;
                                }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  goto __dyc_dummy_label;
  switch_22_default:  ;
  goto __dyc_dummy_label;
  __dyc_dummy_label:  ;
  __dyc_print_ptr__comp_46demangle_component(ret);
  __dyc_printpre_byte(can_subst);
  __dyc_print_ptr__comp_46demangle_component(tmp___15);
  __dyc_print_ptr__comp_46demangle_component(tmp___19);
}
}
