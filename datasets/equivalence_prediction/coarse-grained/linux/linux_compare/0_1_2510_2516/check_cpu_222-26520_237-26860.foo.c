#include "../../include/dycfoo.h"
#include "../../include/cpucheck.i.hd.c.h"
void __dyc_foo(void) 
{ struct cpu_features cpu ;
  u32 err_flags[8] ;
  int err ;
  u32 ecx___0 ;
  u32 eax___0 ;
  u32 ecx___1 ;
  u32 level ;
  int tmp___2 ;
  int tmp___3 ;
  int __dyc_funcallvar_6 ;
  int __dyc_funcallvar_7 ;
  int __dyc_funcallvar_8 ;
  int __dyc_funcallvar_9 ;

  {
  cpu = __dyc_read_comp_36cpu_features();
  err = __dyc_readpre_byte();
  eax___0 = (u32 )__dyc_readpre_byte();
  __dyc_funcallvar_6 = __dyc_readpre_byte();
  __dyc_funcallvar_7 = __dyc_readpre_byte();
  __dyc_funcallvar_8 = __dyc_readpre_byte();
  __dyc_funcallvar_9 = __dyc_readpre_byte();
  ecx___0 = 0;
  ecx___1 = 0;
  level = 0;
  tmp___2 = 0;
  tmp___3 = 0;
  if (! (err_flags[0] & (unsigned int )(~ (1 << 8)))) {
    {
    tmp___3 = __dyc_funcallvar_6;
    }
    if (tmp___3) {
      if (cpu.model >= 6) {
        {
        ecx___0 = (u32 )4359;

        eax___0 |= (unsigned int )((1 << 1) | (1 << 7));


        err = __dyc_funcallvar_7;
        }
      } else {
        goto _L___1;
      }
    } else {
      goto _L___1;
    }
  }
  _L___1:  
  if (err == 1) {
    {
    tmp___2 = __dyc_funcallvar_8;
    }
    if (tmp___2) {
      {
      ecx___1 = 2156265476U;
      level = (u32 )1;




      err = __dyc_funcallvar_9;
      }
    }
  }
  __dyc_dummy_label:  ;
  __dyc_printpre_byte(err);
  __dyc_printpre_byte(ecx___0);
  __dyc_printpre_byte(eax___0);
  __dyc_printpre_byte(ecx___1);
  __dyc_printpre_byte(level);
}
}
