#include "../../include/dycfoo.h"
#include "../../include/linenoise.i.hd.c.h"
void __dyc_foo(void) 
{ linenoiseCompletionCallback *completionCallback ;
  linenoiseHintsCallback *hintsCallback ;
  int mlmode ;
  int history_len ;
  struct linenoiseState l ;
  int tmp ;
  ssize_t tmp___0 ;
  char c ;
  int nread ;
  char seq[3] ;
  ssize_t tmp___1 ;
  int tmp___2 ;
  linenoiseHintsCallback *hc ;
  int *tmp___3 ;
  int aux ;
  ssize_t tmp___4 ;
  ssize_t tmp___5 ;
  ssize_t tmp___6 ;
  int tmp___7 ;
  int stdin_fd ;
  int stdout_fd ;
  char *buf ;
  size_t buflen ;
  char const   *prompt ;
  size_t __dyc_funcallvar_1 ;
  int __dyc_funcallvar_2 ;
  ssize_t __dyc_funcallvar_3 ;
  ssize_t __dyc_funcallvar_4 ;
  int __dyc_funcallvar_5 ;
  int *__dyc_funcallvar_6 ;
  ssize_t __dyc_funcallvar_7 ;
  ssize_t __dyc_funcallvar_8 ;
  ssize_t __dyc_funcallvar_9 ;
  int __dyc_funcallvar_10 ;

  {
  completionCallback = (linenoiseCompletionCallback *)__dyc_read_ptr__typdef_linenoiseCompletionCallback();
  hintsCallback = (linenoiseHintsCallback *)__dyc_read_ptr__typdef_linenoiseHintsCallback();
  mlmode = __dyc_readpre_byte();
  history_len = __dyc_readpre_byte();
  c = (char )__dyc_readpre_byte();
  stdin_fd = __dyc_readpre_byte();
  stdout_fd = __dyc_readpre_byte();
  buf = __dyc_read_ptr__char();
  buflen = (size_t )__dyc_readpre_byte();
  prompt = (char const   *)__dyc_read_ptr__char();
  __dyc_funcallvar_1 = (size_t )__dyc_readpre_byte();
  __dyc_funcallvar_2 = __dyc_readpre_byte();
  __dyc_funcallvar_3 = (ssize_t )__dyc_readpre_byte();
  __dyc_funcallvar_4 = (ssize_t )__dyc_readpre_byte();
  __dyc_funcallvar_5 = __dyc_readpre_byte();
  __dyc_funcallvar_6 = __dyc_read_ptr__int();
  __dyc_funcallvar_7 = (ssize_t )__dyc_readpre_byte();
  __dyc_funcallvar_8 = (ssize_t )__dyc_readpre_byte();
  __dyc_funcallvar_9 = (ssize_t )__dyc_readpre_byte();
  __dyc_funcallvar_10 = __dyc_readpre_byte();
  memset(& l, 0, sizeof(struct linenoiseState ));
  tmp = 0;
  tmp___0 = 0;
  nread = 0;
  tmp___1 = 0;
  tmp___2 = 0;
  hc = 0;
  tmp___3 = 0;
  aux = 0;
  tmp___4 = 0;
  tmp___5 = 0;
  tmp___6 = 0;
  tmp___7 = 0;
  l.ifd = stdin_fd;
  l.ofd = stdout_fd;
  l.buf = buf;
  l.buflen = buflen;
  l.prompt = prompt;
  l.plen = __dyc_funcallvar_1;
  l.pos = 0UL;
  l.oldpos = l.pos;
  l.len = 0UL;
  tmp = __dyc_funcallvar_2;
  l.cols = (unsigned long )tmp;
  l.maxrows = 0UL;
  l.history_index = 0;
  *(l.buf + 0) = (char )'\000';
  (l.buflen) --;

  tmp___0 = __dyc_funcallvar_3;
  if (tmp___0 == -1L) {
    goto __dyc_dummy_label;
  }
  while (1) {
    while_10_continue:  ;
    {
    tmp___1 = __dyc_funcallvar_4;
    nread = (int )tmp___1;
    }
    if (nread <= 0) {
      goto __dyc_dummy_label;
    }
    if ((int )c == 9) {
      if ((unsigned long )completionCallback != (unsigned long )((void *)0)) {
        {
        tmp___2 = __dyc_funcallvar_5;
        c = (char )tmp___2;
        }
        if ((int )c < 0) {
          goto __dyc_dummy_label;
        }
        if ((int )c == 0) {
          goto while_10_continue;
        }
      }
    }
    if ((int )c == 13) {
      goto switch_11_13;
    } else {
      if ((int )c == 3) {
        goto switch_11_3;
      } else {
        if ((int )c == 127) {
          goto switch_11_127;
        } else {
          if ((int )c == 8) {
            goto switch_11_127;
          } else {
            if ((int )c == 4) {
              goto switch_11_4;
            } else {
              if ((int )c == 20) {
                goto switch_11_20;
              } else {
                if ((int )c == 2) {
                  goto switch_11_2;
                } else {
                  if ((int )c == 6) {
                    goto switch_11_6;
                  } else {
                    if ((int )c == 16) {
                      goto switch_11_16;
                    } else {
                      if ((int )c == 14) {
                        goto switch_11_14;
                      } else {
                        if ((int )c == 27) {
                          goto switch_11_27;
                        } else {
                          if ((int )c == 21) {
                            goto switch_11_21;
                          } else {
                            if ((int )c == 11) {
                              goto switch_11_11;
                            } else {
                              if ((int )c == 1) {
                                goto switch_11_1;
                              } else {
                                if ((int )c == 5) {
                                  goto switch_11_5;
                                } else {
                                  if ((int )c == 12) {
                                    goto switch_11_12;
                                  } else {
                                    if ((int )c == 23) {
                                      goto switch_11_23;
                                    } else {
                                      {
                                      goto switch_11_default;
                                      if (0) {
                                        switch_11_13:  
                                        {
                                        history_len --;

                                        }
                                        if (mlmode) {
                                          {

                                          }
                                        }
                                        if (hintsCallback) {
                                          {
                                          hc = hintsCallback;
                                          hintsCallback = (linenoiseHintsCallback *)((void *)0);

                                          hintsCallback = hc;
                                          }
                                        }
                                        goto __dyc_dummy_label;
                                        switch_11_3:  
                                        {
                                        tmp___3 = __dyc_funcallvar_6;
                                        *tmp___3 = 11;
                                        }
                                        goto __dyc_dummy_label;
                                        switch_11_127:  
                                        switch_11_8:  
                                        {

                                        }
                                        goto switch_11_break;
                                        switch_11_4:  
                                        if (l.len > 0UL) {
                                          {

                                          }
                                        } else {
                                          {
                                          history_len --;

                                          }
                                          goto __dyc_dummy_label;
                                        }
                                        goto switch_11_break;
                                        switch_11_20:  
                                        if (l.pos > 0UL) {
                                          if (l.pos < l.len) {
                                            aux = (int )*(buf + (l.pos - 1UL));
                                            *(buf + (l.pos - 1UL)) = *(buf + l.pos);
                                            *(buf + l.pos) = (char )aux;
                                            if (l.pos != l.len - 1UL) {
                                              (l.pos) ++;
                                            }
                                            {

                                            }
                                          }
                                        }
                                        goto switch_11_break;
                                        switch_11_2:  
                                        {

                                        }
                                        goto switch_11_break;
                                        switch_11_6:  
                                        {

                                        }
                                        goto switch_11_break;
                                        switch_11_16:  
                                        {

                                        }
                                        goto switch_11_break;
                                        switch_11_14:  
                                        {

                                        }
                                        goto switch_11_break;
                                        switch_11_27:  
                                        {
                                        tmp___4 = __dyc_funcallvar_7;
                                        }
                                        if (tmp___4 == -1L) {
                                          goto switch_11_break;
                                        }
                                        {
                                        tmp___5 = __dyc_funcallvar_8;
                                        }
                                        if (tmp___5 == -1L) {
                                          goto switch_11_break;
                                        }
                                        if ((int )seq[0] == 91) {
                                          if ((int )seq[1] >= 48) {
                                            if ((int )seq[1] <= 57) {
                                              {
                                              tmp___6 = __dyc_funcallvar_9;
                                              }
                                              if (tmp___6 == -1L) {
                                                goto switch_11_break;
                                              }
                                              if ((int )seq[2] == 126) {
                                                if ((int )seq[1] == 51) {
                                                  goto switch_12_51;
                                                } else {
                                                  if (0) {
                                                    switch_12_51:  
                                                    {

                                                    }
                                                    goto switch_12_break;
                                                  } else {
                                                    switch_12_break:  ;
                                                  }
                                                }
                                              }
                                            } else {
                                              goto _L;
                                            }
                                          } else {
                                            _L:  
                                            if ((int )seq[1] == 65) {
                                              goto switch_13_65;
                                            } else {
                                              if ((int )seq[1] == 66) {
                                                goto switch_13_66;
                                              } else {
                                                if ((int )seq[1] == 67) {
                                                  goto switch_13_67;
                                                } else {
                                                  if ((int )seq[1] == 68) {
                                                    goto switch_13_68;
                                                  } else {
                                                    if ((int )seq[1] == 72) {
                                                      goto switch_13_72;
                                                    } else {
                                                      if ((int )seq[1] == 70) {
                                                        goto switch_13_70;
                                                      } else {
                                                        if (0) {
                                                          switch_13_65:  
                                                          {

                                                          }
                                                          goto switch_13_break;
                                                          switch_13_66:  
                                                          {

                                                          }
                                                          goto switch_13_break;
                                                          switch_13_67:  
                                                          {

                                                          }
                                                          goto switch_13_break;
                                                          switch_13_68:  
                                                          {

                                                          }
                                                          goto switch_13_break;
                                                          switch_13_72:  
                                                          {

                                                          }
                                                          goto switch_13_break;
                                                          switch_13_70:  
                                                          {

                                                          }
                                                          goto switch_13_break;
                                                        } else {
                                                          switch_13_break:  ;
                                                        }
                                                      }
                                                    }
                                                  }
                                                }
                                              }
                                            }
                                          }
                                        } else {
                                          if ((int )seq[0] == 79) {
                                            if ((int )seq[1] == 72) {
                                              goto switch_14_72;
                                            } else {
                                              if ((int )seq[1] == 70) {
                                                goto switch_14_70;
                                              } else {
                                                if (0) {
                                                  switch_14_72:  
                                                  {

                                                  }
                                                  goto switch_14_break;
                                                  switch_14_70:  
                                                  {

                                                  }
                                                  goto switch_14_break;
                                                } else {
                                                  switch_14_break:  ;
                                                }
                                              }
                                            }
                                          }
                                        }
                                        goto switch_11_break;
                                        switch_11_default:  
                                        {
                                        tmp___7 = __dyc_funcallvar_10;
                                        }
                                        if (tmp___7) {
                                          goto __dyc_dummy_label;
                                        }
                                        goto switch_11_break;
                                        switch_11_21:  
                                        {
                                        *(buf + 0) = (char )'\000';
                                        l.len = 0UL;
                                        l.pos = l.len;

                                        }
                                        goto switch_11_break;
                                        switch_11_11:  
                                        {
                                        *(buf + l.pos) = (char )'\000';
                                        l.len = l.pos;

                                        }
                                        goto switch_11_break;
                                        switch_11_1:  
                                        {

                                        }
                                        goto switch_11_break;
                                        switch_11_5:  
                                        {

                                        }
                                        goto switch_11_break;
                                        switch_11_12:  
                                        {


                                        }
                                        goto switch_11_break;
                                        switch_11_23:  
                                        {

                                        }
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
  while_10_break:  ;
  goto __dyc_dummy_label;
  __dyc_dummy_label:  ;
  __dyc_print_ptr__typdef_linenoiseHintsCallback(hintsCallback);
  __dyc_printpre_byte(history_len);
  __dyc_print_comp_43linenoiseState(l);
}
}
