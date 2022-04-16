#include "../../include/dycfoo.h"
#include "../../include/lobject.i.hd.c.h"
void __dyc_foo(void) 
{ char const   *e ;
  TValue *i_o ;
  TString __attribute__((__visibility__("hidden")))  *tmp___1 ;
  char const   *s ;
  char *tmp___2 ;
  char buff[2] ;
  int tmp___3 ;
  TValue *i_o___0 ;
  int tmp___4 ;
  TValue *i_o___1 ;
  l_uacNumber tmp___5 ;
  char buff___1[3] ;
  lua_State *L ;
  TString __attribute__((__visibility__("hidden")))  *__dyc_funcallvar_2 ;

  {
  e = (char const   *)__dyc_read_ptr__char();
  tmp___2 = __dyc_read_ptr__char();
  tmp___3 = __dyc_readpre_byte();
  tmp___4 = __dyc_readpre_byte();
  tmp___5 = (l_uacNumber )__dyc_readpre_byte();
  L = __dyc_read_ptr__typdef_lua_State();
  __dyc_funcallvar_2 = (TString __attribute__((__visibility__("hidden")))  *)__dyc_read_ptr__typdef_TString();
  i_o = 0;
  tmp___1 = 0;
  s = 0;
  i_o___0 = 0;
  i_o___1 = 0;
  if ((unsigned long )e == (unsigned long )((void *)0)) {
    goto __dyc_dummy_label;
  }
  i_o = L->top;
  tmp___1 = __dyc_funcallvar_2;
  i_o->value.gc = (GCObject *)tmp___1;
  i_o->tt = 4;
  if ((char *)L->stack_last - (char *)L->top <= (int )sizeof(TValue )) {
    {

    }
  }
  (L->top) ++;
  if ((int )*(e + 1) == 115) {
    goto switch_5_115;
  } else {
    if ((int )*(e + 1) == 99) {
      goto switch_5_99;
    } else {
      if ((int )*(e + 1) == 100) {
        goto switch_5_100;
      } else {
        if ((int )*(e + 1) == 102) {
          goto switch_5_102;
        } else {
          if ((int )*(e + 1) == 112) {
            goto switch_5_112;
          } else {
            if ((int )*(e + 1) == 37) {
              goto switch_5_37;
            } else {
              {
              goto switch_5_default;
              if (0) {
                switch_5_115:  
                {

                s = (char const   *)tmp___2;
                }
                if ((unsigned long )s == (unsigned long )((void *)0)) {
                  s = "(null)";
                }
                {

                }
                goto switch_5_break;
                switch_5_99:  
                {

                buff[0] = (char )tmp___3;
                buff[1] = (char )'\000';

                }
                goto switch_5_break;
                switch_5_100:  
                {
                i_o___0 = L->top;

                i_o___0->value.n = (double )tmp___4;
                i_o___0->tt = 3;
                }
                if ((char *)L->stack_last - (char *)L->top <= (int )sizeof(TValue )) {
                  {

                  }
                }
                (L->top) ++;
                goto switch_5_break;
                switch_5_102:  
                {
                i_o___1 = L->top;

                i_o___1->value.n = tmp___5;
                i_o___1->tt = 3;
                }
                if ((char *)L->stack_last - (char *)L->top <= (int )sizeof(TValue )) {
                  {

                  }
                }
                (L->top) ++;
                goto switch_5_break;
                switch_5_112:  
                {



                }
                goto switch_5_break;
                switch_5_37:  
                {

                }
                goto switch_5_break;
                switch_5_default:  
                {
                buff___1[0] = (char )'%';
                buff___1[1] = (char )*(e + 1);
                buff___1[2] = (char )'\000';

                }
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
  __dyc_dummy_label:  ;
  __dyc_print_ptr__char(s);
}
}
