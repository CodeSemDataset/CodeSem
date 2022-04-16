#include "../../include/dycfoo.h"
#include "../../include/cp-demangle.i.hd.c.h"
void __dyc_foo(void) 
{ struct demangle_component *ret ;
  char peek ;
  enum demangle_component_type comb_type ;
  struct demangle_component *dc ;
  char peek2 ;
  struct d_info *di ;
  struct demangle_component *__dyc_funcallvar_1 ;
  struct demangle_component *__dyc_funcallvar_2 ;
  struct demangle_component *__dyc_funcallvar_3 ;
  struct demangle_component *__dyc_funcallvar_4 ;
  struct demangle_component *__dyc_funcallvar_5 ;
  struct demangle_component *__dyc_funcallvar_6 ;
  struct demangle_component *__dyc_funcallvar_7 ;
  struct demangle_component *__dyc_funcallvar_8 ;
  struct demangle_component *__dyc_funcallvar_9 ;
  struct demangle_component *__dyc_funcallvar_10 ;
  struct demangle_component *__dyc_funcallvar_11 ;

  {
  ret = __dyc_read_ptr__comp_46demangle_component();
  di = __dyc_read_ptr__comp_60d_info();
  __dyc_funcallvar_1 = __dyc_read_ptr__comp_46demangle_component();
  __dyc_funcallvar_2 = __dyc_read_ptr__comp_46demangle_component();
  __dyc_funcallvar_3 = __dyc_read_ptr__comp_46demangle_component();
  __dyc_funcallvar_4 = __dyc_read_ptr__comp_46demangle_component();
  __dyc_funcallvar_5 = __dyc_read_ptr__comp_46demangle_component();
  __dyc_funcallvar_6 = __dyc_read_ptr__comp_46demangle_component();
  __dyc_funcallvar_7 = __dyc_read_ptr__comp_46demangle_component();
  __dyc_funcallvar_8 = __dyc_read_ptr__comp_46demangle_component();
  __dyc_funcallvar_9 = __dyc_read_ptr__comp_46demangle_component();
  __dyc_funcallvar_10 = __dyc_read_ptr__comp_46demangle_component();
  __dyc_funcallvar_11 = __dyc_read_ptr__comp_46demangle_component();
  peek = 0;
  comb_type = 0;
  dc = 0;
  peek2 = 0;
  peek = (char )*(di->n);
  if ((int )peek == 0) {
    goto __dyc_dummy_label;
  }
  comb_type = 1;
  if ((int )peek == 68) {
    peek2 = (char )*(di->n + 1);
    if ((int )peek2 == 84) {
      {
      dc = __dyc_funcallvar_1;
      }
    } else {
      if ((int )peek2 == 116) {
        {
        dc = __dyc_funcallvar_2;
        }
      } else {
        {
        dc = __dyc_funcallvar_3;
        }
      }
    }
  } else {
    if ((int )peek >= 48) {
      if ((int )peek <= 57) {
        {
        dc = __dyc_funcallvar_4;
        }
      } else {
        goto _L___0;
      }
    } else {
      _L___0:  
      if ((int )peek >= 97) {
        if ((int )peek <= 122) {
          {
          dc = __dyc_funcallvar_5;
          }
        } else {
          goto _L;
        }
      } else {
        _L:  
        if ((int )peek == 67) {
          {
          dc = __dyc_funcallvar_6;
          }
        } else {
          if ((int )peek == 85) {
            {
            dc = __dyc_funcallvar_7;
            }
          } else {
            if ((int )peek == 76) {
              {
              dc = __dyc_funcallvar_8;
              }
            } else {
              if ((int )peek == 83) {
                {
                dc = __dyc_funcallvar_9;
                }
              } else {
                if ((int )peek == 73) {
                  if ((unsigned long )ret == (unsigned long )((void *)0)) {
                    goto __dyc_dummy_label;
                  }
                  {
                  comb_type = 4;
                  dc = __dyc_funcallvar_10;
                  }
                } else {
                  if ((int )peek == 84) {
                    {
                    dc = __dyc_funcallvar_11;
                    }
                  } else {
                    if ((int )peek == 69) {
                      goto __dyc_dummy_label;
                    } else {
                      if ((int )peek == 77) {
                        if ((unsigned long )ret == (unsigned long )((void *)0)) {
                          goto __dyc_dummy_label;
                        }
                        (di->n) ++;
                        goto __dyc_dummy_label;
                      } else {
                        goto __dyc_dummy_label;
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
  __dyc_dummy_label:  ;
  __dyc_printpre_byte(comb_type);
  __dyc_print_ptr__comp_46demangle_component(dc);
}
}
