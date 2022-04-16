#include "../../include/dycfoo.h"
#include "../../include/anet.i.hd.c.h"
void __dyc_foo(void) 
{ struct sockaddr_storage sa ;
  int tmp ;
  struct sockaddr_in *s ;
  unsigned short __v ;
  unsigned short __x ;
  struct sockaddr_in6 *s___0 ;
  unsigned short __v___0 ;
  unsigned short __x___0 ;
  char *ip ;
  size_t ip_len ;
  int *port ;

  {
  sa = __dyc_read_comp_21sockaddr_storage();
  tmp = __dyc_readpre_byte();
  __v = (unsigned short )__dyc_readpre_byte();
  __v___0 = (unsigned short )__dyc_readpre_byte();
  ip = __dyc_read_ptr__char();
  ip_len = (size_t )__dyc_readpre_byte();
  port = __dyc_read_ptr__int();
  s = 0;
  __x = 0;
  s___0 = 0;
  __x___0 = 0;
  if (tmp == -1) {
    goto error;
  }
  if (ip_len == 0UL) {
    goto error;
  }
  if ((int )sa.ss_family == 2) {
    s = (struct sockaddr_in *)(& sa);
    if (ip) {
      {

      }
    }
    if (port) {
      __x = s->sin_port;
      *port = (int )__v;
    }
  } else {
    if ((int )sa.ss_family == 10) {
      s___0 = (struct sockaddr_in6 *)(& sa);
      if (ip) {
        {

        }
      }
      if (port) {
        __x___0 = s___0->sin6_port;
        *port = (int )__v___0;
      }
    } else {
      if ((int )sa.ss_family == 1) {
        if (ip) {
          {

          }
        }
        if (port) {
          *port = 0;
        }
      } else {
        goto error;
      }
    }
  }
  goto __dyc_dummy_label;
  error: 
  if (ip) {
    if (ip_len >= 2UL) {
      *(ip + 0) = (char )'?';
      *(ip + 1) = (char )'\000';
    } else {
      if (ip_len == 1UL) {
        *(ip + 0) = (char )'\000';
      }
    }
  }
  __dyc_dummy_label:  ;
  __dyc_print_ptr__comp_33sockaddr_in(s);
  __dyc_printpre_byte(__x);
  __dyc_print_ptr__comp_34sockaddr_in6(s___0);
  __dyc_printpre_byte(__x___0);
}
}
