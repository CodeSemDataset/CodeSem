#include "../../include/dycfoo.h"
#include "../../include/argv.i.hd.c.h"
void __dyc_foo(void) 
{ int i ;
  char **original_argv ;
  long pos ;
  size_t len ;
  char *buffer ;
  char **file_argv ;
  size_t file_argc ;
  void *tmp___2 ;
  size_t __attribute__((__artificial__))  tmp___3 ;
  int tmp___4 ;
  void *tmp___5 ;
  int tmp___6 ;
  void *tmp___7 ;
  int *argcp ;
  char ***argvp ;
  size_t __attribute__((__warn_unused_result__,
  __artificial__))  __dyc_funcallvar_7 ;
  int __dyc_funcallvar_8 ;
  int __dyc_funcallvar_9 ;
  void *__dyc_funcallvar_10 ;
  char **__dyc_funcallvar_11 ;
  char **__dyc_funcallvar_12 ;
  void *__dyc_funcallvar_13 ;

  {
  i = __dyc_readpre_byte();
  original_argv = __dyc_read_ptr__ptr__char();
  pos = (long )__dyc_readpre_byte();
  tmp___2 = __dyc_read_ptr__void();
  argcp = __dyc_read_ptr__int();
  argvp = __dyc_read_ptr__ptr__ptr__char();
  __dyc_funcallvar_7 = (size_t __attribute__((__warn_unused_result__,
  __artificial__))  )__dyc_readpre_byte();
  __dyc_funcallvar_8 = __dyc_readpre_byte();
  __dyc_funcallvar_9 = __dyc_readpre_byte();
  __dyc_funcallvar_10 = __dyc_read_ptr__void();
  __dyc_funcallvar_11 = __dyc_read_ptr__ptr__char();
  __dyc_funcallvar_12 = __dyc_read_ptr__ptr__char();
  __dyc_funcallvar_13 = __dyc_read_ptr__void();
  len = 0;
  buffer = 0;
  file_argv = 0;
  file_argc = 0;
  tmp___3 = 0;
  tmp___4 = 0;
  tmp___5 = 0;
  tmp___6 = 0;
  tmp___7 = 0;
  buffer = (char *)tmp___2;
  tmp___3 = __dyc_funcallvar_7;
  len = (unsigned long )tmp___3;
  if (len != (unsigned long )pos) {
    {
    tmp___4 = __dyc_funcallvar_8;
    }
    if (tmp___4) {
      goto __dyc_dummy_label;
    }
  }
  *(buffer + len) = (char )'\000';
  tmp___6 = __dyc_funcallvar_9;
  if (tmp___6) {
    {
    tmp___5 = __dyc_funcallvar_10;
    file_argv = (char **)tmp___5;
    *(file_argv + 0) = (char *)((void *)0);
    }
  } else {
    {
    file_argv = __dyc_funcallvar_11;
    }
  }
  if ((unsigned long )*argvp == (unsigned long )original_argv) {
    {
    *argvp = __dyc_funcallvar_12;
    }
  }
  file_argc = 0UL;
  while (1) {
    while_10_continue:  ;
    if (! *(file_argv + file_argc)) {
      goto while_10_break;
    }
    file_argc ++;
  }
  while_10_break:  ;

  tmp___7 = __dyc_funcallvar_13;
  *argvp = (char **)tmp___7;


  *argcp = (int )((size_t )*argcp + (file_argc - 1UL));


  i --;
  __dyc_dummy_label:  ;
  __dyc_printpre_byte(i);
  __dyc_print_ptr__char(buffer);
}
}