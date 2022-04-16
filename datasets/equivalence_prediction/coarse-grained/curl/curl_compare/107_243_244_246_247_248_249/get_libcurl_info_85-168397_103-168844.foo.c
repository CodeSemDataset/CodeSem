#include "../../include/dycfoo.h"
#include "../../include/tool_libinfo.i.hd.c.h"
void __dyc_foo(void) 
{ curl_version_info_data *curlinfo ;
  long built_in_protos ;
  struct proto_name_pattern  const  possibly_built_in[27] ;
  char const   * const  *proto ;
  struct proto_name_pattern  const  *p ;
  int tmp ;
  curl_version_info_data *__dyc_funcallvar_1 ;
  int __dyc_funcallvar_2 ;

  {
  __dyc_funcallvar_1 = __dyc_read_ptr__typdef_curl_version_info_data();
  __dyc_funcallvar_2 = __dyc_readpre_byte();
  curlinfo = 0;
  built_in_protos = 0;
  proto = 0;
  p = 0;
  tmp = 0;
  curlinfo = __dyc_funcallvar_1;
  if (! curlinfo) {
    goto __dyc_dummy_label;
  }
  built_in_protos = 0L;
  if (curlinfo->protocols) {
    proto = curlinfo->protocols;
    {
    while (1) {
      while_0_continue:  ;
      if (! *proto) {
        goto while_0_break;
      }
      p = possibly_built_in;
      {
      while (1) {
        while_1_continue:  ;
        if (! p->proto_name) {
          goto while_1_break;
        }
        {
        tmp = __dyc_funcallvar_2;
        }
        if (tmp) {
          built_in_protos |= (long )p->proto_pattern;
          goto while_1_break;
        }
        p ++;
      }
      while_1_break:  ;
      }
      proto ++;
    }
    while_0_break:  ;
    }
  }
  goto __dyc_dummy_label;
  __dyc_dummy_label:  ;
  __dyc_printpre_byte(built_in_protos);
}
}
