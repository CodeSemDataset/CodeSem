#include "../../include/dycfoo.h"
#include "../../include/lzf_c.i.hd.c.h"
void __dyc_foo(void) 
{ u8 const   *ip ;
  u8 *op ;
  u8 const   *ref ;
  int lit ;
  unsigned int len ;
  unsigned int maxlen ;
  long tmp___0 ;
  long __dyc_funcallvar_2 ;

  {
  ip = (u8 const   *)__dyc_read_ptr__typdef_u8();
  op = __dyc_read_ptr__typdef_u8();
  ref = (u8 const   *)__dyc_read_ptr__typdef_u8();
  lit = __dyc_readpre_byte();
  len = (unsigned int )__dyc_readpre_byte();
  maxlen = (unsigned int )__dyc_readpre_byte();
  __dyc_funcallvar_2 = (long )__dyc_readpre_byte();
  tmp___0 = 0;
  *(op + (- lit - 1)) = (unsigned char )(lit - 1);
  op -= ! lit;
  while (1) {
    while_1_continue:  ;
    {
    tmp___0 = __dyc_funcallvar_2;
    }
    if (tmp___0) {
      len ++;
      if ((int const   )*(ref + len) != (int const   )*(ip + len)) {
        goto __dyc_dummy_label;
      }
      len ++;
      if ((int const   )*(ref + len) != (int const   )*(ip + len)) {
        goto __dyc_dummy_label;
      }
      len ++;
      if ((int const   )*(ref + len) != (int const   )*(ip + len)) {
        goto __dyc_dummy_label;
      }
      len ++;
      if ((int const   )*(ref + len) != (int const   )*(ip + len)) {
        goto __dyc_dummy_label;
      }
      len ++;
      if ((int const   )*(ref + len) != (int const   )*(ip + len)) {
        goto __dyc_dummy_label;
      }
      len ++;
      if ((int const   )*(ref + len) != (int const   )*(ip + len)) {
        goto __dyc_dummy_label;
      }
      len ++;
      if ((int const   )*(ref + len) != (int const   )*(ip + len)) {
        goto __dyc_dummy_label;
      }
      len ++;
      if ((int const   )*(ref + len) != (int const   )*(ip + len)) {
        goto __dyc_dummy_label;
      }
      len ++;
      if ((int const   )*(ref + len) != (int const   )*(ip + len)) {
        goto __dyc_dummy_label;
      }
      len ++;
      if ((int const   )*(ref + len) != (int const   )*(ip + len)) {
        goto __dyc_dummy_label;
      }
      len ++;
      if ((int const   )*(ref + len) != (int const   )*(ip + len)) {
        goto __dyc_dummy_label;
      }
      len ++;
      if ((int const   )*(ref + len) != (int const   )*(ip + len)) {
        goto __dyc_dummy_label;
      }
      len ++;
      if ((int const   )*(ref + len) != (int const   )*(ip + len)) {
        goto __dyc_dummy_label;
      }
      len ++;
      if ((int const   )*(ref + len) != (int const   )*(ip + len)) {
        goto __dyc_dummy_label;
      }
      len ++;
      if ((int const   )*(ref + len) != (int const   )*(ip + len)) {
        goto __dyc_dummy_label;
      }
      len ++;
      if ((int const   )*(ref + len) != (int const   )*(ip + len)) {
        goto __dyc_dummy_label;
      }
    }
    {
    while (1) {
      while_2_continue:  ;
      len ++;
      if (len < maxlen) {
        if (! ((int const   )*(ref + len) == (int const   )*(ip + len))) {
          goto while_2_break;
        }
      } else {
        goto while_2_break;
      }
    }
    while_2_break:  ;
    }
    goto __dyc_dummy_label;
  }
  __dyc_dummy_label:  ;
  __dyc_print_ptr__typdef_u8(op);
}
}