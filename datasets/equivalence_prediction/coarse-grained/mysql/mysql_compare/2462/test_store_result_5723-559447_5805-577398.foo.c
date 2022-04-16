#include "../../include/dycfoo.h"
#include "../../include/mysql_client_test.i.hd.c.h"
void __dyc_foo(void) 
{ my_bool opt_silent ;
  MYSQL_STMT *stmt ;
  int rc ;
  int32 nData ;
  char szData[100] ;
  MYSQL_BIND my_bind[2] ;
  ulong length ;
  ulong length1 ;
  my_bool is_null[2] ;
  my_bool tmp___1 ;
  size_t __s1_len ;
  size_t __s2_len ;
  int tmp___11 ;
  int tmp___16 ;
  int tmp___17 ;
  int tmp___18 ;
  int tmp___19 ;
  size_t __s1_len___0 ;
  size_t __s2_len___0 ;
  int tmp___29 ;
  int tmp___34 ;
  int tmp___35 ;
  int tmp___36 ;
  int tmp___37 ;
  size_t __s1_len___1 ;
  size_t __s2_len___1 ;
  int tmp___47 ;
  int tmp___52 ;
  int tmp___53 ;
  int tmp___54 ;
  int tmp___55 ;
  size_t __s1_len___2 ;
  size_t __s2_len___2 ;
  int tmp___65 ;
  int tmp___70 ;
  int tmp___71 ;
  int tmp___72 ;
  int tmp___73 ;
  size_t __s1_len___3 ;
  size_t __s2_len___3 ;
  int tmp___83 ;
  int tmp___88 ;
  int tmp___89 ;
  int tmp___90 ;
  int tmp___91 ;
  size_t __s1_len___4 ;
  size_t __s2_len___4 ;
  int tmp___101 ;
  int tmp___106 ;
  int tmp___107 ;
  int tmp___108 ;
  int tmp___109 ;
  MYSQL_STMT *__dyc_funcallvar_6 ;
  my_bool __dyc_funcallvar_7 ;
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
  int __dyc_funcallvar_39 ;
  int __dyc_funcallvar_40 ;
  int __dyc_funcallvar_41 ;
  int __dyc_funcallvar_42 ;
  int __dyc_funcallvar_43 ;
  int __dyc_funcallvar_44 ;
  int __dyc_funcallvar_45 ;
  int __dyc_funcallvar_46 ;
  int __dyc_funcallvar_47 ;
  int __dyc_funcallvar_48 ;
  int __dyc_funcallvar_49 ;

  {
  opt_silent = (my_bool )__dyc_readpre_byte();
  nData = __dyc_readpre_byte();
  length1 = (ulong )__dyc_readpre_byte();
  __dyc_funcallvar_6 = __dyc_read_ptr__typdef_MYSQL_STMT();
  __dyc_funcallvar_7 = (my_bool )__dyc_readpre_byte();
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
  __dyc_funcallvar_39 = __dyc_readpre_byte();
  __dyc_funcallvar_40 = __dyc_readpre_byte();
  __dyc_funcallvar_41 = __dyc_readpre_byte();
  __dyc_funcallvar_42 = __dyc_readpre_byte();
  __dyc_funcallvar_43 = __dyc_readpre_byte();
  __dyc_funcallvar_44 = __dyc_readpre_byte();
  __dyc_funcallvar_45 = __dyc_readpre_byte();
  __dyc_funcallvar_46 = __dyc_readpre_byte();
  __dyc_funcallvar_47 = __dyc_readpre_byte();
  __dyc_funcallvar_48 = __dyc_readpre_byte();
  __dyc_funcallvar_49 = __dyc_readpre_byte();
  stmt = 0;
  rc = 0;
  length = 0;
  tmp___1 = 0;
  __s1_len = 0;
  __s2_len = 0;
  tmp___11 = 0;
  tmp___16 = 0;
  tmp___17 = 0;
  tmp___18 = 0;
  tmp___19 = 0;
  __s1_len___0 = 0;
  __s2_len___0 = 0;
  tmp___29 = 0;
  tmp___34 = 0;
  tmp___35 = 0;
  tmp___36 = 0;
  tmp___37 = 0;
  __s1_len___1 = 0;
  __s2_len___1 = 0;
  tmp___47 = 0;
  tmp___52 = 0;
  tmp___53 = 0;
  tmp___54 = 0;
  tmp___55 = 0;
  __s1_len___2 = 0;
  __s2_len___2 = 0;
  tmp___65 = 0;
  tmp___70 = 0;
  tmp___71 = 0;
  tmp___72 = 0;
  tmp___73 = 0;
  __s1_len___3 = 0;
  __s2_len___3 = 0;
  tmp___83 = 0;
  tmp___88 = 0;
  tmp___89 = 0;
  tmp___90 = 0;
  tmp___91 = 0;
  __s1_len___4 = 0;
  __s2_len___4 = 0;
  tmp___101 = 0;
  tmp___106 = 0;
  tmp___107 = 0;
  tmp___108 = 0;
  tmp___109 = 0;
  my_bind[1].length = & length1;
  my_bind[1].is_null = & is_null[1];
  length1 = 0UL;
  stmt = __dyc_funcallvar_6;
  if ((unsigned long )stmt == (unsigned long )((MYSQL_STMT *)0)) {
    {

    }
  }
  if (! ((unsigned long )stmt != (unsigned long )((MYSQL_STMT *)0))) {
    {

    }
  }
  tmp___1 = __dyc_funcallvar_7;
  rc = (int )tmp___1;
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
  if (! (rc == 0)) {
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
  if (! (nData == 10)) {
    {

    }
  }
  if (0) {
    {
    tmp___17 = __dyc_funcallvar_11;
    __s1_len = (unsigned long )tmp___17;
    tmp___18 = __dyc_funcallvar_12;
    __s2_len = (unsigned long )tmp___18;
    }
    if (! ((unsigned long )((void const   *)(szData + 1)) - (unsigned long )((void const   *)(szData)) == 1UL)) {
      goto _L___0;
    } else {
      if (__s1_len >= 4UL) {
        _L___0:  
        if (! ((unsigned long )((void const   *)("venu" + 1)) - (unsigned long )((void const   *)"venu") == 1UL)) {
          tmp___19 = 1;
        } else {
          if (__s2_len >= 4UL) {
            tmp___19 = 1;
          } else {
            tmp___19 = 0;
          }
        }
      } else {
        tmp___19 = 0;
      }
    }
    if (tmp___19) {
      {
      tmp___11 = __dyc_funcallvar_13;
      }
    } else {
      {
      tmp___16 = __dyc_funcallvar_14;
      tmp___11 = tmp___16;
      }
    }
  } else {
    {
    tmp___16 = __dyc_funcallvar_15;
    tmp___11 = tmp___16;
    }
  }
  if (! (tmp___11 == 0)) {
    {

    }
  }
  if (! (length1 == 4UL)) {
    {

    }
  }
  rc = __dyc_funcallvar_16;
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
  if (! (nData == 20)) {
    {

    }
  }
  if (0) {
    {
    tmp___35 = __dyc_funcallvar_17;
    __s1_len___0 = (unsigned long )tmp___35;
    tmp___36 = __dyc_funcallvar_18;
    __s2_len___0 = (unsigned long )tmp___36;
    }
    if (! ((unsigned long )((void const   *)(szData + 1)) - (unsigned long )((void const   *)(szData)) == 1UL)) {
      goto _L___2;
    } else {
      if (__s1_len___0 >= 4UL) {
        _L___2:  
        if (! ((unsigned long )((void const   *)("mysql" + 1)) - (unsigned long )((void const   *)"mysql") == 1UL)) {
          tmp___37 = 1;
        } else {
          if (__s2_len___0 >= 4UL) {
            tmp___37 = 1;
          } else {
            tmp___37 = 0;
          }
        }
      } else {
        tmp___37 = 0;
      }
    }
    if (tmp___37) {
      {
      tmp___29 = __dyc_funcallvar_19;
      }
    } else {
      {
      tmp___34 = __dyc_funcallvar_20;
      tmp___29 = tmp___34;
      }
    }
  } else {
    {
    tmp___34 = __dyc_funcallvar_21;
    tmp___29 = tmp___34;
    }
  }
  if (! (tmp___29 == 0)) {
    {

    }
  }
  if (! (length1 == 5UL)) {
    {

    }
  }
  length = 99UL;
  rc = __dyc_funcallvar_22;
  if (rc) {
    {

    }
  }
  if (! (rc == 0)) {
    {

    }
  }
  if (! opt_silent) {
    if (is_null[0]) {
      {

      }
    }
  }
  if (! is_null[0]) {
    {

    }
  }
  if (0) {
    {
    tmp___53 = __dyc_funcallvar_23;
    __s1_len___1 = (unsigned long )tmp___53;
    tmp___54 = __dyc_funcallvar_24;
    __s2_len___1 = (unsigned long )tmp___54;
    }
    if (! ((unsigned long )((void const   *)(szData + 1)) - (unsigned long )((void const   *)(szData)) == 1UL)) {
      goto _L___4;
    } else {
      if (__s1_len___1 >= 4UL) {
        _L___4:  
        if (! ((unsigned long )((void const   *)("monty" + 1)) - (unsigned long )((void const   *)"monty") == 1UL)) {
          tmp___55 = 1;
        } else {
          if (__s2_len___1 >= 4UL) {
            tmp___55 = 1;
          } else {
            tmp___55 = 0;
          }
        }
      } else {
        tmp___55 = 0;
      }
    }
    if (tmp___55) {
      {
      tmp___47 = __dyc_funcallvar_25;
      }
    } else {
      {
      tmp___52 = __dyc_funcallvar_26;
      tmp___47 = tmp___52;
      }
    }
  } else {
    {
    tmp___52 = __dyc_funcallvar_27;
    tmp___47 = tmp___52;
    }
  }
  if (! (tmp___47 == 0)) {
    {

    }
  }
  if (! (length1 == 5UL)) {
    {

    }
  }
  rc = __dyc_funcallvar_28;
  if (! (rc == 100)) {
    {

    }
  }
  rc = __dyc_funcallvar_29;
  if (rc) {
    {

    }
  }
  if (! (rc == 0)) {
    {

    }
  }
  rc = __dyc_funcallvar_30;
  if (rc) {
    {

    }
  }
  if (! (rc == 0)) {
    {

    }
  }
  rc = __dyc_funcallvar_31;
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
  if (! (nData == 10)) {
    {

    }
  }
  if (0) {
    {
    tmp___71 = __dyc_funcallvar_32;
    __s1_len___2 = (unsigned long )tmp___71;
    tmp___72 = __dyc_funcallvar_33;
    __s2_len___2 = (unsigned long )tmp___72;
    }
    if (! ((unsigned long )((void const   *)(szData + 1)) - (unsigned long )((void const   *)(szData)) == 1UL)) {
      goto _L___6;
    } else {
      if (__s1_len___2 >= 4UL) {
        _L___6:  
        if (! ((unsigned long )((void const   *)("venu" + 1)) - (unsigned long )((void const   *)"venu") == 1UL)) {
          tmp___73 = 1;
        } else {
          if (__s2_len___2 >= 4UL) {
            tmp___73 = 1;
          } else {
            tmp___73 = 0;
          }
        }
      } else {
        tmp___73 = 0;
      }
    }
    if (tmp___73) {
      {
      tmp___65 = __dyc_funcallvar_34;
      }
    } else {
      {
      tmp___70 = __dyc_funcallvar_35;
      tmp___65 = tmp___70;
      }
    }
  } else {
    {
    tmp___70 = __dyc_funcallvar_36;
    tmp___65 = tmp___70;
    }
  }
  if (! (tmp___65 == 0)) {
    {

    }
  }
  if (! (length1 == 4UL)) {
    {

    }
  }
  rc = __dyc_funcallvar_37;
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
  if (! (nData == 20)) {
    {

    }
  }
  if (0) {
    {
    tmp___89 = __dyc_funcallvar_38;
    __s1_len___3 = (unsigned long )tmp___89;
    tmp___90 = __dyc_funcallvar_39;
    __s2_len___3 = (unsigned long )tmp___90;
    }
    if (! ((unsigned long )((void const   *)(szData + 1)) - (unsigned long )((void const   *)(szData)) == 1UL)) {
      goto _L___8;
    } else {
      if (__s1_len___3 >= 4UL) {
        _L___8:  
        if (! ((unsigned long )((void const   *)("mysql" + 1)) - (unsigned long )((void const   *)"mysql") == 1UL)) {
          tmp___91 = 1;
        } else {
          if (__s2_len___3 >= 4UL) {
            tmp___91 = 1;
          } else {
            tmp___91 = 0;
          }
        }
      } else {
        tmp___91 = 0;
      }
    }
    if (tmp___91) {
      {
      tmp___83 = __dyc_funcallvar_40;
      }
    } else {
      {
      tmp___88 = __dyc_funcallvar_41;
      tmp___83 = tmp___88;
      }
    }
  } else {
    {
    tmp___88 = __dyc_funcallvar_42;
    tmp___83 = tmp___88;
    }
  }
  if (! (tmp___83 == 0)) {
    {

    }
  }
  if (! (length1 == 5UL)) {
    {

    }
  }
  length = 99UL;
  rc = __dyc_funcallvar_43;
  if (rc) {
    {

    }
  }
  if (! (rc == 0)) {
    {

    }
  }
  if (! opt_silent) {
    if (is_null[0]) {
      {

      }
    }
  }
  if (! is_null[0]) {
    {

    }
  }
  if (0) {
    {
    tmp___107 = __dyc_funcallvar_44;
    __s1_len___4 = (unsigned long )tmp___107;
    tmp___108 = __dyc_funcallvar_45;
    __s2_len___4 = (unsigned long )tmp___108;
    }
    if (! ((unsigned long )((void const   *)(szData + 1)) - (unsigned long )((void const   *)(szData)) == 1UL)) {
      goto _L___10;
    } else {
      if (__s1_len___4 >= 4UL) {
        _L___10:  
        if (! ((unsigned long )((void const   *)("monty" + 1)) - (unsigned long )((void const   *)"monty") == 1UL)) {
          tmp___109 = 1;
        } else {
          if (__s2_len___4 >= 4UL) {
            tmp___109 = 1;
          } else {
            tmp___109 = 0;
          }
        }
      } else {
        tmp___109 = 0;
      }
    }
    if (tmp___109) {
      {
      tmp___101 = __dyc_funcallvar_46;
      }
    } else {
      {
      tmp___106 = __dyc_funcallvar_47;
      tmp___101 = tmp___106;
      }
    }
  } else {
    {
    tmp___106 = __dyc_funcallvar_48;
    tmp___101 = tmp___106;
    }
  }
  if (! (tmp___101 == 0)) {
    {

    }
  }
  if (! (length1 == 5UL)) {
    {

    }
  }
  rc = __dyc_funcallvar_49;
  if (! (rc == 100)) {
    {

    }
  }
  __dyc_dummy_label:  ;
  __dyc_printpre_byte(length);
  __dyc_printpre_byte(__s1_len);
  __dyc_printpre_byte(__s2_len);
  __dyc_printpre_byte(__s1_len___0);
  __dyc_printpre_byte(__s2_len___0);
  __dyc_printpre_byte(__s1_len___1);
  __dyc_printpre_byte(__s2_len___1);
  __dyc_printpre_byte(__s1_len___2);
  __dyc_printpre_byte(__s2_len___2);
  __dyc_printpre_byte(__s1_len___3);
  __dyc_printpre_byte(__s2_len___3);
  __dyc_printpre_byte(__s1_len___4);
  __dyc_printpre_byte(__s2_len___4);
}
}
