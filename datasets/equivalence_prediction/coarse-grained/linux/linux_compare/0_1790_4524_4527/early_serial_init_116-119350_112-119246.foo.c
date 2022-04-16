#include "../../include/dycfoo.h"
#include "../../include/early_printk.i.hd.c.h"
void __dyc_foo(void) 
{ int early_serial_base ;
  int bases[2] ;
  char *e ;
  unsigned int port ;
  unsigned long tmp ;
  int tmp___0 ;
  unsigned long tmp___1 ;
  char *s ;
  unsigned long __dyc_funcallvar_3 ;
  unsigned long __dyc_funcallvar_4 ;

  {
  e = __dyc_read_ptr__char();
  tmp___0 = __dyc_readpre_byte();
  s = __dyc_read_ptr__char();
  __dyc_funcallvar_3 = (unsigned long )__dyc_readpre_byte();
  __dyc_funcallvar_4 = (unsigned long )__dyc_readpre_byte();
  early_serial_base = 0;
  port = 0;
  tmp = 0;
  tmp___1 = 0;
  if (! tmp___0) {
    s += 4;
  }
  tmp___1 = __dyc_funcallvar_3;
  port = (unsigned int )tmp___1;
  if (port > 1U) {
    port = 0U;
  } else {
    if ((unsigned long )s == (unsigned long )e) {
      port = 0U;
    }
  }
  early_serial_base = bases[port];
  tmp = __dyc_funcallvar_4;
  early_serial_base = (int )tmp;
  __dyc_dummy_label:  ;
  __dyc_printpre_byte(early_serial_base);
  __dyc_print_ptr__char(s);
}
}
