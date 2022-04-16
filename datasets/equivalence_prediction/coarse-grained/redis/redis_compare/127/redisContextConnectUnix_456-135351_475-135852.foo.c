#include "../../include/dycfoo.h"
#include "../../include/net.i.hd.c.h"
void __dyc_foo(void) 
{ int blocking ;
  struct sockaddr_un sa ;
  int tmp___12 ;
  int tmp___13 ;
  int *tmp___14 ;
  int tmp___15 ;
  int tmp___16 ;
  redisContext *c ;
  int __dyc_funcallvar_6 ;
  int *__dyc_funcallvar_7 ;
  int __dyc_funcallvar_8 ;
  int __dyc_funcallvar_9 ;

  {
  blocking = __dyc_readpre_byte();
  tmp___12 = __dyc_readpre_byte();
  c = __dyc_read_ptr__typdef_redisContext();
  __dyc_funcallvar_6 = __dyc_readpre_byte();
  __dyc_funcallvar_7 = __dyc_read_ptr__int();
  __dyc_funcallvar_8 = __dyc_readpre_byte();
  __dyc_funcallvar_9 = __dyc_readpre_byte();
  memset(& sa, 0, sizeof(struct sockaddr_un ));
  tmp___13 = 0;
  tmp___14 = 0;
  tmp___15 = 0;
  tmp___16 = 0;
  if (tmp___12 != 0) {
    goto __dyc_dummy_label;
  }
  sa.sun_family = (unsigned short)1;

  tmp___15 = __dyc_funcallvar_6;
  if (tmp___15 == -1) {
    {
    tmp___14 = __dyc_funcallvar_7;
    }
    if (*tmp___14 == 115) {
      if (! (! blocking)) {
        goto _L;
      }
    } else {
      _L:  
      {
      tmp___13 = __dyc_funcallvar_8;
      }
      if (tmp___13 != 0) {
        goto __dyc_dummy_label;
      }
    }
  }
  if (blocking) {
    {
    tmp___16 = __dyc_funcallvar_9;
    }
    if (tmp___16 != 0) {
      goto __dyc_dummy_label;
    }
  }
  c->flags |= 2;
  goto __dyc_dummy_label;
  __dyc_dummy_label:  ;
  __dyc_print_comp_27sockaddr_un(sa);
}
}
