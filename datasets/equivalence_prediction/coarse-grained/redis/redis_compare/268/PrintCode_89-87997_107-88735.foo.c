#include "../../include/dycfoo.h"
#include "../../include/print.i.hd.c.h"
void __dyc_foo(void) 
{ lu_byte const __attribute__((__visibility__("hidden")))  luaP_opmodes[38] ;
  int pc ;
  OpCode o ;
  int b ;
  int c ;
  int line ;
  int tmp___0 ;
  int tmp___1 ;
  char const   *tmp___2 ;
  Proto const   *f ;

  {
  pc = __dyc_readpre_byte();
  o = (OpCode )__dyc_readpre_byte();
  b = __dyc_readpre_byte();
  c = __dyc_readpre_byte();
  line = __dyc_readpre_byte();
  f = (Proto const   *)__dyc_read_ptr__typdef_Proto();
  tmp___0 = 0;
  tmp___1 = 0;
  tmp___2 = 0;
  if (line > 0) {
    {

    }
  } else {
    {

    }
  }

  if ((int )((enum OpMode )((int const __attribute__((__visibility__("hidden")))  )luaP_opmodes[o] & (int const __attribute__((__visibility__("hidden")))  )3)) == 0) {
    goto switch_4_0;
  } else {
    if ((int )((enum OpMode )((int const __attribute__((__visibility__("hidden")))  )luaP_opmodes[o] & (int const __attribute__((__visibility__("hidden")))  )3)) == 1) {
      goto switch_4_1;
    } else {
      if ((int )((enum OpMode )((int const __attribute__((__visibility__("hidden")))  )luaP_opmodes[o] & (int const __attribute__((__visibility__("hidden")))  )3)) == 2) {
        goto switch_4_2;
      } else {
        if (0) {
          switch_4_0:  
          {

          }
          if ((int )((enum OpArgMask )(((int const __attribute__((__visibility__("hidden")))  )luaP_opmodes[o] >> 4) & (int const __attribute__((__visibility__("hidden")))  )3)) != 0) {
            if (b & (1 << 8)) {
              tmp___0 = -1 - (b & ~ (1 << 8));
            } else {
              tmp___0 = b;
            }
            {

            }
          }
          if ((int )((enum OpArgMask )(((int const __attribute__((__visibility__("hidden")))  )luaP_opmodes[o] >> 2) & (int const __attribute__((__visibility__("hidden")))  )3)) != 0) {
            if (c & (1 << 8)) {
              tmp___1 = -1 - (c & ~ (1 << 8));
            } else {
              tmp___1 = c;
            }
            {

            }
          }
          goto switch_4_break;
          switch_4_1:  
          if ((int )((enum OpArgMask )(((int const __attribute__((__visibility__("hidden")))  )luaP_opmodes[o] >> 4) & (int const __attribute__((__visibility__("hidden")))  )3)) == 3) {
            {

            }
          } else {
            {

            }
          }
          goto switch_4_break;
          switch_4_2:  
          if ((int )o == 22) {
            {

            }
          } else {
            {

            }
          }
          goto switch_4_break;
        } else {
          switch_4_break:  ;
        }
      }
    }
  }
  if ((int )o == 1) {
    goto switch_5_1;
  } else {
    if ((int )o == 4) {
      goto switch_5_4;
    } else {
      if ((int )o == 8) {
        goto switch_5_4;
      } else {
        if ((int )o == 5) {
          goto switch_5_5;
        } else {
          if ((int )o == 7) {
            goto switch_5_5;
          } else {
            if ((int )o == 6) {
              goto switch_5_6;
            } else {
              if ((int )o == 11) {
                goto switch_5_6;
              } else {
                if ((int )o == 9) {
                  goto switch_5_9;
                } else {
                  if ((int )o == 12) {
                    goto switch_5_9;
                  } else {
                    if ((int )o == 13) {
                      goto switch_5_9;
                    } else {
                      if ((int )o == 14) {
                        goto switch_5_9;
                      } else {
                        if ((int )o == 15) {
                          goto switch_5_9;
                        } else {
                          if ((int )o == 17) {
                            goto switch_5_9;
                          } else {
                            if ((int )o == 23) {
                              goto switch_5_9;
                            } else {
                              if ((int )o == 24) {
                                goto switch_5_9;
                              } else {
                                if ((int )o == 25) {
                                  goto switch_5_9;
                                } else {
                                  if ((int )o == 22) {
                                    goto switch_5_22;
                                  } else {
                                    if ((int )o == 31) {
                                      goto switch_5_22;
                                    } else {
                                      if ((int )o == 32) {
                                        goto switch_5_22;
                                      } else {
                                        if ((int )o == 36) {
                                          goto switch_5_36;
                                        } else {
                                          if ((int )o == 34) {
                                            goto switch_5_34;
                                          } else {
                                            {
                                            goto switch_5_default;
                                            if (0) {
                                              switch_5_1:  
                                              {


                                              }
                                              goto switch_5_break;
                                              switch_5_4:  
                                              switch_5_8:  
                                              if (f->sizeupvalues > 0) {
                                                tmp___2 = (char const   *)(*(f->upvalues + b) + 1);
                                              } else {
                                                tmp___2 = "-";
                                              }
                                              {

                                              }
                                              goto switch_5_break;
                                              switch_5_5:  
                                              switch_5_7:  
                                              {

                                              }
                                              goto switch_5_break;
                                              switch_5_6:  
                                              switch_5_11:  
                                              if (c & (1 << 8)) {
                                                {


                                                }
                                              }
                                              goto switch_5_break;
                                              switch_5_9:  
                                              switch_5_12:  
                                              switch_5_13:  
                                              switch_5_14:  
                                              switch_5_15:  
                                              switch_5_17:  
                                              switch_5_23:  
                                              switch_5_24:  
                                              switch_5_25:  
                                              if (b & (1 << 8)) {
                                                goto _L;
                                              } else {
                                                if (c & (1 << 8)) {
                                                  _L:  
                                                  {

                                                  }
                                                  if (b & (1 << 8)) {
                                                    {

                                                    }
                                                  } else {
                                                    {

                                                    }
                                                  }
                                                  {

                                                  }
                                                  if (c & (1 << 8)) {
                                                    {

                                                    }
                                                  } else {
                                                    {

                                                    }
                                                  }
                                                }
                                              }
                                              goto switch_5_break;
                                              switch_5_22:  
                                              switch_5_31:  
                                              switch_5_32:  
                                              {

                                              }
                                              goto switch_5_break;
                                              switch_5_36:  
                                              {

                                              }
                                              goto switch_5_break;
                                              switch_5_34:  
                                              if (c == 0) {
                                                {
                                                pc ++;

                                                }
                                              } else {
                                                {

                                                }
                                              }
                                              goto switch_5_break;
                                              switch_5_default:  ;
                                              goto switch_5_break;
                                            } else {
                                              switch_5_break:  ;
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
  __dyc_dummy_label:  ;
  __dyc_printpre_byte(pc);
  __dyc_printpre_byte(tmp___0);
  __dyc_printpre_byte(tmp___1);
  __dyc_print_ptr__char(tmp___2);
}
}
