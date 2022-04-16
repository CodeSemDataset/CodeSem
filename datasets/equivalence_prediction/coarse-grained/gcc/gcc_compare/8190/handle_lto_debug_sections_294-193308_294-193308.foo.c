#include "../../include/dycfoo.h"
#include "../../include/simple-object.i.hd.c.h"
void __dyc_foo(void) 
{ char __attribute__((__artificial__))  * __attribute__((__leaf__)) tmp___93 ;
  char __attribute__((__artificial__))  * __attribute__((__leaf__)) tmp___94 ;
  char __attribute__((__artificial__))  * __attribute__((__leaf__)) tmp___95 ;
  char __attribute__((__artificial__))  * __attribute__((__leaf__)) tmp___96 ;
  size_t __s1_len___3 ;
  size_t __s2_len___3 ;
  int tmp___106 ;
  int tmp___111 ;
  int tmp___112 ;
  int tmp___113 ;
  int tmp___114 ;
  size_t __s1_len___4 ;
  size_t __s2_len___4 ;
  int tmp___124 ;
  int tmp___129 ;
  int tmp___130 ;
  int tmp___131 ;
  int tmp___132 ;
  size_t __s1_len___5 ;
  size_t __s2_len___5 ;
  int tmp___142 ;
  int tmp___147 ;
  int tmp___148 ;
  int tmp___149 ;
  int tmp___150 ;
  int tmp___160 ;
  char const   *name ;
  char __attribute__((__artificial__))  * __attribute__((__leaf__)) __dyc_funcallvar_35 ;
  int __dyc_funcallvar_36 ;
  int __dyc_funcallvar_37 ;
  int __dyc_funcallvar_38 ;
  int __dyc_funcallvar_39 ;
  int __dyc_funcallvar_40 ;
  char __attribute__((__artificial__))  * __attribute__((__leaf__)) __dyc_funcallvar_41 ;
  int __dyc_funcallvar_42 ;
  int __dyc_funcallvar_43 ;
  int __dyc_funcallvar_44 ;
  int __dyc_funcallvar_45 ;
  int __dyc_funcallvar_46 ;
  char __attribute__((__artificial__))  * __attribute__((__leaf__)) __dyc_funcallvar_47 ;
  int __dyc_funcallvar_48 ;
  int __dyc_funcallvar_49 ;
  int __dyc_funcallvar_50 ;
  int __dyc_funcallvar_51 ;
  int __dyc_funcallvar_52 ;
  char __attribute__((__artificial__))  * __attribute__((__leaf__)) __dyc_funcallvar_53 ;

  {
  tmp___160 = __dyc_readpre_byte();
  name = (char const   *)__dyc_read_ptr__char();
  __dyc_funcallvar_35 = (char __attribute__((__artificial__))  * __attribute__((__leaf__)) )__dyc_read_ptr__char();
  __dyc_funcallvar_36 = __dyc_readpre_byte();
  __dyc_funcallvar_37 = __dyc_readpre_byte();
  __dyc_funcallvar_38 = __dyc_readpre_byte();
  __dyc_funcallvar_39 = __dyc_readpre_byte();
  __dyc_funcallvar_40 = __dyc_readpre_byte();
  __dyc_funcallvar_41 = (char __attribute__((__artificial__))  * __attribute__((__leaf__)) )__dyc_read_ptr__char();
  __dyc_funcallvar_42 = __dyc_readpre_byte();
  __dyc_funcallvar_43 = __dyc_readpre_byte();
  __dyc_funcallvar_44 = __dyc_readpre_byte();
  __dyc_funcallvar_45 = __dyc_readpre_byte();
  __dyc_funcallvar_46 = __dyc_readpre_byte();
  __dyc_funcallvar_47 = (char __attribute__((__artificial__))  * __attribute__((__leaf__)) )__dyc_read_ptr__char();
  __dyc_funcallvar_48 = __dyc_readpre_byte();
  __dyc_funcallvar_49 = __dyc_readpre_byte();
  __dyc_funcallvar_50 = __dyc_readpre_byte();
  __dyc_funcallvar_51 = __dyc_readpre_byte();
  __dyc_funcallvar_52 = __dyc_readpre_byte();
  __dyc_funcallvar_53 = (char __attribute__((__artificial__))  * __attribute__((__leaf__)) )__dyc_read_ptr__char();
  tmp___93 = 0;
  tmp___94 = 0;
  tmp___95 = 0;
  tmp___96 = 0;
  __s1_len___3 = 0;
  __s2_len___3 = 0;
  tmp___106 = 0;
  tmp___111 = 0;
  tmp___112 = 0;
  tmp___113 = 0;
  tmp___114 = 0;
  __s1_len___4 = 0;
  __s2_len___4 = 0;
  tmp___124 = 0;
  tmp___129 = 0;
  tmp___130 = 0;
  tmp___131 = 0;
  tmp___132 = 0;
  __s1_len___5 = 0;
  __s2_len___5 = 0;
  tmp___142 = 0;
  tmp___147 = 0;
  tmp___148 = 0;
  tmp___149 = 0;
  tmp___150 = 0;
  if (tmp___160 == 0) {
    {
    tmp___93 = __dyc_funcallvar_35;
    }
    goto __dyc_dummy_label;
  } else {
    if (0) {
      {
      tmp___148 = __dyc_funcallvar_36;
      __s1_len___5 = (unsigned long )tmp___148;
      tmp___149 = __dyc_funcallvar_37;
      __s2_len___5 = (unsigned long )tmp___149;
      }
      if (! ((unsigned long )((void const   *)(name + 1)) - (unsigned long )((void const   *)name) == 1UL)) {
        goto _L___12;
      } else {
        if (__s1_len___5 >= 4UL) {
          _L___12:  
          if (! ((unsigned long )((void const   *)(".note.gnu.property" + 1)) - (unsigned long )((void const   *)".note.gnu.property") == 1UL)) {
            tmp___150 = 1;
          } else {
            if (__s2_len___5 >= 4UL) {
              tmp___150 = 1;
            } else {
              tmp___150 = 0;
            }
          }
        } else {
          tmp___150 = 0;
        }
      }
      if (tmp___150) {
        {
        tmp___142 = __dyc_funcallvar_38;
        }
      } else {
        {
        tmp___147 = __dyc_funcallvar_39;
        tmp___142 = tmp___147;
        }
      }
    } else {
      {
      tmp___147 = __dyc_funcallvar_40;
      tmp___142 = tmp___147;
      }
    }
    if (tmp___142 == 0) {
      {
      tmp___94 = __dyc_funcallvar_41;
      }
      goto __dyc_dummy_label;
    } else {
      if (0) {
        {
        tmp___130 = __dyc_funcallvar_42;
        __s1_len___4 = (unsigned long )tmp___130;
        tmp___131 = __dyc_funcallvar_43;
        __s2_len___4 = (unsigned long )tmp___131;
        }
        if (! ((unsigned long )((void const   *)(name + 1)) - (unsigned long )((void const   *)name) == 1UL)) {
          goto _L___10;
        } else {
          if (__s1_len___4 >= 4UL) {
            _L___10:  
            if (! ((unsigned long )((void const   *)(".comment" + 1)) - (unsigned long )((void const   *)".comment") == 1UL)) {
              tmp___132 = 1;
            } else {
              if (__s2_len___4 >= 4UL) {
                tmp___132 = 1;
              } else {
                tmp___132 = 0;
              }
            }
          } else {
            tmp___132 = 0;
          }
        }
        if (tmp___132) {
          {
          tmp___124 = __dyc_funcallvar_44;
          }
        } else {
          {
          tmp___129 = __dyc_funcallvar_45;
          tmp___124 = tmp___129;
          }
        }
      } else {
        {
        tmp___129 = __dyc_funcallvar_46;
        tmp___124 = tmp___129;
        }
      }
      if (tmp___124 == 0) {
        {
        tmp___95 = __dyc_funcallvar_47;
        }
        goto __dyc_dummy_label;
      } else {
        if (0) {
          {
          tmp___112 = __dyc_funcallvar_48;
          __s1_len___3 = (unsigned long )tmp___112;
          tmp___113 = __dyc_funcallvar_49;
          __s2_len___3 = (unsigned long )tmp___113;
          }
          if (! ((unsigned long )((void const   *)(name + 1)) - (unsigned long )((void const   *)name) == 1UL)) {
            goto _L___8;
          } else {
            if (__s1_len___3 >= 4UL) {
              _L___8:  
              if (! ((unsigned long )((void const   *)(".GCC.command.line" + 1)) - (unsigned long )((void const   *)".GCC.command.line") == 1UL)) {
                tmp___114 = 1;
              } else {
                if (__s2_len___3 >= 4UL) {
                  tmp___114 = 1;
                } else {
                  tmp___114 = 0;
                }
              }
            } else {
              tmp___114 = 0;
            }
          }
          if (tmp___114) {
            {
            tmp___106 = __dyc_funcallvar_50;
            }
          } else {
            {
            tmp___111 = __dyc_funcallvar_51;
            tmp___106 = tmp___111;
            }
          }
        } else {
          {
          tmp___111 = __dyc_funcallvar_52;
          tmp___106 = tmp___111;
          }
        }
        if (tmp___106 == 0) {
          {
          tmp___96 = __dyc_funcallvar_53;
          }
          goto __dyc_dummy_label;
        }
      }
    }
  }
  __dyc_dummy_label:  ;
  __dyc_print_ptr__char(tmp___93);
  __dyc_print_ptr__char(tmp___94);
  __dyc_print_ptr__char(tmp___95);
  __dyc_print_ptr__char(tmp___96);
  __dyc_printpre_byte(__s1_len___3);
  __dyc_printpre_byte(__s2_len___3);
  __dyc_printpre_byte(__s1_len___4);
  __dyc_printpre_byte(__s2_len___4);
  __dyc_printpre_byte(__s1_len___5);
  __dyc_printpre_byte(__s2_len___5);
}
}
