#include "../../include/dycfoo.h"
#include "../../include/linenoise.i.hd.c.h"
void __dyc_foo(void) 
{ int history_len ;
  struct linenoiseState l ;
  char seq[3] ;
  int *tmp___3 ;
  int aux ;
  ssize_t tmp___4 ;
  ssize_t tmp___5 ;
  ssize_t tmp___6 ;
  int tmp___7 ;
  char *buf ;
  ssize_t __dyc_funcallvar_7 ;
  ssize_t __dyc_funcallvar_8 ;
  ssize_t __dyc_funcallvar_9 ;
  int __dyc_funcallvar_10 ;

  {
  history_len = __dyc_readpre_byte();
  l = __dyc_read_comp_43linenoiseState();
  tmp___3 = __dyc_read_ptr__int();
  buf = __dyc_read_ptr__char();
  __dyc_funcallvar_7 = (ssize_t )__dyc_readpre_byte();
  __dyc_funcallvar_8 = (ssize_t )__dyc_readpre_byte();
  __dyc_funcallvar_9 = (ssize_t )__dyc_readpre_byte();
  __dyc_funcallvar_10 = __dyc_readpre_byte();
  aux = 0;
  tmp___4 = 0;
  tmp___5 = 0;
  tmp___6 = 0;
  tmp___7 = 0;
  *tmp___3 = 11;
  goto __dyc_dummy_label;

  goto __dyc_dummy_label;
  switch_11_4:  
  if (l.len > 0UL) {
    {

    }
  } else {
    {
    history_len --;

    }
    goto __dyc_dummy_label;
  }
  goto __dyc_dummy_label;
  switch_11_20:  
  if (l.pos > 0UL) {
    if (l.pos < l.len) {
      aux = (int )*(buf + (l.pos - 1UL));
      *(buf + (l.pos - 1UL)) = *(buf + l.pos);
      *(buf + l.pos) = (char )aux;
      if (l.pos != l.len - 1UL) {
        (l.pos) ++;
      }
      {

      }
    }
  }
  goto __dyc_dummy_label;

  goto __dyc_dummy_label;

  goto __dyc_dummy_label;

  goto __dyc_dummy_label;

  goto __dyc_dummy_label;
  tmp___4 = __dyc_funcallvar_7;
  if (tmp___4 == -1L) {
    goto __dyc_dummy_label;
  }
  tmp___5 = __dyc_funcallvar_8;
  if (tmp___5 == -1L) {
    goto __dyc_dummy_label;
  }
  if ((int )seq[0] == 91) {
    if ((int )seq[1] >= 48) {
      if ((int )seq[1] <= 57) {
        {
        tmp___6 = __dyc_funcallvar_9;
        }
        if (tmp___6 == -1L) {
          goto __dyc_dummy_label;
        }
        if ((int )seq[2] == 126) {
          if ((int )seq[1] == 51) {
            goto switch_12_51;
          } else {
            if (0) {
              switch_12_51:  
              {

              }
              goto switch_12_break;
            } else {
              switch_12_break:  ;
            }
          }
        }
      } else {
        goto _L;
      }
    } else {
      _L:  
      if ((int )seq[1] == 65) {
        goto switch_13_65;
      } else {
        if ((int )seq[1] == 66) {
          goto switch_13_66;
        } else {
          if ((int )seq[1] == 67) {
            goto switch_13_67;
          } else {
            if ((int )seq[1] == 68) {
              goto switch_13_68;
            } else {
              if ((int )seq[1] == 72) {
                goto switch_13_72;
              } else {
                if ((int )seq[1] == 70) {
                  goto switch_13_70;
                } else {
                  if (0) {
                    switch_13_65:  
                    {

                    }
                    goto switch_13_break;
                    switch_13_66:  
                    {

                    }
                    goto switch_13_break;
                    switch_13_67:  
                    {

                    }
                    goto switch_13_break;
                    switch_13_68:  
                    {

                    }
                    goto switch_13_break;
                    switch_13_72:  
                    {

                    }
                    goto switch_13_break;
                    switch_13_70:  
                    {

                    }
                    goto switch_13_break;
                  } else {
                    switch_13_break:  ;
                  }
                }
              }
            }
          }
        }
      }
    }
  } else {
    if ((int )seq[0] == 79) {
      if ((int )seq[1] == 72) {
        goto switch_14_72;
      } else {
        if ((int )seq[1] == 70) {
          goto switch_14_70;
        } else {
          if (0) {
            switch_14_72:  
            {

            }
            goto switch_14_break;
            switch_14_70:  
            {

            }
            goto switch_14_break;
          } else {
            switch_14_break:  ;
          }
        }
      }
    }
  }
  goto __dyc_dummy_label;
  tmp___7 = __dyc_funcallvar_10;
  if (tmp___7) {
    goto __dyc_dummy_label;
  }
  goto __dyc_dummy_label;
  *(buf + 0) = (char )'\000';
  l.len = 0UL;
  l.pos = l.len;

  goto __dyc_dummy_label;
  *(buf + l.pos) = (char )'\000';
  __dyc_dummy_label:  ;
  __dyc_printpre_byte(history_len);
  __dyc_print_comp_43linenoiseState(l);
}
}
