#include "../../include/dycfoo.h"
#include "../../include/pars0grm.i.hd.c.h"
void __dyc_foo(void) 
{ pars_res_word_t pars_to_char_token ;
  pars_res_word_t pars_to_number_token ;
  pars_res_word_t pars_to_binary_token ;
  pars_res_word_t pars_binary_to_number_token ;
  pars_res_word_t pars_substr_token ;
  pars_res_word_t pars_replstr_token ;
  pars_res_word_t pars_concat_token ;
  pars_res_word_t pars_length_token ;
  pars_res_word_t pars_instr_token ;
  pars_res_word_t pars_sysdate_token ;
  pars_res_word_t pars_printf_token ;
  pars_res_word_t pars_assert_token ;
  pars_res_word_t pars_rnd_token ;
  pars_res_word_t pars_rnd_str_token ;
  pars_res_word_t pars_update_token ;
  pars_res_word_t pars_asc_token ;
  pars_res_word_t pars_desc_token ;
  pars_res_word_t pars_consistent_token ;
  que_node_t **yyvsp ;
  que_node_t *yyval ;
  func_node_t *tmp___8 ;
  func_node_t *tmp___9 ;
  func_node_t *tmp___10 ;
  func_node_t *tmp___11 ;
  func_node_t *tmp___12 ;
  func_node_t *tmp___13 ;
  func_node_t *tmp___14 ;
  func_node_t *tmp___15 ;
  func_node_t *tmp___16 ;
  func_node_t *tmp___17 ;
  que_fork_t *tmp___18 ;
  func_node_t *tmp___19 ;
  sym_node_t *tmp___20 ;
  que_node_t *tmp___21 ;
  func_node_t *tmp___22 ;
  que_node_t *tmp___23 ;
  func_node_t *tmp___24 ;
  que_node_t *tmp___25 ;
  func_node_t *tmp___26 ;
  que_node_t *tmp___27 ;
  func_node_t *tmp___28 ;
  sel_node_t *tmp___29 ;
  sel_node_t *tmp___30 ;
  sel_node_t *tmp___31 ;
  order_node_t *tmp___32 ;
  func_node_t *__dyc_funcallvar_14 ;
  func_node_t *__dyc_funcallvar_15 ;
  func_node_t *__dyc_funcallvar_16 ;
  func_node_t *__dyc_funcallvar_17 ;
  func_node_t *__dyc_funcallvar_18 ;
  func_node_t *__dyc_funcallvar_19 ;
  func_node_t *__dyc_funcallvar_20 ;
  func_node_t *__dyc_funcallvar_21 ;
  func_node_t *__dyc_funcallvar_22 ;
  que_fork_t *__dyc_funcallvar_23 ;
  func_node_t *__dyc_funcallvar_24 ;
  que_node_t *__dyc_funcallvar_25 ;
  que_node_t *__dyc_funcallvar_26 ;
  que_node_t *__dyc_funcallvar_27 ;
  que_node_t *__dyc_funcallvar_28 ;
  que_node_t *__dyc_funcallvar_29 ;
  que_node_t *__dyc_funcallvar_30 ;
  sym_node_t *__dyc_funcallvar_31 ;
  que_node_t *__dyc_funcallvar_32 ;
  func_node_t *__dyc_funcallvar_33 ;
  que_node_t *__dyc_funcallvar_34 ;
  func_node_t *__dyc_funcallvar_35 ;
  que_node_t *__dyc_funcallvar_36 ;
  func_node_t *__dyc_funcallvar_37 ;
  que_node_t *__dyc_funcallvar_38 ;
  func_node_t *__dyc_funcallvar_39 ;
  que_node_t *__dyc_funcallvar_40 ;
  que_node_t *__dyc_funcallvar_41 ;
  sel_node_t *__dyc_funcallvar_42 ;
  sel_node_t *__dyc_funcallvar_43 ;
  sel_node_t *__dyc_funcallvar_44 ;
  order_node_t *__dyc_funcallvar_45 ;

  {
  pars_to_char_token = __dyc_read_comp_132pars_res_word_struct();
  pars_to_number_token = __dyc_read_comp_132pars_res_word_struct();
  pars_to_binary_token = __dyc_read_comp_132pars_res_word_struct();
  pars_binary_to_number_token = __dyc_read_comp_132pars_res_word_struct();
  pars_substr_token = __dyc_read_comp_132pars_res_word_struct();
  pars_replstr_token = __dyc_read_comp_132pars_res_word_struct();
  pars_concat_token = __dyc_read_comp_132pars_res_word_struct();
  pars_length_token = __dyc_read_comp_132pars_res_word_struct();
  pars_instr_token = __dyc_read_comp_132pars_res_word_struct();
  pars_sysdate_token = __dyc_read_comp_132pars_res_word_struct();
  pars_printf_token = __dyc_read_comp_132pars_res_word_struct();
  pars_assert_token = __dyc_read_comp_132pars_res_word_struct();
  pars_rnd_token = __dyc_read_comp_132pars_res_word_struct();
  pars_rnd_str_token = __dyc_read_comp_132pars_res_word_struct();
  pars_update_token = __dyc_read_comp_132pars_res_word_struct();
  pars_asc_token = __dyc_read_comp_132pars_res_word_struct();
  pars_desc_token = __dyc_read_comp_132pars_res_word_struct();
  pars_consistent_token = __dyc_read_comp_132pars_res_word_struct();
  yyvsp = __dyc_read_ptr__ptr__typdef_que_node_t();
  tmp___8 = __dyc_read_ptr__typdef_func_node_t();
  __dyc_funcallvar_14 = __dyc_read_ptr__typdef_func_node_t();
  __dyc_funcallvar_15 = __dyc_read_ptr__typdef_func_node_t();
  __dyc_funcallvar_16 = __dyc_read_ptr__typdef_func_node_t();
  __dyc_funcallvar_17 = __dyc_read_ptr__typdef_func_node_t();
  __dyc_funcallvar_18 = __dyc_read_ptr__typdef_func_node_t();
  __dyc_funcallvar_19 = __dyc_read_ptr__typdef_func_node_t();
  __dyc_funcallvar_20 = __dyc_read_ptr__typdef_func_node_t();
  __dyc_funcallvar_21 = __dyc_read_ptr__typdef_func_node_t();
  __dyc_funcallvar_22 = __dyc_read_ptr__typdef_func_node_t();
  __dyc_funcallvar_23 = __dyc_read_ptr__typdef_que_fork_t();
  __dyc_funcallvar_24 = __dyc_read_ptr__typdef_func_node_t();
  __dyc_funcallvar_25 = __dyc_read_ptr__typdef_que_node_t();
  __dyc_funcallvar_26 = __dyc_read_ptr__typdef_que_node_t();
  __dyc_funcallvar_27 = __dyc_read_ptr__typdef_que_node_t();
  __dyc_funcallvar_28 = __dyc_read_ptr__typdef_que_node_t();
  __dyc_funcallvar_29 = __dyc_read_ptr__typdef_que_node_t();
  __dyc_funcallvar_30 = __dyc_read_ptr__typdef_que_node_t();
  __dyc_funcallvar_31 = __dyc_read_ptr__typdef_sym_node_t();
  __dyc_funcallvar_32 = __dyc_read_ptr__typdef_que_node_t();
  __dyc_funcallvar_33 = __dyc_read_ptr__typdef_func_node_t();
  __dyc_funcallvar_34 = __dyc_read_ptr__typdef_que_node_t();
  __dyc_funcallvar_35 = __dyc_read_ptr__typdef_func_node_t();
  __dyc_funcallvar_36 = __dyc_read_ptr__typdef_que_node_t();
  __dyc_funcallvar_37 = __dyc_read_ptr__typdef_func_node_t();
  __dyc_funcallvar_38 = __dyc_read_ptr__typdef_que_node_t();
  __dyc_funcallvar_39 = __dyc_read_ptr__typdef_func_node_t();
  __dyc_funcallvar_40 = __dyc_read_ptr__typdef_que_node_t();
  __dyc_funcallvar_41 = __dyc_read_ptr__typdef_que_node_t();
  __dyc_funcallvar_42 = __dyc_read_ptr__typdef_sel_node_t();
  __dyc_funcallvar_43 = __dyc_read_ptr__typdef_sel_node_t();
  __dyc_funcallvar_44 = __dyc_read_ptr__typdef_sel_node_t();
  __dyc_funcallvar_45 = __dyc_read_ptr__typdef_order_node_t();
  yyval = 0;
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
  tmp___32 = 0;
  yyval = (que_node_t *)tmp___8;
  goto __dyc_dummy_label;
  tmp___9 = __dyc_funcallvar_14;
  yyval = (que_node_t *)tmp___9;
  goto __dyc_dummy_label;
  tmp___10 = __dyc_funcallvar_15;
  yyval = (que_node_t *)tmp___10;
  goto __dyc_dummy_label;
  tmp___11 = __dyc_funcallvar_16;
  yyval = (que_node_t *)tmp___11;
  goto __dyc_dummy_label;
  tmp___12 = __dyc_funcallvar_17;
  yyval = (que_node_t *)tmp___12;
  goto __dyc_dummy_label;
  tmp___13 = __dyc_funcallvar_18;
  yyval = (que_node_t *)tmp___13;
  goto __dyc_dummy_label;
  tmp___14 = __dyc_funcallvar_19;
  yyval = (que_node_t *)tmp___14;
  goto __dyc_dummy_label;
  tmp___15 = __dyc_funcallvar_20;
  yyval = (que_node_t *)tmp___15;
  goto __dyc_dummy_label;
  tmp___16 = __dyc_funcallvar_21;
  yyval = (que_node_t *)tmp___16;
  goto __dyc_dummy_label;
  tmp___17 = __dyc_funcallvar_22;
  yyval = (que_node_t *)tmp___17;
  goto __dyc_dummy_label;
  switch_2_49:  
  yyval = (que_node_t *)(& pars_to_char_token);
  goto __dyc_dummy_label;
  switch_2_50:  
  yyval = (que_node_t *)(& pars_to_number_token);
  goto __dyc_dummy_label;
  switch_2_51:  
  yyval = (que_node_t *)(& pars_to_binary_token);
  goto __dyc_dummy_label;
  switch_2_52:  
  yyval = (que_node_t *)(& pars_binary_to_number_token);
  goto __dyc_dummy_label;
  switch_2_53:  
  yyval = (que_node_t *)(& pars_substr_token);
  goto __dyc_dummy_label;
  switch_2_54:  
  yyval = (que_node_t *)(& pars_concat_token);
  goto __dyc_dummy_label;
  switch_2_55:  
  yyval = (que_node_t *)(& pars_instr_token);
  goto __dyc_dummy_label;
  switch_2_56:  
  yyval = (que_node_t *)(& pars_length_token);
  goto __dyc_dummy_label;
  switch_2_57:  
  yyval = (que_node_t *)(& pars_sysdate_token);
  goto __dyc_dummy_label;
  switch_2_58:  
  yyval = (que_node_t *)(& pars_rnd_token);
  goto __dyc_dummy_label;
  switch_2_59:  
  yyval = (que_node_t *)(& pars_rnd_str_token);
  goto __dyc_dummy_label;
  tmp___18 = __dyc_funcallvar_23;
  yyval = (que_node_t *)tmp___18;
  goto __dyc_dummy_label;
  tmp___19 = __dyc_funcallvar_24;
  yyval = (que_node_t *)tmp___19;
  goto __dyc_dummy_label;
  switch_2_65:  
  yyval = (que_node_t *)(& pars_replstr_token);
  goto __dyc_dummy_label;
  switch_2_66:  
  yyval = (que_node_t *)(& pars_printf_token);
  goto __dyc_dummy_label;
  switch_2_67:  
  yyval = (que_node_t *)(& pars_assert_token);
  goto __dyc_dummy_label;
  yyval = __dyc_funcallvar_25;
  goto __dyc_dummy_label;
  yyval = __dyc_funcallvar_26;
  goto __dyc_dummy_label;
  switch_2_70:  
  yyval = (void *)0;
  goto __dyc_dummy_label;
  yyval = __dyc_funcallvar_27;
  goto __dyc_dummy_label;
  yyval = __dyc_funcallvar_28;
  goto __dyc_dummy_label;
  switch_2_73:  
  yyval = (void *)0;
  goto __dyc_dummy_label;
  yyval = __dyc_funcallvar_29;
  goto __dyc_dummy_label;
  yyval = __dyc_funcallvar_30;
  goto __dyc_dummy_label;
  switch_2_76:  
  yyval = *(yyvsp + 0);
  goto __dyc_dummy_label;
  tmp___20 = __dyc_funcallvar_31;
  tmp___21 = __dyc_funcallvar_32;
  tmp___22 = __dyc_funcallvar_33;
  yyval = (que_node_t *)tmp___22;
  goto __dyc_dummy_label;
  tmp___23 = __dyc_funcallvar_34;
  tmp___24 = __dyc_funcallvar_35;
  tmp___25 = __dyc_funcallvar_36;
  tmp___26 = __dyc_funcallvar_37;
  yyval = (que_node_t *)tmp___26;
  goto __dyc_dummy_label;
  tmp___27 = __dyc_funcallvar_38;
  tmp___28 = __dyc_funcallvar_39;
  yyval = (que_node_t *)tmp___28;
  goto __dyc_dummy_label;
  switch_2_80:  
  yyval = (void *)0;
  goto __dyc_dummy_label;
  yyval = __dyc_funcallvar_40;
  goto __dyc_dummy_label;
  yyval = __dyc_funcallvar_41;
  goto __dyc_dummy_label;
  tmp___29 = __dyc_funcallvar_42;
  yyval = (que_node_t *)tmp___29;
  goto __dyc_dummy_label;
  tmp___30 = __dyc_funcallvar_43;
  yyval = (que_node_t *)tmp___30;
  goto __dyc_dummy_label;
  tmp___31 = __dyc_funcallvar_44;
  yyval = (que_node_t *)tmp___31;
  goto __dyc_dummy_label;
  switch_2_86:  
  yyval = (void *)0;
  goto __dyc_dummy_label;
  switch_2_87:  
  yyval = *(yyvsp + 0);
  goto __dyc_dummy_label;
  switch_2_88:  
  yyval = (void *)0;
  goto __dyc_dummy_label;
  switch_2_89:  
  yyval = (que_node_t *)(& pars_update_token);
  goto __dyc_dummy_label;
  switch_2_90:  
  yyval = (void *)0;
  goto __dyc_dummy_label;
  switch_2_91:  
  yyval = (que_node_t *)(& pars_consistent_token);
  goto __dyc_dummy_label;
  switch_2_92:  
  yyval = (que_node_t *)(& pars_asc_token);
  goto __dyc_dummy_label;
  switch_2_93:  
  yyval = (que_node_t *)(& pars_asc_token);
  goto __dyc_dummy_label;
  switch_2_94:  
  yyval = (que_node_t *)(& pars_desc_token);
  goto __dyc_dummy_label;
  switch_2_95:  
  yyval = (void *)0;
  goto __dyc_dummy_label;
  tmp___32 = __dyc_funcallvar_45;
  yyval = (que_node_t *)tmp___32;
  __dyc_dummy_label:  ;
  __dyc_print_ptr__typdef_que_node_t(yyval);
  __dyc_print_ptr__typdef_sym_node_t(tmp___20);
  __dyc_print_ptr__typdef_que_node_t(tmp___21);
  __dyc_print_ptr__typdef_que_node_t(tmp___23);
  __dyc_print_ptr__typdef_func_node_t(tmp___24);
  __dyc_print_ptr__typdef_que_node_t(tmp___25);
  __dyc_print_ptr__typdef_que_node_t(tmp___27);
}
}
