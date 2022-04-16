#include "../../include/dycfoo.h"
#include "../../include/hiredis.i.hd.c.h"
void __dyc_foo(void) 
{ char const   *c ;
  sds curarg ;
  sds newarg ;
  int touched ;
  char **curargv ;
  char **newargv ;
  int argc ;
  int totlen ;
  void *tmp ;
  int tmp___0 ;
  size_t tmp___1 ;
  size_t tmp___2 ;
  size_t size ;
  char _format[16] ;
  char const   *_p ;
  size_t _l ;
  char *tmp___4 ;
  unsigned short const   **tmp___5 ;
  unsigned short const   **tmp___6 ;
  char *tmp___9 ;
  char *tmp___12 ;
  char *tmp___15 ;
  char *tmp___18 ;
  char *tmp___21 ;
  char *tmp___24 ;
  void *__dyc_funcallvar_2 ;
  size_t __dyc_funcallvar_3 ;
  size_t __dyc_funcallvar_4 ;
  sds __dyc_funcallvar_5 ;
  sds __dyc_funcallvar_6 ;
  size_t __dyc_funcallvar_7 ;
  sds __dyc_funcallvar_8 ;
  sds __dyc_funcallvar_9 ;
  sds __dyc_funcallvar_10 ;
  char *__dyc_funcallvar_11 ;
  unsigned short const   **__dyc_funcallvar_12 ;
  unsigned short const   **__dyc_funcallvar_13 ;
  char *__dyc_funcallvar_14 ;
  char *__dyc_funcallvar_15 ;
  char *__dyc_funcallvar_16 ;
  char *__dyc_funcallvar_17 ;
  char *__dyc_funcallvar_18 ;
  char *__dyc_funcallvar_19 ;
  sds __dyc_funcallvar_20 ;

  {
  c = (char const   *)__dyc_read_ptr__char();
  curarg = __dyc_read_ptr__char();
  touched = __dyc_readpre_byte();
  argc = __dyc_readpre_byte();
  totlen = __dyc_readpre_byte();
  size = (size_t )__dyc_readpre_byte();
  __dyc_funcallvar_2 = __dyc_read_ptr__void();
  __dyc_funcallvar_3 = (size_t )__dyc_readpre_byte();
  __dyc_funcallvar_4 = (size_t )__dyc_readpre_byte();
  __dyc_funcallvar_5 = __dyc_read_ptr__char();
  __dyc_funcallvar_6 = __dyc_read_ptr__char();
  __dyc_funcallvar_7 = (size_t )__dyc_readpre_byte();
  __dyc_funcallvar_8 = __dyc_read_ptr__char();
  __dyc_funcallvar_9 = __dyc_read_ptr__char();
  __dyc_funcallvar_10 = __dyc_read_ptr__char();
  __dyc_funcallvar_11 = __dyc_read_ptr__char();
  __dyc_funcallvar_12 = (unsigned short const   **)__dyc_read_ptr__ptr__short();
  __dyc_funcallvar_13 = (unsigned short const   **)__dyc_read_ptr__ptr__short();
  __dyc_funcallvar_14 = __dyc_read_ptr__char();
  __dyc_funcallvar_15 = __dyc_read_ptr__char();
  __dyc_funcallvar_16 = __dyc_read_ptr__char();
  __dyc_funcallvar_17 = __dyc_read_ptr__char();
  __dyc_funcallvar_18 = __dyc_read_ptr__char();
  __dyc_funcallvar_19 = __dyc_read_ptr__char();
  __dyc_funcallvar_20 = __dyc_read_ptr__char();
  newarg = 0;
  curargv = 0;
  newargv = 0;
  tmp = 0;
  tmp___0 = 0;
  tmp___1 = 0;
  tmp___2 = 0;
  _p = 0;
  _l = 0;
  tmp___4 = 0;
  tmp___5 = 0;
  tmp___6 = 0;
  tmp___9 = 0;
  tmp___12 = 0;
  tmp___15 = 0;
  tmp___18 = 0;
  tmp___21 = 0;
  tmp___24 = 0;
  if ((int const   )*c != 37) {
    goto _L;
  } else {
    if ((int const   )*(c + 1) == 0) {
      _L:  
      if ((int const   )*c == 32) {
        if (touched) {
          {
          tmp = __dyc_funcallvar_2;
          newargv = (char **)tmp;
          }
          if ((unsigned long )newargv == (unsigned long )((void *)0)) {
            goto __dyc_dummy_label;
          }
          {
          curargv = newargv;
          tmp___0 = argc;
          argc ++;
          *(curargv + tmp___0) = curarg;
          tmp___1 = __dyc_funcallvar_3;
          tmp___2 = __dyc_funcallvar_4;
          totlen = (int )((size_t )totlen + tmp___2);
          curarg = __dyc_funcallvar_5;
          }
          if ((unsigned long )curarg == (unsigned long )((void *)0)) {
            goto __dyc_dummy_label;
          }
          touched = 0;
        }
      } else {
        {
        newarg = __dyc_funcallvar_6;
        }
        if ((unsigned long )newarg == (unsigned long )((void *)0)) {
          goto __dyc_dummy_label;
        }
        curarg = newarg;
        touched = 1;
      }
    } else {
      newarg = curarg;
      if ((int )*(c + 1) == 115) {
        goto switch_5_115;
      } else {
        if ((int )*(c + 1) == 98) {
          goto switch_5_98;
        } else {
          if ((int )*(c + 1) == 37) {
            goto switch_5_37;
          } else {
            {
            goto switch_5_default;
            if (0) {
              switch_5_115:  
              {

              size = __dyc_funcallvar_7;
              }
              if (size > 0UL) {
                {
                newarg = __dyc_funcallvar_8;
                }
              }
              goto switch_5_break;
              switch_5_98:  
              {


              }
              if (size > 0UL) {
                {
                newarg = __dyc_funcallvar_9;
                }
              }
              goto switch_5_break;
              switch_5_37:  
              {
              newarg = __dyc_funcallvar_10;
              }
              goto switch_5_break;
              switch_5_default:  
              _p = c + 1;
              _l = (size_t )0;
              {
              while (1) {
                while_6_continue:  ;
                if ((int const   )*_p != 0) {
                  {
                  tmp___4 = __dyc_funcallvar_11;
                  }
                  if (! ((unsigned long )tmp___4 != (unsigned long )((void *)0))) {
                    goto while_6_break;
                  }
                } else {
                  goto while_6_break;
                }
                _p ++;
              }
              while_6_break:  ;
              }
              {
              while (1) {
                while_7_continue:  ;
                if ((int const   )*_p != 0) {
                  {
                  tmp___5 = __dyc_funcallvar_12;
                  }
                  if (! ((int const   )*(*tmp___5 + (int )*_p) & 2048)) {
                    goto while_7_break;
                  }
                } else {
                  goto while_7_break;
                }
                _p ++;
              }
              while_7_break:  ;
              }
              if ((int const   )*_p == 46) {
                _p ++;
                {
                while (1) {
                  while_8_continue:  ;
                  if ((int const   )*_p != 0) {
                    {
                    tmp___6 = __dyc_funcallvar_13;
                    }
                    if (! ((int const   )*(*tmp___6 + (int )*_p) & 2048)) {
                      goto while_8_break;
                    }
                  } else {
                    goto while_8_break;
                  }
                  _p ++;
                }
                while_8_break:  ;
                }
              }
              {

              tmp___9 = __dyc_funcallvar_14;
              }
              if ((unsigned long )tmp___9 != (unsigned long )((void *)0)) {
                {

                }
                goto fmt_valid;
              }
              {
              tmp___12 = __dyc_funcallvar_15;
              }
              if ((unsigned long )tmp___12 != (unsigned long )((void *)0)) {
                {

                }
                goto fmt_valid;
              }
              if ((int const   )*(_p + 0) == 104) {
                if ((int const   )*(_p + 1) == 104) {
                  _p += 2;
                  if ((int const   )*_p != 0) {
                    {
                    tmp___15 = __dyc_funcallvar_16;
                    }
                    if ((unsigned long )tmp___15 != (unsigned long )((void *)0)) {
                      {

                      }
                      goto fmt_valid;
                    }
                  }
                  goto fmt_invalid;
                }
              }
              if ((int const   )*(_p + 0) == 104) {
                _p ++;
                if ((int const   )*_p != 0) {
                  {
                  tmp___18 = __dyc_funcallvar_17;
                  }
                  if ((unsigned long )tmp___18 != (unsigned long )((void *)0)) {
                    {

                    }
                    goto fmt_valid;
                  }
                }
                goto fmt_invalid;
              }
              if ((int const   )*(_p + 0) == 108) {
                if ((int const   )*(_p + 1) == 108) {
                  _p += 2;
                  if ((int const   )*_p != 0) {
                    {
                    tmp___21 = __dyc_funcallvar_18;
                    }
                    if ((unsigned long )tmp___21 != (unsigned long )((void *)0)) {
                      {

                      }
                      goto fmt_valid;
                    }
                  }
                  goto fmt_invalid;
                }
              }
              if ((int const   )*(_p + 0) == 108) {
                _p ++;
                if ((int const   )*_p != 0) {
                  {
                  tmp___24 = __dyc_funcallvar_19;
                  }
                  if ((unsigned long )tmp___24 != (unsigned long )((void *)0)) {
                    {

                    }
                    goto fmt_valid;
                  }
                }
                goto fmt_invalid;
              }
              fmt_invalid: 
              {

              }
              goto __dyc_dummy_label;
              fmt_valid: 
              _l = (unsigned long )((_p + 1) - c);
              if (_l < sizeof(char [16]) - 2UL) {
                {

                _format[_l] = (char )'\000';
                newarg = __dyc_funcallvar_20;
                c = _p - 1;
                }
              }
              {

              }
              goto switch_5_break;
            } else {
              switch_5_break:  ;
            }
            }
          }
        }
      }
      if ((unsigned long )newarg == (unsigned long )((void *)0)) {
        goto __dyc_dummy_label;
      }
      curarg = newarg;
      touched = 1;
      c ++;
    }
  }
  c ++;
  __dyc_dummy_label:  ;
  __dyc_print_ptr__char(c);
  __dyc_print_ptr__char(curarg);
  __dyc_print_ptr__char(newarg);
  __dyc_printpre_byte(touched);
  __dyc_printpre_byte(argc);
  __dyc_printpre_byte(totlen);
  __dyc_printpre_byte(tmp___1);
  __dyc_printpre_byte(_l);
}
}
