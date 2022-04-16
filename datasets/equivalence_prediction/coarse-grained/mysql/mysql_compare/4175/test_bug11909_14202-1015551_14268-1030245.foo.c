#include "../../include/dycfoo.h"
#include "../../include/mysql_client_test.i.hd.c.h"
void __dyc_foo(void) 
{ MYSQL_STMT *stmt2 ;
  MYSQL_BIND my_bind[7] ;
  int rc ;
  char firstname[20] ;
  char midinit[20] ;
  char lastname[20] ;
  char workdept[20] ;
  ulong firstname_len ;
  ulong midinit_len ;
  ulong lastname_len ;
  ulong workdept_len ;
  uint32 empno ;
  double salary ;
  float bonus ;
  my_bool tmp___3 ;
  size_t __s1_len ;
  size_t __s2_len ;
  int tmp___13 ;
  int tmp___18 ;
  int tmp___19 ;
  int tmp___20 ;
  int tmp___21 ;
  size_t __s1_len___0 ;
  size_t __s2_len___0 ;
  int tmp___31 ;
  int tmp___36 ;
  int tmp___37 ;
  int tmp___38 ;
  int tmp___39 ;
  size_t __s1_len___1 ;
  size_t __s2_len___1 ;
  int tmp___49 ;
  int tmp___54 ;
  int tmp___55 ;
  int tmp___56 ;
  int tmp___57 ;
  size_t __s1_len___2 ;
  size_t __s2_len___2 ;
  int tmp___67 ;
  int tmp___72 ;
  int tmp___73 ;
  int tmp___74 ;
  int tmp___75 ;
  my_bool tmp___76 ;
  size_t __s1_len___3 ;
  size_t __s2_len___3 ;
  int tmp___86 ;
  int tmp___91 ;
  int tmp___92 ;
  int tmp___93 ;
  int tmp___94 ;
  my_bool tmp___95 ;
  my_bool tmp___96 ;
  int r___2 ;
  int r___3 ;
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
  MYSQL_STMT *__dyc_funcallvar_31 ;
  my_bool __dyc_funcallvar_32 ;
  int __dyc_funcallvar_33 ;
  int __dyc_funcallvar_34 ;
  int __dyc_funcallvar_35 ;
  int __dyc_funcallvar_36 ;
  int __dyc_funcallvar_37 ;
  int __dyc_funcallvar_38 ;
  int __dyc_funcallvar_39 ;
  my_bool __dyc_funcallvar_40 ;
  int __dyc_funcallvar_41 ;
  my_bool __dyc_funcallvar_42 ;
  int __dyc_funcallvar_43 ;

  {
  firstname_len = (ulong )__dyc_readpre_byte();
  midinit_len = (ulong )__dyc_readpre_byte();
  lastname_len = (ulong )__dyc_readpre_byte();
  workdept_len = (ulong )__dyc_readpre_byte();
  empno = (uint32 )__dyc_readpre_byte();
  salary = (double )__dyc_readpre_byte();
  bonus = (float )__dyc_readpre_byte();
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
  __dyc_funcallvar_31 = __dyc_read_ptr__typdef_MYSQL_STMT();
  __dyc_funcallvar_32 = (my_bool )__dyc_readpre_byte();
  __dyc_funcallvar_33 = __dyc_readpre_byte();
  __dyc_funcallvar_34 = __dyc_readpre_byte();
  __dyc_funcallvar_35 = __dyc_readpre_byte();
  __dyc_funcallvar_36 = __dyc_readpre_byte();
  __dyc_funcallvar_37 = __dyc_readpre_byte();
  __dyc_funcallvar_38 = __dyc_readpre_byte();
  __dyc_funcallvar_39 = __dyc_readpre_byte();
  __dyc_funcallvar_40 = (my_bool )__dyc_readpre_byte();
  __dyc_funcallvar_41 = __dyc_readpre_byte();
  __dyc_funcallvar_42 = (my_bool )__dyc_readpre_byte();
  __dyc_funcallvar_43 = __dyc_readpre_byte();
  stmt2 = 0;
  rc = 0;
  tmp___3 = 0;
  __s1_len = 0;
  __s2_len = 0;
  tmp___13 = 0;
  tmp___18 = 0;
  tmp___19 = 0;
  tmp___20 = 0;
  tmp___21 = 0;
  __s1_len___0 = 0;
  __s2_len___0 = 0;
  tmp___31 = 0;
  tmp___36 = 0;
  tmp___37 = 0;
  tmp___38 = 0;
  tmp___39 = 0;
  __s1_len___1 = 0;
  __s2_len___1 = 0;
  tmp___49 = 0;
  tmp___54 = 0;
  tmp___55 = 0;
  tmp___56 = 0;
  tmp___57 = 0;
  __s1_len___2 = 0;
  __s2_len___2 = 0;
  tmp___67 = 0;
  tmp___72 = 0;
  tmp___73 = 0;
  tmp___74 = 0;
  tmp___75 = 0;
  tmp___76 = 0;
  __s1_len___3 = 0;
  __s2_len___3 = 0;
  tmp___86 = 0;
  tmp___91 = 0;
  tmp___92 = 0;
  tmp___93 = 0;
  tmp___94 = 0;
  tmp___95 = 0;
  tmp___96 = 0;
  r___2 = 0;
  r___3 = 0;
  my_bind[1].buffer_length = sizeof(char [20]);
  my_bind[1].length = & firstname_len;
  my_bind[2].buffer_type = 253;
  my_bind[2].buffer = (void *)(midinit);
  my_bind[2].buffer_length = sizeof(char [20]);
  my_bind[2].length = & midinit_len;
  my_bind[3].buffer_type = 253;
  my_bind[3].buffer = (void *)(lastname);
  my_bind[3].buffer_length = sizeof(char [20]);
  my_bind[3].length = & lastname_len;
  my_bind[4].buffer_type = 253;
  my_bind[4].buffer = (void *)(workdept);
  my_bind[4].buffer_length = sizeof(char [20]);
  my_bind[4].length = & workdept_len;
  my_bind[5].buffer_type = 5;
  my_bind[5].buffer = (void *)(& salary);
  my_bind[6].buffer_type = 4;
  my_bind[6].buffer = (void *)(& bonus);
  tmp___3 = __dyc_funcallvar_8;
  rc = (int )tmp___3;
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
  if (! (rc == 0)) {
    {

    }
  }
  if (! (empno == 10U)) {
    {

    }
  }
  if (0) {
    {
    tmp___19 = __dyc_funcallvar_11;
    __s1_len = (unsigned long )tmp___19;
    tmp___20 = __dyc_funcallvar_12;
    __s2_len = (unsigned long )tmp___20;
    }
    if (! ((unsigned long )((void const   *)(firstname + 1)) - (unsigned long )((void const   *)(firstname)) == 1UL)) {
      goto _L___0;
    } else {
      if (__s1_len >= 4UL) {
        _L___0:  
        if (! ((unsigned long )((void const   *)("CHRISTINE" + 1)) - (unsigned long )((void const   *)"CHRISTINE") == 1UL)) {
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
      tmp___13 = __dyc_funcallvar_13;
      }
    } else {
      {
      tmp___18 = __dyc_funcallvar_14;
      tmp___13 = tmp___18;
      }
    }
  } else {
    {
    tmp___18 = __dyc_funcallvar_15;
    tmp___13 = tmp___18;
    }
  }
  if (! (tmp___13 == 0)) {
    {

    }
  }
  if (0) {
    {
    tmp___37 = __dyc_funcallvar_16;
    __s1_len___0 = (unsigned long )tmp___37;
    tmp___38 = __dyc_funcallvar_17;
    __s2_len___0 = (unsigned long )tmp___38;
    }
    if (! ((unsigned long )((void const   *)(midinit + 1)) - (unsigned long )((void const   *)(midinit)) == 1UL)) {
      goto _L___2;
    } else {
      if (__s1_len___0 >= 4UL) {
        _L___2:  
        if (! ((unsigned long )((void const   *)("I" + 1)) - (unsigned long )((void const   *)"I") == 1UL)) {
          tmp___39 = 1;
        } else {
          if (__s2_len___0 >= 4UL) {
            tmp___39 = 1;
          } else {
            tmp___39 = 0;
          }
        }
      } else {
        tmp___39 = 0;
      }
    }
    if (tmp___39) {
      {
      tmp___31 = __dyc_funcallvar_18;
      }
    } else {
      {
      tmp___36 = __dyc_funcallvar_19;
      tmp___31 = tmp___36;
      }
    }
  } else {
    {
    tmp___36 = __dyc_funcallvar_20;
    tmp___31 = tmp___36;
    }
  }
  if (! (tmp___31 == 0)) {
    {

    }
  }
  if (0) {
    {
    tmp___55 = __dyc_funcallvar_21;
    __s1_len___1 = (unsigned long )tmp___55;
    tmp___56 = __dyc_funcallvar_22;
    __s2_len___1 = (unsigned long )tmp___56;
    }
    if (! ((unsigned long )((void const   *)(lastname + 1)) - (unsigned long )((void const   *)(lastname)) == 1UL)) {
      goto _L___4;
    } else {
      if (__s1_len___1 >= 4UL) {
        _L___4:  
        if (! ((unsigned long )((void const   *)("HAAS" + 1)) - (unsigned long )((void const   *)"HAAS") == 1UL)) {
          tmp___57 = 1;
        } else {
          if (__s2_len___1 >= 4UL) {
            tmp___57 = 1;
          } else {
            tmp___57 = 0;
          }
        }
      } else {
        tmp___57 = 0;
      }
    }
    if (tmp___57) {
      {
      tmp___49 = __dyc_funcallvar_23;
      }
    } else {
      {
      tmp___54 = __dyc_funcallvar_24;
      tmp___49 = tmp___54;
      }
    }
  } else {
    {
    tmp___54 = __dyc_funcallvar_25;
    tmp___49 = tmp___54;
    }
  }
  if (! (tmp___49 == 0)) {
    {

    }
  }
  if (0) {
    {
    tmp___73 = __dyc_funcallvar_26;
    __s1_len___2 = (unsigned long )tmp___73;
    tmp___74 = __dyc_funcallvar_27;
    __s2_len___2 = (unsigned long )tmp___74;
    }
    if (! ((unsigned long )((void const   *)(workdept + 1)) - (unsigned long )((void const   *)(workdept)) == 1UL)) {
      goto _L___6;
    } else {
      if (__s1_len___2 >= 4UL) {
        _L___6:  
        if (! ((unsigned long )((void const   *)("A00" + 1)) - (unsigned long )((void const   *)"A00") == 1UL)) {
          tmp___75 = 1;
        } else {
          if (__s2_len___2 >= 4UL) {
            tmp___75 = 1;
          } else {
            tmp___75 = 0;
          }
        }
      } else {
        tmp___75 = 0;
      }
    }
    if (tmp___75) {
      {
      tmp___67 = __dyc_funcallvar_28;
      }
    } else {
      {
      tmp___72 = __dyc_funcallvar_29;
      tmp___67 = tmp___72;
      }
    }
  } else {
    {
    tmp___72 = __dyc_funcallvar_30;
    tmp___67 = tmp___72;
    }
  }
  if (! (tmp___67 == 0)) {
    {

    }
  }
  if (! (salary == 52750.0)) {
    {

    }
  }
  if (! (bonus == (float )1000.0)) {
    {

    }
  }
  stmt2 = __dyc_funcallvar_31;
  tmp___76 = __dyc_funcallvar_32;
  rc = (int )tmp___76;
  if (rc) {
    {

    }
  }
  if (! (rc == 0)) {
    {

    }
  }
  rc = __dyc_funcallvar_33;
  if (rc) {
    {

    }
  }
  if (! (rc == 0)) {
    {

    }
  }
  rc = __dyc_funcallvar_34;
  if (! (rc == 0)) {
    {

    }
  }
  if (! (empno == 10U)) {
    {

    }
  }
  if (0) {
    {
    tmp___92 = __dyc_funcallvar_35;
    __s1_len___3 = (unsigned long )tmp___92;
    tmp___93 = __dyc_funcallvar_36;
    __s2_len___3 = (unsigned long )tmp___93;
    }
    if (! ((unsigned long )((void const   *)(firstname + 1)) - (unsigned long )((void const   *)(firstname)) == 1UL)) {
      goto _L___8;
    } else {
      if (__s1_len___3 >= 4UL) {
        _L___8:  
        if (! ((unsigned long )((void const   *)("CHRISTINE" + 1)) - (unsigned long )((void const   *)"CHRISTINE") == 1UL)) {
          tmp___94 = 1;
        } else {
          if (__s2_len___3 >= 4UL) {
            tmp___94 = 1;
          } else {
            tmp___94 = 0;
          }
        }
      } else {
        tmp___94 = 0;
      }
    }
    if (tmp___94) {
      {
      tmp___86 = __dyc_funcallvar_37;
      }
    } else {
      {
      tmp___91 = __dyc_funcallvar_38;
      tmp___86 = tmp___91;
      }
    }
  } else {
    {
    tmp___91 = __dyc_funcallvar_39;
    tmp___86 = tmp___91;
    }
  }
  if (! (tmp___86 == 0)) {
    {

    }
  }
  tmp___95 = __dyc_funcallvar_40;
  rc = (int )tmp___95;
  if (rc) {
    {

    }
  }
  if (! (rc == 0)) {
    {

    }
  }
  rc = __dyc_funcallvar_41;
  if (! (rc == 0)) {
    {

    }
  }


  tmp___96 = __dyc_funcallvar_42;
  rc = (int )tmp___96;
  r___2 = rc;
  if (r___2) {
    {

    }
  }
  if (! (r___2 == 0)) {
    {

    }
  }
  rc = __dyc_funcallvar_43;
  r___3 = rc;
  if (r___3) {
    {

    }
  }
  __dyc_dummy_label:  ;
  __dyc_print_ptr__typdef_MYSQL_STMT(stmt2);
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
}
}
