#include "../../include/dycfoo.h"
#include "../../include/lvm.i.hd.c.h"
void __dyc_foo(void) 
{ StkId base ;
  Instruction const   *pc ;
  Instruction i ;
  StkId ra ;
  TValue const   *rb___9 ;
  TValue *i_o___11 ;
  int __attribute__((__visibility__("hidden")))  tmp___22 ;
  TValue *i_o___12 ;
  int tmp___23 ;
  int b___1 ;
  int c___0 ;
  TValue const   *o2___4 ;
  TValue *o1___4 ;
  lua_State *L ;
  int __attribute__((__visibility__("hidden")))  __dyc_funcallvar_6 ;
  int __dyc_funcallvar_7 ;

  {
  base = __dyc_read_ptr__typdef_TValue();
  pc = (Instruction const   *)__dyc_read_ptr__typdef_Instruction();
  i = (Instruction )__dyc_readpre_byte();
  ra = __dyc_read_ptr__typdef_TValue();
  L = __dyc_read_ptr__typdef_lua_State();
  __dyc_funcallvar_6 = (int __attribute__((__visibility__("hidden")))  )__dyc_readpre_byte();
  __dyc_funcallvar_7 = __dyc_readpre_byte();
  rb___9 = 0;
  i_o___11 = 0;
  tmp___22 = 0;
  i_o___12 = 0;
  tmp___23 = 0;
  b___1 = 0;
  c___0 = 0;
  o2___4 = 0;
  o1___4 = 0;
  switch_9_20:  
  rb___9 = (TValue const   *)(base + (int )((i >> 23) & ~ (4294967295U << 9)));
  if ((int )rb___9->tt == 5) {
    goto switch_11_5;
  } else {
    if ((int )rb___9->tt == 4) {
      goto switch_11_4;
    } else {
      {
      goto switch_11_default;
      if (0) {
        switch_11_5:  
        {
        i_o___11 = ra;
        tmp___22 = __dyc_funcallvar_6;
        i_o___11->value.n = (double )tmp___22;
        i_o___11->tt = 3;
        }
        goto switch_11_break;
        switch_11_4:  
        i_o___12 = ra;
        i_o___12->value.n = (double )(rb___9->value.gc)->ts.tsv.len;
        i_o___12->tt = 3;
        goto switch_11_break;
        switch_11_default:  
        {
        L->savedpc = pc;
        tmp___23 = __dyc_funcallvar_7;
        }
        if (! tmp___23) {
          {

          }
        }
        base = L->base;
      } else {
        switch_11_break:  ;
      }
      }
    }
  }
  goto __dyc_dummy_label;
  b___1 = (int )((i >> 23) & ~ (4294967295U << 9));
  c___0 = (int )((i >> 14) & ~ (4294967295U << 9));
  L->savedpc = pc;

  if ((L->l_G)->totalbytes >= (L->l_G)->GCthreshold) {
    {

    }
  }
  base = L->base;
  o2___4 = (TValue const   *)(base + b___1);
  o1___4 = base + (int )((i >> 6) & ~ (4294967295U << 8));
  o1___4->value = (union __anonunion_Value_29 )o2___4->value;
  o1___4->tt = (int )o2___4->tt;
  goto __dyc_dummy_label;
  switch_9_22:  
  pc += (int )((i >> 14) & ~ (4294967295U << 18)) - (((1 << 18) - 1) >> 1);
  __dyc_dummy_label:  ;
  __dyc_print_ptr__typdef_TValue(base);
  __dyc_print_ptr__typdef_Instruction(pc);
  __dyc_printpre_byte(c___0);
}
}
