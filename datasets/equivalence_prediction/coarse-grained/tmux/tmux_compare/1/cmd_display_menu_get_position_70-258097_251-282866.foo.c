#include "../../include/dycfoo.h"
#include "../../include/cmd-display-menu.i.hd.c.h"
void __dyc_foo(void) 
{ struct tty *tty ;
  struct cmd_find_state *target ;
  struct key_event *event ;
  struct key_event *tmp___0 ;
  struct session *s ;
  struct winlink *wl ;
  struct window_pane *wp ;
  struct style_ranges *ranges ;
  struct style_range *sr ;
  char const   *xp ;
  char const   *yp ;
  char *p ;
  int top ;
  u_int line ;
  u_int ox ;
  u_int oy ;
  u_int lines ;
  u_int position ;
  long n ;
  struct format_tree *ft ;
  long long tmp___1 ;
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
  size_t __s1_len___5 ;
  size_t __s2_len___5 ;
  int tmp___119 ;
  int tmp___124 ;
  int tmp___125 ;
  int tmp___126 ;
  int tmp___127 ;
  size_t __s1_len___6 ;
  size_t __s2_len___6 ;
  int tmp___137 ;
  int tmp___142 ;
  int tmp___143 ;
  int tmp___144 ;
  int tmp___145 ;
  size_t __s1_len___7 ;
  size_t __s2_len___7 ;
  int tmp___155 ;
  int tmp___160 ;
  int tmp___161 ;
  int tmp___162 ;
  int tmp___163 ;
  size_t __s1_len___8 ;
  size_t __s2_len___8 ;
  int tmp___173 ;
  int tmp___178 ;
  int tmp___179 ;
  int tmp___180 ;
  int tmp___181 ;
  struct client *tc ;
  u_int *px ;
  u_int *py ;
  u_int w ;
  u_int h ;
  struct format_tree *__dyc_funcallvar_3 ;
  int __dyc_funcallvar_4 ;
  u_int __dyc_funcallvar_5 ;
  long long __dyc_funcallvar_6 ;
  char const   *__dyc_funcallvar_7 ;
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
  char *__dyc_funcallvar_33 ;
  long __dyc_funcallvar_34 ;
  char const   *__dyc_funcallvar_35 ;
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
  int __dyc_funcallvar_50 ;
  int __dyc_funcallvar_51 ;
  int __dyc_funcallvar_52 ;
  int __dyc_funcallvar_53 ;
  int __dyc_funcallvar_54 ;
  int __dyc_funcallvar_55 ;
  int __dyc_funcallvar_56 ;
  int __dyc_funcallvar_57 ;
  int __dyc_funcallvar_58 ;
  int __dyc_funcallvar_59 ;
  int __dyc_funcallvar_60 ;
  char *__dyc_funcallvar_61 ;
  long __dyc_funcallvar_62 ;

  {
  tty = __dyc_read_ptr__comp_235tty();
  target = __dyc_read_ptr__comp_145cmd_find_state();
  tmp___0 = __dyc_read_ptr__comp_231key_event();
  ox = (u_int )__dyc_readpre_byte();
  oy = (u_int )__dyc_readpre_byte();
  tc = __dyc_read_ptr__comp_143client();
  px = __dyc_read_ptr__typdef_u_int();
  py = __dyc_read_ptr__typdef_u_int();
  w = (u_int )__dyc_readpre_byte();
  h = (u_int )__dyc_readpre_byte();
  __dyc_funcallvar_3 = (struct format_tree *)__dyc_read_ptr__comp_153format_tree();
  __dyc_funcallvar_4 = __dyc_readpre_byte();
  __dyc_funcallvar_5 = (u_int )__dyc_readpre_byte();
  __dyc_funcallvar_6 = (long long )__dyc_readpre_byte();
  __dyc_funcallvar_7 = (char const   *)__dyc_read_ptr__char();
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
  __dyc_funcallvar_33 = __dyc_read_ptr__char();
  __dyc_funcallvar_34 = (long )__dyc_readpre_byte();
  __dyc_funcallvar_35 = (char const   *)__dyc_read_ptr__char();
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
  __dyc_funcallvar_50 = __dyc_readpre_byte();
  __dyc_funcallvar_51 = __dyc_readpre_byte();
  __dyc_funcallvar_52 = __dyc_readpre_byte();
  __dyc_funcallvar_53 = __dyc_readpre_byte();
  __dyc_funcallvar_54 = __dyc_readpre_byte();
  __dyc_funcallvar_55 = __dyc_readpre_byte();
  __dyc_funcallvar_56 = __dyc_readpre_byte();
  __dyc_funcallvar_57 = __dyc_readpre_byte();
  __dyc_funcallvar_58 = __dyc_readpre_byte();
  __dyc_funcallvar_59 = __dyc_readpre_byte();
  __dyc_funcallvar_60 = __dyc_readpre_byte();
  __dyc_funcallvar_61 = __dyc_read_ptr__char();
  __dyc_funcallvar_62 = (long )__dyc_readpre_byte();
  event = 0;
  s = 0;
  wl = 0;
  wp = 0;
  ranges = 0;
  sr = 0;
  xp = 0;
  yp = 0;
  p = 0;
  top = 0;
  line = 0;
  lines = 0;
  position = 0;
  n = 0;
  ft = 0;
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
  __s1_len___5 = 0;
  __s2_len___5 = 0;
  tmp___119 = 0;
  tmp___124 = 0;
  tmp___125 = 0;
  tmp___126 = 0;
  tmp___127 = 0;
  __s1_len___6 = 0;
  __s2_len___6 = 0;
  tmp___137 = 0;
  tmp___142 = 0;
  tmp___143 = 0;
  tmp___144 = 0;
  tmp___145 = 0;
  __s1_len___7 = 0;
  __s2_len___7 = 0;
  tmp___155 = 0;
  tmp___160 = 0;
  tmp___161 = 0;
  tmp___162 = 0;
  tmp___163 = 0;
  __s1_len___8 = 0;
  __s2_len___8 = 0;
  tmp___173 = 0;
  tmp___178 = 0;
  tmp___179 = 0;
  tmp___180 = 0;
  tmp___181 = 0;
  event = tmp___0;
  s = tc->session;
  wl = target->wl;
  wp = target->wp;
  ranges = (struct style_ranges *)((void *)0);
  sr = (struct style_range *)((void *)0);
  if (w > tty->sx) {
    goto __dyc_dummy_label;
  } else {
    if (h > tty->sy) {
      goto __dyc_dummy_label;
    }
  }
  ft = __dyc_funcallvar_3;
  if (event->m.valid) {
    {


    }
  }
  top = __dyc_funcallvar_4;
  if (top != -1) {
    {
    lines = __dyc_funcallvar_5;
    }
    if (top == 0) {
      top = (int )lines;
    } else {
      top = 0;
    }
    {
    tmp___1 = __dyc_funcallvar_6;
    position = (unsigned int )tmp___1;
    line = 0U;
    }
    {
    while (1) {
      while_0_continue:  ;
      if (! (line < lines)) {
        goto while_0_break;
      }
      ranges = & tc->status.entries[line].ranges;
      sr = ranges->tqh_first;
      {
      while (1) {
        while_1_continue:  ;
        if (! ((unsigned long )sr != (unsigned long )((void *)0))) {
          goto while_1_break;
        }
        if ((int )sr->type != 3) {
          goto __Cont;
        }
        if (sr->argument == (unsigned int )wl->idx) {
          goto while_1_break;
        }
        __Cont:  
        sr = sr->entry.tqe_next;
      }
      while_1_break:  ;
      }
      if ((unsigned long )sr != (unsigned long )((void *)0)) {
        goto while_0_break;
      }
      line ++;
    }
    while_0_break:  ;
    }
    if (line == lines) {
      ranges = & tc->status.entries[0].ranges;
    }
    if ((unsigned long )sr != (unsigned long )((void *)0)) {
      {

      }
      if (position == 0U) {
        {

        }
      } else {
        {

        }
      }
    }
    if (position == 0U) {
      {

      }
    } else {
      {

      }
    }
  } else {
    top = 0;
  }


  n = (long )(tty->sx - 1U) / 2L - (long )(w / 2U);
  if (n < 0L) {
    {

    }
  } else {
    {

    }
  }
  n = (long )((tty->sy - 1U) / 2U + h / 2U);
  if (n >= (long )tty->sy) {
    {

    }
  } else {
    {

    }
  }
  if (event->m.valid) {
    n = (long )event->m.x - (long )(w / 2U);
    if (n < 0L) {
      {

      }
    } else {
      {

      }
    }
    n = (long )(event->m.y - h / 2U);
    if (n + (long )h >= (long )tty->sy) {
      {

      }
    } else {
      {

      }
    }
    n = (long )event->m.y + (long )h;
    if (n + (long )h >= (long )tty->sy) {
      {

      }
    } else {
      {

      }
    }
    n = (long )(event->m.y - h);
    if (n < 0L) {
      {

      }
    } else {
      {

      }
    }
  }

  n = (long )((((u_int )top + wp->yoff) - oy) + h);
  if (n >= (long )tty->sy) {
    {

    }
  } else {
    {

    }
  }


  n = (((long )wp->xoff + (long )wp->sx) - (long )ox) - (long )w;
  if (n < 0L) {
    {

    }
  } else {
    {

    }
  }
  xp = __dyc_funcallvar_7;
  if ((unsigned long )xp == (unsigned long )((void *)0)) {
    xp = "#{popup_centre_x}";
  } else {
    if (0) {
      {
      tmp___89 = __dyc_funcallvar_8;
      __s1_len___3 = (unsigned long )tmp___89;
      tmp___90 = __dyc_funcallvar_9;
      __s2_len___3 = (unsigned long )tmp___90;
      }
      if (! ((unsigned long )((void const   *)(xp + 1)) - (unsigned long )((void const   *)xp) == 1UL)) {
        goto _L___8;
      } else {
        if (__s1_len___3 >= 4UL) {
          _L___8:  
          if (! ((unsigned long )((void const   *)("C" + 1)) - (unsigned long )((void const   *)"C") == 1UL)) {
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
        tmp___83 = __dyc_funcallvar_10;
        }
      } else {
        {
        tmp___88 = __dyc_funcallvar_11;
        tmp___83 = tmp___88;
        }
      }
    } else {
      {
      tmp___88 = __dyc_funcallvar_12;
      tmp___83 = tmp___88;
      }
    }
    if (tmp___83 == 0) {
      xp = "#{popup_centre_x}";
    } else {
      if (0) {
        {
        tmp___71 = __dyc_funcallvar_13;
        __s1_len___2 = (unsigned long )tmp___71;
        tmp___72 = __dyc_funcallvar_14;
        __s2_len___2 = (unsigned long )tmp___72;
        }
        if (! ((unsigned long )((void const   *)(xp + 1)) - (unsigned long )((void const   *)xp) == 1UL)) {
          goto _L___6;
        } else {
          if (__s1_len___2 >= 4UL) {
            _L___6:  
            if (! ((unsigned long )((void const   *)("R" + 1)) - (unsigned long )((void const   *)"R") == 1UL)) {
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
          tmp___65 = __dyc_funcallvar_15;
          }
        } else {
          {
          tmp___70 = __dyc_funcallvar_16;
          tmp___65 = tmp___70;
          }
        }
      } else {
        {
        tmp___70 = __dyc_funcallvar_17;
        tmp___65 = tmp___70;
        }
      }
      if (tmp___65 == 0) {
        xp = "#{popup_pane_right}";
      } else {
        if (0) {
          {
          tmp___53 = __dyc_funcallvar_18;
          __s1_len___1 = (unsigned long )tmp___53;
          tmp___54 = __dyc_funcallvar_19;
          __s2_len___1 = (unsigned long )tmp___54;
          }
          if (! ((unsigned long )((void const   *)(xp + 1)) - (unsigned long )((void const   *)xp) == 1UL)) {
            goto _L___4;
          } else {
            if (__s1_len___1 >= 4UL) {
              _L___4:  
              if (! ((unsigned long )((void const   *)("P" + 1)) - (unsigned long )((void const   *)"P") == 1UL)) {
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
            tmp___47 = __dyc_funcallvar_20;
            }
          } else {
            {
            tmp___52 = __dyc_funcallvar_21;
            tmp___47 = tmp___52;
            }
          }
        } else {
          {
          tmp___52 = __dyc_funcallvar_22;
          tmp___47 = tmp___52;
          }
        }
        if (tmp___47 == 0) {
          xp = "#{popup_pane_left}";
        } else {
          if (0) {
            {
            tmp___35 = __dyc_funcallvar_23;
            __s1_len___0 = (unsigned long )tmp___35;
            tmp___36 = __dyc_funcallvar_24;
            __s2_len___0 = (unsigned long )tmp___36;
            }
            if (! ((unsigned long )((void const   *)(xp + 1)) - (unsigned long )((void const   *)xp) == 1UL)) {
              goto _L___2;
            } else {
              if (__s1_len___0 >= 4UL) {
                _L___2:  
                if (! ((unsigned long )((void const   *)("M" + 1)) - (unsigned long )((void const   *)"M") == 1UL)) {
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
              tmp___29 = __dyc_funcallvar_25;
              }
            } else {
              {
              tmp___34 = __dyc_funcallvar_26;
              tmp___29 = tmp___34;
              }
            }
          } else {
            {
            tmp___34 = __dyc_funcallvar_27;
            tmp___29 = tmp___34;
            }
          }
          if (tmp___29 == 0) {
            xp = "#{popup_mouse_centre_x}";
          } else {
            if (0) {
              {
              tmp___17 = __dyc_funcallvar_28;
              __s1_len = (unsigned long )tmp___17;
              tmp___18 = __dyc_funcallvar_29;
              __s2_len = (unsigned long )tmp___18;
              }
              if (! ((unsigned long )((void const   *)(xp + 1)) - (unsigned long )((void const   *)xp) == 1UL)) {
                goto _L___0;
              } else {
                if (__s1_len >= 4UL) {
                  _L___0:  
                  if (! ((unsigned long )((void const   *)("W" + 1)) - (unsigned long )((void const   *)"W") == 1UL)) {
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
                tmp___11 = __dyc_funcallvar_30;
                }
              } else {
                {
                tmp___16 = __dyc_funcallvar_31;
                tmp___11 = tmp___16;
                }
              }
            } else {
              {
              tmp___16 = __dyc_funcallvar_32;
              tmp___11 = tmp___16;
              }
            }
            if (tmp___11 == 0) {
              xp = "#{popup_window_status_line_x}";
            }
          }
        }
      }
    }
  }
  p = __dyc_funcallvar_33;
  n = __dyc_funcallvar_34;
  if (n + (long )w >= (long )tty->sx) {
    n = (long )(tty->sx - w);
  } else {
    if (n < 0L) {
      n = 0L;
    }
  }
  *px = (unsigned int )n;


  yp = __dyc_funcallvar_35;
  if ((unsigned long )yp == (unsigned long )((void *)0)) {
    yp = "#{popup_centre_y}";
  } else {
    if (0) {
      {
      tmp___179 = __dyc_funcallvar_36;
      __s1_len___8 = (unsigned long )tmp___179;
      tmp___180 = __dyc_funcallvar_37;
      __s2_len___8 = (unsigned long )tmp___180;
      }
      if (! ((unsigned long )((void const   *)(yp + 1)) - (unsigned long )((void const   *)yp) == 1UL)) {
        goto _L___18;
      } else {
        if (__s1_len___8 >= 4UL) {
          _L___18:  
          if (! ((unsigned long )((void const   *)("C" + 1)) - (unsigned long )((void const   *)"C") == 1UL)) {
            tmp___181 = 1;
          } else {
            if (__s2_len___8 >= 4UL) {
              tmp___181 = 1;
            } else {
              tmp___181 = 0;
            }
          }
        } else {
          tmp___181 = 0;
        }
      }
      if (tmp___181) {
        {
        tmp___173 = __dyc_funcallvar_38;
        }
      } else {
        {
        tmp___178 = __dyc_funcallvar_39;
        tmp___173 = tmp___178;
        }
      }
    } else {
      {
      tmp___178 = __dyc_funcallvar_40;
      tmp___173 = tmp___178;
      }
    }
    if (tmp___173 == 0) {
      yp = "#{popup_centre_y}";
    } else {
      if (0) {
        {
        tmp___161 = __dyc_funcallvar_41;
        __s1_len___7 = (unsigned long )tmp___161;
        tmp___162 = __dyc_funcallvar_42;
        __s2_len___7 = (unsigned long )tmp___162;
        }
        if (! ((unsigned long )((void const   *)(yp + 1)) - (unsigned long )((void const   *)yp) == 1UL)) {
          goto _L___16;
        } else {
          if (__s1_len___7 >= 4UL) {
            _L___16:  
            if (! ((unsigned long )((void const   *)("P" + 1)) - (unsigned long )((void const   *)"P") == 1UL)) {
              tmp___163 = 1;
            } else {
              if (__s2_len___7 >= 4UL) {
                tmp___163 = 1;
              } else {
                tmp___163 = 0;
              }
            }
          } else {
            tmp___163 = 0;
          }
        }
        if (tmp___163) {
          {
          tmp___155 = __dyc_funcallvar_43;
          }
        } else {
          {
          tmp___160 = __dyc_funcallvar_44;
          tmp___155 = tmp___160;
          }
        }
      } else {
        {
        tmp___160 = __dyc_funcallvar_45;
        tmp___155 = tmp___160;
        }
      }
      if (tmp___155 == 0) {
        yp = "#{popup_pane_bottom}";
      } else {
        if (0) {
          {
          tmp___143 = __dyc_funcallvar_46;
          __s1_len___6 = (unsigned long )tmp___143;
          tmp___144 = __dyc_funcallvar_47;
          __s2_len___6 = (unsigned long )tmp___144;
          }
          if (! ((unsigned long )((void const   *)(yp + 1)) - (unsigned long )((void const   *)yp) == 1UL)) {
            goto _L___14;
          } else {
            if (__s1_len___6 >= 4UL) {
              _L___14:  
              if (! ((unsigned long )((void const   *)("M" + 1)) - (unsigned long )((void const   *)"M") == 1UL)) {
                tmp___145 = 1;
              } else {
                if (__s2_len___6 >= 4UL) {
                  tmp___145 = 1;
                } else {
                  tmp___145 = 0;
                }
              }
            } else {
              tmp___145 = 0;
            }
          }
          if (tmp___145) {
            {
            tmp___137 = __dyc_funcallvar_48;
            }
          } else {
            {
            tmp___142 = __dyc_funcallvar_49;
            tmp___137 = tmp___142;
            }
          }
        } else {
          {
          tmp___142 = __dyc_funcallvar_50;
          tmp___137 = tmp___142;
          }
        }
        if (tmp___137 == 0) {
          yp = "#{popup_mouse_top}";
        } else {
          if (0) {
            {
            tmp___125 = __dyc_funcallvar_51;
            __s1_len___5 = (unsigned long )tmp___125;
            tmp___126 = __dyc_funcallvar_52;
            __s2_len___5 = (unsigned long )tmp___126;
            }
            if (! ((unsigned long )((void const   *)(yp + 1)) - (unsigned long )((void const   *)yp) == 1UL)) {
              goto _L___12;
            } else {
              if (__s1_len___5 >= 4UL) {
                _L___12:  
                if (! ((unsigned long )((void const   *)("S" + 1)) - (unsigned long )((void const   *)"S") == 1UL)) {
                  tmp___127 = 1;
                } else {
                  if (__s2_len___5 >= 4UL) {
                    tmp___127 = 1;
                  } else {
                    tmp___127 = 0;
                  }
                }
              } else {
                tmp___127 = 0;
              }
            }
            if (tmp___127) {
              {
              tmp___119 = __dyc_funcallvar_53;
              }
            } else {
              {
              tmp___124 = __dyc_funcallvar_54;
              tmp___119 = tmp___124;
              }
            }
          } else {
            {
            tmp___124 = __dyc_funcallvar_55;
            tmp___119 = tmp___124;
            }
          }
          if (tmp___119 == 0) {
            yp = "#{popup_status_line_y}";
          } else {
            if (0) {
              {
              tmp___107 = __dyc_funcallvar_56;
              __s1_len___4 = (unsigned long )tmp___107;
              tmp___108 = __dyc_funcallvar_57;
              __s2_len___4 = (unsigned long )tmp___108;
              }
              if (! ((unsigned long )((void const   *)(yp + 1)) - (unsigned long )((void const   *)yp) == 1UL)) {
                goto _L___10;
              } else {
                if (__s1_len___4 >= 4UL) {
                  _L___10:  
                  if (! ((unsigned long )((void const   *)("W" + 1)) - (unsigned long )((void const   *)"W") == 1UL)) {
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
                tmp___101 = __dyc_funcallvar_58;
                }
              } else {
                {
                tmp___106 = __dyc_funcallvar_59;
                tmp___101 = tmp___106;
                }
              }
            } else {
              {
              tmp___106 = __dyc_funcallvar_60;
              tmp___101 = tmp___106;
              }
            }
            if (tmp___101 == 0) {
              yp = "#{popup_window_status_line_y}";
            }
          }
        }
      }
    }
  }
  p = __dyc_funcallvar_61;
  n = __dyc_funcallvar_62;
  if (n < (long )h) {
    n = 0L;
  } else {
    n -= (long )h;
  }
  if (n + (long )h >= (long )tty->sy) {
    n = (long )(tty->sy - h);
  } else {
    if (n < 0L) {
      n = 0L;
    }
  }
  *py = (unsigned int )n;


  goto __dyc_dummy_label;
  __dyc_dummy_label:  ;
  __dyc_print_ptr__comp_231key_event(event);
  __dyc_print_ptr__comp_164session(s);
  __dyc_print_ptr__comp_168winlink(wl);
  __dyc_print_ptr__comp_193window_pane(wp);
  __dyc_print_ptr__comp_188style_ranges(ranges);
  __dyc_print_ptr__comp_186style_range(sr);
  __dyc_print_ptr__char(xp);
  __dyc_print_ptr__char(yp);
  __dyc_print_ptr__char(p);
  __dyc_print_ptr__comp_153format_tree(ft);
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
  __dyc_printpre_byte(__s1_len___5);
  __dyc_printpre_byte(__s2_len___5);
  __dyc_printpre_byte(__s1_len___6);
  __dyc_printpre_byte(__s2_len___6);
  __dyc_printpre_byte(__s1_len___7);
  __dyc_printpre_byte(__s2_len___7);
  __dyc_printpre_byte(__s1_len___8);
  __dyc_printpre_byte(__s2_len___8);
}
}
