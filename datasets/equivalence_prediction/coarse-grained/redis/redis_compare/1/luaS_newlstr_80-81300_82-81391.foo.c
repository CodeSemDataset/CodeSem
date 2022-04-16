#include "../../include/dycfoo.h"
#include "../../include/lstring.i.hd.c.h"
void __dyc_foo(void) 
{ GCObject *o ;
  unsigned int h ;
  size_t step ;
  size_t l1 ;
  TString *ts ;
  int tmp ;
  lua_State *L ;
  char const   *str ;
  size_t l ;
  int __dyc_funcallvar_1 ;

  {
  o = __dyc_read_ptr__typdef_GCObject();
  h = (unsigned int )__dyc_readpre_byte();
  step = (size_t )__dyc_readpre_byte();
  l1 = (size_t )__dyc_readpre_byte();
  L = __dyc_read_ptr__typdef_lua_State();
  str = (char const   *)__dyc_read_ptr__char();
  l = (size_t )__dyc_readpre_byte();
  __dyc_funcallvar_1 = __dyc_readpre_byte();
  ts = 0;
  tmp = 0;
  h ^= ((h << 5) + (h >> 2)) + (unsigned int )((unsigned char )*(str + (l1 - 1UL)));
  l1 -= step;
  while_4_continue:  ;
  if (! ((unsigned long )o != (unsigned long )((void *)0))) {
    goto __dyc_dummy_label;
  }
  ts = & o->ts;
  if (ts->tsv.len == l) {
    {
    tmp = __dyc_funcallvar_1;
    }
    if (tmp == 0) {
      if (((int )o->gch.marked & ((int )(L->l_G)->currentwhite ^ (1 | (1 << 1)))) & (1 | (1 << 1))) {
        o->gch.marked = (unsigned char )((int )o->gch.marked ^ (1 | (1 << 1)));
      }
      goto __dyc_dummy_label;
    }
  }
  o = o->gch.next;
  __dyc_dummy_label:  ;
  __dyc_printpre_byte(h);
  __dyc_printpre_byte(l1);
}
}
