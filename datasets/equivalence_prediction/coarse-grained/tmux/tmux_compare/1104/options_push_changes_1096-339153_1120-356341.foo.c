#include "../../include/dycfoo.h"
#include "../../include/options.i.hd.c.h"
void __dyc_foo(void) 
{ struct clients clients ;
  struct client *loop ;
  struct session *s ;
  struct window *w ;
  struct window_pane *wp ;
  int tmp___27 ;
  size_t __s1_len___1 ;
  size_t __s2_len___1 ;
  int tmp___45 ;
  int tmp___50 ;
  int tmp___51 ;
  int tmp___52 ;
  int tmp___53 ;
  size_t __s1_len___2 ;
  size_t __s2_len___2 ;
  int tmp___63 ;
  int tmp___68 ;
  int tmp___69 ;
  int tmp___70 ;
  int tmp___71 ;
  size_t __s1_len___3 ;
  size_t __s2_len___3 ;
  int tmp___81 ;
  int tmp___86 ;
  int tmp___87 ;
  int tmp___88 ;
  int tmp___89 ;
  size_t __s1_len___4 ;
  size_t __s2_len___4 ;
  int tmp___99 ;
  int tmp___104 ;
  int tmp___105 ;
  int tmp___106 ;
  int tmp___107 ;
  size_t __s1_len___5 ;
  size_t __s2_len___5 ;
  int tmp___117 ;
  int tmp___122 ;
  int tmp___123 ;
  int tmp___124 ;
  int tmp___125 ;
  size_t __s1_len___6 ;
  size_t __s2_len___6 ;
  int tmp___135 ;
  int tmp___140 ;
  int tmp___141 ;
  int tmp___142 ;
  int tmp___143 ;
  size_t __s1_len___7 ;
  size_t __s2_len___7 ;
  int tmp___153 ;
  int tmp___158 ;
  int tmp___159 ;
  int tmp___160 ;
  int tmp___161 ;
  char const   *name ;
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
  int __dyc_funcallvar_43 ;
  struct window_pane *__dyc_funcallvar_44 ;
  struct window_pane *__dyc_funcallvar_45 ;
  int __dyc_funcallvar_46 ;
  int __dyc_funcallvar_47 ;
  int __dyc_funcallvar_48 ;
  int __dyc_funcallvar_49 ;
  int __dyc_funcallvar_50 ;
  struct window *__dyc_funcallvar_51 ;
  struct window *__dyc_funcallvar_52 ;
  struct session *__dyc_funcallvar_53 ;
  struct session *__dyc_funcallvar_54 ;

  {
  clients = __dyc_read_comp_259clients();
  tmp___27 = __dyc_readpre_byte();
  name = (char const   *)__dyc_read_ptr__char();
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
  __dyc_funcallvar_43 = __dyc_readpre_byte();
  __dyc_funcallvar_44 = __dyc_read_ptr__comp_193window_pane();
  __dyc_funcallvar_45 = __dyc_read_ptr__comp_193window_pane();
  __dyc_funcallvar_46 = __dyc_readpre_byte();
  __dyc_funcallvar_47 = __dyc_readpre_byte();
  __dyc_funcallvar_48 = __dyc_readpre_byte();
  __dyc_funcallvar_49 = __dyc_readpre_byte();
  __dyc_funcallvar_50 = __dyc_readpre_byte();
  __dyc_funcallvar_51 = __dyc_read_ptr__comp_204window();
  __dyc_funcallvar_52 = __dyc_read_ptr__comp_204window();
  __dyc_funcallvar_53 = __dyc_read_ptr__comp_164session();
  __dyc_funcallvar_54 = __dyc_read_ptr__comp_164session();
  loop = 0;
  s = 0;
  w = 0;
  wp = 0;
  __s1_len___1 = 0;
  __s2_len___1 = 0;
  tmp___45 = 0;
  tmp___50 = 0;
  tmp___51 = 0;
  tmp___52 = 0;
  tmp___53 = 0;
  __s1_len___2 = 0;
  __s2_len___2 = 0;
  tmp___63 = 0;
  tmp___68 = 0;
  tmp___69 = 0;
  tmp___70 = 0;
  tmp___71 = 0;
  __s1_len___3 = 0;
  __s2_len___3 = 0;
  tmp___81 = 0;
  tmp___86 = 0;
  tmp___87 = 0;
  tmp___88 = 0;
  tmp___89 = 0;
  __s1_len___4 = 0;
  __s2_len___4 = 0;
  tmp___99 = 0;
  tmp___104 = 0;
  tmp___105 = 0;
  tmp___106 = 0;
  tmp___107 = 0;
  __s1_len___5 = 0;
  __s2_len___5 = 0;
  tmp___117 = 0;
  tmp___122 = 0;
  tmp___123 = 0;
  tmp___124 = 0;
  tmp___125 = 0;
  __s1_len___6 = 0;
  __s2_len___6 = 0;
  tmp___135 = 0;
  tmp___140 = 0;
  tmp___141 = 0;
  tmp___142 = 0;
  tmp___143 = 0;
  __s1_len___7 = 0;
  __s2_len___7 = 0;
  tmp___153 = 0;
  tmp___158 = 0;
  tmp___159 = 0;
  tmp___160 = 0;
  tmp___161 = 0;
  if (tmp___27 == 0) {
    loop = clients.tqh_first;
    {
    while (1) {
      while_142_continue:  ;
      if (! ((unsigned long )loop != (unsigned long )((void *)0))) {
        goto while_142_break;
      }
      {

      loop = loop->entry.tqe_next;
      }
    }
    while_142_break:  ;
    }
  }
  if (0) {
    {
    tmp___51 = __dyc_funcallvar_14;
    __s1_len___1 = (unsigned long )tmp___51;
    tmp___52 = __dyc_funcallvar_15;
    __s2_len___1 = (unsigned long )tmp___52;
    }
    if (! ((unsigned long )((void const   *)(name + 1)) - (unsigned long )((void const   *)name) == 1UL)) {
      goto _L___4;
    } else {
      if (__s1_len___1 >= 4UL) {
        _L___4:  
        if (! ((unsigned long )((void const   *)("user-keys" + 1)) - (unsigned long )((void const   *)"user-keys") == 1UL)) {
          tmp___53 = 1;
        } else {
          if (__s2_len___1 >= 4UL) {
            tmp___53 = 1;
          } else {
            tmp___53 = 0;
          }
        }
      } else {
        tmp___53 = 0;
      }
    }
    if (tmp___53) {
      {
      tmp___45 = __dyc_funcallvar_16;
      }
    } else {
      {
      tmp___50 = __dyc_funcallvar_17;
      tmp___45 = tmp___50;
      }
    }
  } else {
    {
    tmp___50 = __dyc_funcallvar_18;
    tmp___45 = tmp___50;
    }
  }
  if (tmp___45 == 0) {
    loop = clients.tqh_first;
    {
    while (1) {
      while_143_continue:  ;
      if (! ((unsigned long )loop != (unsigned long )((void *)0))) {
        goto while_143_break;
      }
      if (loop->tty.flags & 32) {
        {

        }
      }
      loop = loop->entry.tqe_next;
    }
    while_143_break:  ;
    }
  }
  if (0) {
    {
    tmp___69 = __dyc_funcallvar_19;
    __s1_len___2 = (unsigned long )tmp___69;
    tmp___70 = __dyc_funcallvar_20;
    __s2_len___2 = (unsigned long )tmp___70;
    }
    if (! ((unsigned long )((void const   *)(name + 1)) - (unsigned long )((void const   *)name) == 1UL)) {
      goto _L___6;
    } else {
      if (__s1_len___2 >= 4UL) {
        _L___6:  
        if (! ((unsigned long )((void const   *)("status" + 1)) - (unsigned long )((void const   *)"status") == 1UL)) {
          tmp___71 = 1;
        } else {
          if (__s2_len___2 >= 4UL) {
            tmp___71 = 1;
          } else {
            tmp___71 = 0;
          }
        }
      } else {
        tmp___71 = 0;
      }
    }
    if (tmp___71) {
      {
      tmp___63 = __dyc_funcallvar_21;
      }
    } else {
      {
      tmp___68 = __dyc_funcallvar_22;
      tmp___63 = tmp___68;
      }
    }
  } else {
    {
    tmp___68 = __dyc_funcallvar_23;
    tmp___63 = tmp___68;
    }
  }
  if (tmp___63 == 0) {
    {

    }
  } else {
    if (0) {
      {
      tmp___87 = __dyc_funcallvar_24;
      __s1_len___3 = (unsigned long )tmp___87;
      tmp___88 = __dyc_funcallvar_25;
      __s2_len___3 = (unsigned long )tmp___88;
      }
      if (! ((unsigned long )((void const   *)(name + 1)) - (unsigned long )((void const   *)name) == 1UL)) {
        goto _L___8;
      } else {
        if (__s1_len___3 >= 4UL) {
          _L___8:  
          if (! ((unsigned long )((void const   *)("status-interval" + 1)) - (unsigned long )((void const   *)"status-interval") == 1UL)) {
            tmp___89 = 1;
          } else {
            if (__s2_len___3 >= 4UL) {
              tmp___89 = 1;
            } else {
              tmp___89 = 0;
            }
          }
        } else {
          tmp___89 = 0;
        }
      }
      if (tmp___89) {
        {
        tmp___81 = __dyc_funcallvar_26;
        }
      } else {
        {
        tmp___86 = __dyc_funcallvar_27;
        tmp___81 = tmp___86;
        }
      }
    } else {
      {
      tmp___86 = __dyc_funcallvar_28;
      tmp___81 = tmp___86;
      }
    }
    if (tmp___81 == 0) {
      {

      }
    }
  }
  if (0) {
    {
    tmp___105 = __dyc_funcallvar_29;
    __s1_len___4 = (unsigned long )tmp___105;
    tmp___106 = __dyc_funcallvar_30;
    __s2_len___4 = (unsigned long )tmp___106;
    }
    if (! ((unsigned long )((void const   *)(name + 1)) - (unsigned long )((void const   *)name) == 1UL)) {
      goto _L___10;
    } else {
      if (__s1_len___4 >= 4UL) {
        _L___10:  
        if (! ((unsigned long )((void const   *)("monitor-silence" + 1)) - (unsigned long )((void const   *)"monitor-silence") == 1UL)) {
          tmp___107 = 1;
        } else {
          if (__s2_len___4 >= 4UL) {
            tmp___107 = 1;
          } else {
            tmp___107 = 0;
          }
        }
      } else {
        tmp___107 = 0;
      }
    }
    if (tmp___107) {
      {
      tmp___99 = __dyc_funcallvar_31;
      }
    } else {
      {
      tmp___104 = __dyc_funcallvar_32;
      tmp___99 = tmp___104;
      }
    }
  } else {
    {
    tmp___104 = __dyc_funcallvar_33;
    tmp___99 = tmp___104;
    }
  }
  if (tmp___99 == 0) {
    {

    }
  }
  if (0) {
    {
    tmp___123 = __dyc_funcallvar_34;
    __s1_len___5 = (unsigned long )tmp___123;
    tmp___124 = __dyc_funcallvar_35;
    __s2_len___5 = (unsigned long )tmp___124;
    }
    if (! ((unsigned long )((void const   *)(name + 1)) - (unsigned long )((void const   *)name) == 1UL)) {
      goto _L___12;
    } else {
      if (__s1_len___5 >= 4UL) {
        _L___12:  
        if (! ((unsigned long )((void const   *)("window-style" + 1)) - (unsigned long )((void const   *)"window-style") == 1UL)) {
          tmp___125 = 1;
        } else {
          if (__s2_len___5 >= 4UL) {
            tmp___125 = 1;
          } else {
            tmp___125 = 0;
          }
        }
      } else {
        tmp___125 = 0;
      }
    }
    if (tmp___125) {
      {
      tmp___117 = __dyc_funcallvar_36;
      }
    } else {
      {
      tmp___122 = __dyc_funcallvar_37;
      tmp___117 = tmp___122;
      }
    }
  } else {
    {
    tmp___122 = __dyc_funcallvar_38;
    tmp___117 = tmp___122;
    }
  }
  if (tmp___117 == 0) {
    goto _L___15;
  } else {
    if (0) {
      {
      tmp___141 = __dyc_funcallvar_39;
      __s1_len___6 = (unsigned long )tmp___141;
      tmp___142 = __dyc_funcallvar_40;
      __s2_len___6 = (unsigned long )tmp___142;
      }
      if (! ((unsigned long )((void const   *)(name + 1)) - (unsigned long )((void const   *)name) == 1UL)) {
        goto _L___14;
      } else {
        if (__s1_len___6 >= 4UL) {
          _L___14:  
          if (! ((unsigned long )((void const   *)("window-active-style" + 1)) - (unsigned long )((void const   *)"window-active-style") == 1UL)) {
            tmp___143 = 1;
          } else {
            if (__s2_len___6 >= 4UL) {
              tmp___143 = 1;
            } else {
              tmp___143 = 0;
            }
          }
        } else {
          tmp___143 = 0;
        }
      }
      if (tmp___143) {
        {
        tmp___135 = __dyc_funcallvar_41;
        }
      } else {
        {
        tmp___140 = __dyc_funcallvar_42;
        tmp___135 = tmp___140;
        }
      }
    } else {
      {
      tmp___140 = __dyc_funcallvar_43;
      tmp___135 = tmp___140;
      }
    }
    if (tmp___135 == 0) {
      _L___15:  
      {
      wp = __dyc_funcallvar_44;
      }
      {
      while (1) {
        while_144_continue:  ;
        if (! ((unsigned long )wp != (unsigned long )((void *)0))) {
          goto while_144_break;
        }
        {
        wp->flags |= 4096;
        wp = __dyc_funcallvar_45;
        }
      }
      while_144_break:  ;
      }
    }
  }
  if (0) {
    {
    tmp___159 = __dyc_funcallvar_46;
    __s1_len___7 = (unsigned long )tmp___159;
    tmp___160 = __dyc_funcallvar_47;
    __s2_len___7 = (unsigned long )tmp___160;
    }
    if (! ((unsigned long )((void const   *)(name + 1)) - (unsigned long )((void const   *)name) == 1UL)) {
      goto _L___17;
    } else {
      if (__s1_len___7 >= 4UL) {
        _L___17:  
        if (! ((unsigned long )((void const   *)("pane-border-status" + 1)) - (unsigned long )((void const   *)"pane-border-status") == 1UL)) {
          tmp___161 = 1;
        } else {
          if (__s2_len___7 >= 4UL) {
            tmp___161 = 1;
          } else {
            tmp___161 = 0;
          }
        }
      } else {
        tmp___161 = 0;
      }
    }
    if (tmp___161) {
      {
      tmp___153 = __dyc_funcallvar_48;
      }
    } else {
      {
      tmp___158 = __dyc_funcallvar_49;
      tmp___153 = tmp___158;
      }
    }
  } else {
    {
    tmp___158 = __dyc_funcallvar_50;
    tmp___153 = tmp___158;
    }
  }
  if (tmp___153 == 0) {
    {
    w = __dyc_funcallvar_51;
    }
    {
    while (1) {
      while_145_continue:  ;
      if (! ((unsigned long )w != (unsigned long )((void *)0))) {
        goto while_145_break;
      }
      {

      w = __dyc_funcallvar_52;
      }
    }
    while_145_break:  ;
    }
  }
  s = __dyc_funcallvar_53;
  while (1) {
    while_146_continue:  ;
    if (! ((unsigned long )s != (unsigned long )((void *)0))) {
      goto __dyc_dummy_label;
    }
    {

    s = __dyc_funcallvar_54;
    }
  }
  __dyc_dummy_label:  ;
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
}
}
