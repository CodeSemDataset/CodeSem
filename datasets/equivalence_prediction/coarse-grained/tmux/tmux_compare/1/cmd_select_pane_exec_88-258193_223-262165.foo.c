#include "../../include/dycfoo.h"
#include "../../include/cmd-select-pane.i.hd.c.h"
void __dyc_foo(void) 
{ struct cmd_find_state marked_pane ;
  struct cmd_entry cmd_last_pane_entry ;
  struct cmd_entry  const  *entry ;
  struct cmd_find_state *current ;
  struct cmd_find_state *tmp___1 ;
  struct cmd_find_state *target ;
  struct cmd_find_state *tmp___2 ;
  struct client *c ;
  struct client *tmp___3 ;
  struct winlink *wl ;
  struct window *w ;
  struct session *s ;
  struct window_pane *wp ;
  struct window_pane *activewp ;
  struct window_pane *lastwp ;
  struct window_pane *markedwp ;
  struct options *oo ;
  char *title ;
  char const   *style ;
  struct options_entry *o ;
  u_int tmp___4 ;
  int tmp___5 ;
  int tmp___6 ;
  int tmp___7 ;
  int tmp___8 ;
  int tmp___9 ;
  int tmp___10 ;
  int tmp___11 ;
  int tmp___12 ;
  int tmp___13 ;
  int tmp___14 ;
  int tmp___15 ;
  int tmp___16 ;
  int tmp___17 ;
  int tmp___18 ;
  char const   *tmp___19 ;
  int tmp___20 ;
  int tmp___21 ;
  int tmp___22 ;
  int tmp___23 ;
  int tmp___24 ;
  int tmp___25 ;
  int tmp___26 ;
  char const   *tmp___27 ;
  int tmp___28 ;
  int tmp___29 ;
  int tmp___30 ;
  int tmp___31 ;
  struct cmd_find_state *__dyc_funcallvar_4 ;
  struct client *__dyc_funcallvar_5 ;
  int __dyc_funcallvar_6 ;
  u_int __dyc_funcallvar_7 ;
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
  char const   *__dyc_funcallvar_21 ;
  struct options_entry *__dyc_funcallvar_22 ;
  int __dyc_funcallvar_23 ;
  char const   *__dyc_funcallvar_24 ;
  int __dyc_funcallvar_25 ;
  struct window_pane *__dyc_funcallvar_26 ;
  int __dyc_funcallvar_27 ;
  struct window_pane *__dyc_funcallvar_28 ;
  int __dyc_funcallvar_29 ;
  struct window_pane *__dyc_funcallvar_30 ;
  int __dyc_funcallvar_31 ;
  struct window_pane *__dyc_funcallvar_32 ;
  int __dyc_funcallvar_33 ;
  int __dyc_funcallvar_34 ;
  int __dyc_funcallvar_35 ;
  char const   *__dyc_funcallvar_36 ;
  char *__dyc_funcallvar_37 ;
  int __dyc_funcallvar_38 ;
  struct window_pane *__dyc_funcallvar_39 ;
  int __dyc_funcallvar_40 ;
  int __dyc_funcallvar_41 ;

  {
  marked_pane = __dyc_read_comp_145cmd_find_state();
  cmd_last_pane_entry = (struct cmd_entry  const  )__dyc_read_comp_247cmd_entry();
  entry = (struct cmd_entry  const  *)__dyc_read_ptr__comp_247cmd_entry();
  tmp___1 = __dyc_read_ptr__comp_145cmd_find_state();
  __dyc_funcallvar_4 = __dyc_read_ptr__comp_145cmd_find_state();
  __dyc_funcallvar_5 = __dyc_read_ptr__comp_143client();
  __dyc_funcallvar_6 = __dyc_readpre_byte();
  __dyc_funcallvar_7 = (u_int )__dyc_readpre_byte();
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
  __dyc_funcallvar_21 = (char const   *)__dyc_read_ptr__char();
  __dyc_funcallvar_22 = (struct options_entry *)__dyc_read_ptr__comp_160options_entry();
  __dyc_funcallvar_23 = __dyc_readpre_byte();
  __dyc_funcallvar_24 = (char const   *)__dyc_read_ptr__char();
  __dyc_funcallvar_25 = __dyc_readpre_byte();
  __dyc_funcallvar_26 = __dyc_read_ptr__comp_193window_pane();
  __dyc_funcallvar_27 = __dyc_readpre_byte();
  __dyc_funcallvar_28 = __dyc_read_ptr__comp_193window_pane();
  __dyc_funcallvar_29 = __dyc_readpre_byte();
  __dyc_funcallvar_30 = __dyc_read_ptr__comp_193window_pane();
  __dyc_funcallvar_31 = __dyc_readpre_byte();
  __dyc_funcallvar_32 = __dyc_read_ptr__comp_193window_pane();
  __dyc_funcallvar_33 = __dyc_readpre_byte();
  __dyc_funcallvar_34 = __dyc_readpre_byte();
  __dyc_funcallvar_35 = __dyc_readpre_byte();
  __dyc_funcallvar_36 = (char const   *)__dyc_read_ptr__char();
  __dyc_funcallvar_37 = __dyc_read_ptr__char();
  __dyc_funcallvar_38 = __dyc_readpre_byte();
  __dyc_funcallvar_39 = __dyc_read_ptr__comp_193window_pane();
  __dyc_funcallvar_40 = __dyc_readpre_byte();
  __dyc_funcallvar_41 = __dyc_readpre_byte();
  current = 0;
  target = 0;
  tmp___2 = 0;
  c = 0;
  tmp___3 = 0;
  wl = 0;
  w = 0;
  s = 0;
  wp = 0;
  activewp = 0;
  lastwp = 0;
  markedwp = 0;
  oo = 0;
  title = 0;
  style = 0;
  o = 0;
  tmp___4 = 0;
  tmp___5 = 0;
  tmp___6 = 0;
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
  tmp___19 = 0;
  tmp___20 = 0;
  tmp___21 = 0;
  tmp___22 = 0;
  tmp___23 = 0;
  tmp___24 = 0;
  tmp___25 = 0;
  tmp___26 = 0;
  tmp___27 = 0;
  tmp___28 = 0;
  tmp___29 = 0;
  tmp___30 = 0;
  tmp___31 = 0;
  current = tmp___1;
  tmp___2 = __dyc_funcallvar_4;
  target = tmp___2;
  tmp___3 = __dyc_funcallvar_5;
  c = tmp___3;
  wl = target->wl;
  w = wl->window;
  s = target->s;
  wp = target->wp;
  oo = wp->options;
  if ((unsigned long )entry == (unsigned long )(& cmd_last_pane_entry)) {
    goto _L;
  } else {
    {
    tmp___11 = __dyc_funcallvar_6;
    }
    if (tmp___11) {
      _L:  
      lastwp = w->last;
      if ((unsigned long )lastwp == (unsigned long )((void *)0)) {
        {
        tmp___4 = __dyc_funcallvar_7;
        }
        if (tmp___4 == 2U) {
          lastwp = *(((struct window_panes *)(w->active)->entry.tqe_prev)->tqh_last);
          if ((unsigned long )lastwp == (unsigned long )((void *)0)) {
            lastwp = (w->active)->entry.tqe_next;
          }
        }
      }
      if ((unsigned long )lastwp == (unsigned long )((void *)0)) {
        {

        }
        goto __dyc_dummy_label;
      }
      {
      tmp___10 = __dyc_funcallvar_8;
      }
      if (tmp___10) {
        {
        lastwp->flags &= -65;


        }
      } else {
        {
        tmp___9 = __dyc_funcallvar_9;
        }
        if (tmp___9) {
          {
          lastwp->flags |= 64;


          }
        } else {
          {
          tmp___5 = __dyc_funcallvar_10;
          tmp___6 = __dyc_funcallvar_11;
          }
          if (tmp___6) {
            {

            }
          }
          {

          tmp___7 = __dyc_funcallvar_12;
          }
          if (tmp___7) {
            {


            }
          }
          {
          tmp___8 = __dyc_funcallvar_13;
          }
          if (tmp___8) {
            {

            }
          }
        }
      }
      goto __dyc_dummy_label;
    }
  }
  tmp___17 = __dyc_funcallvar_14;
  if (tmp___17) {
    goto _L___0;
  } else {
    {
    tmp___18 = __dyc_funcallvar_15;
    }
    if (tmp___18) {
      _L___0:  
      {
      tmp___12 = __dyc_funcallvar_16;
      }
      if (tmp___12) {
        {
        tmp___13 = __dyc_funcallvar_17;
        }
        if (! tmp___13) {
          goto __dyc_dummy_label;
        }
      }
      {
      tmp___14 = __dyc_funcallvar_18;
      }
      if (tmp___14) {
        lastwp = marked_pane.wp;
      } else {
        lastwp = (struct window_pane *)((void *)0);
      }
      {
      tmp___15 = __dyc_funcallvar_19;
      }
      if (tmp___15) {
        {

        }
      } else {
        {
        tmp___16 = __dyc_funcallvar_20;
        }
        if (tmp___16) {
          {

          }
        } else {
          {

          }
        }
      }
      markedwp = marked_pane.wp;
      if ((unsigned long )lastwp != (unsigned long )((void *)0)) {
        {


        }
      }
      if ((unsigned long )markedwp != (unsigned long )((void *)0)) {
        {


        }
      }
      goto __dyc_dummy_label;
    }
  }
  style = __dyc_funcallvar_21;
  if ((unsigned long )style != (unsigned long )((void *)0)) {
    {
    o = __dyc_funcallvar_22;
    }
    if ((unsigned long )o == (unsigned long )((void *)0)) {
      {

      }
      goto __dyc_dummy_label;
    }
    {

    wp->flags |= 4097;
    }
  }
  tmp___20 = __dyc_funcallvar_23;
  if (tmp___20) {
    {
    tmp___19 = __dyc_funcallvar_24;

    }
    goto __dyc_dummy_label;
  }
  tmp___24 = __dyc_funcallvar_25;
  if (tmp___24) {
    {

    wp = __dyc_funcallvar_26;

    }
  } else {
    {
    tmp___23 = __dyc_funcallvar_27;
    }
    if (tmp___23) {
      {

      wp = __dyc_funcallvar_28;

      }
    } else {
      {
      tmp___22 = __dyc_funcallvar_29;
      }
      if (tmp___22) {
        {

        wp = __dyc_funcallvar_30;

        }
      } else {
        {
        tmp___21 = __dyc_funcallvar_31;
        }
        if (tmp___21) {
          {

          wp = __dyc_funcallvar_32;

          }
        }
      }
    }
  }
  if ((unsigned long )wp == (unsigned long )((void *)0)) {
    goto __dyc_dummy_label;
  }
  tmp___25 = __dyc_funcallvar_33;
  if (tmp___25) {
    {
    wp->flags &= -65;


    }
    goto __dyc_dummy_label;
  }
  tmp___26 = __dyc_funcallvar_34;
  if (tmp___26) {
    {
    wp->flags |= 64;


    }
    goto __dyc_dummy_label;
  }
  tmp___29 = __dyc_funcallvar_35;
  if (tmp___29) {
    {
    tmp___27 = __dyc_funcallvar_36;
    title = __dyc_funcallvar_37;
    tmp___28 = __dyc_funcallvar_38;
    }
    if (tmp___28) {
      {



      }
    }
    {

    }
    goto __dyc_dummy_label;
  }
  if ((unsigned long )c != (unsigned long )((void *)0)) {
    if ((unsigned long )c->session != (unsigned long )((void *)0)) {
      if ((unsigned long long )c->flags & 2147483648ULL) {
        {
        activewp = __dyc_funcallvar_39;
        }
      } else {
        activewp = w->active;
      }
    } else {
      activewp = w->active;
    }
  } else {
    activewp = w->active;
  }
  if ((unsigned long )wp == (unsigned long )activewp) {
    goto __dyc_dummy_label;
  }
  tmp___30 = __dyc_funcallvar_40;
  tmp___31 = __dyc_funcallvar_41;
  if (tmp___31) {
    {

    }
  }
  __dyc_dummy_label:  ;
  __dyc_print_ptr__comp_145cmd_find_state(current);
  __dyc_print_ptr__comp_143client(c);
  __dyc_print_ptr__comp_204window(w);
  __dyc_print_ptr__comp_164session(s);
  __dyc_print_ptr__comp_158options(oo);
  __dyc_print_ptr__char(title);
  __dyc_printpre_byte(tmp___5);
  __dyc_print_ptr__char(tmp___19);
  __dyc_print_ptr__char(tmp___27);
  __dyc_printpre_byte(tmp___30);
}
}
