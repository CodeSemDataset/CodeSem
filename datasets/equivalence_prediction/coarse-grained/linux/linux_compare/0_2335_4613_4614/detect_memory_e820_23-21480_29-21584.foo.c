#include "../../include/dycfoo.h"
#include "../../include/memory.i.hd.c.h"
void __dyc_foo(void) 
{ struct boot_params boot_params ;
  int count ;
  u32 next ;
  u32 size ;
  u32 id ;
  u8 err ;
  struct e820entry *desc ;

  {
  boot_params = __dyc_read_comp_35boot_params();
  id = (u32 )__dyc_readpre_byte();
  err = (u8 )__dyc_readpre_byte();
  count = 0;
  next = 0;
  size = 0;
  desc = 0;
  count = 0;
  next = (u32 )0;
  desc = boot_params.e820_map;
  while (1) {
    while_0_continue:  ;
    size = (unsigned int )sizeof(struct e820entry );
    if (id != 1397571920U) {
      count = 0;
      goto __dyc_dummy_label;
    }
    if (err) {
      goto __dyc_dummy_label;
    }
    count ++;
    desc ++;
    if (next) {
      if (! (count < 128)) {
        goto __dyc_dummy_label;
      }
    } else {
      goto __dyc_dummy_label;
    }
  }
  __dyc_dummy_label:  ;
  __dyc_printpre_byte(count);
  __dyc_printpre_byte(next);
  __dyc_printpre_byte(size);
  __dyc_print_ptr__comp_28e820entry(desc);
}
}
