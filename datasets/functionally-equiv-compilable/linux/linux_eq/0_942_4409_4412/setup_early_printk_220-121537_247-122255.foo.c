#include "../../include/dycfoo.h"
#include "../../include/early_printk.i.hd.c.h"
void __dyc_foo(void) 
{ struct boot_params boot_params ;
  int max_ypos ;
  int max_xpos ;
  int current_ypos ;
  struct console early_vga_console ;
  struct console early_serial_console ;
  struct console simnow_console ;
  struct console *early_console ;
  int early_console_initialized ;
  int keep_early ;
  char *tmp ;
  int tmp___0 ;
  int tmp___1 ;
  int tmp___2 ;
  int tmp___3 ;
  char *__dyc_funcallvar_1 ;
  int __dyc_funcallvar_2 ;
  int __dyc_funcallvar_3 ;
  int __dyc_funcallvar_4 ;
  int __dyc_funcallvar_5 ;

  {
  boot_params = __dyc_read_comp_98boot_params();
  early_vga_console = __dyc_read_comp_10console();
  early_serial_console = __dyc_read_comp_10console();
  simnow_console = __dyc_read_comp_10console();
  early_console = __dyc_read_ptr__comp_10console();
  keep_early = __dyc_readpre_byte();
  __dyc_funcallvar_1 = __dyc_read_ptr__char();
  __dyc_funcallvar_2 = __dyc_readpre_byte();
  __dyc_funcallvar_3 = __dyc_readpre_byte();
  __dyc_funcallvar_4 = __dyc_readpre_byte();
  __dyc_funcallvar_5 = __dyc_readpre_byte();
  max_ypos = 0;
  max_xpos = 0;
  current_ypos = 0;
  early_console_initialized = 0;
  tmp = 0;
  tmp___0 = 0;
  tmp___1 = 0;
  tmp___2 = 0;
  tmp___3 = 0;
  early_console_initialized = 1;
  tmp = __dyc_funcallvar_1;
  if (tmp) {
    keep_early = 1;
  }
  tmp___3 = __dyc_funcallvar_2;
  if (tmp___3) {
    {
    tmp___2 = __dyc_funcallvar_3;
    }
    if (tmp___2) {
      {
      tmp___1 = __dyc_funcallvar_4;
      }
      if (tmp___1) {
        _L:  
        {
        tmp___0 = __dyc_funcallvar_5;
        }
        if (! tmp___0) {
          {

          early_console = & simnow_console;
          keep_early = 1;
          }
        }
      } else {
        if ((int )boot_params.screen_info.orig_video_isVGA == 1) {
          max_xpos = (int )boot_params.screen_info.orig_video_cols;
          max_ypos = (int )boot_params.screen_info.orig_video_lines;
          current_ypos = (int )boot_params.screen_info.orig_y;
          early_console = & early_vga_console;
        } else {
          goto _L;
        }
      }
    } else {
      {

      early_console = & early_serial_console;
      }
    }
  } else {
    {

    early_console = & early_serial_console;
    }
  }
  if (keep_early) {
    early_console->flags = (short )((int )early_console->flags & -9);
  } else {
    early_console->flags = (short )((int )early_console->flags | 8);
  }
  __dyc_dummy_label:  ;
  __dyc_printpre_byte(max_ypos);
  __dyc_printpre_byte(max_xpos);
  __dyc_printpre_byte(current_ypos);
  __dyc_printpre_byte(early_console_initialized);
}
}
