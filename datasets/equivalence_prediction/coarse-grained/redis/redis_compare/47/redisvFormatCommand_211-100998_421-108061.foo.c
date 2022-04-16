#include "../../include/dycfoo.h"
#include "../../include/hiredis.i.hd.c.h"
void __dyc_foo(void) 
{ char const   *c ;
  char *cmd ;
  int pos ;
  sds curarg ;
  sds newarg ;
  int touched ;
  char **curargv ;
  char **newargv ;
  int argc ;
  int totlen ;
  int error_type ;
  int j ;
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
  void *tmp___25 ;
  int tmp___26 ;
  size_t tmp___27 ;
  size_t tmp___28 ;
  uint32_t tmp___29 ;
  void *tmp___30 ;
  size_t tmp___31 ;
  int tmp___32 ;
  size_t tmp___33 ;
  size_t tmp___34 ;
  int tmp___35 ;
  int tmp___36 ;
  char **target ;
  char const   *format ;
  sds __dyc_funcallvar_1 ;
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
  void *__dyc_funcallvar_21 ;
  size_t __dyc_funcallvar_22 ;
  size_t __dyc_funcallvar_23 ;
  uint32_t __dyc_funcallvar_24 ;
  void *__dyc_funcallvar_25 ;
  int __dyc_funcallvar_26 ;
  size_t __dyc_funcallvar_27 ;
  int __dyc_funcallvar_28 ;
  size_t __dyc_funcallvar_29 ;
  size_t __dyc_funcallvar_30 ;

  {
  size = (size_t )__dyc_readpre_byte();
  target = __dyc_read_ptr__ptr__char();
  format = (char const   *)__dyc_read_ptr__char();
  __dyc_funcallvar_1 = __dyc_read_ptr__char();
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
  __dyc_funcallvar_21 = __dyc_read_ptr__void();
  __dyc_funcallvar_22 = (size_t )__dyc_readpre_byte();
  __dyc_funcallvar_23 = (size_t )__dyc_readpre_byte();
  __dyc_funcallvar_24 = (uint32_t )__dyc_readpre_byte();
  __dyc_funcallvar_25 = __dyc_read_ptr__void();
  __dyc_funcallvar_26 = __dyc_readpre_byte();
  __dyc_funcallvar_27 = (size_t )__dyc_readpre_byte();
  __dyc_funcallvar_28 = __dyc_readpre_byte();
  __dyc_funcallvar_29 = (size_t )__dyc_readpre_byte();
  __dyc_funcallvar_30 = (size_t )__dyc_readpre_byte();
  c = 0;
  cmd = 0;
  pos = 0;
  curarg = 0;
  newarg = 0;
  touched = 0;
  curargv = 0;
  newargv = 0;
  argc = 0;
  totlen = 0;
  error_type = 0;
  j = 0;
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
  tmp___25 = 0;
  tmp___26 = 0;
  tmp___27 = 0;
  tmp___28 = 0;
  tmp___29 = 0;
  tmp___30 = 0;
  tmp___31 = 0;
  tmp___32 = 0;
  tmp___33 = 0;
  tmp___34 = 0;
  tmp___35 = 0;
  tmp___36 = 0;
  c = format;
  cmd = (char *)((void *)0);
  touched = 0;
  curargv = (char **)((void *)0);
  newargv = (char **)((void *)0);
  argc = 0;
  totlen = 0;
  error_type = 0;
  if ((unsigned long )target == (unsigned long )((void *)0)) {
    goto __dyc_dummy_label;
  }
  curarg = __dyc_funcallvar_1;
  if ((unsigned long )curarg == (unsigned long )((void *)0)) {
    goto __dyc_dummy_label;
  }
  while (1) {
    while_4_continue:  ;
    if (! ((int const   )*c != 0)) {
      goto while_4_break;
    }
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
                goto format_err;
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
  }
  while_4_break:  ;
  if (touched) {
    {
    tmp___25 = __dyc_funcallvar_21;
    newargv = (char **)tmp___25;
    }
    if ((unsigned long )newargv == (unsigned long )((void *)0)) {
      goto __dyc_dummy_label;
    }
    {
    curargv = newargv;
    tmp___26 = argc;
    argc ++;
    *(curargv + tmp___26) = curarg;
    tmp___27 = __dyc_funcallvar_22;
    tmp___28 = __dyc_funcallvar_23;
    totlen = (int )((size_t )totlen + tmp___28);
    }
  } else {
    {

    }
  }
  curarg = (char *)((void *)0);
  tmp___29 = __dyc_funcallvar_24;
  totlen = (int )((uint32_t )totlen + ((1U + tmp___29) + 2U));
  tmp___30 = __dyc_funcallvar_25;
  cmd = (char *)tmp___30;
  if ((unsigned long )cmd == (unsigned long )((void *)0)) {
    goto __dyc_dummy_label;
  }
  pos = __dyc_funcallvar_26;
  j = 0;
  while (1) {
    while_9_continue:  ;
    if (! (j < argc)) {
      goto while_9_break;
    }
    {
    tmp___31 = __dyc_funcallvar_27;
    tmp___32 = __dyc_funcallvar_28;
    pos += tmp___32;
    tmp___33 = __dyc_funcallvar_29;

    tmp___34 = __dyc_funcallvar_30;
    pos = (int )((size_t )pos + tmp___34);

    tmp___35 = pos;
    pos ++;
    *(cmd + tmp___35) = (char )'\r';
    tmp___36 = pos;
    pos ++;
    *(cmd + tmp___36) = (char )'\n';
    j ++;
    }
  }
  while_9_break:  ;
  if (! (pos == totlen)) {
    {

    }
  }
  *(cmd + pos) = (char )'\000';

  *target = cmd;
  goto __dyc_dummy_label;
  format_err: 
  error_type = -2;
  goto __dyc_dummy_label;
  __dyc_dummy_label:  ;
  __dyc_print_ptr__char(c);
  __dyc_print_ptr__char(cmd);
  __dyc_print_ptr__char(curarg);
  __dyc_print_ptr__char(newarg);
  __dyc_printpre_byte(touched);
  __dyc_print_ptr__ptr__char(curargv);
  __dyc_print_ptr__ptr__char(newargv);
  __dyc_printpre_byte(argc);
  __dyc_printpre_byte(totlen);
  __dyc_printpre_byte(error_type);
  __dyc_printpre_byte(tmp___1);
  __dyc_printpre_byte(_l);
  __dyc_printpre_byte(tmp___27);
  __dyc_printpre_byte(tmp___31);
  __dyc_printpre_byte(tmp___33);
}
}
