#include "../../include/dycfoo.h"
#include "../../include/cmd-new-session.i.hd.c.h"
void __dyc_foo(void) 
{ struct cmd_find_state *target ;
  struct client *c ;
  struct session *as ;
  struct session *groupwith ;
  struct termios tio ;
  struct termios *tiop ;
  struct session_group *sg ;
  char const   *errstr ;
  char const   *group ;
  char const   *tmp___3 ;
  char *cwd ;
  char *newname ;
  char *name ;
  char *prefix ;
  int detached ;
  int already_attached ;
  int is_control ;
  u_int dsx ;
  u_int dsy ;
  enum cmd_retval retval ;
  char const   *tmp___7 ;
  int tmp___8 ;
  int tmp___9 ;
  int tmp___10 ;
  int tmp___11 ;
  struct session *tmp___12 ;
  char const   *tmp___13 ;
  struct client *tmp___14 ;
  int tmp___15 ;
  int tmp___16 ;
  int tmp___17 ;
  long long tmp___18 ;
  size_t __s1_len ;
  size_t __s2_len ;
  int tmp___28 ;
  int tmp___33 ;
  int tmp___34 ;
  int tmp___35 ;
  int tmp___36 ;
  int tmp___37 ;
  long long tmp___38 ;
  size_t __s1_len___0 ;
  size_t __s2_len___0 ;
  int tmp___48 ;
  int tmp___53 ;
  int tmp___54 ;
  int tmp___55 ;
  int tmp___56 ;
  int tmp___57 ;
  char const   *__dyc_funcallvar_8 ;
  char *__dyc_funcallvar_9 ;
  char *__dyc_funcallvar_10 ;
  int __dyc_funcallvar_11 ;
  struct session *__dyc_funcallvar_12 ;
  char const   *__dyc_funcallvar_13 ;
  int __dyc_funcallvar_14 ;
  int __dyc_funcallvar_15 ;
  int __dyc_funcallvar_16 ;
  enum cmd_retval __dyc_funcallvar_17 ;
  struct session *__dyc_funcallvar_18 ;
  char const   *__dyc_funcallvar_19 ;
  struct session_group *__dyc_funcallvar_20 ;
  struct session_group *__dyc_funcallvar_21 ;
  char *__dyc_funcallvar_22 ;
  char *__dyc_funcallvar_23 ;
  char *__dyc_funcallvar_24 ;
  int __dyc_funcallvar_25 ;
  char const   *__dyc_funcallvar_26 ;
  char *__dyc_funcallvar_27 ;
  char const   *__dyc_funcallvar_28 ;
  char *__dyc_funcallvar_29 ;
  struct client *__dyc_funcallvar_30 ;
  int __dyc_funcallvar_31 ;
  int __dyc_funcallvar_32 ;
  int __dyc_funcallvar_33 ;
  int __dyc_funcallvar_34 ;
  char const   *__dyc_funcallvar_35 ;
  int __dyc_funcallvar_36 ;
  int __dyc_funcallvar_37 ;
  int __dyc_funcallvar_38 ;
  int __dyc_funcallvar_39 ;
  int __dyc_funcallvar_40 ;
  long long __dyc_funcallvar_41 ;
  int __dyc_funcallvar_42 ;
  char const   *__dyc_funcallvar_43 ;
  int __dyc_funcallvar_44 ;
  int __dyc_funcallvar_45 ;
  int __dyc_funcallvar_46 ;
  int __dyc_funcallvar_47 ;
  int __dyc_funcallvar_48 ;
  long long __dyc_funcallvar_49 ;

  {
  target = __dyc_read_ptr__comp_151cmd_find_state();
  c = __dyc_read_ptr__comp_149client();
  tio = __dyc_read_comp_37termios();
  errstr = (char const   *)__dyc_read_ptr__char();
  newname = __dyc_read_ptr__char();
  __dyc_funcallvar_8 = (char const   *)__dyc_read_ptr__char();
  __dyc_funcallvar_9 = __dyc_read_ptr__char();
  __dyc_funcallvar_10 = __dyc_read_ptr__char();
  __dyc_funcallvar_11 = __dyc_readpre_byte();
  __dyc_funcallvar_12 = __dyc_read_ptr__comp_170session();
  __dyc_funcallvar_13 = (char const   *)__dyc_read_ptr__char();
  __dyc_funcallvar_14 = __dyc_readpre_byte();
  __dyc_funcallvar_15 = __dyc_readpre_byte();
  __dyc_funcallvar_16 = __dyc_readpre_byte();
  __dyc_funcallvar_17 = (enum cmd_retval )__dyc_readpre_byte();
  __dyc_funcallvar_18 = __dyc_read_ptr__comp_170session();
  __dyc_funcallvar_19 = (char const   *)__dyc_read_ptr__char();
  __dyc_funcallvar_20 = __dyc_read_ptr__comp_230session_group();
  __dyc_funcallvar_21 = __dyc_read_ptr__comp_230session_group();
  __dyc_funcallvar_22 = __dyc_read_ptr__char();
  __dyc_funcallvar_23 = __dyc_read_ptr__char();
  __dyc_funcallvar_24 = __dyc_read_ptr__char();
  __dyc_funcallvar_25 = __dyc_readpre_byte();
  __dyc_funcallvar_26 = (char const   *)__dyc_read_ptr__char();
  __dyc_funcallvar_27 = __dyc_read_ptr__char();
  __dyc_funcallvar_28 = (char const   *)__dyc_read_ptr__char();
  __dyc_funcallvar_29 = __dyc_read_ptr__char();
  __dyc_funcallvar_30 = __dyc_read_ptr__comp_149client();
  __dyc_funcallvar_31 = __dyc_readpre_byte();
  __dyc_funcallvar_32 = __dyc_readpre_byte();
  __dyc_funcallvar_33 = __dyc_readpre_byte();
  __dyc_funcallvar_34 = __dyc_readpre_byte();
  __dyc_funcallvar_35 = (char const   *)__dyc_read_ptr__char();
  __dyc_funcallvar_36 = __dyc_readpre_byte();
  __dyc_funcallvar_37 = __dyc_readpre_byte();
  __dyc_funcallvar_38 = __dyc_readpre_byte();
  __dyc_funcallvar_39 = __dyc_readpre_byte();
  __dyc_funcallvar_40 = __dyc_readpre_byte();
  __dyc_funcallvar_41 = (long long )__dyc_readpre_byte();
  __dyc_funcallvar_42 = __dyc_readpre_byte();
  __dyc_funcallvar_43 = (char const   *)__dyc_read_ptr__char();
  __dyc_funcallvar_44 = __dyc_readpre_byte();
  __dyc_funcallvar_45 = __dyc_readpre_byte();
  __dyc_funcallvar_46 = __dyc_readpre_byte();
  __dyc_funcallvar_47 = __dyc_readpre_byte();
  __dyc_funcallvar_48 = __dyc_readpre_byte();
  __dyc_funcallvar_49 = (long long )__dyc_readpre_byte();
  as = 0;
  groupwith = 0;
  tiop = 0;
  sg = 0;
  group = 0;
  tmp___3 = 0;
  cwd = 0;
  name = 0;
  prefix = 0;
  detached = 0;
  already_attached = 0;
  is_control = 0;
  dsx = 0;
  dsy = 0;
  retval = 0;
  tmp___7 = 0;
  tmp___8 = 0;
  tmp___9 = 0;
  tmp___10 = 0;
  tmp___11 = 0;
  tmp___12 = 0;
  tmp___13 = 0;
  tmp___14 = 0;
  tmp___15 = 0;
  tmp___16 = 0;
  tmp___17 = 0;
  tmp___18 = 0;
  __s1_len = 0;
  __s2_len = 0;
  tmp___28 = 0;
  tmp___33 = 0;
  tmp___34 = 0;
  tmp___35 = 0;
  tmp___36 = 0;
  tmp___37 = 0;
  tmp___38 = 0;
  __s1_len___0 = 0;
  __s2_len___0 = 0;
  tmp___48 = 0;
  tmp___53 = 0;
  tmp___54 = 0;
  tmp___55 = 0;
  tmp___56 = 0;
  tmp___57 = 0;
  tmp___3 = __dyc_funcallvar_8;
  if ((unsigned long )tmp___3 != (unsigned long )((void *)0)) {
    {
    name = __dyc_funcallvar_9;
    newname = __dyc_funcallvar_10;

    }
  }
  tmp___11 = __dyc_funcallvar_11;
  if (tmp___11) {
    if ((unsigned long )newname != (unsigned long )((void *)0)) {
      {
      as = __dyc_funcallvar_12;
      }
    } else {
      as = target->s;
    }
    if ((unsigned long )as != (unsigned long )((void *)0)) {
      {
      tmp___7 = __dyc_funcallvar_13;
      tmp___8 = __dyc_funcallvar_14;
      tmp___9 = __dyc_funcallvar_15;
      tmp___10 = __dyc_funcallvar_16;
      retval = __dyc_funcallvar_17;

      }
      goto __dyc_dummy_label;
    }
  }
  if ((unsigned long )newname != (unsigned long )((void *)0)) {
    {
    tmp___12 = __dyc_funcallvar_18;
    }
    if ((unsigned long )tmp___12 != (unsigned long )((void *)0)) {
      {

      }
      goto __dyc_dummy_label;
    }
  }
  group = __dyc_funcallvar_19;
  if ((unsigned long )group != (unsigned long )((void *)0)) {
    groupwith = target->s;
    if ((unsigned long )groupwith == (unsigned long )((void *)0)) {
      {
      sg = __dyc_funcallvar_20;
      }
    } else {
      {
      sg = __dyc_funcallvar_21;
      }
    }
    if ((unsigned long )sg != (unsigned long )((void *)0)) {
      {
      prefix = __dyc_funcallvar_22;
      }
    } else {
      if ((unsigned long )groupwith != (unsigned long )((void *)0)) {
        {
        prefix = __dyc_funcallvar_23;
        }
      } else {
        {
        prefix = __dyc_funcallvar_24;
        }
      }
    }
  }
  detached = __dyc_funcallvar_25;
  if ((unsigned long )c == (unsigned long )((void *)0)) {
    detached = 1;
  } else {
    if (c->flags & 8192UL) {
      is_control = 1;
    }
  }
  already_attached = 0;
  if ((unsigned long )c != (unsigned long )((void *)0)) {
    if ((unsigned long )c->session != (unsigned long )((void *)0)) {
      already_attached = 1;
    }
  }
  tmp___3 = __dyc_funcallvar_26;
  if ((unsigned long )tmp___3 != (unsigned long )((void *)0)) {
    {
    cwd = __dyc_funcallvar_27;
    }
  } else {
    {
    tmp___13 = __dyc_funcallvar_28;
    cwd = __dyc_funcallvar_29;
    }
  }
  if (! detached) {
    if (! already_attached) {
      if (c->fd != -1) {
        if (~ c->flags & 8192UL) {
          {
          tmp___14 = __dyc_funcallvar_30;
          tmp___15 = __dyc_funcallvar_31;
          }
          if (tmp___15) {
            {

            }
            goto __dyc_dummy_label;
          }
          {
          tmp___16 = __dyc_funcallvar_32;
          }
          if (tmp___16 != 0) {
            {

            }
          }
          tiop = & tio;
        } else {
          tiop = (struct termios *)((void *)0);
        }
      } else {
        tiop = (struct termios *)((void *)0);
      }
    } else {
      tiop = (struct termios *)((void *)0);
    }
  } else {
    tiop = (struct termios *)((void *)0);
  }
  if (! detached) {
    if (! already_attached) {
      {
      tmp___17 = __dyc_funcallvar_33;
      }
      if (tmp___17 != 0) {
        {


        }
        goto __dyc_dummy_label;
      }
    }
  }
  tmp___37 = __dyc_funcallvar_34;
  if (tmp___37) {
    {
    tmp___3 = __dyc_funcallvar_35;
    }
    if (0) {
      {
      tmp___34 = __dyc_funcallvar_36;
      __s1_len = (unsigned long )tmp___34;
      tmp___35 = __dyc_funcallvar_37;
      __s2_len = (unsigned long )tmp___35;
      }
      if (! ((unsigned long )((void const   *)(tmp___3 + 1)) - (unsigned long )((void const   *)tmp___3) == 1UL)) {
        goto _L___0;
      } else {
        if (__s1_len >= 4UL) {
          _L___0:  
          if (! ((unsigned long )((void const   *)("-" + 1)) - (unsigned long )((void const   *)"-") == 1UL)) {
            tmp___36 = 1;
          } else {
            if (__s2_len >= 4UL) {
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
        tmp___28 = __dyc_funcallvar_38;
        }
      } else {
        {
        tmp___33 = __dyc_funcallvar_39;
        tmp___28 = tmp___33;
        }
      }
    } else {
      {
      tmp___33 = __dyc_funcallvar_40;
      tmp___28 = tmp___33;
      }
    }
    if (tmp___28 == 0) {
      if ((unsigned long )c != (unsigned long )((void *)0)) {
        dsx = c->tty.sx;
      } else {
        dsx = 80U;
      }
    } else {
      {
      tmp___18 = __dyc_funcallvar_41;
      dsx = (unsigned int )tmp___18;
      }
      if ((unsigned long )errstr != (unsigned long )((void *)0)) {
        {

        }
        goto __dyc_dummy_label;
      }
    }
  } else {
    dsx = 80U;
  }
  tmp___57 = __dyc_funcallvar_42;
  if (tmp___57) {
    {
    tmp___3 = __dyc_funcallvar_43;
    }
    if (0) {
      {
      tmp___54 = __dyc_funcallvar_44;
      __s1_len___0 = (unsigned long )tmp___54;
      tmp___55 = __dyc_funcallvar_45;
      __s2_len___0 = (unsigned long )tmp___55;
      }
      if (! ((unsigned long )((void const   *)(tmp___3 + 1)) - (unsigned long )((void const   *)tmp___3) == 1UL)) {
        goto _L___2;
      } else {
        if (__s1_len___0 >= 4UL) {
          _L___2:  
          if (! ((unsigned long )((void const   *)("-" + 1)) - (unsigned long )((void const   *)"-") == 1UL)) {
            tmp___56 = 1;
          } else {
            if (__s2_len___0 >= 4UL) {
              tmp___56 = 1;
            } else {
              tmp___56 = 0;
            }
          }
        } else {
          tmp___56 = 0;
        }
      }
      if (tmp___56) {
        {
        tmp___48 = __dyc_funcallvar_46;
        }
      } else {
        {
        tmp___53 = __dyc_funcallvar_47;
        tmp___48 = tmp___53;
        }
      }
    } else {
      {
      tmp___53 = __dyc_funcallvar_48;
      tmp___48 = tmp___53;
      }
    }
    if (tmp___48 == 0) {
      if ((unsigned long )c != (unsigned long )((void *)0)) {
        dsy = c->tty.sy;
      } else {
        dsy = 24U;
      }
    } else {
      {
      tmp___38 = __dyc_funcallvar_49;
      dsy = (unsigned int )tmp___38;
      }
      if ((unsigned long )errstr != (unsigned long )((void *)0)) {
        {

        }
        goto __dyc_dummy_label;
      }
    }
  } else {
    dsy = 24U;
  }
  __dyc_dummy_label:  ;
  __dyc_print_ptr__comp_37termios(tiop);
  __dyc_print_ptr__char(tmp___3);
  __dyc_print_ptr__char(cwd);
  __dyc_print_ptr__char(name);
  __dyc_print_ptr__char(prefix);
  __dyc_printpre_byte(already_attached);
  __dyc_printpre_byte(is_control);
  __dyc_printpre_byte(dsx);
  __dyc_printpre_byte(dsy);
  __dyc_printpre_byte(retval);
  __dyc_print_ptr__char(tmp___7);
  __dyc_printpre_byte(tmp___8);
  __dyc_printpre_byte(tmp___9);
  __dyc_printpre_byte(tmp___10);
  __dyc_print_ptr__char(tmp___13);
  __dyc_print_ptr__comp_149client(tmp___14);
  __dyc_printpre_byte(__s1_len);
  __dyc_printpre_byte(__s2_len);
  __dyc_printpre_byte(__s1_len___0);
  __dyc_printpre_byte(__s2_len___0);
}
}
