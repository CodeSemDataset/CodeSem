#include "../../include/dycfoo.h"
#include "../../include/mysqldump.i.hd.c.h"
void __dyc_foo(void) 
{ my_bool opt_no_create_info ;
  my_bool extended_insert ;
  my_bool opt_drop ;
  my_bool opt_keywords ;
  my_bool opt_xml ;
  my_bool opt_comments ;
  char *path ;
  my_bool seen_views ;
  my_bool init ;
  my_bool write_data ;
  my_bool complete_insert ;
  my_ulonglong num_fields ;
  FILE *sql_file ;
  MYSQL_RES *result ;
  MYSQL_ROW row ;
  MYSQL_FIELD *field ;
  int tmp___3 ;
  size_t __s1_len ;
  size_t __s2_len ;
  int tmp___13 ;
  int tmp___18 ;
  int tmp___19 ;
  int tmp___20 ;
  int tmp___21 ;
  char *scv_buff ;
  char const   *tmp___22 ;
  unsigned int tmp___23 ;
  int tmp___24 ;
  char *tmp___25 ;
  char *tmp___26 ;
  my_ulonglong tmp___27 ;
  size_t __s1_len___0 ;
  size_t __s2_len___0 ;
  int tmp___37 ;
  int tmp___42 ;
  int tmp___43 ;
  int tmp___44 ;
  int tmp___45 ;
  int tmp___46 ;
  char *tmp___47 ;
  char const   *tmp___48 ;
  int tmp___49 ;
  ulong *lengths ;
  unsigned long *tmp___50 ;
  char *tmp___51 ;
  char *tmp___52 ;
  char *tmp___53 ;
  int tmp___87 ;
  char *table_type ;
  int __dyc_funcallvar_7 ;
  FILE *__dyc_funcallvar_8 ;
  int __dyc_funcallvar_9 ;
  int __dyc_funcallvar_10 ;
  int __dyc_funcallvar_11 ;
  int __dyc_funcallvar_12 ;
  int __dyc_funcallvar_13 ;
  MYSQL_RES *__dyc_funcallvar_14 ;
  MYSQL_FIELD *__dyc_funcallvar_15 ;
  int __dyc_funcallvar_16 ;
  int __dyc_funcallvar_17 ;
  int __dyc_funcallvar_18 ;
  int __dyc_funcallvar_19 ;
  int __dyc_funcallvar_20 ;
  MYSQL_ROW __dyc_funcallvar_21 ;
  char *__dyc_funcallvar_22 ;
  int __dyc_funcallvar_23 ;
  unsigned int __dyc_funcallvar_24 ;
  MYSQL_RES *__dyc_funcallvar_25 ;
  my_ulonglong __dyc_funcallvar_26 ;
  MYSQL_ROW __dyc_funcallvar_27 ;
  char *__dyc_funcallvar_28 ;
  MYSQL_ROW __dyc_funcallvar_29 ;
  char *__dyc_funcallvar_30 ;
  MYSQL_ROW __dyc_funcallvar_31 ;
  int __dyc_funcallvar_32 ;
  MYSQL_ROW __dyc_funcallvar_33 ;
  char *__dyc_funcallvar_34 ;
  my_ulonglong __dyc_funcallvar_35 ;
  char const   *__dyc_funcallvar_36 ;
  int __dyc_funcallvar_37 ;
  FILE *__dyc_funcallvar_38 ;
  MYSQL_ROW __dyc_funcallvar_39 ;
  unsigned long *__dyc_funcallvar_40 ;
  char *__dyc_funcallvar_41 ;
  char *__dyc_funcallvar_42 ;
  char *__dyc_funcallvar_43 ;
  my_ulonglong __dyc_funcallvar_44 ;

  {
  opt_no_create_info = (my_bool )__dyc_readpre_byte();
  extended_insert = (my_bool )__dyc_readpre_byte();
  opt_drop = (my_bool )__dyc_readpre_byte();
  opt_keywords = (my_bool )__dyc_readpre_byte();
  opt_xml = (my_bool )__dyc_readpre_byte();
  opt_comments = (my_bool )__dyc_readpre_byte();
  path = __dyc_read_ptr__char();
  init = (my_bool )__dyc_readpre_byte();
  write_data = (my_bool )__dyc_readpre_byte();
  complete_insert = (my_bool )__dyc_readpre_byte();
  tmp___87 = __dyc_readpre_byte();
  table_type = __dyc_read_ptr__char();
  __dyc_funcallvar_7 = __dyc_readpre_byte();
  __dyc_funcallvar_8 = __dyc_read_ptr__typdef_FILE();
  __dyc_funcallvar_9 = __dyc_readpre_byte();
  __dyc_funcallvar_10 = __dyc_readpre_byte();
  __dyc_funcallvar_11 = __dyc_readpre_byte();
  __dyc_funcallvar_12 = __dyc_readpre_byte();
  __dyc_funcallvar_13 = __dyc_readpre_byte();
  __dyc_funcallvar_14 = __dyc_read_ptr__typdef_MYSQL_RES();
  __dyc_funcallvar_15 = __dyc_read_ptr__typdef_MYSQL_FIELD();
  __dyc_funcallvar_16 = __dyc_readpre_byte();
  __dyc_funcallvar_17 = __dyc_readpre_byte();
  __dyc_funcallvar_18 = __dyc_readpre_byte();
  __dyc_funcallvar_19 = __dyc_readpre_byte();
  __dyc_funcallvar_20 = __dyc_readpre_byte();
  __dyc_funcallvar_21 = __dyc_read_ptr__ptr__char();
  __dyc_funcallvar_22 = __dyc_read_ptr__char();
  __dyc_funcallvar_23 = __dyc_readpre_byte();
  __dyc_funcallvar_24 = (unsigned int )__dyc_readpre_byte();
  __dyc_funcallvar_25 = __dyc_read_ptr__typdef_MYSQL_RES();
  __dyc_funcallvar_26 = (my_ulonglong )__dyc_readpre_byte();
  __dyc_funcallvar_27 = __dyc_read_ptr__ptr__char();
  __dyc_funcallvar_28 = __dyc_read_ptr__char();
  __dyc_funcallvar_29 = __dyc_read_ptr__ptr__char();
  __dyc_funcallvar_30 = __dyc_read_ptr__char();
  __dyc_funcallvar_31 = __dyc_read_ptr__ptr__char();
  __dyc_funcallvar_32 = __dyc_readpre_byte();
  __dyc_funcallvar_33 = __dyc_read_ptr__ptr__char();
  __dyc_funcallvar_34 = __dyc_read_ptr__char();
  __dyc_funcallvar_35 = (my_ulonglong )__dyc_readpre_byte();
  __dyc_funcallvar_36 = (char const   *)__dyc_read_ptr__char();
  __dyc_funcallvar_37 = __dyc_readpre_byte();
  __dyc_funcallvar_38 = __dyc_read_ptr__typdef_FILE();
  __dyc_funcallvar_39 = __dyc_read_ptr__ptr__char();
  __dyc_funcallvar_40 = __dyc_read_ptr__long();
  __dyc_funcallvar_41 = __dyc_read_ptr__char();
  __dyc_funcallvar_42 = __dyc_read_ptr__char();
  __dyc_funcallvar_43 = __dyc_read_ptr__char();
  __dyc_funcallvar_44 = (my_ulonglong )__dyc_readpre_byte();
  seen_views = 0;
  num_fields = 0;
  sql_file = 0;
  result = 0;
  row = 0;
  field = 0;
  tmp___3 = 0;
  __s1_len = 0;
  __s2_len = 0;
  tmp___13 = 0;
  tmp___18 = 0;
  tmp___19 = 0;
  tmp___20 = 0;
  tmp___21 = 0;
  scv_buff = 0;
  tmp___22 = 0;
  tmp___23 = 0;
  tmp___24 = 0;
  tmp___25 = 0;
  tmp___26 = 0;
  tmp___27 = 0;
  __s1_len___0 = 0;
  __s2_len___0 = 0;
  tmp___37 = 0;
  tmp___42 = 0;
  tmp___43 = 0;
  tmp___44 = 0;
  tmp___45 = 0;
  tmp___46 = 0;
  tmp___47 = 0;
  tmp___48 = 0;
  tmp___49 = 0;
  lengths = 0;
  tmp___50 = 0;
  tmp___51 = 0;
  tmp___52 = 0;
  tmp___53 = 0;
  if (tmp___87) {
    goto __dyc_dummy_label;
  } else {
    if (! opt_no_create_info) {
      {

      tmp___3 = __dyc_funcallvar_7;
      }
      if (tmp___3) {
        goto __dyc_dummy_label;
      }
      if (path) {
        {
        sql_file = __dyc_funcallvar_8;
        }
        if (! sql_file) {
          goto __dyc_dummy_label;
        }
        {

        }
      }
      if (! opt_xml) {
        if (opt_comments) {
          if (0) {
            {
            tmp___19 = __dyc_funcallvar_9;
            __s1_len = (unsigned long )tmp___19;
            tmp___20 = __dyc_funcallvar_10;
            __s2_len = (unsigned long )tmp___20;
            }
            if (! ((unsigned long )((void const   *)(table_type + 1)) - (unsigned long )((void const   *)table_type) == 1UL)) {
              goto _L___1;
            } else {
              if (__s1_len >= 4UL) {
                _L___1:  
                if (! ((unsigned long )((void const   *)("VIEW" + 1)) - (unsigned long )((void const   *)"VIEW") == 1UL)) {
                  tmp___21 = 1;
                } else {
                  if (__s2_len >= 4UL) {
                    tmp___21 = 1;
                  } else {
                    tmp___21 = 0;
                  }
                }
              } else {
                tmp___21 = 0;
              }
            }
            if (tmp___21) {
              {
              tmp___13 = __dyc_funcallvar_11;
              }
            } else {
              {
              tmp___18 = __dyc_funcallvar_12;
              tmp___13 = tmp___18;
              }
            }
          } else {
            {
            tmp___18 = __dyc_funcallvar_13;
            tmp___13 = tmp___18;
            }
          }
          if (tmp___13 == 0) {
            {

            }
          } else {
            {

            }
          }
          {

          }
        }
      }
      if (opt_drop) {
        {


        }
      }
      {
      result = __dyc_funcallvar_14;
      field = __dyc_funcallvar_15;
      }
      if (0) {
        {
        tmp___43 = __dyc_funcallvar_16;
        __s1_len___0 = (unsigned long )tmp___43;
        tmp___44 = __dyc_funcallvar_17;
        __s2_len___0 = (unsigned long )tmp___44;
        }
        if (! ((unsigned long )((void const   *)(field->name + 1)) - (unsigned long )((void const   *)field->name) == 1UL)) {
          goto _L___3;
        } else {
          if (__s1_len___0 >= 4UL) {
            _L___3:  
            if (! ((unsigned long )((void const   *)("View" + 1)) - (unsigned long )((void const   *)"View") == 1UL)) {
              tmp___45 = 1;
            } else {
              if (__s2_len___0 >= 4UL) {
                tmp___45 = 1;
              } else {
                tmp___45 = 0;
              }
            }
          } else {
            tmp___45 = 0;
          }
        }
        if (tmp___45) {
          {
          tmp___37 = __dyc_funcallvar_18;
          }
        } else {
          {
          tmp___42 = __dyc_funcallvar_19;
          tmp___37 = tmp___42;
          }
        }
      } else {
        {
        tmp___42 = __dyc_funcallvar_20;
        tmp___37 = tmp___42;
        }
      }
      if (tmp___37 == 0) {
        {
        scv_buff = (char *)((void *)0);

        row = __dyc_funcallvar_21;
        }
        if (row) {
          scv_buff = *(row + 1);
          if (scv_buff) {
            {
            scv_buff = __dyc_funcallvar_22;
            }
          }
        }
        {


        tmp___24 = __dyc_funcallvar_23;
        }
        if (tmp___24) {
          {
          tmp___23 = __dyc_funcallvar_24;
          }
          if (tmp___23 == 1356U) {
            if (scv_buff) {
              tmp___22 = (char const   *)scv_buff;
            } else {
              tmp___22 = "";
            }
            {

            }
          }
          {

          }
          goto __dyc_dummy_label;
        } else {
          {

          }
        }
        {
        result = __dyc_funcallvar_25;
        }
        if (result) {
          {
          tmp___27 = __dyc_funcallvar_26;
          }
          if (tmp___27) {
            if (opt_drop) {
              {


              }
            }
            {

            row = __dyc_funcallvar_27;
            tmp___25 = __dyc_funcallvar_28;

            }
            {
            while (1) {
              while_14_continue:  ;
              {
              row = __dyc_funcallvar_29;
              }
              if (! row) {
                goto while_14_break;
              }
              {
              tmp___26 = __dyc_funcallvar_30;

              }
            }
            while_14_break:  ;
            }
            {


            }
          }
        }
        {

        }
        if (path) {
          {

          }
        }
        seen_views = (char)1;
        goto __dyc_dummy_label;
      }
      {
      row = __dyc_funcallvar_31;



      }
    }
    {

    tmp___46 = __dyc_funcallvar_32;
    }
    if (tmp___46) {
      if (path) {
        {

        }
      }
      goto __dyc_dummy_label;
    }
    if (write_data) {
      {




      }
      if (complete_insert) {
        {

        }
      } else {
        {

        }
        if (! extended_insert) {
          {

          }
        }
      }
    }
    {
    while (1) {
      while_15_continue:  ;
      {
      row = __dyc_funcallvar_33;
      }
      if (! row) {
        goto while_15_break;
      }
      if (complete_insert) {
        if (init) {
          {

          }
        }
        {
        init = (char)1;
        tmp___47 = __dyc_funcallvar_34;

        }
      }
    }
    while_15_break:  ;
    }
    {
    num_fields = __dyc_funcallvar_35;

    }
  }
  tmp___48 = __dyc_funcallvar_36;


  tmp___49 = __dyc_funcallvar_37;
  if (tmp___49) {
    goto __dyc_dummy_label;
  }
  if (! opt_no_create_info) {
    if (path) {
      {
      sql_file = __dyc_funcallvar_38;
      }
      if (! sql_file) {
        goto __dyc_dummy_label;
      }
      {

      }
    }
    if (! opt_xml) {
      if (opt_comments) {
        {

        }
      }
    }
    if (opt_drop) {
      {

      }
    }
    if (! opt_xml) {
      {

      }
    } else {
      {

      }
    }
    {

    }
  }
  if (write_data) {
    {




    }
    if (complete_insert) {
      {

      }
    } else {
      {

      }
      if (! extended_insert) {
        {

        }
      }
    }
  }
  while (1) {
    while_16_continue:  ;
    {
    row = __dyc_funcallvar_39;
    }
    if (! row) {
      goto while_16_break;
    }
    {
    tmp___50 = __dyc_funcallvar_40;
    lengths = tmp___50;
    }
    if (init) {
      if (! opt_xml) {
        if (! opt_no_create_info) {
          {


          }
        }
      }
      if (complete_insert) {
        {

        }
      }
    }
    init = (char)1;
    if (complete_insert) {
      {
      tmp___51 = __dyc_funcallvar_41;

      }
    }
    if (! opt_no_create_info) {
      if (opt_xml) {
        {

        }
        goto while_16_continue;
      }
      if (opt_keywords) {
        {
        tmp___52 = __dyc_funcallvar_42;

        }
      } else {
        {
        tmp___53 = __dyc_funcallvar_43;

        }
      }
      if (*(row + 4)) {
        {


        }
      }
      if (! *(*(row + 2) + 0)) {
        {

        }
      }
      if (*(*(row + 5) + 0)) {
        {

        }
      }
      {

      }
    }
  }
  while_16_break:  ;
  num_fields = __dyc_funcallvar_44;
  __dyc_dummy_label:  ;
  __dyc_printpre_byte(seen_views);
  __dyc_printpre_byte(init);
  __dyc_printpre_byte(num_fields);
  __dyc_print_ptr__typdef_MYSQL_RES(result);
  __dyc_print_ptr__ptr__char(row);
  __dyc_print_ptr__typdef_MYSQL_FIELD(field);
  __dyc_printpre_byte(__s1_len);
  __dyc_printpre_byte(__s2_len);
  __dyc_print_ptr__char(scv_buff);
  __dyc_print_ptr__char(tmp___22);
  __dyc_print_ptr__char(tmp___25);
  __dyc_print_ptr__char(tmp___26);
  __dyc_printpre_byte(__s1_len___0);
  __dyc_printpre_byte(__s2_len___0);
  __dyc_print_ptr__char(tmp___47);
  __dyc_print_ptr__char(tmp___48);
  __dyc_print_ptr__typdef_ulong(lengths);
  __dyc_print_ptr__char(tmp___51);
  __dyc_print_ptr__char(tmp___52);
  __dyc_print_ptr__char(tmp___53);
}
}
