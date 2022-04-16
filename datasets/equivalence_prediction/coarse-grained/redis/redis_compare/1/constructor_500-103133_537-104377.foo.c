#include "../../include/dycfoo.h"
#include "../../include/lparser.i.hd.c.h"
void __dyc_foo(void) 
{ FuncState *fs ;
  int line ;
  int pc ;
  int __attribute__((__visibility__("hidden")))  tmp ;
  struct ConsControl cc ;
  int tmp___0 ;
  int tmp___1 ;
  int __attribute__((__visibility__("hidden")))  tmp___2 ;
  int __attribute__((__visibility__("hidden")))  tmp___3 ;
  LexState *ls ;
  expdesc *t ;
  int __attribute__((__visibility__("hidden")))  __dyc_funcallvar_1 ;
  int __dyc_funcallvar_2 ;
  int __dyc_funcallvar_3 ;
  int __attribute__((__visibility__("hidden")))  __dyc_funcallvar_4 ;
  int __attribute__((__visibility__("hidden")))  __dyc_funcallvar_5 ;

  {
  ls = __dyc_read_ptr__typdef_LexState();
  t = __dyc_read_ptr__typdef_expdesc();
  __dyc_funcallvar_1 = (int __attribute__((__visibility__("hidden")))  )__dyc_readpre_byte();
  __dyc_funcallvar_2 = __dyc_readpre_byte();
  __dyc_funcallvar_3 = __dyc_readpre_byte();
  __dyc_funcallvar_4 = (int __attribute__((__visibility__("hidden")))  )__dyc_readpre_byte();
  __dyc_funcallvar_5 = (int __attribute__((__visibility__("hidden")))  )__dyc_readpre_byte();
  fs = 0;
  line = 0;
  pc = 0;
  tmp = 0;
  memset(& cc, 0, sizeof(struct ConsControl ));
  tmp___0 = 0;
  tmp___1 = 0;
  tmp___2 = 0;
  tmp___3 = 0;
  fs = ls->fs;
  line = ls->linenumber;
  tmp = __dyc_funcallvar_1;
  pc = (int )tmp;
  cc.tostore = 0;
  cc.nh = cc.tostore;
  cc.na = cc.nh;
  cc.t = t;




  while (1) {
    while_9_continue:  ;
    if (ls->t.token == 125) {
      goto while_9_break;
    }
    {

    }
    if (ls->t.token == 285) {
      goto switch_10_285;
    } else {
      if (ls->t.token == 91) {
        goto switch_10_91;
      } else {
        {
        goto switch_10_default;
        if (0) {
          switch_10_285:  
          {

          }
          if (ls->lookahead.token != 61) {
            {

            }
          } else {
            {

            }
          }
          goto switch_10_break;
          switch_10_91:  
          {

          }
          goto switch_10_break;
          switch_10_default:  
          {

          }
          goto switch_10_break;
        } else {
          switch_10_break:  ;
        }
        }
      }
    }
    {
    tmp___0 = __dyc_funcallvar_2;
    }
    if (! tmp___0) {
      {
      tmp___1 = __dyc_funcallvar_3;
      }
      if (! tmp___1) {
        goto while_9_break;
      }
    }
  }
  while_9_break:  ;


  tmp___2 = __dyc_funcallvar_4;
  *((fs->f)->code + pc) = (*((fs->f)->code + pc) & ~ (~ (4294967295U << 9) << 23)) | (((unsigned int )tmp___2 << 23) & (~ (4294967295U << 9) << 23));
  tmp___3 = __dyc_funcallvar_5;
  *((fs->f)->code + pc) = (*((fs->f)->code + pc) & ~ (~ (4294967295U << 9) << 14)) | (((unsigned int )tmp___3 << 14) & (~ (4294967295U << 9) << 14));
  goto __dyc_dummy_label;
  __dyc_dummy_label:  ;
  __dyc_printpre_byte(line);
  __dyc_print_comp_44ConsControl(cc);
}
}
