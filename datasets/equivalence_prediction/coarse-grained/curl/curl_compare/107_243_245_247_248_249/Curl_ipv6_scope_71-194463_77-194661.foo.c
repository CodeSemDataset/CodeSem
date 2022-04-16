#include "../../include/dycfoo.h"
#include "../../include/if2ip.i.hd.c.h"
void __dyc_foo(void) 
{ struct sockaddr_in6  const  *sa6 ;
  unsigned char const   *b ;
  unsigned short w ;
  struct sockaddr  const  *sa ;

  {
  sa = (struct sockaddr  const  *)__dyc_read_ptr__comp_20sockaddr();
  sa6 = 0;
  b = 0;
  w = 0;
  sa6 = (struct sockaddr_in6  const  *)((void *)sa);
  b = (unsigned char const   *)(sa6->sin6_addr.__in6_u.__u6_addr8);
  w = (unsigned short )(((int const   )*(b + 0) << 8) | (int const   )*(b + 1));
  if (((int const   )*(b + 0) & 254) == 252) {
    goto __dyc_dummy_label;
  }
  if (((int )w & 65472) == 65152) {
    goto switch_0_65152;
  } else {
    if (((int )w & 65472) == 65216) {
      goto switch_0_65216;
    } else {
      if (((int )w & 65472) == 0) {
        goto switch_0_0;
      } else {
        {
        goto switch_0_default;
        if (0) {
          switch_0_65152:  
          goto __dyc_dummy_label;
          switch_0_65216:  
          goto __dyc_dummy_label;
          switch_0_0:  
          w = (unsigned short )((((((((((((((int const   )*(b + 1) | (int const   )*(b + 2)) | (int const   )*(b + 3)) | (int const   )*(b + 4)) | (int const   )*(b + 5)) | (int const   )*(b + 6)) | (int const   )*(b + 7)) | (int const   )*(b + 8)) | (int const   )*(b + 9)) | (int const   )*(b + 10)) | (int const   )*(b + 11)) | (int const   )*(b + 12)) | (int const   )*(b + 13)) | (int const   )*(b + 14));
          if (w) {
            goto switch_0_break;
          } else {
            if ((int const   )*(b + 15) != 1) {
              goto switch_0_break;
            }
          }
          goto __dyc_dummy_label;
          switch_0_default:  ;
          goto switch_0_break;
        } else {
          switch_0_break:  ;
        }
        }
      }
    }
  }
  __dyc_dummy_label:  ;
  __dyc_printpre_byte(w);
}
}
