#include "../../include/dycfoo.h"
#include "../../include/lzf_c.i.hd.c.h"
void __dyc_foo(void) 
{ LZF_STATE htab ;
  u8 const   *ip ;
  u8 *op ;
  u8 const   *in_end ;
  u8 *out_end ;
  u8 const   *ref ;
  unsigned long off ;
  unsigned int hval ;
  int lit ;
  LZF_HSLOT *hslot ;
  unsigned int len ;
  unsigned int maxlen ;
  long tmp ;
  long tmp___0 ;
  u8 *tmp___1 ;
  u8 *tmp___2 ;
  u8 *tmp___3 ;
  u8 *tmp___4 ;
  long tmp___5 ;
  long tmp___6 ;
  u8 *tmp___7 ;
  u8 const   *tmp___8 ;
  long tmp___9 ;
  void const   *in_data ;
  long __dyc_funcallvar_1 ;
  long __dyc_funcallvar_2 ;
  long __dyc_funcallvar_3 ;
  long __dyc_funcallvar_4 ;
  long __dyc_funcallvar_5 ;

  {
  ip = (u8 const   *)__dyc_read_ptr__typdef_u8();
  op = __dyc_read_ptr__typdef_u8();
  in_end = (u8 const   *)__dyc_read_ptr__typdef_u8();
  out_end = __dyc_read_ptr__typdef_u8();
  hval = (unsigned int )__dyc_readpre_byte();
  lit = __dyc_readpre_byte();
  in_data = (void const   *)__dyc_read_ptr__void();
  __dyc_funcallvar_1 = (long )__dyc_readpre_byte();
  __dyc_funcallvar_2 = (long )__dyc_readpre_byte();
  __dyc_funcallvar_3 = (long )__dyc_readpre_byte();
  __dyc_funcallvar_4 = (long )__dyc_readpre_byte();
  __dyc_funcallvar_5 = (long )__dyc_readpre_byte();
  ref = 0;
  off = 0;
  hslot = 0;
  len = 0;
  maxlen = 0;
  tmp = 0;
  tmp___0 = 0;
  tmp___1 = 0;
  tmp___2 = 0;
  tmp___3 = 0;
  tmp___4 = 0;
  tmp___5 = 0;
  tmp___6 = 0;
  tmp___7 = 0;
  tmp___8 = 0;
  tmp___9 = 0;
  while (1) {
    while_0_continue:  ;
    if (! ((unsigned long )ip < (unsigned long )(in_end - 2))) {
      goto while_0_break;
    }
    hval = (hval << 8) | (unsigned int )*(ip + 2);
    hslot = htab + (((hval >> 8) - hval * 5U) & (unsigned int )((1 << 16) - 1));
    ref = (u8 const   *)in_data + *hslot;
    *hslot = (unsigned int )(ip - (u8 const   *)in_data);
    off = (unsigned long )((ip - ref) - 1);
    if (off < (unsigned long )(1 << 13)) {
      if ((unsigned long )ref > (unsigned long )((u8 *)in_data)) {
        if ((int const   )*(ref + 2) == (int const   )*(ip + 2)) {
          if ((int )*((u16 *)ref) == (int )*((u16 *)ip)) {
            len = 2U;
            maxlen = (unsigned int )(in_end - ip) - len;
            if (maxlen > (unsigned int )((1 << 8) + (1 << 3))) {
              maxlen = (unsigned int )((1 << 8) + (1 << 3));
            } else {
              maxlen = maxlen;
            }
            {
            tmp = __dyc_funcallvar_1;
            }
            if (tmp) {
              if ((unsigned long )(((op - ! lit) + 3) + 1) >= (unsigned long )out_end) {
                goto __dyc_dummy_label;
              }
            }
            *(op + (- lit - 1)) = (unsigned char )(lit - 1);
            op -= ! lit;
            {
            while (1) {
              while_1_continue:  ;
              {
              tmp___0 = __dyc_funcallvar_2;
              }
              if (tmp___0) {
                len ++;
                if ((int const   )*(ref + len) != (int const   )*(ip + len)) {
                  goto while_1_break;
                }
                len ++;
                if ((int const   )*(ref + len) != (int const   )*(ip + len)) {
                  goto while_1_break;
                }
                len ++;
                if ((int const   )*(ref + len) != (int const   )*(ip + len)) {
                  goto while_1_break;
                }
                len ++;
                if ((int const   )*(ref + len) != (int const   )*(ip + len)) {
                  goto while_1_break;
                }
                len ++;
                if ((int const   )*(ref + len) != (int const   )*(ip + len)) {
                  goto while_1_break;
                }
                len ++;
                if ((int const   )*(ref + len) != (int const   )*(ip + len)) {
                  goto while_1_break;
                }
                len ++;
                if ((int const   )*(ref + len) != (int const   )*(ip + len)) {
                  goto while_1_break;
                }
                len ++;
                if ((int const   )*(ref + len) != (int const   )*(ip + len)) {
                  goto while_1_break;
                }
                len ++;
                if ((int const   )*(ref + len) != (int const   )*(ip + len)) {
                  goto while_1_break;
                }
                len ++;
                if ((int const   )*(ref + len) != (int const   )*(ip + len)) {
                  goto while_1_break;
                }
                len ++;
                if ((int const   )*(ref + len) != (int const   )*(ip + len)) {
                  goto while_1_break;
                }
                len ++;
                if ((int const   )*(ref + len) != (int const   )*(ip + len)) {
                  goto while_1_break;
                }
                len ++;
                if ((int const   )*(ref + len) != (int const   )*(ip + len)) {
                  goto while_1_break;
                }
                len ++;
                if ((int const   )*(ref + len) != (int const   )*(ip + len)) {
                  goto while_1_break;
                }
                len ++;
                if ((int const   )*(ref + len) != (int const   )*(ip + len)) {
                  goto while_1_break;
                }
                len ++;
                if ((int const   )*(ref + len) != (int const   )*(ip + len)) {
                  goto while_1_break;
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
              goto while_1_break;
            }
            while_1_break:  ;
            }
            len -= 2U;
            ip ++;
            if (len < 7U) {
              tmp___1 = op;
              op ++;
              *tmp___1 = (unsigned char )((off >> 8) + (unsigned long )(len << 5));
            } else {
              tmp___2 = op;
              op ++;
              *tmp___2 = (unsigned char )((off >> 8) + (unsigned long )(7 << 5));
              tmp___3 = op;
              op ++;
              *tmp___3 = (unsigned char )(len - 7U);
            }
            {
            tmp___4 = op;
            op ++;
            *tmp___4 = (unsigned char )off;
            lit = 0;
            op ++;
            ip += len + 1U;
            tmp___5 = __dyc_funcallvar_3;
            }
            if (tmp___5) {
              goto while_0_break;
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
          } else {
            goto _L___1;
          }
        } else {
          goto _L___1;
        }
      } else {
        goto _L___1;
      }
    } else {
      _L___1:  
      {
      tmp___6 = __dyc_funcallvar_4;
      }
      if (tmp___6) {
        goto __dyc_dummy_label;
      }
      {
      lit ++;
      tmp___7 = op;
      op ++;
      tmp___8 = ip;
      ip ++;
      *tmp___7 = (unsigned char )*tmp___8;
      tmp___9 = __dyc_funcallvar_5;
      }
      if (tmp___9) {
        *(op + (- lit - 1)) = (unsigned char )(lit - 1);
        lit = 0;
        op ++;
      }
    }
  }
  while_0_break:  ;
  if ((unsigned long )(op + 3) > (unsigned long )out_end) {
    goto __dyc_dummy_label;
  }
  __dyc_dummy_label:  ;
  __dyc_print_ptr__typdef_u8(ip);
  __dyc_print_ptr__typdef_u8(op);
  __dyc_printpre_byte(lit);
  __dyc_printpre_byte(maxlen);
}
}
