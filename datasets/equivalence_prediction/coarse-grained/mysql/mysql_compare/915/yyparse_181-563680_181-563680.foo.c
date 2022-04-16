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
  pars_res_word_t pars_int_token ;
  pars_res_word_t pars_char_token ;
  pars_res_word_t pars_update_token ;
  pars_res_word_t pars_asc_token ;
  pars_res_word_t pars_desc_token ;
  pars_res_word_t pars_consistent_token ;
  pars_res_word_t pars_unique_token ;
  pars_res_word_t pars_clustered_token ;
  int yyn ;
  que_node_t **yyvsp ;
  que_node_t *yyval ;
  func_node_t *tmp___1 ;
  func_node_t *tmp___2 ;
  func_node_t *tmp___3 ;
  func_node_t *tmp___4 ;
  func_node_t *tmp___5 ;
  func_node_t *tmp___6 ;
  func_node_t *tmp___7 ;
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
  que_node_t *__dyc_funcallvar_4 ;
  que_node_t *__dyc_funcallvar_5 ;
  func_node_t *__dyc_funcallvar_6 ;
  func_node_t *__dyc_funcallvar_7 ;
  func_node_t *__dyc_funcallvar_8 ;
  func_node_t *__dyc_funcallvar_9 ;
  func_node_t *__dyc_funcallvar_10 ;
  func_node_t *__dyc_funcallvar_11 ;
  func_node_t *__dyc_funcallvar_12 ;
  func_node_t *__dyc_funcallvar_13 ;
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
  pars_int_token = __dyc_read_comp_132pars_res_word_struct();
  pars_char_token = __dyc_read_comp_132pars_res_word_struct();
  pars_update_token = __dyc_read_comp_132pars_res_word_struct();
  pars_asc_token = __dyc_read_comp_132pars_res_word_struct();
  pars_desc_token = __dyc_read_comp_132pars_res_word_struct();
  pars_consistent_token = __dyc_read_comp_132pars_res_word_struct();
  pars_unique_token = __dyc_read_comp_132pars_res_word_struct();
  pars_clustered_token = __dyc_read_comp_132pars_res_word_struct();
  yyn = __dyc_readpre_byte();
  yyvsp = __dyc_read_ptr__ptr__typdef_que_node_t();
  __dyc_funcallvar_4 = __dyc_read_ptr__typdef_que_node_t();
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
  __dyc_funcallvar_5 = 0;
  __dyc_funcallvar_6 = 0;
  __dyc_funcallvar_7 = 0;
  __dyc_funcallvar_8 = 0;
  __dyc_funcallvar_9 = 0;
  __dyc_funcallvar_10 = 0;
  __dyc_funcallvar_11 = 0;
  __dyc_funcallvar_12 = 0;
  __dyc_funcallvar_13 = 0;
  __dyc_funcallvar_14 = 0;
  __dyc_funcallvar_15 = 0;
  __dyc_funcallvar_16 = 0;
  if (yyn == 43) {
    goto switch_2_43;
  } else {
    if (yyn == 44) {
      goto switch_2_44;
    } else {
      if (yyn == 45) {
        goto switch_2_45;
      } else {
        if (yyn == 46) {
          goto switch_2_46;
        } else {
          if (yyn == 47) {
            goto switch_2_47;
          } else {
            if (yyn == 48) {
              goto switch_2_48;
            } else {
              if (yyn == 49) {
                goto switch_2_49;
              } else {
                if (yyn == 50) {
                  goto switch_2_50;
                } else {
                  if (yyn == 51) {
                    goto switch_2_51;
                  } else {
                    if (yyn == 52) {
                      goto switch_2_52;
                    } else {
                      if (yyn == 53) {
                        goto switch_2_53;
                      } else {
                        if (yyn == 54) {
                          goto switch_2_54;
                        } else {
                          if (yyn == 55) {
                            goto switch_2_55;
                          } else {
                            if (yyn == 56) {
                              goto switch_2_56;
                            } else {
                              if (yyn == 57) {
                                goto switch_2_57;
                              } else {
                                if (yyn == 58) {
                                  goto switch_2_58;
                                } else {
                                  if (yyn == 59) {
                                    goto switch_2_59;
                                  } else {
                                    if (yyn == 63) {
                                      goto switch_2_63;
                                    } else {
                                      if (yyn == 64) {
                                        goto switch_2_64;
                                      } else {
                                        if (yyn == 65) {
                                          goto switch_2_65;
                                        } else {
                                          if (yyn == 66) {
                                            goto switch_2_66;
                                          } else {
                                            if (yyn == 67) {
                                              goto switch_2_67;
                                            } else {
                                              if (yyn == 68) {
                                                goto switch_2_68;
                                              } else {
                                                if (yyn == 69) {
                                                  goto switch_2_69;
                                                } else {
                                                  if (yyn == 70) {
                                                    goto switch_2_70;
                                                  } else {
                                                    if (yyn == 71) {
                                                      goto switch_2_71;
                                                    } else {
                                                      if (yyn == 72) {
                                                        goto switch_2_72;
                                                      } else {
                                                        if (yyn == 73) {
                                                          goto switch_2_73;
                                                        } else {
                                                          if (yyn == 74) {
                                                            goto switch_2_74;
                                                          } else {
                                                            if (yyn == 75) {
                                                              goto switch_2_75;
                                                            } else {
                                                              if (yyn == 76) {
                                                                goto switch_2_76;
                                                              } else {
                                                                if (yyn == 77) {
                                                                  goto switch_2_77;
                                                                } else {
                                                                  if (yyn == 78) {
                                                                    goto switch_2_78;
                                                                  } else {
                                                                    if (yyn == 79) {
                                                                      goto switch_2_79;
                                                                    } else {
                                                                      if (yyn == 80) {
                                                                        goto switch_2_80;
                                                                      } else {
                                                                        if (yyn == 81) {
                                                                          goto switch_2_81;
                                                                        } else {
                                                                          if (yyn == 82) {
                                                                            goto switch_2_82;
                                                                          } else {
                                                                            if (yyn == 83) {
                                                                              goto switch_2_83;
                                                                            } else {
                                                                              if (yyn == 84) {
                                                                                goto switch_2_84;
                                                                              } else {
                                                                                if (yyn == 85) {
                                                                                  goto switch_2_85;
                                                                                } else {
                                                                                  if (yyn == 86) {
                                                                                    goto switch_2_86;
                                                                                  } else {
                                                                                    if (yyn == 87) {
                                                                                      goto switch_2_87;
                                                                                    } else {
                                                                                      if (yyn == 88) {
                                                                                        goto switch_2_88;
                                                                                      } else {
                                                                                        if (yyn == 89) {
                                                                                          goto switch_2_89;
                                                                                        } else {
                                                                                          if (yyn == 90) {
                                                                                            goto switch_2_90;
                                                                                          } else {
                                                                                            if (yyn == 91) {
                                                                                              goto switch_2_91;
                                                                                            } else {
                                                                                              if (yyn == 92) {
                                                                                                goto switch_2_92;
                                                                                              } else {
                                                                                                if (yyn == 93) {
                                                                                                  goto switch_2_93;
                                                                                                } else {
                                                                                                  if (yyn == 94) {
                                                                                                    goto switch_2_94;
                                                                                                  } else {
                                                                                                    if (yyn == 95) {
                                                                                                      goto switch_2_95;
                                                                                                    } else {
                                                                                                      if (yyn == 96) {
                                                                                                        goto switch_2_96;
                                                                                                      } else {
                                                                                                        if (yyn == 97) {
                                                                                                          goto switch_2_97;
                                                                                                        } else {
                                                                                                          if (yyn == 98) {
                                                                                                            goto switch_2_98;
                                                                                                          } else {
                                                                                                            if (yyn == 99) {
                                                                                                              goto switch_2_99;
                                                                                                            } else {
                                                                                                              if (yyn == 100) {
                                                                                                                goto switch_2_100;
                                                                                                              } else {
                                                                                                                if (yyn == 101) {
                                                                                                                  goto switch_2_101;
                                                                                                                } else {
                                                                                                                  if (yyn == 102) {
                                                                                                                    goto switch_2_102;
                                                                                                                  } else {
                                                                                                                    if (yyn == 103) {
                                                                                                                      goto switch_2_103;
                                                                                                                    } else {
                                                                                                                      if (yyn == 104) {
                                                                                                                        goto switch_2_104;
                                                                                                                      } else {
                                                                                                                        if (yyn == 105) {
                                                                                                                          goto switch_2_105;
                                                                                                                        } else {
                                                                                                                          if (yyn == 106) {
                                                                                                                            goto switch_2_106;
                                                                                                                          } else {
                                                                                                                            if (yyn == 107) {
                                                                                                                              goto switch_2_107;
                                                                                                                            } else {
                                                                                                                              if (yyn == 108) {
                                                                                                                                goto switch_2_108;
                                                                                                                              } else {
                                                                                                                                if (yyn == 109) {
                                                                                                                                  goto switch_2_109;
                                                                                                                                } else {
                                                                                                                                  if (yyn == 110) {
                                                                                                                                    goto switch_2_110;
                                                                                                                                  } else {
                                                                                                                                    if (yyn == 111) {
                                                                                                                                      goto switch_2_111;
                                                                                                                                    } else {
                                                                                                                                      if (yyn == 112) {
                                                                                                                                        goto switch_2_112;
                                                                                                                                      } else {
                                                                                                                                        if (yyn == 113) {
                                                                                                                                          goto switch_2_113;
                                                                                                                                        } else {
                                                                                                                                          if (yyn == 114) {
                                                                                                                                            goto switch_2_114;
                                                                                                                                          } else {
                                                                                                                                            if (yyn == 115) {
                                                                                                                                              goto switch_2_115;
                                                                                                                                            } else {
                                                                                                                                              if (yyn == 116) {
                                                                                                                                                goto switch_2_116;
                                                                                                                                              } else {
                                                                                                                                                if (yyn == 117) {
                                                                                                                                                  goto switch_2_117;
                                                                                                                                                } else {
                                                                                                                                                  if (yyn == 118) {
                                                                                                                                                    goto switch_2_118;
                                                                                                                                                  } else {
                                                                                                                                                    if (yyn == 119) {
                                                                                                                                                      goto switch_2_119;
                                                                                                                                                    } else {
                                                                                                                                                      if (yyn == 120) {
                                                                                                                                                        goto switch_2_120;
                                                                                                                                                      } else {
                                                                                                                                                        if (yyn == 121) {
                                                                                                                                                          goto switch_2_121;
                                                                                                                                                        } else {
                                                                                                                                                          if (yyn == 122) {
                                                                                                                                                            goto switch_2_122;
                                                                                                                                                          } else {
                                                                                                                                                            if (yyn == 123) {
                                                                                                                                                              goto switch_2_123;
                                                                                                                                                            } else {
                                                                                                                                                              if (yyn == 124) {
                                                                                                                                                                goto switch_2_124;
                                                                                                                                                              } else {
                                                                                                                                                                if (yyn == 125) {
                                                                                                                                                                  goto switch_2_125;
                                                                                                                                                                } else {
                                                                                                                                                                  if (yyn == 126) {
                                                                                                                                                                    goto switch_2_126;
                                                                                                                                                                  } else {
                                                                                                                                                                    if (yyn == 127) {
                                                                                                                                                                      goto switch_2_127;
                                                                                                                                                                    } else {
                                                                                                                                                                      if (yyn == 128) {
                                                                                                                                                                        goto switch_2_128;
                                                                                                                                                                      } else {
                                                                                                                                                                        if (yyn == 129) {
                                                                                                                                                                          goto switch_2_129;
                                                                                                                                                                        } else {
                                                                                                                                                                          if (yyn == 130) {
                                                                                                                                                                            goto switch_2_130;
                                                                                                                                                                          } else {
                                                                                                                                                                            if (yyn == 131) {
                                                                                                                                                                              goto switch_2_131;
                                                                                                                                                                            } else {
                                                                                                                                                                              if (yyn == 132) {
                                                                                                                                                                                goto switch_2_132;
                                                                                                                                                                              } else {
                                                                                                                                                                                if (yyn == 133) {
                                                                                                                                                                                  goto switch_2_133;
                                                                                                                                                                                } else {
                                                                                                                                                                                  if (yyn == 134) {
                                                                                                                                                                                    goto switch_2_134;
                                                                                                                                                                                  } else {
                                                                                                                                                                                    if (yyn == 135) {
                                                                                                                                                                                      goto switch_2_135;
                                                                                                                                                                                    } else {
                                                                                                                                                                                      if (yyn == 136) {
                                                                                                                                                                                        goto switch_2_136;
                                                                                                                                                                                      } else {
                                                                                                                                                                                        if (yyn == 137) {
                                                                                                                                                                                          goto switch_2_137;
                                                                                                                                                                                        } else {
                                                                                                                                                                                          if (yyn == 138) {
                                                                                                                                                                                            goto switch_2_138;
                                                                                                                                                                                          } else {
                                                                                                                                                                                            if (yyn == 139) {
                                                                                                                                                                                              goto switch_2_139;
                                                                                                                                                                                            } else {
                                                                                                                                                                                              if (yyn == 140) {
                                                                                                                                                                                                goto switch_2_140;
                                                                                                                                                                                              } else {
                                                                                                                                                                                                if (yyn == 141) {
                                                                                                                                                                                                  goto switch_2_141;
                                                                                                                                                                                                } else {
                                                                                                                                                                                                  if (yyn == 142) {
                                                                                                                                                                                                    goto switch_2_142;
                                                                                                                                                                                                  } else {
                                                                                                                                                                                                    if (yyn == 143) {
                                                                                                                                                                                                      goto switch_2_143;
                                                                                                                                                                                                    } else {
                                                                                                                                                                                                      if (yyn == 144) {
                                                                                                                                                                                                        goto switch_2_144;
                                                                                                                                                                                                      } else {
                                                                                                                                                                                                        if (yyn == 145) {
                                                                                                                                                                                                          goto switch_2_145;
                                                                                                                                                                                                        } else {
                                                                                                                                                                                                          if (yyn == 146) {
                                                                                                                                                                                                            goto switch_2_146;
                                                                                                                                                                                                          } else {
                                                                                                                                                                                                            if (yyn == 147) {
                                                                                                                                                                                                              goto switch_2_147;
                                                                                                                                                                                                            } else {
                                                                                                                                                                                                              if (yyn == 148) {
                                                                                                                                                                                                                goto switch_2_148;
                                                                                                                                                                                                              } else {
                                                                                                                                                                                                                if (yyn == 152) {
                                                                                                                                                                                                                  goto switch_2_152;
                                                                                                                                                                                                                } else {
                                                                                                                                                                                                                  if (yyn == 156) {
                                                                                                                                                                                                                    goto switch_2_156;
                                                                                                                                                                                                                  } else {
                                                                                                                                                                                                                    if (0) {
                                                                                                                                                                                                                      switch_2_23:  
                                                                                                                                                                                                                      {
                                                                                                                                                                                                                      yyval = __dyc_funcallvar_4;
                                                                                                                                                                                                                      }
                                                                                                                                                                                                                      goto switch_2_break;
                                                                                                                                                                                                                      switch_2_24:  
                                                                                                                                                                                                                      {
                                                                                                                                                                                                                      yyval = __dyc_funcallvar_5;
                                                                                                                                                                                                                      }
                                                                                                                                                                                                                      goto switch_2_break;
                                                                                                                                                                                                                      switch_2_25:  
                                                                                                                                                                                                                      yyval = *(yyvsp + 0);
                                                                                                                                                                                                                      goto switch_2_break;
                                                                                                                                                                                                                      switch_2_26:  
                                                                                                                                                                                                                      {
                                                                                                                                                                                                                      tmp___1 = __dyc_funcallvar_6;
                                                                                                                                                                                                                      yyval = (que_node_t *)tmp___1;
                                                                                                                                                                                                                      }
                                                                                                                                                                                                                      goto switch_2_break;
                                                                                                                                                                                                                      switch_2_27:  
                                                                                                                                                                                                                      yyval = *(yyvsp + 0);
                                                                                                                                                                                                                      goto switch_2_break;
                                                                                                                                                                                                                      switch_2_28:  
                                                                                                                                                                                                                      yyval = *(yyvsp + 0);
                                                                                                                                                                                                                      goto switch_2_break;
                                                                                                                                                                                                                      switch_2_29:  
                                                                                                                                                                                                                      yyval = *(yyvsp + 0);
                                                                                                                                                                                                                      goto switch_2_break;
                                                                                                                                                                                                                      switch_2_30:  
                                                                                                                                                                                                                      yyval = *(yyvsp + 0);
                                                                                                                                                                                                                      goto switch_2_break;
                                                                                                                                                                                                                      switch_2_31:  
                                                                                                                                                                                                                      yyval = *(yyvsp + 0);
                                                                                                                                                                                                                      goto switch_2_break;
                                                                                                                                                                                                                      switch_2_32:  
                                                                                                                                                                                                                      {
                                                                                                                                                                                                                      tmp___2 = __dyc_funcallvar_7;
                                                                                                                                                                                                                      yyval = (que_node_t *)tmp___2;
                                                                                                                                                                                                                      }
                                                                                                                                                                                                                      goto switch_2_break;
                                                                                                                                                                                                                      switch_2_33:  
                                                                                                                                                                                                                      {
                                                                                                                                                                                                                      tmp___3 = __dyc_funcallvar_8;
                                                                                                                                                                                                                      yyval = (que_node_t *)tmp___3;
                                                                                                                                                                                                                      }
                                                                                                                                                                                                                      goto switch_2_break;
                                                                                                                                                                                                                      switch_2_34:  
                                                                                                                                                                                                                      {
                                                                                                                                                                                                                      tmp___4 = __dyc_funcallvar_9;
                                                                                                                                                                                                                      yyval = (que_node_t *)tmp___4;
                                                                                                                                                                                                                      }
                                                                                                                                                                                                                      goto switch_2_break;
                                                                                                                                                                                                                      switch_2_35:  
                                                                                                                                                                                                                      {
                                                                                                                                                                                                                      tmp___5 = __dyc_funcallvar_10;
                                                                                                                                                                                                                      yyval = (que_node_t *)tmp___5;
                                                                                                                                                                                                                      }
                                                                                                                                                                                                                      goto switch_2_break;
                                                                                                                                                                                                                      switch_2_36:  
                                                                                                                                                                                                                      {
                                                                                                                                                                                                                      tmp___6 = __dyc_funcallvar_11;
                                                                                                                                                                                                                      yyval = (que_node_t *)tmp___6;
                                                                                                                                                                                                                      }
                                                                                                                                                                                                                      goto switch_2_break;
                                                                                                                                                                                                                      switch_2_37:  
                                                                                                                                                                                                                      yyval = *(yyvsp + -1);
                                                                                                                                                                                                                      goto switch_2_break;
                                                                                                                                                                                                                      switch_2_38:  
                                                                                                                                                                                                                      {
                                                                                                                                                                                                                      tmp___7 = __dyc_funcallvar_12;
                                                                                                                                                                                                                      yyval = (que_node_t *)tmp___7;
                                                                                                                                                                                                                      }
                                                                                                                                                                                                                      goto switch_2_break;
                                                                                                                                                                                                                      switch_2_39:  
                                                                                                                                                                                                                      {
                                                                                                                                                                                                                      tmp___8 = __dyc_funcallvar_13;
                                                                                                                                                                                                                      yyval = (que_node_t *)tmp___8;
                                                                                                                                                                                                                      }
                                                                                                                                                                                                                      goto switch_2_break;
                                                                                                                                                                                                                      switch_2_40:  
                                                                                                                                                                                                                      {
                                                                                                                                                                                                                      tmp___9 = __dyc_funcallvar_14;
                                                                                                                                                                                                                      yyval = (que_node_t *)tmp___9;
                                                                                                                                                                                                                      }
                                                                                                                                                                                                                      goto switch_2_break;
                                                                                                                                                                                                                      switch_2_41:  
                                                                                                                                                                                                                      {
                                                                                                                                                                                                                      tmp___10 = __dyc_funcallvar_15;
                                                                                                                                                                                                                      yyval = (que_node_t *)tmp___10;
                                                                                                                                                                                                                      }
                                                                                                                                                                                                                      goto switch_2_break;
                                                                                                                                                                                                                      switch_2_42:  
                                                                                                                                                                                                                      {
                                                                                                                                                                                                                      tmp___11 = __dyc_funcallvar_16;
                                                                                                                                                                                                                      yyval = (que_node_t *)tmp___11;
                                                                                                                                                                                                                      }
                                                                                                                                                                                                                      goto switch_2_break;
                                                                                                                                                                                                                      switch_2_43:  
                                                                                                                                                                                                                      {
                                                                                                                                                                                                                      tmp___12 = __dyc_funcallvar_17;
                                                                                                                                                                                                                      yyval = (que_node_t *)tmp___12;
                                                                                                                                                                                                                      }
                                                                                                                                                                                                                      goto switch_2_break;
                                                                                                                                                                                                                      switch_2_44:  
                                                                                                                                                                                                                      {
                                                                                                                                                                                                                      tmp___13 = __dyc_funcallvar_18;
                                                                                                                                                                                                                      yyval = (que_node_t *)tmp___13;
                                                                                                                                                                                                                      }
                                                                                                                                                                                                                      goto switch_2_break;
                                                                                                                                                                                                                      switch_2_45:  
                                                                                                                                                                                                                      {
                                                                                                                                                                                                                      tmp___14 = __dyc_funcallvar_19;
                                                                                                                                                                                                                      yyval = (que_node_t *)tmp___14;
                                                                                                                                                                                                                      }
                                                                                                                                                                                                                      goto switch_2_break;
                                                                                                                                                                                                                      switch_2_46:  
                                                                                                                                                                                                                      {
                                                                                                                                                                                                                      tmp___15 = __dyc_funcallvar_20;
                                                                                                                                                                                                                      yyval = (que_node_t *)tmp___15;
                                                                                                                                                                                                                      }
                                                                                                                                                                                                                      goto switch_2_break;
                                                                                                                                                                                                                      switch_2_47:  
                                                                                                                                                                                                                      {
                                                                                                                                                                                                                      tmp___16 = __dyc_funcallvar_21;
                                                                                                                                                                                                                      yyval = (que_node_t *)tmp___16;
                                                                                                                                                                                                                      }
                                                                                                                                                                                                                      goto switch_2_break;
                                                                                                                                                                                                                      switch_2_48:  
                                                                                                                                                                                                                      {
                                                                                                                                                                                                                      tmp___17 = __dyc_funcallvar_22;
                                                                                                                                                                                                                      yyval = (que_node_t *)tmp___17;
                                                                                                                                                                                                                      }
                                                                                                                                                                                                                      goto switch_2_break;
                                                                                                                                                                                                                      switch_2_49:  
                                                                                                                                                                                                                      yyval = (que_node_t *)(& pars_to_char_token);
                                                                                                                                                                                                                      goto switch_2_break;
                                                                                                                                                                                                                      switch_2_50:  
                                                                                                                                                                                                                      yyval = (que_node_t *)(& pars_to_number_token);
                                                                                                                                                                                                                      goto switch_2_break;
                                                                                                                                                                                                                      switch_2_51:  
                                                                                                                                                                                                                      yyval = (que_node_t *)(& pars_to_binary_token);
                                                                                                                                                                                                                      goto switch_2_break;
                                                                                                                                                                                                                      switch_2_52:  
                                                                                                                                                                                                                      yyval = (que_node_t *)(& pars_binary_to_number_token);
                                                                                                                                                                                                                      goto switch_2_break;
                                                                                                                                                                                                                      switch_2_53:  
                                                                                                                                                                                                                      yyval = (que_node_t *)(& pars_substr_token);
                                                                                                                                                                                                                      goto switch_2_break;
                                                                                                                                                                                                                      switch_2_54:  
                                                                                                                                                                                                                      yyval = (que_node_t *)(& pars_concat_token);
                                                                                                                                                                                                                      goto switch_2_break;
                                                                                                                                                                                                                      switch_2_55:  
                                                                                                                                                                                                                      yyval = (que_node_t *)(& pars_instr_token);
                                                                                                                                                                                                                      goto switch_2_break;
                                                                                                                                                                                                                      switch_2_56:  
                                                                                                                                                                                                                      yyval = (que_node_t *)(& pars_length_token);
                                                                                                                                                                                                                      goto switch_2_break;
                                                                                                                                                                                                                      switch_2_57:  
                                                                                                                                                                                                                      yyval = (que_node_t *)(& pars_sysdate_token);
                                                                                                                                                                                                                      goto switch_2_break;
                                                                                                                                                                                                                      switch_2_58:  
                                                                                                                                                                                                                      yyval = (que_node_t *)(& pars_rnd_token);
                                                                                                                                                                                                                      goto switch_2_break;
                                                                                                                                                                                                                      switch_2_59:  
                                                                                                                                                                                                                      yyval = (que_node_t *)(& pars_rnd_str_token);
                                                                                                                                                                                                                      goto switch_2_break;
                                                                                                                                                                                                                      switch_2_63:  
                                                                                                                                                                                                                      {
                                                                                                                                                                                                                      tmp___18 = __dyc_funcallvar_23;
                                                                                                                                                                                                                      yyval = (que_node_t *)tmp___18;
                                                                                                                                                                                                                      }
                                                                                                                                                                                                                      goto switch_2_break;
                                                                                                                                                                                                                      switch_2_64:  
                                                                                                                                                                                                                      {
                                                                                                                                                                                                                      tmp___19 = __dyc_funcallvar_24;
                                                                                                                                                                                                                      yyval = (que_node_t *)tmp___19;
                                                                                                                                                                                                                      }
                                                                                                                                                                                                                      goto switch_2_break;
                                                                                                                                                                                                                      switch_2_65:  
                                                                                                                                                                                                                      yyval = (que_node_t *)(& pars_replstr_token);
                                                                                                                                                                                                                      goto switch_2_break;
                                                                                                                                                                                                                      switch_2_66:  
                                                                                                                                                                                                                      yyval = (que_node_t *)(& pars_printf_token);
                                                                                                                                                                                                                      goto switch_2_break;
                                                                                                                                                                                                                      switch_2_67:  
                                                                                                                                                                                                                      yyval = (que_node_t *)(& pars_assert_token);
                                                                                                                                                                                                                      goto switch_2_break;
                                                                                                                                                                                                                      switch_2_68:  
                                                                                                                                                                                                                      {
                                                                                                                                                                                                                      yyval = __dyc_funcallvar_25;
                                                                                                                                                                                                                      }
                                                                                                                                                                                                                      goto switch_2_break;
                                                                                                                                                                                                                      switch_2_69:  
                                                                                                                                                                                                                      {
                                                                                                                                                                                                                      yyval = __dyc_funcallvar_26;
                                                                                                                                                                                                                      }
                                                                                                                                                                                                                      goto switch_2_break;
                                                                                                                                                                                                                      switch_2_70:  
                                                                                                                                                                                                                      yyval = (void *)0;
                                                                                                                                                                                                                      goto switch_2_break;
                                                                                                                                                                                                                      switch_2_71:  
                                                                                                                                                                                                                      {
                                                                                                                                                                                                                      yyval = __dyc_funcallvar_27;
                                                                                                                                                                                                                      }
                                                                                                                                                                                                                      goto switch_2_break;
                                                                                                                                                                                                                      switch_2_72:  
                                                                                                                                                                                                                      {
                                                                                                                                                                                                                      yyval = __dyc_funcallvar_28;
                                                                                                                                                                                                                      }
                                                                                                                                                                                                                      goto switch_2_break;
                                                                                                                                                                                                                      switch_2_73:  
                                                                                                                                                                                                                      yyval = (void *)0;
                                                                                                                                                                                                                      goto switch_2_break;
                                                                                                                                                                                                                      switch_2_74:  
                                                                                                                                                                                                                      {
                                                                                                                                                                                                                      yyval = __dyc_funcallvar_29;
                                                                                                                                                                                                                      }
                                                                                                                                                                                                                      goto switch_2_break;
                                                                                                                                                                                                                      switch_2_75:  
                                                                                                                                                                                                                      {
                                                                                                                                                                                                                      yyval = __dyc_funcallvar_30;
                                                                                                                                                                                                                      }
                                                                                                                                                                                                                      goto switch_2_break;
                                                                                                                                                                                                                      switch_2_76:  
                                                                                                                                                                                                                      yyval = *(yyvsp + 0);
                                                                                                                                                                                                                      goto switch_2_break;
                                                                                                                                                                                                                      switch_2_77:  
                                                                                                                                                                                                                      {
                                                                                                                                                                                                                      tmp___20 = __dyc_funcallvar_31;
                                                                                                                                                                                                                      tmp___21 = __dyc_funcallvar_32;
                                                                                                                                                                                                                      tmp___22 = __dyc_funcallvar_33;
                                                                                                                                                                                                                      yyval = (que_node_t *)tmp___22;
                                                                                                                                                                                                                      }
                                                                                                                                                                                                                      goto switch_2_break;
                                                                                                                                                                                                                      switch_2_78:  
                                                                                                                                                                                                                      {
                                                                                                                                                                                                                      tmp___23 = __dyc_funcallvar_34;
                                                                                                                                                                                                                      tmp___24 = __dyc_funcallvar_35;
                                                                                                                                                                                                                      tmp___25 = __dyc_funcallvar_36;
                                                                                                                                                                                                                      tmp___26 = __dyc_funcallvar_37;
                                                                                                                                                                                                                      yyval = (que_node_t *)tmp___26;
                                                                                                                                                                                                                      }
                                                                                                                                                                                                                      goto switch_2_break;
                                                                                                                                                                                                                      switch_2_79:  
                                                                                                                                                                                                                      {
                                                                                                                                                                                                                      tmp___27 = __dyc_funcallvar_38;
                                                                                                                                                                                                                      tmp___28 = __dyc_funcallvar_39;
                                                                                                                                                                                                                      yyval = (que_node_t *)tmp___28;
                                                                                                                                                                                                                      }
                                                                                                                                                                                                                      goto switch_2_break;
                                                                                                                                                                                                                      switch_2_80:  
                                                                                                                                                                                                                      yyval = (void *)0;
                                                                                                                                                                                                                      goto switch_2_break;
                                                                                                                                                                                                                      switch_2_81:  
                                                                                                                                                                                                                      {
                                                                                                                                                                                                                      yyval = __dyc_funcallvar_40;
                                                                                                                                                                                                                      }
                                                                                                                                                                                                                      goto switch_2_break;
                                                                                                                                                                                                                      switch_2_82:  
                                                                                                                                                                                                                      {
                                                                                                                                                                                                                      yyval = __dyc_funcallvar_41;
                                                                                                                                                                                                                      }
                                                                                                                                                                                                                      goto switch_2_break;
                                                                                                                                                                                                                      switch_2_83:  
                                                                                                                                                                                                                      {
                                                                                                                                                                                                                      tmp___29 = __dyc_funcallvar_42;
                                                                                                                                                                                                                      yyval = (que_node_t *)tmp___29;
                                                                                                                                                                                                                      }
                                                                                                                                                                                                                      goto switch_2_break;
                                                                                                                                                                                                                      switch_2_84:  
                                                                                                                                                                                                                      {
                                                                                                                                                                                                                      tmp___30 = __dyc_funcallvar_43;
                                                                                                                                                                                                                      yyval = (que_node_t *)tmp___30;
                                                                                                                                                                                                                      }
                                                                                                                                                                                                                      goto switch_2_break;
                                                                                                                                                                                                                      switch_2_85:  
                                                                                                                                                                                                                      {
                                                                                                                                                                                                                      tmp___31 = __dyc_funcallvar_44;
                                                                                                                                                                                                                      yyval = (que_node_t *)tmp___31;
                                                                                                                                                                                                                      }
                                                                                                                                                                                                                      goto switch_2_break;
                                                                                                                                                                                                                      switch_2_86:  
                                                                                                                                                                                                                      yyval = (void *)0;
                                                                                                                                                                                                                      goto switch_2_break;
                                                                                                                                                                                                                      switch_2_87:  
                                                                                                                                                                                                                      yyval = *(yyvsp + 0);
                                                                                                                                                                                                                      goto switch_2_break;
                                                                                                                                                                                                                      switch_2_88:  
                                                                                                                                                                                                                      yyval = (void *)0;
                                                                                                                                                                                                                      goto switch_2_break;
                                                                                                                                                                                                                      switch_2_89:  
                                                                                                                                                                                                                      yyval = (que_node_t *)(& pars_update_token);
                                                                                                                                                                                                                      goto switch_2_break;
                                                                                                                                                                                                                      switch_2_90:  
                                                                                                                                                                                                                      yyval = (void *)0;
                                                                                                                                                                                                                      goto switch_2_break;
                                                                                                                                                                                                                      switch_2_91:  
                                                                                                                                                                                                                      yyval = (que_node_t *)(& pars_consistent_token);
                                                                                                                                                                                                                      goto switch_2_break;
                                                                                                                                                                                                                      switch_2_92:  
                                                                                                                                                                                                                      yyval = (que_node_t *)(& pars_asc_token);
                                                                                                                                                                                                                      goto switch_2_break;
                                                                                                                                                                                                                      switch_2_93:  
                                                                                                                                                                                                                      yyval = (que_node_t *)(& pars_asc_token);
                                                                                                                                                                                                                      goto switch_2_break;
                                                                                                                                                                                                                      switch_2_94:  
                                                                                                                                                                                                                      yyval = (que_node_t *)(& pars_desc_token);
                                                                                                                                                                                                                      goto switch_2_break;
                                                                                                                                                                                                                      switch_2_95:  
                                                                                                                                                                                                                      yyval = (void *)0;
                                                                                                                                                                                                                      goto switch_2_break;
                                                                                                                                                                                                                      switch_2_96:  
                                                                                                                                                                                                                      {
                                                                                                                                                                                                                      tmp___32 = __dyc_funcallvar_45;
                                                                                                                                                                                                                      yyval = (que_node_t *)tmp___32;
                                                                                                                                                                                                                      }
                                                                                                                                                                                                                      goto switch_2_break;
                                                                                                                                                                                                                      switch_2_97:  
                                                                                                                                                                                                                      {
                                                                                                                                                                                                                      tmp___33 = __dyc_funcallvar_46;
                                                                                                                                                                                                                      yyval = (que_node_t *)tmp___33;
                                                                                                                                                                                                                      }
                                                                                                                                                                                                                      goto switch_2_break;
                                                                                                                                                                                                                      switch_2_98:  
                                                                                                                                                                                                                      yyval = *(yyvsp + 0);
                                                                                                                                                                                                                      goto switch_2_break;
                                                                                                                                                                                                                      switch_2_99:  
                                                                                                                                                                                                                      {
                                                                                                                                                                                                                      tmp___34 = __dyc_funcallvar_47;
                                                                                                                                                                                                                      yyval = (que_node_t *)tmp___34;
                                                                                                                                                                                                                      }
                                                                                                                                                                                                                      goto switch_2_break;
                                                                                                                                                                                                                      switch_2_100:  
                                                                                                                                                                                                                      {
                                                                                                                                                                                                                      tmp___35 = __dyc_funcallvar_48;
                                                                                                                                                                                                                      yyval = (que_node_t *)tmp___35;
                                                                                                                                                                                                                      }
                                                                                                                                                                                                                      goto switch_2_break;
                                                                                                                                                                                                                      switch_2_101:  
                                                                                                                                                                                                                      {
                                                                                                                                                                                                                      tmp___36 = __dyc_funcallvar_49;
                                                                                                                                                                                                                      yyval = (que_node_t *)tmp___36;
                                                                                                                                                                                                                      }
                                                                                                                                                                                                                      goto switch_2_break;
                                                                                                                                                                                                                      switch_2_102:  
                                                                                                                                                                                                                      {
                                                                                                                                                                                                                      yyval = __dyc_funcallvar_50;
                                                                                                                                                                                                                      }
                                                                                                                                                                                                                      goto switch_2_break;
                                                                                                                                                                                                                      switch_2_103:  
                                                                                                                                                                                                                      {
                                                                                                                                                                                                                      yyval = __dyc_funcallvar_51;
                                                                                                                                                                                                                      }
                                                                                                                                                                                                                      goto switch_2_break;
                                                                                                                                                                                                                      switch_2_104:  
                                                                                                                                                                                                                      yyval = *(yyvsp + 0);
                                                                                                                                                                                                                      goto switch_2_break;
                                                                                                                                                                                                                      switch_2_105:  
                                                                                                                                                                                                                      {
                                                                                                                                                                                                                      tmp___37 = __dyc_funcallvar_52;
                                                                                                                                                                                                                      yyval = (que_node_t *)tmp___37;
                                                                                                                                                                                                                      }
                                                                                                                                                                                                                      goto switch_2_break;
                                                                                                                                                                                                                      switch_2_106:  
                                                                                                                                                                                                                      {
                                                                                                                                                                                                                      tmp___38 = __dyc_funcallvar_53;
                                                                                                                                                                                                                      yyval = (que_node_t *)tmp___38;
                                                                                                                                                                                                                      }
                                                                                                                                                                                                                      goto switch_2_break;
                                                                                                                                                                                                                      switch_2_107:  
                                                                                                                                                                                                                      {
                                                                                                                                                                                                                      tmp___39 = __dyc_funcallvar_54;
                                                                                                                                                                                                                      yyval = (que_node_t *)tmp___39;
                                                                                                                                                                                                                      }
                                                                                                                                                                                                                      goto switch_2_break;
                                                                                                                                                                                                                      switch_2_108:  
                                                                                                                                                                                                                      {
                                                                                                                                                                                                                      tmp___40 = __dyc_funcallvar_55;
                                                                                                                                                                                                                      yyval = (que_node_t *)tmp___40;
                                                                                                                                                                                                                      }
                                                                                                                                                                                                                      goto switch_2_break;
                                                                                                                                                                                                                      switch_2_109:  
                                                                                                                                                                                                                      {
                                                                                                                                                                                                                      tmp___41 = __dyc_funcallvar_56;
                                                                                                                                                                                                                      yyval = (que_node_t *)tmp___41;
                                                                                                                                                                                                                      }
                                                                                                                                                                                                                      goto switch_2_break;
                                                                                                                                                                                                                      switch_2_110:  
                                                                                                                                                                                                                      {
                                                                                                                                                                                                                      tmp___42 = __dyc_funcallvar_57;
                                                                                                                                                                                                                      yyval = (que_node_t *)tmp___42;
                                                                                                                                                                                                                      }
                                                                                                                                                                                                                      goto switch_2_break;
                                                                                                                                                                                                                      switch_2_111:  
                                                                                                                                                                                                                      {
                                                                                                                                                                                                                      tmp___43 = __dyc_funcallvar_58;
                                                                                                                                                                                                                      yyval = (que_node_t *)tmp___43;
                                                                                                                                                                                                                      }
                                                                                                                                                                                                                      goto switch_2_break;
                                                                                                                                                                                                                      switch_2_112:  
                                                                                                                                                                                                                      {
                                                                                                                                                                                                                      tmp___44 = __dyc_funcallvar_59;
                                                                                                                                                                                                                      yyval = (que_node_t *)tmp___44;
                                                                                                                                                                                                                      }
                                                                                                                                                                                                                      goto switch_2_break;
                                                                                                                                                                                                                      switch_2_113:  
                                                                                                                                                                                                                      {
                                                                                                                                                                                                                      tmp___45 = __dyc_funcallvar_60;
                                                                                                                                                                                                                      yyval = (que_node_t *)tmp___45;
                                                                                                                                                                                                                      }
                                                                                                                                                                                                                      goto switch_2_break;
                                                                                                                                                                                                                      switch_2_114:  
                                                                                                                                                                                                                      {
                                                                                                                                                                                                                      yyval = __dyc_funcallvar_61;
                                                                                                                                                                                                                      }
                                                                                                                                                                                                                      goto switch_2_break;
                                                                                                                                                                                                                      switch_2_115:  
                                                                                                                                                                                                                      {
                                                                                                                                                                                                                      yyval = __dyc_funcallvar_62;
                                                                                                                                                                                                                      }
                                                                                                                                                                                                                      goto switch_2_break;
                                                                                                                                                                                                                      switch_2_116:  
                                                                                                                                                                                                                      yyval = (void *)0;
                                                                                                                                                                                                                      goto switch_2_break;
                                                                                                                                                                                                                      switch_2_117:  
                                                                                                                                                                                                                      yyval = *(yyvsp + 0);
                                                                                                                                                                                                                      goto switch_2_break;
                                                                                                                                                                                                                      switch_2_118:  
                                                                                                                                                                                                                      yyval = *(yyvsp + 0);
                                                                                                                                                                                                                      goto switch_2_break;
                                                                                                                                                                                                                      switch_2_119:  
                                                                                                                                                                                                                      {
                                                                                                                                                                                                                      tmp___46 = __dyc_funcallvar_63;
                                                                                                                                                                                                                      yyval = (que_node_t *)tmp___46;
                                                                                                                                                                                                                      }
                                                                                                                                                                                                                      goto switch_2_break;
                                                                                                                                                                                                                      switch_2_120:  
                                                                                                                                                                                                                      {
                                                                                                                                                                                                                      tmp___47 = __dyc_funcallvar_64;
                                                                                                                                                                                                                      yyval = (que_node_t *)tmp___47;
                                                                                                                                                                                                                      }
                                                                                                                                                                                                                      goto switch_2_break;
                                                                                                                                                                                                                      switch_2_121:  
                                                                                                                                                                                                                      {
                                                                                                                                                                                                                      tmp___48 = __dyc_funcallvar_65;
                                                                                                                                                                                                                      yyval = (que_node_t *)tmp___48;
                                                                                                                                                                                                                      }
                                                                                                                                                                                                                      goto switch_2_break;
                                                                                                                                                                                                                      switch_2_122:  
                                                                                                                                                                                                                      {
                                                                                                                                                                                                                      tmp___49 = __dyc_funcallvar_66;
                                                                                                                                                                                                                      yyval = (que_node_t *)tmp___49;
                                                                                                                                                                                                                      }
                                                                                                                                                                                                                      goto switch_2_break;
                                                                                                                                                                                                                      switch_2_123:  
                                                                                                                                                                                                                      {
                                                                                                                                                                                                                      tmp___50 = __dyc_funcallvar_67;
                                                                                                                                                                                                                      yyval = (que_node_t *)tmp___50;
                                                                                                                                                                                                                      }
                                                                                                                                                                                                                      goto switch_2_break;
                                                                                                                                                                                                                      switch_2_124:  
                                                                                                                                                                                                                      {
                                                                                                                                                                                                                      tmp___51 = __dyc_funcallvar_68;
                                                                                                                                                                                                                      yyval = (que_node_t *)tmp___51;
                                                                                                                                                                                                                      }
                                                                                                                                                                                                                      goto switch_2_break;
                                                                                                                                                                                                                      switch_2_125:  
                                                                                                                                                                                                                      {
                                                                                                                                                                                                                      tmp___52 = __dyc_funcallvar_69;
                                                                                                                                                                                                                      yyval = (que_node_t *)tmp___52;
                                                                                                                                                                                                                      }
                                                                                                                                                                                                                      goto switch_2_break;
                                                                                                                                                                                                                      switch_2_126:  
                                                                                                                                                                                                                      {
                                                                                                                                                                                                                      tmp___53 = __dyc_funcallvar_70;
                                                                                                                                                                                                                      yyval = (que_node_t *)tmp___53;
                                                                                                                                                                                                                      }
                                                                                                                                                                                                                      goto switch_2_break;
                                                                                                                                                                                                                      switch_2_127:  
                                                                                                                                                                                                                      {
                                                                                                                                                                                                                      yyval = __dyc_funcallvar_71;
                                                                                                                                                                                                                      }
                                                                                                                                                                                                                      goto switch_2_break;
                                                                                                                                                                                                                      switch_2_128:  
                                                                                                                                                                                                                      {
                                                                                                                                                                                                                      yyval = __dyc_funcallvar_72;
                                                                                                                                                                                                                      }
                                                                                                                                                                                                                      goto switch_2_break;
                                                                                                                                                                                                                      switch_2_129:  
                                                                                                                                                                                                                      yyval = (void *)0;
                                                                                                                                                                                                                      goto switch_2_break;
                                                                                                                                                                                                                      switch_2_130:  
                                                                                                                                                                                                                      yyval = (que_node_t *)(& pars_int_token);
                                                                                                                                                                                                                      goto switch_2_break;
                                                                                                                                                                                                                      switch_2_131:  
                                                                                                                                                                                                                      {
                                                                                                                                                                                                                      tmp___54 = __dyc_funcallvar_73;
                                                                                                                                                                                                                      yyval = (que_node_t *)tmp___54;
                                                                                                                                                                                                                      }
                                                                                                                                                                                                                      goto switch_2_break;
                                                                                                                                                                                                                      switch_2_132:  
                                                                                                                                                                                                                      {
                                                                                                                                                                                                                      yyval = __dyc_funcallvar_74;
                                                                                                                                                                                                                      }
                                                                                                                                                                                                                      goto switch_2_break;
                                                                                                                                                                                                                      switch_2_133:  
                                                                                                                                                                                                                      {
                                                                                                                                                                                                                      yyval = __dyc_funcallvar_75;
                                                                                                                                                                                                                      }
                                                                                                                                                                                                                      goto switch_2_break;
                                                                                                                                                                                                                      switch_2_134:  
                                                                                                                                                                                                                      yyval = (void *)0;
                                                                                                                                                                                                                      goto switch_2_break;
                                                                                                                                                                                                                      switch_2_135:  
                                                                                                                                                                                                                      yyval = (que_node_t *)(& pars_unique_token);
                                                                                                                                                                                                                      goto switch_2_break;
                                                                                                                                                                                                                      switch_2_136:  
                                                                                                                                                                                                                      yyval = (void *)0;
                                                                                                                                                                                                                      goto switch_2_break;
                                                                                                                                                                                                                      switch_2_137:  
                                                                                                                                                                                                                      yyval = (que_node_t *)(& pars_clustered_token);
                                                                                                                                                                                                                      goto switch_2_break;
                                                                                                                                                                                                                      switch_2_138:  
                                                                                                                                                                                                                      {
                                                                                                                                                                                                                      tmp___55 = __dyc_funcallvar_76;
                                                                                                                                                                                                                      yyval = (que_node_t *)tmp___55;
                                                                                                                                                                                                                      }
                                                                                                                                                                                                                      goto switch_2_break;
                                                                                                                                                                                                                      switch_2_139:  
                                                                                                                                                                                                                      {
                                                                                                                                                                                                                      tmp___56 = __dyc_funcallvar_77;
                                                                                                                                                                                                                      yyval = (que_node_t *)tmp___56;
                                                                                                                                                                                                                      }
                                                                                                                                                                                                                      goto switch_2_break;
                                                                                                                                                                                                                      switch_2_140:  
                                                                                                                                                                                                                      {
                                                                                                                                                                                                                      tmp___57 = __dyc_funcallvar_78;
                                                                                                                                                                                                                      yyval = (que_node_t *)tmp___57;
                                                                                                                                                                                                                      }
                                                                                                                                                                                                                      goto switch_2_break;
                                                                                                                                                                                                                      switch_2_141:  
                                                                                                                                                                                                                      yyval = (que_node_t *)(& pars_int_token);
                                                                                                                                                                                                                      goto switch_2_break;
                                                                                                                                                                                                                      switch_2_142:  
                                                                                                                                                                                                                      yyval = (que_node_t *)(& pars_char_token);
                                                                                                                                                                                                                      goto switch_2_break;
                                                                                                                                                                                                                      switch_2_143:  
                                                                                                                                                                                                                      {
                                                                                                                                                                                                                      tmp___58 = __dyc_funcallvar_79;
                                                                                                                                                                                                                      yyval = (que_node_t *)tmp___58;
                                                                                                                                                                                                                      }
                                                                                                                                                                                                                      goto switch_2_break;
                                                                                                                                                                                                                      switch_2_144:  
                                                                                                                                                                                                                      {
                                                                                                                                                                                                                      tmp___59 = __dyc_funcallvar_80;
                                                                                                                                                                                                                      yyval = (que_node_t *)tmp___59;
                                                                                                                                                                                                                      }
                                                                                                                                                                                                                      goto switch_2_break;
                                                                                                                                                                                                                      switch_2_145:  
                                                                                                                                                                                                                      yyval = (void *)0;
                                                                                                                                                                                                                      goto switch_2_break;
                                                                                                                                                                                                                      switch_2_146:  
                                                                                                                                                                                                                      {
                                                                                                                                                                                                                      yyval = __dyc_funcallvar_81;
                                                                                                                                                                                                                      }
                                                                                                                                                                                                                      goto switch_2_break;
                                                                                                                                                                                                                      switch_2_147:  
                                                                                                                                                                                                                      {
                                                                                                                                                                                                                      yyval = __dyc_funcallvar_82;
                                                                                                                                                                                                                      }
                                                                                                                                                                                                                      goto switch_2_break;
                                                                                                                                                                                                                      switch_2_148:  
                                                                                                                                                                                                                      {
                                                                                                                                                                                                                      tmp___60 = __dyc_funcallvar_83;
                                                                                                                                                                                                                      yyval = (que_node_t *)tmp___60;
                                                                                                                                                                                                                      }
                                                                                                                                                                                                                      goto switch_2_break;
                                                                                                                                                                                                                      switch_2_152:  
                                                                                                                                                                                                                      {
                                                                                                                                                                                                                      yyval = __dyc_funcallvar_84;
                                                                                                                                                                                                                      }
                                                                                                                                                                                                                      goto switch_2_break;
                                                                                                                                                                                                                      switch_2_156:  
                                                                                                                                                                                                                      {
                                                                                                                                                                                                                      tmp___61 = __dyc_funcallvar_85;
                                                                                                                                                                                                                      yyval = (que_node_t *)tmp___61;
                                                                                                                                                                                                                      }
                                                                                                                                                                                                                      goto switch_2_break;
                                                                                                                                                                                                                    } else {
                                                                                                                                                                                                                      switch_2_break:  ;
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
  }
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
