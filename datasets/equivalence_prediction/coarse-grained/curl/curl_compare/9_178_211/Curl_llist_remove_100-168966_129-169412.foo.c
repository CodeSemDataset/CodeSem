#include "../../include/dycfoo.h"
#include "../../include/llist.i.hd.c.h"
void __dyc_foo(void) 
{ void *ptr ;
  struct Curl_llist *list ;
  struct Curl_llist_element *e ;

  {
  list = __dyc_read_ptr__comp_78Curl_llist();
  e = __dyc_read_ptr__comp_77Curl_llist_element();
  ptr = 0;
  if ((unsigned long )e == (unsigned long )list->head) {
    list->head = e->next;
    if (! list->head) {
      list->tail = (struct Curl_llist_element *)((void *)0);
    } else {
      (e->next)->prev = (struct Curl_llist_element *)((void *)0);
    }
  } else {
    if (! e->prev) {
      list->head = e->next;
    } else {
      (e->prev)->next = e->next;
    }
    if (! e->next) {
      list->tail = e->prev;
    } else {
      (e->next)->prev = e->prev;
    }
  }
  ptr = e->ptr;
  e->ptr = (void *)0;
  e->prev = (struct Curl_llist_element *)((void *)0);
  e->next = (struct Curl_llist_element *)((void *)0);
  (list->size) --;
  if (list->dtor) {
    {

    }
  }
  __dyc_dummy_label:  ;
  __dyc_print_ptr__void(ptr);
}
}
