#include "../../include/dycfoo.h"
#include "../../include/tool_help.i.hd.c.h"
void __dyc_foo(void) 
{ curl_version_info_data *curlinfo ;
  struct feat  const  feats[28] ;
  char const   * const  *proto ;
  char *tmp ;
  char *featp[sizeof(struct feat  const  [28]) / sizeof(struct feat  const  ) + 1UL] ;
  size_t numfeat ;
  unsigned int i ;
  size_t tmp___0 ;
  char *__dyc_funcallvar_1 ;

  {
  curlinfo = __dyc_read_ptr__typdef_curl_version_info_data();
  __dyc_funcallvar_1 = __dyc_read_ptr__char();
  proto = 0;
  tmp = 0;
  numfeat = 0;
  i = 0;
  tmp___0 = 0;
  tmp = __dyc_funcallvar_1;


  if (curlinfo->protocols) {
    {

    proto = curlinfo->protocols;
    }
    {
    while (1) {
      while_3_continue:  ;
      if (! *proto) {
        goto while_3_break;
      }
      {

      proto ++;
      }
    }
    while_3_break:  ;
    }
    {

    }
  }
  if (curlinfo->features) {
    {
    numfeat = (size_t )0;

    i = 0U;
    }
    {
    while (1) {
      while_4_continue:  ;
      if (! ((unsigned long )i < sizeof(struct feat  const  [28]) / sizeof(struct feat  const  ))) {
        goto while_4_break;
      }
      if (curlinfo->features & (int )feats[i].bitmask) {
        tmp___0 = numfeat;
        numfeat ++;
        featp[tmp___0] = (char *)feats[i].name;
      }
      i ++;
    }
    while_4_break:  ;
    }
    {

    i = 0U;
    }
    {
    while (1) {
      while_5_continue:  ;
      if (! ((size_t )i < numfeat)) {
        goto while_5_break;
      }
      {

      i ++;
      }
    }
    while_5_break:  ;
    }
    {

    }
  }
  __dyc_dummy_label:  ;
  __dyc_print_ptr__char(tmp);
}
}
