#include "../../include/dycfoo.h"
#include "../../include/ldebug.i.hd.c.h"
void __dyc_foo(void) 
{ lu_byte const __attribute__((__visibility__("hidden")))  luaP_opmodes[38] ;
  int pc ;
  int last ;
  int tmp ;
  Instruction i ;
  OpCode op ;
  int a ;
  int b ;
  int c ;
  int tmp___0 ;
  int tmp___1 ;
  int dest ;
  int j ;
  Instruction d ;
  int dest___0 ;
  int __attribute__((__visibility__("hidden")))  tmp___2 ;
  int nup ;
  int j___0 ;
  OpCode op1 ;
  int __attribute__((__visibility__("hidden")))  tmp___3 ;
  Proto const   *pt ;
  int lastpc ;
  int reg ;
  int __dyc_funcallvar_2 ;
  int __dyc_funcallvar_3 ;
  int __attribute__((__visibility__("hidden")))  __dyc_funcallvar_4 ;
  int __attribute__((__visibility__("hidden")))  __dyc_funcallvar_5 ;

  {
  tmp = __dyc_readpre_byte();
  pt = (Proto const   *)__dyc_read_ptr__typdef_Proto();
  lastpc = __dyc_readpre_byte();
  reg = __dyc_readpre_byte();
  __dyc_funcallvar_2 = __dyc_readpre_byte();
  __dyc_funcallvar_3 = __dyc_readpre_byte();
  __dyc_funcallvar_4 = (int __attribute__((__visibility__("hidden")))  )__dyc_readpre_byte();
  __dyc_funcallvar_5 = (int __attribute__((__visibility__("hidden")))  )__dyc_readpre_byte();
  pc = 0;
  last = 0;
  i = 0;
  op = 0;
  a = 0;
  b = 0;
  c = 0;
  tmp___0 = 0;
  tmp___1 = 0;
  dest = 0;
  j = 0;
  d = 0;
  dest___0 = 0;
  tmp___2 = 0;
  nup = 0;
  j___0 = 0;
  op1 = 0;
  tmp___3 = 0;
  if (! tmp) {
    goto __dyc_dummy_label;
  }
  pc = 0;
  while (1) {
    while_6_continue:  ;
    if (! (pc < lastpc)) {
      goto __dyc_dummy_label;
    }
    i = *(pt->code + pc);
    op = (enum __anonenum_OpCode_13 )(i & ~ (4294967295U << 6));
    a = (int )((i >> 6) & ~ (4294967295U << 8));
    b = 0;
    c = 0;
    if (! ((int )op < 38)) {
      goto __dyc_dummy_label;
    }
    if (! (a < (int )pt->maxstacksize)) {
      goto __dyc_dummy_label;
    }
    if ((int )((enum OpMode )((int const __attribute__((__visibility__("hidden")))  )luaP_opmodes[op] & (int const __attribute__((__visibility__("hidden")))  )3)) == 0) {
      goto switch_7_0;
    } else {
      if ((int )((enum OpMode )((int const __attribute__((__visibility__("hidden")))  )luaP_opmodes[op] & (int const __attribute__((__visibility__("hidden")))  )3)) == 1) {
        goto switch_7_1;
      } else {
        if ((int )((enum OpMode )((int const __attribute__((__visibility__("hidden")))  )luaP_opmodes[op] & (int const __attribute__((__visibility__("hidden")))  )3)) == 2) {
          goto switch_7_2;
        } else {
          if (0) {
            switch_7_0:  
            {
            b = (int )((i >> 23) & ~ (4294967295U << 9));
            c = (int )((i >> 14) & ~ (4294967295U << 9));
            tmp___0 = __dyc_funcallvar_2;
            }
            if (! tmp___0) {
              goto __dyc_dummy_label;
            }
            {
            tmp___1 = __dyc_funcallvar_3;
            }
            if (! tmp___1) {
              goto __dyc_dummy_label;
            }
            goto switch_7_break;
            switch_7_1:  
            b = (int )((i >> 14) & ~ (4294967295U << 18));
            if ((int )((enum OpArgMask )(((int const __attribute__((__visibility__("hidden")))  )luaP_opmodes[op] >> 4) & (int const __attribute__((__visibility__("hidden")))  )3)) == 3) {
              if (! (b < (int )pt->sizek)) {
                goto __dyc_dummy_label;
              }
            }
            goto switch_7_break;
            switch_7_2:  
            b = (int )((i >> 14) & ~ (4294967295U << 18)) - (((1 << 18) - 1) >> 1);
            if ((int )((enum OpArgMask )(((int const __attribute__((__visibility__("hidden")))  )luaP_opmodes[op] >> 4) & (int const __attribute__((__visibility__("hidden")))  )3)) == 2) {
              dest = (pc + 1) + b;
              if (0 <= dest) {
                if (! (dest < (int )pt->sizecode)) {
                  goto __dyc_dummy_label;
                }
              } else {
                goto __dyc_dummy_label;
              }
              if (dest > 0) {
                j = 0;
                {
                while (1) {
                  while_8_continue:  ;
                  if (! (j < dest)) {
                    goto while_8_break;
                  }
                  d = *(pt->code + ((dest - 1) - j));
                  if ((int )((enum __anonenum_OpCode_13 )(d & ~ (4294967295U << 6))) == 34) {
                    if (! ((int )((d >> 14) & ~ (4294967295U << 9)) == 0)) {
                      goto while_8_break;
                    }
                  } else {
                    goto while_8_break;
                  }
                  j ++;
                }
                while_8_break:  ;
                }
                if (! ((j & 1) == 0)) {
                  goto __dyc_dummy_label;
                }
              }
            }
            goto switch_7_break;
          } else {
            switch_7_break:  ;
          }
        }
      }
    }
    if ((int const __attribute__((__visibility__("hidden")))  )luaP_opmodes[op] & (int const __attribute__((__visibility__("hidden")))  )(1 << 6)) {
      if (a == reg) {
        last = pc;
      }
    }
    if ((int const __attribute__((__visibility__("hidden")))  )luaP_opmodes[op] & (int const __attribute__((__visibility__("hidden")))  )(1 << 7)) {
      if (! (pc + 2 < (int )pt->sizecode)) {
        goto __dyc_dummy_label;
      }
      if (! ((int )((enum __anonenum_OpCode_13 )(*(pt->code + (pc + 1)) & ~ (4294967295U << 6))) == 22)) {
        goto __dyc_dummy_label;
      }
    }
    if ((int )op == 2) {
      goto switch_9_2;
    } else {
      if ((int )op == 3) {
        goto switch_9_3;
      } else {
        if ((int )op == 4) {
          goto switch_9_4;
        } else {
          if ((int )op == 8) {
            goto switch_9_4;
          } else {
            if ((int )op == 5) {
              goto switch_9_5;
            } else {
              if ((int )op == 7) {
                goto switch_9_5;
              } else {
                if ((int )op == 11) {
                  goto switch_9_11;
                } else {
                  if ((int )op == 21) {
                    goto switch_9_21;
                  } else {
                    if ((int )op == 33) {
                      goto switch_9_33;
                    } else {
                      if ((int )op == 31) {
                        goto switch_9_31;
                      } else {
                        if ((int )op == 32) {
                          goto switch_9_31;
                        } else {
                          if ((int )op == 22) {
                            goto switch_9_22;
                          } else {
                            if ((int )op == 28) {
                              goto switch_9_28;
                            } else {
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
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    pc ++;
  }
  __dyc_dummy_label:  ;
  __dyc_printpre_byte(last);
  __dyc_printpre_byte(a);
  __dyc_printpre_byte(b);
  __dyc_printpre_byte(c);
  __dyc_printpre_byte(dest___0);
}
}
