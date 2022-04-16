#include "../../include/dycfoo.h"
#include "../../include/cmd-parse.i.hd.c.h"
void __dyc_foo(void) 
{ struct cmd_parse_state parse_state ;
  YYSTYPE yylval ;
  yytype_uint8 const   yytranslate[267] ;
  yytype_int8 const   yypact[75] ;
  yytype_int8 const   yypgoto[22] ;
  yytype_int8 const   yydefgoto[22] ;
  yytype_int8 const   yytable[105] ;
  yytype_uint8 const   yycheck[105] ;
  yytype_uint8 const   yyr1[48] ;
  yytype_uint8 const   yyr2[48] ;
  int yychar ;
  int yynerrs ;
  int yystate ;
  int yyerrstatus ;
  yytype_int16 *yyss ;
  yytype_int16 *yyssp ;
  YYSTYPE *yyvsp ;
  int yyn ;
  int yyresult ;
  int yytoken ;
  YYSTYPE yyval ;
  int yylen ;
  struct cmd_parse_state *ps ;
  void *tmp___0 ;
  void *tmp___1 ;
  struct cmd_parse_state *ps___0 ;
  struct cmd_parse_state *ps___1 ;
  struct cmd_parse_state *ps___2 ;
  struct cmd_parse_input *pi ;
  struct format_tree *ft ;
  struct client *c ;
  struct cmd_find_state *fsp ;
  struct cmd_find_state fs ;
  int flags ;
  int tmp___2 ;
  struct cmd_parse_state *ps___3 ;
  int flags___0 ;
  struct cmd_parse_state *ps___4 ;
  int flags___1 ;
  struct cmd_parse_state *ps___5 ;
  struct cmd_parse_scope *scope ;
  void *tmp___3 ;
  struct cmd_parse_state *ps___6 ;
  struct cmd_parse_scope *scope___0 ;
  void *tmp___4 ;
  struct cmd_parse_state *ps___7 ;
  struct cmd_parse_scope *scope___1 ;
  void *tmp___5 ;
  struct cmd_parse_state *ps___8 ;
  struct cmd_parse_state *ps___9 ;
  struct cmd_parse_state *ps___10 ;
  struct cmd_parse_state *ps___11 ;
  void *tmp___6 ;
  struct cmd_parse_state *ps___12 ;
  void *tmp___7 ;
  struct cmd_parse_state *ps___13 ;
  void *tmp___8 ;
  void *tmp___9 ;
  void *__dyc_funcallvar_3 ;
  void *__dyc_funcallvar_4 ;
  struct cmd_parse_commands *__dyc_funcallvar_5 ;
  struct cmd_parse_commands *__dyc_funcallvar_6 ;
  int __dyc_funcallvar_7 ;
  struct format_tree *__dyc_funcallvar_8 ;
  char *__dyc_funcallvar_9 ;
  void *__dyc_funcallvar_10 ;
  int __dyc_funcallvar_11 ;
  void *__dyc_funcallvar_12 ;
  void *__dyc_funcallvar_13 ;
  int __dyc_funcallvar_14 ;
  struct cmd_parse_commands *__dyc_funcallvar_15 ;
  struct cmd_parse_commands *__dyc_funcallvar_16 ;
  struct cmd_parse_commands *__dyc_funcallvar_17 ;
  struct cmd_parse_commands *__dyc_funcallvar_18 ;
  struct cmd_parse_commands *__dyc_funcallvar_19 ;
  struct cmd_parse_commands *__dyc_funcallvar_20 ;
  struct cmd_parse_commands *__dyc_funcallvar_21 ;
  void *__dyc_funcallvar_22 ;
  void *__dyc_funcallvar_23 ;
  void *__dyc_funcallvar_24 ;
  struct cmd_parse_commands *__dyc_funcallvar_25 ;
  struct cmd_parse_commands *__dyc_funcallvar_26 ;
  struct cmd_parse_commands *__dyc_funcallvar_27 ;
  struct cmd_parse_commands *__dyc_funcallvar_28 ;
  void *__dyc_funcallvar_29 ;
  char *__dyc_funcallvar_30 ;

  {
  parse_state = __dyc_read_comp_280cmd_parse_state();
  yylval = __dyc_read_comp_282YYSTYPE();
  yychar = __dyc_readpre_byte();
  yynerrs = __dyc_readpre_byte();
  yystate = __dyc_readpre_byte();
  yyerrstatus = __dyc_readpre_byte();
  yyss = __dyc_read_ptr__typdef_yytype_int16();
  yyssp = __dyc_read_ptr__typdef_yytype_int16();
  yyvsp = __dyc_read_ptr__typdef_YYSTYPE();
  yyn = __dyc_readpre_byte();
  yylen = __dyc_readpre_byte();
  fs = __dyc_read_comp_146cmd_find_state();
  __dyc_funcallvar_3 = __dyc_read_ptr__void();
  __dyc_funcallvar_4 = __dyc_read_ptr__void();
  __dyc_funcallvar_5 = __dyc_read_ptr__comp_279cmd_parse_commands();
  __dyc_funcallvar_6 = __dyc_read_ptr__comp_279cmd_parse_commands();
  __dyc_funcallvar_7 = __dyc_readpre_byte();
  __dyc_funcallvar_8 = (struct format_tree *)__dyc_read_ptr__comp_154format_tree();
  __dyc_funcallvar_9 = __dyc_read_ptr__char();
  __dyc_funcallvar_10 = __dyc_read_ptr__void();
  __dyc_funcallvar_11 = __dyc_readpre_byte();
  __dyc_funcallvar_12 = __dyc_read_ptr__void();
  __dyc_funcallvar_13 = __dyc_read_ptr__void();
  __dyc_funcallvar_14 = __dyc_readpre_byte();
  __dyc_funcallvar_15 = __dyc_read_ptr__comp_279cmd_parse_commands();
  __dyc_funcallvar_16 = __dyc_read_ptr__comp_279cmd_parse_commands();
  __dyc_funcallvar_17 = __dyc_read_ptr__comp_279cmd_parse_commands();
  __dyc_funcallvar_18 = __dyc_read_ptr__comp_279cmd_parse_commands();
  __dyc_funcallvar_19 = __dyc_read_ptr__comp_279cmd_parse_commands();
  __dyc_funcallvar_20 = __dyc_read_ptr__comp_279cmd_parse_commands();
  __dyc_funcallvar_21 = __dyc_read_ptr__comp_279cmd_parse_commands();
  __dyc_funcallvar_22 = __dyc_read_ptr__void();
  __dyc_funcallvar_23 = __dyc_read_ptr__void();
  __dyc_funcallvar_24 = __dyc_read_ptr__void();
  __dyc_funcallvar_25 = __dyc_read_ptr__comp_279cmd_parse_commands();
  __dyc_funcallvar_26 = __dyc_read_ptr__comp_279cmd_parse_commands();
  __dyc_funcallvar_27 = __dyc_read_ptr__comp_279cmd_parse_commands();
  __dyc_funcallvar_28 = __dyc_read_ptr__comp_279cmd_parse_commands();
  __dyc_funcallvar_29 = __dyc_read_ptr__void();
  __dyc_funcallvar_30 = __dyc_read_ptr__char();
  yyresult = 0;
  yytoken = 0;
  memset(& yyval, 0, sizeof(YYSTYPE ));
  ps = 0;
  tmp___0 = 0;
  tmp___1 = 0;
  ps___0 = 0;
  ps___1 = 0;
  ps___2 = 0;
  pi = 0;
  ft = 0;
  c = 0;
  fsp = 0;
  flags = 0;
  tmp___2 = 0;
  ps___3 = 0;
  flags___0 = 0;
  ps___4 = 0;
  flags___1 = 0;
  ps___5 = 0;
  scope = 0;
  tmp___3 = 0;
  ps___6 = 0;
  scope___0 = 0;
  tmp___4 = 0;
  ps___7 = 0;
  scope___1 = 0;
  tmp___5 = 0;
  ps___8 = 0;
  ps___9 = 0;
  ps___10 = 0;
  ps___11 = 0;
  tmp___6 = 0;
  ps___12 = 0;
  tmp___7 = 0;
  ps___13 = 0;
  tmp___8 = 0;
  tmp___9 = 0;
  if (yyn == 0) {
    goto yyerrlab;
  }
  goto yyreduce;
  yyreduce: 
  yylen = (int )yyr2[yyn];
  yyval = *(yyvsp + (1 - yylen));
  if (yyn == 3) {
    goto switch_2_3;
  } else {
    if (yyn == 4) {
      goto switch_2_4;
    } else {
      if (yyn == 5) {
        goto switch_2_5;
      } else {
        if (yyn == 6) {
          goto switch_2_6;
        } else {
          if (yyn == 7) {
            goto switch_2_7;
          } else {
            if (yyn == 8) {
              goto switch_2_8;
            } else {
              if (yyn == 9) {
                goto switch_2_9;
              } else {
                if (yyn == 10) {
                  goto switch_2_10;
                } else {
                  if (yyn == 11) {
                    goto switch_2_11;
                  } else {
                    if (yyn == 12) {
                      goto switch_2_12;
                    } else {
                      if (yyn == 15) {
                        goto switch_2_15;
                      } else {
                        if (yyn == 16) {
                          goto switch_2_16;
                        } else {
                          if (yyn == 17) {
                            goto switch_2_17;
                          } else {
                            if (yyn == 18) {
                              goto switch_2_18;
                            } else {
                              if (yyn == 19) {
                                goto switch_2_19;
                              } else {
                                if (yyn == 20) {
                                  goto switch_2_20;
                                } else {
                                  if (yyn == 21) {
                                    goto switch_2_21;
                                  } else {
                                    if (yyn == 22) {
                                      goto switch_2_22;
                                    } else {
                                      if (yyn == 23) {
                                        goto switch_2_23;
                                      } else {
                                        if (yyn == 24) {
                                          goto switch_2_24;
                                        } else {
                                          if (yyn == 25) {
                                            goto switch_2_25;
                                          } else {
                                            if (yyn == 26) {
                                              goto switch_2_26;
                                            } else {
                                              if (yyn == 27) {
                                                goto switch_2_27;
                                              } else {
                                                if (yyn == 28) {
                                                  goto switch_2_28;
                                                } else {
                                                  if (yyn == 29) {
                                                    goto switch_2_29;
                                                  } else {
                                                    if (yyn == 30) {
                                                      goto switch_2_30;
                                                    } else {
                                                      if (yyn == 31) {
                                                        goto switch_2_31;
                                                      } else {
                                                        if (yyn == 32) {
                                                          goto switch_2_32;
                                                        } else {
                                                          if (yyn == 33) {
                                                            goto switch_2_33;
                                                          } else {
                                                            if (yyn == 34) {
                                                              goto switch_2_34;
                                                            } else {
                                                              if (yyn == 35) {
                                                                goto switch_2_35;
                                                              } else {
                                                                if (yyn == 36) {
                                                                  goto switch_2_36;
                                                                } else {
                                                                  if (yyn == 37) {
                                                                    goto switch_2_37;
                                                                  } else {
                                                                    if (yyn == 38) {
                                                                      goto switch_2_38;
                                                                    } else {
                                                                      if (yyn == 39) {
                                                                        goto switch_2_39;
                                                                      } else {
                                                                        if (yyn == 40) {
                                                                          goto switch_2_40;
                                                                        } else {
                                                                          if (yyn == 41) {
                                                                            goto switch_2_41;
                                                                          } else {
                                                                            if (yyn == 42) {
                                                                              goto switch_2_42;
                                                                            } else {
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
                                                                                        {
                                                                                        goto switch_2_default;
                                                                                        if (0) {
                                                                                          switch_2_3:  
                                                                                          ps = & parse_state;
                                                                                          ps->commands = (yyvsp + 0)->commands;
                                                                                          goto switch_2_break;
                                                                                          switch_2_4:  
                                                                                          yyval.commands = (yyvsp + -1)->commands;
                                                                                          goto switch_2_break;
                                                                                          switch_2_5:  
                                                                                          yyval.commands = (yyvsp + -2)->commands;
                                                                                          {
                                                                                          while (1) {
                                                                                            while_3_continue:  ;
                                                                                            if (! ((unsigned long )((yyvsp + -1)->commands)->tqh_first == (unsigned long )((void *)0))) {
                                                                                              *((yyval.commands)->tqh_last) = ((yyvsp + -1)->commands)->tqh_first;
                                                                                              (((yyvsp + -1)->commands)->tqh_first)->entry.tqe_prev = (yyval.commands)->tqh_last;
                                                                                              (yyval.commands)->tqh_last = ((yyvsp + -1)->commands)->tqh_last;
                                                                                              {
                                                                                              while (1) {
                                                                                                while_4_continue:  ;
                                                                                                ((yyvsp + -1)->commands)->tqh_first = (struct cmd_parse_command *)((void *)0);
                                                                                                ((yyvsp + -1)->commands)->tqh_last = & ((yyvsp + -1)->commands)->tqh_first;
                                                                                                goto while_4_break;
                                                                                              }
                                                                                              while_4_break:  ;
                                                                                              }
                                                                                            }
                                                                                            goto while_3_break;
                                                                                          }
                                                                                          while_3_break:  ;
                                                                                          }
                                                                                          {

                                                                                          }
                                                                                          goto switch_2_break;
                                                                                          switch_2_6:  
                                                                                          {
                                                                                          tmp___0 = __dyc_funcallvar_3;
                                                                                          yyval.commands = (struct cmd_parse_commands *)tmp___0;
                                                                                          }
                                                                                          {
                                                                                          while (1) {
                                                                                            while_5_continue:  ;
                                                                                            (yyval.commands)->tqh_first = (struct cmd_parse_command *)((void *)0);
                                                                                            (yyval.commands)->tqh_last = & (yyval.commands)->tqh_first;
                                                                                            goto while_5_break;
                                                                                          }
                                                                                          while_5_break:  ;
                                                                                          }
                                                                                          goto switch_2_break;
                                                                                          switch_2_7:  
                                                                                          {
                                                                                          tmp___1 = __dyc_funcallvar_4;
                                                                                          yyval.commands = (struct cmd_parse_commands *)tmp___1;
                                                                                          }
                                                                                          {
                                                                                          while (1) {
                                                                                            while_6_continue:  ;
                                                                                            (yyval.commands)->tqh_first = (struct cmd_parse_command *)((void *)0);
                                                                                            (yyval.commands)->tqh_last = & (yyval.commands)->tqh_first;
                                                                                            goto while_6_break;
                                                                                          }
                                                                                          while_6_break:  ;
                                                                                          }
                                                                                          goto switch_2_break;
                                                                                          switch_2_8:  
                                                                                          ps___0 = & parse_state;
                                                                                          if ((unsigned long )ps___0->scope == (unsigned long )((void *)0)) {
                                                                                            yyval.commands = (yyvsp + 0)->commands;
                                                                                          } else {
                                                                                            if ((ps___0->scope)->flag) {
                                                                                              yyval.commands = (yyvsp + 0)->commands;
                                                                                            } else {
                                                                                              {
                                                                                              yyval.commands = __dyc_funcallvar_5;

                                                                                              }
                                                                                            }
                                                                                          }
                                                                                          goto switch_2_break;
                                                                                          switch_2_9:  
                                                                                          ps___1 = & parse_state;
                                                                                          if ((unsigned long )ps___1->scope == (unsigned long )((void *)0)) {
                                                                                            yyval.commands = (yyvsp + 0)->commands;
                                                                                          } else {
                                                                                            if ((ps___1->scope)->flag) {
                                                                                              yyval.commands = (yyvsp + 0)->commands;
                                                                                            } else {
                                                                                              {
                                                                                              yyval.commands = __dyc_funcallvar_6;

                                                                                              }
                                                                                            }
                                                                                          }
                                                                                          goto switch_2_break;
                                                                                          switch_2_10:  
                                                                                          yyval.token = (yyvsp + 0)->token;
                                                                                          goto switch_2_break;
                                                                                          switch_2_11:  
                                                                                          yyval.token = (yyvsp + 0)->token;
                                                                                          goto switch_2_break;
                                                                                          switch_2_12:  
                                                                                          {
                                                                                          ps___2 = & parse_state;
                                                                                          pi = ps___2->input;
                                                                                          c = pi->c;
                                                                                          flags = 4;
                                                                                          tmp___2 = __dyc_funcallvar_7;
                                                                                          }
                                                                                          if (tmp___2) {
                                                                                            fsp = & pi->fs;
                                                                                          } else {
                                                                                            {

                                                                                            fsp = & fs;
                                                                                            }
                                                                                          }
                                                                                          {
                                                                                          ft = __dyc_funcallvar_8;

                                                                                          yyval.token = __dyc_funcallvar_9;


                                                                                          }
                                                                                          goto switch_2_break;
                                                                                          switch_2_15:  
                                                                                          ps___3 = & parse_state;
                                                                                          flags___0 = (ps___3->input)->flags;
                                                                                          if (~ flags___0 & 2) {
                                                                                            if ((unsigned long )ps___3->scope == (unsigned long )((void *)0)) {
                                                                                              {

                                                                                              }
                                                                                            } else {
                                                                                              if ((ps___3->scope)->flag) {
                                                                                                {

                                                                                                }
                                                                                              }
                                                                                            }
                                                                                          }
                                                                                          {

                                                                                          }
                                                                                          goto switch_2_break;
                                                                                          switch_2_16:  
                                                                                          ps___4 = & parse_state;
                                                                                          flags___1 = (ps___4->input)->flags;
                                                                                          if (~ flags___1 & 2) {
                                                                                            if ((unsigned long )ps___4->scope == (unsigned long )((void *)0)) {
                                                                                              {

                                                                                              }
                                                                                            } else {
                                                                                              if ((ps___4->scope)->flag) {
                                                                                                {

                                                                                                }
                                                                                              }
                                                                                            }
                                                                                          }
                                                                                          {

                                                                                          }
                                                                                          goto switch_2_break;
                                                                                          switch_2_17:  
                                                                                          {
                                                                                          ps___5 = & parse_state;
                                                                                          tmp___3 = __dyc_funcallvar_10;
                                                                                          scope = (struct cmd_parse_scope *)tmp___3;
                                                                                          scope->flag = __dyc_funcallvar_11;
                                                                                          yyval.flag = scope->flag;

                                                                                          }
                                                                                          if ((unsigned long )ps___5->scope != (unsigned long )((void *)0)) {
                                                                                            {
                                                                                            while (1) {
                                                                                              while_7_continue:  ;
                                                                                              (ps___5->scope)->entry.tqe_next = ps___5->stack.tqh_first;
                                                                                              if ((unsigned long )(ps___5->scope)->entry.tqe_next != (unsigned long )((void *)0)) {
                                                                                                (ps___5->stack.tqh_first)->entry.tqe_prev = & (ps___5->scope)->entry.tqe_next;
                                                                                              } else {
                                                                                                ps___5->stack.tqh_last = & (ps___5->scope)->entry.tqe_next;
                                                                                              }
                                                                                              ps___5->stack.tqh_first = ps___5->scope;
                                                                                              (ps___5->scope)->entry.tqe_prev = & ps___5->stack.tqh_first;
                                                                                              goto while_7_break;
                                                                                            }
                                                                                            while_7_break:  ;
                                                                                            }
                                                                                          }
                                                                                          ps___5->scope = scope;
                                                                                          goto switch_2_break;
                                                                                          switch_2_18:  
                                                                                          {
                                                                                          ps___6 = & parse_state;
                                                                                          tmp___4 = __dyc_funcallvar_12;
                                                                                          scope___0 = (struct cmd_parse_scope *)tmp___4;
                                                                                          scope___0->flag = ! (ps___6->scope)->flag;

                                                                                          ps___6->scope = scope___0;
                                                                                          }
                                                                                          goto switch_2_break;
                                                                                          switch_2_19:  
                                                                                          {
                                                                                          ps___7 = & parse_state;
                                                                                          tmp___5 = __dyc_funcallvar_13;
                                                                                          scope___1 = (struct cmd_parse_scope *)tmp___5;
                                                                                          scope___1->flag = __dyc_funcallvar_14;
                                                                                          yyval.flag = scope___1->flag;


                                                                                          ps___7->scope = scope___1;
                                                                                          }
                                                                                          goto switch_2_break;
                                                                                          switch_2_20:  
                                                                                          {
                                                                                          ps___8 = & parse_state;

                                                                                          ps___8->scope = ps___8->stack.tqh_first;
                                                                                          }
                                                                                          if ((unsigned long )ps___8->scope != (unsigned long )((void *)0)) {
                                                                                            {
                                                                                            while (1) {
                                                                                              while_8_continue:  ;
                                                                                              if ((unsigned long )(ps___8->scope)->entry.tqe_next != (unsigned long )((void *)0)) {
                                                                                                ((ps___8->scope)->entry.tqe_next)->entry.tqe_prev = (ps___8->scope)->entry.tqe_prev;
                                                                                              } else {
                                                                                                ps___8->stack.tqh_last = (ps___8->scope)->entry.tqe_prev;
                                                                                              }
                                                                                              *((ps___8->scope)->entry.tqe_prev) = (ps___8->scope)->entry.tqe_next;
                                                                                              goto while_8_break;
                                                                                            }
                                                                                            while_8_break:  ;
                                                                                            }
                                                                                          }
                                                                                          goto switch_2_break;
                                                                                          switch_2_21:  
                                                                                          if ((yyvsp + -3)->flag) {
                                                                                            yyval.commands = (yyvsp + -1)->commands;
                                                                                          } else {
                                                                                            {
                                                                                            yyval.commands = __dyc_funcallvar_15;

                                                                                            }
                                                                                          }
                                                                                          goto switch_2_break;
                                                                                          switch_2_22:  
                                                                                          if ((yyvsp + -6)->flag) {
                                                                                            {
                                                                                            yyval.commands = (yyvsp + -4)->commands;

                                                                                            }
                                                                                          } else {
                                                                                            {
                                                                                            yyval.commands = (yyvsp + -1)->commands;

                                                                                            }
                                                                                          }
                                                                                          goto switch_2_break;
                                                                                          switch_2_23:  
                                                                                          if ((yyvsp + -4)->flag) {
                                                                                            {
                                                                                            yyval.commands = (yyvsp + -2)->commands;

                                                                                            }
                                                                                          } else {
                                                                                            if ((yyvsp + -1)->elif.flag) {
                                                                                              {
                                                                                              yyval.commands = (yyvsp + -1)->elif.commands;

                                                                                              }
                                                                                            } else {
                                                                                              {
                                                                                              yyval.commands = __dyc_funcallvar_16;


                                                                                              }
                                                                                            }
                                                                                          }
                                                                                          goto switch_2_break;
                                                                                          switch_2_24:  
                                                                                          if ((yyvsp + -7)->flag) {
                                                                                            {
                                                                                            yyval.commands = (yyvsp + -5)->commands;


                                                                                            }
                                                                                          } else {
                                                                                            if ((yyvsp + -4)->elif.flag) {
                                                                                              {
                                                                                              yyval.commands = (yyvsp + -4)->elif.commands;


                                                                                              }
                                                                                            } else {
                                                                                              {
                                                                                              yyval.commands = (yyvsp + -1)->commands;


                                                                                              }
                                                                                            }
                                                                                          }
                                                                                          goto switch_2_break;
                                                                                          switch_2_25:  
                                                                                          if ((yyvsp + -2)->flag) {
                                                                                            yyval.elif.flag = 1;
                                                                                            yyval.elif.commands = (yyvsp + 0)->commands;
                                                                                          } else {
                                                                                            {
                                                                                            yyval.elif.flag = 0;
                                                                                            yyval.elif.commands = __dyc_funcallvar_17;

                                                                                            }
                                                                                          }
                                                                                          goto switch_2_break;
                                                                                          switch_2_26:  
                                                                                          if ((yyvsp + -3)->flag) {
                                                                                            {
                                                                                            yyval.elif.flag = 1;
                                                                                            yyval.elif.commands = (yyvsp + -1)->commands;

                                                                                            }
                                                                                          } else {
                                                                                            if ((yyvsp + 0)->elif.flag) {
                                                                                              {
                                                                                              yyval.elif.flag = 1;
                                                                                              yyval.elif.commands = (yyvsp + 0)->elif.commands;

                                                                                              }
                                                                                            } else {
                                                                                              {
                                                                                              yyval.elif.flag = 0;
                                                                                              yyval.elif.commands = __dyc_funcallvar_18;


                                                                                              }
                                                                                            }
                                                                                          }
                                                                                          goto switch_2_break;
                                                                                          switch_2_27:  
                                                                                          {
                                                                                          ps___9 = & parse_state;
                                                                                          yyval.commands = __dyc_funcallvar_19;
                                                                                          }
                                                                                          if (((yyvsp + 0)->command)->argc != 0) {
                                                                                            if ((unsigned long )ps___9->scope == (unsigned long )((void *)0)) {
                                                                                              goto _L;
                                                                                            } else {
                                                                                              if ((ps___9->scope)->flag) {
                                                                                                _L:  
                                                                                                {
                                                                                                while (1) {
                                                                                                  while_9_continue:  ;
                                                                                                  ((yyvsp + 0)->command)->entry.tqe_next = (struct cmd_parse_command *)((void *)0);
                                                                                                  ((yyvsp + 0)->command)->entry.tqe_prev = (yyval.commands)->tqh_last;
                                                                                                  *((yyval.commands)->tqh_last) = (yyvsp + 0)->command;
                                                                                                  (yyval.commands)->tqh_last = & ((yyvsp + 0)->command)->entry.tqe_next;
                                                                                                  goto while_9_break;
                                                                                                }
                                                                                                while_9_break:  ;
                                                                                                }
                                                                                              } else {
                                                                                                {

                                                                                                }
                                                                                              }
                                                                                            }
                                                                                          } else {
                                                                                            {

                                                                                            }
                                                                                          }
                                                                                          goto switch_2_break;
                                                                                          switch_2_28:  
                                                                                          yyval.commands = (yyvsp + -1)->commands;
                                                                                          goto switch_2_break;
                                                                                          switch_2_29:  
                                                                                          yyval.commands = (yyvsp + -2)->commands;
                                                                                          {
                                                                                          while (1) {
                                                                                            while_10_continue:  ;
                                                                                            if (! ((unsigned long )((yyvsp + 0)->commands)->tqh_first == (unsigned long )((void *)0))) {
                                                                                              *((yyval.commands)->tqh_last) = ((yyvsp + 0)->commands)->tqh_first;
                                                                                              (((yyvsp + 0)->commands)->tqh_first)->entry.tqe_prev = (yyval.commands)->tqh_last;
                                                                                              (yyval.commands)->tqh_last = ((yyvsp + 0)->commands)->tqh_last;
                                                                                              {
                                                                                              while (1) {
                                                                                                while_11_continue:  ;
                                                                                                ((yyvsp + 0)->commands)->tqh_first = (struct cmd_parse_command *)((void *)0);
                                                                                                ((yyvsp + 0)->commands)->tqh_last = & ((yyvsp + 0)->commands)->tqh_first;
                                                                                                goto while_11_break;
                                                                                              }
                                                                                              while_11_break:  ;
                                                                                              }
                                                                                            }
                                                                                            goto while_10_break;
                                                                                          }
                                                                                          while_10_break:  ;
                                                                                          }
                                                                                          {

                                                                                          }
                                                                                          goto switch_2_break;
                                                                                          switch_2_30:  
                                                                                          ps___10 = & parse_state;
                                                                                          if (((yyvsp + 0)->command)->argc != 0) {
                                                                                            if ((unsigned long )ps___10->scope == (unsigned long )((void *)0)) {
                                                                                              goto _L___0;
                                                                                            } else {
                                                                                              if ((ps___10->scope)->flag) {
                                                                                                _L___0:  
                                                                                                yyval.commands = (yyvsp + -2)->commands;
                                                                                                {
                                                                                                while (1) {
                                                                                                  while_12_continue:  ;
                                                                                                  ((yyvsp + 0)->command)->entry.tqe_next = (struct cmd_parse_command *)((void *)0);
                                                                                                  ((yyvsp + 0)->command)->entry.tqe_prev = (yyval.commands)->tqh_last;
                                                                                                  *((yyval.commands)->tqh_last) = (yyvsp + 0)->command;
                                                                                                  (yyval.commands)->tqh_last = & ((yyvsp + 0)->command)->entry.tqe_next;
                                                                                                  goto while_12_break;
                                                                                                }
                                                                                                while_12_break:  ;
                                                                                                }
                                                                                              } else {
                                                                                                {
                                                                                                yyval.commands = __dyc_funcallvar_20;


                                                                                                }
                                                                                              }
                                                                                            }
                                                                                          } else {
                                                                                            {
                                                                                            yyval.commands = __dyc_funcallvar_21;


                                                                                            }
                                                                                          }
                                                                                          goto switch_2_break;
                                                                                          switch_2_31:  
                                                                                          yyval.commands = (yyvsp + 0)->commands;
                                                                                          goto switch_2_break;
                                                                                          switch_2_32:  
                                                                                          {
                                                                                          ps___11 = & parse_state;
                                                                                          tmp___6 = __dyc_funcallvar_22;
                                                                                          yyval.command = (struct cmd_parse_command *)tmp___6;
                                                                                          (yyval.command)->line = (ps___11->input)->line;
                                                                                          }
                                                                                          goto switch_2_break;
                                                                                          switch_2_33:  
                                                                                          {
                                                                                          ps___12 = & parse_state;
                                                                                          tmp___7 = __dyc_funcallvar_23;
                                                                                          yyval.command = (struct cmd_parse_command *)tmp___7;
                                                                                          (yyval.command)->line = (ps___12->input)->line;

                                                                                          }
                                                                                          goto switch_2_break;
                                                                                          switch_2_34:  
                                                                                          {
                                                                                          ps___13 = & parse_state;
                                                                                          tmp___8 = __dyc_funcallvar_24;
                                                                                          yyval.command = (struct cmd_parse_command *)tmp___8;
                                                                                          (yyval.command)->line = (ps___13->input)->line;
                                                                                          (yyval.command)->argc = (yyvsp + 0)->arguments.argc;
                                                                                          (yyval.command)->argv = (yyvsp + 0)->arguments.argv;

                                                                                          }
                                                                                          goto switch_2_break;
                                                                                          switch_2_35:  
                                                                                          if ((yyvsp + -2)->flag) {
                                                                                            yyval.commands = (yyvsp + -1)->commands;
                                                                                          } else {
                                                                                            {
                                                                                            yyval.commands = __dyc_funcallvar_25;

                                                                                            }
                                                                                          }
                                                                                          goto switch_2_break;
                                                                                          switch_2_36:  
                                                                                          if ((yyvsp + -4)->flag) {
                                                                                            {
                                                                                            yyval.commands = (yyvsp + -3)->commands;

                                                                                            }
                                                                                          } else {
                                                                                            {
                                                                                            yyval.commands = (yyvsp + -1)->commands;

                                                                                            }
                                                                                          }
                                                                                          goto switch_2_break;
                                                                                          switch_2_37:  
                                                                                          if ((yyvsp + -3)->flag) {
                                                                                            {
                                                                                            yyval.commands = (yyvsp + -2)->commands;

                                                                                            }
                                                                                          } else {
                                                                                            if ((yyvsp + -1)->elif.flag) {
                                                                                              {
                                                                                              yyval.commands = (yyvsp + -1)->elif.commands;

                                                                                              }
                                                                                            } else {
                                                                                              {
                                                                                              yyval.commands = __dyc_funcallvar_26;


                                                                                              }
                                                                                            }
                                                                                          }
                                                                                          goto switch_2_break;
                                                                                          switch_2_38:  
                                                                                          if ((yyvsp + -5)->flag) {
                                                                                            {
                                                                                            yyval.commands = (yyvsp + -4)->commands;


                                                                                            }
                                                                                          } else {
                                                                                            if ((yyvsp + -3)->elif.flag) {
                                                                                              {
                                                                                              yyval.commands = (yyvsp + -3)->elif.commands;


                                                                                              }
                                                                                            } else {
                                                                                              {
                                                                                              yyval.commands = (yyvsp + -1)->commands;


                                                                                              }
                                                                                            }
                                                                                          }
                                                                                          goto switch_2_break;
                                                                                          switch_2_39:  
                                                                                          if ((yyvsp + -1)->flag) {
                                                                                            yyval.elif.flag = 1;
                                                                                            yyval.elif.commands = (yyvsp + 0)->commands;
                                                                                          } else {
                                                                                            {
                                                                                            yyval.elif.flag = 0;
                                                                                            yyval.elif.commands = __dyc_funcallvar_27;

                                                                                            }
                                                                                          }
                                                                                          goto switch_2_break;
                                                                                          switch_2_40:  
                                                                                          if ((yyvsp + -2)->flag) {
                                                                                            {
                                                                                            yyval.elif.flag = 1;
                                                                                            yyval.elif.commands = (yyvsp + -1)->commands;

                                                                                            }
                                                                                          } else {
                                                                                            if ((yyvsp + 0)->elif.flag) {
                                                                                              {
                                                                                              yyval.elif.flag = 1;
                                                                                              yyval.elif.commands = (yyvsp + 0)->elif.commands;

                                                                                              }
                                                                                            } else {
                                                                                              {
                                                                                              yyval.elif.flag = 0;
                                                                                              yyval.elif.commands = __dyc_funcallvar_28;


                                                                                              }
                                                                                            }
                                                                                          }
                                                                                          goto switch_2_break;
                                                                                          switch_2_41:  
                                                                                          {
                                                                                          yyval.arguments.argc = 1;
                                                                                          tmp___9 = __dyc_funcallvar_29;
                                                                                          yyval.arguments.argv = (char **)tmp___9;
                                                                                          *(yyval.arguments.argv + 0) = (yyvsp + 0)->token;
                                                                                          }
                                                                                          goto switch_2_break;
                                                                                          switch_2_42:  
                                                                                          {


                                                                                          yyval.arguments = (yyvsp + 0)->arguments;
                                                                                          }
                                                                                          goto switch_2_break;
                                                                                          switch_2_43:  
                                                                                          yyval.token = (yyvsp + 0)->token;
                                                                                          goto switch_2_break;
                                                                                          switch_2_44:  
                                                                                          yyval.token = (yyvsp + 0)->token;
                                                                                          goto switch_2_break;
                                                                                          switch_2_45:  
                                                                                          {
                                                                                          yyval.token = __dyc_funcallvar_30;

                                                                                          }
                                                                                          goto switch_2_break;
                                                                                          switch_2_46:  
                                                                                          yyval.commands = (yyvsp + -1)->commands;
                                                                                          goto switch_2_break;
                                                                                          switch_2_47:  
                                                                                          yyval.commands = (yyvsp + -2)->commands;
                                                                                          {
                                                                                          while (1) {
                                                                                            while_13_continue:  ;
                                                                                            if (! ((unsigned long )((yyvsp + -1)->commands)->tqh_first == (unsigned long )((void *)0))) {
                                                                                              *((yyval.commands)->tqh_last) = ((yyvsp + -1)->commands)->tqh_first;
                                                                                              (((yyvsp + -1)->commands)->tqh_first)->entry.tqe_prev = (yyval.commands)->tqh_last;
                                                                                              (yyval.commands)->tqh_last = ((yyvsp + -1)->commands)->tqh_last;
                                                                                              {
                                                                                              while (1) {
                                                                                                while_14_continue:  ;
                                                                                                ((yyvsp + -1)->commands)->tqh_first = (struct cmd_parse_command *)((void *)0);
                                                                                                ((yyvsp + -1)->commands)->tqh_last = & ((yyvsp + -1)->commands)->tqh_first;
                                                                                                goto while_14_break;
                                                                                              }
                                                                                              while_14_break:  ;
                                                                                              }
                                                                                            }
                                                                                            goto while_13_break;
                                                                                          }
                                                                                          while_13_break:  ;
                                                                                          }
                                                                                          {

                                                                                          }
                                                                                          goto switch_2_break;
                                                                                          switch_2_default:  ;
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
  yyvsp -= yylen;
  yyssp -= yylen;
  yylen = 0;
  yyvsp ++;
  *yyvsp = yyval;
  yyn = (int )yyr1[yyn];
  yystate = (int )((int const   )yypgoto[yyn - 16] + (int const   )*yyssp);
  if (0 <= yystate) {
    if (yystate <= 104) {
      if ((int const   )yycheck[yystate] == (int const   )*yyssp) {
        yystate = (int )yytable[yystate];
      } else {
        yystate = (int )yydefgoto[yyn - 16];
      }
    } else {
      yystate = (int )yydefgoto[yyn - 16];
    }
  } else {
    yystate = (int )yydefgoto[yyn - 16];
  }
  goto __dyc_dummy_label;
  yyerrlab: 
  if (yychar == -2) {
    yytoken = -2;
  } else {
    if ((unsigned int )yychar <= 266U) {
      yytoken = (int )yytranslate[yychar];
    } else {
      yytoken = 2;
    }
  }
  if (! yyerrstatus) {
    {
    yynerrs ++;

    }
  }
  if (yyerrstatus == 3) {
    if (yychar <= 0) {
      if (yychar == 0) {
        goto yyabortlab;
      }
    } else {
      {

      yychar = -2;
      }
    }
  }
  goto yyerrlab1;
  yyvsp -= yylen;
  yyssp -= yylen;
  yylen = 0;
  yystate = (int )*yyssp;
  goto yyerrlab1;
  yyerrlab1: 
  yyerrstatus = 3;
  while (1) {
    while_15_continue:  ;
    yyn = (int )yypact[yystate];
    if (! (! (! (yyn == -32)))) {
      yyn ++;
      if (0 <= yyn) {
        if (yyn <= 104) {
          if ((int const   )yycheck[yyn] == 1) {
            yyn = (int )yytable[yyn];
            if (0 < yyn) {
              goto while_15_break;
            }
          }
        }
      }
    }
    if ((unsigned long )yyssp == (unsigned long )yyss) {
      goto yyabortlab;
    }
    {

    yyvsp --;
    yyssp --;
    yystate = (int )*yyssp;
    }
  }
  while_15_break:  ;
  yyvsp ++;
  *yyvsp = yylval;
  yystate = yyn;
  goto __dyc_dummy_label;
  yyacceptlab: 
  yyresult = 0;
  goto __dyc_dummy_label;
  yyabortlab: 
  yyresult = 1;
  __dyc_dummy_label:  ;
  __dyc_printpre_byte(yychar);
  __dyc_printpre_byte(yynerrs);
  __dyc_printpre_byte(yystate);
  __dyc_printpre_byte(yyerrstatus);
  __dyc_print_ptr__typdef_YYSTYPE(yyvsp);
  __dyc_printpre_byte(yyresult);
  __dyc_printpre_byte(yytoken);
  __dyc_printpre_byte(yylen);
  __dyc_print_ptr__comp_154format_tree(ft);
  __dyc_print_ptr__comp_144client(c);
  __dyc_print_ptr__comp_146cmd_find_state(fsp);
  __dyc_printpre_byte(flags);
  __dyc_print_ptr__comp_280cmd_parse_state(ps___9);
  __dyc_print_ptr__comp_280cmd_parse_state(ps___10);
}
}
