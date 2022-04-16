#include "../../include/dycfoo.h"
#include "../../include/lzf_d.i.hd.c.h"
void __dyc_foo(void) 
{ u8 const   *ip ;
  u8 *op ;
  u8 const   *in_end ;
  u8 *out_end ;
  unsigned int ctrl ;
  u8 const   *tmp ;
  int *tmp___0 ;
  int *tmp___1 ;
  u8 *tmp___2 ;
  u8 const   *tmp___3 ;
  u8 *tmp___4 ;
  u8 const   *tmp___5 ;
  u8 *tmp___6 ;
  u8 const   *tmp___7 ;
  u8 *tmp___8 ;
  u8 const   *tmp___9 ;
  u8 *tmp___10 ;
  u8 const   *tmp___11 ;
  u8 *tmp___12 ;
  u8 const   *tmp___13 ;
  u8 *tmp___14 ;
  u8 const   *tmp___15 ;
  u8 *tmp___16 ;
  u8 const   *tmp___17 ;
  u8 *tmp___18 ;
  u8 const   *tmp___19 ;
  u8 *tmp___20 ;
  u8 const   *tmp___21 ;
  u8 *tmp___22 ;
  u8 const   *tmp___23 ;
  u8 *tmp___24 ;
  u8 const   *tmp___25 ;
  u8 *tmp___26 ;
  u8 const   *tmp___27 ;
  u8 *tmp___28 ;
  u8 const   *tmp___29 ;
  u8 *tmp___30 ;
  u8 const   *tmp___31 ;
  u8 *tmp___32 ;
  u8 const   *tmp___33 ;
  u8 *tmp___34 ;
  u8 const   *tmp___35 ;
  u8 *tmp___36 ;
  u8 const   *tmp___37 ;
  u8 *tmp___38 ;
  u8 const   *tmp___39 ;
  u8 *tmp___40 ;
  u8 const   *tmp___41 ;
  u8 *tmp___42 ;
  u8 const   *tmp___43 ;
  u8 *tmp___44 ;
  u8 const   *tmp___45 ;
  u8 *tmp___46 ;
  u8 const   *tmp___47 ;
  u8 *tmp___48 ;
  u8 const   *tmp___49 ;
  u8 *tmp___50 ;
  u8 const   *tmp___51 ;
  u8 *tmp___52 ;
  u8 const   *tmp___53 ;
  u8 *tmp___54 ;
  u8 const   *tmp___55 ;
  u8 *tmp___56 ;
  u8 const   *tmp___57 ;
  u8 *tmp___58 ;
  u8 const   *tmp___59 ;
  u8 *tmp___60 ;
  u8 const   *tmp___61 ;
  u8 *tmp___62 ;
  u8 const   *tmp___63 ;
  u8 *tmp___64 ;
  u8 const   *tmp___65 ;
  unsigned int len ;
  u8 *ref ;
  int *tmp___66 ;
  u8 const   *tmp___67 ;
  int *tmp___68 ;
  u8 const   *tmp___69 ;
  int *tmp___70 ;
  int *tmp___71 ;
  u8 *tmp___72 ;
  u8 *tmp___73 ;
  u8 *tmp___74 ;
  u8 *tmp___75 ;
  u8 *tmp___76 ;
  u8 *tmp___77 ;
  u8 *tmp___78 ;
  u8 *tmp___79 ;
  u8 *tmp___80 ;
  u8 *tmp___81 ;
  u8 *tmp___82 ;
  u8 *tmp___83 ;
  u8 *tmp___84 ;
  u8 *tmp___85 ;
  u8 *tmp___86 ;
  u8 *tmp___87 ;
  u8 *tmp___88 ;
  u8 *tmp___89 ;
  u8 *tmp___90 ;
  u8 *tmp___91 ;
  u8 *tmp___92 ;
  u8 *tmp___93 ;
  u8 *tmp___94 ;
  u8 *tmp___95 ;
  void *out_data ;
  int *__dyc_funcallvar_1 ;
  int *__dyc_funcallvar_2 ;
  int *__dyc_funcallvar_3 ;
  int *__dyc_funcallvar_4 ;
  int *__dyc_funcallvar_5 ;
  int *__dyc_funcallvar_6 ;

  {
  ip = (u8 const   *)__dyc_read_ptr__typdef_u8();
  op = __dyc_read_ptr__typdef_u8();
  in_end = (u8 const   *)__dyc_read_ptr__typdef_u8();
  out_end = __dyc_read_ptr__typdef_u8();
  out_data = __dyc_read_ptr__void();
  __dyc_funcallvar_1 = __dyc_read_ptr__int();
  __dyc_funcallvar_2 = __dyc_read_ptr__int();
  __dyc_funcallvar_3 = __dyc_read_ptr__int();
  __dyc_funcallvar_4 = __dyc_read_ptr__int();
  __dyc_funcallvar_5 = __dyc_read_ptr__int();
  __dyc_funcallvar_6 = __dyc_read_ptr__int();
  ctrl = 0;
  tmp = 0;
  tmp___0 = 0;
  tmp___1 = 0;
  tmp___2 = 0;
  tmp___3 = 0;
  tmp___4 = 0;
  tmp___5 = 0;
  tmp___6 = 0;
  tmp___7 = 0;
  tmp___8 = 0;
  tmp___9 = 0;
  tmp___10 = 0;
  tmp___11 = 0;
  tmp___12 = 0;
  tmp___13 = 0;
  tmp___14 = 0;
  tmp___15 = 0;
  tmp___16 = 0;
  tmp___17 = 0;
  tmp___18 = 0;
  tmp___19 = 0;
  tmp___20 = 0;
  tmp___21 = 0;
  tmp___22 = 0;
  tmp___23 = 0;
  tmp___24 = 0;
  tmp___25 = 0;
  tmp___26 = 0;
  tmp___27 = 0;
  tmp___28 = 0;
  tmp___29 = 0;
  tmp___30 = 0;
  tmp___31 = 0;
  tmp___32 = 0;
  tmp___33 = 0;
  tmp___34 = 0;
  tmp___35 = 0;
  tmp___36 = 0;
  tmp___37 = 0;
  tmp___38 = 0;
  tmp___39 = 0;
  tmp___40 = 0;
  tmp___41 = 0;
  tmp___42 = 0;
  tmp___43 = 0;
  tmp___44 = 0;
  tmp___45 = 0;
  tmp___46 = 0;
  tmp___47 = 0;
  tmp___48 = 0;
  tmp___49 = 0;
  tmp___50 = 0;
  tmp___51 = 0;
  tmp___52 = 0;
  tmp___53 = 0;
  tmp___54 = 0;
  tmp___55 = 0;
  tmp___56 = 0;
  tmp___57 = 0;
  tmp___58 = 0;
  tmp___59 = 0;
  tmp___60 = 0;
  tmp___61 = 0;
  tmp___62 = 0;
  tmp___63 = 0;
  tmp___64 = 0;
  tmp___65 = 0;
  len = 0;
  ref = 0;
  tmp___66 = 0;
  tmp___67 = 0;
  tmp___68 = 0;
  tmp___69 = 0;
  tmp___70 = 0;
  tmp___71 = 0;
  tmp___72 = 0;
  tmp___73 = 0;
  tmp___74 = 0;
  tmp___75 = 0;
  tmp___76 = 0;
  tmp___77 = 0;
  tmp___78 = 0;
  tmp___79 = 0;
  tmp___80 = 0;
  tmp___81 = 0;
  tmp___82 = 0;
  tmp___83 = 0;
  tmp___84 = 0;
  tmp___85 = 0;
  tmp___86 = 0;
  tmp___87 = 0;
  tmp___88 = 0;
  tmp___89 = 0;
  tmp___90 = 0;
  tmp___91 = 0;
  tmp___92 = 0;
  tmp___93 = 0;
  tmp___94 = 0;
  tmp___95 = 0;
  tmp = ip;
  ip ++;
  ctrl = (unsigned int )*tmp;
  if (ctrl < (unsigned int )(1 << 5)) {
    ctrl ++;
    if ((unsigned long )(op + ctrl) > (unsigned long )out_end) {
      {
      tmp___0 = __dyc_funcallvar_1;
      *tmp___0 = 7;
      }
      goto __dyc_dummy_label;
    }
    if ((unsigned long )(ip + ctrl) > (unsigned long )in_end) {
      {
      tmp___1 = __dyc_funcallvar_2;
      *tmp___1 = 22;
      }
      goto __dyc_dummy_label;
    }
    if ((int )ctrl == 32) {
      goto switch_1_32;
    } else {
      if ((int )ctrl == 31) {
        goto switch_1_31;
      } else {
        if ((int )ctrl == 30) {
          goto switch_1_30;
        } else {
          if ((int )ctrl == 29) {
            goto switch_1_29;
          } else {
            if ((int )ctrl == 28) {
              goto switch_1_28;
            } else {
              if ((int )ctrl == 27) {
                goto switch_1_27;
              } else {
                if ((int )ctrl == 26) {
                  goto switch_1_26;
                } else {
                  if ((int )ctrl == 25) {
                    goto switch_1_25;
                  } else {
                    if ((int )ctrl == 24) {
                      goto switch_1_24;
                    } else {
                      if ((int )ctrl == 23) {
                        goto switch_1_23;
                      } else {
                        if ((int )ctrl == 22) {
                          goto switch_1_22;
                        } else {
                          if ((int )ctrl == 21) {
                            goto switch_1_21;
                          } else {
                            if ((int )ctrl == 20) {
                              goto switch_1_20;
                            } else {
                              if ((int )ctrl == 19) {
                                goto switch_1_19;
                              } else {
                                if ((int )ctrl == 18) {
                                  goto switch_1_18;
                                } else {
                                  if ((int )ctrl == 17) {
                                    goto switch_1_17;
                                  } else {
                                    if ((int )ctrl == 16) {
                                      goto switch_1_16;
                                    } else {
                                      if ((int )ctrl == 15) {
                                        goto switch_1_15;
                                      } else {
                                        if ((int )ctrl == 14) {
                                          goto switch_1_14;
                                        } else {
                                          if ((int )ctrl == 13) {
                                            goto switch_1_13;
                                          } else {
                                            if ((int )ctrl == 12) {
                                              goto switch_1_12;
                                            } else {
                                              if ((int )ctrl == 11) {
                                                goto switch_1_11;
                                              } else {
                                                if ((int )ctrl == 10) {
                                                  goto switch_1_10;
                                                } else {
                                                  if ((int )ctrl == 9) {
                                                    goto switch_1_9;
                                                  } else {
                                                    if ((int )ctrl == 8) {
                                                      goto switch_1_8;
                                                    } else {
                                                      if ((int )ctrl == 7) {
                                                        goto switch_1_7;
                                                      } else {
                                                        if ((int )ctrl == 6) {
                                                          goto switch_1_6;
                                                        } else {
                                                          if ((int )ctrl == 5) {
                                                            goto switch_1_5;
                                                          } else {
                                                            if ((int )ctrl == 4) {
                                                              goto switch_1_4;
                                                            } else {
                                                              if ((int )ctrl == 3) {
                                                                goto switch_1_3;
                                                              } else {
                                                                if ((int )ctrl == 2) {
                                                                  goto switch_1_2;
                                                                } else {
                                                                  if ((int )ctrl == 1) {
                                                                    goto switch_1_1;
                                                                  } else {
                                                                    if (0) {
                                                                      switch_1_32:  
                                                                      tmp___2 = op;
                                                                      op ++;
                                                                      tmp___3 = ip;
                                                                      ip ++;
                                                                      *tmp___2 = (unsigned char )*tmp___3;
                                                                      switch_1_31:  
                                                                      tmp___4 = op;
                                                                      op ++;
                                                                      tmp___5 = ip;
                                                                      ip ++;
                                                                      *tmp___4 = (unsigned char )*tmp___5;
                                                                      switch_1_30:  
                                                                      tmp___6 = op;
                                                                      op ++;
                                                                      tmp___7 = ip;
                                                                      ip ++;
                                                                      *tmp___6 = (unsigned char )*tmp___7;
                                                                      switch_1_29:  
                                                                      tmp___8 = op;
                                                                      op ++;
                                                                      tmp___9 = ip;
                                                                      ip ++;
                                                                      *tmp___8 = (unsigned char )*tmp___9;
                                                                      switch_1_28:  
                                                                      tmp___10 = op;
                                                                      op ++;
                                                                      tmp___11 = ip;
                                                                      ip ++;
                                                                      *tmp___10 = (unsigned char )*tmp___11;
                                                                      switch_1_27:  
                                                                      tmp___12 = op;
                                                                      op ++;
                                                                      tmp___13 = ip;
                                                                      ip ++;
                                                                      *tmp___12 = (unsigned char )*tmp___13;
                                                                      switch_1_26:  
                                                                      tmp___14 = op;
                                                                      op ++;
                                                                      tmp___15 = ip;
                                                                      ip ++;
                                                                      *tmp___14 = (unsigned char )*tmp___15;
                                                                      switch_1_25:  
                                                                      tmp___16 = op;
                                                                      op ++;
                                                                      tmp___17 = ip;
                                                                      ip ++;
                                                                      *tmp___16 = (unsigned char )*tmp___17;
                                                                      switch_1_24:  
                                                                      tmp___18 = op;
                                                                      op ++;
                                                                      tmp___19 = ip;
                                                                      ip ++;
                                                                      *tmp___18 = (unsigned char )*tmp___19;
                                                                      switch_1_23:  
                                                                      tmp___20 = op;
                                                                      op ++;
                                                                      tmp___21 = ip;
                                                                      ip ++;
                                                                      *tmp___20 = (unsigned char )*tmp___21;
                                                                      switch_1_22:  
                                                                      tmp___22 = op;
                                                                      op ++;
                                                                      tmp___23 = ip;
                                                                      ip ++;
                                                                      *tmp___22 = (unsigned char )*tmp___23;
                                                                      switch_1_21:  
                                                                      tmp___24 = op;
                                                                      op ++;
                                                                      tmp___25 = ip;
                                                                      ip ++;
                                                                      *tmp___24 = (unsigned char )*tmp___25;
                                                                      switch_1_20:  
                                                                      tmp___26 = op;
                                                                      op ++;
                                                                      tmp___27 = ip;
                                                                      ip ++;
                                                                      *tmp___26 = (unsigned char )*tmp___27;
                                                                      switch_1_19:  
                                                                      tmp___28 = op;
                                                                      op ++;
                                                                      tmp___29 = ip;
                                                                      ip ++;
                                                                      *tmp___28 = (unsigned char )*tmp___29;
                                                                      switch_1_18:  
                                                                      tmp___30 = op;
                                                                      op ++;
                                                                      tmp___31 = ip;
                                                                      ip ++;
                                                                      *tmp___30 = (unsigned char )*tmp___31;
                                                                      switch_1_17:  
                                                                      tmp___32 = op;
                                                                      op ++;
                                                                      tmp___33 = ip;
                                                                      ip ++;
                                                                      *tmp___32 = (unsigned char )*tmp___33;
                                                                      switch_1_16:  
                                                                      tmp___34 = op;
                                                                      op ++;
                                                                      tmp___35 = ip;
                                                                      ip ++;
                                                                      *tmp___34 = (unsigned char )*tmp___35;
                                                                      switch_1_15:  
                                                                      tmp___36 = op;
                                                                      op ++;
                                                                      tmp___37 = ip;
                                                                      ip ++;
                                                                      *tmp___36 = (unsigned char )*tmp___37;
                                                                      switch_1_14:  
                                                                      tmp___38 = op;
                                                                      op ++;
                                                                      tmp___39 = ip;
                                                                      ip ++;
                                                                      *tmp___38 = (unsigned char )*tmp___39;
                                                                      switch_1_13:  
                                                                      tmp___40 = op;
                                                                      op ++;
                                                                      tmp___41 = ip;
                                                                      ip ++;
                                                                      *tmp___40 = (unsigned char )*tmp___41;
                                                                      switch_1_12:  
                                                                      tmp___42 = op;
                                                                      op ++;
                                                                      tmp___43 = ip;
                                                                      ip ++;
                                                                      *tmp___42 = (unsigned char )*tmp___43;
                                                                      switch_1_11:  
                                                                      tmp___44 = op;
                                                                      op ++;
                                                                      tmp___45 = ip;
                                                                      ip ++;
                                                                      *tmp___44 = (unsigned char )*tmp___45;
                                                                      switch_1_10:  
                                                                      tmp___46 = op;
                                                                      op ++;
                                                                      tmp___47 = ip;
                                                                      ip ++;
                                                                      *tmp___46 = (unsigned char )*tmp___47;
                                                                      switch_1_9:  
                                                                      tmp___48 = op;
                                                                      op ++;
                                                                      tmp___49 = ip;
                                                                      ip ++;
                                                                      *tmp___48 = (unsigned char )*tmp___49;
                                                                      switch_1_8:  
                                                                      tmp___50 = op;
                                                                      op ++;
                                                                      tmp___51 = ip;
                                                                      ip ++;
                                                                      *tmp___50 = (unsigned char )*tmp___51;
                                                                      switch_1_7:  
                                                                      tmp___52 = op;
                                                                      op ++;
                                                                      tmp___53 = ip;
                                                                      ip ++;
                                                                      *tmp___52 = (unsigned char )*tmp___53;
                                                                      switch_1_6:  
                                                                      tmp___54 = op;
                                                                      op ++;
                                                                      tmp___55 = ip;
                                                                      ip ++;
                                                                      *tmp___54 = (unsigned char )*tmp___55;
                                                                      switch_1_5:  
                                                                      tmp___56 = op;
                                                                      op ++;
                                                                      tmp___57 = ip;
                                                                      ip ++;
                                                                      *tmp___56 = (unsigned char )*tmp___57;
                                                                      switch_1_4:  
                                                                      tmp___58 = op;
                                                                      op ++;
                                                                      tmp___59 = ip;
                                                                      ip ++;
                                                                      *tmp___58 = (unsigned char )*tmp___59;
                                                                      switch_1_3:  
                                                                      tmp___60 = op;
                                                                      op ++;
                                                                      tmp___61 = ip;
                                                                      ip ++;
                                                                      *tmp___60 = (unsigned char )*tmp___61;
                                                                      switch_1_2:  
                                                                      tmp___62 = op;
                                                                      op ++;
                                                                      tmp___63 = ip;
                                                                      ip ++;
                                                                      *tmp___62 = (unsigned char )*tmp___63;
                                                                      switch_1_1:  
                                                                      tmp___64 = op;
                                                                      op ++;
                                                                      tmp___65 = ip;
                                                                      ip ++;
                                                                      *tmp___64 = (unsigned char )*tmp___65;
                                                                    } else {
                                                                      switch_1_break:  ;
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
  } else {
    len = ctrl >> 5;
    ref = (op - ((ctrl & 31U) << 8)) - 1;
    if ((unsigned long )ip >= (unsigned long )in_end) {
      {
      tmp___66 = __dyc_funcallvar_3;
      *tmp___66 = 22;
      }
      goto __dyc_dummy_label;
    }
    if (len == 7U) {
      tmp___67 = ip;
      ip ++;
      len += (unsigned int )*tmp___67;
      if ((unsigned long )ip >= (unsigned long )in_end) {
        {
        tmp___68 = __dyc_funcallvar_4;
        *tmp___68 = 22;
        }
        goto __dyc_dummy_label;
      }
    }
    tmp___69 = ip;
    ip ++;
    ref -= (int const   )*tmp___69;
    if ((unsigned long )((op + len) + 2) > (unsigned long )out_end) {
      {
      tmp___70 = __dyc_funcallvar_5;
      *tmp___70 = 7;
      }
      goto __dyc_dummy_label;
    }
    if ((unsigned long )ref < (unsigned long )((u8 *)out_data)) {
      {
      tmp___71 = __dyc_funcallvar_6;
      *tmp___71 = 22;
      }
      goto __dyc_dummy_label;
    }
    if ((int )len == 9) {
      goto switch_2_9;
    } else {
      if ((int )len == 8) {
        goto switch_2_8;
      } else {
        if ((int )len == 7) {
          goto switch_2_7;
        } else {
          if ((int )len == 6) {
            goto switch_2_6;
          } else {
            if ((int )len == 5) {
              goto switch_2_5;
            } else {
              if ((int )len == 4) {
                goto switch_2_4;
              } else {
                if ((int )len == 3) {
                  goto switch_2_3;
                } else {
                  if ((int )len == 2) {
                    goto switch_2_2;
                  } else {
                    if ((int )len == 1) {
                      goto switch_2_1;
                    } else {
                      if ((int )len == 0) {
                        goto switch_2_0;
                      } else {
                        {
                        goto switch_2_default;
                        if (0) {
                          switch_2_default:  
                          len += 2U;
                          if ((unsigned long )op >= (unsigned long )(ref + len)) {
                            {

                            op += len;
                            }
                          } else {
                            {
                            while (1) {
                              while_3_continue:  ;
                              tmp___72 = op;
                              op ++;
                              tmp___73 = ref;
                              ref ++;
                              *tmp___72 = *tmp___73;
                              len --;
                              if (! len) {
                                goto while_3_break;
                              }
                            }
                            while_3_break:  ;
                            }
                          }
                          goto switch_2_break;
                          switch_2_9:  
                          tmp___74 = op;
                          op ++;
                          tmp___75 = ref;
                          ref ++;
                          *tmp___74 = *tmp___75;
                          switch_2_8:  
                          tmp___76 = op;
                          op ++;
                          tmp___77 = ref;
                          ref ++;
                          *tmp___76 = *tmp___77;
                          switch_2_7:  
                          tmp___78 = op;
                          op ++;
                          tmp___79 = ref;
                          ref ++;
                          *tmp___78 = *tmp___79;
                          switch_2_6:  
                          tmp___80 = op;
                          op ++;
                          tmp___81 = ref;
                          ref ++;
                          *tmp___80 = *tmp___81;
                          switch_2_5:  
                          tmp___82 = op;
                          op ++;
                          tmp___83 = ref;
                          ref ++;
                          *tmp___82 = *tmp___83;
                          switch_2_4:  
                          tmp___84 = op;
                          op ++;
                          tmp___85 = ref;
                          ref ++;
                          *tmp___84 = *tmp___85;
                          switch_2_3:  
                          tmp___86 = op;
                          op ++;
                          tmp___87 = ref;
                          ref ++;
                          *tmp___86 = *tmp___87;
                          switch_2_2:  
                          tmp___88 = op;
                          op ++;
                          tmp___89 = ref;
                          ref ++;
                          *tmp___88 = *tmp___89;
                          switch_2_1:  
                          tmp___90 = op;
                          op ++;
                          tmp___91 = ref;
                          ref ++;
                          *tmp___90 = *tmp___91;
                          switch_2_0:  
                          tmp___92 = op;
                          op ++;
                          tmp___93 = ref;
                          ref ++;
                          *tmp___92 = *tmp___93;
                          tmp___94 = op;
                          op ++;
                          tmp___95 = ref;
                          ref ++;
                          *tmp___94 = *tmp___95;
                        } else {
                          switch_2_break:  ;
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
  if ((unsigned long )ip < (unsigned long )in_end) {

  }
  __dyc_dummy_label:  ;
  __dyc_print_ptr__typdef_u8(ip);
  __dyc_print_ptr__typdef_u8(op);
  __dyc_printpre_byte(len);
  __dyc_print_ptr__typdef_u8(ref);
}
}
