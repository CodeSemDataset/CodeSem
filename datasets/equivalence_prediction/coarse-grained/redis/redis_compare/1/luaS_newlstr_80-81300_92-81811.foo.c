#include "../../include/dycfoo.h"
#include "../../include/lstring.i.hd.c.h"
void __dyc_foo(void) 
{ GCObject *o ;
  unsigned int h ;
  size_t step ;
  size_t l1 ;
  TString *ts ;
  int tmp ;
  TString *tmp___0 ;
  lua_State *L ;
  char const   *str ;
  size_t l ;
  int __dyc_funcallvar_1 ;
  TString *__dyc_funcallvar_2 ;

  {
  h = (unsigned int )__dyc_readpre_byte();
  step = (size_t )__dyc_readpre_byte();
  l1 = (size_t )__dyc_readpre_byte();
  L = __dyc_read_ptr__typdef_lua_State();
  str = (char const   *)__dyc_read_ptr__char();
  l = (size_t )__dyc_readpre_byte();
  __dyc_funcallvar_1 = __dyc_readpre_byte();
  __dyc_funcallvar_2 = __dyc_read_ptr__typdef_TString();
  o = 0;
  ts = 0;
  tmp = 0;
  tmp___0 = 0;
  while (1) {
    while_3_continue:  ;
    if (! (l1 >= step)) {
      goto while_3_break;
    }
    h ^= ((h << 5) + (h >> 2)) + (unsigned int )((unsigned char )*(str + (l1 - 1UL)));
    l1 -= step;
  }
  while_3_break:  ;
  o = *((L->l_G)->strt.hash + (int )(h & (unsigned int )((L->l_G)->strt.size - 1)));
  while (1) {
    while_4_continue:  ;
    if (! ((unsigned long )o != (unsigned long )((void *)0))) {
      goto while_4_break;
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
  }
  while_4_break:  ;
  tmp___0 = __dyc_funcallvar_2;
  goto __dyc_dummy_label;
  __dyc_dummy_label:  ;
  __dyc_print_ptr__typdef_TString(tmp___0);
}
}
