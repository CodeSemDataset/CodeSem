#include "../../include/dycfoo.h"
#include "../../include/ldblib.i.hd.c.h"
void __dyc_foo(void) 
{ int level ;
  int firstpart ;
  lua_Debug ar ;
  int tmp___4 ;
  int tmp___5 ;
  int tmp___6 ;
  int tmp___7 ;
  int tmp___8 ;
  int tmp___9 ;
  int __dyc_funcallvar_6 ;
  int __dyc_funcallvar_7 ;
  int __dyc_funcallvar_8 ;
  int __dyc_funcallvar_9 ;
  int __dyc_funcallvar_10 ;

  {
  level = __dyc_readpre_byte();
  firstpart = __dyc_readpre_byte();
  ar = __dyc_read_comp_39lua_Debug();
  __dyc_funcallvar_6 = __dyc_readpre_byte();
  __dyc_funcallvar_7 = __dyc_readpre_byte();
  __dyc_funcallvar_8 = __dyc_readpre_byte();
  __dyc_funcallvar_9 = __dyc_readpre_byte();
  __dyc_funcallvar_10 = __dyc_readpre_byte();
  tmp___4 = 0;
  tmp___5 = 0;
  tmp___6 = 0;
  tmp___7 = 0;
  tmp___8 = 0;
  tmp___9 = 0;
  while (1) {
    while_1_continue:  ;
    {
    tmp___7 = level;
    level ++;
    tmp___8 = __dyc_funcallvar_6;
    }
    if (! tmp___8) {
      goto while_1_break;
    }
    if (level > 12) {
      if (firstpart) {
        {
        tmp___5 = __dyc_funcallvar_7;
        }
        if (tmp___5) {
          {

          }
          {
          while (1) {
            while_2_continue:  ;
            {
            tmp___4 = __dyc_funcallvar_8;
            }
            if (! tmp___4) {
              goto while_2_break;
            }
            level ++;
          }
          while_2_break:  ;
          }
        } else {
          level --;
        }
        firstpart = 0;
        goto while_1_continue;
      }
    }
    {



    }
    if (ar.currentline > 0) {
      {

      }
    }
    if ((int const   )*(ar.namewhat) != 0) {
      {

      }
    } else {
      if ((int const   )*(ar.what) == 109) {
        {

        }
      } else {
        if ((int const   )*(ar.what) == 67) {
          {

          }
        } else {
          if ((int const   )*(ar.what) == 116) {
            {

            }
          } else {
            {

            }
          }
        }
      }
    }
    {
    tmp___6 = __dyc_funcallvar_9;

    }
  }
  while_1_break:  ;
  tmp___9 = __dyc_funcallvar_10;

  goto __dyc_dummy_label;
  __dyc_dummy_label:  ;
  __dyc_printpre_byte(level);
  __dyc_printpre_byte(firstpart);
  __dyc_printpre_byte(tmp___6);
  __dyc_printpre_byte(tmp___7);
  __dyc_printpre_byte(tmp___9);
}
}
