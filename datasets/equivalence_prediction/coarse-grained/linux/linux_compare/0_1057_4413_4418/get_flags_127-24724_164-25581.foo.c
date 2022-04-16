#include "../../include/dycfoo.h"
#include "../../include/cpucheck.i.hd.c.h"
void __dyc_foo(void) 
{ struct cpu_features cpu ;
  u32 max_intel_level ;
  u32 max_amd_level ;
  u32 tfms ;
  u32 eax ;
  int tmp___0 ;

  {
  max_intel_level = (u32 )__dyc_readpre_byte();
  max_amd_level = (u32 )__dyc_readpre_byte();
  tfms = (u32 )__dyc_readpre_byte();
  tmp___0 = __dyc_readpre_byte();
  memset(& cpu, 0, sizeof(struct cpu_features ));
  eax = 0;
  if (tmp___0) {

    if (max_intel_level >= 1U) {
      if (max_intel_level <= 65535U) {
        cpu.level = (int )((tfms >> 8) & 15U);
        cpu.model = (int )((tfms >> 4) & 15U);
        if (cpu.level >= 6) {
          cpu.model = (int )((unsigned int )cpu.model + (((tfms >> 16) & 15U) << 4));
        }
      }
    }

    if (max_amd_level >= 2147483649U) {
      if (max_amd_level <= 2147549183U) {
        eax = 2147483649U;
      }
    }
  }
  goto __dyc_dummy_label;
  __dyc_dummy_label:  ;
  __dyc_print_comp_36cpu_features(cpu);
  __dyc_printpre_byte(eax);
}
}
