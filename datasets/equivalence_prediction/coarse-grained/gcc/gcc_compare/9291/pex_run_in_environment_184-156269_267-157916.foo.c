#include "../../include/dycfoo.h"
#include "../../include/pex-common.i.hd.c.h"
void __dyc_foo(void) 
{ char const   *errmsg ;
  int in ;
  int out ;
  char *outname ;
  int outname_allocated ;
  int p[2] ;
  int tmp___0 ;
  int *tmp___1 ;
  int *tmp___2 ;
  int tmp___3 ;
  int *tmp___4 ;
  struct pex_obj *obj ;
  int flags ;
  char const   *orig_outname ;
  int *err ;
  int __dyc_funcallvar_2 ;
  int __dyc_funcallvar_3 ;
  int *__dyc_funcallvar_4 ;
  char *__dyc_funcallvar_5 ;
  char *__dyc_funcallvar_6 ;
  int __dyc_funcallvar_7 ;
  int *__dyc_funcallvar_8 ;
  int __dyc_funcallvar_9 ;
  int *__dyc_funcallvar_10 ;

  {
  out = __dyc_readpre_byte();
  outname = __dyc_read_ptr__char();
  outname_allocated = __dyc_readpre_byte();
  obj = __dyc_read_ptr__comp_13pex_obj();
  flags = __dyc_readpre_byte();
  orig_outname = (char const   *)__dyc_read_ptr__char();
  err = __dyc_read_ptr__int();
  __dyc_funcallvar_2 = __dyc_readpre_byte();
  __dyc_funcallvar_3 = __dyc_readpre_byte();
  __dyc_funcallvar_4 = __dyc_read_ptr__int();
  __dyc_funcallvar_5 = __dyc_read_ptr__char();
  __dyc_funcallvar_6 = __dyc_read_ptr__char();
  __dyc_funcallvar_7 = __dyc_readpre_byte();
  __dyc_funcallvar_8 = __dyc_read_ptr__int();
  __dyc_funcallvar_9 = __dyc_readpre_byte();
  __dyc_funcallvar_10 = __dyc_read_ptr__int();
  errmsg = 0;
  in = 0;
  tmp___0 = 0;
  tmp___1 = 0;
  tmp___2 = 0;
  tmp___3 = 0;
  tmp___4 = 0;
  if ((unsigned long )obj->next_input_name != (unsigned long )((void *)0)) {
    {
    tmp___0 = __dyc_funcallvar_2;
    }
    if (! tmp___0) {
      goto __dyc_dummy_label;
    }
    {
    in = __dyc_funcallvar_3;
    }
    if (in < 0) {
      {
      tmp___1 = __dyc_funcallvar_4;
      *err = *tmp___1;
      errmsg = "open temporary file";
      }
      goto __dyc_dummy_label;
    }
    if (obj->next_input_name_allocated) {
      {

      obj->next_input_name_allocated = 0;
      }
    }
    obj->next_input_name = (char *)((void *)0);
  } else {
    in = obj->next_input;
    if (in < 0) {
      *err = 0;
      errmsg = "pipeline already complete";
      goto __dyc_dummy_label;
    }
  }
  if ((flags & 1) != 0) {
    if ((unsigned long )outname == (unsigned long )((void *)0)) {
      out = 1;
    } else {
      if ((flags & 4) != 0) {
        {
        outname = __dyc_funcallvar_5;
        outname_allocated = 1;
        }
      }
    }
    obj->next_input = -1;
  } else {
    if ((obj->flags & 2) == 0) {
      {
      outname = __dyc_funcallvar_6;
      }
      if (! outname) {
        *err = 0;
        errmsg = "could not create temporary file";
        goto __dyc_dummy_label;
      }
      if ((unsigned long )outname != (unsigned long )orig_outname) {
        outname_allocated = 1;
      }
      if ((obj->flags & 4) == 0) {
        {

        outname_allocated = 0;
        }
      }
      obj->next_input_name = outname;
      obj->next_input_name_allocated = outname_allocated;
      outname_allocated = 0;
    } else {
      {
      tmp___3 = __dyc_funcallvar_7;
      }
      if (tmp___3 < 0) {
        {
        tmp___2 = __dyc_funcallvar_8;
        *err = *tmp___2;
        errmsg = "pipe";
        }
        goto __dyc_dummy_label;
      }
      out = p[1];
      obj->next_input = p[0];
    }
  }
  if (out < 0) {
    {
    out = __dyc_funcallvar_9;
    }
    if (out < 0) {
      {
      tmp___4 = __dyc_funcallvar_10;
      *err = *tmp___4;
      errmsg = "open temporary output file";
      }
      goto __dyc_dummy_label;
    }
  }
  __dyc_dummy_label:  ;
  __dyc_print_ptr__char(errmsg);
  __dyc_print_ptr__char(outname);
  __dyc_printpre_byte(outname_allocated);
}
}
