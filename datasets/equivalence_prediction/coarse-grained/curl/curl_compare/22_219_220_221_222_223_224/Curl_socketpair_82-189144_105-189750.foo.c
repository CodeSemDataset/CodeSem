#include "../../include/dycfoo.h"
#include "../../include/socketpair.i.hd.c.h"
void __dyc_foo(void) 
{ union __anonunion_a_74 a ;
  curl_socket_t listener ;
  curl_socklen_t addrlen ;
  struct pollfd pfd[1] ;
  int tmp ;
  int tmp___0 ;
  int tmp___1 ;
  int tmp___2 ;
  int tmp___3 ;
  int tmp___4 ;
  curl_socket_t *socks ;
  int __dyc_funcallvar_3 ;
  int __dyc_funcallvar_4 ;
  int __dyc_funcallvar_5 ;
  int __dyc_funcallvar_6 ;
  int __dyc_funcallvar_7 ;
  int __dyc_funcallvar_8 ;
  int __dyc_funcallvar_9 ;

  {
  listener = __dyc_readpre_byte();
  addrlen = (curl_socklen_t )__dyc_readpre_byte();
  socks = (curl_socket_t *)__dyc_read_ptr__typdef_curl_socket_t();
  __dyc_funcallvar_3 = __dyc_readpre_byte();
  __dyc_funcallvar_4 = __dyc_readpre_byte();
  __dyc_funcallvar_5 = __dyc_readpre_byte();
  __dyc_funcallvar_6 = __dyc_readpre_byte();
  __dyc_funcallvar_7 = __dyc_readpre_byte();
  __dyc_funcallvar_8 = __dyc_readpre_byte();
  __dyc_funcallvar_9 = __dyc_readpre_byte();
  memset(& a, 0, sizeof(union __anonunion_a_74 ));
  tmp = 0;
  tmp___0 = 0;
  tmp___1 = 0;
  tmp___2 = 0;
  tmp___3 = 0;
  tmp___4 = 0;
  a.inaddr.sin_port = (unsigned short)0;
  *(socks + 1) = -1;
  *(socks + 0) = *(socks + 1);
  tmp = __dyc_funcallvar_3;
  if (tmp == -1) {
    goto __dyc_dummy_label;
  }
  tmp___0 = __dyc_funcallvar_4;
  if (tmp___0 == -1) {
    goto __dyc_dummy_label;
  }
  tmp___1 = __dyc_funcallvar_5;
  if (tmp___1 == -1) {
    goto __dyc_dummy_label;
  } else {
    if (addrlen < (curl_socklen_t )((int )sizeof(struct sockaddr_in ))) {
      goto __dyc_dummy_label;
    }
  }
  tmp___2 = __dyc_funcallvar_6;
  if (tmp___2 == -1) {
    goto __dyc_dummy_label;
  }
  *(socks + 0) = __dyc_funcallvar_7;
  if (*(socks + 0) == -1) {
    goto __dyc_dummy_label;
  }
  tmp___3 = __dyc_funcallvar_8;
  if (tmp___3 == -1) {
    goto __dyc_dummy_label;
  }
  tmp___4 = __dyc_funcallvar_9;
  if (tmp___4 < 0) {
    goto __dyc_dummy_label;
  }
  pfd[0].fd = listener;
  __dyc_dummy_label:  ;
  __dyc_print_comp_100__anonunion_a_74(a);
}
}
