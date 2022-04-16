#include "../../include/dycfoo.h"
#include "../../include/lzf_c.i.hd.c.h"
void __dyc_foo(void) 
{ LZF_STATE htab ;
  u8 const   *ip ;
  u8 *op ;
  unsigned long off ;
  unsigned int hval ;
  int lit ;
  unsigned int len ;
  u8 *tmp___4 ;
  long tmp___5 ;
  void const   *in_data ;
  long __dyc_funcallvar_3 ;

  {
  ip = (u8 const   *)__dyc_read_ptr__typdef_u8();
  op = __dyc_read_ptr__typdef_u8();
  off = (unsigned long )__dyc_readpre_byte();
  len = (unsigned int )__dyc_readpre_byte();
  tmp___4 = __dyc_read_ptr__typdef_u8();
  in_data = (void const   *)__dyc_read_ptr__void();
  __dyc_funcallvar_3 = (long )__dyc_readpre_byte();
  hval = 0;
  lit = 0;
  tmp___5 = 0;
  op ++;
  *tmp___4 = (unsigned char )off;
  lit = 0;
  op ++;
  ip += len + 1U;
  tmp___5 = __dyc_funcallvar_3;
  if (tmp___5) {
    goto __dyc_dummy_label;
  }
  ip --;
  ip --;
  hval = (unsigned int )(((int const   )*(ip + 0) << 8) | (int const   )*(ip + 1));
  hval = (hval << 8) | (unsigned int )*(ip + 2);
  htab[((hval >> 8) - hval * 5U) & (unsigned int )((1 << 16) - 1)] = (unsigned int )(ip - (u8 const   *)in_data);
  ip ++;
  hval = (hval << 8) | (unsigned int )*(ip + 2);
  htab[((hval >> 8) - hval * 5U) & (unsigned int )((1 << 16) - 1)] = (unsigned int )(ip - (u8 const   *)in_data);
  ip ++;
  __dyc_dummy_label:  ;
  __dyc_print_ptr__typdef_u8(ip);
  __dyc_print_ptr__typdef_u8(op);
  __dyc_printpre_byte(lit);
}
}
