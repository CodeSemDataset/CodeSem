#include "../../include/dycfoo.h"
#include "../../include/gen-fac.i.hd.c.h"
void __dyc_foo(void) 
{ unsigned int bits ;
  mp_size_t rn ;
  mp_size_t alloc ;
  mp_ptr rp ;
  size_t sn ;
  int sign ;
  unsigned char *dp ;
  unsigned short const   **tmp ;
  void *tmp___0 ;
  unsigned int digit ;
  unsigned short const   **tmp___1 ;
  size_t tmp___2 ;
  struct mpn_base_info info ;
  __mpz_struct *r ;
  char const   *sp ;
  int base ;
  unsigned short const   **__dyc_funcallvar_1 ;
  size_t __dyc_funcallvar_2 ;
  void *__dyc_funcallvar_3 ;
  unsigned short const   **__dyc_funcallvar_4 ;
  unsigned int __dyc_funcallvar_5 ;
  mp_ptr __dyc_funcallvar_6 ;
  mp_size_t __dyc_funcallvar_7 ;
  mp_ptr __dyc_funcallvar_8 ;
  mp_size_t __dyc_funcallvar_9 ;

  {
  info = __dyc_read_comp_40mpn_base_info();
  r = (__mpz_struct *)__dyc_read_ptr__typdef___mpz_struct();
  sp = (char const   *)__dyc_read_ptr__char();
  base = __dyc_readpre_byte();
  __dyc_funcallvar_1 = (unsigned short const   **)__dyc_read_ptr__ptr__short();
  __dyc_funcallvar_2 = (size_t )__dyc_readpre_byte();
  __dyc_funcallvar_3 = __dyc_read_ptr__void();
  __dyc_funcallvar_4 = (unsigned short const   **)__dyc_read_ptr__ptr__short();
  __dyc_funcallvar_5 = (unsigned int )__dyc_readpre_byte();
  __dyc_funcallvar_6 = __dyc_read_ptr__typdef_mp_limb_t();
  __dyc_funcallvar_7 = (mp_size_t )__dyc_readpre_byte();
  __dyc_funcallvar_8 = __dyc_read_ptr__typdef_mp_limb_t();
  __dyc_funcallvar_9 = (mp_size_t )__dyc_readpre_byte();
  bits = 0;
  rn = 0;
  alloc = 0;
  rp = 0;
  sn = 0;
  sign = 0;
  dp = 0;
  tmp = 0;
  tmp___0 = 0;
  digit = 0;
  tmp___1 = 0;
  tmp___2 = 0;
  while (1) {
    while_149_continue:  ;
    {
    tmp = __dyc_funcallvar_1;
    }
    if (! ((int const   )*(*tmp + (int )((unsigned char )*sp)) & 8192)) {
      goto while_149_break;
    }
    sp ++;
  }
  while_149_break:  ;
  sign = (int const   )*sp == 45;
  sp += sign;
  if (base == 0) {
    if ((int const   )*sp == 48) {
      sp ++;
      if ((int const   )*sp == 120) {
        base = 16;
        sp ++;
      } else {
        if ((int const   )*sp == 88) {
          base = 16;
          sp ++;
        } else {
          if ((int const   )*sp == 98) {
            base = 2;
            sp ++;
          } else {
            if ((int const   )*sp == 66) {
              base = 2;
              sp ++;
            } else {
              base = 8;
            }
          }
        }
      }
    } else {
      base = 10;
    }
  }
  sn = __dyc_funcallvar_2;
  tmp___0 = __dyc_funcallvar_3;
  dp = (unsigned char *)tmp___0;
  sn = 0UL;
  while (1) {
    while_150_continue:  ;
    if (! *sp) {
      goto while_150_break;
    }
    {
    tmp___1 = __dyc_funcallvar_4;
    }
    if ((int const   )*(*tmp___1 + (int )((unsigned char )*sp)) & 8192) {
      goto __Cont;
    }
    if ((int const   )*sp >= 48) {
      if ((int const   )*sp <= 57) {
        digit = (unsigned int )((int const   )*sp - 48);
      } else {
        goto _L___0;
      }
    } else {
      _L___0:  
      if ((int const   )*sp >= 97) {
        if ((int const   )*sp <= 122) {
          digit = (unsigned int )(((int const   )*sp - 97) + 10);
        } else {
          goto _L;
        }
      } else {
        _L:  
        if ((int const   )*sp >= 65) {
          if ((int const   )*sp <= 90) {
            digit = (unsigned int )(((int const   )*sp - 65) + 10);
          } else {
            digit = (unsigned int )base;
          }
        } else {
          digit = (unsigned int )base;
        }
      }
    }
    if (digit >= (unsigned int )base) {
      {

      r->_mp_size = 0;
      }
      goto __dyc_dummy_label;
    }
    tmp___2 = sn;
    sn ++;
    *(dp + tmp___2) = (unsigned char )digit;
    __Cont:  
    sp ++;
  }
  while_150_break:  ;
  bits = __dyc_funcallvar_5;
  if (bits > 0U) {
    alloc = (long )(((sn * (size_t )bits + sizeof(mp_limb_t ) * 8UL) - 1UL) / (sizeof(mp_limb_t ) * 8UL));
    if (alloc > (mp_size_t )r->_mp_alloc) {
      {
      rp = __dyc_funcallvar_6;
      }
    } else {
      rp = r->_mp_d;
    }
    {
    rn = __dyc_funcallvar_7;
    }
  } else {
    {

    alloc = (long )(((sn + (size_t )info.exp) - 1UL) / (size_t )info.exp);
    }
    if (alloc > (mp_size_t )r->_mp_alloc) {
      {
      rp = __dyc_funcallvar_8;
      }
    } else {
      rp = r->_mp_d;
    }
    {
    rn = __dyc_funcallvar_9;
    }
  }
  __dyc_dummy_label:  ;
  __dyc_printpre_byte(rn);
  __dyc_print_ptr__typdef_mp_limb_t(rp);
  __dyc_printpre_byte(sn);
  __dyc_print_ptr__char(dp);
  __dyc_printpre_byte(base);
}
}
