#include "../../include/dycfoo.h"
#include "../../include/inflate.i.hd.c.h"
void __dyc_foo(void) 
{ unsigned long s1 ;
  unsigned long s2 ;
  int k ;
  Byte const   *buf ;

  {
  s1 = (unsigned long )__dyc_readpre_byte();
  s2 = (unsigned long )__dyc_readpre_byte();
  k = __dyc_readpre_byte();
  buf = (Byte const   *)__dyc_read_ptr__typdef_Byte();

  k = 5552;
  while_1_continue:  ;
  if (! (k >= 16)) {
    goto __dyc_dummy_label;
  }
  s1 += (unsigned long )*(buf + 0);
  s2 += s1;
  s1 += (unsigned long )*(buf + 1);
  s2 += s1;
  s1 += (unsigned long )*(buf + 2);
  s2 += s1;
  s1 += (unsigned long )*(buf + 3);
  s2 += s1;
  s1 += (unsigned long )*(buf + 4);
  s2 += s1;
  s1 += (unsigned long )*(buf + 5);
  s2 += s1;
  s1 += (unsigned long )*(buf + 6);
  s2 += s1;
  s1 += (unsigned long )*(buf + 7);
  s2 += s1;
  s1 += (unsigned long )*(buf + 8);
  s2 += s1;
  s1 += (unsigned long )*(buf + 9);
  s2 += s1;
  s1 += (unsigned long )*(buf + 10);
  s2 += s1;
  s1 += (unsigned long )*(buf + 11);
  s2 += s1;
  s1 += (unsigned long )*(buf + 12);
  s2 += s1;
  s1 += (unsigned long )*(buf + 13);
  s2 += s1;
  s1 += (unsigned long )*(buf + 14);
  s2 += s1;
  s1 += (unsigned long )*(buf + 15);
  s2 += s1;
  buf += 16;
  k -= 16;
  __dyc_dummy_label:  ;
  __dyc_printpre_byte(s2);
  __dyc_printpre_byte(k);
  __dyc_print_ptr__typdef_Byte(buf);
}
}
