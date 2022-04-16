#include "../../include/dycfoo.h"
#include "../../include/socketpair.i.hd.c.h"
void __dyc_foo(void) 
{ union __anonunion_a_74 a ;
  union __anonunion_a_74 a2 ;
  curl_socket_t listener ;
  curl_socklen_t addrlen ;
  struct pollfd pfd[1] ;
  int tmp___5 ;
  int tmp___6 ;
  curl_socket_t *socks ;
  int __dyc_funcallvar_10 ;
  int __dyc_funcallvar_11 ;
  int __dyc_funcallvar_12 ;

  {
  a = __dyc_read_comp_100__anonunion_a_74();
  a2 = __dyc_read_comp_100__anonunion_a_74();
  listener = __dyc_readpre_byte();
  socks = (curl_socket_t *)__dyc_read_ptr__typdef_curl_socket_t();
  __dyc_funcallvar_10 = __dyc_readpre_byte();
  __dyc_funcallvar_11 = __dyc_readpre_byte();
  __dyc_funcallvar_12 = __dyc_readpre_byte();
  addrlen = 0;
  tmp___5 = 0;
  tmp___6 = 0;
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



  goto __dyc_dummy_label;
  __dyc_dummy_label:  ;
  __dyc_printpre_byte(addrlen);
}
}
