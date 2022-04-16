#include "../../include/dycfoo.h"
#include "../../include/socketpair.i.hd.c.h"
void __dyc_foo(void) 
{ union __anonunion_a_74 a ;
  curl_socket_t listener ;
  curl_socklen_t addrlen ;
  int reuse ;
  int tmp ;
  int tmp___0 ;
  int tmp___1 ;
  int tmp___2 ;
  curl_socket_t *socks ;
  int __dyc_funcallvar_1 ;
  uint32_t __dyc_funcallvar_2 ;
  int __dyc_funcallvar_3 ;
  int __dyc_funcallvar_4 ;
  int __dyc_funcallvar_5 ;
  int __dyc_funcallvar_6 ;
  int __dyc_funcallvar_7 ;

  {
  socks = (curl_socket_t *)__dyc_read_ptr__typdef_curl_socket_t();
  __dyc_funcallvar_1 = __dyc_readpre_byte();
  __dyc_funcallvar_2 = (uint32_t )__dyc_readpre_byte();
  __dyc_funcallvar_3 = __dyc_readpre_byte();
  __dyc_funcallvar_4 = __dyc_readpre_byte();
  __dyc_funcallvar_5 = __dyc_readpre_byte();
  __dyc_funcallvar_6 = __dyc_readpre_byte();
  __dyc_funcallvar_7 = __dyc_readpre_byte();
  memset(& a, 0, sizeof(union __anonunion_a_74 ));
  listener = 0;
  addrlen = 0;
  reuse = 0;
  tmp = 0;
  tmp___0 = 0;
  tmp___1 = 0;
  tmp___2 = 0;
  addrlen = (curl_socklen_t )sizeof(struct sockaddr_in );
  reuse = 1;
  listener = __dyc_funcallvar_1;
  if (listener == -1) {
    goto __dyc_dummy_label;
  }

  a.inaddr.sin_family = (unsigned short)2;
  a.inaddr.sin_addr.s_addr = __dyc_funcallvar_2;
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
  __dyc_dummy_label:  ;
  __dyc_print_comp_100__anonunion_a_74(a);
  __dyc_printpre_byte(addrlen);
  __dyc_printpre_byte(reuse);
}
}
