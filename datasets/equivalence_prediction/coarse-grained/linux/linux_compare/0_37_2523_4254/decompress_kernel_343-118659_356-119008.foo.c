#include "../../include/dycfoo.h"
#include "../../include/misc_64.i.hd.c.h"
void __dyc_foo(void) 
{ uch *inbuf ;
  uch *window ;
  unsigned int insize ;
  unsigned int inptr ;
  unsigned char *real_mode ;
  long free_mem_ptr ;
  long free_mem_end_ptr ;
  char *vidmem ;
  int vidport ;
  int lines ;
  int cols ;
  unsigned long heap ;
  uch *input_data___0 ;
  unsigned long input_len___0 ;
  uch *output ;

  {
  real_mode = (unsigned char *)__dyc_read_ptr__char();
  heap = (unsigned long )__dyc_readpre_byte();
  input_data___0 = __dyc_read_ptr__typdef_uch();
  input_len___0 = (unsigned long )__dyc_readpre_byte();
  output = __dyc_read_ptr__typdef_uch();
  inbuf = 0;
  window = 0;
  insize = 0;
  inptr = 0;
  free_mem_ptr = 0;
  free_mem_end_ptr = 0;
  vidmem = 0;
  vidport = 0;
  lines = 0;
  cols = 0;
  if ((int )((struct screen_info *)(real_mode + 0))->orig_video_mode == 7) {
    vidmem = (char *)720896;
    vidport = 948;
  } else {
    vidmem = (char *)753664;
    vidport = 980;
  }
  lines = (int )((struct screen_info *)(real_mode + 0))->orig_video_lines;
  cols = (int )((struct screen_info *)(real_mode + 0))->orig_video_cols;
  window = output;
  free_mem_ptr = (long )heap;
  free_mem_end_ptr = (long )(heap + 28672UL);
  inbuf = input_data___0;
  insize = (unsigned int )input_len___0;
  inptr = 0U;
  __dyc_dummy_label:  ;
  __dyc_print_ptr__typdef_uch(inbuf);
  __dyc_print_ptr__typdef_uch(window);
  __dyc_printpre_byte(insize);
  __dyc_printpre_byte(inptr);
  __dyc_printpre_byte(free_mem_ptr);
  __dyc_printpre_byte(free_mem_end_ptr);
  __dyc_print_ptr__char(vidmem);
  __dyc_printpre_byte(vidport);
  __dyc_printpre_byte(lines);
  __dyc_printpre_byte(cols);
}
}
