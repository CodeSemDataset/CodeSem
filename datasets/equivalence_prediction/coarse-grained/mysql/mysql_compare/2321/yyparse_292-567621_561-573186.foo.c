#include "../../include/dycfoo.h"
#include "../../include/pars0grm.i.hd.c.h"
void __dyc_foo(void) 
{ pars_res_word_t pars_int_token ;
  pars_res_word_t pars_char_token ;
  pars_res_word_t pars_asc_token ;
  pars_res_word_t pars_desc_token ;
  pars_res_word_t pars_consistent_token ;
  pars_res_word_t pars_unique_token ;
  pars_res_word_t pars_clustered_token ;
  que_node_t **yyvsp ;
  que_node_t *yyval ;
  order_node_t *tmp___32 ;
  sel_node_t *tmp___33 ;
  ins_node_t *tmp___34 ;
  ins_node_t *tmp___35 ;
  col_assign_node_t *tmp___36 ;
  upd_node_t *tmp___37 ;
  upd_node_t *tmp___38 ;
  upd_node_t *tmp___39 ;
  upd_node_t *tmp___40 ;
  upd_node_t *tmp___41 ;
  upd_node_t *tmp___42 ;
  row_printf_node_t *tmp___43 ;
  assign_node_t *tmp___44 ;
  elsif_node_t *tmp___45 ;
  if_node_t *tmp___46 ;
  while_node_t *tmp___47 ;
  for_node_t *tmp___48 ;
  return_node_t *tmp___49 ;
  open_node_t *tmp___50 ;
  open_node_t *tmp___51 ;
  fetch_node_t *tmp___52 ;
  sym_node_t *tmp___53 ;
  tab_node_t *tmp___54 ;
  ind_node_t *tmp___55 ;
  commit_node_t *tmp___56 ;
  roll_node_t *tmp___57 ;
  sym_node_t *tmp___58 ;
  sym_node_t *tmp___59 ;
  sym_node_t *tmp___60 ;
  que_fork_t *tmp___61 ;
  order_node_t *__dyc_funcallvar_45 ;
  sel_node_t *__dyc_funcallvar_46 ;
  ins_node_t *__dyc_funcallvar_47 ;
  ins_node_t *__dyc_funcallvar_48 ;
  col_assign_node_t *__dyc_funcallvar_49 ;
  que_node_t *__dyc_funcallvar_50 ;
  que_node_t *__dyc_funcallvar_51 ;
  upd_node_t *__dyc_funcallvar_52 ;
  upd_node_t *__dyc_funcallvar_53 ;
  upd_node_t *__dyc_funcallvar_54 ;
  upd_node_t *__dyc_funcallvar_55 ;
  upd_node_t *__dyc_funcallvar_56 ;
  upd_node_t *__dyc_funcallvar_57 ;
  row_printf_node_t *__dyc_funcallvar_58 ;
  assign_node_t *__dyc_funcallvar_59 ;
  elsif_node_t *__dyc_funcallvar_60 ;
  que_node_t *__dyc_funcallvar_61 ;
  que_node_t *__dyc_funcallvar_62 ;
  if_node_t *__dyc_funcallvar_63 ;
  while_node_t *__dyc_funcallvar_64 ;
  for_node_t *__dyc_funcallvar_65 ;
  return_node_t *__dyc_funcallvar_66 ;
  open_node_t *__dyc_funcallvar_67 ;
  open_node_t *__dyc_funcallvar_68 ;
  fetch_node_t *__dyc_funcallvar_69 ;
  sym_node_t *__dyc_funcallvar_70 ;
  que_node_t *__dyc_funcallvar_71 ;
  que_node_t *__dyc_funcallvar_72 ;
  tab_node_t *__dyc_funcallvar_73 ;
  que_node_t *__dyc_funcallvar_74 ;
  que_node_t *__dyc_funcallvar_75 ;
  ind_node_t *__dyc_funcallvar_76 ;
  commit_node_t *__dyc_funcallvar_77 ;
  roll_node_t *__dyc_funcallvar_78 ;
  sym_node_t *__dyc_funcallvar_79 ;
  sym_node_t *__dyc_funcallvar_80 ;
  que_node_t *__dyc_funcallvar_81 ;
  que_node_t *__dyc_funcallvar_82 ;
  sym_node_t *__dyc_funcallvar_83 ;
  que_node_t *__dyc_funcallvar_84 ;
  que_fork_t *__dyc_funcallvar_85 ;

  {
  pars_int_token = __dyc_read_comp_132pars_res_word_struct();
  pars_char_token = __dyc_read_comp_132pars_res_word_struct();
  pars_asc_token = __dyc_read_comp_132pars_res_word_struct();
  pars_desc_token = __dyc_read_comp_132pars_res_word_struct();
  pars_consistent_token = __dyc_read_comp_132pars_res_word_struct();
  pars_unique_token = __dyc_read_comp_132pars_res_word_struct();
  pars_clustered_token = __dyc_read_comp_132pars_res_word_struct();
  yyvsp = __dyc_read_ptr__ptr__typdef_que_node_t();
  __dyc_funcallvar_45 = __dyc_read_ptr__typdef_order_node_t();
  __dyc_funcallvar_46 = __dyc_read_ptr__typdef_sel_node_t();
  __dyc_funcallvar_47 = (ins_node_t *)__dyc_read_ptr__typdef_ins_node_t();
  __dyc_funcallvar_48 = (ins_node_t *)__dyc_read_ptr__typdef_ins_node_t();
  __dyc_funcallvar_49 = __dyc_read_ptr__typdef_col_assign_node_t();
  __dyc_funcallvar_50 = __dyc_read_ptr__typdef_que_node_t();
  __dyc_funcallvar_51 = __dyc_read_ptr__typdef_que_node_t();
  __dyc_funcallvar_52 = (upd_node_t *)__dyc_read_ptr__typdef_upd_node_t();
  __dyc_funcallvar_53 = (upd_node_t *)__dyc_read_ptr__typdef_upd_node_t();
  __dyc_funcallvar_54 = (upd_node_t *)__dyc_read_ptr__typdef_upd_node_t();
  __dyc_funcallvar_55 = (upd_node_t *)__dyc_read_ptr__typdef_upd_node_t();
  __dyc_funcallvar_56 = (upd_node_t *)__dyc_read_ptr__typdef_upd_node_t();
  __dyc_funcallvar_57 = (upd_node_t *)__dyc_read_ptr__typdef_upd_node_t();
  __dyc_funcallvar_58 = __dyc_read_ptr__typdef_row_printf_node_t();
  __dyc_funcallvar_59 = __dyc_read_ptr__typdef_assign_node_t();
  __dyc_funcallvar_60 = __dyc_read_ptr__typdef_elsif_node_t();
  __dyc_funcallvar_61 = __dyc_read_ptr__typdef_que_node_t();
  __dyc_funcallvar_62 = __dyc_read_ptr__typdef_que_node_t();
  __dyc_funcallvar_63 = __dyc_read_ptr__typdef_if_node_t();
  __dyc_funcallvar_64 = __dyc_read_ptr__typdef_while_node_t();
  __dyc_funcallvar_65 = __dyc_read_ptr__typdef_for_node_t();
  __dyc_funcallvar_66 = __dyc_read_ptr__typdef_return_node_t();
  __dyc_funcallvar_67 = __dyc_read_ptr__typdef_open_node_t();
  __dyc_funcallvar_68 = __dyc_read_ptr__typdef_open_node_t();
  __dyc_funcallvar_69 = __dyc_read_ptr__typdef_fetch_node_t();
  __dyc_funcallvar_70 = __dyc_read_ptr__typdef_sym_node_t();
  __dyc_funcallvar_71 = __dyc_read_ptr__typdef_que_node_t();
  __dyc_funcallvar_72 = __dyc_read_ptr__typdef_que_node_t();
  __dyc_funcallvar_73 = (tab_node_t *)__dyc_read_ptr__typdef_tab_node_t();
  __dyc_funcallvar_74 = __dyc_read_ptr__typdef_que_node_t();
  __dyc_funcallvar_75 = __dyc_read_ptr__typdef_que_node_t();
  __dyc_funcallvar_76 = (ind_node_t *)__dyc_read_ptr__typdef_ind_node_t();
  __dyc_funcallvar_77 = __dyc_read_ptr__typdef_commit_node_t();
  __dyc_funcallvar_78 = (roll_node_t *)__dyc_read_ptr__typdef_roll_node_t();
  __dyc_funcallvar_79 = __dyc_read_ptr__typdef_sym_node_t();
  __dyc_funcallvar_80 = __dyc_read_ptr__typdef_sym_node_t();
  __dyc_funcallvar_81 = __dyc_read_ptr__typdef_que_node_t();
  __dyc_funcallvar_82 = __dyc_read_ptr__typdef_que_node_t();
  __dyc_funcallvar_83 = __dyc_read_ptr__typdef_sym_node_t();
  __dyc_funcallvar_84 = __dyc_read_ptr__typdef_que_node_t();
  __dyc_funcallvar_85 = __dyc_read_ptr__typdef_que_fork_t();
  yyval = 0;
  tmp___32 = 0;
  tmp___33 = 0;
  tmp___34 = 0;
  tmp___35 = 0;
  tmp___36 = 0;
  tmp___37 = 0;
  tmp___38 = 0;
  tmp___39 = 0;
  tmp___40 = 0;
  tmp___41 = 0;
  tmp___42 = 0;
  tmp___43 = 0;
  tmp___44 = 0;
  tmp___45 = 0;
  tmp___46 = 0;
  tmp___47 = 0;
  tmp___48 = 0;
  tmp___49 = 0;
  tmp___50 = 0;
  tmp___51 = 0;
  tmp___52 = 0;
  tmp___53 = 0;
  tmp___54 = 0;
  tmp___55 = 0;
  tmp___56 = 0;
  tmp___57 = 0;
  tmp___58 = 0;
  tmp___59 = 0;
  tmp___60 = 0;
  tmp___61 = 0;
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
  goto __dyc_dummy_label;
  tmp___33 = __dyc_funcallvar_46;
  yyval = (que_node_t *)tmp___33;
  goto __dyc_dummy_label;
  switch_2_98:  
  yyval = *(yyvsp + 0);
  goto __dyc_dummy_label;
  tmp___34 = __dyc_funcallvar_47;
  yyval = (que_node_t *)tmp___34;
  goto __dyc_dummy_label;
  tmp___35 = __dyc_funcallvar_48;
  yyval = (que_node_t *)tmp___35;
  goto __dyc_dummy_label;
  tmp___36 = __dyc_funcallvar_49;
  yyval = (que_node_t *)tmp___36;
  goto __dyc_dummy_label;
  yyval = __dyc_funcallvar_50;
  goto __dyc_dummy_label;
  yyval = __dyc_funcallvar_51;
  goto __dyc_dummy_label;
  switch_2_104:  
  yyval = *(yyvsp + 0);
  goto __dyc_dummy_label;
  tmp___37 = __dyc_funcallvar_52;
  yyval = (que_node_t *)tmp___37;
  goto __dyc_dummy_label;
  tmp___38 = __dyc_funcallvar_53;
  yyval = (que_node_t *)tmp___38;
  goto __dyc_dummy_label;
  tmp___39 = __dyc_funcallvar_54;
  yyval = (que_node_t *)tmp___39;
  goto __dyc_dummy_label;
  tmp___40 = __dyc_funcallvar_55;
  yyval = (que_node_t *)tmp___40;
  goto __dyc_dummy_label;
  tmp___41 = __dyc_funcallvar_56;
  yyval = (que_node_t *)tmp___41;
  goto __dyc_dummy_label;
  tmp___42 = __dyc_funcallvar_57;
  yyval = (que_node_t *)tmp___42;
  goto __dyc_dummy_label;
  tmp___43 = __dyc_funcallvar_58;
  yyval = (que_node_t *)tmp___43;
  goto __dyc_dummy_label;
  tmp___44 = __dyc_funcallvar_59;
  yyval = (que_node_t *)tmp___44;
  goto __dyc_dummy_label;
  tmp___45 = __dyc_funcallvar_60;
  yyval = (que_node_t *)tmp___45;
  goto __dyc_dummy_label;
  yyval = __dyc_funcallvar_61;
  goto __dyc_dummy_label;
  yyval = __dyc_funcallvar_62;
  goto __dyc_dummy_label;
  switch_2_116:  
  yyval = (void *)0;
  goto __dyc_dummy_label;
  switch_2_117:  
  yyval = *(yyvsp + 0);
  goto __dyc_dummy_label;
  switch_2_118:  
  yyval = *(yyvsp + 0);
  goto __dyc_dummy_label;
  tmp___46 = __dyc_funcallvar_63;
  yyval = (que_node_t *)tmp___46;
  goto __dyc_dummy_label;
  tmp___47 = __dyc_funcallvar_64;
  yyval = (que_node_t *)tmp___47;
  goto __dyc_dummy_label;
  tmp___48 = __dyc_funcallvar_65;
  yyval = (que_node_t *)tmp___48;
  goto __dyc_dummy_label;
  tmp___49 = __dyc_funcallvar_66;
  yyval = (que_node_t *)tmp___49;
  goto __dyc_dummy_label;
  tmp___50 = __dyc_funcallvar_67;
  yyval = (que_node_t *)tmp___50;
  goto __dyc_dummy_label;
  tmp___51 = __dyc_funcallvar_68;
  yyval = (que_node_t *)tmp___51;
  goto __dyc_dummy_label;
  tmp___52 = __dyc_funcallvar_69;
  yyval = (que_node_t *)tmp___52;
  goto __dyc_dummy_label;
  tmp___53 = __dyc_funcallvar_70;
  yyval = (que_node_t *)tmp___53;
  goto __dyc_dummy_label;
  yyval = __dyc_funcallvar_71;
  goto __dyc_dummy_label;
  yyval = __dyc_funcallvar_72;
  goto __dyc_dummy_label;
  switch_2_129:  
  yyval = (void *)0;
  goto __dyc_dummy_label;
  switch_2_130:  
  yyval = (que_node_t *)(& pars_int_token);
  goto __dyc_dummy_label;
  tmp___54 = __dyc_funcallvar_73;
  yyval = (que_node_t *)tmp___54;
  goto __dyc_dummy_label;
  yyval = __dyc_funcallvar_74;
  goto __dyc_dummy_label;
  yyval = __dyc_funcallvar_75;
  goto __dyc_dummy_label;
  switch_2_134:  
  yyval = (void *)0;
  goto __dyc_dummy_label;
  switch_2_135:  
  yyval = (que_node_t *)(& pars_unique_token);
  goto __dyc_dummy_label;
  switch_2_136:  
  yyval = (void *)0;
  goto __dyc_dummy_label;
  switch_2_137:  
  yyval = (que_node_t *)(& pars_clustered_token);
  goto __dyc_dummy_label;
  tmp___55 = __dyc_funcallvar_76;
  yyval = (que_node_t *)tmp___55;
  goto __dyc_dummy_label;
  tmp___56 = __dyc_funcallvar_77;
  yyval = (que_node_t *)tmp___56;
  goto __dyc_dummy_label;
  tmp___57 = __dyc_funcallvar_78;
  yyval = (que_node_t *)tmp___57;
  goto __dyc_dummy_label;
  switch_2_141:  
  yyval = (que_node_t *)(& pars_int_token);
  goto __dyc_dummy_label;
  switch_2_142:  
  yyval = (que_node_t *)(& pars_char_token);
  goto __dyc_dummy_label;
  tmp___58 = __dyc_funcallvar_79;
  yyval = (que_node_t *)tmp___58;
  goto __dyc_dummy_label;
  tmp___59 = __dyc_funcallvar_80;
  yyval = (que_node_t *)tmp___59;
  goto __dyc_dummy_label;
  switch_2_145:  
  yyval = (void *)0;
  goto __dyc_dummy_label;
  yyval = __dyc_funcallvar_81;
  goto __dyc_dummy_label;
  yyval = __dyc_funcallvar_82;
  goto __dyc_dummy_label;
  tmp___60 = __dyc_funcallvar_83;
  yyval = (que_node_t *)tmp___60;
  goto __dyc_dummy_label;
  yyval = __dyc_funcallvar_84;
  goto __dyc_dummy_label;
  tmp___61 = __dyc_funcallvar_85;
  yyval = (que_node_t *)tmp___61;
  goto __dyc_dummy_label;
  __dyc_dummy_label:  ;
  __dyc_print_ptr__typdef_que_node_t(yyval);
}
}