#include "../../include/dycfoo.h"
#include "../../include/argv.i.hd.c.h"
void __dyc_foo(void) 
{ int i ;
  char **original_argv ;
  unsigned int iteration_limit ;
  char const   *filename ;
  FILE *f ;
  long pos ;
  size_t len ;
  char *buffer ;
  char **file_argv ;
  size_t file_argc ;
  struct stat sb ;
  int __attribute__((__leaf__))  tmp ;
  int tmp___0 ;
  int tmp___1 ;
  void *tmp___2 ;
  size_t __attribute__((__artificial__))  tmp___3 ;
  int tmp___4 ;
  void *tmp___5 ;
  int tmp___6 ;
  void *tmp___7 ;
  int *argcp ;
  char ***argvp ;
  int __attribute__((__leaf__))  __dyc_funcallvar_1 ;
  FILE *__dyc_funcallvar_2 ;
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
  void *__dyc_funcallvar_13 ;

  {
  i = __dyc_readpre_byte();
  original_argv = __dyc_read_ptr__ptr__char();
  iteration_limit = (unsigned int )__dyc_readpre_byte();
  sb = __dyc_read_comp_44stat();
  argcp = __dyc_read_ptr__int();
  argvp = __dyc_read_ptr__ptr__ptr__char();
  __dyc_funcallvar_1 = (int __attribute__((__leaf__))  )__dyc_readpre_byte();
  __dyc_funcallvar_2 = __dyc_read_ptr__typdef_FILE();
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
  __dyc_funcallvar_13 = __dyc_read_ptr__void();
  filename = 0;
  f = 0;
  pos = 0;
  len = 0;
  buffer = 0;
  file_argv = 0;
  file_argc = 0;
  tmp = 0;
  tmp___0 = 0;
  tmp___1 = 0;
  tmp___2 = 0;
  tmp___3 = 0;
  tmp___4 = 0;
  tmp___5 = 0;
  tmp___6 = 0;
  tmp___7 = 0;
  filename = (char const   *)*(*argvp + i);
  if ((int const   )*(filename + 0) != 64) {
    goto __dyc_dummy_label;
  }
  iteration_limit --;
  if (iteration_limit == 0U) {
    {


    }
  }
  tmp = __dyc_funcallvar_1;
  if (tmp < (int __attribute__((__leaf__))  )0) {
    goto __dyc_dummy_label;
  }
  if ((sb.st_mode & 61440U) == 16384U) {
    {


    }
  }
  filename ++;
  f = __dyc_funcallvar_2;
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
  __dyc_print_ptr__char(filename);
  __dyc_print_ptr__char(buffer);
}
}
