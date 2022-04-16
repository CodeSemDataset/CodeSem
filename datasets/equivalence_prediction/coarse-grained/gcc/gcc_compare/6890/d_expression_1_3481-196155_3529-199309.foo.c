#include "../../include/dycfoo.h"
#include "../../include/cp-demangle.i.hd.c.h"
void __dyc_foo(void) 
{ char const   *code ;
  struct demangle_component *first ;
  struct demangle_component *second ;
  struct demangle_component *third ;
  size_t __s1_len___4 ;
  size_t __s2_len___4 ;
  int tmp___122 ;
  int tmp___127 ;
  int tmp___128 ;
  int tmp___129 ;
  int tmp___130 ;
  struct demangle_component *tmp___131 ;
  struct demangle_component *tmp___132 ;
  struct demangle_component *tmp___133 ;
  struct d_info *di ;
  int __dyc_funcallvar_65 ;
  int __dyc_funcallvar_66 ;
  int __dyc_funcallvar_67 ;
  int __dyc_funcallvar_68 ;
  int __dyc_funcallvar_69 ;
  struct demangle_component *__dyc_funcallvar_70 ;
  struct demangle_component *__dyc_funcallvar_71 ;
  struct demangle_component *__dyc_funcallvar_72 ;
  struct demangle_component *__dyc_funcallvar_73 ;
  struct demangle_component *__dyc_funcallvar_74 ;
  struct demangle_component *__dyc_funcallvar_75 ;
  struct demangle_component *__dyc_funcallvar_76 ;
  struct demangle_component *__dyc_funcallvar_77 ;
  struct demangle_component *__dyc_funcallvar_78 ;
  struct demangle_component *__dyc_funcallvar_79 ;
  struct demangle_component *__dyc_funcallvar_80 ;
  struct demangle_component *__dyc_funcallvar_81 ;
  struct demangle_component *__dyc_funcallvar_82 ;

  {
  code = (char const   *)__dyc_read_ptr__char();
  di = __dyc_read_ptr__comp_60d_info();
  __dyc_funcallvar_65 = __dyc_readpre_byte();
  __dyc_funcallvar_66 = __dyc_readpre_byte();
  __dyc_funcallvar_67 = __dyc_readpre_byte();
  __dyc_funcallvar_68 = __dyc_readpre_byte();
  __dyc_funcallvar_69 = __dyc_readpre_byte();
  __dyc_funcallvar_70 = __dyc_read_ptr__comp_46demangle_component();
  __dyc_funcallvar_71 = __dyc_read_ptr__comp_46demangle_component();
  __dyc_funcallvar_72 = __dyc_read_ptr__comp_46demangle_component();
  __dyc_funcallvar_73 = __dyc_read_ptr__comp_46demangle_component();
  __dyc_funcallvar_74 = __dyc_read_ptr__comp_46demangle_component();
  __dyc_funcallvar_75 = __dyc_read_ptr__comp_46demangle_component();
  __dyc_funcallvar_76 = __dyc_read_ptr__comp_46demangle_component();
  __dyc_funcallvar_77 = __dyc_read_ptr__comp_46demangle_component();
  __dyc_funcallvar_78 = __dyc_read_ptr__comp_46demangle_component();
  __dyc_funcallvar_79 = __dyc_read_ptr__comp_46demangle_component();
  __dyc_funcallvar_80 = __dyc_read_ptr__comp_46demangle_component();
  __dyc_funcallvar_81 = __dyc_read_ptr__comp_46demangle_component();
  __dyc_funcallvar_82 = __dyc_read_ptr__comp_46demangle_component();
  first = 0;
  second = 0;
  third = 0;
  __s1_len___4 = 0;
  __s2_len___4 = 0;
  tmp___122 = 0;
  tmp___127 = 0;
  tmp___128 = 0;
  tmp___129 = 0;
  tmp___130 = 0;
  tmp___131 = 0;
  tmp___132 = 0;
  tmp___133 = 0;
  switch_33_3:  
  if ((unsigned long )code == (unsigned long )((void *)0)) {
    goto __dyc_dummy_label;
  } else {
    if (0) {
      {
      tmp___128 = __dyc_funcallvar_65;
      __s1_len___4 = (unsigned long )tmp___128;
      tmp___129 = __dyc_funcallvar_66;
      __s2_len___4 = (unsigned long )tmp___129;
      }
      if (! ((unsigned long )((void const   *)(code + 1)) - (unsigned long )((void const   *)code) == 1UL)) {
        goto _L___14;
      } else {
        if (__s1_len___4 >= 4UL) {
          _L___14:  
          if (! ((unsigned long )((void const   *)("qu" + 1)) - (unsigned long )((void const   *)"qu") == 1UL)) {
            tmp___130 = 1;
          } else {
            if (__s2_len___4 >= 4UL) {
              tmp___130 = 1;
            } else {
              tmp___130 = 0;
            }
          }
        } else {
          tmp___130 = 0;
        }
      }
      if (tmp___130) {
        {
        tmp___122 = __dyc_funcallvar_67;
        }
      } else {
        {
        tmp___127 = __dyc_funcallvar_68;
        tmp___122 = tmp___127;
        }
      }
    } else {
      {
      tmp___127 = __dyc_funcallvar_69;
      tmp___122 = tmp___127;
      }
    }
    if (tmp___122) {
      if ((int const   )*(code + 0) == 102) {
        {
        first = __dyc_funcallvar_70;
        second = __dyc_funcallvar_71;
        third = __dyc_funcallvar_72;
        }
        if ((unsigned long )third == (unsigned long )((void *)0)) {
          goto __dyc_dummy_label;
        }
      } else {
        if ((int const   )*(code + 0) == 110) {
          if ((int const   )*(code + 1) != 119) {
            if ((int const   )*(code + 1) != 97) {
              goto __dyc_dummy_label;
            }
          }
          {
          first = __dyc_funcallvar_73;
          second = __dyc_funcallvar_74;
          }
          if ((int const   )*(di->n) == 69) {
            (di->n) ++;
            third = (struct demangle_component *)((void *)0);
          } else {
            if ((int const   )*(di->n) == 112) {
              if ((int const   )*(di->n + 1) == 105) {
                {
                di->n += 2;
                third = __dyc_funcallvar_75;
                }
              } else {
                goto _L___12;
              }
            } else {
              _L___12:  
              if ((int const   )*(di->n) == 105) {
                if ((int const   )*(di->n + 1) == 108) {
                  {
                  third = __dyc_funcallvar_76;
                  }
                } else {
                  goto __dyc_dummy_label;
                }
              } else {
                goto __dyc_dummy_label;
              }
            }
          }
        } else {
          goto __dyc_dummy_label;
        }
      }
    } else {
      {
      first = __dyc_funcallvar_77;
      second = __dyc_funcallvar_78;
      third = __dyc_funcallvar_79;
      }
      if ((unsigned long )third == (unsigned long )((void *)0)) {
        goto __dyc_dummy_label;
      }
    }
  }
  tmp___131 = __dyc_funcallvar_80;
  tmp___132 = __dyc_funcallvar_81;
  tmp___133 = __dyc_funcallvar_82;
  goto __dyc_dummy_label;
  __dyc_dummy_label:  ;
  __dyc_print_ptr__comp_46demangle_component(first);
  __dyc_print_ptr__comp_46demangle_component(second);
  __dyc_print_ptr__comp_46demangle_component(third);
  __dyc_printpre_byte(__s1_len___4);
  __dyc_printpre_byte(__s2_len___4);
  __dyc_print_ptr__comp_46demangle_component(tmp___131);
  __dyc_print_ptr__comp_46demangle_component(tmp___132);
  __dyc_print_ptr__comp_46demangle_component(tmp___133);
}
}
