#include "../../include/dycfoo.h"
#include "../../include/hmac.i.hd.c.h"
void __dyc_foo(void) 
{ struct HMAC_context *ctxt ;
  unsigned char *hkey ;
  void *tmp ;
  struct HMAC_params  const  *hashparams ;
  unsigned char const   *key ;
  unsigned int keylen ;
  void *__dyc_funcallvar_1 ;

  {
  hashparams = (struct HMAC_params  const  *)__dyc_read_ptr__comp_77HMAC_params();
  keylen = (unsigned int )__dyc_readpre_byte();
  __dyc_funcallvar_1 = __dyc_read_ptr__void();
  ctxt = 0;
  hkey = 0;
  tmp = 0;
  key = 0;
  tmp = __dyc_funcallvar_1;
  ctxt = (struct HMAC_context *)tmp;
  if (! ctxt) {
    goto __dyc_dummy_label;
  }
  ctxt->hmac_hash = hashparams;
  ctxt->hmac_hashctxt1 = (void *)(ctxt + 1);
  ctxt->hmac_hashctxt2 = (void *)((char *)ctxt->hmac_hashctxt1 + hashparams->hmac_ctxtsize);
  if (keylen > (unsigned int )hashparams->hmac_maxkeylen) {
    {


    hkey = (unsigned char *)ctxt->hmac_hashctxt2 + hashparams->hmac_ctxtsize;

    key = (unsigned char const   *)hkey;
    keylen = (unsigned int )hashparams->hmac_resultlen;
    }
  }
  __dyc_dummy_label:  ;
  __dyc_print_ptr__char(key);
  __dyc_printpre_byte(keylen);
}
}
