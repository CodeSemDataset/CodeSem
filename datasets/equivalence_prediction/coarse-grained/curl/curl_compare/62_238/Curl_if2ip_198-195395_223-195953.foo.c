#include "../../include/dycfoo.h"
#include "../../include/if2ip.i.hd.c.h"
void __dyc_foo(void) 
{ struct ifreq req ;
  struct sockaddr_in *s ;
  curl_socket_t dummy ;
  size_t len ;
  char const   *r ;
  int tmp ;
  char *tmp___0 ;
  int af ;
  char const   *interf ;
  size_t __dyc_funcallvar_1 ;
  int __dyc_funcallvar_2 ;
  int __dyc_funcallvar_3 ;
  char *__dyc_funcallvar_4 ;

  {
  af = __dyc_readpre_byte();
  interf = (char const   *)__dyc_read_ptr__char();
  __dyc_funcallvar_1 = (size_t )__dyc_readpre_byte();
  __dyc_funcallvar_2 = __dyc_readpre_byte();
  __dyc_funcallvar_3 = __dyc_readpre_byte();
  __dyc_funcallvar_4 = __dyc_read_ptr__char();
  memset(& req, 0, sizeof(struct ifreq ));
  s = 0;
  dummy = 0;
  len = 0;
  r = 0;
  tmp = 0;
  tmp___0 = 0;
  if (! interf) {
    goto __dyc_dummy_label;
  } else {
    if (af != 2) {
      goto __dyc_dummy_label;
    }
  }
  len = __dyc_funcallvar_1;
  if (len >= sizeof(char [16])) {
    goto __dyc_dummy_label;
  }
  dummy = __dyc_funcallvar_2;
  if (-1 == dummy) {
    goto __dyc_dummy_label;
  }


  req.ifr_ifru.ifru_addr.sa_family = (unsigned short)2;
  tmp = __dyc_funcallvar_3;
  if (tmp < 0) {
    {

    }
    goto __dyc_dummy_label;
  }
  s = (struct sockaddr_in *)((void *)(& req.ifr_ifru.ifru_addr));

  tmp___0 = __dyc_funcallvar_4;
  r = (char const   *)tmp___0;
  __dyc_dummy_label:  ;
  __dyc_print_comp_97ifreq(req);
  __dyc_print_ptr__comp_80sockaddr_in(s);
  __dyc_print_ptr__char(r);
}
}
