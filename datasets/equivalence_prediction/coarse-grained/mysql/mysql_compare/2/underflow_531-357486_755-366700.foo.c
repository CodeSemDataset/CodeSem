#include "../../include/dycfoo.h"
#include "../../include/mi_delete.i.hd.c.h"
void __dyc_foo(void) 
{ int t_length ;
  uint length ;
  uint anc_length ;
  uint buff_length ;
  uint leaf_length ;
  uint p_length ;
  uint s_length ;
  uint nod_flag ;
  uint key_reflength ;
  my_off_t next_page ;
  uchar anc_key[1112] ;
  uchar leaf_key[1112] ;
  uchar *buff ;
  uchar *endpos ;
  uchar *next_keypos ;
  uchar *anc_pos ;
  uchar *half_pos ;
  uchar *temp_pos ;
  uchar *prev_key ;
  uchar *after_key ;
  uint tmp ;
  uchar *tmp___0 ;
  uchar *tmp___1 ;
  uchar *tmp___2 ;
  uint16 boh ;
  int tmp___3 ;
  uint def_temp ;
  uint16 boh___0 ;
  int tmp___4 ;
  uint def_temp___0 ;
  int tmp___5 ;
  uchar *tmp___6 ;
  uint16 boh___1 ;
  int tmp___7 ;
  uint def_temp___1 ;
  uchar *tmp___8 ;
  uint16 boh___2 ;
  int tmp___9 ;
  uint def_temp___2 ;
  uint tmp___10 ;
  int tmp___11 ;
  uint16 boh___3 ;
  int tmp___12 ;
  uint def_temp___3 ;
  int tmp___13 ;
  int tmp___14 ;
  unsigned int tmp___15 ;
  uchar *tmp___16 ;
  uint tmp___17 ;
  uchar *tmp___18 ;
  uchar *tmp___19 ;
  uint16 boh___4 ;
  int tmp___20 ;
  uint def_temp___4 ;
  uint16 boh___5 ;
  int tmp___21 ;
  uint def_temp___5 ;
  int tmp___22 ;
  uchar *tmp___23 ;
  uchar *tmp___24 ;
  uint16 boh___6 ;
  int tmp___25 ;
  uint def_temp___6 ;
  uint16 boh___7 ;
  int tmp___26 ;
  uint def_temp___7 ;
  int tmp___27 ;
  uint16 boh___8 ;
  int tmp___28 ;
  uint def_temp___8 ;
  int tmp___29 ;
  MI_INFO *info ;
  MI_KEYDEF *keyinfo ;
  uchar *anc_buff ;
  uchar *leaf_buff ;
  uchar *keypos ;
  uchar *__dyc_funcallvar_1 ;
  uint __dyc_funcallvar_2 ;
  my_off_t __dyc_funcallvar_3 ;
  uchar *__dyc_funcallvar_4 ;
  uchar *__dyc_funcallvar_5 ;
  uchar *__dyc_funcallvar_6 ;
  int __dyc_funcallvar_7 ;
  uint __dyc_funcallvar_8 ;
  int __dyc_funcallvar_9 ;
  uchar *__dyc_funcallvar_10 ;
  uchar *__dyc_funcallvar_11 ;
  int __dyc_funcallvar_12 ;
  uint __dyc_funcallvar_13 ;
  int __dyc_funcallvar_14 ;
  int __dyc_funcallvar_15 ;
  int __dyc_funcallvar_16 ;
  uchar *__dyc_funcallvar_17 ;
  my_off_t __dyc_funcallvar_18 ;
  uchar *__dyc_funcallvar_19 ;
  uint __dyc_funcallvar_20 ;
  uchar *__dyc_funcallvar_21 ;
  int __dyc_funcallvar_22 ;
  uint __dyc_funcallvar_23 ;
  int __dyc_funcallvar_24 ;
  uchar *__dyc_funcallvar_25 ;
  uchar *__dyc_funcallvar_26 ;
  int __dyc_funcallvar_27 ;
  uint __dyc_funcallvar_28 ;
  int __dyc_funcallvar_29 ;
  int __dyc_funcallvar_30 ;
  int __dyc_funcallvar_31 ;

  {
  anc_length = (uint )__dyc_readpre_byte();
  leaf_length = (uint )__dyc_readpre_byte();
  p_length = (uint )__dyc_readpre_byte();
  nod_flag = (uint )__dyc_readpre_byte();
  key_reflength = (uint )__dyc_readpre_byte();
  buff = __dyc_read_ptr__typdef_uchar();
  half_pos = __dyc_read_ptr__typdef_uchar();
  after_key = __dyc_read_ptr__typdef_uchar();
  info = __dyc_read_ptr__typdef_MI_INFO();
  keyinfo = __dyc_read_ptr__typdef_MI_KEYDEF();
  anc_buff = __dyc_read_ptr__typdef_uchar();
  leaf_buff = __dyc_read_ptr__typdef_uchar();
  keypos = __dyc_read_ptr__typdef_uchar();
  __dyc_funcallvar_1 = __dyc_read_ptr__typdef_uchar();
  __dyc_funcallvar_2 = (uint )__dyc_readpre_byte();
  __dyc_funcallvar_3 = (my_off_t )__dyc_readpre_byte();
  __dyc_funcallvar_4 = __dyc_read_ptr__typdef_uchar();
  __dyc_funcallvar_5 = __dyc_read_ptr__typdef_uchar();
  __dyc_funcallvar_6 = __dyc_read_ptr__typdef_uchar();
  __dyc_funcallvar_7 = __dyc_readpre_byte();
  __dyc_funcallvar_8 = (uint )__dyc_readpre_byte();
  __dyc_funcallvar_9 = __dyc_readpre_byte();
  __dyc_funcallvar_10 = __dyc_read_ptr__typdef_uchar();
  __dyc_funcallvar_11 = __dyc_read_ptr__typdef_uchar();
  __dyc_funcallvar_12 = __dyc_readpre_byte();
  __dyc_funcallvar_13 = (uint )__dyc_readpre_byte();
  __dyc_funcallvar_14 = __dyc_readpre_byte();
  __dyc_funcallvar_15 = __dyc_readpre_byte();
  __dyc_funcallvar_16 = __dyc_readpre_byte();
  __dyc_funcallvar_17 = __dyc_read_ptr__typdef_uchar();
  __dyc_funcallvar_18 = (my_off_t )__dyc_readpre_byte();
  __dyc_funcallvar_19 = __dyc_read_ptr__typdef_uchar();
  __dyc_funcallvar_20 = (uint )__dyc_readpre_byte();
  __dyc_funcallvar_21 = __dyc_read_ptr__typdef_uchar();
  __dyc_funcallvar_22 = __dyc_readpre_byte();
  __dyc_funcallvar_23 = (uint )__dyc_readpre_byte();
  __dyc_funcallvar_24 = __dyc_readpre_byte();
  __dyc_funcallvar_25 = __dyc_read_ptr__typdef_uchar();
  __dyc_funcallvar_26 = __dyc_read_ptr__typdef_uchar();
  __dyc_funcallvar_27 = __dyc_readpre_byte();
  __dyc_funcallvar_28 = (uint )__dyc_readpre_byte();
  __dyc_funcallvar_29 = __dyc_readpre_byte();
  __dyc_funcallvar_30 = __dyc_readpre_byte();
  __dyc_funcallvar_31 = __dyc_readpre_byte();
  t_length = 0;
  length = 0;
  buff_length = 0;
  s_length = 0;
  next_page = 0;
  endpos = 0;
  next_keypos = 0;
  anc_pos = 0;
  temp_pos = 0;
  prev_key = 0;
  tmp = 0;
  tmp___0 = 0;
  tmp___1 = 0;
  tmp___2 = 0;
  boh = 0;
  tmp___3 = 0;
  def_temp = 0;
  boh___0 = 0;
  tmp___4 = 0;
  def_temp___0 = 0;
  tmp___5 = 0;
  tmp___6 = 0;
  boh___1 = 0;
  tmp___7 = 0;
  def_temp___1 = 0;
  tmp___8 = 0;
  boh___2 = 0;
  tmp___9 = 0;
  def_temp___2 = 0;
  tmp___10 = 0;
  tmp___11 = 0;
  boh___3 = 0;
  tmp___12 = 0;
  def_temp___3 = 0;
  tmp___13 = 0;
  tmp___14 = 0;
  tmp___15 = 0;
  tmp___16 = 0;
  tmp___17 = 0;
  tmp___18 = 0;
  tmp___19 = 0;
  boh___4 = 0;
  tmp___20 = 0;
  def_temp___4 = 0;
  boh___5 = 0;
  tmp___21 = 0;
  def_temp___5 = 0;
  tmp___22 = 0;
  tmp___23 = 0;
  tmp___24 = 0;
  boh___6 = 0;
  tmp___25 = 0;
  def_temp___6 = 0;
  boh___7 = 0;
  tmp___26 = 0;
  def_temp___7 = 0;
  tmp___27 = 0;
  boh___8 = 0;
  tmp___28 = 0;
  def_temp___8 = 0;
  tmp___29 = 0;
  if ((unsigned long )((info->s)->keyinfo + info->lastinx) == (unsigned long )keyinfo) {
    info->page_changed = (char)1;
  }
  if ((unsigned long )keypos < (unsigned long )(anc_buff + anc_length)) {
    if ((info->state)->records & 1UL) {
      goto _L;
    } else {
      goto _L___0;
    }
  } else {
    _L___0:  
    if ((unsigned long )keypos == (unsigned long )((anc_buff + 2) + key_reflength)) {
      _L:  
      if ((int )keyinfo->flag & 32) {
        {
        next_keypos = __dyc_funcallvar_1;
        }
        if (! next_keypos) {
          goto __dyc_dummy_label;
        }
      } else {
        {
        *(buff + 1) = (unsigned char)0;
        *(buff + 0) = *(buff + 1);
        tmp = __dyc_funcallvar_2;
        }
        if (! tmp) {
          goto __dyc_dummy_label;
        }
      }
      {
      next_page = __dyc_funcallvar_3;
      tmp___0 = __dyc_funcallvar_4;
      }
      if (! tmp___0) {
        goto __dyc_dummy_label;
      }
      {
      buff_length = (unsigned int )((unsigned short )((int )((unsigned short )*(buff + 1)) + ((int )((unsigned short )*(buff + 0)) << 8))) & 32767U;

      tmp___1 = __dyc_funcallvar_5;
      }
      if (tmp___1) {
        {
        tmp___2 = __dyc_funcallvar_6;
        }
        if (! tmp___2) {
          goto __dyc_dummy_label;
        }
      } else {
        goto __dyc_dummy_label;
      }
      if (leaf_length == p_length) {
        prev_key = (uchar *)0;
      } else {
        prev_key = leaf_key;
      }
      {
      t_length = __dyc_funcallvar_7;
      length = buff_length - p_length;
      endpos = ((buff + length) + leaf_length) + t_length;



      buff_length = (unsigned int )(endpos - buff);
      }
      if (nod_flag) {
        tmp___3 = 32768;
      } else {
        tmp___3 = 0;
      }
      {
      boh = (uint16 )(tmp___3 + (int )((unsigned short )buff_length));
      def_temp = (unsigned int )boh;
      *(buff + 1) = (unsigned char )def_temp;
      *(buff + 0) = (unsigned char )(def_temp >> 8);
      s_length = __dyc_funcallvar_8;
      }
      if (! s_length) {
        goto __dyc_dummy_label;
      }
      anc_length -= s_length;
      if (key_reflength) {
        tmp___4 = 32768;
      } else {
        tmp___4 = 0;
      }
      boh___0 = (uint16 )(tmp___4 + (int )((unsigned short )anc_length));
      def_temp___0 = (unsigned int )boh___0;
      *(anc_buff + 1) = (unsigned char )def_temp___0;
      *(anc_buff + 0) = (unsigned char )(def_temp___0 >> 8);
      if (buff_length <= (uint )keyinfo->block_length) {
        {

        tmp___5 = __dyc_funcallvar_9;
        }
        if (tmp___5) {
          goto __dyc_dummy_label;
        }
      } else {
        endpos = anc_buff + anc_length;
        if ((unsigned long )keypos != (unsigned long )((anc_buff + 2) + key_reflength)) {
          {
          tmp___6 = __dyc_funcallvar_10;
          }
          if (! tmp___6) {
            goto __dyc_dummy_label;
          }
        }
        {
        half_pos = __dyc_funcallvar_11;
        }
        if (! half_pos) {
          goto __dyc_dummy_label;
        }
        {
        length = (unsigned int )(half_pos - buff);

        }
        if (nod_flag) {
          tmp___7 = 32768;
        } else {
          tmp___7 = 0;
        }
        {
        boh___1 = (uint16 )(tmp___7 + (int )((unsigned short )length));
        def_temp___1 = (unsigned int )boh___1;
        *(leaf_buff + 1) = (unsigned char )def_temp___1;
        *(leaf_buff + 0) = (unsigned char )(def_temp___1 >> 8);
        half_pos = after_key;

        }
        if ((unsigned long )keypos == (unsigned long )((anc_buff + 2) + key_reflength)) {
          prev_key = (uchar *)0;
        } else {
          prev_key = anc_key;
        }
        if ((unsigned long )keypos == (unsigned long )endpos) {
          tmp___8 = (uchar *)0;
        } else {
          tmp___8 = keypos;
        }
        {
        t_length = __dyc_funcallvar_12;
        }
        if (t_length >= 0) {
          {

          }
        } else {
          {

          }
        }
        {

        }
        if (key_reflength) {
          tmp___9 = 32768;
        } else {
          tmp___9 = 0;
        }
        anc_length += (uint )t_length;
        boh___2 = (uint16 )(tmp___9 + (int )((unsigned short )anc_length));
        def_temp___2 = (unsigned int )boh___2;
        *(anc_buff + 1) = (unsigned char )def_temp___2;
        *(anc_buff + 0) = (unsigned char )(def_temp___2 >> 8);
        if (nod_flag) {
          {

          }
        }
        {
        tmp___10 = __dyc_funcallvar_13;
        }
        if (! tmp___10) {
          goto __dyc_dummy_label;
        }
        {
        tmp___11 = __dyc_funcallvar_14;
        t_length = tmp___11;
        length = (unsigned int )((buff + ((unsigned int )((unsigned short )((int )((unsigned short )*(buff + 1)) + ((int )((unsigned short )*(buff + 0)) << 8))) & 32767U)) - half_pos);


        }
        if (nod_flag) {
          tmp___12 = 32768;
        } else {
          tmp___12 = 0;
        }
        {
        boh___3 = (uint16 )(tmp___12 + (int )((unsigned short )((length + (uint )t_length) + p_length)));
        def_temp___3 = (unsigned int )boh___3;
        *(buff + 1) = (unsigned char )def_temp___3;
        *(buff + 0) = (unsigned char )(def_temp___3 >> 8);
        tmp___13 = __dyc_funcallvar_15;
        }
        if (tmp___13) {
          goto __dyc_dummy_label;
        }
      }
      {
      tmp___14 = __dyc_funcallvar_16;
      }
      if (tmp___14) {
        goto __dyc_dummy_label;
      }
      if (info->quick_mode) {
        tmp___15 = 20U;
      } else {
        tmp___15 = (unsigned int )keyinfo->underflow_block_length;
      }
      goto __dyc_dummy_label;
    }
  }
  keypos = __dyc_funcallvar_17;
  if (! keypos) {
    goto __dyc_dummy_label;
  }
  next_page = __dyc_funcallvar_18;
  tmp___16 = __dyc_funcallvar_19;
  if (! tmp___16) {
    goto __dyc_dummy_label;
  }
  buff_length = (unsigned int )((unsigned short )((int )((unsigned short )*(buff + 1)) + ((int )((unsigned short )*(buff + 0)) << 8))) & 32767U;
  endpos = buff + buff_length;

  next_keypos = keypos;
  tmp___17 = __dyc_funcallvar_20;
  if (! tmp___17) {
    goto __dyc_dummy_label;
  }
  tmp___18 = __dyc_funcallvar_21;
  if (! tmp___18) {
    goto __dyc_dummy_label;
  }
  if (leaf_length == p_length) {
    prev_key = (uchar *)0;
  } else {
    prev_key = leaf_key;
  }
  if (leaf_length == p_length) {
    tmp___19 = (uchar *)0;
  } else {
    tmp___19 = leaf_buff + p_length;
  }
  t_length = __dyc_funcallvar_22;
  if (t_length >= 0) {
    {

    }
  } else {
    {

    }
  }

  buff_length = ((buff_length + leaf_length) - p_length) + (uint )t_length;
  if (nod_flag) {
    tmp___20 = 32768;
  } else {
    tmp___20 = 0;
  }
  boh___4 = (uint16 )(tmp___20 + (int )((unsigned short )buff_length));
  def_temp___4 = (unsigned int )boh___4;
  *(buff + 1) = (unsigned char )def_temp___4;
  *(buff + 0) = (unsigned char )(def_temp___4 >> 8);
  s_length = __dyc_funcallvar_23;
  if (! s_length) {
    goto __dyc_dummy_label;
  }
  anc_length -= s_length;
  if (key_reflength) {
    tmp___21 = 32768;
  } else {
    tmp___21 = 0;
  }
  boh___5 = (uint16 )(tmp___21 + (int )((unsigned short )anc_length));
  def_temp___5 = (unsigned int )boh___5;
  *(anc_buff + 1) = (unsigned char )def_temp___5;
  *(anc_buff + 0) = (unsigned char )(def_temp___5 >> 8);
  if (buff_length <= (uint )keyinfo->block_length) {
    {
    tmp___22 = __dyc_funcallvar_24;
    }
    if (tmp___22) {
      goto __dyc_dummy_label;
    }
  } else {
    if ((unsigned long )keypos == (unsigned long )((anc_buff + 2) + key_reflength)) {
      anc_pos = (uchar *)0;
    } else {
      {
      anc_pos = anc_key;
      tmp___23 = __dyc_funcallvar_25;
      }
      if (! tmp___23) {
        goto __dyc_dummy_label;
      }
    }
    {
    endpos = __dyc_funcallvar_26;
    }
    if (! endpos) {
      goto __dyc_dummy_label;
    }
    {

    temp_pos = anc_buff + anc_length;
    }
    if ((unsigned long )keypos == (unsigned long )temp_pos) {
      tmp___24 = (uchar *)0;
    } else {
      tmp___24 = keypos;
    }
    {
    t_length = __dyc_funcallvar_27;
    }
    if (t_length > 0) {
      {

      }
    } else {
      {

      }
    }
    {

    }
    if (key_reflength) {
      tmp___25 = 32768;
    } else {
      tmp___25 = 0;
    }
    anc_length += (uint )t_length;
    boh___6 = (uint16 )(tmp___25 + (int )((unsigned short )anc_length));
    def_temp___6 = (unsigned int )boh___6;
    *(anc_buff + 1) = (unsigned char )def_temp___6;
    *(anc_buff + 0) = (unsigned char )(def_temp___6 >> 8);
    if (nod_flag) {
      {

      }
    }
    {
    length = __dyc_funcallvar_28;
    }
    if (! length) {
      goto __dyc_dummy_label;
    }
    {
    t_length = __dyc_funcallvar_29;
    length = (unsigned int )((buff + buff_length) - half_pos);


    }
    if (nod_flag) {
      tmp___26 = 32768;
    } else {
      tmp___26 = 0;
    }
    {
    boh___7 = (uint16 )(tmp___26 + (int )((unsigned short )((length + (uint )t_length) + p_length)));
    def_temp___7 = (unsigned int )boh___7;
    *(leaf_buff + 1) = (unsigned char )def_temp___7;
    *(leaf_buff + 0) = (unsigned char )(def_temp___7 >> 8);
    tmp___27 = __dyc_funcallvar_30;
    }
    if (tmp___27) {
      goto __dyc_dummy_label;
    }
    if (nod_flag) {
      tmp___28 = 32768;
    } else {
      tmp___28 = 0;
    }
    boh___8 = (uint16 )(tmp___28 + (int )((unsigned short )(endpos - buff)));
    def_temp___8 = (unsigned int )boh___8;
    *(buff + 1) = (unsigned char )def_temp___8;
    *(buff + 0) = (unsigned char )(def_temp___8 >> 8);
  }
  tmp___29 = __dyc_funcallvar_31;
  if (tmp___29) {
    goto __dyc_dummy_label;
  }
  goto __dyc_dummy_label;
  __dyc_dummy_label:  ;
  __dyc_printpre_byte(buff_length);
  __dyc_printpre_byte(next_page);
  __dyc_print_ptr__typdef_uchar(endpos);
  __dyc_print_ptr__typdef_uchar(next_keypos);
  __dyc_print_ptr__typdef_uchar(anc_pos);
  __dyc_print_ptr__typdef_uchar(half_pos);
  __dyc_print_ptr__typdef_uchar(prev_key);
  __dyc_print_ptr__typdef_uchar(tmp___8);
  __dyc_printpre_byte(tmp___15);
  __dyc_print_ptr__typdef_uchar(tmp___19);
  __dyc_print_ptr__typdef_uchar(tmp___24);
}
}
