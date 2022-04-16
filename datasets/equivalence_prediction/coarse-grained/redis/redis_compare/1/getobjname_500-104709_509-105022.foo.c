#include "../../include/dycfoo.h"
#include "../../include/ldebug.i.hd.c.h"
void __dyc_foo(void) 
{ Proto *p ;
  int pc ;
  int tmp ;
  Instruction i ;
  char const __attribute__((__visibility__("hidden")))  *tmp___0 ;
  int g ;
  int a ;
  int b ;
  char const   *tmp___1 ;
  int k ;
  int u ;
  int k___0 ;
  CallInfo *ci ;
  char const   **name ;
  int __dyc_funcallvar_1 ;
  char const __attribute__((__visibility__("hidden")))  *__dyc_funcallvar_2 ;
  Instruction __dyc_funcallvar_3 ;
  char const   *__dyc_funcallvar_4 ;
  char const   *__dyc_funcallvar_5 ;
  char const   *__dyc_funcallvar_6 ;

  {
  ci = __dyc_read_ptr__typdef_CallInfo();
  name = (char const   **)__dyc_read_ptr__ptr__char();
  __dyc_funcallvar_1 = __dyc_readpre_byte();
  __dyc_funcallvar_2 = (char const __attribute__((__visibility__("hidden")))  *)__dyc_read_ptr__char();
  __dyc_funcallvar_3 = (Instruction )__dyc_readpre_byte();
  __dyc_funcallvar_4 = (char const   *)__dyc_read_ptr__char();
  __dyc_funcallvar_5 = (char const   *)__dyc_read_ptr__char();
  __dyc_funcallvar_6 = (char const   *)__dyc_read_ptr__char();
  p = 0;
  pc = 0;
  tmp = 0;
  i = 0;
  tmp___0 = 0;
  g = 0;
  a = 0;
  b = 0;
  tmp___1 = 0;
  k = 0;
  u = 0;
  k___0 = 0;
  p = ((ci->func)->value.gc)->cl.l.p;
  tmp = __dyc_funcallvar_1;
  pc = tmp;
  tmp___0 = __dyc_funcallvar_2;
  *name = (char const   *)tmp___0;
  if (*name) {
    goto __dyc_dummy_label;
  }
  i = __dyc_funcallvar_3;
  if ((int )((enum __anonenum_OpCode_13 )(i & ~ (4294967295U << 6))) == 5) {
    goto switch_11_5;
  } else {
    if ((int )((enum __anonenum_OpCode_13 )(i & ~ (4294967295U << 6))) == 0) {
      goto switch_11_0;
    } else {
      if ((int )((enum __anonenum_OpCode_13 )(i & ~ (4294967295U << 6))) == 6) {
        goto switch_11_6;
      } else {
        if ((int )((enum __anonenum_OpCode_13 )(i & ~ (4294967295U << 6))) == 4) {
          goto switch_11_4;
        } else {
          if ((int )((enum __anonenum_OpCode_13 )(i & ~ (4294967295U << 6))) == 11) {
            goto switch_11_11;
          } else {
            {
            goto switch_11_default;
            if (0) {
              switch_11_5:  
              g = (int )((i >> 14) & ~ (4294967295U << 18));
              *name = (char const   *)(& ((p->k + g)->value.gc)->ts + 1);
              goto __dyc_dummy_label;
              switch_11_0:  
              a = (int )((i >> 6) & ~ (4294967295U << 8));
              b = (int )((i >> 23) & ~ (4294967295U << 9));
              if (b < a) {
                {
                tmp___1 = __dyc_funcallvar_4;
                }
                goto __dyc_dummy_label;
              }
              goto switch_11_break;
              switch_11_6:  
              {
              k = (int )((i >> 14) & ~ (4294967295U << 9));
              *name = __dyc_funcallvar_5;
              }
              goto __dyc_dummy_label;
              switch_11_4:  
              u = (int )((i >> 23) & ~ (4294967295U << 9));
              if (p->upvalues) {
                *name = (char const   *)(*(p->upvalues + u) + 1);
              } else {
                *name = "?";
              }
              goto __dyc_dummy_label;
              switch_11_11:  
              {
              k___0 = (int )((i >> 14) & ~ (4294967295U << 9));
              *name = __dyc_funcallvar_6;
              }
              goto __dyc_dummy_label;
              switch_11_default:  ;
              goto switch_11_break;
            } else {
              switch_11_break:  ;
            }
            }
          }
        }
      }
    }
  }
  __dyc_dummy_label:  ;
  __dyc_print_ptr__typdef_Proto(p);
  __dyc_printpre_byte(pc);
  __dyc_print_ptr__char(tmp___1);
  __dyc_printpre_byte(k);
  __dyc_printpre_byte(u);
  __dyc_printpre_byte(k___0);
}
}
