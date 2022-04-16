#include "../../include/dycfoo.h"
#include "../../include/cp-demangle.i.hd.c.h"
void __dyc_foo(void) 
{ enum __anonenum_type_40 type ;
  struct d_info di ;
  int tmp___20 ;
  size_t __s1_len___0 ;
  size_t __s2_len___0 ;
  int tmp___30 ;
  int tmp___35 ;
  int tmp___36 ;
  int tmp___37 ;
  int tmp___38 ;
  size_t tmp___41 ;
  struct demangle_component *comps ;
  unsigned long __lengthofcomps ;
  void *tmp___42 ;
  char const   *mangled ;
  int options ;
  int __dyc_funcallvar_1 ;
  int __dyc_funcallvar_2 ;
  int __dyc_funcallvar_3 ;
  int __dyc_funcallvar_4 ;
  int __dyc_funcallvar_5 ;
  int __dyc_funcallvar_6 ;
  size_t __dyc_funcallvar_7 ;
  void *__dyc_funcallvar_8 ;

  {
  di = __dyc_read_comp_60d_info();
  mangled = (char const   *)__dyc_read_ptr__char();
  options = __dyc_readpre_byte();
  __dyc_funcallvar_1 = __dyc_readpre_byte();
  __dyc_funcallvar_2 = __dyc_readpre_byte();
  __dyc_funcallvar_3 = __dyc_readpre_byte();
  __dyc_funcallvar_4 = __dyc_readpre_byte();
  __dyc_funcallvar_5 = __dyc_readpre_byte();
  __dyc_funcallvar_6 = __dyc_readpre_byte();
  __dyc_funcallvar_7 = (size_t )__dyc_readpre_byte();
  __dyc_funcallvar_8 = __dyc_read_ptr__void();
  type = 0;
  tmp___20 = 0;
  __s1_len___0 = 0;
  __s2_len___0 = 0;
  tmp___30 = 0;
  tmp___35 = 0;
  tmp___36 = 0;
  tmp___37 = 0;
  tmp___38 = 0;
  tmp___41 = 0;
  comps = 0;
  __lengthofcomps = 0;
  tmp___42 = 0;
  if ((int const   )*(mangled + 0) == 95) {
    if ((int const   )*(mangled + 1) == 90) {
      type = 1;
    } else {
      goto _L___8;
    }
  } else {
    _L___8:  
    if (0) {
      if (0) {
        {
        tmp___36 = __dyc_funcallvar_1;
        __s1_len___0 = (unsigned long )tmp___36;
        tmp___37 = __dyc_funcallvar_2;
        __s2_len___0 = (unsigned long )tmp___37;
        }
        if (! ((unsigned long )((void const   *)(mangled + 1)) - (unsigned long )((void const   *)mangled) == 1UL)) {
          goto _L___2;
        } else {
          if (__s1_len___0 >= 4UL) {
            _L___2:  
            if (! ((unsigned long )((void const   *)("_GLOBAL_" + 1)) - (unsigned long )((void const   *)"_GLOBAL_") == 1UL)) {
              tmp___38 = 1;
            } else {
              if (__s2_len___0 >= 4UL) {
                tmp___38 = 1;
              } else {
                tmp___38 = 0;
              }
            }
          } else {
            tmp___38 = 0;
          }
        }
        if (tmp___38) {
          {
          tmp___30 = __dyc_funcallvar_3;
          }
        } else {
          {
          tmp___35 = __dyc_funcallvar_4;
          tmp___30 = tmp___35;
          }
        }
      } else {
        {
        tmp___35 = __dyc_funcallvar_5;
        tmp___30 = tmp___35;
        }
      }
      tmp___20 = tmp___30;
    } else {
      {
      tmp___20 = __dyc_funcallvar_6;
      }
    }
    if (tmp___20 == 0) {
      if ((int const   )*(mangled + 8) == 46) {
        goto _L___7;
      } else {
        if ((int const   )*(mangled + 8) == 95) {
          goto _L___7;
        } else {
          if ((int const   )*(mangled + 8) == 36) {
            _L___7:  
            if ((int const   )*(mangled + 9) == 68) {
              goto _L___5;
            } else {
              if ((int const   )*(mangled + 9) == 73) {
                _L___5:  
                if ((int const   )*(mangled + 10) == 95) {
                  if ((int const   )*(mangled + 9) == 73) {
                    type = 2;
                  } else {
                    type = 3;
                  }
                } else {
                  goto _L___6;
                }
              } else {
                goto _L___6;
              }
            }
          } else {
            goto _L___6;
          }
        }
      }
    } else {
      _L___6:  
      if ((options & (1 << 4)) == 0) {
        goto __dyc_dummy_label;
      }
      type = 0;
    }
  }
  tmp___41 = __dyc_funcallvar_7;

  if ((options & (1 << 18)) == 0) {
    if ((unsigned long )di.num_comps > 2048UL) {
      goto __dyc_dummy_label;
    }
  }
  __lengthofcomps = (unsigned long )di.num_comps;
  tmp___42 = __dyc_funcallvar_8;
  comps = (struct demangle_component *)tmp___42;
  __dyc_dummy_label:  ;
  __dyc_printpre_byte(type);
  __dyc_printpre_byte(__s1_len___0);
  __dyc_printpre_byte(__s2_len___0);
  __dyc_printpre_byte(tmp___41);
  __dyc_print_ptr__comp_46demangle_component(comps);
  __dyc_printpre_byte(__lengthofcomps);
}
}
