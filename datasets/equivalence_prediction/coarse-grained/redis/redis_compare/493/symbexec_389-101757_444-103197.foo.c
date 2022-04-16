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
  pt = (Proto const   *)__dyc_read_ptr__typdef_Proto();
  lastpc = __dyc_readpre_byte();
  reg = __dyc_readpre_byte();
  __dyc_funcallvar_4 = (int __attribute__((__visibility__("hidden")))  )__dyc_readpre_byte();
  last = 0;
  dest___0 = 0;
  tmp___2 = 0;
  switch_9_4:  
  switch_9_8:  
  if (! (b < (int )pt->nups)) {
    goto __dyc_dummy_label;
  }
  goto __dyc_dummy_label;
  switch_9_5:  
  switch_9_7:  
  if (! ((pt->k + b)->tt == 4)) {
    goto __dyc_dummy_label;
  }
  goto __dyc_dummy_label;
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
  switch_9_34:  
  if (b > 0) {
    if (! (a + b < (int )pt->maxstacksize)) {
      goto __dyc_dummy_label;
    }
  }
  if (c == 0) {
    pc ++;
    if (! (pc < (int )(pt->sizecode - 1))) {
      goto __dyc_dummy_label;
    }
  }
  __dyc_dummy_label:  ;
  __dyc_printpre_byte(pc);
  __dyc_printpre_byte(last);
  __dyc_printpre_byte(dest___0);
}
}
