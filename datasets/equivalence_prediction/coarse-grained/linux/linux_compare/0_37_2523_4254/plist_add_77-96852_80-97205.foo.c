#include "../../include/dycfoo.h"
#include "../../include/plist.i.hd.c.h"
void __dyc_foo(void) 
{ struct plist_node *iter ;
  int __ret_warn_on ;
  int tmp ;
  int tmp___0 ;
  long tmp___1 ;
  struct list_head  const  *__mptr ;
  struct plist_head *head ;
  int __dyc_funcallvar_1 ;
  long __dyc_funcallvar_2 ;

  {
  head = __dyc_read_ptr__comp_48plist_head();
  __dyc_funcallvar_1 = __dyc_readpre_byte();
  __dyc_funcallvar_2 = (long )__dyc_readpre_byte();
  iter = 0;
  __ret_warn_on = 0;
  tmp = 0;
  tmp___0 = 0;
  tmp___1 = 0;
  __mptr = 0;
  while (1) {
    while_0_continue:  ;
    goto while_0_break;
  }
  while_0_break:  ;
  tmp = __dyc_funcallvar_1;
  if (tmp) {
    tmp___0 = 0;
  } else {
    tmp___0 = 1;
  }
  __ret_warn_on = tmp___0;
  tmp___1 = __dyc_funcallvar_2;
  if (tmp___1) {
    {


    }
  }

  __mptr = (struct list_head  const  *)head->prio_list.next;
  iter = (struct plist_node *)((char *)__mptr - (unsigned int )(& ((struct plist_node *)0)->plist.prio_list));
  __dyc_dummy_label:  ;
  __dyc_print_ptr__comp_49plist_node(iter);
  __dyc_printpre_byte(__ret_warn_on);
}
}
