#include "../../include/dycfoo.h"
#include "../../include/cmdline.i.hd.c.h"
void __dyc_foo(void) 
{ struct boot_params boot_params ;
  u32 cmdline_ptr ;
  addr_t cptr ;
  char c ;
  int len ;
  char const   *opptr ;
  char *bufptr ;
  enum __anonenum_state_22 state ;
  int tmp ;
  char const   *tmp___0 ;
  int tmp___1 ;
  int tmp___2 ;
  char *tmp___3 ;
  int tmp___4 ;
  addr_t tmp___5 ;
  u8 tmp___6 ;
  char const   *option ;
  char *buffer ;
  int bufsize ;
  u8 __dyc_funcallvar_1 ;
  int __dyc_funcallvar_2 ;
  int __dyc_funcallvar_3 ;
  int __dyc_funcallvar_4 ;
  int __dyc_funcallvar_5 ;

  {
  boot_params = __dyc_read_comp_35boot_params();
  option = (char const   *)__dyc_read_ptr__char();
  buffer = __dyc_read_ptr__char();
  bufsize = __dyc_readpre_byte();
  __dyc_funcallvar_1 = (u8 )__dyc_readpre_byte();
  __dyc_funcallvar_2 = __dyc_readpre_byte();
  __dyc_funcallvar_3 = __dyc_readpre_byte();
  __dyc_funcallvar_4 = __dyc_readpre_byte();
  __dyc_funcallvar_5 = __dyc_readpre_byte();
  cmdline_ptr = 0;
  cptr = 0;
  c = 0;
  len = 0;
  opptr = 0;
  bufptr = 0;
  state = 0;
  tmp = 0;
  tmp___0 = 0;
  tmp___1 = 0;
  tmp___2 = 0;
  tmp___3 = 0;
  tmp___4 = 0;
  tmp___5 = 0;
  tmp___6 = 0;
  cmdline_ptr = boot_params.hdr.cmd_line_ptr;
  len = -1;
  opptr = (char const   *)((void *)0);
  bufptr = buffer;
  state = 0;
  if (! cmdline_ptr) {
    goto __dyc_dummy_label;
  } else {
    if (cmdline_ptr >= 1048576U) {
      goto __dyc_dummy_label;
    }
  }
  cptr = cmdline_ptr & 15U;

  while (1) {
    while_0_continue:  ;
    if (cptr < 65536U) {
      {
      tmp___5 = cptr;
      cptr ++;
      tmp___6 = __dyc_funcallvar_1;
      c = (char )tmp___6;
      }
      if (! c) {
        goto __dyc_dummy_label;
      }
    } else {
      goto __dyc_dummy_label;
    }
    if ((int )state == 0) {
      goto switch_1_0;
    } else {
      if ((int )state == 1) {
        goto switch_1_1;
      } else {
        if ((int )state == 2) {
          goto switch_1_2;
        } else {
          if ((int )state == 3) {
            goto switch_1_3;
          } else {
            if (0) {
              switch_1_0:  
              {
              tmp = __dyc_funcallvar_2;
              }
              if (tmp) {
                goto switch_1_break;
              }
              state = 1;
              opptr = option;
              switch_1_1:  
              if ((int )c == 61) {
                if (! *opptr) {
                  len = 0;
                  bufptr = buffer;
                  state = 3;
                } else {
                  goto _L;
                }
              } else {
                _L:  
                {
                tmp___1 = __dyc_funcallvar_3;
                }
                if (tmp___1) {
                  state = 0;
                } else {
                  tmp___0 = opptr;
                  opptr ++;
                  if ((int )c != (int )*tmp___0) {
                    state = 2;
                  }
                }
              }
              goto switch_1_break;
              switch_1_2:  
              {
              tmp___2 = __dyc_funcallvar_4;
              }
              if (tmp___2) {
                state = 0;
              }
              goto switch_1_break;
              switch_1_3:  
              {
              tmp___4 = __dyc_funcallvar_5;
              }
              if (tmp___4) {
                state = 0;
              } else {
                if (len < bufsize - 1) {
                  tmp___3 = bufptr;
                  bufptr ++;
                  *tmp___3 = c;
                }
                len ++;
              }
              goto switch_1_break;
            } else {
              switch_1_break:  ;
            }
          }
        }
      }
    }
  }
  __dyc_dummy_label:  ;
  __dyc_printpre_byte(cptr);
  __dyc_printpre_byte(len);
  __dyc_print_ptr__char(opptr);
  __dyc_print_ptr__char(bufptr);
  __dyc_printpre_byte(state);
  __dyc_printpre_byte(tmp___5);
}
}
