#include "../../include/dycfoo.h"
#include "../../include/ldebug.i.hd.c.h"
void __dyc_foo(void) 
{ int pc ;
  int last ;
  int a ;
  int b ;
  int c ;
  int __attribute__((__visibility__("hidden")))  tmp___2 ;
  Proto const   *pt ;
  int reg ;
  int __attribute__((__visibility__("hidden")))  __dyc_funcallvar_4 ;

  {
  pc = __dyc_readpre_byte();
  a = __dyc_readpre_byte();
  b = __dyc_readpre_byte();
  c = __dyc_readpre_byte();
  pt = (Proto const   *)__dyc_read_ptr__typdef_Proto();
  reg = __dyc_readpre_byte();
  __dyc_funcallvar_4 = (int __attribute__((__visibility__("hidden")))  )__dyc_readpre_byte();
  last = 0;
  tmp___2 = 0;
  switch_9_28:  
  switch_9_29:  
  if (b != 0) {
    if (! ((a + b) - 1 < (int )pt->maxstacksize)) {
      goto __dyc_dummy_label;
    }
  }
  c --;
  if (c == -1) {
    {
    tmp___2 = __dyc_funcallvar_4;
    }
    if (! tmp___2) {
      goto __dyc_dummy_label;
    }
  } else {
    if (c != 0) {
      if (! ((a + c) - 1 < (int )pt->maxstacksize)) {
        goto __dyc_dummy_label;
      }
    }
  }
  if (reg >= a) {
    last = pc;
  }
  goto __dyc_dummy_label;
  switch_9_30:  
  b --;
  if (b > 0) {
    if (! ((a + b) - 1 < (int )pt->maxstacksize)) {
      goto __dyc_dummy_label;
    }
  }
  goto __dyc_dummy_label;
  __dyc_dummy_label:  ;
  __dyc_printpre_byte(last);
}
}
