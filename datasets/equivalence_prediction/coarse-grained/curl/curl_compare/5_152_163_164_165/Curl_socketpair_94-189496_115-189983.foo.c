#include "../../include/dycfoo.h"
#include "../../include/socketpair.i.hd.c.h"
void __dyc_foo(void) 
{ curl_socket_t listener ;
  curl_socklen_t addrlen ;
  struct pollfd pfd[1] ;
  int tmp___2 ;
  int tmp___3 ;
  int tmp___4 ;
  int tmp___5 ;
  curl_socket_t *socks ;
  int __dyc_funcallvar_7 ;
  int __dyc_funcallvar_8 ;
  int __dyc_funcallvar_9 ;
  int __dyc_funcallvar_10 ;
  int __dyc_funcallvar_11 ;

  {
  listener = __dyc_readpre_byte();
  tmp___2 = __dyc_readpre_byte();
  socks = (curl_socket_t *)__dyc_read_ptr__typdef_curl_socket_t();
  __dyc_funcallvar_7 = __dyc_readpre_byte();
  __dyc_funcallvar_8 = __dyc_readpre_byte();
  __dyc_funcallvar_9 = __dyc_readpre_byte();
  __dyc_funcallvar_10 = __dyc_readpre_byte();
  __dyc_funcallvar_11 = __dyc_readpre_byte();
  addrlen = 0;
  tmp___3 = 0;
  tmp___4 = 0;
  tmp___5 = 0;
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
  if (! (tmp___5 == -1)) {
    if (addrlen < (curl_socklen_t )((int )sizeof(struct sockaddr_in ))) {
      goto __dyc_dummy_label;
    }
  }
  __dyc_dummy_label:  ;
  __dyc_printpre_byte(addrlen);
}
}