#include "../../include/dycfoo.h"
#include "../../include/socketpair.i.hd.c.h"
void __dyc_foo(void) 
{ curl_socklen_t addrlen ;
  int tmp___5 ;
  int tmp___6 ;
  curl_socket_t *socks ;
  int __dyc_funcallvar_10 ;
  int __dyc_funcallvar_11 ;
  int __dyc_funcallvar_12 ;

  {
  socks = (curl_socket_t *)__dyc_read_ptr__typdef_curl_socket_t();
  __dyc_funcallvar_10 = __dyc_readpre_byte();
  __dyc_funcallvar_11 = __dyc_readpre_byte();
  __dyc_funcallvar_12 = __dyc_readpre_byte();
  addrlen = 0;
  tmp___5 = 0;
  tmp___6 = 0;
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
  if (! (tmp___6 == -1)) {
    if (addrlen < (curl_socklen_t )((int )sizeof(struct sockaddr_in ))) {
      goto __dyc_dummy_label;
    }
  }
  __dyc_dummy_label:  ;
  __dyc_printpre_byte(addrlen);
}
}