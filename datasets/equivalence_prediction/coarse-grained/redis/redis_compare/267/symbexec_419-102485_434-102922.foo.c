#include "../../include/dycfoo.h"
#include "../../include/ldebug.i.hd.c.h"
void __dyc_foo(void) 
{ int pc ;
  int last ;
  int a ;
  int b ;
  int c ;
  int dest___0 ;
  int __attribute__((__visibility__("hidden")))  tmp___2 ;
  Proto const   *pt ;
  int lastpc ;
  int reg ;
  int __attribute__((__visibility__("hidden")))  __dyc_funcallvar_4 ;

  {
  pc = __dyc_readpre_byte();
  a = __dyc_readpre_byte();
  b = __dyc_readpre_byte();
  c = __dyc_readpre_byte();
  dest___0 = __dyc_readpre_byte();
  pt = (Proto const   *)__dyc_read_ptr__typdef_Proto();
  lastpc = __dyc_readpre_byte();
  reg = __dyc_readpre_byte();
  __dyc_funcallvar_4 = (int __attribute__((__visibility__("hidden")))  )__dyc_readpre_byte();
  last = 0;
  tmp___2 = 0;
  if (reg != (1 << 8) - 1) {
    if (pc < dest___0) {
      if (dest___0 <= lastpc) {
        pc += b;
      }
    }
  }
  goto __dyc_dummy_label;
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
  __dyc_dummy_label:  ;
  __dyc_printpre_byte(pc);
  __dyc_printpre_byte(last);
}
}
