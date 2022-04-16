#include "../../include/dycfoo.h"
#include "../../include/misc_64.i.hd.c.h"
void __dyc_foo(void) 
{ unsigned int hufts ;
  unsigned int a ;
  unsigned int f ;
  int g ;
  int h ;
  unsigned int i ;
  unsigned int j ;
  int k ;
  int l ;
  unsigned int *p ;
  struct huft *q ;
  struct huft r ;
  int w ;
  unsigned int *xp ;
  int y ;
  unsigned int z ;
  unsigned int *c ;
  unsigned int *v ;
  unsigned int *x ;
  struct huft **u ;
  int ret ;
  unsigned int *tmp___0 ;
  unsigned int *tmp___1 ;
  unsigned int tmp___2 ;
  unsigned int *tmp___3 ;
  void *tmp___4 ;
  int tmp___5 ;
  unsigned int *tmp___6 ;
  unsigned int tmp___7 ;
  unsigned int *b ;
  unsigned int n ;
  unsigned int s ;
  ush const   *d ;
  ush const   *e ;
  struct huft **t ;
  int *m ;
  void *__dyc_funcallvar_2 ;

  {
  hufts = (unsigned int )__dyc_readpre_byte();
  g = __dyc_readpre_byte();
  i = (unsigned int )__dyc_readpre_byte();
  j = (unsigned int )__dyc_readpre_byte();
  k = __dyc_readpre_byte();
  l = __dyc_readpre_byte();
  c = __dyc_read_ptr__int();
  v = __dyc_read_ptr__int();
  x = __dyc_read_ptr__int();
  u = __dyc_read_ptr__ptr__comp_59huft();
  b = __dyc_read_ptr__int();
  n = (unsigned int )__dyc_readpre_byte();
  s = (unsigned int )__dyc_readpre_byte();
  d = (ush const   *)__dyc_read_ptr__typdef_ush();
  e = (ush const   *)__dyc_read_ptr__typdef_ush();
  t = __dyc_read_ptr__ptr__comp_59huft();
  m = (int *)__dyc_read_ptr__int();
  __dyc_funcallvar_2 = __dyc_read_ptr__void();
  a = 0;
  f = 0;
  h = 0;
  p = 0;
  q = 0;
  memset(& r, 0, sizeof(struct huft ));
  w = 0;
  xp = 0;
  y = 0;
  z = 0;
  ret = 0;
  tmp___0 = 0;
  tmp___1 = 0;
  tmp___2 = 0;
  tmp___3 = 0;
  tmp___4 = 0;
  tmp___5 = 0;
  tmp___6 = 0;
  tmp___7 = 0;
  if ((unsigned int )l > i) {
    l = (int )i;
  }
  *m = l;
  y = 1 << j;
  while (1) {
    while_3_continue:  ;
    if (! (j < i)) {
      goto while_3_break;
    }
    y = (int )((unsigned int )y - *(c + j));
    if (y < 0) {
      ret = 2;
      goto __dyc_dummy_label;
    }
    j ++;
    y <<= 1;
  }
  while_3_break:  ;
  y = (int )((unsigned int )y - *(c + i));
  if (y < 0) {
    ret = 2;
    goto __dyc_dummy_label;
  }
  *(c + i) += (unsigned int )y;
  j = 0U;
  *(x + 1) = j;
  p = c + 1;
  xp = x + 2;
  while (1) {
    while_4_continue:  ;
    i --;
    if (! i) {
      goto while_4_break;
    }
    tmp___0 = xp;
    xp ++;
    tmp___1 = p;
    p ++;
    j += *tmp___1;
    *tmp___0 = j;
  }
  while_4_break:  ;
  p = b;
  i = 0U;
  while (1) {
    while_5_continue:  ;
    tmp___3 = p;
    p ++;
    j = *tmp___3;
    if (j != 0U) {
      tmp___2 = *(x + j);
      (*(x + j)) ++;
      *(v + tmp___2) = i;
    }
    i ++;
    if (! (i < n)) {
      goto while_5_break;
    }
  }
  while_5_break:  ;
  n = *(x + g);
  i = 0U;
  *(x + 0) = i;
  p = v;
  h = -1;
  w = - l;
  *(u + 0) = (struct huft *)((void *)0);
  q = (struct huft *)((void *)0);
  z = 0U;
  while (1) {
    while_6_continue:  ;
    if (! (k <= g)) {
      goto __dyc_dummy_label;
    }
    a = *(c + k);
    {
    while (1) {
      while_7_continue:  ;
      tmp___7 = a;
      a --;
      if (! tmp___7) {
        goto while_7_break;
      }
      {
      while (1) {
        while_8_continue:  ;
        if (! (k > w + l)) {
          goto while_8_break;
        }
        h ++;
        w += l;
        z = (unsigned int )(g - w);
        if (z > (unsigned int )l) {
          z = (unsigned int )l;
        } else {
          z = z;
        }
        j = (unsigned int )(k - w);
        f = (unsigned int )(1 << j);
        if (f > a + 1U) {
          f -= a + 1U;
          xp = c + k;
          if (j < z) {
            {
            while (1) {
              while_9_continue:  ;
              j ++;
              if (! (j < z)) {
                goto while_9_break;
              }
              f <<= 1;
              xp ++;
              if (f <= *xp) {
                goto while_9_break;
              }
              f -= *xp;
            }
            while_9_break:  ;
            }
          }
        }
        {
        z = (unsigned int )(1 << j);
        tmp___4 = __dyc_funcallvar_2;
        q = (struct huft *)tmp___4;
        }
        if ((unsigned long )q == (unsigned long )((struct huft *)((void *)0))) {
          if (h) {
            {

            }
          }
          ret = 3;
          goto __dyc_dummy_label;
        }
        hufts += z + 1U;
        *t = q + 1;
        t = & q->v.t;
        *t = (struct huft *)((void *)0);
        q ++;
        *(u + h) = q;
        if (h) {
          *(x + h) = i;
          r.b = (unsigned char )l;
          r.e = (unsigned char )(16U + j);
          r.v.t = q;
          j = i >> (w - l);
          *(*(u + (h - 1)) + j) = r;
        }
      }
      while_8_break:  ;
      }
      r.b = (unsigned char )(k - w);
      if ((unsigned long )p >= (unsigned long )(v + n)) {
        r.e = (unsigned char)99;
      } else {
        if (*p < s) {
          if (*p < 256U) {
            tmp___5 = 16;
          } else {
            tmp___5 = 15;
          }
          r.e = (unsigned char )tmp___5;
          r.v.n = (unsigned short )*p;
          p ++;
        } else {
          r.e = (unsigned char )*(e + (*p - s));
          tmp___6 = p;
          p ++;
          r.v.n = (unsigned short )*(d + (*tmp___6 - s));
        }
      }
      f = (unsigned int )(1 << (k - w));
      j = i >> w;
      {
      while (1) {
        while_10_continue:  ;
        if (! (j < z)) {
          goto while_10_break;
        }
        *(q + j) = r;
        j += f;
      }
      while_10_break:  ;
      }
      j = (unsigned int )(1 << (k - 1));
      {
      while (1) {
        while_11_continue:  ;
        if (! (i & j)) {
          goto while_11_break;
        }
        i ^= j;
        j >>= 1;
      }
      while_11_break:  ;
      }
      i ^= j;
      {
      while (1) {
        while_12_continue:  ;
        if (! ((i & (unsigned int )((1 << w) - 1)) != *(x + h))) {
          goto while_12_break;
        }
        h --;
        w -= l;
      }
      while_12_break:  ;
      }
    }
    while_7_break:  ;
    }
    k ++;
  }
  __dyc_dummy_label:  ;
  __dyc_printpre_byte(hufts);
  __dyc_printpre_byte(a);
  __dyc_printpre_byte(f);
  __dyc_printpre_byte(h);
  __dyc_print_ptr__int(p);
  __dyc_print_ptr__comp_59huft(q);
  __dyc_print_comp_59huft(r);
  __dyc_printpre_byte(w);
  __dyc_print_ptr__int(xp);
  __dyc_printpre_byte(z);
  __dyc_printpre_byte(ret);
  __dyc_printpre_byte(n);
}
}
