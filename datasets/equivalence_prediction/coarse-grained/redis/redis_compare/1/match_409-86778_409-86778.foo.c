#include "../../include/dycfoo.h"
#include "../../include/lstrlib.i.hd.c.h"
void __dyc_foo(void) 
{ char const   *tmp ;
  char const   *tmp___0 ;
  char const   *tmp___1 ;
  char const   *ep ;
  char previous ;
  int tmp___2 ;
  int tmp___3 ;
  unsigned short const   **tmp___4 ;
  char const   *tmp___5 ;
  char const   *ep___0 ;
  char const   *tmp___6 ;
  int m ;
  int tmp___7 ;
  int tmp___8 ;
  char const   *res ;
  char const   *tmp___9 ;
  char const   *tmp___11 ;
  char const   *tmp___12 ;
  MatchState *ms ;
  char const   *s ;
  char const   *p ;
  char const   *__dyc_funcallvar_1 ;
  char const   *__dyc_funcallvar_2 ;
  char const   *__dyc_funcallvar_3 ;
  char const   *__dyc_funcallvar_4 ;
  char const   *__dyc_funcallvar_5 ;
  int __dyc_funcallvar_6 ;
  int __dyc_funcallvar_7 ;
  unsigned short const   **__dyc_funcallvar_8 ;
  char const   *__dyc_funcallvar_9 ;
  char const   *__dyc_funcallvar_10 ;
  int __dyc_funcallvar_11 ;
  char const   *__dyc_funcallvar_12 ;
  char const   *__dyc_funcallvar_13 ;
  char const   *__dyc_funcallvar_14 ;
  char const   *__dyc_funcallvar_15 ;

  {
  ms = __dyc_read_ptr__typdef_MatchState();
  s = (char const   *)__dyc_read_ptr__char();
  p = (char const   *)__dyc_read_ptr__char();
  __dyc_funcallvar_10 = (char const   *)__dyc_read_ptr__char();
  __dyc_funcallvar_11 = __dyc_readpre_byte();
  __dyc_funcallvar_12 = (char const   *)__dyc_read_ptr__char();
  __dyc_funcallvar_13 = (char const   *)__dyc_read_ptr__char();
  __dyc_funcallvar_14 = (char const   *)__dyc_read_ptr__char();
  __dyc_funcallvar_15 = (char const   *)__dyc_read_ptr__char();
  tmp = 0;
  tmp___0 = 0;
  tmp___1 = 0;
  ep = 0;
  previous = 0;
  tmp___2 = 0;
  tmp___3 = 0;
  tmp___4 = 0;
  tmp___5 = 0;
  ep___0 = 0;
  tmp___6 = 0;
  m = 0;
  tmp___7 = 0;
  tmp___8 = 0;
  res = 0;
  tmp___9 = 0;
  tmp___11 = 0;
  tmp___12 = 0;
  __dyc_funcallvar_1 = 0;
  __dyc_funcallvar_2 = 0;
  __dyc_funcallvar_3 = 0;
  __dyc_funcallvar_4 = 0;
  __dyc_funcallvar_5 = 0;
  __dyc_funcallvar_6 = 0;
  __dyc_funcallvar_7 = 0;
  __dyc_funcallvar_8 = 0;
  __dyc_funcallvar_9 = 0;
  if ((int )*p == 36) {
    goto switch_16_36;
  } else {
    {
    goto switch_16_default;
    if (0) {
      switch_16_40:  
      if ((int const   )*(p + 1) == 41) {
        {
        tmp = __dyc_funcallvar_1;
        }
        goto __dyc_dummy_label;
      } else {
        {
        tmp___0 = __dyc_funcallvar_2;
        }
        goto __dyc_dummy_label;
      }
      switch_16_41:  
      {
      tmp___1 = __dyc_funcallvar_3;
      }
      goto __dyc_dummy_label;
      switch_16_37:  
      if ((int )*(p + 1) == 98) {
        goto switch_17_98;
      } else {
        if ((int )*(p + 1) == 102) {
          goto switch_17_102;
        } else {
          {
          goto switch_17_default;
          if (0) {
            switch_17_98:  
            {
            s = __dyc_funcallvar_4;
            }
            if ((unsigned long )s == (unsigned long )((void *)0)) {
              goto __dyc_dummy_label;
            }
            p += 4;
            goto __dyc_dummy_label;
            switch_17_102:  
            p += 2;
            if ((int const   )*p != 91) {
              {

              }
            }
            {
            ep = __dyc_funcallvar_5;
            }
            if ((unsigned long )s == (unsigned long )ms->src_init) {
              previous = (char )'\000';
            } else {
              previous = (char )*(s - 1);
            }
            {
            tmp___2 = __dyc_funcallvar_6;
            }
            if (tmp___2) {
              goto __dyc_dummy_label;
            } else {
              {
              tmp___3 = __dyc_funcallvar_7;
              }
              if (! tmp___3) {
                goto __dyc_dummy_label;
              }
            }
            p = ep;
            goto __dyc_dummy_label;
            switch_17_default:  
            {
            tmp___4 = __dyc_funcallvar_8;
            }
            if ((int const   )*(*tmp___4 + (int )((unsigned char )*(p + 1))) & 2048) {
              {
              s = __dyc_funcallvar_9;
              }
              if ((unsigned long )s == (unsigned long )((void *)0)) {
                goto __dyc_dummy_label;
              }
              p += 2;
              goto __dyc_dummy_label;
            }
            goto dflt;
          } else {
            switch_17_break:  ;
          }
          }
        }
      }
      switch_16_0:  
      goto __dyc_dummy_label;
      switch_16_36:  
      if ((int const   )*(p + 1) == 0) {
        if ((unsigned long )s == (unsigned long )ms->src_end) {
          tmp___5 = s;
        } else {
          tmp___5 = (char const   *)((void *)0);
        }
        goto __dyc_dummy_label;
      } else {
        goto dflt;
      }
      switch_16_default:  ;
      dflt: 
      {
      tmp___6 = __dyc_funcallvar_10;
      ep___0 = tmp___6;
      }
      if ((unsigned long )s < (unsigned long )ms->src_end) {
        {
        tmp___7 = __dyc_funcallvar_11;
        }
        if (tmp___7) {
          tmp___8 = 1;
        } else {
          tmp___8 = 0;
        }
      } else {
        tmp___8 = 0;
      }
      m = tmp___8;
      if ((int )*ep___0 == 63) {
        goto switch_18_63;
      } else {
        if ((int )*ep___0 == 42) {
          goto switch_18_42;
        } else {
          if ((int )*ep___0 == 43) {
            goto switch_18_43;
          } else {
            if ((int )*ep___0 == 45) {
              goto switch_18_45;
            } else {
              {
              goto switch_18_default;
              if (0) {
                switch_18_63:  
                if (m) {
                  {
                  res = __dyc_funcallvar_12;
                  }
                  if ((unsigned long )res != (unsigned long )((void *)0)) {
                    goto __dyc_dummy_label;
                  }
                }
                p = ep___0 + 1;
                goto __dyc_dummy_label;
                switch_18_42:  
                {
                tmp___9 = __dyc_funcallvar_13;
                }
                goto __dyc_dummy_label;
                switch_18_43:  
                if (m) {
                  {
                  tmp___11 = __dyc_funcallvar_14;
                  }
                } else {
                  tmp___11 = (char const   *)((void *)0);
                }
                goto __dyc_dummy_label;
                switch_18_45:  
                {
                tmp___12 = __dyc_funcallvar_15;
                }
                goto __dyc_dummy_label;
                switch_18_default:  ;
                if (! m) {
                  goto __dyc_dummy_label;
                }
                s ++;
                p = ep___0;
                goto __dyc_dummy_label;
              } else {
                switch_18_break:  ;
              }
              }
            }
          }
        }
      }
    } else {
      switch_16_break:  ;
    }
    }
  }
  __dyc_dummy_label:  ;
  __dyc_print_ptr__char(tmp___5);
  __dyc_printpre_byte(m);
  __dyc_print_ptr__char(tmp___9);
  __dyc_print_ptr__char(tmp___11);
  __dyc_print_ptr__char(tmp___12);
  __dyc_print_ptr__char(s);
  __dyc_print_ptr__char(p);
}
}
