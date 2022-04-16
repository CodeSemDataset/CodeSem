#include "../../include/dycfoo.h"
#include "../../include/cpucheck.i.hd.c.h"
void __dyc_foo(void) 
{ struct cpu_features cpu ;
  u32 err_flags[8] ;
  int req_level ;
  int err ;
  int tmp___5 ;
  int *cpu_level_ptr ;
  int *req_level_ptr ;
  u32 **err_flags_ptr ;

  {
  cpu = __dyc_read_comp_36cpu_features();
  req_level = (int const   )__dyc_readpre_byte();
  err = __dyc_readpre_byte();
  cpu_level_ptr = __dyc_read_ptr__int();
  req_level_ptr = __dyc_read_ptr__int();
  err_flags_ptr = __dyc_read_ptr__ptr__typdef_u32();
  tmp___5 = 0;
  if (err_flags_ptr) {
    if (err) {
      *err_flags_ptr = err_flags;
    } else {
      *err_flags_ptr = (u32 *)((void *)0);
    }
  }
  if (cpu_level_ptr) {
    *cpu_level_ptr = cpu.level;
  }
  if (req_level_ptr) {
    *req_level_ptr = (int )req_level;
  }
  if (cpu.level < (int )req_level) {
    tmp___5 = -1;
  } else {
    if (err) {
      tmp___5 = -1;
    } else {
      tmp___5 = 0;
    }
  }
  goto __dyc_dummy_label;
  __dyc_dummy_label:  ;
  __dyc_printpre_byte(tmp___5);
}
}
