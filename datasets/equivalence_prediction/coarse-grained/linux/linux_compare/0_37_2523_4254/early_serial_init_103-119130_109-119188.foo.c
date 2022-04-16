#include "../../include/dycfoo.h"
#include "../../include/early_printk.i.hd.c.h"
void __dyc_foo(void) 
{ int early_serial_base ;
  int bases[2] ;
  unsigned int baud ;
  char *e ;
  unsigned int port ;
  unsigned long tmp ;
  int tmp___0 ;
  unsigned long tmp___1 ;
  int tmp___2 ;
  __kernel_size_t tmp___3 ;
  char *s ;
  int __dyc_funcallvar_1 ;
  int __dyc_funcallvar_2 ;
  unsigned long __dyc_funcallvar_3 ;
  unsigned long __dyc_funcallvar_4 ;
  __kernel_size_t __dyc_funcallvar_5 ;

  {
  e = __dyc_read_ptr__char();
  s = __dyc_read_ptr__char();
  __dyc_funcallvar_1 = __dyc_readpre_byte();
  __dyc_funcallvar_2 = __dyc_readpre_byte();
  __dyc_funcallvar_3 = (unsigned long )__dyc_readpre_byte();
  __dyc_funcallvar_4 = (unsigned long )__dyc_readpre_byte();
  __dyc_funcallvar_5 = (__kernel_size_t )__dyc_readpre_byte();
  early_serial_base = 0;
  baud = 0;
  port = 0;
  tmp = 0;
  tmp___0 = 0;
  tmp___1 = 0;
  tmp___2 = 0;
  tmp___3 = 0;
  baud = 9600U;
  if ((int )*s == 44) {
    s ++;
  }
  if (*s) {
    {
    tmp___2 = __dyc_funcallvar_1;
    }
    if (tmp___2) {
      {
      tmp___0 = __dyc_funcallvar_2;
      }
      if (! tmp___0) {
        s += 4;
      }
      {
      tmp___1 = __dyc_funcallvar_3;
      port = (unsigned int )tmp___1;
      }
      if (port > 1U) {
        port = 0U;
      } else {
        if ((unsigned long )s == (unsigned long )e) {
          port = 0U;
        }
      }
      early_serial_base = bases[port];
    } else {
      {
      tmp = __dyc_funcallvar_4;
      early_serial_base = (int )tmp;
      }
    }
    {
    tmp___3 = __dyc_funcallvar_5;
    s += tmp___3;
    }
    if ((int )*s == 44) {
      s ++;
    }
  }
  __dyc_dummy_label:  ;
  __dyc_printpre_byte(early_serial_base);
  __dyc_printpre_byte(baud);
  __dyc_print_ptr__char(s);
}
}
