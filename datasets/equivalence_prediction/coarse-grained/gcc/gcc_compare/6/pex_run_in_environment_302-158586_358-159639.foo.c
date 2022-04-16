#include "../../include/dycfoo.h"
#include "../../include/pex-common.i.hd.c.h"
void __dyc_foo(void) 
{ char const   *errmsg ;
  int in ;
  int out ;
  int errdes ;
  int p[2] ;
  int toclose ;
  pid_t pid ;
  int *tmp___5 ;
  int tmp___6 ;
  int *tmp___7 ;
  void *tmp___8 ;
  struct pex_obj *obj ;
  int flags ;
  char const   *errname ;
  int *err ;
  int __dyc_funcallvar_11 ;
  int *__dyc_funcallvar_12 ;
  int __dyc_funcallvar_13 ;
  int *__dyc_funcallvar_14 ;
  pid_t __dyc_funcallvar_15 ;
  void *__dyc_funcallvar_16 ;

  {
  in = __dyc_readpre_byte();
  out = __dyc_readpre_byte();
  obj = __dyc_read_ptr__comp_13pex_obj();
  flags = __dyc_readpre_byte();
  errname = (char const   *)__dyc_read_ptr__char();
  err = __dyc_read_ptr__int();
  __dyc_funcallvar_11 = __dyc_readpre_byte();
  __dyc_funcallvar_12 = __dyc_read_ptr__int();
  __dyc_funcallvar_13 = __dyc_readpre_byte();
  __dyc_funcallvar_14 = __dyc_read_ptr__int();
  __dyc_funcallvar_15 = __dyc_readpre_byte();
  __dyc_funcallvar_16 = __dyc_read_ptr__void();
  errmsg = 0;
  errdes = 0;
  toclose = 0;
  pid = 0;
  tmp___5 = 0;
  tmp___6 = 0;
  tmp___7 = 0;
  tmp___8 = 0;
  if ((unsigned long )errname == (unsigned long )((void *)0)) {
    if (flags & 64) {
      {
      tmp___6 = __dyc_funcallvar_11;
      }
      if (tmp___6 < 0) {
        {
        tmp___5 = __dyc_funcallvar_12;
        *err = *tmp___5;
        errmsg = "pipe";
        }
        goto error_exit;
      }
      errdes = p[1];
      obj->stderr_pipe = p[0];
    } else {
      errdes = 2;
    }
  } else {
    {
    errdes = __dyc_funcallvar_13;
    }
    if (errdes < 0) {
      {
      tmp___7 = __dyc_funcallvar_14;
      *err = *tmp___7;
      errmsg = "open error file";
      }
      goto error_exit;
    }
  }
  if ((obj->flags & 2) == 0) {
    toclose = -1;
  } else {
    toclose = obj->next_input;
  }
  pid = __dyc_funcallvar_15;
  if (pid < 0) {
    goto error_exit;
  }
  (obj->count) ++;
  tmp___8 = __dyc_funcallvar_16;
  obj->children = (pid_t *)tmp___8;
  *(obj->children + (obj->count - 1)) = pid;
  goto __dyc_dummy_label;
  error_exit: 
  if (in >= 0) {
    if (in != 0) {
      {

      }
    }
  }
  if (out >= 0) {
    if (out != 1) {
      {

      }
    }
  }
  __dyc_dummy_label:  ;
  __dyc_print_ptr__char(errmsg);
  __dyc_printpre_byte(errdes);
  __dyc_printpre_byte(toclose);
}
}
