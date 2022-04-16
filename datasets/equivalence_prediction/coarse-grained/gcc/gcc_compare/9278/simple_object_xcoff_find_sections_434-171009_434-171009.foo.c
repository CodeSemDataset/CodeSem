#include "../../include/dycfoo.h"
#include "../../include/simple-object-xcoff.i.hd.c.h"
void __dyc_foo(void) 
{ int u64 ;
  size_t scnhdr_size ;
  unsigned char *scnbuf ;
  unsigned int nscns ;
  char *strtab ;
  size_t strtab_size ;
  unsigned int i ;
  unsigned char *scnhdr ;
  unsigned char *scnname ;
  char namebuf[9] ;
  char *name ;
  off_t scnptr ;
  off_t size ;
  size_t strindex ;
  char *end ;
  long tmp___1 ;
  ulong_type tmp___2 ;
  ulong_type tmp___3 ;
  unsigned int tmp___4 ;
  unsigned int tmp___5 ;
  int tmp___6 ;
  int *err ;
  long __dyc_funcallvar_3 ;
  char *__dyc_funcallvar_4 ;
  ulong_type __dyc_funcallvar_5 ;
  ulong_type __dyc_funcallvar_6 ;
  unsigned int __dyc_funcallvar_7 ;
  unsigned int __dyc_funcallvar_8 ;
  int __dyc_funcallvar_9 ;

  {
  u64 = __dyc_readpre_byte();
  scnhdr_size = (size_t )__dyc_readpre_byte();
  scnbuf = (unsigned char *)__dyc_read_ptr__char();
  nscns = (unsigned int )__dyc_readpre_byte();
  strtab = __dyc_read_ptr__char();
  strtab_size = (size_t )__dyc_readpre_byte();
  i = (unsigned int )__dyc_readpre_byte();
  end = __dyc_read_ptr__char();
  err = __dyc_read_ptr__int();
  __dyc_funcallvar_3 = (long )__dyc_readpre_byte();
  __dyc_funcallvar_4 = __dyc_read_ptr__char();
  __dyc_funcallvar_5 = (ulong_type )__dyc_readpre_byte();
  __dyc_funcallvar_6 = (ulong_type )__dyc_readpre_byte();
  __dyc_funcallvar_7 = (unsigned int )__dyc_readpre_byte();
  __dyc_funcallvar_8 = (unsigned int )__dyc_readpre_byte();
  __dyc_funcallvar_9 = __dyc_readpre_byte();
  scnhdr = 0;
  scnname = 0;
  name = 0;
  scnptr = 0;
  size = 0;
  strindex = 0;
  tmp___1 = 0;
  tmp___2 = 0;
  tmp___3 = 0;
  tmp___4 = 0;
  tmp___5 = 0;
  tmp___6 = 0;
  if (! (i < nscns)) {
    goto __dyc_dummy_label;
  }
  scnhdr = scnbuf + (size_t )i * scnhdr_size;
  scnname = scnhdr + (unsigned int )(& ((struct external_scnhdr *)0)->s_name);

  namebuf[8] = (char )'\000';
  name = namebuf;
  if ((int )namebuf[0] == 47) {
    {
    tmp___1 = __dyc_funcallvar_3;
    strindex = (unsigned long )tmp___1;
    }
    if ((int )*end == 0) {
      if ((unsigned long )strtab == (unsigned long )((void *)0)) {
        {
        strtab = __dyc_funcallvar_4;
        }
        if ((unsigned long )strtab == (unsigned long )((void *)0)) {
          {

          }
          goto __dyc_dummy_label;
        }
      }
      if (strindex < 4UL) {
        {


        *err = 0;
        }
        goto __dyc_dummy_label;
      } else {
        if (strindex >= strtab_size) {
          {


          *err = 0;
          }
          goto __dyc_dummy_label;
        }
      }
      name = strtab + strindex;
    }
  }
  if (u64) {
    {
    tmp___2 = __dyc_funcallvar_5;
    scnptr = (long )tmp___2;
    tmp___3 = __dyc_funcallvar_6;
    size = (long )tmp___3;
    }
  } else {
    {
    tmp___4 = __dyc_funcallvar_7;
    scnptr = (long )tmp___4;
    tmp___5 = __dyc_funcallvar_8;
    size = (long )tmp___5;
    }
  }
  tmp___6 = __dyc_funcallvar_9;
  if (! tmp___6) {
    goto __dyc_dummy_label;
  }
  i ++;
  __dyc_dummy_label:  ;
  __dyc_printpre_byte(i);
  __dyc_print_ptr__char(scnname);
  __dyc_print_ptr__char(name);
  __dyc_printpre_byte(scnptr);
  __dyc_printpre_byte(size);
  __dyc_printpre_byte(strindex);
}
}
