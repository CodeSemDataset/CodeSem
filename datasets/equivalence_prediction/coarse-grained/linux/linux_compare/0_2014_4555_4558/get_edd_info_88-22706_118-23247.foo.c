#include "../../include/dycfoo.h"
#include "../../include/edd.i.hd.c.h"
void __dyc_foo(void) 
{ u16 ax ;
  u16 bx ;
  u16 cx ;
  u16 dx ;
  u16 di ;
  u8 devno ;
  struct edd_info *ei ;

  {
  ax = (u16 )__dyc_readpre_byte();
  bx = (u16 )__dyc_readpre_byte();
  cx = (u16 )__dyc_readpre_byte();
  devno = (u8 )__dyc_readpre_byte();
  ei = __dyc_read_ptr__comp_23edd_info();
  dx = 0;
  di = 0;
  if ((int )bx != 43605) {
    goto __dyc_dummy_label;
  }
  ei->device = devno;
  ei->version = (unsigned char )((int )ax >> 8);
  ei->interface_support = cx;
  ei->params.length = (unsigned short )sizeof(struct edd_device_params );
  ax = (unsigned short)18432;
  dx = (unsigned short )devno;
  ax = (unsigned short)2048;
  dx = (unsigned short )devno;
  di = (unsigned short)0;
  if ((int )((unsigned char )ax) == 0) {
    ei->legacy_max_cylinder = (unsigned short )(((int )cx >> 8) + (((int )cx & 192) << 2));
    ei->legacy_max_head = (unsigned char )((int )dx >> 8);
    ei->legacy_sectors_per_track = (unsigned char )((int )cx & 63);
  }
  __dyc_dummy_label:  ;
  __dyc_printpre_byte(di);
}
}
