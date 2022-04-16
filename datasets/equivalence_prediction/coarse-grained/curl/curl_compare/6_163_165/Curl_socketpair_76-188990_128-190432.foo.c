#include "../../include/dycfoo.h"
#include "../../include/socketpair.i.hd.c.h"
void __dyc_foo(void) 
{ union __anonunion_a_74 a ;
  union __anonunion_a_74 a2 ;
  curl_socket_t listener ;
  curl_socklen_t addrlen ;
  struct pollfd pfd[1] ;
  int tmp ;
  int tmp___0 ;
  int tmp___1 ;
  int tmp___2 ;
  int tmp___3 ;
  int tmp___4 ;
  int tmp___5 ;
  int tmp___6 ;
  curl_socket_t *socks ;
  uint32_t __dyc_funcallvar_2 ;
  int __dyc_funcallvar_3 ;
  int __dyc_funcallvar_4 ;
  int __dyc_funcallvar_5 ;
  int __dyc_funcallvar_6 ;
  int __dyc_funcallvar_7 ;
  int __dyc_funcallvar_8 ;
  int __dyc_funcallvar_9 ;
  int __dyc_funcallvar_10 ;
  int __dyc_funcallvar_11 ;
  int __dyc_funcallvar_12 ;

  {
  a2 = __dyc_read_comp_100__anonunion_a_74();
  listener = __dyc_readpre_byte();
  addrlen = (curl_socklen_t )__dyc_readpre_byte();
  socks = (curl_socket_t *)__dyc_read_ptr__typdef_curl_socket_t();
  __dyc_funcallvar_2 = (uint32_t )__dyc_readpre_byte();
  __dyc_funcallvar_3 = __dyc_readpre_byte();
  __dyc_funcallvar_4 = __dyc_readpre_byte();
  __dyc_funcallvar_5 = __dyc_readpre_byte();
  __dyc_funcallvar_6 = __dyc_readpre_byte();
  __dyc_funcallvar_7 = __dyc_readpre_byte();
  __dyc_funcallvar_8 = __dyc_readpre_byte();
  __dyc_funcallvar_9 = __dyc_readpre_byte();
  __dyc_funcallvar_10 = __dyc_readpre_byte();
  __dyc_funcallvar_11 = __dyc_readpre_byte();
  __dyc_funcallvar_12 = __dyc_readpre_byte();
  memset(& a, 0, sizeof(union __anonunion_a_74 ));
  tmp = 0;
  tmp___0 = 0;
  tmp___1 = 0;
  tmp___2 = 0;
  tmp___3 = 0;
  tmp___4 = 0;
  tmp___5 = 0;
  tmp___6 = 0;
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
  tmp___3 = __dyc_funcallvar_8;
  if (tmp___3 == -1) {
    goto __dyc_dummy_label;
  }
  tmp___4 = __dyc_funcallvar_9;
  if (tmp___4 < 0) {
    goto __dyc_dummy_label;
  }
  pfd[0].fd = listener;
  pfd[0].events = (short)1;
  pfd[0].revents = (short)0;

  *(socks + 1) = __dyc_funcallvar_10;
  if (*(socks + 1) == -1) {
    goto __dyc_dummy_label;
  }
  addrlen = (unsigned int )sizeof(struct sockaddr_in );
  tmp___5 = __dyc_funcallvar_11;
  if (tmp___5 == -1) {
    goto __dyc_dummy_label;
  } else {
    if (addrlen < (curl_socklen_t )((int )sizeof(struct sockaddr_in ))) {
      goto __dyc_dummy_label;
    }
  }
  addrlen = (unsigned int )sizeof(struct sockaddr_in );
  tmp___6 = __dyc_funcallvar_12;
  if (tmp___6 == -1) {
    goto __dyc_dummy_label;
  } else {
    if (addrlen < (curl_socklen_t )((int )sizeof(struct sockaddr_in ))) {
      goto __dyc_dummy_label;
    }
  }
  if ((int )a.inaddr.sin_family != (int )a2.inaddr.sin_family) {
    goto __dyc_dummy_label;
  } else {
    if (a.inaddr.sin_addr.s_addr != a2.inaddr.sin_addr.s_addr) {
      goto __dyc_dummy_label;
    } else {
      if ((int )a.inaddr.sin_port != (int )a2.inaddr.sin_port) {
        goto __dyc_dummy_label;
      }
    }
  }

  goto __dyc_dummy_label;
  __dyc_dummy_label:  ;
  __dyc_print_comp_100__anonunion_a_74(a);
  __dyc_printpre_byte(addrlen);
}
}
