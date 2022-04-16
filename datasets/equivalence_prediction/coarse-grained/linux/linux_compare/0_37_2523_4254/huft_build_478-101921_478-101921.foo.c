#include "../../include/dycfoo.h"
#include "../../include/misc_64.i.hd.c.h"
void __dyc_foo(void) 
{ unsigned int *p ;
  struct huft r ;
  int tmp___5 ;
  unsigned int *tmp___6 ;
  unsigned int s ;
  ush const   *d ;
  ush const   *e ;

  {
  p = __dyc_read_ptr__int();
  s = (unsigned int )__dyc_readpre_byte();
  d = (ush const   *)__dyc_read_ptr__typdef_ush();
  e = (ush const   *)__dyc_read_ptr__typdef_ush();
  memset(& r, 0, sizeof(struct huft ));
  tmp___5 = 0;
  tmp___6 = 0;
  if (*p < s) {
    if (*p < 256U) {
      tmp___5 = 16;
    } else {
      tmp___5 = 15;
    }
    r.e = (unsigned char )tmp___5;
    r.v.n = (unsigned short )*p;
    p ++;
  } else {
    r.e = (unsigned char )*(e + (*p - s));
    tmp___6 = p;
    p ++;
    r.v.n = (unsigned short )*(d + (*tmp___6 - s));
  }
  __dyc_dummy_label:  ;
  __dyc_print_ptr__int(p);
  __dyc_print_comp_59huft(r);
}
}
