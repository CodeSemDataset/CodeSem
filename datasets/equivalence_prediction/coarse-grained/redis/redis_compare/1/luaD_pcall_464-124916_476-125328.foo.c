#include "../../include/dycfoo.h"
#include "../../include/ldo.i.hd.c.h"
void __dyc_foo(void) 
{ int status ;
  unsigned short oldnCcalls ;
  ptrdiff_t old_ci ;
  lu_byte old_allowhooks ;
  ptrdiff_t old_errfunc ;
  int __attribute__((__visibility__("hidden")))  tmp ;
  StkId oldtop ;
  lua_State *L ;
  ptrdiff_t old_top ;
  int __attribute__((__visibility__("hidden")))  __dyc_funcallvar_1 ;

  {
  oldnCcalls = (unsigned short )__dyc_readpre_byte();
  old_ci = (ptrdiff_t )__dyc_readpre_byte();
  old_allowhooks = (lu_byte )__dyc_readpre_byte();
  old_errfunc = (ptrdiff_t )__dyc_readpre_byte();
  L = __dyc_read_ptr__typdef_lua_State();
  old_top = (ptrdiff_t )__dyc_readpre_byte();
  __dyc_funcallvar_1 = (int __attribute__((__visibility__("hidden")))  )__dyc_readpre_byte();
  status = 0;
  tmp = 0;
  oldtop = 0;
  tmp = __dyc_funcallvar_1;
  status = (int )tmp;
  if (status != 0) {
    {
    oldtop = (TValue *)((char *)L->stack + old_top);


    L->nCcalls = oldnCcalls;
    L->ci = (CallInfo *)((char *)L->base_ci + old_ci);
    L->base = (L->ci)->base;
    L->savedpc = (L->ci)->savedpc;
    L->allowhook = old_allowhooks;

    }
  }
  L->errfunc = old_errfunc;
  __dyc_dummy_label:  ;
  __dyc_print_ptr__typdef_TValue(oldtop);
}
}
