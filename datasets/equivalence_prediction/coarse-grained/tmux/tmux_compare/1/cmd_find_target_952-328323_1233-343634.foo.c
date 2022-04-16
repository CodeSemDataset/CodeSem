#include "../../include/dycfoo.h"
#include "../../include/cmd-find.i.hd.c.h"
void __dyc_foo(void) 
{ struct cmd_find_state marked_pane ;
  struct mouse_event *m ;
  struct cmd_find_state current ;
  char *colon ;
  char *period ;
  char *copy ;
  char tmp[256] ;
  char const   *session ;
  char const   *window ;
  char const   *pane ;
  int window_only ;
  int pane_only ;
  size_t tmp___0 ;
  char const   *tmp___1 ;
  struct client *tmp___2 ;
  int tmp___3 ;
  struct cmd_find_state *tmp___4 ;
  int tmp___5 ;
  int tmp___6 ;
  int tmp___7 ;
  struct key_event *tmp___8 ;
  size_t __s1_len ;
  size_t __s2_len ;
  int tmp___18 ;
  int tmp___23 ;
  int tmp___24 ;
  int tmp___25 ;
  int tmp___26 ;
  size_t __s1_len___0 ;
  size_t __s2_len___0 ;
  int tmp___36 ;
  int tmp___41 ;
  int tmp___42 ;
  int tmp___43 ;
  int tmp___44 ;
  int tmp___45 ;
  size_t __s1_len___1 ;
  size_t __s2_len___1 ;
  int tmp___55 ;
  int tmp___60 ;
  int tmp___61 ;
  int tmp___62 ;
  int tmp___63 ;
  size_t __s1_len___2 ;
  size_t __s2_len___2 ;
  int tmp___73 ;
  int tmp___78 ;
  int tmp___79 ;
  int tmp___80 ;
  int tmp___81 ;
  char *tmp___83 ;
  char *tmp___84 ;
  char *tmp___86 ;
  char *tmp___88 ;
  char *tmp___89 ;
  char const   *tmp___90 ;
  char const   *tmp___91 ;
  char const   *tmp___92 ;
  char const   *tmp___93 ;
  char const   *tmp___94 ;
  char const   *tmp___95 ;
  int tmp___96 ;
  int tmp___97 ;
  int tmp___98 ;
  int tmp___99 ;
  int tmp___100 ;
  int tmp___101 ;
  int tmp___102 ;
  int tmp___103 ;
  int tmp___104 ;
  struct cmd_find_state *fs ;
  char const   *target ;
  enum cmd_find_type type ;
  int flags ;
  size_t __dyc_funcallvar_1 ;
  int __dyc_funcallvar_2 ;
  struct cmd_find_state *__dyc_funcallvar_3 ;
  int __dyc_funcallvar_4 ;
  struct cmd_find_state *__dyc_funcallvar_5 ;
  struct client *__dyc_funcallvar_6 ;
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
  struct key_event *__dyc_funcallvar_19 ;
  struct window_pane *__dyc_funcallvar_20 ;
  struct winlink *__dyc_funcallvar_21 ;
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
  char *__dyc_funcallvar_33 ;
  char *__dyc_funcallvar_34 ;
  char *__dyc_funcallvar_35 ;
  char *__dyc_funcallvar_36 ;
  char const   *__dyc_funcallvar_37 ;
  char const   *__dyc_funcallvar_38 ;
  char const   *__dyc_funcallvar_39 ;
  int __dyc_funcallvar_40 ;
  int __dyc_funcallvar_41 ;
  int __dyc_funcallvar_42 ;
  int __dyc_funcallvar_43 ;
  int __dyc_funcallvar_44 ;
  int __dyc_funcallvar_45 ;
  int __dyc_funcallvar_46 ;
  int __dyc_funcallvar_47 ;
  int __dyc_funcallvar_48 ;

  {
  marked_pane = __dyc_read_comp_145cmd_find_state();
  current = __dyc_read_comp_145cmd_find_state();
  fs = __dyc_read_ptr__comp_145cmd_find_state();
  target = (char const   *)__dyc_read_ptr__char();
  type = (enum cmd_find_type )__dyc_readpre_byte();
  flags = __dyc_readpre_byte();
  __dyc_funcallvar_1 = (size_t )__dyc_readpre_byte();
  __dyc_funcallvar_2 = __dyc_readpre_byte();
  __dyc_funcallvar_3 = __dyc_read_ptr__comp_145cmd_find_state();
  __dyc_funcallvar_4 = __dyc_readpre_byte();
  __dyc_funcallvar_5 = __dyc_read_ptr__comp_145cmd_find_state();
  __dyc_funcallvar_6 = __dyc_read_ptr__comp_143client();
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
  __dyc_funcallvar_19 = __dyc_read_ptr__comp_231key_event();
  __dyc_funcallvar_20 = __dyc_read_ptr__comp_193window_pane();
  __dyc_funcallvar_21 = __dyc_read_ptr__comp_168winlink();
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
  __dyc_funcallvar_33 = __dyc_read_ptr__char();
  __dyc_funcallvar_34 = __dyc_read_ptr__char();
  __dyc_funcallvar_35 = __dyc_read_ptr__char();
  __dyc_funcallvar_36 = __dyc_read_ptr__char();
  __dyc_funcallvar_37 = (char const   *)__dyc_read_ptr__char();
  __dyc_funcallvar_38 = (char const   *)__dyc_read_ptr__char();
  __dyc_funcallvar_39 = (char const   *)__dyc_read_ptr__char();
  __dyc_funcallvar_40 = __dyc_readpre_byte();
  __dyc_funcallvar_41 = __dyc_readpre_byte();
  __dyc_funcallvar_42 = __dyc_readpre_byte();
  __dyc_funcallvar_43 = __dyc_readpre_byte();
  __dyc_funcallvar_44 = __dyc_readpre_byte();
  __dyc_funcallvar_45 = __dyc_readpre_byte();
  __dyc_funcallvar_46 = __dyc_readpre_byte();
  __dyc_funcallvar_47 = __dyc_readpre_byte();
  __dyc_funcallvar_48 = __dyc_readpre_byte();
  m = 0;
  colon = 0;
  period = 0;
  copy = 0;
  session = 0;
  window = 0;
  pane = 0;
  window_only = 0;
  pane_only = 0;
  tmp___0 = 0;
  tmp___1 = 0;
  tmp___2 = 0;
  tmp___3 = 0;
  tmp___4 = 0;
  tmp___5 = 0;
  tmp___6 = 0;
  tmp___7 = 0;
  tmp___8 = 0;
  __s1_len = 0;
  __s2_len = 0;
  tmp___18 = 0;
  tmp___23 = 0;
  tmp___24 = 0;
  tmp___25 = 0;
  tmp___26 = 0;
  __s1_len___0 = 0;
  __s2_len___0 = 0;
  tmp___36 = 0;
  tmp___41 = 0;
  tmp___42 = 0;
  tmp___43 = 0;
  tmp___44 = 0;
  tmp___45 = 0;
  __s1_len___1 = 0;
  __s2_len___1 = 0;
  tmp___55 = 0;
  tmp___60 = 0;
  tmp___61 = 0;
  tmp___62 = 0;
  tmp___63 = 0;
  __s1_len___2 = 0;
  __s2_len___2 = 0;
  tmp___73 = 0;
  tmp___78 = 0;
  tmp___79 = 0;
  tmp___80 = 0;
  tmp___81 = 0;
  tmp___83 = 0;
  tmp___84 = 0;
  tmp___86 = 0;
  tmp___88 = 0;
  tmp___89 = 0;
  tmp___90 = 0;
  tmp___91 = 0;
  tmp___92 = 0;
  tmp___93 = 0;
  tmp___94 = 0;
  tmp___95 = 0;
  tmp___96 = 0;
  tmp___97 = 0;
  tmp___98 = 0;
  tmp___99 = 0;
  tmp___100 = 0;
  tmp___101 = 0;
  tmp___102 = 0;
  tmp___103 = 0;
  tmp___104 = 0;
  if (flags & 8) {
    {

    }
  }
  if (flags & 16) {
    {

    }
  }
  if (flags & 32) {
    {

    }
  }
  if (flags & 64) {
    {

    }
  }
  if ((int )tmp[0] != 0) {
    {
    tmp___0 = __dyc_funcallvar_1;
    tmp[tmp___0 - 1UL] = (char )'\000';
    }
  } else {
    {

    }
  }
  if ((unsigned long )target == (unsigned long )((void *)0)) {
    tmp___1 = "none";
  } else {
    tmp___1 = target;
  }


  tmp___6 = __dyc_funcallvar_2;
  if (tmp___6) {
    if (flags & 8) {
      {
      fs->current = & marked_pane;

      }
    } else {
      goto _L;
    }
  } else {
    _L:  
    {
    tmp___4 = __dyc_funcallvar_3;
    tmp___5 = __dyc_funcallvar_4;
    }
    if (tmp___5) {
      {
      fs->current = __dyc_funcallvar_5;

      }
    } else {
      {
      tmp___2 = __dyc_funcallvar_6;
      tmp___3 = __dyc_funcallvar_7;
      }
      if (tmp___3 == 0) {
        {
        fs->current = & current;

        }
      } else {
        if (~ flags & 2) {
          {

          }
        }
        goto __dyc_dummy_label;
      }
    }
  }
  tmp___7 = __dyc_funcallvar_8;
  if (! tmp___7) {
    {

    }
  }
  if ((unsigned long )target == (unsigned long )((void *)0)) {
    goto __dyc_dummy_label;
  } else {
    if ((int const   )*target == 0) {
      goto __dyc_dummy_label;
    }
  }
  if (0) {
    {
    tmp___24 = __dyc_funcallvar_9;
    __s1_len = (unsigned long )tmp___24;
    tmp___25 = __dyc_funcallvar_10;
    __s2_len = (unsigned long )tmp___25;
    }
    if (! ((unsigned long )((void const   *)(target + 1)) - (unsigned long )((void const   *)target) == 1UL)) {
      goto _L___1;
    } else {
      if (__s1_len >= 4UL) {
        _L___1:  
        if (! ((unsigned long )((void const   *)("=" + 1)) - (unsigned long )((void const   *)"=") == 1UL)) {
          tmp___26 = 1;
        } else {
          if (__s2_len >= 4UL) {
            tmp___26 = 1;
          } else {
            tmp___26 = 0;
          }
        }
      } else {
        tmp___26 = 0;
      }
    }
    if (tmp___26) {
      {
      tmp___18 = __dyc_funcallvar_11;
      }
    } else {
      {
      tmp___23 = __dyc_funcallvar_12;
      tmp___18 = tmp___23;
      }
    }
  } else {
    {
    tmp___23 = __dyc_funcallvar_13;
    tmp___18 = tmp___23;
    }
  }
  if (tmp___18 == 0) {
    goto _L___4;
  } else {
    if (0) {
      {
      tmp___42 = __dyc_funcallvar_14;
      __s1_len___0 = (unsigned long )tmp___42;
      tmp___43 = __dyc_funcallvar_15;
      __s2_len___0 = (unsigned long )tmp___43;
      }
      if (! ((unsigned long )((void const   *)(target + 1)) - (unsigned long )((void const   *)target) == 1UL)) {
        goto _L___3;
      } else {
        if (__s1_len___0 >= 4UL) {
          _L___3:  
          if (! ((unsigned long )((void const   *)("{mouse}" + 1)) - (unsigned long )((void const   *)"{mouse}") == 1UL)) {
            tmp___44 = 1;
          } else {
            if (__s2_len___0 >= 4UL) {
              tmp___44 = 1;
            } else {
              tmp___44 = 0;
            }
          }
        } else {
          tmp___44 = 0;
        }
      }
      if (tmp___44) {
        {
        tmp___36 = __dyc_funcallvar_16;
        }
      } else {
        {
        tmp___41 = __dyc_funcallvar_17;
        tmp___36 = tmp___41;
        }
      }
    } else {
      {
      tmp___41 = __dyc_funcallvar_18;
      tmp___36 = tmp___41;
      }
    }
    if (tmp___36 == 0) {
      _L___4:  
      {
      tmp___8 = __dyc_funcallvar_19;
      m = & tmp___8->m;
      }
      if ((int )type == 0) {
        goto switch_13_0;
      } else {
        if ((int )type == 1) {
          goto switch_13_1;
        } else {
          if ((int )type == 2) {
            goto switch_13_1;
          } else {
            if (0) {
              switch_13_0:  
              {
              fs->wp = __dyc_funcallvar_20;
              }
              if ((unsigned long )fs->wp != (unsigned long )((void *)0)) {
                fs->w = (fs->wl)->window;
                goto switch_13_break;
              }
              switch_13_1:  
              switch_13_2:  
              {
              fs->wl = __dyc_funcallvar_21;
              }
              if ((unsigned long )fs->wl == (unsigned long )((void *)0)) {
                if ((unsigned long )fs->s != (unsigned long )((void *)0)) {
                  fs->wl = (fs->s)->curw;
                }
              }
              if ((unsigned long )fs->wl != (unsigned long )((void *)0)) {
                fs->w = (fs->wl)->window;
                fs->wp = (fs->w)->active;
              }
              goto switch_13_break;
            } else {
              switch_13_break:  ;
            }
          }
        }
      }
      if ((unsigned long )fs->wp == (unsigned long )((void *)0)) {
        if (~ flags & 2) {
          {

          }
        }
        goto __dyc_dummy_label;
      }
      goto __dyc_dummy_label;
    }
  }
  if (0) {
    {
    tmp___61 = __dyc_funcallvar_22;
    __s1_len___1 = (unsigned long )tmp___61;
    tmp___62 = __dyc_funcallvar_23;
    __s2_len___1 = (unsigned long )tmp___62;
    }
    if (! ((unsigned long )((void const   *)(target + 1)) - (unsigned long )((void const   *)target) == 1UL)) {
      goto _L___6;
    } else {
      if (__s1_len___1 >= 4UL) {
        _L___6:  
        if (! ((unsigned long )((void const   *)("~" + 1)) - (unsigned long )((void const   *)"~") == 1UL)) {
          tmp___63 = 1;
        } else {
          if (__s2_len___1 >= 4UL) {
            tmp___63 = 1;
          } else {
            tmp___63 = 0;
          }
        }
      } else {
        tmp___63 = 0;
      }
    }
    if (tmp___63) {
      {
      tmp___55 = __dyc_funcallvar_24;
      }
    } else {
      {
      tmp___60 = __dyc_funcallvar_25;
      tmp___55 = tmp___60;
      }
    }
  } else {
    {
    tmp___60 = __dyc_funcallvar_26;
    tmp___55 = tmp___60;
    }
  }
  if (tmp___55 == 0) {
    goto _L___9;
  } else {
    if (0) {
      {
      tmp___79 = __dyc_funcallvar_27;
      __s1_len___2 = (unsigned long )tmp___79;
      tmp___80 = __dyc_funcallvar_28;
      __s2_len___2 = (unsigned long )tmp___80;
      }
      if (! ((unsigned long )((void const   *)(target + 1)) - (unsigned long )((void const   *)target) == 1UL)) {
        goto _L___8;
      } else {
        if (__s1_len___2 >= 4UL) {
          _L___8:  
          if (! ((unsigned long )((void const   *)("{marked}" + 1)) - (unsigned long )((void const   *)"{marked}") == 1UL)) {
            tmp___81 = 1;
          } else {
            if (__s2_len___2 >= 4UL) {
              tmp___81 = 1;
            } else {
              tmp___81 = 0;
            }
          }
        } else {
          tmp___81 = 0;
        }
      }
      if (tmp___81) {
        {
        tmp___73 = __dyc_funcallvar_29;
        }
      } else {
        {
        tmp___78 = __dyc_funcallvar_30;
        tmp___73 = tmp___78;
        }
      }
    } else {
      {
      tmp___78 = __dyc_funcallvar_31;
      tmp___73 = tmp___78;
      }
    }
    if (tmp___73 == 0) {
      _L___9:  
      {
      tmp___45 = __dyc_funcallvar_32;
      }
      if (! tmp___45) {
        if (~ flags & 2) {
          {

          }
        }
        goto __dyc_dummy_label;
      }
      {

      }
      goto __dyc_dummy_label;
    }
  }
  copy = __dyc_funcallvar_33;
  tmp___83 = __dyc_funcallvar_34;
  colon = tmp___83;
  if ((unsigned long )colon != (unsigned long )((void *)0)) {
    tmp___84 = colon;
    colon ++;
    *tmp___84 = (char )'\000';
  }
  if ((unsigned long )colon == (unsigned long )((void *)0)) {
    {
    tmp___86 = __dyc_funcallvar_35;
    period = tmp___86;
    }
  } else {
    {
    tmp___88 = __dyc_funcallvar_36;
    period = tmp___88;
    }
  }
  if ((unsigned long )period != (unsigned long )((void *)0)) {
    tmp___89 = period;
    period ++;
    *tmp___89 = (char )'\000';
  }
  pane = (char const   *)((void *)0);
  window = pane;
  session = window;
  if ((unsigned long )colon != (unsigned long )((void *)0)) {
    if ((unsigned long )period != (unsigned long )((void *)0)) {
      session = (char const   *)copy;
      window = (char const   *)colon;
      window_only = 1;
      pane = (char const   *)period;
      pane_only = 1;
    } else {
      goto _L___12;
    }
  } else {
    _L___12:  
    if ((unsigned long )colon != (unsigned long )((void *)0)) {
      if ((unsigned long )period == (unsigned long )((void *)0)) {
        session = (char const   *)copy;
        window = (char const   *)colon;
        window_only = 1;
      } else {
        goto _L___11;
      }
    } else {
      _L___11:  
      if ((unsigned long )colon == (unsigned long )((void *)0)) {
        if ((unsigned long )period != (unsigned long )((void *)0)) {
          window = (char const   *)copy;
          pane = (char const   *)period;
          pane_only = 1;
        } else {
          goto _L___10;
        }
      } else {
        _L___10:  
        if ((int )*copy == 36) {
          session = (char const   *)copy;
        } else {
          if ((int )*copy == 64) {
            window = (char const   *)copy;
          } else {
            if ((int )*copy == 37) {
              pane = (char const   *)copy;
            } else {
              if ((int )type == 2) {
                goto switch_14_2;
              } else {
                if ((int )type == 1) {
                  goto switch_14_1;
                } else {
                  if ((int )type == 0) {
                    goto switch_14_0;
                  } else {
                    if (0) {
                      switch_14_2:  
                      session = (char const   *)copy;
                      goto switch_14_break;
                      switch_14_1:  
                      window = (char const   *)copy;
                      goto switch_14_break;
                      switch_14_0:  
                      pane = (char const   *)copy;
                      goto switch_14_break;
                    } else {
                      switch_14_break:  ;
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  if ((unsigned long )session != (unsigned long )((void *)0)) {
    if ((int const   )*session == 61) {
      session ++;
      fs->flags |= 16;
    }
  }
  if ((unsigned long )window != (unsigned long )((void *)0)) {
    if ((int const   )*window == 61) {
      window ++;
      fs->flags |= 32;
    }
  }
  if ((unsigned long )session != (unsigned long )((void *)0)) {
    if ((int const   )*session == 0) {
      session = (char const   *)((void *)0);
    }
  }
  if ((unsigned long )window != (unsigned long )((void *)0)) {
    if ((int const   )*window == 0) {
      window = (char const   *)((void *)0);
    }
  }
  if ((unsigned long )pane != (unsigned long )((void *)0)) {
    if ((int const   )*pane == 0) {
      pane = (char const   *)((void *)0);
    }
  }
  if ((unsigned long )session != (unsigned long )((void *)0)) {
    {
    session = __dyc_funcallvar_37;
    }
  }
  if ((unsigned long )window != (unsigned long )((void *)0)) {
    {
    window = __dyc_funcallvar_38;
    }
  }
  if ((unsigned long )pane != (unsigned long )((void *)0)) {
    {
    pane = __dyc_funcallvar_39;
    }
  }
  if ((unsigned long )session != (unsigned long )((void *)0)) {
    goto _L___13;
  } else {
    if ((unsigned long )window != (unsigned long )((void *)0)) {
      goto _L___13;
    } else {
      if ((unsigned long )pane != (unsigned long )((void *)0)) {
        _L___13:  
        if ((unsigned long )pane == (unsigned long )((void *)0)) {
          tmp___90 = "";
        } else {
          tmp___90 = pane;
        }
        if ((unsigned long )pane == (unsigned long )((void *)0)) {
          tmp___91 = "";
        } else {
          tmp___91 = "pane ";
        }
        if ((unsigned long )window == (unsigned long )((void *)0)) {
          tmp___92 = "";
        } else {
          tmp___92 = window;
        }
        if ((unsigned long )window == (unsigned long )((void *)0)) {
          tmp___93 = "";
        } else {
          tmp___93 = "window ";
        }
        if ((unsigned long )session == (unsigned long )((void *)0)) {
          tmp___94 = "";
        } else {
          tmp___94 = session;
        }
        if ((unsigned long )session == (unsigned long )((void *)0)) {
          tmp___95 = "";
        } else {
          tmp___95 = "session ";
        }
        {

        }
      }
    }
  }
  if ((unsigned long )pane != (unsigned long )((void *)0)) {
    if (flags & 4) {
      if (~ flags & 2) {
        {

        }
      }
      goto __dyc_dummy_label;
    }
  }
  if ((unsigned long )session != (unsigned long )((void *)0)) {
    {
    tmp___96 = __dyc_funcallvar_40;
    }
    if (tmp___96 != 0) {
      goto no_session;
    }
    if ((unsigned long )window == (unsigned long )((void *)0)) {
      if ((unsigned long )pane == (unsigned long )((void *)0)) {
        fs->wl = (fs->s)->curw;
        fs->idx = -1;
        fs->w = (fs->wl)->window;
        fs->wp = (fs->w)->active;
        goto __dyc_dummy_label;
      }
    }
    if ((unsigned long )window != (unsigned long )((void *)0)) {
      if ((unsigned long )pane == (unsigned long )((void *)0)) {
        {
        tmp___97 = __dyc_funcallvar_41;
        }
        if (tmp___97 != 0) {
          goto no_window;
        }
        if ((unsigned long )fs->wl != (unsigned long )((void *)0)) {
          fs->wp = ((fs->wl)->window)->active;
        }
        goto __dyc_dummy_label;
      }
    }
    if ((unsigned long )window == (unsigned long )((void *)0)) {
      if ((unsigned long )pane != (unsigned long )((void *)0)) {
        {
        tmp___98 = __dyc_funcallvar_42;
        }
        if (tmp___98 != 0) {
          goto __dyc_dummy_label;
        }
        goto __dyc_dummy_label;
      }
    }
    {
    tmp___99 = __dyc_funcallvar_43;
    }
    if (tmp___99 != 0) {
      goto no_window;
    }
    {
    tmp___100 = __dyc_funcallvar_44;
    }
    if (tmp___100 != 0) {
      goto __dyc_dummy_label;
    }
    goto __dyc_dummy_label;
  }
  if ((unsigned long )window != (unsigned long )((void *)0)) {
    if ((unsigned long )pane != (unsigned long )((void *)0)) {
      {
      tmp___101 = __dyc_funcallvar_45;
      }
      if (tmp___101 != 0) {
        goto no_window;
      }
      {
      tmp___102 = __dyc_funcallvar_46;
      }
      if (tmp___102 != 0) {
        goto __dyc_dummy_label;
      }
      goto __dyc_dummy_label;
    }
  }
  if ((unsigned long )window != (unsigned long )((void *)0)) {
    if ((unsigned long )pane == (unsigned long )((void *)0)) {
      {
      tmp___103 = __dyc_funcallvar_47;
      }
      if (tmp___103 != 0) {
        goto no_window;
      }
      if ((unsigned long )fs->wl != (unsigned long )((void *)0)) {
        fs->wp = ((fs->wl)->window)->active;
      }
      goto __dyc_dummy_label;
    }
  }
  if ((unsigned long )window == (unsigned long )((void *)0)) {
    if ((unsigned long )pane != (unsigned long )((void *)0)) {
      {
      tmp___104 = __dyc_funcallvar_48;
      }
      if (tmp___104 != 0) {
        goto __dyc_dummy_label;
      }
      goto __dyc_dummy_label;
    }
  }

  if (flags & 4) {
    fs->idx = -1;
  }
  goto __dyc_dummy_label;
  fs->current = (struct cmd_find_state *)((void *)0);


  if (flags & 64) {
    goto __dyc_dummy_label;
  }
  goto __dyc_dummy_label;
  fs->current = (struct cmd_find_state *)((void *)0);


  goto __dyc_dummy_label;
  no_session: 
  if (~ flags & 2) {
    {

    }
  }
  goto __dyc_dummy_label;
  no_window: 
  if (~ flags & 2) {
    {

    }
  }
  goto __dyc_dummy_label;
  __dyc_dummy_label:  ;
  __dyc_print_ptr__comp_157mouse_event(m);
  __dyc_print_ptr__char(period);
  __dyc_printpre_byte(window_only);
  __dyc_printpre_byte(pane_only);
  __dyc_print_ptr__char(tmp___1);
  __dyc_print_ptr__comp_143client(tmp___2);
  __dyc_print_ptr__comp_145cmd_find_state(tmp___4);
  __dyc_printpre_byte(__s1_len);
  __dyc_printpre_byte(__s2_len);
  __dyc_printpre_byte(__s1_len___0);
  __dyc_printpre_byte(__s2_len___0);
  __dyc_printpre_byte(__s1_len___1);
  __dyc_printpre_byte(__s2_len___1);
  __dyc_printpre_byte(__s1_len___2);
  __dyc_printpre_byte(__s2_len___2);
  __dyc_print_ptr__char(tmp___90);
  __dyc_print_ptr__char(tmp___91);
  __dyc_print_ptr__char(tmp___92);
  __dyc_print_ptr__char(tmp___93);
  __dyc_print_ptr__char(tmp___94);
  __dyc_print_ptr__char(tmp___95);
}
}
