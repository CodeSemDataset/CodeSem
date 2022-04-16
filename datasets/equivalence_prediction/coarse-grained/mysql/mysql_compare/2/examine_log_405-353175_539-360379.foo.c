#include "../../include/dycfoo.h"
#include "../../include/myisamlog.i.hd.c.h"
void __dyc_foo(void) 
{ uint verbose ;
  uint update ;
  uint max_files ;
  uint recover ;
  my_string filepath ;
  my_string record_pos_file ;
  ulong com_count[10][3] ;
  my_off_t record_pos ;
  uint command ;
  uint result ;
  uint files_open ;
  ulong access_time ;
  my_off_t filepos ;
  int mi_result ;
  char isam_file_name[512] ;
  uchar head[20] ;
  struct test_if_open_param open_param ;
  IO_CACHE cache ;
  enum ha_extra_function extra_command ;
  struct file_info file_info ;
  struct file_info *curr_file_info ;
  char *to ;
  my_string tmp___8 ;
  size_t tmp___9 ;
  char *tmp___10 ;
  char **name ;
  size_t __s1_len ;
  size_t __s2_len ;
  int tmp___20 ;
  int tmp___25 ;
  int tmp___26 ;
  int tmp___27 ;
  int tmp___28 ;
  int tmp___29 ;
  char const   *tmp___30 ;
  int tmp___32 ;
  char const   *tmp___33 ;
  char *tmp___34 ;
  struct st_my_thread_var *tmp___35 ;
  int tmp___36 ;
  int tmp___38 ;
  char const   *tmp___39 ;
  bool tmp___40 ;
  int tmp___41 ;
  struct st_my_thread_var *tmp___42 ;
  int tmp___44 ;
  char **table_names ;
  char *__dyc_funcallvar_10 ;
  my_string __dyc_funcallvar_11 ;
  size_t __dyc_funcallvar_12 ;
  gptr __dyc_funcallvar_13 ;
  char *__dyc_funcallvar_14 ;
  int __dyc_funcallvar_15 ;
  int __dyc_funcallvar_16 ;
  int __dyc_funcallvar_17 ;
  int __dyc_funcallvar_18 ;
  int __dyc_funcallvar_19 ;
  int __dyc_funcallvar_20 ;
  struct st_myisam_info *__dyc_funcallvar_21 ;
  gptr __dyc_funcallvar_22 ;
  int __dyc_funcallvar_23 ;
  int __dyc_funcallvar_24 ;
  char *__dyc_funcallvar_25 ;
  struct st_my_thread_var *__dyc_funcallvar_26 ;
  int __dyc_funcallvar_27 ;
  bool __dyc_funcallvar_28 ;
  int __dyc_funcallvar_29 ;
  int __dyc_funcallvar_30 ;
  struct st_my_thread_var *__dyc_funcallvar_31 ;
  int __dyc_funcallvar_32 ;

  {
  verbose = (uint )__dyc_readpre_byte();
  update = (uint )__dyc_readpre_byte();
  max_files = (uint )__dyc_readpre_byte();
  recover = (uint )__dyc_readpre_byte();
  filepath = __dyc_read_ptr__char();
  record_pos_file = __dyc_read_ptr__char();
  record_pos = (my_off_t )__dyc_readpre_byte();
  command = (uint )__dyc_readpre_byte();
  result = (uint )__dyc_readpre_byte();
  files_open = (uint )__dyc_readpre_byte();
  access_time = (ulong )__dyc_readpre_byte();
  cache = __dyc_read_comp_107st_io_cache();
  file_info = __dyc_read_comp_151file_info();
  curr_file_info = __dyc_read_ptr__comp_151file_info();
  table_names = __dyc_read_ptr__ptr__char();
  __dyc_funcallvar_10 = __dyc_read_ptr__char();
  __dyc_funcallvar_11 = __dyc_read_ptr__char();
  __dyc_funcallvar_12 = (size_t )__dyc_readpre_byte();
  __dyc_funcallvar_13 = __dyc_read_ptr__char();
  __dyc_funcallvar_14 = __dyc_read_ptr__char();
  __dyc_funcallvar_15 = __dyc_readpre_byte();
  __dyc_funcallvar_16 = __dyc_readpre_byte();
  __dyc_funcallvar_17 = __dyc_readpre_byte();
  __dyc_funcallvar_18 = __dyc_readpre_byte();
  __dyc_funcallvar_19 = __dyc_readpre_byte();
  __dyc_funcallvar_20 = __dyc_readpre_byte();
  __dyc_funcallvar_21 = __dyc_read_ptr__comp_120st_myisam_info();
  __dyc_funcallvar_22 = __dyc_read_ptr__char();
  __dyc_funcallvar_23 = __dyc_readpre_byte();
  __dyc_funcallvar_24 = __dyc_readpre_byte();
  __dyc_funcallvar_25 = __dyc_read_ptr__char();
  __dyc_funcallvar_26 = __dyc_read_ptr__comp_91st_my_thread_var();
  __dyc_funcallvar_27 = __dyc_readpre_byte();
  __dyc_funcallvar_28 = (bool )__dyc_readpre_byte();
  __dyc_funcallvar_29 = __dyc_readpre_byte();
  __dyc_funcallvar_30 = __dyc_readpre_byte();
  __dyc_funcallvar_31 = __dyc_read_ptr__comp_91st_my_thread_var();
  __dyc_funcallvar_32 = __dyc_readpre_byte();
  filepos = 0;
  mi_result = 0;
  memset(& open_param, 0, sizeof(struct test_if_open_param ));
  extra_command = 0;
  to = 0;
  tmp___8 = 0;
  tmp___9 = 0;
  tmp___10 = 0;
  name = 0;
  __s1_len = 0;
  __s2_len = 0;
  tmp___20 = 0;
  tmp___25 = 0;
  tmp___26 = 0;
  tmp___27 = 0;
  tmp___28 = 0;
  tmp___29 = 0;
  tmp___30 = 0;
  tmp___32 = 0;
  tmp___33 = 0;
  tmp___34 = 0;
  tmp___35 = 0;
  tmp___36 = 0;
  tmp___38 = 0;
  tmp___39 = 0;
  tmp___40 = 0;
  tmp___41 = 0;
  tmp___42 = 0;
  tmp___44 = 0;
  if (filepath) {
    {
    to = __dyc_funcallvar_10;
    }
  }

  tmp___8 = __dyc_funcallvar_11;
  *(tmp___8 + 0) = (char)0;
  open_param.name = file_info.name;
  open_param.max_id = 0;

  file_info.id = open_param.max_id + 1;
  tmp___9 = __dyc_funcallvar_12;
  file_info.show_name = __dyc_funcallvar_13;
  if (file_info.id > 1) {
    {
    tmp___10 = __dyc_funcallvar_14;

    }
  }
  file_info.closed = (char)1;
  file_info.accessed = access_time;
  file_info.used = (char)1;
  if (*(table_names + 0)) {
    file_info.used = (char)0;
    name = table_names;
    {
    while (1) {
      while_8_continue:  ;
      if (! *name) {
        goto while_8_break;
      }
      if (0) {
        {
        tmp___26 = __dyc_funcallvar_15;
        __s1_len = (unsigned long )tmp___26;
        tmp___27 = __dyc_funcallvar_16;
        __s2_len = (unsigned long )tmp___27;
        }
        if (! ((unsigned long )((void const   *)(*name + 1)) - (unsigned long )((void const   *)*name) == 1UL)) {
          goto _L___1;
        } else {
          if (__s1_len >= 4UL) {
            _L___1:  
            if (! ((unsigned long )((void const   *)(isam_file_name + 1)) - (unsigned long )((void const   *)(isam_file_name)) == 1UL)) {
              tmp___28 = 1;
            } else {
              if (__s2_len >= 4UL) {
                tmp___28 = 1;
              } else {
                tmp___28 = 0;
              }
            }
          } else {
            tmp___28 = 0;
          }
        }
        if (tmp___28) {
          {
          tmp___20 = __dyc_funcallvar_17;
          }
        } else {
          {
          tmp___25 = __dyc_funcallvar_18;
          tmp___20 = tmp___25;
          }
        }
      } else {
        {
        tmp___25 = __dyc_funcallvar_19;
        tmp___20 = tmp___25;
        }
      }
      if (! tmp___20) {
        file_info.used = (char)1;
      }
      name ++;
    }
    while_8_break:  ;
    }
  }
  if (update) {
    if (file_info.used) {
      if (files_open >= max_files) {
        {
        tmp___29 = __dyc_funcallvar_20;
        }
        if (tmp___29) {
          goto __dyc_dummy_label;
        }
        files_open --;
      }
      {
      file_info.isam = __dyc_funcallvar_21;
      }
      if (! file_info.isam) {
        goto __dyc_dummy_label;
      }
      {
      file_info.record = __dyc_funcallvar_22;
      }
      if (! file_info.record) {
        goto __dyc_dummy_label;
      }
      files_open ++;
      file_info.closed = (char)0;
    }
  }

  if (file_info.used) {
    if (verbose) {
      if (! record_pos_file) {
        {

        }
      }
    }
    (com_count[command][0]) ++;
    if (result) {
      (com_count[command][1]) ++;
    }
  }
  goto __dyc_dummy_label;
  switch_5_4:  
  if (verbose) {
    if (! record_pos_file) {
      if (! *(table_names + 0)) {
        goto _L___2;
      } else {
        if (curr_file_info) {
          if (curr_file_info->used) {
            _L___2:  
            if (curr_file_info) {
              tmp___30 = (char const   *)curr_file_info->show_name;
            } else {
              tmp___30 = "Unknown";
            }
            {

            }
          }
        }
      }
    }
  }
  if (curr_file_info) {
    if (! curr_file_info->closed) {
      files_open --;
    }
    {

    }
  }
  goto __dyc_dummy_label;
  switch_5_5:  
  if ((unsigned long )(cache.read_pos + 1) <= (unsigned long )cache.read_end) {
    {

    (cache.read_pos) ++;
    tmp___32 = 0;
    }
  } else {
    {
    tmp___32 = __dyc_funcallvar_23;
    }
  }
  if (tmp___32) {
    goto __dyc_dummy_label;
  }
  extra_command = (enum ha_extra_function )head[0];
  if (verbose) {
    if (! record_pos_file) {
      if (! *(table_names + 0)) {
        goto _L___3;
      } else {
        if (curr_file_info) {
          if (curr_file_info->used) {
            _L___3:  
            if (curr_file_info) {
              tmp___33 = (char const   *)curr_file_info->show_name;
            } else {
              tmp___33 = "Unknown";
            }
            {

            }
          }
        }
      }
    }
  }
  if (update) {
    if (curr_file_info) {
      if (! curr_file_info->closed) {
        {
        tmp___36 = __dyc_funcallvar_24;
        }
        if (tmp___36 != (int )result) {
          {

          tmp___34 = __dyc_funcallvar_25;
          tmp___35 = __dyc_funcallvar_26;


          }
        }
      }
    }
  }
  goto __dyc_dummy_label;
  switch_5_3:  
  if ((unsigned long )(cache.read_pos + 8) <= (unsigned long )cache.read_end) {
    {

    cache.read_pos += 8;
    tmp___38 = 0;
    }
  } else {
    {
    tmp___38 = __dyc_funcallvar_27;
    }
  }
  if (tmp___38) {
    goto __dyc_dummy_label;
  }
  filepos = (unsigned long )((((unsigned int )head[7] + ((unsigned int )head[6] << 8)) + ((unsigned int )head[5] << 16)) + ((unsigned int )head[4] << 24)) + ((unsigned long )((((unsigned int )head[3] + ((unsigned int )head[2] << 8)) + ((unsigned int )head[1] << 16)) + ((unsigned int )head[0] << 24)) << 32);
  if (verbose) {
    if (! record_pos_file) {
      goto _L___5;
    } else {
      if (record_pos == filepos) {
        goto _L___6;
      } else {
        if (record_pos == 0xffffffffUL) {
          _L___6:  
          {
          tmp___40 = __dyc_funcallvar_28;
          }
          if (! tmp___40) {
            _L___5:  
            if (! *(table_names + 0)) {
              goto _L___4;
            } else {
              if (curr_file_info) {
                if (curr_file_info->used) {
                  _L___4:  
                  if (curr_file_info) {
                    tmp___39 = (char const   *)curr_file_info->show_name;
                  } else {
                    tmp___39 = "Unknown";
                  }
                  {

                  }
                }
              }
            }
          }
        }
      }
    }
  }
  if (update) {
    if (curr_file_info) {
      if (! curr_file_info->closed) {
        {
        tmp___41 = __dyc_funcallvar_29;
        }
        if (tmp___41) {
          if (! recover) {
            goto __dyc_dummy_label;
          }
          if (verbose) {
            {

            }
          }
          (com_count[command][2]) ++;
        }
        {
        mi_result = __dyc_funcallvar_30;
        }
        if (mi_result == 0) {
          if (result) {
            goto _L___7;
          } else {
            goto _L___8;
          }
        } else {
          _L___8:  
          if (mi_result) {
            {
            tmp___42 = __dyc_funcallvar_31;
            }
            if ((unsigned int )tmp___42->thr_errno != result) {
              _L___7:  
              if (! recover) {
                goto __dyc_dummy_label;
              }
              if (mi_result) {
                (com_count[command][2]) ++;
              }
              if (verbose) {
                {

                }
              }
            }
          }
        }
      }
    }
  }
  goto __dyc_dummy_label;
  switch_5_1:  
  switch_5_2:  
  if ((unsigned long )(cache.read_pos + 12) <= (unsigned long )cache.read_end) {
    {

    cache.read_pos += 12;
    tmp___44 = 0;
    }
  } else {
    {
    tmp___44 = __dyc_funcallvar_32;
    }
  }
  if (tmp___44) {
    goto __dyc_dummy_label;
  }
  filepos = (unsigned long )((((unsigned int )head[7] + ((unsigned int )head[6] << 8)) + ((unsigned int )head[5] << 16)) + ((unsigned int )head[4] << 24)) + ((unsigned long )((((unsigned int )head[3] + ((unsigned int )head[2] << 8)) + ((unsigned int )head[1] << 16)) + ((unsigned int )head[0] << 24)) << 32);
  __dyc_dummy_label:  ;
  __dyc_printpre_byte(files_open);
  __dyc_printpre_byte(filepos);
  __dyc_print_comp_107st_io_cache(cache);
  __dyc_printpre_byte(extra_command);
  __dyc_print_ptr__char(to);
  __dyc_printpre_byte(tmp___9);
  __dyc_print_ptr__char(tmp___10);
  __dyc_printpre_byte(__s1_len);
  __dyc_printpre_byte(__s2_len);
  __dyc_print_ptr__char(tmp___30);
  __dyc_print_ptr__char(tmp___33);
  __dyc_print_ptr__char(tmp___34);
  __dyc_print_ptr__comp_91st_my_thread_var(tmp___35);
  __dyc_print_ptr__char(tmp___39);
}
}
