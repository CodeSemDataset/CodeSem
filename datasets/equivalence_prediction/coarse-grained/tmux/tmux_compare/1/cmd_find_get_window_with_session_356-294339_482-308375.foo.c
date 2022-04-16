#include "../../include/dycfoo.h"
#include "../../include/cmd-find.i.hd.c.h"
void __dyc_foo(void) 
{ struct winlink *wl ;
  char const   *errstr ;
  int idx ;
  int n ;
  int exact ;
  struct session *s ;
  int tmp ;
  int tmp___0 ;
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
  long long tmp___56 ;
  size_t __s1_len___2 ;
  size_t __s2_len___2 ;
  int tmp___66 ;
  int tmp___71 ;
  int tmp___72 ;
  int tmp___73 ;
  int tmp___74 ;
  int tmp___100 ;
  size_t __s1_len___4 ;
  size_t __s2_len___4 ;
  int tmp___110 ;
  int tmp___115 ;
  int tmp___116 ;
  int tmp___117 ;
  int tmp___118 ;
  size_t tmp___119 ;
  int tmp___125 ;
  struct cmd_find_state *fs ;
  char const   *window ;
  struct window *__dyc_funcallvar_1 ;
  int __dyc_funcallvar_2 ;
  int __dyc_funcallvar_3 ;
  long long __dyc_funcallvar_4 ;
  struct winlink *__dyc_funcallvar_5 ;
  struct winlink *__dyc_funcallvar_6 ;
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
  struct winlink *__dyc_funcallvar_17 ;
  int __dyc_funcallvar_18 ;
  int __dyc_funcallvar_19 ;
  int __dyc_funcallvar_20 ;
  int __dyc_funcallvar_21 ;
  int __dyc_funcallvar_22 ;
  struct winlink *__dyc_funcallvar_23 ;
  long long __dyc_funcallvar_24 ;
  struct winlink *__dyc_funcallvar_25 ;
  struct winlink *__dyc_funcallvar_26 ;
  int __dyc_funcallvar_27 ;
  int __dyc_funcallvar_28 ;
  int __dyc_funcallvar_29 ;
  int __dyc_funcallvar_30 ;
  int __dyc_funcallvar_31 ;
  struct winlink *__dyc_funcallvar_32 ;
  struct winlink *__dyc_funcallvar_33 ;
  int __dyc_funcallvar_34 ;
  int __dyc_funcallvar_35 ;
  int __dyc_funcallvar_36 ;
  int __dyc_funcallvar_37 ;
  int __dyc_funcallvar_38 ;
  size_t __dyc_funcallvar_39 ;
  int __dyc_funcallvar_40 ;
  struct winlink *__dyc_funcallvar_41 ;
  struct winlink *__dyc_funcallvar_42 ;
  int __dyc_funcallvar_43 ;
  struct winlink *__dyc_funcallvar_44 ;

  {
  errstr = (char const   *)__dyc_read_ptr__char();
  fs = __dyc_read_ptr__comp_145cmd_find_state();
  window = (char const   *)__dyc_read_ptr__char();
  __dyc_funcallvar_1 = __dyc_read_ptr__comp_204window();
  __dyc_funcallvar_2 = __dyc_readpre_byte();
  __dyc_funcallvar_3 = __dyc_readpre_byte();
  __dyc_funcallvar_4 = (long long )__dyc_readpre_byte();
  __dyc_funcallvar_5 = __dyc_read_ptr__comp_168winlink();
  __dyc_funcallvar_6 = __dyc_read_ptr__comp_168winlink();
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
  __dyc_funcallvar_17 = __dyc_read_ptr__comp_168winlink();
  __dyc_funcallvar_18 = __dyc_readpre_byte();
  __dyc_funcallvar_19 = __dyc_readpre_byte();
  __dyc_funcallvar_20 = __dyc_readpre_byte();
  __dyc_funcallvar_21 = __dyc_readpre_byte();
  __dyc_funcallvar_22 = __dyc_readpre_byte();
  __dyc_funcallvar_23 = __dyc_read_ptr__comp_168winlink();
  __dyc_funcallvar_24 = (long long )__dyc_readpre_byte();
  __dyc_funcallvar_25 = __dyc_read_ptr__comp_168winlink();
  __dyc_funcallvar_26 = __dyc_read_ptr__comp_168winlink();
  __dyc_funcallvar_27 = __dyc_readpre_byte();
  __dyc_funcallvar_28 = __dyc_readpre_byte();
  __dyc_funcallvar_29 = __dyc_readpre_byte();
  __dyc_funcallvar_30 = __dyc_readpre_byte();
  __dyc_funcallvar_31 = __dyc_readpre_byte();
  __dyc_funcallvar_32 = __dyc_read_ptr__comp_168winlink();
  __dyc_funcallvar_33 = __dyc_read_ptr__comp_168winlink();
  __dyc_funcallvar_34 = __dyc_readpre_byte();
  __dyc_funcallvar_35 = __dyc_readpre_byte();
  __dyc_funcallvar_36 = __dyc_readpre_byte();
  __dyc_funcallvar_37 = __dyc_readpre_byte();
  __dyc_funcallvar_38 = __dyc_readpre_byte();
  __dyc_funcallvar_39 = (size_t )__dyc_readpre_byte();
  __dyc_funcallvar_40 = __dyc_readpre_byte();
  __dyc_funcallvar_41 = __dyc_read_ptr__comp_168winlink();
  __dyc_funcallvar_42 = __dyc_read_ptr__comp_168winlink();
  __dyc_funcallvar_43 = __dyc_readpre_byte();
  __dyc_funcallvar_44 = __dyc_read_ptr__comp_168winlink();
  wl = 0;
  idx = 0;
  n = 0;
  exact = 0;
  s = 0;
  tmp = 0;
  tmp___0 = 0;
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
  tmp___56 = 0;
  __s1_len___2 = 0;
  __s2_len___2 = 0;
  tmp___66 = 0;
  tmp___71 = 0;
  tmp___72 = 0;
  tmp___73 = 0;
  tmp___74 = 0;
  tmp___100 = 0;
  __s1_len___4 = 0;
  __s2_len___4 = 0;
  tmp___110 = 0;
  tmp___115 = 0;
  tmp___116 = 0;
  tmp___117 = 0;
  tmp___118 = 0;
  tmp___119 = 0;
  tmp___125 = 0;
  exact = fs->flags & 32;
  fs->wl = (fs->s)->curw;
  fs->w = (fs->wl)->window;
  if ((int const   )*window == 64) {
    {
    fs->w = __dyc_funcallvar_1;
    }
    if ((unsigned long )fs->w == (unsigned long )((void *)0)) {
      goto __dyc_dummy_label;
    } else {
      {
      tmp = __dyc_funcallvar_2;
      }
      if (! tmp) {
        goto __dyc_dummy_label;
      }
    }
    {
    tmp___0 = __dyc_funcallvar_3;
    }
    goto __dyc_dummy_label;
  }
  if (! exact) {
    if ((int const   )*(window + 0) == 43) {
      goto _L;
    } else {
      if ((int const   )*(window + 0) == 45) {
        _L:  
        if ((int const   )*(window + 1) != 0) {
          {
          tmp___1 = __dyc_funcallvar_4;
          n = (int )tmp___1;
          }
        } else {
          n = 1;
        }
        s = fs->s;
        if (fs->flags & 4) {
          if ((int const   )*(window + 0) == 43) {
            if (2147483647 - (s->curw)->idx < n) {
              goto __dyc_dummy_label;
            }
            fs->idx = (s->curw)->idx + n;
          } else {
            if (n > (s->curw)->idx) {
              goto __dyc_dummy_label;
            }
            fs->idx = (s->curw)->idx - n;
          }
          goto __dyc_dummy_label;
        }
        if ((int const   )*(window + 0) == 43) {
          {
          fs->wl = __dyc_funcallvar_5;
          }
        } else {
          {
          fs->wl = __dyc_funcallvar_6;
          }
        }
        if ((unsigned long )fs->wl != (unsigned long )((void *)0)) {
          fs->idx = (fs->wl)->idx;
          fs->w = (fs->wl)->window;
          goto __dyc_dummy_label;
        }
      }
    }
  }
  if (! exact) {
    if (0) {
      {
      tmp___53 = __dyc_funcallvar_7;
      __s1_len___1 = (unsigned long )tmp___53;
      tmp___54 = __dyc_funcallvar_8;
      __s2_len___1 = (unsigned long )tmp___54;
      }
      if (! ((unsigned long )((void const   *)(window + 1)) - (unsigned long )((void const   *)window) == 1UL)) {
        goto _L___5;
      } else {
        if (__s1_len___1 >= 4UL) {
          _L___5:  
          if (! ((unsigned long )((void const   *)("!" + 1)) - (unsigned long )((void const   *)"!") == 1UL)) {
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
        tmp___47 = __dyc_funcallvar_9;
        }
      } else {
        {
        tmp___52 = __dyc_funcallvar_10;
        tmp___47 = tmp___52;
        }
      }
    } else {
      {
      tmp___52 = __dyc_funcallvar_11;
      tmp___47 = tmp___52;
      }
    }
    if (tmp___47 == 0) {
      fs->wl = (fs->s)->lastw.tqh_first;
      if ((unsigned long )fs->wl == (unsigned long )((void *)0)) {
        goto __dyc_dummy_label;
      }
      fs->idx = (fs->wl)->idx;
      fs->w = (fs->wl)->window;
      goto __dyc_dummy_label;
    } else {
      if (0) {
        {
        tmp___35 = __dyc_funcallvar_12;
        __s1_len___0 = (unsigned long )tmp___35;
        tmp___36 = __dyc_funcallvar_13;
        __s2_len___0 = (unsigned long )tmp___36;
        }
        if (! ((unsigned long )((void const   *)(window + 1)) - (unsigned long )((void const   *)window) == 1UL)) {
          goto _L___3;
        } else {
          if (__s1_len___0 >= 4UL) {
            _L___3:  
            if (! ((unsigned long )((void const   *)("^" + 1)) - (unsigned long )((void const   *)"^") == 1UL)) {
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
          tmp___29 = __dyc_funcallvar_14;
          }
        } else {
          {
          tmp___34 = __dyc_funcallvar_15;
          tmp___29 = tmp___34;
          }
        }
      } else {
        {
        tmp___34 = __dyc_funcallvar_16;
        tmp___29 = tmp___34;
        }
      }
      if (tmp___29 == 0) {
        {
        fs->wl = __dyc_funcallvar_17;
        }
        if ((unsigned long )fs->wl == (unsigned long )((void *)0)) {
          goto __dyc_dummy_label;
        }
        fs->idx = (fs->wl)->idx;
        fs->w = (fs->wl)->window;
        goto __dyc_dummy_label;
      } else {
        if (0) {
          {
          tmp___17 = __dyc_funcallvar_18;
          __s1_len = (unsigned long )tmp___17;
          tmp___18 = __dyc_funcallvar_19;
          __s2_len = (unsigned long )tmp___18;
          }
          if (! ((unsigned long )((void const   *)(window + 1)) - (unsigned long )((void const   *)window) == 1UL)) {
            goto _L___1;
          } else {
            if (__s1_len >= 4UL) {
              _L___1:  
              if (! ((unsigned long )((void const   *)("$" + 1)) - (unsigned long )((void const   *)"$") == 1UL)) {
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
            tmp___11 = __dyc_funcallvar_20;
            }
          } else {
            {
            tmp___16 = __dyc_funcallvar_21;
            tmp___11 = tmp___16;
            }
          }
        } else {
          {
          tmp___16 = __dyc_funcallvar_22;
          tmp___11 = tmp___16;
          }
        }
        if (tmp___11 == 0) {
          {
          fs->wl = __dyc_funcallvar_23;
          }
          if ((unsigned long )fs->wl == (unsigned long )((void *)0)) {
            goto __dyc_dummy_label;
          }
          fs->idx = (fs->wl)->idx;
          fs->w = (fs->wl)->window;
          goto __dyc_dummy_label;
        }
      }
    }
  }
  if ((int const   )*(window + 0) != 43) {
    if ((int const   )*(window + 0) != 45) {
      {
      tmp___56 = __dyc_funcallvar_24;
      idx = (int )tmp___56;
      }
      if ((unsigned long )errstr == (unsigned long )((void *)0)) {
        {
        fs->wl = __dyc_funcallvar_25;
        }
        if ((unsigned long )fs->wl != (unsigned long )((void *)0)) {
          fs->idx = (fs->wl)->idx;
          fs->w = (fs->wl)->window;
          goto __dyc_dummy_label;
        }
        if (fs->flags & 4) {
          fs->idx = idx;
          goto __dyc_dummy_label;
        }
      }
    }
  }
  fs->wl = (struct winlink *)((void *)0);
  wl = __dyc_funcallvar_26;
  while (1) {
    while_9_continue:  ;
    if (! ((unsigned long )wl != (unsigned long )((void *)0))) {
      goto while_9_break;
    }
    if (0) {
      {
      tmp___72 = __dyc_funcallvar_27;
      __s1_len___2 = (unsigned long )tmp___72;
      tmp___73 = __dyc_funcallvar_28;
      __s2_len___2 = (unsigned long )tmp___73;
      }
      if (! ((unsigned long )((void const   *)(window + 1)) - (unsigned long )((void const   *)window) == 1UL)) {
        goto _L___7;
      } else {
        if (__s1_len___2 >= 4UL) {
          _L___7:  
          if (! ((unsigned long )((void const   *)((wl->window)->name + 1)) - (unsigned long )((void const   *)(wl->window)->name) == 1UL)) {
            tmp___74 = 1;
          } else {
            if (__s2_len___2 >= 4UL) {
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
        tmp___66 = __dyc_funcallvar_29;
        }
      } else {
        {
        tmp___71 = __dyc_funcallvar_30;
        tmp___66 = tmp___71;
        }
      }
    } else {
      {
      tmp___71 = __dyc_funcallvar_31;
      tmp___66 = tmp___71;
      }
    }
    if (tmp___66 == 0) {
      if ((unsigned long )fs->wl != (unsigned long )((void *)0)) {
        goto __dyc_dummy_label;
      }
      fs->wl = wl;
    }
    {
    wl = __dyc_funcallvar_32;
    }
  }
  while_9_break:  ;
  if ((unsigned long )fs->wl != (unsigned long )((void *)0)) {
    fs->idx = (fs->wl)->idx;
    fs->w = (fs->wl)->window;
    goto __dyc_dummy_label;
  }
  if (exact) {
    goto __dyc_dummy_label;
  }
  fs->wl = (struct winlink *)((void *)0);
  wl = __dyc_funcallvar_33;
  while (1) {
    while_10_continue:  ;
    if (! ((unsigned long )wl != (unsigned long )((void *)0))) {
      goto while_10_break;
    }
    if (0) {
      if (0) {
        {
        tmp___116 = __dyc_funcallvar_34;
        __s1_len___4 = (unsigned long )tmp___116;
        tmp___117 = __dyc_funcallvar_35;
        __s2_len___4 = (unsigned long )tmp___117;
        }
        if (! ((unsigned long )((void const   *)(window + 1)) - (unsigned long )((void const   *)window) == 1UL)) {
          goto _L___11;
        } else {
          if (__s1_len___4 >= 4UL) {
            _L___11:  
            if (! ((unsigned long )((void const   *)((wl->window)->name + 1)) - (unsigned long )((void const   *)(wl->window)->name) == 1UL)) {
              tmp___118 = 1;
            } else {
              if (__s2_len___4 >= 4UL) {
                tmp___118 = 1;
              } else {
                tmp___118 = 0;
              }
            }
          } else {
            tmp___118 = 0;
          }
        }
        if (tmp___118) {
          {
          tmp___110 = __dyc_funcallvar_36;
          }
        } else {
          {
          tmp___115 = __dyc_funcallvar_37;
          tmp___110 = tmp___115;
          }
        }
      } else {
        {
        tmp___115 = __dyc_funcallvar_38;
        tmp___110 = tmp___115;
        }
      }
      tmp___100 = tmp___110;
    } else {
      {
      tmp___119 = __dyc_funcallvar_39;
      tmp___100 = __dyc_funcallvar_40;
      }
    }
    if (tmp___100 == 0) {
      if ((unsigned long )fs->wl != (unsigned long )((void *)0)) {
        goto __dyc_dummy_label;
      }
      fs->wl = wl;
    }
    {
    wl = __dyc_funcallvar_41;
    }
  }
  while_10_break:  ;
  if ((unsigned long )fs->wl != (unsigned long )((void *)0)) {
    fs->idx = (fs->wl)->idx;
    fs->w = (fs->wl)->window;
    goto __dyc_dummy_label;
  }
  fs->wl = (struct winlink *)((void *)0);
  wl = __dyc_funcallvar_42;
  while (1) {
    while_11_continue:  ;
    if (! ((unsigned long )wl != (unsigned long )((void *)0))) {
      goto __dyc_dummy_label;
    }
    {
    tmp___125 = __dyc_funcallvar_43;
    }
    if (tmp___125 == 0) {
      if ((unsigned long )fs->wl != (unsigned long )((void *)0)) {
        goto __dyc_dummy_label;
      }
      fs->wl = wl;
    }
    {
    wl = __dyc_funcallvar_44;
    }
  }
  __dyc_dummy_label:  ;
  __dyc_printpre_byte(idx);
  __dyc_printpre_byte(n);
  __dyc_printpre_byte(exact);
  __dyc_print_ptr__comp_164session(s);
  __dyc_printpre_byte(tmp___0);
  __dyc_printpre_byte(__s1_len);
  __dyc_printpre_byte(__s2_len);
  __dyc_printpre_byte(__s1_len___0);
  __dyc_printpre_byte(__s2_len___0);
  __dyc_printpre_byte(__s1_len___1);
  __dyc_printpre_byte(__s2_len___1);
  __dyc_printpre_byte(__s1_len___2);
  __dyc_printpre_byte(__s2_len___2);
  __dyc_printpre_byte(__s1_len___4);
  __dyc_printpre_byte(__s2_len___4);
  __dyc_printpre_byte(tmp___119);
}
}
