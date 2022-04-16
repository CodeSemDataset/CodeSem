#include "../../include/dycfoo.h"
#include "../../include/cplus-dem.i.hd.c.h"
void __dyc_foo(void) 
{ unsigned short const   _sch_istable[256] ;
  char const   * const  special[6][2] ;
  char const   *p ;
  char *d ;
  int k___0 ;
  size_t slen___0 ;
  size_t tmp___93 ;
  int tmp___115 ;
  size_t __s1_len___4 ;
  size_t __s2_len___4 ;
  int tmp___125 ;
  int tmp___130 ;
  int tmp___131 ;
  int tmp___132 ;
  int tmp___133 ;
  char *tmp___136 ;
  size_t __dyc_funcallvar_19 ;
  int __dyc_funcallvar_20 ;
  int __dyc_funcallvar_21 ;
  int __dyc_funcallvar_22 ;
  int __dyc_funcallvar_23 ;
  int __dyc_funcallvar_24 ;
  int __dyc_funcallvar_25 ;
  size_t __dyc_funcallvar_26 ;

  {
  p = (char const   *)__dyc_read_ptr__char();
  d = __dyc_read_ptr__char();
  __dyc_funcallvar_19 = (size_t )__dyc_readpre_byte();
  __dyc_funcallvar_20 = __dyc_readpre_byte();
  __dyc_funcallvar_21 = __dyc_readpre_byte();
  __dyc_funcallvar_22 = __dyc_readpre_byte();
  __dyc_funcallvar_23 = __dyc_readpre_byte();
  __dyc_funcallvar_24 = __dyc_readpre_byte();
  __dyc_funcallvar_25 = __dyc_readpre_byte();
  __dyc_funcallvar_26 = (size_t )__dyc_readpre_byte();
  k___0 = 0;
  slen___0 = 0;
  tmp___93 = 0;
  tmp___115 = 0;
  __s1_len___4 = 0;
  __s2_len___4 = 0;
  tmp___125 = 0;
  tmp___130 = 0;
  tmp___131 = 0;
  tmp___132 = 0;
  tmp___133 = 0;
  tmp___136 = 0;
  if ((int const   )_sch_istable[(int const   )*p & 255] & 4) {
    {
    while (1) {
      while_8_continue:  ;
      p ++;
      if (! ((int const   )_sch_istable[(int const   )*p & 255] & 4)) {
        if ((int const   )*(p + 0) == 95) {
          if (! ((int const   )_sch_istable[(int const   )*(p + 1) & 255] & 4)) {
            goto while_8_break;
          }
        } else {
          goto while_8_break;
        }
      }
    }
    while_8_break:  ;
    }
    if ((int const   )*p == 88) {
      p ++;
      {
      while (1) {
        while_9_continue:  ;
        if (! ((int const   )*(p + 0) == 110)) {
          if (! ((int const   )*(p + 0) == 98)) {
            goto while_9_break;
          }
        }
        p ++;
      }
      while_9_break:  ;
      }
    }
  } else {
    if ((int const   )*(p + 0) == 95) {
      if ((int const   )*(p + 1) != 95) {
        k___0 = 0;
        {
        while (1) {
          while_10_continue:  ;
          if (! ((unsigned long )special[k___0][0] != (unsigned long )((void *)0))) {
            goto while_10_break;
          }
          {
          tmp___93 = __dyc_funcallvar_19;
          slen___0 = tmp___93;
          }
          if (0) {
            if (0) {
              {
              tmp___131 = __dyc_funcallvar_20;
              __s1_len___4 = (unsigned long )tmp___131;
              tmp___132 = __dyc_funcallvar_21;
              __s2_len___4 = (unsigned long )tmp___132;
              }
              if (! ((unsigned long )((void const   *)(p + 1)) - (unsigned long )((void const   *)p) == 1UL)) {
                goto _L___16;
              } else {
                if (__s1_len___4 >= 4UL) {
                  _L___16:  
                  if (! ((unsigned long )((void const   *)(special[k___0][0] + 1)) - (unsigned long )((void const   *)special[k___0][0]) == 1UL)) {
                    tmp___133 = 1;
                  } else {
                    if (__s2_len___4 >= 4UL) {
                      tmp___133 = 1;
                    } else {
                      tmp___133 = 0;
                    }
                  }
                } else {
                  tmp___133 = 0;
                }
              }
              if (tmp___133) {
                {
                tmp___125 = __dyc_funcallvar_22;
                }
              } else {
                {
                tmp___130 = __dyc_funcallvar_23;
                tmp___125 = tmp___130;
                }
              }
            } else {
              {
              tmp___130 = __dyc_funcallvar_24;
              tmp___125 = tmp___130;
              }
            }
            tmp___115 = tmp___125;
          } else {
            {
            tmp___115 = __dyc_funcallvar_25;
            }
          }
          if (tmp___115 == 0) {
            {
            p += slen___0;
            slen___0 = __dyc_funcallvar_26;

            d += slen___0;
            }
            goto while_10_break;
          }
          k___0 ++;
        }
        while_10_break:  ;
        }
        if ((unsigned long )special[k___0][0] != (unsigned long )((void *)0)) {
          goto __dyc_dummy_label;
        } else {
          goto __dyc_dummy_label;
        }
      } else {
        tmp___136 = d;
        d ++;
        *tmp___136 = (char )'.';
        goto __dyc_dummy_label;
      }
    } else {
      tmp___136 = d;
      d ++;
      *tmp___136 = (char )'.';
      goto __dyc_dummy_label;
    }
  }
  if ((int const   )*(p + 1) == 66) {
    goto _L___17;
  } else {
    if ((int const   )*(p + 1) == 69) {
      _L___17:  
      p += 2;
      {
      while (1) {
        while_11_continue:  ;
        if (! ((int const   )_sch_istable[(int const   )*p & 255] & 4)) {
          goto while_11_break;
        }
        p ++;
      }
      while_11_break:  ;
      }
      if ((int const   )*(p + 0) == 115) {
        if ((int const   )*(p + 1) == 0) {
          goto __dyc_dummy_label;
        } else {
          goto __dyc_dummy_label;
        }
      } else {
        goto __dyc_dummy_label;
      }
    } else {
      goto __dyc_dummy_label;
    }
  }
  __dyc_dummy_label:  ;
  __dyc_print_ptr__char(p);
  __dyc_print_ptr__char(d);
  __dyc_printpre_byte(slen___0);
  __dyc_printpre_byte(__s1_len___4);
  __dyc_printpre_byte(__s2_len___4);
}
}
