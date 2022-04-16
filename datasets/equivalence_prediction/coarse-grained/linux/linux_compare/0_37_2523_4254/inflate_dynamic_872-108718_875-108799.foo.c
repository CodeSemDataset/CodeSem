#include "../../include/dycfoo.h"
#include "../../include/misc_64.i.hd.c.h"
void __dyc_foo(void) 
{ uch *inbuf ;
  unsigned int insize ;
  unsigned int inptr ;
  int i ;
  unsigned int j ;
  unsigned int l ;
  unsigned int m ;
  unsigned int n ;
  struct huft *tl ;
  struct huft *td ;
  unsigned int *ll ;
  ulg b ;
  unsigned int k ;
  int ret ;
  int tmp___20 ;
  int v___4 ;
  int tmp___23 ;
  unsigned int tmp___24 ;
  int tmp___25 ;
  unsigned int tmp___26 ;
  int v___5 ;
  int tmp___29 ;
  unsigned int tmp___30 ;
  int tmp___31 ;
  unsigned int tmp___32 ;
  int v___6 ;
  int tmp___35 ;
  unsigned int tmp___36 ;
  int tmp___37 ;
  unsigned int tmp___38 ;
  int __dyc_funcallvar_8 ;
  int __dyc_funcallvar_9 ;
  int __dyc_funcallvar_10 ;

  {
  inbuf = __dyc_read_ptr__typdef_uch();
  insize = (unsigned int )__dyc_readpre_byte();
  inptr = (unsigned int )__dyc_readpre_byte();
  i = __dyc_readpre_byte();
  l = (unsigned int )__dyc_readpre_byte();
  m = (unsigned int )__dyc_readpre_byte();
  n = (unsigned int )__dyc_readpre_byte();
  tl = __dyc_read_ptr__comp_59huft();
  ll = __dyc_read_ptr__int();
  b = (ulg )__dyc_readpre_byte();
  k = (unsigned int )__dyc_readpre_byte();
  __dyc_funcallvar_8 = __dyc_readpre_byte();
  __dyc_funcallvar_9 = __dyc_readpre_byte();
  __dyc_funcallvar_10 = __dyc_readpre_byte();
  j = 0;
  td = 0;
  ret = 0;
  tmp___20 = 0;
  v___4 = 0;
  tmp___23 = 0;
  tmp___24 = 0;
  tmp___25 = 0;
  tmp___26 = 0;
  v___5 = 0;
  tmp___29 = 0;
  tmp___30 = 0;
  tmp___31 = 0;
  tmp___32 = 0;
  v___6 = 0;
  tmp___35 = 0;
  tmp___36 = 0;
  tmp___37 = 0;
  tmp___38 = 0;
  td = tl + ((unsigned int )b & m);
  j = (unsigned int )td->b;
  b >>= j;
  k -= j;
  j = (unsigned int )td->v.n;
  if (j < 16U) {
    tmp___20 = i;
    i ++;
    l = j;
    *(ll + tmp___20) = l;
  } else {
    if (j == 16U) {
      {
      while (1) {
        while_42_continue:  ;
        if (! (k < 2U)) {
          goto while_42_break;
        }
        if (inptr < insize) {
          tmp___24 = inptr;
          inptr ++;
          tmp___23 = (int )*(inbuf + tmp___24);
        } else {
          {
          tmp___23 = __dyc_funcallvar_8;
          }
        }
        v___4 = tmp___23;
        if (v___4 < 0) {
          goto __dyc_dummy_label;
        }
        b |= (unsigned long )((unsigned char )v___4) << k;
        k += 8U;
      }
      while_42_break:  ;
      }
      j = 3U + ((unsigned int )b & 3U);
      b >>= 2;
      k -= 2U;
      if ((unsigned int )i + j > n) {
        ret = 1;
        goto __dyc_dummy_label;
      }
      {
      while (1) {
        while_43_continue:  ;
        tmp___26 = j;
        j --;
        if (! tmp___26) {
          goto while_43_break;
        }
        tmp___25 = i;
        i ++;
        *(ll + tmp___25) = l;
      }
      while_43_break:  ;
      }
    } else {
      if (j == 17U) {
        {
        while (1) {
          while_44_continue:  ;
          if (! (k < 3U)) {
            goto while_44_break;
          }
          if (inptr < insize) {
            tmp___30 = inptr;
            inptr ++;
            tmp___29 = (int )*(inbuf + tmp___30);
          } else {
            {
            tmp___29 = __dyc_funcallvar_9;
            }
          }
          v___5 = tmp___29;
          if (v___5 < 0) {
            goto __dyc_dummy_label;
          }
          b |= (unsigned long )((unsigned char )v___5) << k;
          k += 8U;
        }
        while_44_break:  ;
        }
        j = 3U + ((unsigned int )b & 7U);
        b >>= 3;
        k -= 3U;
        if ((unsigned int )i + j > n) {
          ret = 1;
          goto __dyc_dummy_label;
        }
        {
        while (1) {
          while_45_continue:  ;
          tmp___32 = j;
          j --;
          if (! tmp___32) {
            goto while_45_break;
          }
          tmp___31 = i;
          i ++;
          *(ll + tmp___31) = 0U;
        }
        while_45_break:  ;
        }
        l = 0U;
      } else {
        {
        while (1) {
          while_46_continue:  ;
          if (! (k < 7U)) {
            goto while_46_break;
          }
          if (inptr < insize) {
            tmp___36 = inptr;
            inptr ++;
            tmp___35 = (int )*(inbuf + tmp___36);
          } else {
            {
            tmp___35 = __dyc_funcallvar_10;
            }
          }
          v___6 = tmp___35;
          if (v___6 < 0) {
            goto __dyc_dummy_label;
          }
          b |= (unsigned long )((unsigned char )v___6) << k;
          k += 8U;
        }
        while_46_break:  ;
        }
        j = 11U + ((unsigned int )b & 127U);
        b >>= 7;
        k -= 7U;
        if ((unsigned int )i + j > n) {
          ret = 1;
          goto __dyc_dummy_label;
        }
        {
        while (1) {
          while_47_continue:  ;
          tmp___38 = j;
          j --;
          if (! tmp___38) {
            goto while_47_break;
          }
          tmp___37 = i;
          i ++;
          *(ll + tmp___37) = 0U;
        }
        while_47_break:  ;
        }
        l = 0U;
      }
    }
  }
  __dyc_dummy_label:  ;
  __dyc_printpre_byte(inptr);
  __dyc_printpre_byte(i);
  __dyc_printpre_byte(j);
  __dyc_printpre_byte(l);
  __dyc_printpre_byte(b);
  __dyc_printpre_byte(k);
  __dyc_printpre_byte(ret);
}
}
