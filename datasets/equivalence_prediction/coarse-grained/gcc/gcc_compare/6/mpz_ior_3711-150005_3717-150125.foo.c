#include "../../include/dycfoo.h"
#include "../../include/gen-fac.i.hd.c.h"
void __dyc_foo(void) 
{ mp_size_t vn ;
  mp_size_t i ;
  mp_ptr up ;
  mp_ptr vp ;
  mp_ptr rp ;
  mp_limb_t ux ;
  mp_limb_t vx ;
  mp_limb_t rx ;
  mp_limb_t uc ;
  mp_limb_t vc ;
  mp_limb_t rc ;
  mp_limb_t ul ;
  mp_limb_t vl ;
  mp_limb_t rl ;
  __mpz_struct *r ;

  {
  vn = (mp_size_t )__dyc_readpre_byte();
  i = (mp_size_t )__dyc_readpre_byte();
  up = __dyc_read_ptr__typdef_mp_limb_t();
  vp = __dyc_read_ptr__typdef_mp_limb_t();
  rp = __dyc_read_ptr__typdef_mp_limb_t();
  ux = (mp_limb_t )__dyc_readpre_byte();
  vx = (mp_limb_t )__dyc_readpre_byte();
  rx = (mp_limb_t )__dyc_readpre_byte();
  uc = (mp_limb_t )__dyc_readpre_byte();
  vc = (mp_limb_t )__dyc_readpre_byte();
  rc = (mp_limb_t )__dyc_readpre_byte();
  r = (__mpz_struct *)__dyc_read_ptr__typdef___mpz_struct();
  ul = 0;
  vl = 0;
  rl = 0;
  rp = r->_mp_d;
  while_133_continue:  ;
  ul = (*(up + i) ^ ux) + uc;
  uc = (unsigned long )(ul < uc);
  vl = (*(vp + i) ^ vx) + vc;
  vc = (unsigned long )(vl < vc);
  rl = ((ul | vl) ^ rx) + rc;
  rc = (unsigned long )(rl < rc);
  *(rp + i) = rl;
  i ++;
  if (i < vn) {

  }
  __dyc_dummy_label:  ;
  __dyc_print_ptr__typdef_mp_limb_t(rp);
  __dyc_printpre_byte(uc);
  __dyc_printpre_byte(vc);
  __dyc_printpre_byte(rc);
}
}
