#include "../../include/dycfoo.h"
#include "../../include/mysql_client_test.i.hd.c.h"
void __dyc_foo(void) 
{ my_bool opt_silent ;
  MYSQL_FIELD *field ;
  CHARSET_INFO *cs ;
  char const   *tmp ;
  char const   *tmp___0 ;
  size_t __s1_len ;
  size_t __s2_len ;
  int tmp___10 ;
  int tmp___15 ;
  int tmp___16 ;
  int tmp___17 ;
  int tmp___18 ;
  size_t __s1_len___0 ;
  size_t __s2_len___0 ;
  int tmp___28 ;
  int tmp___33 ;
  int tmp___34 ;
  int tmp___35 ;
  int tmp___36 ;
  size_t __s1_len___1 ;
  size_t __s2_len___1 ;
  int tmp___46 ;
  int tmp___51 ;
  int tmp___52 ;
  int tmp___53 ;
  int tmp___54 ;
  size_t __s1_len___2 ;
  size_t __s2_len___2 ;
  int tmp___64 ;
  int tmp___69 ;
  int tmp___70 ;
  int tmp___71 ;
  int tmp___72 ;
  size_t __s1_len___3 ;
  size_t __s2_len___3 ;
  int tmp___82 ;
  int tmp___87 ;
  int tmp___88 ;
  int tmp___89 ;
  int tmp___90 ;
  size_t __s1_len___4 ;
  size_t __s2_len___4 ;
  int tmp___100 ;
  int tmp___105 ;
  int tmp___106 ;
  int tmp___107 ;
  int tmp___108 ;
  char const   *name ;
  char const   *org_name ;
  enum enum_field_types type ;
  char const   *table ;
  char const   *org_table ;
  char const   *db ;
  unsigned long length ;
  char const   *def ;
  CHARSET_INFO *__dyc_funcallvar_2 ;
  int __dyc_funcallvar_3 ;
  int __dyc_funcallvar_4 ;
  int __dyc_funcallvar_5 ;
  int __dyc_funcallvar_6 ;
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

  {
  opt_silent = (my_bool )__dyc_readpre_byte();
  field = __dyc_read_ptr__typdef_MYSQL_FIELD();
  name = (char const   *)__dyc_read_ptr__char();
  org_name = (char const   *)__dyc_read_ptr__char();
  type = (enum enum_field_types )__dyc_readpre_byte();
  table = (char const   *)__dyc_read_ptr__char();
  org_table = (char const   *)__dyc_read_ptr__char();
  db = (char const   *)__dyc_read_ptr__char();
  length = (unsigned long )__dyc_readpre_byte();
  def = (char const   *)__dyc_read_ptr__char();
  __dyc_funcallvar_2 = __dyc_read_ptr__typdef_CHARSET_INFO();
  __dyc_funcallvar_3 = __dyc_readpre_byte();
  __dyc_funcallvar_4 = __dyc_readpre_byte();
  __dyc_funcallvar_5 = __dyc_readpre_byte();
  __dyc_funcallvar_6 = __dyc_readpre_byte();
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
  cs = 0;
  tmp = 0;
  tmp___0 = 0;
  __s1_len = 0;
  __s2_len = 0;
  tmp___10 = 0;
  tmp___15 = 0;
  tmp___16 = 0;
  tmp___17 = 0;
  tmp___18 = 0;
  __s1_len___0 = 0;
  __s2_len___0 = 0;
  tmp___28 = 0;
  tmp___33 = 0;
  tmp___34 = 0;
  tmp___35 = 0;
  tmp___36 = 0;
  __s1_len___1 = 0;
  __s2_len___1 = 0;
  tmp___46 = 0;
  tmp___51 = 0;
  tmp___52 = 0;
  tmp___53 = 0;
  tmp___54 = 0;
  __s1_len___2 = 0;
  __s2_len___2 = 0;
  tmp___64 = 0;
  tmp___69 = 0;
  tmp___70 = 0;
  tmp___71 = 0;
  tmp___72 = 0;
  __s1_len___3 = 0;
  __s2_len___3 = 0;
  tmp___82 = 0;
  tmp___87 = 0;
  tmp___88 = 0;
  tmp___89 = 0;
  tmp___90 = 0;
  __s1_len___4 = 0;
  __s2_len___4 = 0;
  tmp___100 = 0;
  tmp___105 = 0;
  tmp___106 = 0;
  tmp___107 = 0;
  tmp___108 = 0;
  if (! field) {
    {


    }
  }
  cs = __dyc_funcallvar_2;
  if (! cs) {
    {

    }
  }
  if (! opt_silent) {
    {




    }
    if (table) {
      {

      }
    }
    if (org_table) {
      {

      }
    }
    {




    }
    if (def) {
      tmp = def;
    } else {
      tmp = "(null)";
    }
    if (field->def) {
      tmp___0 = (char const   *)field->def;
    } else {
      tmp___0 = "(null)";
    }
    {


    }
  }
  if (0) {
    {
    tmp___16 = __dyc_funcallvar_3;
    __s1_len = (unsigned long )tmp___16;
    tmp___17 = __dyc_funcallvar_4;
    __s2_len = (unsigned long )tmp___17;
    }
    if (! ((unsigned long )((void const   *)(field->name + 1)) - (unsigned long )((void const   *)field->name) == 1UL)) {
      goto _L___0;
    } else {
      if (__s1_len >= 4UL) {
        _L___0:  
        if (! ((unsigned long )((void const   *)(name + 1)) - (unsigned long )((void const   *)name) == 1UL)) {
          tmp___18 = 1;
        } else {
          if (__s2_len >= 4UL) {
            tmp___18 = 1;
          } else {
            tmp___18 = 0;
          }
        }
      } else {
        tmp___18 = 0;
      }
    }
    if (tmp___18) {
      {
      tmp___10 = __dyc_funcallvar_5;
      }
    } else {
      {
      tmp___15 = __dyc_funcallvar_6;
      tmp___10 = tmp___15;
      }
    }
  } else {
    {
    tmp___15 = __dyc_funcallvar_7;
    tmp___10 = tmp___15;
    }
  }
  if (! (tmp___10 == 0)) {
    {

    }
  }
  if (0) {
    {
    tmp___34 = __dyc_funcallvar_8;
    __s1_len___0 = (unsigned long )tmp___34;
    tmp___35 = __dyc_funcallvar_9;
    __s2_len___0 = (unsigned long )tmp___35;
    }
    if (! ((unsigned long )((void const   *)(field->org_name + 1)) - (unsigned long )((void const   *)field->org_name) == 1UL)) {
      goto _L___2;
    } else {
      if (__s1_len___0 >= 4UL) {
        _L___2:  
        if (! ((unsigned long )((void const   *)(org_name + 1)) - (unsigned long )((void const   *)org_name) == 1UL)) {
          tmp___36 = 1;
        } else {
          if (__s2_len___0 >= 4UL) {
            tmp___36 = 1;
          } else {
            tmp___36 = 0;
          }
        }
      } else {
        tmp___36 = 0;
      }
    }
    if (tmp___36) {
      {
      tmp___28 = __dyc_funcallvar_10;
      }
    } else {
      {
      tmp___33 = __dyc_funcallvar_11;
      tmp___28 = tmp___33;
      }
    }
  } else {
    {
    tmp___33 = __dyc_funcallvar_12;
    tmp___28 = tmp___33;
    }
  }
  if (! (tmp___28 == 0)) {
    {

    }
  }
  if (cs->mbmaxlen == 1U) {
    if ((int )field->type != (int )type) {
      {

      }
      if (! ((int )field->type == (int )type)) {
        {

        }
      }
    }
  }
  if (table) {
    if (0) {
      {
      tmp___52 = __dyc_funcallvar_13;
      __s1_len___1 = (unsigned long )tmp___52;
      tmp___53 = __dyc_funcallvar_14;
      __s2_len___1 = (unsigned long )tmp___53;
      }
      if (! ((unsigned long )((void const   *)(field->table + 1)) - (unsigned long )((void const   *)field->table) == 1UL)) {
        goto _L___4;
      } else {
        if (__s1_len___1 >= 4UL) {
          _L___4:  
          if (! ((unsigned long )((void const   *)(table + 1)) - (unsigned long )((void const   *)table) == 1UL)) {
            tmp___54 = 1;
          } else {
            if (__s2_len___1 >= 4UL) {
              tmp___54 = 1;
            } else {
              tmp___54 = 0;
            }
          }
        } else {
          tmp___54 = 0;
        }
      }
      if (tmp___54) {
        {
        tmp___46 = __dyc_funcallvar_15;
        }
      } else {
        {
        tmp___51 = __dyc_funcallvar_16;
        tmp___46 = tmp___51;
        }
      }
    } else {
      {
      tmp___51 = __dyc_funcallvar_17;
      tmp___46 = tmp___51;
      }
    }
    if (! (tmp___46 == 0)) {
      {

      }
    }
  }
  if (org_table) {
    if (0) {
      {
      tmp___70 = __dyc_funcallvar_18;
      __s1_len___2 = (unsigned long )tmp___70;
      tmp___71 = __dyc_funcallvar_19;
      __s2_len___2 = (unsigned long )tmp___71;
      }
      if (! ((unsigned long )((void const   *)(field->org_table + 1)) - (unsigned long )((void const   *)field->org_table) == 1UL)) {
        goto _L___6;
      } else {
        if (__s1_len___2 >= 4UL) {
          _L___6:  
          if (! ((unsigned long )((void const   *)(org_table + 1)) - (unsigned long )((void const   *)org_table) == 1UL)) {
            tmp___72 = 1;
          } else {
            if (__s2_len___2 >= 4UL) {
              tmp___72 = 1;
            } else {
              tmp___72 = 0;
            }
          }
        } else {
          tmp___72 = 0;
        }
      }
      if (tmp___72) {
        {
        tmp___64 = __dyc_funcallvar_20;
        }
      } else {
        {
        tmp___69 = __dyc_funcallvar_21;
        tmp___64 = tmp___69;
        }
      }
    } else {
      {
      tmp___69 = __dyc_funcallvar_22;
      tmp___64 = tmp___69;
      }
    }
    if (! (tmp___64 == 0)) {
      {

      }
    }
  }
  if (0) {
    {
    tmp___88 = __dyc_funcallvar_23;
    __s1_len___3 = (unsigned long )tmp___88;
    tmp___89 = __dyc_funcallvar_24;
    __s2_len___3 = (unsigned long )tmp___89;
    }
    if (! ((unsigned long )((void const   *)(field->db + 1)) - (unsigned long )((void const   *)field->db) == 1UL)) {
      goto _L___8;
    } else {
      if (__s1_len___3 >= 4UL) {
        _L___8:  
        if (! ((unsigned long )((void const   *)(db + 1)) - (unsigned long )((void const   *)db) == 1UL)) {
          tmp___90 = 1;
        } else {
          if (__s2_len___3 >= 4UL) {
            tmp___90 = 1;
          } else {
            tmp___90 = 0;
          }
        }
      } else {
        tmp___90 = 0;
      }
    }
    if (tmp___90) {
      {
      tmp___82 = __dyc_funcallvar_25;
      }
    } else {
      {
      tmp___87 = __dyc_funcallvar_26;
      tmp___82 = tmp___87;
      }
    }
  } else {
    {
    tmp___87 = __dyc_funcallvar_27;
    tmp___82 = tmp___87;
    }
  }
  if (! (tmp___82 == 0)) {
    {

    }
  }
  if (length) {
    if (field->length != length * (unsigned long )cs->mbmaxlen) {
      {

      }
      if (! (field->length == length * (unsigned long )cs->mbmaxlen)) {
        {

        }
      }
    }
  }
  if (def) {
    if (0) {
      {
      tmp___106 = __dyc_funcallvar_28;
      __s1_len___4 = (unsigned long )tmp___106;
      tmp___107 = __dyc_funcallvar_29;
      __s2_len___4 = (unsigned long )tmp___107;
      }
      if (! ((unsigned long )((void const   *)(field->def + 1)) - (unsigned long )((void const   *)field->def) == 1UL)) {
        goto _L___10;
      } else {
        if (__s1_len___4 >= 4UL) {
          _L___10:  
          if (! ((unsigned long )((void const   *)(def + 1)) - (unsigned long )((void const   *)def) == 1UL)) {
            tmp___108 = 1;
          } else {
            if (__s2_len___4 >= 4UL) {
              tmp___108 = 1;
            } else {
              tmp___108 = 0;
            }
          }
        } else {
          tmp___108 = 0;
        }
      }
      if (tmp___108) {
        {
        tmp___100 = __dyc_funcallvar_30;
        }
      } else {
        {
        tmp___105 = __dyc_funcallvar_31;
        tmp___100 = tmp___105;
        }
      }
    } else {
      {
      tmp___105 = __dyc_funcallvar_32;
      tmp___100 = tmp___105;
      }
    }
    if (! (tmp___100 == 0)) {
      {

      }
    }
  }
  __dyc_dummy_label:  ;
  __dyc_print_ptr__char(tmp);
  __dyc_print_ptr__char(tmp___0);
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
