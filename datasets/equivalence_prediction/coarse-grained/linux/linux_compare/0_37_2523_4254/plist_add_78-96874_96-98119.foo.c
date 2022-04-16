#include "../../include/dycfoo.h"
#include "../../include/plist.i.hd.c.h"
void __dyc_foo(void) 
{ struct plist_node *iter ;
  int __ret_warn_on ;
  int tmp___0 ;
  long tmp___1 ;
  struct list_head  const  *__mptr ;
  struct list_head  const  *__mptr___0 ;
  struct list_head  const  *__mptr___1 ;
  struct plist_node *node ;
  struct plist_head *head ;
  long __dyc_funcallvar_2 ;

  {
  tmp___0 = __dyc_readpre_byte();
  node = __dyc_read_ptr__comp_49plist_node();
  head = __dyc_read_ptr__comp_48plist_head();
  __dyc_funcallvar_2 = (long )__dyc_readpre_byte();
  iter = 0;
  __ret_warn_on = 0;
  tmp___1 = 0;
  __mptr = 0;
  __mptr___0 = 0;
  __mptr___1 = 0;
  __ret_warn_on = tmp___0;
  tmp___1 = __dyc_funcallvar_2;
  if (tmp___1) {
    {


    }
  }

  __mptr = (struct list_head  const  *)head->prio_list.next;
  iter = (struct plist_node *)((char *)__mptr - (unsigned int )(& ((struct plist_node *)0)->plist.prio_list));
  while (1) {
    while_1_continue:  ;
    {

    }
    if (! ((unsigned long )(& iter->plist.prio_list) != (unsigned long )(& head->prio_list))) {
      goto while_1_break;
    }
    if (node->prio < iter->prio) {
      goto __dyc_dummy_label;
    } else {
      if (node->prio == iter->prio) {
        __mptr___1 = (struct list_head  const  *)iter->plist.prio_list.next;
        iter = (struct plist_node *)((char *)__mptr___1 - (unsigned int )(& ((struct plist_node *)0)->plist.prio_list));
        goto __dyc_dummy_label;
      }
    }
    __mptr___0 = (struct list_head  const  *)iter->plist.prio_list.next;
    iter = (struct plist_node *)((char *)__mptr___0 - (unsigned int )(& ((struct plist_node *)0)->plist.prio_list));
  }
  while_1_break:  ;


  while (1) {
    while_2_continue:  ;
    goto while_2_break;
  }
  while_2_break:  ;
  goto __dyc_dummy_label;
  __dyc_dummy_label:  ;
  __dyc_print_ptr__comp_49plist_node(iter);
  __dyc_printpre_byte(__ret_warn_on);
}
}
