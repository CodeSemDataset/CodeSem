#include "../../include/dycfoo.h"
#include "../../include/mysql_client_test.i.hd.c.h"
void __dyc_foo(void) 
{ my_bool opt_silent ;
  MYSQL_STMT *stmt ;
  MYSQL_BIND my_bind[2] ;
  char data[255] ;
  ulong length ;
  int rc ;
  short id ;
  int r ;
  int r___0 ;
  char __attribute__((__artificial__))  * __attribute__((__leaf__)) tmp___0 ;
  my_bool tmp___1 ;
  char __attribute__((__artificial__))  * __attribute__((__leaf__)) tmp___2 ;
  char __attribute__((__artificial__))  * __attribute__((__leaf__)) tmp___3 ;
  my_bool tmp___4 ;
  my_bool tmp___5 ;
  int tmp___6 ;
  size_t __s1_len ;
  size_t __s2_len ;
  int tmp___16 ;
  int tmp___21 ;
  int tmp___22 ;
  int tmp___23 ;
  int tmp___24 ;
  size_t __s1_len___0 ;
  size_t __s2_len___0 ;
  int tmp___34 ;
  int tmp___39 ;
  int tmp___40 ;
  int tmp___41 ;
  int tmp___42 ;
  size_t __s1_len___1 ;
  size_t __s2_len___1 ;
  int tmp___52 ;
  int tmp___57 ;
  int tmp___58 ;
  int tmp___59 ;
  int tmp___60 ;
  int r___1 ;
  int __dyc_funcallvar_1 ;
  int __dyc_funcallvar_2 ;
  MYSQL_STMT *__dyc_funcallvar_3 ;
  char __attribute__((__artificial__))  * __attribute__((__leaf__)) __dyc_funcallvar_4 ;
  my_bool __dyc_funcallvar_5 ;
  int __dyc_funcallvar_6 ;
  int __dyc_funcallvar_7 ;
  int __dyc_funcallvar_8 ;
  char __attribute__((__artificial__))  * __attribute__((__leaf__)) __dyc_funcallvar_9 ;
  int __dyc_funcallvar_10 ;
  char __attribute__((__artificial__))  * __attribute__((__leaf__)) __dyc_funcallvar_11 ;
  int __dyc_funcallvar_12 ;
  MYSQL_STMT *__dyc_funcallvar_13 ;
  int __dyc_funcallvar_14 ;
  int __dyc_funcallvar_15 ;
  MYSQL_STMT *__dyc_funcallvar_16 ;
  my_bool __dyc_funcallvar_17 ;
  int __dyc_funcallvar_18 ;
  my_bool __dyc_funcallvar_19 ;
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

  {
  opt_silent = (my_bool )__dyc_readpre_byte();
  length = (ulong )__dyc_readpre_byte();
  id = (short )__dyc_readpre_byte();
  __dyc_funcallvar_1 = __dyc_readpre_byte();
  __dyc_funcallvar_2 = __dyc_readpre_byte();
  __dyc_funcallvar_3 = __dyc_read_ptr__typdef_MYSQL_STMT();
  __dyc_funcallvar_4 = (char __attribute__((__artificial__))  * __attribute__((__leaf__)) )__dyc_read_ptr__char();
  __dyc_funcallvar_5 = (my_bool )__dyc_readpre_byte();
  __dyc_funcallvar_6 = __dyc_readpre_byte();
  __dyc_funcallvar_7 = __dyc_readpre_byte();
  __dyc_funcallvar_8 = __dyc_readpre_byte();
  __dyc_funcallvar_9 = (char __attribute__((__artificial__))  * __attribute__((__leaf__)) )__dyc_read_ptr__char();
  __dyc_funcallvar_10 = __dyc_readpre_byte();
  __dyc_funcallvar_11 = (char __attribute__((__artificial__))  * __attribute__((__leaf__)) )__dyc_read_ptr__char();
  __dyc_funcallvar_12 = __dyc_readpre_byte();
  __dyc_funcallvar_13 = __dyc_read_ptr__typdef_MYSQL_STMT();
  __dyc_funcallvar_14 = __dyc_readpre_byte();
  __dyc_funcallvar_15 = __dyc_readpre_byte();
  __dyc_funcallvar_16 = __dyc_read_ptr__typdef_MYSQL_STMT();
  __dyc_funcallvar_17 = (my_bool )__dyc_readpre_byte();
  __dyc_funcallvar_18 = __dyc_readpre_byte();
  __dyc_funcallvar_19 = (my_bool )__dyc_readpre_byte();
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
  stmt = 0;
  rc = 0;
  r = 0;
  r___0 = 0;
  tmp___0 = 0;
  tmp___1 = 0;
  tmp___2 = 0;
  tmp___3 = 0;
  tmp___4 = 0;
  tmp___5 = 0;
  tmp___6 = 0;
  __s1_len = 0;
  __s2_len = 0;
  tmp___16 = 0;
  tmp___21 = 0;
  tmp___22 = 0;
  tmp___23 = 0;
  tmp___24 = 0;
  __s1_len___0 = 0;
  __s2_len___0 = 0;
  tmp___34 = 0;
  tmp___39 = 0;
  tmp___40 = 0;
  tmp___41 = 0;
  tmp___42 = 0;
  __s1_len___1 = 0;
  __s2_len___1 = 0;
  tmp___52 = 0;
  tmp___57 = 0;
  tmp___58 = 0;
  tmp___59 = 0;
  tmp___60 = 0;
  r___1 = 0;
  rc = __dyc_funcallvar_1;
  r = rc;
  if (r) {
    {

    }
  }
  if (! (r == 0)) {
    {

    }
  }
  rc = __dyc_funcallvar_2;
  r___0 = rc;
  if (r___0) {
    {

    }
  }
  if (! (r___0 == 0)) {
    {

    }
  }

  stmt = __dyc_funcallvar_3;
  if ((unsigned long )stmt == (unsigned long )((MYSQL_STMT *)0)) {
    {

    }
  }
  if (! ((unsigned long )stmt != (unsigned long )((MYSQL_STMT *)0))) {
    {

    }
  }

  my_bind[0].buffer_type = 2;
  my_bind[0].buffer = (void *)(& id);
  my_bind[1].buffer_type = 254;
  my_bind[1].buffer = (void *)(& data);
  my_bind[1].buffer_length = 255UL;
  my_bind[1].length = & length;
  id = (short)9876;
  tmp___0 = __dyc_funcallvar_4;
  length = (unsigned long )(tmp___0 - (char __attribute__((__artificial__))  * __attribute__((__leaf__)) )(data));
  tmp___1 = __dyc_funcallvar_5;
  rc = (int )tmp___1;
  if (rc) {
    {

    }
  }
  if (! (rc == 0)) {
    {

    }
  }
  rc = __dyc_funcallvar_6;
  if (rc) {
    {

    }
  }
  if (! (rc == 0)) {
    {

    }
  }

  length = 1UL;
  rc = __dyc_funcallvar_7;
  if (rc) {
    {

    }
  }
  if (! (rc == 0)) {
    {

    }
  }

  length = 1UL;
  rc = __dyc_funcallvar_8;
  if (rc) {
    {

    }
  }
  if (! (rc == 0)) {
    {

    }
  }
  tmp___2 = __dyc_funcallvar_9;
  length = (unsigned long )(tmp___2 - (char __attribute__((__artificial__))  * __attribute__((__leaf__)) )(data));
  rc = __dyc_funcallvar_10;
  if (rc) {
    {

    }
  }
  if (! (rc == 0)) {
    {

    }
  }
  tmp___3 = __dyc_funcallvar_11;
  length = (unsigned long )(tmp___3 - (char __attribute__((__artificial__))  * __attribute__((__leaf__)) )(data));
  rc = __dyc_funcallvar_12;
  if (rc) {
    {

    }
  }
  if (! (rc == 0)) {
    {

    }
  }


  stmt = __dyc_funcallvar_13;
  if ((unsigned long )stmt == (unsigned long )((MYSQL_STMT *)0)) {
    {

    }
  }
  if (! ((unsigned long )stmt != (unsigned long )((MYSQL_STMT *)0))) {
    {

    }
  }
  rc = __dyc_funcallvar_14;
  if (rc) {
    {

    }
  }
  if (! (rc == 0)) {
    {

    }
  }
  rc = __dyc_funcallvar_15;
  if (rc) {
    {

    }
  }
  if (! (rc == 0)) {
    {

    }
  }


  stmt = __dyc_funcallvar_16;
  if ((unsigned long )stmt == (unsigned long )((MYSQL_STMT *)0)) {
    {

    }
  }
  if (! ((unsigned long )stmt != (unsigned long )((MYSQL_STMT *)0))) {
    {

    }
  }
  tmp___4 = __dyc_funcallvar_17;
  rc = (int )tmp___4;
  if (rc) {
    {

    }
  }
  if (! (rc == 0)) {
    {

    }
  }
  rc = __dyc_funcallvar_18;
  if (rc) {
    {

    }
  }
  if (! (rc == 0)) {
    {

    }
  }
  my_bind[1].buffer_length = 255UL;
  tmp___5 = __dyc_funcallvar_19;
  rc = (int )tmp___5;
  if (rc) {
    {

    }
  }
  if (! (rc == 0)) {
    {

    }
  }
  rc = __dyc_funcallvar_20;
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
  if (! ((int )id == 9876)) {
    {

    }
  }
  if (! (length == 19UL)) {
    if (! (length == 20UL)) {
      {

      }
    }
  }
  tmp___6 = __dyc_funcallvar_21;
  if (! (tmp___6 == 1)) {
    {

    }
  }
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
    {

    }
  }
  if (! (length == 1UL)) {
    {

    }
  }
  if (0) {
    {
    tmp___22 = __dyc_funcallvar_23;
    __s1_len = (unsigned long )tmp___22;
    tmp___23 = __dyc_funcallvar_24;
    __s2_len = (unsigned long )tmp___23;
    }
    if (! ((unsigned long )((void const   *)(data + 1)) - (unsigned long )((void const   *)(data)) == 1UL)) {
      goto _L___0;
    } else {
      if (__s1_len >= 4UL) {
        _L___0:  
        if (! ((unsigned long )((void const   *)("\'" + 1)) - (unsigned long )((void const   *)"\'") == 1UL)) {
          tmp___24 = 1;
        } else {
          if (__s2_len >= 4UL) {
            tmp___24 = 1;
          } else {
            tmp___24 = 0;
          }
        }
      } else {
        tmp___24 = 0;
      }
    }
    if (tmp___24) {
      {
      tmp___16 = __dyc_funcallvar_25;
      }
    } else {
      {
      tmp___21 = __dyc_funcallvar_26;
      tmp___16 = tmp___21;
      }
    }
  } else {
    {
    tmp___21 = __dyc_funcallvar_27;
    tmp___16 = tmp___21;
    }
  }
  if (! (tmp___16 == 0)) {
    {

    }
  }
  rc = __dyc_funcallvar_28;
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
  if (! (length == 1UL)) {
    {

    }
  }
  if (0) {
    {
    tmp___40 = __dyc_funcallvar_29;
    __s1_len___0 = (unsigned long )tmp___40;
    tmp___41 = __dyc_funcallvar_30;
    __s2_len___0 = (unsigned long )tmp___41;
    }
    if (! ((unsigned long )((void const   *)(data + 1)) - (unsigned long )((void const   *)(data)) == 1UL)) {
      goto _L___2;
    } else {
      if (__s1_len___0 >= 4UL) {
        _L___2:  
        if (! ((unsigned long )((void const   *)("\"" + 1)) - (unsigned long )((void const   *)"\"") == 1UL)) {
          tmp___42 = 1;
        } else {
          if (__s2_len___0 >= 4UL) {
            tmp___42 = 1;
          } else {
            tmp___42 = 0;
          }
        }
      } else {
        tmp___42 = 0;
      }
    }
    if (tmp___42) {
      {
      tmp___34 = __dyc_funcallvar_31;
      }
    } else {
      {
      tmp___39 = __dyc_funcallvar_32;
      tmp___34 = tmp___39;
      }
    }
  } else {
    {
    tmp___39 = __dyc_funcallvar_33;
    tmp___34 = tmp___39;
    }
  }
  if (! (tmp___34 == 0)) {
    {

    }
  }
  rc = __dyc_funcallvar_34;
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
  if (! (length == 7UL)) {
    {

    }
  }
  if (0) {
    {
    tmp___58 = __dyc_funcallvar_35;
    __s1_len___1 = (unsigned long )tmp___58;
    tmp___59 = __dyc_funcallvar_36;
    __s2_len___1 = (unsigned long )tmp___59;
    }
    if (! ((unsigned long )((void const   *)(data + 1)) - (unsigned long )((void const   *)(data)) == 1UL)) {
      goto _L___4;
    } else {
      if (__s1_len___1 >= 4UL) {
        _L___4:  
        if (! ((unsigned long )((void const   *)("my\'sql\'" + 1)) - (unsigned long )((void const   *)"my\'sql\'") == 1UL)) {
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
      tmp___52 = __dyc_funcallvar_37;
      }
    } else {
      {
      tmp___57 = __dyc_funcallvar_38;
      tmp___52 = tmp___57;
      }
    }
  } else {
    {
    tmp___57 = __dyc_funcallvar_39;
    tmp___52 = tmp___57;
    }
  }
  if (! (tmp___52 == 0)) {
    {

    }
  }
  rc = __dyc_funcallvar_40;
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
  if (! (length == 7UL)) {
    {

    }
  }
  rc = __dyc_funcallvar_41;
  if (! (rc == 100)) {
    {

    }
  }

  rc = __dyc_funcallvar_42;
  r___1 = rc;
  if (r___1) {
    {

    }
  }
  if (! (r___1 == 0)) {
    {

    }
  }
  __dyc_dummy_label:  ;
  __dyc_printpre_byte(__s1_len);
  __dyc_printpre_byte(__s2_len);
  __dyc_printpre_byte(__s1_len___0);
  __dyc_printpre_byte(__s2_len___0);
  __dyc_printpre_byte(__s1_len___1);
  __dyc_printpre_byte(__s2_len___1);
}
}
