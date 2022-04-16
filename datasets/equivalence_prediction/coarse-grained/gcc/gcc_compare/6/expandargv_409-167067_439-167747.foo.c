#include "../../include/dycfoo.h"
#include "../../include/argv.i.hd.c.h"
void __dyc_foo(void) 
{ int i ;
  unsigned int iteration_limit ;
  char const   *filename ;
  FILE *f ;
  long pos ;
  size_t len ;
  char *buffer ;
  struct stat sb ;
  int __attribute__((__leaf__))  tmp ;
  int tmp___0 ;
  int tmp___1 ;
  void *tmp___2 ;
  size_t __attribute__((__artificial__))  tmp___3 ;
  char ***argvp ;
  int __attribute__((__leaf__))  __dyc_funcallvar_1 ;
  FILE *__dyc_funcallvar_2 ;
  int __dyc_funcallvar_3 ;
  long __dyc_funcallvar_4 ;
  int __dyc_funcallvar_5 ;
  void *__dyc_funcallvar_6 ;
  size_t __attribute__((__warn_unused_result__,
  __artificial__))  __dyc_funcallvar_7 ;

  {
  i = __dyc_readpre_byte();
  iteration_limit = (unsigned int )__dyc_readpre_byte();
  sb = __dyc_read_comp_44stat();
  argvp = __dyc_read_ptr__ptr__ptr__char();
  __dyc_funcallvar_1 = (int __attribute__((__leaf__))  )__dyc_readpre_byte();
  __dyc_funcallvar_2 = __dyc_read_ptr__typdef_FILE();
  __dyc_funcallvar_3 = __dyc_readpre_byte();
  __dyc_funcallvar_4 = (long )__dyc_readpre_byte();
  __dyc_funcallvar_5 = __dyc_readpre_byte();
  __dyc_funcallvar_6 = __dyc_read_ptr__void();
  __dyc_funcallvar_7 = (size_t __attribute__((__warn_unused_result__,
  __artificial__))  )__dyc_readpre_byte();
  filename = 0;
  f = 0;
  pos = 0;
  len = 0;
  buffer = 0;
  tmp = 0;
  tmp___0 = 0;
  tmp___1 = 0;
  tmp___2 = 0;
  tmp___3 = 0;
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
  __dyc_dummy_label:  ;
  __dyc_print_ptr__char(filename);
  __dyc_printpre_byte(len);
  __dyc_print_ptr__char(buffer);
}
}
