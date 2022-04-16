#include "../../include/dycfoo.h"
#include "../../include/lzf_d.i.hd.c.h"
void __dyc_foo(void) 
{ u8 const   *ip ;
  u8 *op ;
  u8 *out_end ;
  unsigned int len ;
  u8 *ref ;
  u8 const   *tmp___69 ;
  int *tmp___70 ;
  int *tmp___71 ;
  u8 *tmp___72 ;
  u8 *tmp___73 ;
  u8 *tmp___74 ;
  u8 *tmp___75 ;
  u8 *tmp___76 ;
  u8 *tmp___77 ;
  u8 *tmp___78 ;
  u8 *tmp___79 ;
  u8 *tmp___80 ;
  u8 *tmp___81 ;
  u8 *tmp___82 ;
  u8 *tmp___83 ;
  u8 *tmp___84 ;
  u8 *tmp___85 ;
  u8 *tmp___86 ;
  u8 *tmp___87 ;
  u8 *tmp___88 ;
  u8 *tmp___89 ;
  u8 *tmp___90 ;
  u8 *tmp___91 ;
  u8 *tmp___92 ;
  u8 *tmp___93 ;
  u8 *tmp___94 ;
  u8 *tmp___95 ;
  void *out_data ;
  int *__dyc_funcallvar_5 ;
  int *__dyc_funcallvar_6 ;

  {
  ip = (u8 const   *)__dyc_read_ptr__typdef_u8();
  op = __dyc_read_ptr__typdef_u8();
  out_end = __dyc_read_ptr__typdef_u8();
  len = (unsigned int )__dyc_readpre_byte();
  ref = __dyc_read_ptr__typdef_u8();
  out_data = __dyc_read_ptr__void();
  __dyc_funcallvar_5 = __dyc_read_ptr__int();
  __dyc_funcallvar_6 = __dyc_read_ptr__int();
  tmp___69 = 0;
  tmp___70 = 0;
  tmp___71 = 0;
  tmp___72 = 0;
  tmp___73 = 0;
  tmp___74 = 0;
  tmp___75 = 0;
  tmp___76 = 0;
  tmp___77 = 0;
  tmp___78 = 0;
  tmp___79 = 0;
  tmp___80 = 0;
  tmp___81 = 0;
  tmp___82 = 0;
  tmp___83 = 0;
  tmp___84 = 0;
  tmp___85 = 0;
  tmp___86 = 0;
  tmp___87 = 0;
  tmp___88 = 0;
  tmp___89 = 0;
  tmp___90 = 0;
  tmp___91 = 0;
  tmp___92 = 0;
  tmp___93 = 0;
  tmp___94 = 0;
  tmp___95 = 0;
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
  if ((int )len == 9) {
    goto switch_2_9;
  } else {
    if ((int )len == 8) {
      goto switch_2_8;
    } else {
      if ((int )len == 7) {
        goto switch_2_7;
      } else {
        if ((int )len == 6) {
          goto switch_2_6;
        } else {
          if ((int )len == 5) {
            goto switch_2_5;
          } else {
            if ((int )len == 4) {
              goto switch_2_4;
            } else {
              if ((int )len == 3) {
                goto switch_2_3;
              } else {
                if ((int )len == 2) {
                  goto switch_2_2;
                } else {
                  if ((int )len == 1) {
                    goto switch_2_1;
                  } else {
                    if ((int )len == 0) {
                      goto switch_2_0;
                    } else {
                      {
                      goto switch_2_default;
                      if (0) {
                        switch_2_default:  
                        len += 2U;
                        if ((unsigned long )op >= (unsigned long )(ref + len)) {
                          {

                          op += len;
                          }
                        } else {
                          {
                          while (1) {
                            while_3_continue:  ;
                            tmp___72 = op;
                            op ++;
                            tmp___73 = ref;
                            ref ++;
                            *tmp___72 = *tmp___73;
                            len --;
                            if (! len) {
                              goto while_3_break;
                            }
                          }
                          while_3_break:  ;
                          }
                        }
                        goto switch_2_break;
                        switch_2_9:  
                        tmp___74 = op;
                        op ++;
                        tmp___75 = ref;
                        ref ++;
                        *tmp___74 = *tmp___75;
                        switch_2_8:  
                        tmp___76 = op;
                        op ++;
                        tmp___77 = ref;
                        ref ++;
                        *tmp___76 = *tmp___77;
                        switch_2_7:  
                        tmp___78 = op;
                        op ++;
                        tmp___79 = ref;
                        ref ++;
                        *tmp___78 = *tmp___79;
                        switch_2_6:  
                        tmp___80 = op;
                        op ++;
                        tmp___81 = ref;
                        ref ++;
                        *tmp___80 = *tmp___81;
                        switch_2_5:  
                        tmp___82 = op;
                        op ++;
                        tmp___83 = ref;
                        ref ++;
                        *tmp___82 = *tmp___83;
                        switch_2_4:  
                        tmp___84 = op;
                        op ++;
                        tmp___85 = ref;
                        ref ++;
                        *tmp___84 = *tmp___85;
                        switch_2_3:  
                        tmp___86 = op;
                        op ++;
                        tmp___87 = ref;
                        ref ++;
                        *tmp___86 = *tmp___87;
                        switch_2_2:  
                        tmp___88 = op;
                        op ++;
                        tmp___89 = ref;
                        ref ++;
                        *tmp___88 = *tmp___89;
                        switch_2_1:  
                        tmp___90 = op;
                        op ++;
                        tmp___91 = ref;
                        ref ++;
                        *tmp___90 = *tmp___91;
                        switch_2_0:  
                        tmp___92 = op;
                        op ++;
                        tmp___93 = ref;
                        ref ++;
                        *tmp___92 = *tmp___93;
                        tmp___94 = op;
                        op ++;
                        tmp___95 = ref;
                        ref ++;
                        *tmp___94 = *tmp___95;
                      } else {
                        switch_2_break:  ;
                      }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  __dyc_dummy_label:  ;
  __dyc_print_ptr__typdef_u8(ip);
  __dyc_print_ptr__typdef_u8(op);
  __dyc_print_ptr__typdef_u8(ref);
}
}
