#include "../../include/dycfoo.h"
#include "../../include/cp-demangle.i.hd.c.h"
void __dyc_foo(void) 
{ int tmp___0 ;
  char const   *tmp___1 ;
  struct demangle_component *tmp___2 ;
  struct demangle_component *tmp___3 ;
  struct demangle_component *tmp___4 ;
  struct demangle_component *tmp___5 ;
  struct demangle_component *tmp___6 ;
  struct demangle_component *tmp___7 ;
  struct demangle_component *tmp___8 ;
  struct demangle_component *tmp___9 ;
  int tmp___10 ;
  struct demangle_component *tmp___11 ;
  struct demangle_component *tmp___12 ;
  int tmp___13 ;
  struct demangle_component *tmp___14 ;
  struct demangle_component *tmp___15 ;
  int tmp___16 ;
  int tmp___17 ;
  struct demangle_component *tmp___18 ;
  struct demangle_component *tmp___19 ;
  struct demangle_component *derived_type ;
  int offset ;
  struct demangle_component *base_type ;
  int tmp___20 ;
  struct demangle_component *tmp___21 ;
  struct demangle_component *tmp___22 ;
  struct demangle_component *tmp___23 ;
  struct demangle_component *tmp___24 ;
  struct demangle_component *tmp___25 ;
  struct demangle_component *tmp___26 ;
  struct demangle_component *tmp___27 ;
  struct demangle_component *tmp___28 ;
  struct demangle_component *tmp___29 ;
  struct demangle_component *tmp___30 ;
  struct demangle_component *tmp___31 ;
  struct d_info *di ;
  struct demangle_component *__dyc_funcallvar_1 ;
  struct demangle_component *__dyc_funcallvar_2 ;
  struct demangle_component *__dyc_funcallvar_3 ;
  struct demangle_component *__dyc_funcallvar_4 ;
  struct demangle_component *__dyc_funcallvar_5 ;
  struct demangle_component *__dyc_funcallvar_6 ;
  struct demangle_component *__dyc_funcallvar_7 ;
  struct demangle_component *__dyc_funcallvar_8 ;
  int __dyc_funcallvar_9 ;
  struct demangle_component *__dyc_funcallvar_10 ;
  struct demangle_component *__dyc_funcallvar_11 ;
  int __dyc_funcallvar_12 ;
  struct demangle_component *__dyc_funcallvar_13 ;
  struct demangle_component *__dyc_funcallvar_14 ;
  int __dyc_funcallvar_15 ;
  int __dyc_funcallvar_16 ;
  struct demangle_component *__dyc_funcallvar_17 ;
  struct demangle_component *__dyc_funcallvar_18 ;
  struct demangle_component *__dyc_funcallvar_19 ;
  int __dyc_funcallvar_20 ;
  struct demangle_component *__dyc_funcallvar_21 ;
  struct demangle_component *__dyc_funcallvar_22 ;
  struct demangle_component *__dyc_funcallvar_23 ;
  struct demangle_component *__dyc_funcallvar_24 ;
  struct demangle_component *__dyc_funcallvar_25 ;
  struct demangle_component *__dyc_funcallvar_26 ;
  struct demangle_component *__dyc_funcallvar_27 ;
  struct demangle_component *__dyc_funcallvar_28 ;
  struct demangle_component *__dyc_funcallvar_29 ;
  struct demangle_component *__dyc_funcallvar_30 ;
  struct demangle_component *__dyc_funcallvar_31 ;
  struct demangle_component *__dyc_funcallvar_32 ;

  {
  di = __dyc_read_ptr__comp_60d_info();
  __dyc_funcallvar_1 = __dyc_read_ptr__comp_46demangle_component();
  __dyc_funcallvar_2 = __dyc_read_ptr__comp_46demangle_component();
  __dyc_funcallvar_3 = __dyc_read_ptr__comp_46demangle_component();
  __dyc_funcallvar_4 = __dyc_read_ptr__comp_46demangle_component();
  __dyc_funcallvar_5 = __dyc_read_ptr__comp_46demangle_component();
  __dyc_funcallvar_6 = __dyc_read_ptr__comp_46demangle_component();
  __dyc_funcallvar_7 = __dyc_read_ptr__comp_46demangle_component();
  __dyc_funcallvar_8 = __dyc_read_ptr__comp_46demangle_component();
  __dyc_funcallvar_9 = __dyc_readpre_byte();
  __dyc_funcallvar_10 = __dyc_read_ptr__comp_46demangle_component();
  __dyc_funcallvar_11 = __dyc_read_ptr__comp_46demangle_component();
  __dyc_funcallvar_12 = __dyc_readpre_byte();
  __dyc_funcallvar_13 = __dyc_read_ptr__comp_46demangle_component();
  __dyc_funcallvar_14 = __dyc_read_ptr__comp_46demangle_component();
  __dyc_funcallvar_15 = __dyc_readpre_byte();
  __dyc_funcallvar_16 = __dyc_readpre_byte();
  __dyc_funcallvar_17 = __dyc_read_ptr__comp_46demangle_component();
  __dyc_funcallvar_18 = __dyc_read_ptr__comp_46demangle_component();
  __dyc_funcallvar_19 = __dyc_read_ptr__comp_46demangle_component();
  __dyc_funcallvar_20 = __dyc_readpre_byte();
  __dyc_funcallvar_21 = __dyc_read_ptr__comp_46demangle_component();
  __dyc_funcallvar_22 = __dyc_read_ptr__comp_46demangle_component();
  __dyc_funcallvar_23 = __dyc_read_ptr__comp_46demangle_component();
  __dyc_funcallvar_24 = __dyc_read_ptr__comp_46demangle_component();
  __dyc_funcallvar_25 = __dyc_read_ptr__comp_46demangle_component();
  __dyc_funcallvar_26 = __dyc_read_ptr__comp_46demangle_component();
  __dyc_funcallvar_27 = __dyc_read_ptr__comp_46demangle_component();
  __dyc_funcallvar_28 = __dyc_read_ptr__comp_46demangle_component();
  __dyc_funcallvar_29 = __dyc_read_ptr__comp_46demangle_component();
  __dyc_funcallvar_30 = __dyc_read_ptr__comp_46demangle_component();
  __dyc_funcallvar_31 = __dyc_read_ptr__comp_46demangle_component();
  __dyc_funcallvar_32 = __dyc_read_ptr__comp_46demangle_component();
  tmp___0 = 0;
  tmp___1 = 0;
  tmp___2 = 0;
  tmp___3 = 0;
  tmp___4 = 0;
  tmp___5 = 0;
  tmp___6 = 0;
  tmp___7 = 0;
  tmp___8 = 0;
  tmp___9 = 0;
  tmp___10 = 0;
  tmp___11 = 0;
  tmp___12 = 0;
  tmp___13 = 0;
  tmp___14 = 0;
  tmp___15 = 0;
  tmp___16 = 0;
  tmp___17 = 0;
  tmp___18 = 0;
  tmp___19 = 0;
  derived_type = 0;
  offset = 0;
  base_type = 0;
  tmp___20 = 0;
  tmp___21 = 0;
  tmp___22 = 0;
  tmp___23 = 0;
  tmp___24 = 0;
  tmp___25 = 0;
  tmp___26 = 0;
  tmp___27 = 0;
  tmp___28 = 0;
  tmp___29 = 0;
  tmp___30 = 0;
  tmp___31 = 0;
  if ((int const   )*(di->n) == 0) {
    tmp___0 = '\000';
  } else {
    tmp___1 = di->n;
    (di->n) ++;
    tmp___0 = (int )*tmp___1;
  }
  if (tmp___0 == 86) {
    goto switch_16_86;
  } else {
    if (tmp___0 == 84) {
      goto switch_16_84;
    } else {
      if (tmp___0 == 73) {
        goto switch_16_73;
      } else {
        if (tmp___0 == 83) {
          goto switch_16_83;
        } else {
          if (tmp___0 == 104) {
            goto switch_16_104;
          } else {
            if (tmp___0 == 118) {
              goto switch_16_118;
            } else {
              if (tmp___0 == 99) {
                goto switch_16_99;
              } else {
                if (tmp___0 == 67) {
                  goto switch_16_67;
                } else {
                  if (tmp___0 == 70) {
                    goto switch_16_70;
                  } else {
                    if (tmp___0 == 74) {
                      goto switch_16_74;
                    } else {
                      if (tmp___0 == 72) {
                        goto switch_16_72;
                      } else {
                        if (tmp___0 == 87) {
                          goto switch_16_87;
                        } else {
                          if (tmp___0 == 65) {
                            goto switch_16_65;
                          } else {
                            {
                            goto switch_16_default;
                            if (0) {
                              switch_16_86:  
                              {
                              di->expansion -= 5;
                              tmp___2 = __dyc_funcallvar_1;
                              tmp___3 = __dyc_funcallvar_2;
                              }
                              goto __dyc_dummy_label;
                              switch_16_84:  
                              {
                              di->expansion -= 10;
                              tmp___4 = __dyc_funcallvar_3;
                              tmp___5 = __dyc_funcallvar_4;
                              }
                              goto __dyc_dummy_label;
                              switch_16_73:  
                              {
                              tmp___6 = __dyc_funcallvar_5;
                              tmp___7 = __dyc_funcallvar_6;
                              }
                              goto __dyc_dummy_label;
                              switch_16_83:  
                              {
                              tmp___8 = __dyc_funcallvar_7;
                              tmp___9 = __dyc_funcallvar_8;
                              }
                              goto __dyc_dummy_label;
                              switch_16_104:  
                              {
                              tmp___10 = __dyc_funcallvar_9;
                              }
                              if (! tmp___10) {
                                goto __dyc_dummy_label;
                              }
                              {
                              tmp___11 = __dyc_funcallvar_10;
                              tmp___12 = __dyc_funcallvar_11;
                              }
                              goto __dyc_dummy_label;
                              switch_16_118:  
                              {
                              tmp___13 = __dyc_funcallvar_12;
                              }
                              if (! tmp___13) {
                                goto __dyc_dummy_label;
                              }
                              {
                              tmp___14 = __dyc_funcallvar_13;
                              tmp___15 = __dyc_funcallvar_14;
                              }
                              goto __dyc_dummy_label;
                              switch_16_99:  
                              {
                              tmp___16 = __dyc_funcallvar_15;
                              }
                              if (! tmp___16) {
                                goto __dyc_dummy_label;
                              }
                              {
                              tmp___17 = __dyc_funcallvar_16;
                              }
                              if (! tmp___17) {
                                goto __dyc_dummy_label;
                              }
                              {
                              tmp___18 = __dyc_funcallvar_17;
                              tmp___19 = __dyc_funcallvar_18;
                              }
                              goto __dyc_dummy_label;
                              switch_16_67:  
                              {
                              derived_type = __dyc_funcallvar_19;
                              offset = __dyc_funcallvar_20;
                              }
                              if (offset < 0) {
                                goto __dyc_dummy_label;
                              }
                              if ((int const   )*(di->n) == 95) {
                                (di->n) ++;
                                tmp___20 = 1;
                              } else {
                                tmp___20 = 0;
                              }
                              if (! tmp___20) {
                                goto __dyc_dummy_label;
                              }
                              {
                              base_type = __dyc_funcallvar_21;
                              di->expansion += 5;
                              tmp___21 = __dyc_funcallvar_22;
                              }
                              goto __dyc_dummy_label;
                              switch_16_70:  
                              {
                              tmp___22 = __dyc_funcallvar_23;
                              tmp___23 = __dyc_funcallvar_24;
                              }
                              goto __dyc_dummy_label;
                              switch_16_74:  
                              {
                              tmp___24 = __dyc_funcallvar_25;
                              tmp___25 = __dyc_funcallvar_26;
                              }
                              goto __dyc_dummy_label;
                              switch_16_72:  
                              {
                              tmp___26 = __dyc_funcallvar_27;
                              tmp___27 = __dyc_funcallvar_28;
                              }
                              goto __dyc_dummy_label;
                              switch_16_87:  
                              {
                              tmp___28 = __dyc_funcallvar_29;
                              tmp___29 = __dyc_funcallvar_30;
                              }
                              goto __dyc_dummy_label;
                              switch_16_65:  
                              {
                              tmp___30 = __dyc_funcallvar_31;
                              tmp___31 = __dyc_funcallvar_32;
                              }
                              goto __dyc_dummy_label;
                              switch_16_default:  ;
                              goto __dyc_dummy_label;
                            } else {
                              switch_16_break:  ;
                            }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  __dyc_dummy_label:  ;
  __dyc_print_ptr__comp_46demangle_component(tmp___2);
  __dyc_print_ptr__comp_46demangle_component(tmp___3);
  __dyc_print_ptr__comp_46demangle_component(tmp___4);
  __dyc_print_ptr__comp_46demangle_component(tmp___5);
  __dyc_print_ptr__comp_46demangle_component(tmp___6);
  __dyc_print_ptr__comp_46demangle_component(tmp___7);
  __dyc_print_ptr__comp_46demangle_component(tmp___8);
  __dyc_print_ptr__comp_46demangle_component(tmp___9);
  __dyc_print_ptr__comp_46demangle_component(tmp___11);
  __dyc_print_ptr__comp_46demangle_component(tmp___12);
  __dyc_print_ptr__comp_46demangle_component(tmp___14);
  __dyc_print_ptr__comp_46demangle_component(tmp___15);
  __dyc_print_ptr__comp_46demangle_component(tmp___18);
  __dyc_print_ptr__comp_46demangle_component(tmp___19);
  __dyc_print_ptr__comp_46demangle_component(derived_type);
  __dyc_print_ptr__comp_46demangle_component(base_type);
  __dyc_print_ptr__comp_46demangle_component(tmp___21);
  __dyc_print_ptr__comp_46demangle_component(tmp___22);
  __dyc_print_ptr__comp_46demangle_component(tmp___23);
  __dyc_print_ptr__comp_46demangle_component(tmp___24);
  __dyc_print_ptr__comp_46demangle_component(tmp___25);
  __dyc_print_ptr__comp_46demangle_component(tmp___26);
  __dyc_print_ptr__comp_46demangle_component(tmp___27);
  __dyc_print_ptr__comp_46demangle_component(tmp___28);
  __dyc_print_ptr__comp_46demangle_component(tmp___29);
  __dyc_print_ptr__comp_46demangle_component(tmp___30);
  __dyc_print_ptr__comp_46demangle_component(tmp___31);
}
}
