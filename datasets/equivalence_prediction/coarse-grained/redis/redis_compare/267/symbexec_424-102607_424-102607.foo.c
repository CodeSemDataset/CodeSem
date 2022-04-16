#include "../../include/dycfoo.h"
#include "../../include/ldebug.i.hd.c.h"
void __dyc_foo(void) 
{ int pc ;
  int last ;
  OpCode op ;
  int a ;
  int b ;
  int c ;
  int dest___0 ;
  int __attribute__((__visibility__("hidden")))  tmp___2 ;
  int nup ;
  int j___0 ;
  OpCode op1 ;
  int __attribute__((__visibility__("hidden")))  tmp___3 ;
  Proto const   *pt ;
  int lastpc ;
  int reg ;
  int __attribute__((__visibility__("hidden")))  __dyc_funcallvar_4 ;
  int __attribute__((__visibility__("hidden")))  __dyc_funcallvar_5 ;

  {
  pc = __dyc_readpre_byte();
  op = (OpCode )__dyc_readpre_byte();
  a = __dyc_readpre_byte();
  b = __dyc_readpre_byte();
  c = __dyc_readpre_byte();
  pt = (Proto const   *)__dyc_read_ptr__typdef_Proto();
  reg = __dyc_readpre_byte();
  __dyc_funcallvar_4 = (int __attribute__((__visibility__("hidden")))  )__dyc_readpre_byte();
  __dyc_funcallvar_5 = (int __attribute__((__visibility__("hidden")))  )__dyc_readpre_byte();
  last = 0;
  dest___0 = 0;
  tmp___2 = 0;
  nup = 0;
  j___0 = 0;
  op1 = 0;
  tmp___3 = 0;
  lastpc = 0;
  if ((int )op == 29) {
    goto switch_9_28;
  } else {
    if ((int )op == 30) {
      goto switch_9_30;
    } else {
      if ((int )op == 34) {
        goto switch_9_34;
      } else {
        if ((int )op == 36) {
          goto switch_9_36;
        } else {
          if ((int )op == 37) {
            goto switch_9_37;
          } else {
            {
            goto switch_9_default;
            if (0) {
              switch_9_2:  
              if (c == 1) {
                if (! (pc + 2 < (int )pt->sizecode)) {
                  goto __dyc_dummy_label;
                }
                if (! ((int )((enum __anonenum_OpCode_13 )(*(pt->code + (pc + 1)) & ~ (4294967295U << 6))) != 34)) {
                  if (! ((int )((*(pt->code + (pc + 1)) >> 14) & ~ (4294967295U << 9)) != 0)) {
                    goto __dyc_dummy_label;
                  }
                }
              }
              goto switch_9_break;
              switch_9_3:  
              if (a <= reg) {
                if (reg <= b) {
                  last = pc;
                }
              }
              goto switch_9_break;
              switch_9_4:  
              switch_9_8:  
              if (! (b < (int )pt->nups)) {
                goto __dyc_dummy_label;
              }
              goto switch_9_break;
              switch_9_5:  
              switch_9_7:  
              if (! ((pt->k + b)->tt == 4)) {
                goto __dyc_dummy_label;
              }
              goto switch_9_break;
              switch_9_11:  
              if (! (a + 1 < (int )pt->maxstacksize)) {
                goto __dyc_dummy_label;
              }
              if (reg == a + 1) {
                last = pc;
              }
              goto switch_9_break;
              switch_9_21:  
              if (! (b < c)) {
                goto __dyc_dummy_label;
              }
              goto switch_9_break;
              switch_9_33:  
              if (! (c >= 1)) {
                goto __dyc_dummy_label;
              }
              if (! ((a + 2) + c < (int )pt->maxstacksize)) {
                goto __dyc_dummy_label;
              }
              if (reg >= a + 2) {
                last = pc;
              }
              goto switch_9_break;
              switch_9_31:  
              switch_9_32:  
              if (! (a + 3 < (int )pt->maxstacksize)) {
                goto __dyc_dummy_label;
              }
              switch_9_22:  
              dest___0 = (pc + 1) + b;
              if (reg != (1 << 8) - 1) {
                if (pc < dest___0) {
                  if (dest___0 <= lastpc) {
                    pc += b;
                  }
                }
              }
              goto switch_9_break;
              switch_9_28:  
              switch_9_29:  
              if (b != 0) {
                if (! ((a + b) - 1 < (int )pt->maxstacksize)) {
                  goto __dyc_dummy_label;
                }
              }
              c --;
              if (c == -1) {
                {
                tmp___2 = __dyc_funcallvar_4;
                }
                if (! tmp___2) {
                  goto __dyc_dummy_label;
                }
              } else {
                if (c != 0) {
                  if (! ((a + c) - 1 < (int )pt->maxstacksize)) {
                    goto __dyc_dummy_label;
                  }
                }
              }
              if (reg >= a) {
                last = pc;
              }
              goto switch_9_break;
              switch_9_30:  
              b --;
              if (b > 0) {
                if (! ((a + b) - 1 < (int )pt->maxstacksize)) {
                  goto __dyc_dummy_label;
                }
              }
              goto switch_9_break;
              switch_9_34:  
              if (b > 0) {
                if (! (a + b < (int )pt->maxstacksize)) {
                  goto __dyc_dummy_label;
                }
              }
              if (c == 0) {
                pc ++;
                if (! (pc < (int )(pt->sizecode - 1))) {
                  goto __dyc_dummy_label;
                }
              }
              goto switch_9_break;
              switch_9_36:  
              if (! (b < (int )pt->sizep)) {
                goto __dyc_dummy_label;
              }
              nup = (int )(*(pt->p + b))->nups;
              if (! (pc + nup < (int )pt->sizecode)) {
                goto __dyc_dummy_label;
              }
              j___0 = 1;
              {
              while (1) {
                while_10_continue:  ;
                if (! (j___0 <= nup)) {
                  goto while_10_break;
                }
                op1 = (enum __anonenum_OpCode_13 )(*(pt->code + (pc + j___0)) & ~ (4294967295U << 6));
                if (! ((int )op1 == 4)) {
                  if (! ((int )op1 == 0)) {
                    goto __dyc_dummy_label;
                  }
                }
                j___0 ++;
              }
              while_10_break:  ;
              }
              if (reg != (1 << 8) - 1) {
                pc += nup;
              }
              goto switch_9_break;
              switch_9_37:  
              if ((int const   )pt->is_vararg & 2) {
                if (! (! ((int const   )pt->is_vararg & 4))) {
                  goto __dyc_dummy_label;
                }
              } else {
                goto __dyc_dummy_label;
              }
              b --;
              if (b == -1) {
                {
                tmp___3 = __dyc_funcallvar_5;
                }
                if (! tmp___3) {
                  goto __dyc_dummy_label;
                }
              }
              if (! ((a + b) - 1 < (int )pt->maxstacksize)) {
                goto __dyc_dummy_label;
              }
              goto switch_9_break;
              switch_9_default:  ;
              goto switch_9_break;
            } else {
              switch_9_break:  ;
            }
            }
          }
        }
      }
    }
  }
  __dyc_dummy_label:  ;
  __dyc_printpre_byte(pc);
  __dyc_printpre_byte(last);
}
}
