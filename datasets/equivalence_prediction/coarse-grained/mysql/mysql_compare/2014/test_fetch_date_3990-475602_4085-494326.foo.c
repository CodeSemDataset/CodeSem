#include "../../include/dycfoo.h"
#include "../../include/mysql_client_test.i.hd.c.h"
void __dyc_foo(void) 
{ my_bool opt_silent ;
  MYSQL_STMT *stmt ;
  uint i ;
  int rc ;
  int year ;
  char date[25] ;
  char my_time[25] ;
  char ts[25] ;
  char ts_4[25] ;
  char ts_6[20] ;
  char dt[20] ;
  ulong d_length ;
  ulong t_length ;
  ulong ts_length ;
  ulong ts4_length ;
  ulong ts6_length ;
  ulong dt_length ;
  ulong y_length ;
  MYSQL_BIND my_bind[8] ;
  my_bool is_null[8] ;
  ulong length[8] ;
  int r___2 ;
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
  size_t tmp___92 ;
  size_t __s1_len___4 ;
  size_t __s2_len___4 ;
  int tmp___102 ;
  int tmp___107 ;
  int tmp___108 ;
  int tmp___109 ;
  int tmp___110 ;
  int __dyc_funcallvar_6 ;
  MYSQL_STMT *__dyc_funcallvar_7 ;
  my_bool __dyc_funcallvar_8 ;
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
  size_t __dyc_funcallvar_36 ;
  int __dyc_funcallvar_37 ;
  int __dyc_funcallvar_38 ;
  int __dyc_funcallvar_39 ;
  int __dyc_funcallvar_40 ;
  int __dyc_funcallvar_41 ;
  int __dyc_funcallvar_42 ;

  {
  opt_silent = (my_bool )__dyc_readpre_byte();
  year = __dyc_readpre_byte();
  d_length = (ulong )__dyc_readpre_byte();
  t_length = (ulong )__dyc_readpre_byte();
  ts_length = (ulong )__dyc_readpre_byte();
  ts4_length = (ulong )__dyc_readpre_byte();
  ts6_length = (ulong )__dyc_readpre_byte();
  dt_length = (ulong )__dyc_readpre_byte();
  y_length = (ulong )__dyc_readpre_byte();
  r___2 = __dyc_readpre_byte();
  __dyc_funcallvar_6 = __dyc_readpre_byte();
  __dyc_funcallvar_7 = __dyc_read_ptr__typdef_MYSQL_STMT();
  __dyc_funcallvar_8 = (my_bool )__dyc_readpre_byte();
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
  __dyc_funcallvar_36 = (size_t )__dyc_readpre_byte();
  __dyc_funcallvar_37 = __dyc_readpre_byte();
  __dyc_funcallvar_38 = __dyc_readpre_byte();
  __dyc_funcallvar_39 = __dyc_readpre_byte();
  __dyc_funcallvar_40 = __dyc_readpre_byte();
  __dyc_funcallvar_41 = __dyc_readpre_byte();
  __dyc_funcallvar_42 = __dyc_readpre_byte();
  stmt = 0;
  i = 0;
  rc = 0;
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
  tmp___92 = 0;
  __s1_len___4 = 0;
  __s2_len___4 = 0;
  tmp___102 = 0;
  tmp___107 = 0;
  tmp___108 = 0;
  tmp___109 = 0;
  tmp___110 = 0;
  if (! (r___2 == 0)) {
    {

    }
  }

  i = 0U;
  while (1) {
    while_50_continue:  ;
    if (! (i < (unsigned int )(sizeof(MYSQL_BIND [8]) / sizeof(MYSQL_BIND )))) {
      goto while_50_break;
    }
    my_bind[i].is_null = & is_null[i];
    my_bind[i].length = & length[i];
    i ++;
  }
  while_50_break:  ;
  my_bind[0].buffer_type = 254;
  my_bind[2] = my_bind[0];
  my_bind[1] = my_bind[2];
  my_bind[0].buffer = (void *)(& date);
  my_bind[0].buffer_length = sizeof(char [25]);
  my_bind[0].length = & d_length;
  my_bind[1].buffer = (void *)(& my_time);
  my_bind[1].buffer_length = sizeof(char [25]);
  my_bind[1].length = & t_length;
  my_bind[2].buffer = (void *)(& ts);
  my_bind[2].buffer_length = sizeof(char [25]);
  my_bind[2].length = & ts_length;
  my_bind[3].buffer_type = 3;
  my_bind[3].buffer = (void *)(& year);
  my_bind[3].length = & y_length;
  my_bind[4].buffer_type = 254;
  my_bind[4].buffer = (void *)(& dt);
  my_bind[4].buffer_length = sizeof(char [20]);
  my_bind[4].length = & dt_length;
  my_bind[5].buffer_type = 254;
  my_bind[5].buffer = (void *)(& ts_4);
  my_bind[5].buffer_length = sizeof(char [25]);
  my_bind[5].length = & ts4_length;
  my_bind[6].buffer_type = 254;
  my_bind[6].buffer = (void *)(& ts_6);
  my_bind[6].buffer_length = sizeof(char [20]);
  my_bind[6].length = & ts6_length;
  rc = __dyc_funcallvar_6;
  if (! (rc == 1)) {
    {

    }
  }
  stmt = __dyc_funcallvar_7;
  if ((unsigned long )stmt == (unsigned long )((MYSQL_STMT *)0)) {
    {

    }
  }
  if (! ((unsigned long )stmt != (unsigned long )((MYSQL_STMT *)0))) {
    {

    }
  }
  tmp___1 = __dyc_funcallvar_8;
  rc = (int )tmp___1;
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
  ts_4[0] = (char )'\000';
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
    {
    tmp___17 = __dyc_funcallvar_11;
    __s1_len = (unsigned long )tmp___17;
    tmp___18 = __dyc_funcallvar_12;
    __s2_len = (unsigned long )tmp___18;
    }
    if (! ((unsigned long )((void const   *)(date + 1)) - (unsigned long )((void const   *)(date)) == 1UL)) {
      goto _L___0;
    } else {
      if (__s1_len >= 4UL) {
        _L___0:  
        if (! ((unsigned long )((void const   *)("2002-01-02" + 1)) - (unsigned long )((void const   *)"2002-01-02") == 1UL)) {
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
  if (! (d_length == 10UL)) {
    {

    }
  }
  if (0) {
    {
    tmp___35 = __dyc_funcallvar_16;
    __s1_len___0 = (unsigned long )tmp___35;
    tmp___36 = __dyc_funcallvar_17;
    __s2_len___0 = (unsigned long )tmp___36;
    }
    if (! ((unsigned long )((void const   *)(my_time + 1)) - (unsigned long )((void const   *)(my_time)) == 1UL)) {
      goto _L___2;
    } else {
      if (__s1_len___0 >= 4UL) {
        _L___2:  
        if (! ((unsigned long )((void const   *)("12:49:00" + 1)) - (unsigned long )((void const   *)"12:49:00") == 1UL)) {
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
      tmp___29 = __dyc_funcallvar_18;
      }
    } else {
      {
      tmp___34 = __dyc_funcallvar_19;
      tmp___29 = tmp___34;
      }
    }
  } else {
    {
    tmp___34 = __dyc_funcallvar_20;
    tmp___29 = tmp___34;
    }
  }
  if (! (tmp___29 == 0)) {
    {

    }
  }
  if (! (t_length == 8UL)) {
    {

    }
  }
  if (0) {
    {
    tmp___53 = __dyc_funcallvar_21;
    __s1_len___1 = (unsigned long )tmp___53;
    tmp___54 = __dyc_funcallvar_22;
    __s2_len___1 = (unsigned long )tmp___54;
    }
    if (! ((unsigned long )((void const   *)(ts + 1)) - (unsigned long )((void const   *)(ts)) == 1UL)) {
      goto _L___4;
    } else {
      if (__s1_len___1 >= 4UL) {
        _L___4:  
        if (! ((unsigned long )((void const   *)("2002-01-02 17:46:59" + 1)) - (unsigned long )((void const   *)"2002-01-02 17:46:59") == 1UL)) {
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
      tmp___47 = __dyc_funcallvar_23;
      }
    } else {
      {
      tmp___52 = __dyc_funcallvar_24;
      tmp___47 = tmp___52;
      }
    }
  } else {
    {
    tmp___52 = __dyc_funcallvar_25;
    tmp___47 = tmp___52;
    }
  }
  if (! (tmp___47 == 0)) {
    {

    }
  }
  if (! (ts_length == 19UL)) {
    {

    }
  }
  if (! (year == 2010)) {
    {

    }
  }
  if (! (y_length == 4UL)) {
    {

    }
  }
  if (0) {
    {
    tmp___71 = __dyc_funcallvar_26;
    __s1_len___2 = (unsigned long )tmp___71;
    tmp___72 = __dyc_funcallvar_27;
    __s2_len___2 = (unsigned long )tmp___72;
    }
    if (! ((unsigned long )((void const   *)(dt + 1)) - (unsigned long )((void const   *)(dt)) == 1UL)) {
      goto _L___6;
    } else {
      if (__s1_len___2 >= 4UL) {
        _L___6:  
        if (! ((unsigned long )((void const   *)("2010-07-10 00:00:00" + 1)) - (unsigned long )((void const   *)"2010-07-10 00:00:00") == 1UL)) {
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
      tmp___65 = __dyc_funcallvar_28;
      }
    } else {
      {
      tmp___70 = __dyc_funcallvar_29;
      tmp___65 = tmp___70;
      }
    }
  } else {
    {
    tmp___70 = __dyc_funcallvar_30;
    tmp___65 = tmp___70;
    }
  }
  if (! (tmp___65 == 0)) {
    {

    }
  }
  if (! (dt_length == 19UL)) {
    {

    }
  }
  if (0) {
    {
    tmp___89 = __dyc_funcallvar_31;
    __s1_len___3 = (unsigned long )tmp___89;
    tmp___90 = __dyc_funcallvar_32;
    __s2_len___3 = (unsigned long )tmp___90;
    }
    if (! ((unsigned long )((void const   *)(ts_4 + 1)) - (unsigned long )((void const   *)(ts_4)) == 1UL)) {
      goto _L___8;
    } else {
      if (__s1_len___3 >= 4UL) {
        _L___8:  
        if (! ((unsigned long )((void const   *)("0000-00-00 00:00:00" + 1)) - (unsigned long )((void const   *)"0000-00-00 00:00:00") == 1UL)) {
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
      tmp___83 = __dyc_funcallvar_33;
      }
    } else {
      {
      tmp___88 = __dyc_funcallvar_34;
      tmp___83 = tmp___88;
      }
    }
  } else {
    {
    tmp___88 = __dyc_funcallvar_35;
    tmp___83 = tmp___88;
    }
  }
  if (! (tmp___83 == 0)) {
    {

    }
  }
  tmp___92 = __dyc_funcallvar_36;
  if (! (ts4_length == tmp___92)) {
    {

    }
  }
  if (0) {
    {
    tmp___108 = __dyc_funcallvar_37;
    __s1_len___4 = (unsigned long )tmp___108;
    tmp___109 = __dyc_funcallvar_38;
    __s2_len___4 = (unsigned long )tmp___109;
    }
    if (! ((unsigned long )((void const   *)(ts_6 + 1)) - (unsigned long )((void const   *)(ts_6)) == 1UL)) {
      goto _L___10;
    } else {
      if (__s1_len___4 >= 4UL) {
        _L___10:  
        if (! ((unsigned long )((void const   *)("1999-12-29 00:00:00" + 1)) - (unsigned long )((void const   *)"1999-12-29 00:00:00") == 1UL)) {
          tmp___110 = 1;
        } else {
          if (__s2_len___4 >= 4UL) {
            tmp___110 = 1;
          } else {
            tmp___110 = 0;
          }
        }
      } else {
        tmp___110 = 0;
      }
    }
    if (tmp___110) {
      {
      tmp___102 = __dyc_funcallvar_39;
      }
    } else {
      {
      tmp___107 = __dyc_funcallvar_40;
      tmp___102 = tmp___107;
      }
    }
  } else {
    {
    tmp___107 = __dyc_funcallvar_41;
    tmp___102 = tmp___107;
    }
  }
  if (! (tmp___102 == 0)) {
    {

    }
  }
  if (! (ts6_length == 19UL)) {
    {

    }
  }
  rc = __dyc_funcallvar_42;
  if (! (rc == 100)) {
    {

    }
  }

  goto __dyc_dummy_label;
  __dyc_dummy_label:  ;
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
