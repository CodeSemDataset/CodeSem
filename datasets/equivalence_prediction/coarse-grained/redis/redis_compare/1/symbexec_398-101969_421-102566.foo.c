#include "../../include/dycfoo.h"
#include "../../include/ldebug.i.hd.c.h"
void __dyc_foo(void) 
{ int pc ;
  int last ;
  int a ;
  int b ;
  int c ;
  int dest___0 ;
  Proto const   *pt ;
  int lastpc ;
  int reg ;

  {
  pc = __dyc_readpre_byte();
  a = __dyc_readpre_byte();
  b = __dyc_readpre_byte();
  c = __dyc_readpre_byte();
  pt = (Proto const   *)__dyc_read_ptr__typdef_Proto();
  lastpc = __dyc_readpre_byte();
  reg = __dyc_readpre_byte();
  last = 0;
  dest___0 = 0;
  switch_9_11:  
  if (! (a + 1 < (int )pt->maxstacksize)) {
    goto __dyc_dummy_label;
  }
  if (reg == a + 1) {
    last = pc;
  }
  goto __dyc_dummy_label;
  switch_9_21:  
  if (! (b < c)) {
    goto __dyc_dummy_label;
  }
  goto __dyc_dummy_label;
  switch_9_33:  
  if (! (c >= 1)) {
    goto __dyc_dummy_label;
  }
  if (! ((a + 2) + c < (int )pt->maxstacksize)) {
    goto __dyc_dummy_label;
  }
  if (reg >= a + 2) {
    last = pc;
  }
  goto __dyc_dummy_label;
  switch_9_31:  
  switch_9_32:  
  if (! (a + 3 < (int )pt->maxstacksize)) {
    goto __dyc_dummy_label;
  }
  switch_9_22:  
  dest___0 = (pc + 1) + b;
  if (reg != (1 << 8) - 1) {
    if (pc < dest___0) {
      if (dest___0 <= lastpc) {
        pc += b;
      }
    }
  }
  goto __dyc_dummy_label;
  __dyc_dummy_label:  ;
  __dyc_printpre_byte(pc);
  __dyc_printpre_byte(last);
  __dyc_printpre_byte(dest___0);
}
}
