#include "../../include/dycfoo.h"
#include "../../include/llex.i.hd.c.h"
void __dyc_foo(void) 
{ char const   *tmp___2 ;
  int __attribute__((__visibility__("hidden")))  tmp___3 ;
  size_t tmp___4 ;
  int c ;
  char const   *tmp___8 ;
  int __attribute__((__visibility__("hidden")))  tmp___9 ;
  size_t tmp___10 ;
  char const   *tmp___14 ;
  int __attribute__((__visibility__("hidden")))  tmp___15 ;
  size_t tmp___16 ;
  int i ;
  char const   *tmp___20 ;
  int __attribute__((__visibility__("hidden")))  tmp___21 ;
  size_t tmp___22 ;
  unsigned short const   **tmp___23 ;
  unsigned short const   **tmp___24 ;
  char const   *tmp___28 ;
  int __attribute__((__visibility__("hidden")))  tmp___29 ;
  size_t tmp___30 ;
  char const   *tmp___34 ;
  int __attribute__((__visibility__("hidden")))  tmp___35 ;
  size_t tmp___36 ;
  char const   *tmp___40 ;
  int __attribute__((__visibility__("hidden")))  tmp___41 ;
  size_t tmp___42 ;
  TString __attribute__((__visibility__("hidden")))  *tmp___43 ;
  LexState *ls ;
  int del ;
  SemInfo *seminfo ;
  int __attribute__((__visibility__("hidden")))  __dyc_funcallvar_1 ;
  int __attribute__((__visibility__("hidden")))  __dyc_funcallvar_2 ;
  unsigned short const   **__dyc_funcallvar_3 ;
  int __attribute__((__visibility__("hidden")))  __dyc_funcallvar_4 ;
  unsigned short const   **__dyc_funcallvar_5 ;
  int __attribute__((__visibility__("hidden")))  __dyc_funcallvar_6 ;
  int __attribute__((__visibility__("hidden")))  __dyc_funcallvar_7 ;
  int __attribute__((__visibility__("hidden")))  __dyc_funcallvar_8 ;
  int __attribute__((__visibility__("hidden")))  __dyc_funcallvar_9 ;
  TString __attribute__((__visibility__("hidden")))  *__dyc_funcallvar_10 ;

  {
  tmp___4 = (size_t )__dyc_readpre_byte();
  ls = __dyc_read_ptr__typdef_LexState();
  del = __dyc_readpre_byte();
  seminfo = __dyc_read_ptr__typdef_SemInfo();
  __dyc_funcallvar_1 = (int __attribute__((__visibility__("hidden")))  )__dyc_readpre_byte();
  __dyc_funcallvar_2 = (int __attribute__((__visibility__("hidden")))  )__dyc_readpre_byte();
  __dyc_funcallvar_3 = (unsigned short const   **)__dyc_read_ptr__ptr__short();
  __dyc_funcallvar_4 = (int __attribute__((__visibility__("hidden")))  )__dyc_readpre_byte();
  __dyc_funcallvar_5 = (unsigned short const   **)__dyc_read_ptr__ptr__short();
  __dyc_funcallvar_6 = (int __attribute__((__visibility__("hidden")))  )__dyc_readpre_byte();
  __dyc_funcallvar_7 = (int __attribute__((__visibility__("hidden")))  )__dyc_readpre_byte();
  __dyc_funcallvar_8 = (int __attribute__((__visibility__("hidden")))  )__dyc_readpre_byte();
  __dyc_funcallvar_9 = (int __attribute__((__visibility__("hidden")))  )__dyc_readpre_byte();
  __dyc_funcallvar_10 = (TString __attribute__((__visibility__("hidden")))  *)__dyc_read_ptr__typdef_TString();
  tmp___2 = 0;
  tmp___3 = 0;
  c = 0;
  tmp___8 = 0;
  tmp___9 = 0;
  tmp___10 = 0;
  tmp___14 = 0;
  tmp___15 = 0;
  tmp___16 = 0;
  i = 0;
  tmp___20 = 0;
  tmp___21 = 0;
  tmp___22 = 0;
  tmp___23 = 0;
  tmp___24 = 0;
  tmp___28 = 0;
  tmp___29 = 0;
  tmp___30 = 0;
  tmp___34 = 0;
  tmp___35 = 0;
  tmp___36 = 0;
  tmp___40 = 0;
  tmp___41 = 0;
  tmp___42 = 0;
  tmp___43 = 0;
  if (tmp___4 > 0UL) {
    tmp___2 = (ls->z)->p;
    ((ls->z)->p) ++;
    ls->current = (int )((unsigned char )*tmp___2);
  } else {
    {
    tmp___3 = __dyc_funcallvar_1;
    ls->current = (int )tmp___3;
    }
  }
  while (1) {
    while_8_continue:  ;
    if (! (ls->current != del)) {
      goto while_8_break;
    }
    if (ls->current == -1) {
      goto switch_9_neg_1;
    } else {
      if (ls->current == 10) {
        goto switch_9_10;
      } else {
        if (ls->current == 13) {
          goto switch_9_10;
        } else {
          if (ls->current == 92) {
            goto switch_9_92;
          } else {
            {
            goto switch_9_default;
            if (0) {
              switch_9_neg_1:  
              {

              }
              goto while_8_continue;
              switch_9_10:  
              switch_9_13:  
              {

              }
              goto while_8_continue;
              switch_9_92:  
              tmp___10 = (ls->z)->n;
              ((ls->z)->n) --;
              if (tmp___10 > 0UL) {
                tmp___8 = (ls->z)->p;
                ((ls->z)->p) ++;
                ls->current = (int )((unsigned char )*tmp___8);
              } else {
                {
                tmp___9 = __dyc_funcallvar_2;
                ls->current = (int )tmp___9;
                }
              }
              if (ls->current == 97) {
                goto switch_10_97;
              } else {
                if (ls->current == 98) {
                  goto switch_10_98;
                } else {
                  if (ls->current == 102) {
                    goto switch_10_102;
                  } else {
                    if (ls->current == 110) {
                      goto switch_10_110;
                    } else {
                      if (ls->current == 114) {
                        goto switch_10_114;
                      } else {
                        if (ls->current == 116) {
                          goto switch_10_116;
                        } else {
                          if (ls->current == 118) {
                            goto switch_10_118;
                          } else {
                            if (ls->current == 10) {
                              goto switch_10_10;
                            } else {
                              if (ls->current == 13) {
                                goto switch_10_10;
                              } else {
                                if (ls->current == -1) {
                                  goto switch_10_neg_1;
                                } else {
                                  {
                                  goto switch_10_default;
                                  if (0) {
                                    switch_10_97:  
                                    c = '\a';
                                    goto switch_10_break;
                                    switch_10_98:  
                                    c = '\b';
                                    goto switch_10_break;
                                    switch_10_102:  
                                    c = '\f';
                                    goto switch_10_break;
                                    switch_10_110:  
                                    c = '\n';
                                    goto switch_10_break;
                                    switch_10_114:  
                                    c = '\r';
                                    goto switch_10_break;
                                    switch_10_116:  
                                    c = '\t';
                                    goto switch_10_break;
                                    switch_10_118:  
                                    c = '\v';
                                    goto switch_10_break;
                                    switch_10_10:  
                                    switch_10_13:  
                                    {


                                    }
                                    goto while_8_continue;
                                    switch_10_neg_1:  
                                    goto while_8_continue;
                                    switch_10_default:  
                                    {
                                    tmp___24 = __dyc_funcallvar_3;
                                    }
                                    if ((int const   )*(*tmp___24 + ls->current) & 2048) {
                                      i = 0;
                                      c = 0;
                                      {
                                      while (1) {
                                        while_11_continue:  ;
                                        c = 10 * c + (ls->current - 48);
                                        tmp___22 = (ls->z)->n;
                                        ((ls->z)->n) --;
                                        if (tmp___22 > 0UL) {
                                          tmp___20 = (ls->z)->p;
                                          ((ls->z)->p) ++;
                                          ls->current = (int )((unsigned char )*tmp___20);
                                        } else {
                                          {
                                          tmp___21 = __dyc_funcallvar_4;
                                          ls->current = (int )tmp___21;
                                          }
                                        }
                                        i ++;
                                        if (i < 3) {
                                          {
                                          tmp___23 = __dyc_funcallvar_5;
                                          }
                                          if (! ((int const   )*(*tmp___23 + ls->current) & 2048)) {
                                            goto while_11_break;
                                          }
                                        } else {
                                          goto while_11_break;
                                        }
                                      }
                                      while_11_break:  ;
                                      }
                                      if (c > 255) {
                                        {

                                        }
                                      }
                                      {

                                      }
                                    } else {
                                      {

                                      tmp___16 = (ls->z)->n;
                                      ((ls->z)->n) --;
                                      }
                                      if (tmp___16 > 0UL) {
                                        tmp___14 = (ls->z)->p;
                                        ((ls->z)->p) ++;
                                        ls->current = (int )((unsigned char )*tmp___14);
                                      } else {
                                        {
                                        tmp___15 = __dyc_funcallvar_6;
                                        ls->current = (int )tmp___15;
                                        }
                                      }
                                    }
                                    goto while_8_continue;
                                  } else {
                                    switch_10_break:  ;
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
              {

              tmp___30 = (ls->z)->n;
              ((ls->z)->n) --;
              }
              if (tmp___30 > 0UL) {
                tmp___28 = (ls->z)->p;
                ((ls->z)->p) ++;
                ls->current = (int )((unsigned char )*tmp___28);
              } else {
                {
                tmp___29 = __dyc_funcallvar_7;
                ls->current = (int )tmp___29;
                }
              }
              goto while_8_continue;
              switch_9_default:  
              {

              tmp___36 = (ls->z)->n;
              ((ls->z)->n) --;
              }
              if (tmp___36 > 0UL) {
                tmp___34 = (ls->z)->p;
                ((ls->z)->p) ++;
                ls->current = (int )((unsigned char )*tmp___34);
              } else {
                {
                tmp___35 = __dyc_funcallvar_8;
                ls->current = (int )tmp___35;
                }
              }
            } else {
              switch_9_break:  ;
            }
            }
          }
        }
      }
    }
  }
  while_8_break:  ;

  tmp___42 = (ls->z)->n;
  ((ls->z)->n) --;
  if (tmp___42 > 0UL) {
    tmp___40 = (ls->z)->p;
    ((ls->z)->p) ++;
    ls->current = (int )((unsigned char )*tmp___40);
  } else {
    {
    tmp___41 = __dyc_funcallvar_9;
    ls->current = (int )tmp___41;
    }
  }
  tmp___43 = __dyc_funcallvar_10;
  seminfo->ts = (TString *)tmp___43;
  __dyc_dummy_label:  ;
  __dyc_printpre_byte(c);
}
}
