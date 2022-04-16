#include "../../include/dycfoo.h"
#include "../../include/getopt.i.hd.c.h"
void __dyc_foo(void) 
{ char *val ;
  char *tmp ;
  char *v ;
  int tmp___0 ;
  struct ncp_option  const  *opts ;
  unsigned long *value ;
  int __dyc_funcallvar_3 ;
  unsigned long __dyc_funcallvar_4 ;

  {
  val = __dyc_read_ptr__char();
  v = __dyc_read_ptr__char();
  opts = (struct ncp_option  const  *)__dyc_read_ptr__comp_14ncp_option();
  value = __dyc_read_ptr__long();
  __dyc_funcallvar_3 = __dyc_readpre_byte();
  __dyc_funcallvar_4 = (unsigned long )__dyc_readpre_byte();
  tmp = 0;
  tmp___0 = 0;
  tmp = val;
  val ++;
  *tmp = (char)0;
  while_1_continue:  ;
  if (! opts->name) {
    goto __dyc_dummy_label;
  }
  tmp___0 = __dyc_funcallvar_3;
  if (! tmp___0) {
    if (! val) {
      if (opts->has_arg & 1U) {
        goto __dyc_dummy_label;
      }
      {

      }
      goto __dyc_dummy_label;
    }
    if (opts->has_arg & 2U) {
      {
      *value = __dyc_funcallvar_4;
      }
      if (! *v) {
        goto __dyc_dummy_label;
      }
      {

      }
      goto __dyc_dummy_label;
    }
    if (opts->has_arg & 4U) {
      goto __dyc_dummy_label;
    }
    {

    }
    goto __dyc_dummy_label;
  }
  opts ++;
  __dyc_dummy_label:  ;
  __dyc_print_ptr__char(val);
}
}
