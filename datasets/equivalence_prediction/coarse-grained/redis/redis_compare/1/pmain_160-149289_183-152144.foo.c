#include "../../include/dycfoo.h"
#include "../../include/luac.i.hd.c.h"
void __dyc_foo(void) 
{ struct _IO_FILE *stdout ;
  int listing ;
  int dumping ;
  char const   *output ;
  struct Smain *s ;
  void *tmp ;
  int argc ;
  char **argv ;
  Proto const   *f ;
  int i ;
  int tmp___0 ;
  char const   *filename ;
  char *tmp___19 ;
  size_t __s1_len___0 ;
  size_t __s2_len___0 ;
  int tmp___29 ;
  int tmp___34 ;
  int tmp___35 ;
  int tmp___36 ;
  int tmp___37 ;
  char const   *tmp___38 ;
  int tmp___39 ;
  FILE *D ;
  struct _IO_FILE *tmp___41 ;
  int tmp___42 ;
  int tmp___43 ;
  int __dyc_funcallvar_2 ;
  int __dyc_funcallvar_3 ;
  int __dyc_funcallvar_4 ;
  int __dyc_funcallvar_5 ;
  int __dyc_funcallvar_6 ;
  int __dyc_funcallvar_7 ;
  int __dyc_funcallvar_8 ;
  char const   *__dyc_funcallvar_9 ;
  Proto const   *__dyc_funcallvar_10 ;
  FILE *__dyc_funcallvar_11 ;
  int __dyc_funcallvar_12 ;
  int __dyc_funcallvar_13 ;

  {
  stdout = __dyc_read_ptr__comp_2_IO_FILE();
  listing = __dyc_readpre_byte();
  dumping = __dyc_readpre_byte();
  output = (char const   *)__dyc_read_ptr__char();
  tmp = __dyc_read_ptr__void();
  __dyc_funcallvar_2 = __dyc_readpre_byte();
  __dyc_funcallvar_3 = __dyc_readpre_byte();
  __dyc_funcallvar_4 = __dyc_readpre_byte();
  __dyc_funcallvar_5 = __dyc_readpre_byte();
  __dyc_funcallvar_6 = __dyc_readpre_byte();
  __dyc_funcallvar_7 = __dyc_readpre_byte();
  __dyc_funcallvar_8 = __dyc_readpre_byte();
  __dyc_funcallvar_9 = (char const   *)__dyc_read_ptr__char();
  __dyc_funcallvar_10 = (Proto const   *)__dyc_read_ptr__typdef_Proto();
  __dyc_funcallvar_11 = __dyc_read_ptr__typdef_FILE();
  __dyc_funcallvar_12 = __dyc_readpre_byte();
  __dyc_funcallvar_13 = __dyc_readpre_byte();
  s = 0;
  argc = 0;
  argv = 0;
  f = 0;
  i = 0;
  tmp___0 = 0;
  filename = 0;
  tmp___19 = 0;
  __s1_len___0 = 0;
  __s2_len___0 = 0;
  tmp___29 = 0;
  tmp___34 = 0;
  tmp___35 = 0;
  tmp___36 = 0;
  tmp___37 = 0;
  tmp___38 = 0;
  tmp___39 = 0;
  D = 0;
  tmp___41 = 0;
  tmp___42 = 0;
  tmp___43 = 0;
  s = (struct Smain *)tmp;
  argc = s->argc;
  argv = s->argv;
  tmp___0 = __dyc_funcallvar_2;
  if (! tmp___0) {
    {

    }
  }
  i = 0;
  while (1) {
    while_2_continue:  ;
    if (! (i < argc)) {
      goto while_2_break;
    }
    if (0) {
      {
      tmp___35 = __dyc_funcallvar_3;
      __s1_len___0 = (unsigned long )tmp___35;
      tmp___36 = __dyc_funcallvar_4;
      __s2_len___0 = (unsigned long )tmp___36;
      }
      if (! ((unsigned long )((void const   *)(*(argv + i) + 1)) - (unsigned long )((void const   *)*(argv + i)) == 1UL)) {
        goto _L___2;
      } else {
        if (__s1_len___0 >= 4UL) {
          _L___2:  
          if (! ((unsigned long )((void const   *)("-" + 1)) - (unsigned long )((void const   *)"-") == 1UL)) {
            tmp___37 = 1;
          } else {
            if (__s2_len___0 >= 4UL) {
              tmp___37 = 1;
            } else {
              tmp___37 = 0;
            }
          }
        } else {
          tmp___37 = 0;
        }
      }
      if (tmp___37) {
        {
        tmp___29 = __dyc_funcallvar_5;
        }
      } else {
        {
        tmp___34 = __dyc_funcallvar_6;
        tmp___29 = tmp___34;
        }
      }
    } else {
      {
      tmp___34 = __dyc_funcallvar_7;
      tmp___29 = tmp___34;
      }
    }
    if (tmp___29 == 0) {
      tmp___19 = (char *)((void *)0);
    } else {
      tmp___19 = *(argv + i);
    }
    {
    filename = (char const   *)tmp___19;
    tmp___39 = __dyc_funcallvar_8;
    }
    if (tmp___39 != 0) {
      {
      tmp___38 = __dyc_funcallvar_9;

      }
    }
    i ++;
  }
  while_2_break:  ;
  f = __dyc_funcallvar_10;
  if (listing) {
    {

    }
  }
  if (dumping) {
    if ((unsigned long )output == (unsigned long )((void *)0)) {
      tmp___41 = stdout;
    } else {
      {
      tmp___41 = __dyc_funcallvar_11;
      }
    }
    D = tmp___41;
    if ((unsigned long )D == (unsigned long )((void *)0)) {
      {

      }
    }
    {

    tmp___42 = __dyc_funcallvar_12;
    }
    if (tmp___42) {
      {

      }
    }
    {
    tmp___43 = __dyc_funcallvar_13;
    }
    if (tmp___43) {
      {

      }
    }
  }
  goto __dyc_dummy_label;
  __dyc_dummy_label:  ;
  __dyc_print_ptr__ptr__char(argv);
  __dyc_print_ptr__typdef_Proto(f);
  __dyc_print_ptr__char(filename);
  __dyc_printpre_byte(__s1_len___0);
  __dyc_printpre_byte(__s2_len___0);
  __dyc_print_ptr__char(tmp___38);
}
}
