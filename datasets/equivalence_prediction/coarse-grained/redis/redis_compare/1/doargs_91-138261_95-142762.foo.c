#include "../../include/dycfoo.h"
#include "../../include/luac.i.hd.c.h"
void __dyc_foo(void) 
{ int dumping ;
  int stripping ;
  char const   *output ;
  int i ;
  int version ;
  size_t __s1_len ;
  size_t __s2_len ;
  int tmp___8 ;
  int tmp___13 ;
  int tmp___14 ;
  int tmp___15 ;
  int tmp___16 ;
  size_t __s1_len___0 ;
  size_t __s2_len___0 ;
  int tmp___26 ;
  int tmp___31 ;
  int tmp___32 ;
  int tmp___33 ;
  int tmp___34 ;
  size_t __s1_len___1 ;
  size_t __s2_len___1 ;
  int tmp___44 ;
  int tmp___49 ;
  int tmp___50 ;
  int tmp___51 ;
  int tmp___52 ;
  size_t __s1_len___2 ;
  size_t __s2_len___2 ;
  int tmp___62 ;
  int tmp___67 ;
  int tmp___68 ;
  int tmp___69 ;
  int tmp___70 ;
  char **argv ;
  int __dyc_funcallvar_21 ;
  int __dyc_funcallvar_22 ;
  int __dyc_funcallvar_23 ;
  int __dyc_funcallvar_24 ;
  int __dyc_funcallvar_25 ;
  int __dyc_funcallvar_26 ;
  int __dyc_funcallvar_27 ;
  int __dyc_funcallvar_28 ;
  int __dyc_funcallvar_29 ;
  int __dyc_funcallvar_30 ;
  int __dyc_funcallvar_31 ;
  int __dyc_funcallvar_32 ;
  int __dyc_funcallvar_33 ;
  int __dyc_funcallvar_34 ;
  int __dyc_funcallvar_35 ;
  int __dyc_funcallvar_36 ;
  int __dyc_funcallvar_37 ;
  int __dyc_funcallvar_38 ;
  int __dyc_funcallvar_39 ;
  int __dyc_funcallvar_40 ;

  {
  i = __dyc_readpre_byte();
  version = __dyc_readpre_byte();
  argv = __dyc_read_ptr__ptr__char();
  __dyc_funcallvar_21 = __dyc_readpre_byte();
  __dyc_funcallvar_22 = __dyc_readpre_byte();
  __dyc_funcallvar_23 = __dyc_readpre_byte();
  __dyc_funcallvar_24 = __dyc_readpre_byte();
  __dyc_funcallvar_25 = __dyc_readpre_byte();
  __dyc_funcallvar_26 = __dyc_readpre_byte();
  __dyc_funcallvar_27 = __dyc_readpre_byte();
  __dyc_funcallvar_28 = __dyc_readpre_byte();
  __dyc_funcallvar_29 = __dyc_readpre_byte();
  __dyc_funcallvar_30 = __dyc_readpre_byte();
  __dyc_funcallvar_31 = __dyc_readpre_byte();
  __dyc_funcallvar_32 = __dyc_readpre_byte();
  __dyc_funcallvar_33 = __dyc_readpre_byte();
  __dyc_funcallvar_34 = __dyc_readpre_byte();
  __dyc_funcallvar_35 = __dyc_readpre_byte();
  __dyc_funcallvar_36 = __dyc_readpre_byte();
  __dyc_funcallvar_37 = __dyc_readpre_byte();
  __dyc_funcallvar_38 = __dyc_readpre_byte();
  __dyc_funcallvar_39 = __dyc_readpre_byte();
  __dyc_funcallvar_40 = __dyc_readpre_byte();
  dumping = 0;
  stripping = 0;
  output = 0;
  __s1_len = 0;
  __s2_len = 0;
  tmp___8 = 0;
  tmp___13 = 0;
  tmp___14 = 0;
  tmp___15 = 0;
  tmp___16 = 0;
  __s1_len___0 = 0;
  __s2_len___0 = 0;
  tmp___26 = 0;
  tmp___31 = 0;
  tmp___32 = 0;
  tmp___33 = 0;
  tmp___34 = 0;
  __s1_len___1 = 0;
  __s2_len___1 = 0;
  tmp___44 = 0;
  tmp___49 = 0;
  tmp___50 = 0;
  tmp___51 = 0;
  tmp___52 = 0;
  __s1_len___2 = 0;
  __s2_len___2 = 0;
  tmp___62 = 0;
  tmp___67 = 0;
  tmp___68 = 0;
  tmp___69 = 0;
  tmp___70 = 0;
  i ++;
  output = (char const   *)*(argv + i);
  if ((unsigned long )output == (unsigned long )((void *)0)) {
    {

    }
  } else {
    if ((int const   )*output == 0) {
      {

      }
    }
  }
  if (0) {
    {
    tmp___14 = __dyc_funcallvar_21;
    __s1_len = (unsigned long )tmp___14;
    tmp___15 = __dyc_funcallvar_22;
    __s2_len = (unsigned long )tmp___15;
    }
    if (! ((unsigned long )((void const   *)(*(argv + i) + 1)) - (unsigned long )((void const   *)*(argv + i)) == 1UL)) {
      goto _L___0;
    } else {
      if (__s1_len >= 4UL) {
        _L___0:  
        if (! ((unsigned long )((void const   *)("-" + 1)) - (unsigned long )((void const   *)"-") == 1UL)) {
          tmp___16 = 1;
        } else {
          if (__s2_len >= 4UL) {
            tmp___16 = 1;
          } else {
            tmp___16 = 0;
          }
        }
      } else {
        tmp___16 = 0;
      }
    }
    if (tmp___16) {
      {
      tmp___8 = __dyc_funcallvar_23;
      }
    } else {
      {
      tmp___13 = __dyc_funcallvar_24;
      tmp___8 = tmp___13;
      }
    }
  } else {
    {
    tmp___13 = __dyc_funcallvar_25;
    tmp___8 = tmp___13;
    }
  }
  if (tmp___8 == 0) {
    output = (char const   *)((void *)0);
  }
  if (0) {
    {
    tmp___68 = __dyc_funcallvar_26;
    __s1_len___2 = (unsigned long )tmp___68;
    tmp___69 = __dyc_funcallvar_27;
    __s2_len___2 = (unsigned long )tmp___69;
    }
    if (! ((unsigned long )((void const   *)(*(argv + i) + 1)) - (unsigned long )((void const   *)*(argv + i)) == 1UL)) {
      goto _L___6;
    } else {
      if (__s1_len___2 >= 4UL) {
        _L___6:  
        if (! ((unsigned long )((void const   *)("-p" + 1)) - (unsigned long )((void const   *)"-p") == 1UL)) {
          tmp___70 = 1;
        } else {
          if (__s2_len___2 >= 4UL) {
            tmp___70 = 1;
          } else {
            tmp___70 = 0;
          }
        }
      } else {
        tmp___70 = 0;
      }
    }
    if (tmp___70) {
      {
      tmp___62 = __dyc_funcallvar_28;
      }
    } else {
      {
      tmp___67 = __dyc_funcallvar_29;
      tmp___62 = tmp___67;
      }
    }
  } else {
    {
    tmp___67 = __dyc_funcallvar_30;
    tmp___62 = tmp___67;
    }
  }
  if (tmp___62 == 0) {
    dumping = 0;
  } else {
    if (0) {
      {
      tmp___50 = __dyc_funcallvar_31;
      __s1_len___1 = (unsigned long )tmp___50;
      tmp___51 = __dyc_funcallvar_32;
      __s2_len___1 = (unsigned long )tmp___51;
      }
      if (! ((unsigned long )((void const   *)(*(argv + i) + 1)) - (unsigned long )((void const   *)*(argv + i)) == 1UL)) {
        goto _L___4;
      } else {
        if (__s1_len___1 >= 4UL) {
          _L___4:  
          if (! ((unsigned long )((void const   *)("-s" + 1)) - (unsigned long )((void const   *)"-s") == 1UL)) {
            tmp___52 = 1;
          } else {
            if (__s2_len___1 >= 4UL) {
              tmp___52 = 1;
            } else {
              tmp___52 = 0;
            }
          }
        } else {
          tmp___52 = 0;
        }
      }
      if (tmp___52) {
        {
        tmp___44 = __dyc_funcallvar_33;
        }
      } else {
        {
        tmp___49 = __dyc_funcallvar_34;
        tmp___44 = tmp___49;
        }
      }
    } else {
      {
      tmp___49 = __dyc_funcallvar_35;
      tmp___44 = tmp___49;
      }
    }
    if (tmp___44 == 0) {
      stripping = 1;
    } else {
      if (0) {
        {
        tmp___32 = __dyc_funcallvar_36;
        __s1_len___0 = (unsigned long )tmp___32;
        tmp___33 = __dyc_funcallvar_37;
        __s2_len___0 = (unsigned long )tmp___33;
        }
        if (! ((unsigned long )((void const   *)(*(argv + i) + 1)) - (unsigned long )((void const   *)*(argv + i)) == 1UL)) {
          goto _L___2;
        } else {
          if (__s1_len___0 >= 4UL) {
            _L___2:  
            if (! ((unsigned long )((void const   *)("-v" + 1)) - (unsigned long )((void const   *)"-v") == 1UL)) {
              tmp___34 = 1;
            } else {
              if (__s2_len___0 >= 4UL) {
                tmp___34 = 1;
              } else {
                tmp___34 = 0;
              }
            }
          } else {
            tmp___34 = 0;
          }
        }
        if (tmp___34) {
          {
          tmp___26 = __dyc_funcallvar_38;
          }
        } else {
          {
          tmp___31 = __dyc_funcallvar_39;
          tmp___26 = tmp___31;
          }
        }
      } else {
        {
        tmp___31 = __dyc_funcallvar_40;
        tmp___26 = tmp___31;
        }
      }
      if (tmp___26 == 0) {
        version ++;
      } else {
        {

        }
      }
    }
  }
  __dyc_dummy_label:  ;
  __dyc_printpre_byte(dumping);
  __dyc_printpre_byte(stripping);
  __dyc_print_ptr__char(output);
  __dyc_printpre_byte(version);
  __dyc_printpre_byte(__s1_len);
  __dyc_printpre_byte(__s2_len);
  __dyc_printpre_byte(__s1_len___0);
  __dyc_printpre_byte(__s2_len___0);
  __dyc_printpre_byte(__s1_len___1);
  __dyc_printpre_byte(__s2_len___1);
  __dyc_printpre_byte(__s1_len___2);
  __dyc_printpre_byte(__s2_len___2);
}
}
