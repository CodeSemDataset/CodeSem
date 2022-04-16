#include "../../include/dycfoo.h"
#include "../../include/hmac.i.hd.c.h"
void __dyc_foo(void) 
{ unsigned char hmac_ipad ;
  unsigned char hmac_opad ;
  size_t i ;
  unsigned char b ;
  unsigned char const   *tmp___0 ;
  struct HMAC_params  const  *hashparams ;
  unsigned char const   *key ;
  unsigned int keylen ;

  {
  hmac_ipad = (unsigned char const   )__dyc_readpre_byte();
  hmac_opad = (unsigned char const   )__dyc_readpre_byte();
  i = (size_t )__dyc_readpre_byte();
  hashparams = (struct HMAC_params  const  *)__dyc_read_ptr__comp_77HMAC_params();
  key = (unsigned char const   *)__dyc_read_ptr__char();
  keylen = (unsigned int )__dyc_readpre_byte();
  b = 0;
  tmp___0 = 0;
  while (1) {
    while_0_continue:  ;
    if (! (i < (size_t )keylen)) {
      goto while_0_break;
    }
    {
    b = (unsigned char )((int const   )*key ^ (int const   )hmac_ipad);

    tmp___0 = key;
    key ++;
    b = (unsigned char )((int const   )*tmp___0 ^ (int const   )hmac_opad);

    i ++;
    }
  }
  while_0_break:  ;
  while (1) {
    while_1_continue:  ;
    if (! (i < (size_t )hashparams->hmac_maxkeylen)) {
      goto while_1_break;
    }
    {


    i ++;
    }
  }
  while_1_break:  ;
  goto __dyc_dummy_label;
  __dyc_dummy_label:  ;
  __dyc_printpre_byte(b);
  __dyc_print_ptr__char(key);
}
}
