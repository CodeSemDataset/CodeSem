#include "../../include/dycfoo.h"
#include "../../include/mysql_client_test.i.hd.c.h"
void __dyc_foo(void) 
{ my_bool opt_silent ;
  MYSQL_STMT *stmt ;
  MYSQL_BIND my_bind[2] ;
  char c2[20] ;
  char bc2[20] ;
  ulong l1 ;
  ulong l2 ;
  ulong bl1 ;
  ulong bl2 ;
  int rc ;
  int c1 ;
  int bc1 ;
  int r___0 ;
  int r___1 ;
  my_bool tmp___0 ;
  int tmp___22 ;
  size_t __s1_len___0 ;
  size_t __s2_len___0 ;
  int tmp___32 ;
  int tmp___37 ;
  int tmp___38 ;
  int tmp___39 ;
  int tmp___40 ;
  size_t __s1_len___1 ;
  size_t __s2_len___1 ;
  int tmp___52 ;
  int tmp___57 ;
  int tmp___58 ;
  int tmp___59 ;
  int tmp___60 ;
  int tmp___82 ;
  size_t __s1_len___3 ;
  size_t __s2_len___3 ;
  int tmp___92 ;
  int tmp___97 ;
  int tmp___98 ;
  int tmp___99 ;
  int tmp___100 ;
  size_t __s1_len___4 ;
  size_t __s2_len___4 ;
  int tmp___112 ;
  int tmp___117 ;
  int tmp___118 ;
  int tmp___119 ;
  int tmp___120 ;
  int __dyc_funcallvar_3 ;
  MYSQL_STMT *__dyc_funcallvar_4 ;
  int __dyc_funcallvar_5 ;
  my_bool __dyc_funcallvar_6 ;
  int __dyc_funcallvar_7 ;
  int __dyc_funcallvar_8 ;
  int __dyc_funcallvar_9 ;
  int __dyc_funcallvar_10 ;
  int __dyc_funcallvar_11 ;
  int __dyc_funcallvar_12 ;
  int __dyc_funcallvar_13 ;
  int __dyc_funcallvar_14 ;
  int __dyc_funcallvar_15 ;
  int __dyc_funcallvar_16 ;
  int __dyc_funcallvar_17 ;
  int __dyc_funcallvar_18 ;
  int __dyc_funcallvar_19 ;
  int __dyc_funcallvar_20 ;
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

  {
  opt_silent = (my_bool )__dyc_readpre_byte();
  l1 = (ulong )__dyc_readpre_byte();
  bl1 = (ulong )__dyc_readpre_byte();
  bl2 = (ulong )__dyc_readpre_byte();
  bc1 = __dyc_readpre_byte();
  r___0 = __dyc_readpre_byte();
  __dyc_funcallvar_3 = __dyc_readpre_byte();
  __dyc_funcallvar_4 = __dyc_read_ptr__typdef_MYSQL_STMT();
  __dyc_funcallvar_5 = __dyc_readpre_byte();
  __dyc_funcallvar_6 = (my_bool )__dyc_readpre_byte();
  __dyc_funcallvar_7 = __dyc_readpre_byte();
  __dyc_funcallvar_8 = __dyc_readpre_byte();
  __dyc_funcallvar_9 = __dyc_readpre_byte();
  __dyc_funcallvar_10 = __dyc_readpre_byte();
  __dyc_funcallvar_11 = __dyc_readpre_byte();
  __dyc_funcallvar_12 = __dyc_readpre_byte();
  __dyc_funcallvar_13 = __dyc_readpre_byte();
  __dyc_funcallvar_14 = __dyc_readpre_byte();
  __dyc_funcallvar_15 = __dyc_readpre_byte();
  __dyc_funcallvar_16 = __dyc_readpre_byte();
  __dyc_funcallvar_17 = __dyc_readpre_byte();
  __dyc_funcallvar_18 = __dyc_readpre_byte();
  __dyc_funcallvar_19 = __dyc_readpre_byte();
  __dyc_funcallvar_20 = __dyc_readpre_byte();
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
  stmt = 0;
  l2 = 0;
  rc = 0;
  c1 = 0;
  r___1 = 0;
  tmp___0 = 0;
  tmp___22 = 0;
  __s1_len___0 = 0;
  __s2_len___0 = 0;
  tmp___32 = 0;
  tmp___37 = 0;
  tmp___38 = 0;
  tmp___39 = 0;
  tmp___40 = 0;
  __s1_len___1 = 0;
  __s2_len___1 = 0;
  tmp___52 = 0;
  tmp___57 = 0;
  tmp___58 = 0;
  tmp___59 = 0;
  tmp___60 = 0;
  tmp___82 = 0;
  __s1_len___3 = 0;
  __s2_len___3 = 0;
  tmp___92 = 0;
  tmp___97 = 0;
  tmp___98 = 0;
  tmp___99 = 0;
  tmp___100 = 0;
  __s1_len___4 = 0;
  __s2_len___4 = 0;
  tmp___112 = 0;
  tmp___117 = 0;
  tmp___118 = 0;
  tmp___119 = 0;
  tmp___120 = 0;
  if (! (r___0 == 0)) {
    {

    }
  }
  rc = __dyc_funcallvar_3;
  r___1 = rc;
  if (r___1) {
    {

    }
  }
  if (! (r___1 == 0)) {
    {

    }
  }
  stmt = __dyc_funcallvar_4;
  if ((unsigned long )stmt == (unsigned long )((MYSQL_STMT *)0)) {
    {

    }
  }
  if (! ((unsigned long )stmt != (unsigned long )((MYSQL_STMT *)0))) {
    {

    }
  }

  my_bind[0].buffer_type = 3;
  my_bind[0].buffer = (void *)(& bc1);
  my_bind[0].buffer_length = 0UL;
  my_bind[0].is_null = (my_bool *)0;
  my_bind[0].length = & bl1;
  my_bind[1].buffer_type = 254;
  my_bind[1].buffer = (void *)(bc2);
  my_bind[1].buffer_length = 7UL;
  my_bind[1].is_null = (my_bool *)0;
  my_bind[1].length = & bl2;
  rc = __dyc_funcallvar_5;
  if (rc) {
    {

    }
  }
  if (! (rc == 0)) {
    {

    }
  }
  tmp___0 = __dyc_funcallvar_6;
  rc = (int )tmp___0;
  if (rc) {
    {

    }
  }
  if (! (rc == 0)) {
    {

    }
  }
  rc = __dyc_funcallvar_7;
  if (rc) {
    {

    }
  }
  if (! (rc == 0)) {
    {

    }
  }
  rc = __dyc_funcallvar_8;
  if (rc) {
    {

    }
  }
  if (! (rc != 0)) {
    {

    }
  }
  rc = __dyc_funcallvar_9;
  if (rc) {
    {

    }
  }
  if (! (rc == 0)) {
    {

    }
  }
  if (! opt_silent) {
    {

    }
  }
  c2[0] = (char )'\000';
  l2 = 0UL;
  my_bind[0].buffer_type = 254;
  my_bind[0].buffer = (void *)(c2);
  my_bind[0].buffer_length = 7UL;
  my_bind[0].is_null = (my_bool *)0;
  my_bind[0].length = & l2;
  rc = __dyc_funcallvar_10;
  if (rc) {
    {

    }
  }
  if (! (rc == 0)) {
    {

    }
  }
  if (! opt_silent) {
    {

    }
  }
  if (0) {
    if (0) {
      {
      tmp___38 = __dyc_funcallvar_11;
      __s1_len___0 = (unsigned long )tmp___38;
      tmp___39 = __dyc_funcallvar_12;
      __s2_len___0 = (unsigned long )tmp___39;
      }
      if (! ((unsigned long )((void const   *)(c2 + 1)) - (unsigned long )((void const   *)(c2)) == 1UL)) {
        goto _L___2;
      } else {
        if (__s1_len___0 >= 4UL) {
          _L___2:  
          if (! ((unsigned long )((void const   *)("venu" + 1)) - (unsigned long )((void const   *)"venu") == 1UL)) {
            tmp___40 = 1;
          } else {
            if (__s2_len___0 >= 4UL) {
              tmp___40 = 1;
            } else {
              tmp___40 = 0;
            }
          }
        } else {
          tmp___40 = 0;
        }
      }
      if (tmp___40) {
        {
        tmp___32 = __dyc_funcallvar_13;
        }
      } else {
        {
        tmp___37 = __dyc_funcallvar_14;
        tmp___32 = tmp___37;
        }
      }
    } else {
      {
      tmp___37 = __dyc_funcallvar_15;
      tmp___32 = tmp___37;
      }
    }
    tmp___22 = tmp___32;
  } else {
    {
    tmp___22 = __dyc_funcallvar_16;
    }
  }
  if (tmp___22 == 0) {
    if (! (l2 == 4UL)) {
      {

      }
    }
  } else {
    {

    }
  }
  c2[0] = (char )'\000';
  l2 = 0UL;
  rc = __dyc_funcallvar_17;
  if (rc) {
    {

    }
  }
  if (! (rc == 0)) {
    {

    }
  }
  if (! opt_silent) {
    {

    }
  }
  if (0) {
    {
    tmp___58 = __dyc_funcallvar_18;
    __s1_len___1 = (unsigned long )tmp___58;
    tmp___59 = __dyc_funcallvar_19;
    __s2_len___1 = (unsigned long )tmp___59;
    }
    if (! ((unsigned long )((void const   *)(c2 + 1)) - (unsigned long )((void const   *)(c2)) == 1UL)) {
      goto _L___4;
    } else {
      if (__s1_len___1 >= 4UL) {
        _L___4:  
        if (! ((unsigned long )((void const   *)("venu" + 1)) - (unsigned long )((void const   *)"venu") == 1UL)) {
          tmp___60 = 1;
        } else {
          if (__s2_len___1 >= 4UL) {
            tmp___60 = 1;
          } else {
            tmp___60 = 0;
          }
        }
      } else {
        tmp___60 = 0;
      }
    }
    if (tmp___60) {
      {
      tmp___52 = __dyc_funcallvar_20;
      }
    } else {
      {
      tmp___57 = __dyc_funcallvar_21;
      tmp___52 = tmp___57;
      }
    }
  } else {
    {
    tmp___57 = __dyc_funcallvar_22;
    tmp___52 = tmp___57;
    }
  }
  if (tmp___52 == 0) {
    if (! (l2 == 4UL)) {
      {

      }
    }
  } else {
    {

    }
  }
  c1 = 0;
  my_bind[0].buffer_type = 3;
  my_bind[0].buffer = (void *)(& c1);
  my_bind[0].buffer_length = 0UL;
  my_bind[0].is_null = (my_bool *)0;
  my_bind[0].length = & l1;
  rc = __dyc_funcallvar_23;
  if (rc) {
    {

    }
  }
  if (! (rc == 0)) {
    {

    }
  }
  if (! opt_silent) {
    {

    }
  }
  if (c1 == 1) {
    if (! (l1 == 4UL)) {
      {

      }
    }
  } else {
    {

    }
  }
  rc = __dyc_funcallvar_24;
  if (rc) {
    {

    }
  }
  if (! (rc == 0)) {
    {

    }
  }
  if (! opt_silent) {
    {

    }
  }
  c2[0] = (char )'\000';
  l2 = 0UL;
  my_bind[0].buffer_type = 254;
  my_bind[0].buffer = (void *)(c2);
  my_bind[0].buffer_length = 7UL;
  my_bind[0].is_null = (my_bool *)0;
  my_bind[0].length = & l2;
  rc = __dyc_funcallvar_25;
  if (rc) {
    {

    }
  }
  if (! (rc == 0)) {
    {

    }
  }
  if (! opt_silent) {
    {

    }
  }
  if (0) {
    if (0) {
      {
      tmp___98 = __dyc_funcallvar_26;
      __s1_len___3 = (unsigned long )tmp___98;
      tmp___99 = __dyc_funcallvar_27;
      __s2_len___3 = (unsigned long )tmp___99;
      }
      if (! ((unsigned long )((void const   *)(c2 + 1)) - (unsigned long )((void const   *)(c2)) == 1UL)) {
        goto _L___8;
      } else {
        if (__s1_len___3 >= 4UL) {
          _L___8:  
          if (! ((unsigned long )((void const   *)("mysq" + 1)) - (unsigned long )((void const   *)"mysq") == 1UL)) {
            tmp___100 = 1;
          } else {
            if (__s2_len___3 >= 4UL) {
              tmp___100 = 1;
            } else {
              tmp___100 = 0;
            }
          }
        } else {
          tmp___100 = 0;
        }
      }
      if (tmp___100) {
        {
        tmp___92 = __dyc_funcallvar_28;
        }
      } else {
        {
        tmp___97 = __dyc_funcallvar_29;
        tmp___92 = tmp___97;
        }
      }
    } else {
      {
      tmp___97 = __dyc_funcallvar_30;
      tmp___92 = tmp___97;
      }
    }
    tmp___82 = tmp___92;
  } else {
    {
    tmp___82 = __dyc_funcallvar_31;
    }
  }
  if (tmp___82 == 0) {
    if (! (l2 == 5UL)) {
      {

      }
    }
  } else {
    {

    }
  }
  c2[0] = (char )'\000';
  l2 = 0UL;
  rc = __dyc_funcallvar_32;
  if (rc) {
    {

    }
  }
  if (! (rc == 0)) {
    {

    }
  }
  if (! opt_silent) {
    {

    }
  }
  if (0) {
    {
    tmp___118 = __dyc_funcallvar_33;
    __s1_len___4 = (unsigned long )tmp___118;
    tmp___119 = __dyc_funcallvar_34;
    __s2_len___4 = (unsigned long )tmp___119;
    }
    if (! ((unsigned long )((void const   *)(c2 + 1)) - (unsigned long )((void const   *)(c2)) == 1UL)) {
      goto _L___10;
    } else {
      if (__s1_len___4 >= 4UL) {
        _L___10:  
        if (! ((unsigned long )((void const   *)("mysql" + 1)) - (unsigned long )((void const   *)"mysql") == 1UL)) {
          tmp___120 = 1;
        } else {
          if (__s2_len___4 >= 4UL) {
            tmp___120 = 1;
          } else {
            tmp___120 = 0;
          }
        }
      } else {
        tmp___120 = 0;
      }
    }
    if (tmp___120) {
      {
      tmp___112 = __dyc_funcallvar_35;
      }
    } else {
      {
      tmp___117 = __dyc_funcallvar_36;
      tmp___112 = tmp___117;
      }
    }
  } else {
    {
    tmp___117 = __dyc_funcallvar_37;
    tmp___112 = tmp___117;
    }
  }
  if (tmp___112 == 0) {
    if (! (l2 == 5UL)) {
      {

      }
    }
  } else {
    {

    }
  }
  c1 = 0;
  my_bind[0].buffer_type = 3;
  my_bind[0].buffer = (void *)(& c1);
  my_bind[0].buffer_length = 0UL;
  my_bind[0].is_null = (my_bool *)0;
  my_bind[0].length = & l1;
  rc = __dyc_funcallvar_38;
  if (rc) {
    {

    }
  }
  __dyc_dummy_label:  ;
  __dyc_printpre_byte(l2);
  __dyc_printpre_byte(__s1_len___0);
  __dyc_printpre_byte(__s2_len___0);
  __dyc_printpre_byte(__s1_len___1);
  __dyc_printpre_byte(__s2_len___1);
  __dyc_printpre_byte(__s1_len___3);
  __dyc_printpre_byte(__s2_len___3);
  __dyc_printpre_byte(__s1_len___4);
  __dyc_printpre_byte(__s2_len___4);
}
}
