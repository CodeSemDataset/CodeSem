#include "../../include/dycfoo.h"
#include "../../include/curl_threads.i.hd.c.h"
void __dyc_foo(void) 
{ pthread_t *t ;
  void *tmp ;
  struct Curl_actual_call *ac ;
  void *tmp___0 ;
  int tmp___1 ;
  unsigned int (*func)(void * ) ;
  void *arg ;
  void *__dyc_funcallvar_1 ;
  void *__dyc_funcallvar_2 ;
  int __dyc_funcallvar_3 ;

  {
  func = (unsigned int (*)(void * ))__dyc_read_ptr__fun_name_is_not_here();
  arg = __dyc_read_ptr__void();
  __dyc_funcallvar_1 = __dyc_read_ptr__void();
  __dyc_funcallvar_2 = __dyc_read_ptr__void();
  __dyc_funcallvar_3 = __dyc_readpre_byte();
  t = 0;
  tmp = 0;
  ac = 0;
  tmp___0 = 0;
  tmp___1 = 0;
  tmp = __dyc_funcallvar_1;
  t = (pthread_t *)tmp;
  tmp___0 = __dyc_funcallvar_2;
  ac = (struct Curl_actual_call *)tmp___0;
  if (ac) {
    if (! t) {
      goto __dyc_dummy_label;
    }
  } else {
    goto __dyc_dummy_label;
  }
  ac->func = func;
  ac->arg = arg;
  tmp___1 = __dyc_funcallvar_3;
  if (tmp___1 != 0) {
    goto __dyc_dummy_label;
  }
  goto __dyc_dummy_label;


  goto __dyc_dummy_label;
  __dyc_dummy_label:  ;
  __dyc_print_ptr__typdef_pthread_t(t);
}
}
