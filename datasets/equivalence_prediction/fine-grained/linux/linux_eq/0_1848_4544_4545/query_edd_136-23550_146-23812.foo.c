#include "../../include/dycfoo.h"
#include "../../include/edd.i.hd.c.h"
void __dyc_foo(void) 
{ struct boot_params boot_params ;
  int do_mbr ;
  int do_edd ;
  struct edd_info *edp ;
  u32 *mbrptr ;
  int tmp ;
  int tmp___0 ;
  int tmp___1 ;
  int tmp___2 ;
  int __dyc_funcallvar_2 ;
  int __dyc_funcallvar_3 ;
  int __dyc_funcallvar_4 ;

  {
  boot_params = __dyc_read_comp_35boot_params();
  do_edd = __dyc_readpre_byte();
  tmp___2 = __dyc_readpre_byte();
  __dyc_funcallvar_2 = __dyc_readpre_byte();
  __dyc_funcallvar_3 = __dyc_readpre_byte();
  __dyc_funcallvar_4 = __dyc_readpre_byte();
  do_mbr = 0;
  edp = 0;
  mbrptr = 0;
  tmp = 0;
  tmp___0 = 0;
  tmp___1 = 0;
  if (tmp___2 > 0) {
    {
    tmp___0 = __dyc_funcallvar_2;
    }
    if (tmp___0) {
      {
      tmp___1 = __dyc_funcallvar_3;
      }
      if (tmp___1) {
        {
        tmp = __dyc_funcallvar_4;
        }
        if (! tmp) {
          do_edd = 0;
        }
      } else {
        do_mbr = 0;
      }
    } else {
      do_mbr = 0;
    }
  }
  edp = boot_params.eddbuf;
  mbrptr = boot_params.edd_mbr_sig_buffer;
  if (! do_edd) {
    goto __dyc_dummy_label;
  }
  __dyc_dummy_label:  ;
  __dyc_printpre_byte(do_mbr);
  __dyc_print_ptr__comp_23edd_info(edp);
  __dyc_print_ptr__typdef_u32(mbrptr);
}
}
