#include "../../include/dycfoo.h"
#include "../../include/regex.i.hd.c.h"
void __dyc_foo(void) 
{ char str[7] ;
  int tmp___385 ;
  int tmp___390 ;
  size_t __s1_len___19 ;
  size_t __s2_len___19 ;
  int tmp___403 ;
  int tmp___408 ;
  int tmp___409 ;
  int tmp___410 ;
  int tmp___411 ;
  size_t __s1_len___20 ;
  size_t __s2_len___20 ;
  int tmp___421 ;
  int tmp___426 ;
  int tmp___427 ;
  int tmp___428 ;
  int tmp___429 ;
  size_t __s1_len___21 ;
  size_t __s2_len___21 ;
  int tmp___439 ;
  int tmp___444 ;
  int tmp___445 ;
  int tmp___446 ;
  int tmp___447 ;
  size_t __s1_len___22 ;
  size_t __s2_len___22 ;
  int tmp___457 ;
  int tmp___462 ;
  int tmp___463 ;
  int tmp___464 ;
  int tmp___465 ;
  int __dyc_funcallvar_117 ;
  int __dyc_funcallvar_118 ;
  int __dyc_funcallvar_119 ;
  int __dyc_funcallvar_120 ;
  int __dyc_funcallvar_121 ;
  int __dyc_funcallvar_122 ;
  int __dyc_funcallvar_123 ;
  int __dyc_funcallvar_124 ;
  int __dyc_funcallvar_125 ;
  int __dyc_funcallvar_126 ;
  int __dyc_funcallvar_127 ;
  int __dyc_funcallvar_128 ;
  int __dyc_funcallvar_129 ;
  int __dyc_funcallvar_130 ;
  int __dyc_funcallvar_131 ;
  int __dyc_funcallvar_132 ;
  int __dyc_funcallvar_133 ;
  int __dyc_funcallvar_134 ;
  int __dyc_funcallvar_135 ;
  int __dyc_funcallvar_136 ;

  {
  tmp___390 = __dyc_readpre_byte();
  __dyc_funcallvar_117 = __dyc_readpre_byte();
  __dyc_funcallvar_118 = __dyc_readpre_byte();
  __dyc_funcallvar_119 = __dyc_readpre_byte();
  __dyc_funcallvar_120 = __dyc_readpre_byte();
  __dyc_funcallvar_121 = __dyc_readpre_byte();
  __dyc_funcallvar_122 = __dyc_readpre_byte();
  __dyc_funcallvar_123 = __dyc_readpre_byte();
  __dyc_funcallvar_124 = __dyc_readpre_byte();
  __dyc_funcallvar_125 = __dyc_readpre_byte();
  __dyc_funcallvar_126 = __dyc_readpre_byte();
  __dyc_funcallvar_127 = __dyc_readpre_byte();
  __dyc_funcallvar_128 = __dyc_readpre_byte();
  __dyc_funcallvar_129 = __dyc_readpre_byte();
  __dyc_funcallvar_130 = __dyc_readpre_byte();
  __dyc_funcallvar_131 = __dyc_readpre_byte();
  __dyc_funcallvar_132 = __dyc_readpre_byte();
  __dyc_funcallvar_133 = __dyc_readpre_byte();
  __dyc_funcallvar_134 = __dyc_readpre_byte();
  __dyc_funcallvar_135 = __dyc_readpre_byte();
  __dyc_funcallvar_136 = __dyc_readpre_byte();
  tmp___385 = 0;
  __s1_len___19 = 0;
  __s2_len___19 = 0;
  tmp___403 = 0;
  tmp___408 = 0;
  tmp___409 = 0;
  tmp___410 = 0;
  tmp___411 = 0;
  __s1_len___20 = 0;
  __s2_len___20 = 0;
  tmp___421 = 0;
  tmp___426 = 0;
  tmp___427 = 0;
  tmp___428 = 0;
  tmp___429 = 0;
  __s1_len___21 = 0;
  __s2_len___21 = 0;
  tmp___439 = 0;
  tmp___444 = 0;
  tmp___445 = 0;
  tmp___446 = 0;
  tmp___447 = 0;
  __s1_len___22 = 0;
  __s2_len___22 = 0;
  tmp___457 = 0;
  tmp___462 = 0;
  tmp___463 = 0;
  tmp___464 = 0;
  tmp___465 = 0;
  tmp___385 = tmp___390;
  if (0) {
    {
    tmp___409 = __dyc_funcallvar_117;
    __s1_len___19 = (unsigned long )tmp___409;
    tmp___410 = __dyc_funcallvar_118;
    __s2_len___19 = (unsigned long )tmp___410;
    }
    if (! ((unsigned long )((void const   *)(str + 1)) - (unsigned long )((void const   *)(str)) == 1UL)) {
      goto _L___44;
    } else {
      if (__s1_len___19 >= 4UL) {
        _L___44:  
        if (! ((unsigned long )((void const   *)("punct" + 1)) - (unsigned long )((void const   *)"punct") == 1UL)) {
          tmp___411 = 1;
        } else {
          if (__s2_len___19 >= 4UL) {
            tmp___411 = 1;
          } else {
            tmp___411 = 0;
          }
        }
      } else {
        tmp___411 = 0;
      }
    }
    if (tmp___411) {
      {
      tmp___403 = __dyc_funcallvar_119;
      }
    } else {
      {
      tmp___408 = __dyc_funcallvar_120;
      tmp___403 = tmp___408;
      }
    }
  } else {
    {
    tmp___408 = __dyc_funcallvar_121;
    tmp___403 = tmp___408;
    }
  }
  if (! (tmp___403 == 0)) {
    if (0) {
      {
      tmp___427 = __dyc_funcallvar_122;
      __s1_len___20 = (unsigned long )tmp___427;
      tmp___428 = __dyc_funcallvar_123;
      __s2_len___20 = (unsigned long )tmp___428;
      }
      if (! ((unsigned long )((void const   *)(str + 1)) - (unsigned long )((void const   *)(str)) == 1UL)) {
        goto _L___46;
      } else {
        if (__s1_len___20 >= 4UL) {
          _L___46:  
          if (! ((unsigned long )((void const   *)("graph" + 1)) - (unsigned long )((void const   *)"graph") == 1UL)) {
            tmp___429 = 1;
          } else {
            if (__s2_len___20 >= 4UL) {
              tmp___429 = 1;
            } else {
              tmp___429 = 0;
            }
          }
        } else {
          tmp___429 = 0;
        }
      }
      if (tmp___429) {
        {
        tmp___421 = __dyc_funcallvar_124;
        }
      } else {
        {
        tmp___426 = __dyc_funcallvar_125;
        tmp___421 = tmp___426;
        }
      }
    } else {
      {
      tmp___426 = __dyc_funcallvar_126;
      tmp___421 = tmp___426;
      }
    }
    if (! (tmp___421 == 0)) {
      if (0) {
        {
        tmp___445 = __dyc_funcallvar_127;
        __s1_len___21 = (unsigned long )tmp___445;
        tmp___446 = __dyc_funcallvar_128;
        __s2_len___21 = (unsigned long )tmp___446;
        }
        if (! ((unsigned long )((void const   *)(str + 1)) - (unsigned long )((void const   *)(str)) == 1UL)) {
          goto _L___48;
        } else {
          if (__s1_len___21 >= 4UL) {
            _L___48:  
            if (! ((unsigned long )((void const   *)("cntrl" + 1)) - (unsigned long )((void const   *)"cntrl") == 1UL)) {
              tmp___447 = 1;
            } else {
              if (__s2_len___21 >= 4UL) {
                tmp___447 = 1;
              } else {
                tmp___447 = 0;
              }
            }
          } else {
            tmp___447 = 0;
          }
        }
        if (tmp___447) {
          {
          tmp___439 = __dyc_funcallvar_129;
          }
        } else {
          {
          tmp___444 = __dyc_funcallvar_130;
          tmp___439 = tmp___444;
          }
        }
      } else {
        {
        tmp___444 = __dyc_funcallvar_131;
        tmp___439 = tmp___444;
        }
      }
      if (! (tmp___439 == 0)) {
        if (0) {
          {
          tmp___463 = __dyc_funcallvar_132;
          __s1_len___22 = (unsigned long )tmp___463;
          tmp___464 = __dyc_funcallvar_133;
          __s2_len___22 = (unsigned long )tmp___464;
          }
          if (! ((unsigned long )((void const   *)(str + 1)) - (unsigned long )((void const   *)(str)) == 1UL)) {
            goto _L___50;
          } else {
            if (__s1_len___22 >= 4UL) {
              _L___50:  
              if (! ((unsigned long )((void const   *)("blank" + 1)) - (unsigned long )((void const   *)"blank") == 1UL)) {
                tmp___465 = 1;
              } else {
                if (__s2_len___22 >= 4UL) {
                  tmp___465 = 1;
                } else {
                  tmp___465 = 0;
                }
              }
            } else {
              tmp___465 = 0;
            }
          }
          if (tmp___465) {
            {
            tmp___457 = __dyc_funcallvar_134;
            }
          } else {
            {
            tmp___462 = __dyc_funcallvar_135;
            tmp___457 = tmp___462;
            }
          }
        } else {
          {
          tmp___462 = __dyc_funcallvar_136;
          tmp___457 = tmp___462;
          }
        }
        if (! (tmp___457 == 0)) {
          {

          }
          goto __dyc_dummy_label;
        }
      }
    }
  }
  __dyc_dummy_label:  ;
  __dyc_printpre_byte(tmp___385);
  __dyc_printpre_byte(__s1_len___19);
  __dyc_printpre_byte(__s2_len___19);
  __dyc_printpre_byte(__s1_len___20);
  __dyc_printpre_byte(__s2_len___20);
  __dyc_printpre_byte(__s1_len___21);
  __dyc_printpre_byte(__s2_len___21);
  __dyc_printpre_byte(__s1_len___22);
  __dyc_printpre_byte(__s2_len___22);
}
}
