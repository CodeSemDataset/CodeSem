#include "../../include/dycfoo.h"
#include "../../include/mysql_client_test.i.hd.c.h"
void __dyc_foo(void) 
{ my_bool opt_silent ;
  MYSQL_STMT *stmt ;
  int rc ;
  MYSQL_BIND bind_array[12] ;
  MYSQL_BIND *my_bind ;
  MYSQL_BIND *bind_end ;
  int8 int8_val ;
  uint8 uint8_val ;
  int16 int16_val ;
  uint16 uint16_val ;
  int32 int32_val ;
  uint32 uint32_val ;
  longlong int64_val ;
  ulonglong uint64_val ;
  double double_val ;
  double udouble_val ;
  double double_tmp ;
  char longlong_as_string[22] ;
  char ulonglong_as_string[22] ;
  int8 int8_min ;
  int8 int8_max ;
  uint8 uint8_min ;
  uint8 uint8_max ;
  int16 int16_min ;
  int16 int16_max ;
  uint16 uint16_min ;
  uint16 uint16_max ;
  int32 int32_max ;
  int32 int32_min ;
  uint32 uint32_min ;
  uint32 uint32_max ;
  longlong int64_max ;
  longlong int64_min ;
  ulonglong uint64_min ;
  ulonglong uint64_max ;
  char const   *stmt_text ;
  int r ;
  size_t tmp___1 ;
  int r___0 ;
  size_t tmp___2 ;
  size_t tmp___3 ;
  int tmp___4 ;
  size_t __s1_len ;
  size_t __s2_len ;
  int tmp___14 ;
  int tmp___19 ;
  int tmp___20 ;
  int tmp___21 ;
  int tmp___22 ;
  size_t __s1_len___0 ;
  size_t __s2_len___0 ;
  int tmp___32 ;
  int tmp___37 ;
  int tmp___38 ;
  int tmp___39 ;
  int tmp___40 ;
  int tmp___41 ;
  int __dyc_funcallvar_2 ;
  size_t __dyc_funcallvar_3 ;
  int __dyc_funcallvar_4 ;
  MYSQL_STMT *__dyc_funcallvar_5 ;
  size_t __dyc_funcallvar_6 ;
  int __dyc_funcallvar_7 ;
  int __dyc_funcallvar_8 ;
  int __dyc_funcallvar_9 ;
  size_t __dyc_funcallvar_10 ;
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

  {
  opt_silent = (my_bool )__dyc_readpre_byte();
  bind_end = __dyc_read_ptr__typdef_MYSQL_BIND();
  int8_val = (int8 )__dyc_readpre_byte();
  uint8_val = (uint8 )__dyc_readpre_byte();
  int16_val = (int16 )__dyc_readpre_byte();
  uint16_val = (uint16 )__dyc_readpre_byte();
  int32_val = __dyc_readpre_byte();
  uint32_val = (uint32 )__dyc_readpre_byte();
  int64_val = (longlong )__dyc_readpre_byte();
  uint64_val = (ulonglong )__dyc_readpre_byte();
  double_val = (double )__dyc_readpre_byte();
  udouble_val = (double )__dyc_readpre_byte();
  int8_min = (int8 )__dyc_readpre_byte();
  int8_max = (int8 )__dyc_readpre_byte();
  uint8_min = (uint8 )__dyc_readpre_byte();
  uint8_max = (uint8 )__dyc_readpre_byte();
  int16_min = (int16 )__dyc_readpre_byte();
  int16_max = (int16 )__dyc_readpre_byte();
  uint16_min = (uint16 )__dyc_readpre_byte();
  uint16_max = (uint16 )__dyc_readpre_byte();
  int32_max = __dyc_readpre_byte();
  int32_min = __dyc_readpre_byte();
  uint32_min = (uint32 )__dyc_readpre_byte();
  uint32_max = (uint32 )__dyc_readpre_byte();
  int64_max = (longlong )__dyc_readpre_byte();
  int64_min = (longlong )__dyc_readpre_byte();
  uint64_min = (ulonglong )__dyc_readpre_byte();
  uint64_max = (ulonglong )__dyc_readpre_byte();
  __dyc_funcallvar_2 = __dyc_readpre_byte();
  __dyc_funcallvar_3 = (size_t )__dyc_readpre_byte();
  __dyc_funcallvar_4 = __dyc_readpre_byte();
  __dyc_funcallvar_5 = __dyc_read_ptr__typdef_MYSQL_STMT();
  __dyc_funcallvar_6 = (size_t )__dyc_readpre_byte();
  __dyc_funcallvar_7 = __dyc_readpre_byte();
  __dyc_funcallvar_8 = __dyc_readpre_byte();
  __dyc_funcallvar_9 = __dyc_readpre_byte();
  __dyc_funcallvar_10 = (size_t )__dyc_readpre_byte();
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
  stmt = 0;
  rc = 0;
  my_bind = 0;
  double_tmp = 0;
  stmt_text = 0;
  r = 0;
  tmp___1 = 0;
  r___0 = 0;
  tmp___2 = 0;
  tmp___3 = 0;
  tmp___4 = 0;
  __s1_len = 0;
  __s2_len = 0;
  tmp___14 = 0;
  tmp___19 = 0;
  tmp___20 = 0;
  tmp___21 = 0;
  tmp___22 = 0;
  __s1_len___0 = 0;
  __s2_len___0 = 0;
  tmp___32 = 0;
  tmp___37 = 0;
  tmp___38 = 0;
  tmp___39 = 0;
  tmp___40 = 0;
  tmp___41 = 0;
  rc = __dyc_funcallvar_2;
  r = rc;
  if (r) {
    {

    }
  }
  if (! (r == 0)) {
    {

    }
  }
  stmt_text = "CREATE TABLE t1 (i8 TINYINT, ui8 TINYINT UNSIGNED, i16 SMALLINT, ui16 SMALLINT UNSIGNED, i32 INT, ui32 INT UNSIGNED, i64 BIGINT, ui64 BIGINT UNSIGNED, id INTEGER NOT NULL PRIMARY KEY AUTO_INCREMENT)";
  tmp___1 = __dyc_funcallvar_3;
  rc = __dyc_funcallvar_4;
  r___0 = rc;
  if (r___0) {
    {

    }
  }
  if (! (r___0 == 0)) {
    {

    }
  }

  my_bind = bind_array;
  while (1) {
    while_82_continue:  ;
    if (! ((unsigned long )my_bind < (unsigned long )bind_end)) {
      goto while_82_break;
    }
    my_bind->error = & my_bind->error_value;
    my_bind ++;
  }
  while_82_break:  ;
  bind_array[0].buffer_type = 1;
  bind_array[0].buffer = (void *)(& int8_val);
  bind_array[1].buffer_type = 1;
  bind_array[1].buffer = (void *)(& uint8_val);
  bind_array[1].is_unsigned = (char)1;
  bind_array[2].buffer_type = 2;
  bind_array[2].buffer = (void *)(& int16_val);
  bind_array[3].buffer_type = 2;
  bind_array[3].buffer = (void *)(& uint16_val);
  bind_array[3].is_unsigned = (char)1;
  bind_array[4].buffer_type = 3;
  bind_array[4].buffer = (void *)(& int32_val);
  bind_array[5].buffer_type = 3;
  bind_array[5].buffer = (void *)(& uint32_val);
  bind_array[5].is_unsigned = (char)1;
  bind_array[6].buffer_type = 8;
  bind_array[6].buffer = (void *)(& int64_val);
  bind_array[7].buffer_type = 8;
  bind_array[7].buffer = (void *)(& uint64_val);
  bind_array[7].is_unsigned = (char)1;
  stmt = __dyc_funcallvar_5;
  if ((unsigned long )stmt == (unsigned long )((MYSQL_STMT *)0)) {
    {

    }
  }
  if (! ((unsigned long )stmt != (unsigned long )((MYSQL_STMT *)0))) {
    {

    }
  }
  stmt_text = "INSERT INTO t1 (i8, ui8, i16, ui16, i32, ui32, i64, ui64) VALUES (?, ?, ?, ?, ?, ?, ?, ?)";
  tmp___2 = __dyc_funcallvar_6;
  rc = __dyc_funcallvar_7;
  if (rc) {
    {

    }
  }
  if (! (rc == 0)) {
    {

    }
  }

  int8_val = int8_min;
  uint8_val = uint8_min;
  int16_val = int16_min;
  uint16_val = uint16_min;
  int32_val = int32_min;
  uint32_val = uint32_min;
  int64_val = int64_min;
  uint64_val = uint64_min;
  rc = __dyc_funcallvar_8;
  if (rc) {
    {

    }
  }
  if (! (rc == 0)) {
    {

    }
  }
  int8_val = int8_max;
  uint8_val = uint8_max;
  int16_val = int16_max;
  uint16_val = uint16_max;
  int32_val = int32_max;
  uint32_val = uint32_max;
  int64_val = int64_max;
  uint64_val = uint64_max;
  rc = __dyc_funcallvar_9;
  if (rc) {
    {

    }
  }
  if (! (rc == 0)) {
    {

    }
  }
  stmt_text = "SELECT i8, ui8, i16, ui16, i32, ui32, i64, ui64, ui64, cast(ui64 as signed), ui64, cast(ui64 as signed)FROM t1 ORDER BY id ASC";
  tmp___3 = __dyc_funcallvar_10;
  rc = __dyc_funcallvar_11;
  if (rc) {
    {

    }
  }
  if (! (rc == 0)) {
    {

    }
  }
  rc = __dyc_funcallvar_12;
  if (rc) {
    {

    }
  }
  if (! (rc == 0)) {
    {

    }
  }
  bind_array[8].buffer_type = 5;
  bind_array[8].buffer = (void *)(& udouble_val);
  bind_array[9].buffer_type = 5;
  bind_array[9].buffer = (void *)(& double_val);
  bind_array[10].buffer_type = 254;
  bind_array[10].buffer = (void *)(& ulonglong_as_string);
  bind_array[10].buffer_length = sizeof(char [22]);
  bind_array[11].buffer_type = 254;
  bind_array[11].buffer = (void *)(& longlong_as_string);
  bind_array[11].buffer_length = sizeof(char [22]);

  rc = __dyc_funcallvar_13;
  if (rc) {
    {

    }
  }
  if (! (rc == 0)) {
    {

    }
  }
  if (! ((int )int8_val == (int )int8_min)) {
    {

    }
  }
  if (! ((int )uint8_val == (int )uint8_min)) {
    {

    }
  }
  if (! ((int )int16_val == (int )int16_min)) {
    {

    }
  }
  if (! ((int )uint16_val == (int )uint16_min)) {
    {

    }
  }
  if (! (int32_val == int32_min)) {
    {

    }
  }
  if (! (uint32_val == uint32_min)) {
    {

    }
  }
  if (! (int64_val == int64_min)) {
    {

    }
  }
  if (! (uint64_val == uint64_min)) {
    {

    }
  }
  if (! (double_val == (double )((long )uint64_min))) {
    {

    }
  }
  double_tmp = (double )uint64_val;
  tmp___4 = __dyc_funcallvar_14;
  if (! tmp___4) {
    {

    }
  }
  if (0) {
    {
    tmp___20 = __dyc_funcallvar_15;
    __s1_len = (unsigned long )tmp___20;
    tmp___21 = __dyc_funcallvar_16;
    __s2_len = (unsigned long )tmp___21;
    }
    if (! ((unsigned long )((void const   *)(longlong_as_string + 1)) - (unsigned long )((void const   *)(longlong_as_string)) == 1UL)) {
      goto _L___0;
    } else {
      if (__s1_len >= 4UL) {
        _L___0:  
        if (! ((unsigned long )((void const   *)("0" + 1)) - (unsigned long )((void const   *)"0") == 1UL)) {
          tmp___22 = 1;
        } else {
          if (__s2_len >= 4UL) {
            tmp___22 = 1;
          } else {
            tmp___22 = 0;
          }
        }
      } else {
        tmp___22 = 0;
      }
    }
    if (tmp___22) {
      {
      tmp___14 = __dyc_funcallvar_17;
      }
    } else {
      {
      tmp___19 = __dyc_funcallvar_18;
      tmp___14 = tmp___19;
      }
    }
  } else {
    {
    tmp___19 = __dyc_funcallvar_19;
    tmp___14 = tmp___19;
    }
  }
  if (tmp___14) {
    {

    }
  }
  if (0) {
    {
    tmp___38 = __dyc_funcallvar_20;
    __s1_len___0 = (unsigned long )tmp___38;
    tmp___39 = __dyc_funcallvar_21;
    __s2_len___0 = (unsigned long )tmp___39;
    }
    if (! ((unsigned long )((void const   *)(ulonglong_as_string + 1)) - (unsigned long )((void const   *)(ulonglong_as_string)) == 1UL)) {
      goto _L___2;
    } else {
      if (__s1_len___0 >= 4UL) {
        _L___2:  
        if (! ((unsigned long )((void const   *)("0" + 1)) - (unsigned long )((void const   *)"0") == 1UL)) {
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
      tmp___32 = __dyc_funcallvar_22;
      }
    } else {
      {
      tmp___37 = __dyc_funcallvar_23;
      tmp___32 = tmp___37;
      }
    }
  } else {
    {
    tmp___37 = __dyc_funcallvar_24;
    tmp___32 = tmp___37;
    }
  }
  if (tmp___32) {
    {

    }
  }
  rc = __dyc_funcallvar_25;
  if (! opt_silent) {
    {

    my_bind = bind_array;
    }
    {
    while (1) {
      while_83_continue:  ;
      if (! ((unsigned long )my_bind < (unsigned long )bind_end)) {
        goto while_83_break;
      }
      {

      my_bind ++;
      }
    }
    while_83_break:  ;
    }
    {

    }
  }
  if (! (rc == 101)) {
    if (! (rc == 0)) {
      {

      }
    }
  }
  if (! ((int )int8_val == (int )int8_max)) {
    {

    }
  }
  if (! ((int )uint8_val == (int )uint8_max)) {
    {

    }
  }
  if (! ((int )int16_val == (int )int16_max)) {
    {

    }
  }
  if (! ((int )uint16_val == (int )uint16_max)) {
    {

    }
  }
  if (! (int32_val == int32_max)) {
    {

    }
  }
  if (! (uint32_val == uint32_max)) {
    {

    }
  }
  if (! (int64_val == int64_max)) {
    {

    }
  }
  if (! (uint64_val == uint64_max)) {
    {

    }
  }
  if (! (double_val == (double )((long )uint64_val))) {
    {

    }
  }
  double_tmp = (double )uint64_val;
  tmp___41 = __dyc_funcallvar_26;
  if (! tmp___41) {
    {

    }
  }
  __dyc_dummy_label:  ;
  __dyc_printpre_byte(double_tmp);
  __dyc_print_ptr__char(stmt_text);
  __dyc_printpre_byte(tmp___1);
  __dyc_printpre_byte(tmp___2);
  __dyc_printpre_byte(tmp___3);
  __dyc_printpre_byte(__s1_len);
  __dyc_printpre_byte(__s2_len);
  __dyc_printpre_byte(__s1_len___0);
  __dyc_printpre_byte(__s2_len___0);
}
}
