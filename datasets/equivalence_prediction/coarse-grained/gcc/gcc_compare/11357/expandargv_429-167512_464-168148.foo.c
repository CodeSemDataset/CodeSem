#include "../../include/dycfoo.h"
#include "../../include/argv.i.hd.c.h"
void __dyc_foo(void) 
{ char **original_argv ;
  FILE *f ;
  long pos ;
  size_t len ;
  char *buffer ;
  char **file_argv ;
  size_t file_argc ;
  int tmp___0 ;
  int tmp___1 ;
  void *tmp___2 ;
  size_t __attribute__((__artificial__))  tmp___3 ;
  int tmp___4 ;
  void *tmp___5 ;
  int tmp___6 ;
  char ***argvp ;
  int __dyc_funcallvar_3 ;
  long __dyc_funcallvar_4 ;
  int __dyc_funcallvar_5 ;
  void *__dyc_funcallvar_6 ;
  size_t __attribute__((__warn_unused_result__,
  __artificial__))  __dyc_funcallvar_7 ;
  int __dyc_funcallvar_8 ;
  int __dyc_funcallvar_9 ;
  void *__dyc_funcallvar_10 ;
  char **__dyc_funcallvar_11 ;
  char **__dyc_funcallvar_12 ;

  {
  original_argv = __dyc_read_ptr__ptr__char();
  f = __dyc_read_ptr__typdef_FILE();
  argvp = __dyc_read_ptr__ptr__ptr__char();
  __dyc_funcallvar_3 = __dyc_readpre_byte();
  __dyc_funcallvar_4 = (long )__dyc_readpre_byte();
  __dyc_funcallvar_5 = __dyc_readpre_byte();
  __dyc_funcallvar_6 = __dyc_read_ptr__void();
  __dyc_funcallvar_7 = (size_t __attribute__((__warn_unused_result__,
  __artificial__))  )__dyc_readpre_byte();
  __dyc_funcallvar_8 = __dyc_readpre_byte();
  __dyc_funcallvar_9 = __dyc_readpre_byte();
  __dyc_funcallvar_10 = __dyc_read_ptr__void();
  __dyc_funcallvar_11 = __dyc_read_ptr__ptr__char();
  __dyc_funcallvar_12 = __dyc_read_ptr__ptr__char();
  pos = 0;
  len = 0;
  buffer = 0;
  file_argv = 0;
  file_argc = 0;
  tmp___0 = 0;
  tmp___1 = 0;
  tmp___2 = 0;
  tmp___3 = 0;
  tmp___4 = 0;
  tmp___5 = 0;
  tmp___6 = 0;
  if (! f) {
    goto __dyc_dummy_label;
  }
  tmp___0 = __dyc_funcallvar_3;
  if (tmp___0 == -1) {
    goto __dyc_dummy_label;
  }
  pos = __dyc_funcallvar_4;
  if (pos == -1L) {
    goto __dyc_dummy_label;
  }
  tmp___1 = __dyc_funcallvar_5;
  if (tmp___1 == -1) {
    goto __dyc_dummy_label;
  }
  tmp___2 = __dyc_funcallvar_6;
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
      goto __dyc_dummy_label;
    }
    file_argc ++;
  }
  __dyc_dummy_label:  ;
  __dyc_print_ptr__char(buffer);
}
}
