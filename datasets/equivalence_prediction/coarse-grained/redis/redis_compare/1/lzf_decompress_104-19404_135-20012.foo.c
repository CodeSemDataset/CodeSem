#include "../../include/dycfoo.h"
#include "../../include/lzf_d.i.hd.c.h"
void __dyc_foo(void) 
{ u8 const   *ip ;
  u8 *op ;
  u8 const   *in_end ;
  u8 *out_end ;
  unsigned int ctrl ;
  unsigned int len ;
  u8 *ref ;
  int *tmp___66 ;
  u8 const   *tmp___67 ;
  int *tmp___68 ;
  u8 const   *tmp___69 ;
  int *tmp___70 ;
  int *tmp___71 ;
  void *out_data ;
  int *__dyc_funcallvar_3 ;
  int *__dyc_funcallvar_4 ;
  int *__dyc_funcallvar_5 ;
  int *__dyc_funcallvar_6 ;

  {
  ip = (u8 const   *)__dyc_read_ptr__typdef_u8();
  op = __dyc_read_ptr__typdef_u8();
  in_end = (u8 const   *)__dyc_read_ptr__typdef_u8();
  out_end = __dyc_read_ptr__typdef_u8();
  ctrl = (unsigned int )__dyc_readpre_byte();
  out_data = __dyc_read_ptr__void();
  __dyc_funcallvar_3 = __dyc_read_ptr__int();
  __dyc_funcallvar_4 = __dyc_read_ptr__int();
  __dyc_funcallvar_5 = __dyc_read_ptr__int();
  __dyc_funcallvar_6 = __dyc_read_ptr__int();
  len = 0;
  ref = 0;
  tmp___66 = 0;
  tmp___67 = 0;
  tmp___68 = 0;
  tmp___69 = 0;
  tmp___70 = 0;
  tmp___71 = 0;
  len = ctrl >> 5;
  ref = (op - ((ctrl & 31U) << 8)) - 1;
  if ((unsigned long )ip >= (unsigned long )in_end) {
    {
    tmp___66 = __dyc_funcallvar_3;
    *tmp___66 = 22;
    }
    goto __dyc_dummy_label;
  }
  if (len == 7U) {
    tmp___67 = ip;
    ip ++;
    len += (unsigned int )*tmp___67;
    if ((unsigned long )ip >= (unsigned long )in_end) {
      {
      tmp___68 = __dyc_funcallvar_4;
      *tmp___68 = 22;
      }
      goto __dyc_dummy_label;
    }
  }
  tmp___69 = ip;
  ip ++;
  ref -= (int const   )*tmp___69;
  if ((unsigned long )((op + len) + 2) > (unsigned long )out_end) {
    {
    tmp___70 = __dyc_funcallvar_5;
    *tmp___70 = 7;
    }
    goto __dyc_dummy_label;
  }
  if ((unsigned long )ref < (unsigned long )((u8 *)out_data)) {
    {
    tmp___71 = __dyc_funcallvar_6;
    *tmp___71 = 22;
    }
    goto __dyc_dummy_label;
  }
  __dyc_dummy_label:  ;
  __dyc_print_ptr__typdef_u8(ip);
  __dyc_printpre_byte(len);
  __dyc_print_ptr__typdef_u8(ref);
}
}
