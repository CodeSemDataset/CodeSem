#include "../../include/dycfoo.h"
#include "../../include/mysqldump.i.hd.c.h"
void __dyc_foo(void) 
{ my_bool opt_no_create_info ;
  my_bool extended_insert ;
  my_bool opt_drop ;
  my_bool opt_keywords ;
  my_bool create_options ;
  my_bool opt_xml ;
  my_bool opt_comments ;
  char *path ;
  my_bool init ;
  my_bool write_data ;
  my_bool complete_insert ;
  my_ulonglong num_fields ;
  FILE *sql_file ;
  MYSQL_ROW row ;
  char const   *tmp___48 ;
  int tmp___49 ;
  ulong *lengths ;
  unsigned long *tmp___50 ;
  char *tmp___51 ;
  char *tmp___52 ;
  char *tmp___53 ;
  uint keynr ;
  uint primary_key ;
  unsigned int tmp___54 ;
  char const   *tmp___55 ;
  int tmp___56 ;
  size_t __s1_len___1 ;
  size_t __s2_len___1 ;
  int tmp___66 ;
  int tmp___71 ;
  int tmp___72 ;
  int tmp___73 ;
  int tmp___74 ;
  int __attribute__((__leaf__))  tmp___75 ;
  uint tmp___76 ;
  char *tmp___77 ;
  char *tmp___78 ;
  int __attribute__((__leaf__))  tmp___79 ;
  int __attribute__((__leaf__))  tmp___80 ;
  char *tmp___81 ;
  char *tmp___82 ;
  char const   *tmp___83 ;
  unsigned int tmp___84 ;
  char const   *tmp___85 ;
  int tmp___86 ;
  char const   *__dyc_funcallvar_36 ;
  int __dyc_funcallvar_37 ;
  FILE *__dyc_funcallvar_38 ;
  MYSQL_ROW __dyc_funcallvar_39 ;
  unsigned long *__dyc_funcallvar_40 ;
  char *__dyc_funcallvar_41 ;
  char *__dyc_funcallvar_42 ;
  char *__dyc_funcallvar_43 ;
  my_ulonglong __dyc_funcallvar_44 ;
  int __dyc_funcallvar_45 ;
  unsigned int __dyc_funcallvar_46 ;
  char const   *__dyc_funcallvar_47 ;
  MYSQL_ROW __dyc_funcallvar_48 ;
  int __attribute__((__leaf__))  __dyc_funcallvar_49 ;
  int __dyc_funcallvar_50 ;
  int __dyc_funcallvar_51 ;
  int __dyc_funcallvar_52 ;
  int __dyc_funcallvar_53 ;
  int __dyc_funcallvar_54 ;
  MYSQL_ROW __dyc_funcallvar_55 ;
  int __attribute__((__leaf__))  __dyc_funcallvar_56 ;
  int __attribute__((__leaf__))  __dyc_funcallvar_57 ;
  char *__dyc_funcallvar_58 ;
  char *__dyc_funcallvar_59 ;
  char *__dyc_funcallvar_60 ;
  char *__dyc_funcallvar_61 ;
  int __dyc_funcallvar_62 ;
  unsigned int __dyc_funcallvar_63 ;
  char const   *__dyc_funcallvar_64 ;
  MYSQL_ROW __dyc_funcallvar_65 ;
  char const   *__dyc_funcallvar_66 ;

  {
  opt_no_create_info = (my_bool )__dyc_readpre_byte();
  extended_insert = (my_bool )__dyc_readpre_byte();
  opt_drop = (my_bool )__dyc_readpre_byte();
  opt_keywords = (my_bool )__dyc_readpre_byte();
  create_options = (my_bool )__dyc_readpre_byte();
  opt_xml = (my_bool )__dyc_readpre_byte();
  opt_comments = (my_bool )__dyc_readpre_byte();
  path = __dyc_read_ptr__char();
  init = (my_bool )__dyc_readpre_byte();
  write_data = (my_bool )__dyc_readpre_byte();
  complete_insert = (my_bool )__dyc_readpre_byte();
  __dyc_funcallvar_36 = (char const   *)__dyc_read_ptr__char();
  __dyc_funcallvar_37 = __dyc_readpre_byte();
  __dyc_funcallvar_38 = __dyc_read_ptr__typdef_FILE();
  __dyc_funcallvar_39 = __dyc_read_ptr__ptr__char();
  __dyc_funcallvar_40 = __dyc_read_ptr__long();
  __dyc_funcallvar_41 = __dyc_read_ptr__char();
  __dyc_funcallvar_42 = __dyc_read_ptr__char();
  __dyc_funcallvar_43 = __dyc_read_ptr__char();
  __dyc_funcallvar_44 = (my_ulonglong )__dyc_readpre_byte();
  __dyc_funcallvar_45 = __dyc_readpre_byte();
  __dyc_funcallvar_46 = (unsigned int )__dyc_readpre_byte();
  __dyc_funcallvar_47 = (char const   *)__dyc_read_ptr__char();
  __dyc_funcallvar_48 = __dyc_read_ptr__ptr__char();
  __dyc_funcallvar_49 = (int __attribute__((__leaf__))  )__dyc_readpre_byte();
  __dyc_funcallvar_50 = __dyc_readpre_byte();
  __dyc_funcallvar_51 = __dyc_readpre_byte();
  __dyc_funcallvar_52 = __dyc_readpre_byte();
  __dyc_funcallvar_53 = __dyc_readpre_byte();
  __dyc_funcallvar_54 = __dyc_readpre_byte();
  __dyc_funcallvar_55 = __dyc_read_ptr__ptr__char();
  __dyc_funcallvar_56 = (int __attribute__((__leaf__))  )__dyc_readpre_byte();
  __dyc_funcallvar_57 = (int __attribute__((__leaf__))  )__dyc_readpre_byte();
  __dyc_funcallvar_58 = __dyc_read_ptr__char();
  __dyc_funcallvar_59 = __dyc_read_ptr__char();
  __dyc_funcallvar_60 = __dyc_read_ptr__char();
  __dyc_funcallvar_61 = __dyc_read_ptr__char();
  __dyc_funcallvar_62 = __dyc_readpre_byte();
  __dyc_funcallvar_63 = (unsigned int )__dyc_readpre_byte();
  __dyc_funcallvar_64 = (char const   *)__dyc_read_ptr__char();
  __dyc_funcallvar_65 = __dyc_read_ptr__ptr__char();
  __dyc_funcallvar_66 = (char const   *)__dyc_read_ptr__char();
  num_fields = 0;
  sql_file = 0;
  row = 0;
  tmp___48 = 0;
  tmp___49 = 0;
  lengths = 0;
  tmp___50 = 0;
  tmp___51 = 0;
  tmp___52 = 0;
  tmp___53 = 0;
  keynr = 0;
  primary_key = 0;
  tmp___54 = 0;
  tmp___55 = 0;
  tmp___56 = 0;
  __s1_len___1 = 0;
  __s2_len___1 = 0;
  tmp___66 = 0;
  tmp___71 = 0;
  tmp___72 = 0;
  tmp___73 = 0;
  tmp___74 = 0;
  tmp___75 = 0;
  tmp___76 = 0;
  tmp___77 = 0;
  tmp___78 = 0;
  tmp___79 = 0;
  tmp___80 = 0;
  tmp___81 = 0;
  tmp___82 = 0;
  tmp___83 = 0;
  tmp___84 = 0;
  tmp___85 = 0;
  tmp___86 = 0;
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

  if (! opt_no_create_info) {
    {

    tmp___56 = __dyc_funcallvar_45;
    }
    if (tmp___56) {
      {
      tmp___54 = __dyc_funcallvar_46;
      }
      if (tmp___54 == 1347U) {
        {

        }
        goto continue_xml;
      }
      {
      tmp___55 = __dyc_funcallvar_47;

      }
      if (path) {
        {

        }
      }
      goto __dyc_dummy_label;
    }
    keynr = 0U;
    primary_key = 2147483647U;
    {
    while (1) {
      while_17_continue:  ;
      {
      row = __dyc_funcallvar_48;
      }
      if (! row) {
        goto while_17_break;
      }
      {
      tmp___75 = __dyc_funcallvar_49;
      }
      if (tmp___75 == (int __attribute__((__leaf__))  )1) {
        keynr ++;
        if (0) {
          {
          tmp___72 = __dyc_funcallvar_50;
          __s1_len___1 = (unsigned long )tmp___72;
          tmp___73 = __dyc_funcallvar_51;
          __s2_len___1 = (unsigned long )tmp___73;
          }
          if (! ((unsigned long )((void const   *)(*(row + 2) + 1)) - (unsigned long )((void const   *)*(row + 2)) == 1UL)) {
            goto _L___5;
          } else {
            if (__s1_len___1 >= 4UL) {
              _L___5:  
              if (! ((unsigned long )((void const   *)("PRIMARY" + 1)) - (unsigned long )((void const   *)"PRIMARY") == 1UL)) {
                tmp___74 = 1;
              } else {
                if (__s2_len___1 >= 4UL) {
                  tmp___74 = 1;
                } else {
                  tmp___74 = 0;
                }
              }
            } else {
              tmp___74 = 0;
            }
          }
          if (tmp___74) {
            {
            tmp___66 = __dyc_funcallvar_52;
            }
          } else {
            {
            tmp___71 = __dyc_funcallvar_53;
            tmp___66 = tmp___71;
            }
          }
        } else {
          {
          tmp___71 = __dyc_funcallvar_54;
          tmp___66 = tmp___71;
          }
        }
        if (! tmp___66) {
          primary_key = keynr;
          goto while_17_break;
        }
      }
    }
    while_17_break:  ;
    }
    {

    keynr = 0U;
    }
    {
    while (1) {
      while_18_continue:  ;
      {
      row = __dyc_funcallvar_55;
      }
      if (! row) {
        goto while_18_break;
      }
      if (opt_xml) {
        {

        }
        goto while_18_continue;
      }
      {
      tmp___80 = __dyc_funcallvar_56;
      }
      if (tmp___80 == (int __attribute__((__leaf__))  )1) {
        tmp___76 = keynr;
        keynr ++;
        if (tmp___76) {
          {

          }
        }
        {
        tmp___79 = __dyc_funcallvar_57;
        }
        if (tmp___79) {
          {
          tmp___77 = __dyc_funcallvar_58;

          }
        } else {
          if (keynr == primary_key) {
            {

            }
          } else {
            {
            tmp___78 = __dyc_funcallvar_59;

            }
          }
        }
      } else {
        {

        }
      }
      {
      tmp___81 = __dyc_funcallvar_60;

      }
      if (*(row + 7)) {
        {

        }
      }
      {

      }
    }
    while_18_break:  ;
    }
    if (! opt_xml) {
      if (keynr) {
        {

        }
      }
      {


      }
    }
    if (create_options) {
      {
      tmp___82 = __dyc_funcallvar_61;

      tmp___86 = __dyc_funcallvar_62;
      }
      if (tmp___86) {
        {
        tmp___84 = __dyc_funcallvar_63;
        }
        if (tmp___84 != 1064U) {
          {
          tmp___83 = __dyc_funcallvar_64;

          }
        }
      } else {
        {
        row = __dyc_funcallvar_65;
        }
        if (row) {
          if (opt_xml) {
            {

            }
          } else {
            {






            }
          }
        } else {
          {
          tmp___85 = __dyc_funcallvar_66;

          }
        }
      }
      {

      }
    }
    continue_xml: 
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
  __dyc_dummy_label:  ;
  __dyc_printpre_byte(init);
  __dyc_printpre_byte(num_fields);
  __dyc_print_ptr__char(tmp___48);
  __dyc_print_ptr__typdef_ulong(lengths);
  __dyc_print_ptr__char(tmp___51);
  __dyc_print_ptr__char(tmp___52);
  __dyc_print_ptr__char(tmp___53);
  __dyc_printpre_byte(keynr);
  __dyc_printpre_byte(primary_key);
  __dyc_print_ptr__char(tmp___55);
  __dyc_printpre_byte(__s1_len___1);
  __dyc_printpre_byte(__s2_len___1);
  __dyc_print_ptr__char(tmp___77);
  __dyc_print_ptr__char(tmp___78);
  __dyc_print_ptr__char(tmp___81);
  __dyc_print_ptr__char(tmp___82);
  __dyc_print_ptr__char(tmp___83);
  __dyc_print_ptr__char(tmp___85);
}
}
