#include "../../include/dycfoo.h"
#include "../../include/linenoise.i.hd.c.h"
void __dyc_foo(void) 
{ struct linenoiseState l ;
  int tmp ;
  int stdin_fd ;
  int stdout_fd ;
  char *buf ;
  size_t buflen ;
  char const   *prompt ;
  size_t __dyc_funcallvar_1 ;
  int __dyc_funcallvar_2 ;

  {
  stdin_fd = __dyc_readpre_byte();
  stdout_fd = __dyc_readpre_byte();
  buf = __dyc_read_ptr__char();
  buflen = (size_t )__dyc_readpre_byte();
  prompt = (char const   *)__dyc_read_ptr__char();
  __dyc_funcallvar_1 = (size_t )__dyc_readpre_byte();
  __dyc_funcallvar_2 = __dyc_readpre_byte();
  memset(& l, 0, sizeof(struct linenoiseState ));
  tmp = 0;
  l.ifd = stdin_fd;
  l.ofd = stdout_fd;
  l.buf = buf;
  l.buflen = buflen;
  l.prompt = prompt;
  l.plen = __dyc_funcallvar_1;
  l.pos = 0UL;
  l.oldpos = l.pos;
  l.len = 0UL;
  tmp = __dyc_funcallvar_2;
  l.cols = (unsigned long )tmp;
  l.maxrows = 0UL;
  l.history_index = 0;
  *(l.buf + 0) = (char )'\000';
  (l.buflen) --;
  __dyc_dummy_label:  ;
  __dyc_print_comp_43linenoiseState(l);
}
}
