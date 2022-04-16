#line 143 "/usr/include/x86_64-linux-gnu/bits/types.h"
typedef int __pid_t;
#line 149 "/usr/include/x86_64-linux-gnu/bits/types.h"
typedef long __time_t;
#line 212 "/usr/lib/gcc/x86_64-linux-gnu/4.6/include/stddef.h"
typedef unsigned long size_t;
#line 76 "/usr/include/time.h"
typedef __time_t time_t;
#line 50 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h"
typedef unsigned long pthread_t;
#line 61 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h"
struct __pthread_internal_list {
   struct __pthread_internal_list *__prev ;
   struct __pthread_internal_list *__next ;
};
#line 61 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h"
typedef struct __pthread_internal_list __pthread_list_t;
#line 76 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h"
struct __pthread_mutex_s {
   int __lock ;
   unsigned int __count ;
   int __owner ;
   unsigned int __nusers ;
   int __kind ;
   int __spins ;
   __pthread_list_t __list ;
};
#line 76 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h"
union __anonunion_pthread_mutex_t_4 {
   struct __pthread_mutex_s __data ;
   char __size[40] ;
   long __align ;
};
#line 76 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h"
typedef union __anonunion_pthread_mutex_t_4 pthread_mutex_t;
#line 106 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h"
union __anonunion_pthread_mutexattr_t_5 {
   char __size[4] ;
   int __align ;
};
#line 106 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h"
typedef union __anonunion_pthread_mutexattr_t_5 pthread_mutexattr_t;
#line 115 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h"
struct __anonstruct___data_7 {
   int __lock ;
   unsigned int __futex ;
   unsigned long long __total_seq ;
   unsigned long long __wakeup_seq ;
   unsigned long long __woken_seq ;
   void *__mutex ;
   unsigned int __nwaiters ;
   unsigned int __broadcast_seq ;
};
#line 115 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h"
union __anonunion_pthread_cond_t_6 {
   struct __anonstruct___data_7 __data ;
   char __size[48] ;
   long long __align ;
};
#line 115 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h"
typedef union __anonunion_pthread_cond_t_6 pthread_cond_t;
#line 150 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h"
struct __anonstruct___data_10 {
   int __lock ;
   unsigned int __nr_readers ;
   unsigned int __readers_wakeup ;
   unsigned int __writer_wakeup ;
   unsigned int __nr_readers_queued ;
   unsigned int __nr_writers_queued ;
   int __writer ;
   int __shared ;
   unsigned long __pad1 ;
   unsigned long __pad2 ;
   unsigned int __flags ;
};
#line 150 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h"
union __anonunion_pthread_rwlock_t_9 {
   struct __anonstruct___data_10 __data ;
   char __size[56] ;
   long __align ;
};
#line 150 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h"
typedef union __anonunion_pthread_rwlock_t_9 pthread_rwlock_t;
#line 191 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h"
union __anonunion_pthread_rwlockattr_t_11 {
   char __size[8] ;
   long __align ;
};
#line 191 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h"
typedef union __anonunion_pthread_rwlockattr_t_11 pthread_rwlockattr_t;
#line 151 "/usr/include/x86_64-linux-gnu/sys/types.h"
typedef unsigned long ulong;
#line 153 "/usr/include/x86_64-linux-gnu/sys/types.h"
typedef unsigned int uint;
#line 548 "../include/my_global.h"
typedef int File;
#line 559 "../include/my_global.h"
typedef char pchar;
#line 561 "../include/my_global.h"
typedef char pbool;
#line 868 "../include/my_global.h"
typedef char *gptr;
#line 872 "../include/my_global.h"
typedef short int16;
#line 875 "../include/my_global.h"
typedef unsigned char uchar;
#line 877 "../include/my_global.h"
typedef unsigned char uint8;
#line 878 "../include/my_global.h"
typedef unsigned short uint16;
#line 884 "../include/my_global.h"
typedef unsigned int uint32;
#line 902 "../include/my_global.h"
typedef unsigned long ulonglong;
#line 903 "../include/my_global.h"
typedef long longlong;
#line 932 "../include/my_global.h"
typedef ulonglong my_off_t;
#line 974 "../include/my_global.h"
typedef char *my_string;
#line 976 "../include/my_global.h"
typedef int myf;
#line 978 "../include/my_global.h"
typedef char byte;
#line 980 "../include/my_global.h"
typedef char my_bool;
#line 982 "../include/my_global.h"
typedef char bool;
#line 744 "../include/my_pthread.h"
struct st_my_thread_var {
   int thr_errno ;
   pthread_cond_t suspend ;
   pthread_mutex_t mutex ;
   pthread_mutex_t *current_mutex ;
   pthread_cond_t *current_cond ;
   pthread_t pthread_self ;
   long id ;
   int cmp_length ;
   int abort ;
   my_bool init ;
   struct st_my_thread_var *next ;
   struct st_my_thread_var **prev ;
   void *opt_info ;
};
#line 41 "../include/m_ctype.h"
struct unicase_info_st {
   uint16 toupper ;
   uint16 tolower ;
   uint16 sort ;
};
#line 41 "../include/m_ctype.h"
typedef struct unicase_info_st MY_UNICASE_INFO;
#line 84 "../include/m_ctype.h"
struct my_uni_idx_st {
   uint16 from ;
   uint16 to ;
   uchar *tab ;
};
#line 84 "../include/m_ctype.h"
typedef struct my_uni_idx_st MY_UNI_IDX;
#line 91 "../include/m_ctype.h"
struct __anonstruct_my_match_t_50 {
   uint beg ;
   uint end ;
   uint mb_len ;
};
#line 91 "../include/m_ctype.h"
typedef struct __anonstruct_my_match_t_50 my_match_t;
#line 114
struct charset_info_st;
#line 114
struct charset_info_st;
#line 118 "../include/m_ctype.h"
struct my_collation_handler_st {
   my_bool (*init)(struct charset_info_st * , void *(*alloc)(uint  ) ) ;
   int (*strnncoll)(struct charset_info_st * , uchar const   * , uint  ,
                    uchar const   * , uint  , my_bool  ) ;
   int (*strnncollsp)(struct charset_info_st * , uchar const   * , uint  ,
                      uchar const   * , uint  ,
                      my_bool diff_if_only_endspace_difference ) ;
   int (*strnxfrm)(struct charset_info_st * , uchar * , uint  ,
                   uchar const   * , uint  ) ;
   uint (*strnxfrmlen)(struct charset_info_st * , uint  ) ;
   my_bool (*like_range)(struct charset_info_st * , char const   *s ,
                         uint s_length , pchar w_prefix , pchar w_one ,
                         pchar w_many , uint res_length , char *min_str ,
                         char *max_str , uint *min_len , uint *max_len ) ;
   int (*wildcmp)(struct charset_info_st * , char const   *str ,
                  char const   *str_end , char const   *wildstr ,
                  char const   *wildend , int escape , int w_one , int w_many ) ;
   int (*strcasecmp)(struct charset_info_st * , char const   * , char const   * ) ;
   uint (*instr)(struct charset_info_st * , char const   *b , uint b_length ,
                 char const   *s , uint s_length , my_match_t *match ,
                 uint nmatch ) ;
   void (*hash_sort)(struct charset_info_st *cs , uchar const   *key ,
                     uint len , ulong *nr1 , ulong *nr2 ) ;
   my_bool (*propagate)(struct charset_info_st *cs , uchar const   *str ,
                        uint len ) ;
};
#line 118 "../include/m_ctype.h"
typedef struct my_collation_handler_st MY_COLLATION_HANDLER;
#line 161 "../include/m_ctype.h"
struct my_charset_handler_st {
   my_bool (*init)(struct charset_info_st * , void *(*alloc)(uint  ) ) ;
   int (*ismbchar)(struct charset_info_st * , char const   * , char const   * ) ;
   int (*mbcharlen)(struct charset_info_st * , uint  ) ;
   uint (*numchars)(struct charset_info_st * , char const   *b ,
                    char const   *e ) ;
   uint (*charpos)(struct charset_info_st * , char const   *b ,
                   char const   *e , uint pos ) ;
   uint (*well_formed_len)(struct charset_info_st * , char const   *b ,
                           char const   *e , uint nchars , int *error ) ;
   uint (*lengthsp)(struct charset_info_st * , char const   *ptr , uint length ) ;
   uint (*numcells)(struct charset_info_st * , char const   *b ,
                    char const   *e ) ;
   int (*mb_wc)(struct charset_info_st *cs , ulong *wc ,
                unsigned char const   *s , unsigned char const   *e ) ;
   int (*wc_mb)(struct charset_info_st *cs , ulong wc , unsigned char *s ,
                unsigned char *e ) ;
   uint (*caseup_str)(struct charset_info_st * , char * ) ;
   uint (*casedn_str)(struct charset_info_st * , char * ) ;
   uint (*caseup)(struct charset_info_st * , char *src , uint srclen ,
                  char *dst , uint dstlen ) ;
   uint (*casedn)(struct charset_info_st * , char *src , uint srclen ,
                  char *dst , uint dstlen ) ;
   int (*snprintf)(struct charset_info_st * , char *to , uint n ,
                   char const   *fmt  , ...) ;
   int (*long10_to_str)(struct charset_info_st * , char *to , uint n ,
                        int radix , long val ) ;
   int (*longlong10_to_str)(struct charset_info_st * , char *to , uint n ,
                            int radix , longlong val ) ;
   void (*fill)(struct charset_info_st * , char *to , uint len , int fill ) ;
   long (*strntol)(struct charset_info_st * , char const   *s , uint l ,
                   int base , char **e , int *err ) ;
   ulong (*strntoul)(struct charset_info_st * , char const   *s , uint l ,
                     int base , char **e , int *err ) ;
   longlong (*strntoll)(struct charset_info_st * , char const   *s , uint l ,
                        int base , char **e , int *err ) ;
   ulonglong (*strntoull)(struct charset_info_st * , char const   *s , uint l ,
                          int base , char **e , int *err ) ;
   double (*strntod)(struct charset_info_st * , char *s , uint l , char **e ,
                     int *err ) ;
   longlong (*strtoll10)(struct charset_info_st *cs , char const   *nptr ,
                         char **endptr , int *error ) ;
   ulonglong (*strntoull10rnd)(struct charset_info_st *cs , char const   *str ,
                               uint length , int unsigned_fl , char **endptr ,
                               int *error ) ;
   ulong (*scan)(struct charset_info_st * , char const   *b , char const   *e ,
                 int sq ) ;
};
#line 161 "../include/m_ctype.h"
typedef struct my_charset_handler_st MY_CHARSET_HANDLER;
#line 224 "../include/m_ctype.h"
struct charset_info_st {
   uint number ;
   uint primary_number ;
   uint binary_number ;
   uint state ;
   char *csname ;
   char *name ;
   char *comment ;
   char *tailoring ;
   uchar *ctype ;
   uchar *to_lower ;
   uchar *to_upper ;
   uchar *sort_order ;
   uint16 *contractions ;
   uint16 **sort_order_big ;
   uint16 *tab_to_uni ;
   MY_UNI_IDX *tab_from_uni ;
   MY_UNICASE_INFO **caseinfo ;
   uchar *state_map ;
   uchar *ident_map ;
   uint strxfrm_multiply ;
   uchar caseup_multiply ;
   uchar casedn_multiply ;
   uint mbminlen ;
   uint mbmaxlen ;
   uint16 min_sort_char ;
   uint16 max_sort_char ;
   uchar pad_char ;
   my_bool escape_with_backslash_is_dangerous ;
   MY_CHARSET_HANDLER *cset ;
   MY_COLLATION_HANDLER *coll ;
};
#line 224 "../include/m_ctype.h"
typedef struct charset_info_st CHARSET_INFO;
#line 26 "../include/my_alloc.h"
struct st_used_mem {
   struct st_used_mem *next ;
   unsigned int left ;
   unsigned int size ;
};
#line 26 "../include/my_alloc.h"
typedef struct st_used_mem USED_MEM;
#line 34 "../include/my_alloc.h"
struct st_mem_root {
   USED_MEM *free ;
   USED_MEM *used ;
   USED_MEM *pre_alloc ;
   unsigned int min_malloc ;
   unsigned int block_size ;
   unsigned int block_num ;
   unsigned int first_block_usage ;
   void (*error_handler)(void) ;
};
#line 34 "../include/my_alloc.h"
typedef struct st_mem_root MEM_ROOT;
#line 280 "../include/my_sys.h"
enum cache_type {
    TYPE_NOT_SET = 0,
    READ_CACHE = 1,
    WRITE_CACHE = 2,
    SEQ_READ_APPEND = 3,
    READ_FIFO = 4,
    READ_NET = 5,
    WRITE_NET = 6
} ;
#line 322 "../include/my_sys.h"
struct st_dynamic_array {
   char *buffer ;
   uint elements ;
   uint max_element ;
   uint alloc_increment ;
   uint size_of_element ;
};
#line 322 "../include/my_sys.h"
typedef struct st_dynamic_array DYNAMIC_ARRAY;
#line 346
struct st_io_cache;
#line 346
struct st_io_cache;
#line 350 "../include/my_sys.h"
struct st_io_cache_share {
   pthread_mutex_t mutex ;
   pthread_cond_t cond ;
   pthread_cond_t cond_writer ;
   my_off_t pos_in_file ;
   struct st_io_cache *source_cache ;
   byte *buffer ;
   byte *read_end ;
   int running_threads ;
   int total_threads ;
   int error ;
};
#line 350 "../include/my_sys.h"
typedef struct st_io_cache_share IO_CACHE_SHARE;
#line 371 "../include/my_sys.h"
struct st_io_cache {
   my_off_t pos_in_file ;
   my_off_t end_of_file ;
   byte *read_pos ;
   byte *read_end ;
   byte *buffer ;
   byte *request_pos ;
   byte *write_buffer ;
   byte *append_read_pos ;
   byte *write_pos ;
   byte *write_end ;
   byte **current_pos ;
   byte **current_end ;
   pthread_mutex_t append_buffer_lock ;
   IO_CACHE_SHARE *share ;
   int (*read_function)(struct st_io_cache * , byte * , uint  ) ;
   int (*write_function)(struct st_io_cache * , byte const   * , uint  ) ;
   enum cache_type type ;
   int (*pre_read)(struct st_io_cache * ) ;
   int (*post_read)(struct st_io_cache * ) ;
   int (*pre_close)(struct st_io_cache * ) ;
   ulong disk_writes ;
   void *arg ;
   char *file_name ;
   char *dir ;
   char *prefix ;
   File file ;
   int seek_not_done ;
   int error ;
   uint buffer_length ;
   uint read_length ;
   myf myflags ;
   my_bool alloced_buffer ;
};
#line 371 "../include/my_sys.h"
typedef struct st_io_cache IO_CACHE;
#line 540 "../include/my_sys.h"
typedef uint32 ha_checksum;
#line 23 "../include/my_list.h"
struct st_list {
   struct st_list *prev ;
   struct st_list *next ;
   void *data ;
};
#line 23 "../include/my_list.h"
typedef struct st_list LIST;
#line 75 "../include/my_base.h"
enum ha_rkey_function {
    HA_READ_KEY_EXACT = 0,
    HA_READ_KEY_OR_NEXT = 1,
    HA_READ_KEY_OR_PREV = 2,
    HA_READ_AFTER_KEY = 3,
    HA_READ_BEFORE_KEY = 4,
    HA_READ_PREFIX = 5,
    HA_READ_PREFIX_LAST = 6,
    HA_READ_PREFIX_LAST_OR_PREV = 7,
    HA_READ_MBR_CONTAIN = 8,
    HA_READ_MBR_INTERSECT = 9,
    HA_READ_MBR_WITHIN = 10,
    HA_READ_MBR_DISJOINT = 11,
    HA_READ_MBR_EQUAL = 12
} ;
#line 429
enum en_fieldtype {
    FIELD_LAST = -1,
    FIELD_NORMAL = 0,
    FIELD_SKIP_ENDSPACE = 1,
    FIELD_SKIP_PRESPACE = 2,
    FIELD_SKIP_ZERO = 3,
    FIELD_BLOB = 4,
    FIELD_CONSTANT = 5,
    FIELD_INTERVALL = 6,
    FIELD_ZERO = 7,
    FIELD_VARCHAR = 8,
    FIELD_CHECK = 9,
    FIELD_enum_val_count = 10
} ;
#line 436
enum data_file_type {
    STATIC_RECORD = 0,
    DYNAMIC_RECORD = 1,
    COMPRESSED_RECORD = 2
} ;
#line 473 "../include/my_base.h"
typedef ulong ha_rows;
#line 24 "../include/keycache.h"
struct st_block_link;
#line 24
struct st_block_link;
#line 25 "../include/keycache.h"
typedef struct st_block_link BLOCK_LINK;
#line 28
struct st_hash_link;
#line 28
struct st_hash_link;
#line 29 "../include/keycache.h"
typedef struct st_hash_link HASH_LINK;
#line 32 "../include/keycache.h"
struct st_keycache_wqueue {
   struct st_my_thread_var *last_thread ;
};
#line 32 "../include/keycache.h"
typedef struct st_keycache_wqueue KEYCACHE_WQUEUE;
#line 44 "../include/keycache.h"
struct st_key_cache {
   my_bool key_cache_inited ;
   my_bool resize_in_flush ;
   my_bool can_be_used ;
   uint key_cache_shift ;
   ulong key_cache_mem_size ;
   uint key_cache_block_size ;
   ulong min_warm_blocks ;
   ulong age_threshold ;
   ulonglong keycache_time ;
   uint hash_entries ;
   int hash_links ;
   int hash_links_used ;
   int disk_blocks ;
   ulong blocks_used ;
   ulong blocks_unused ;
   ulong blocks_changed ;
   ulong warm_blocks ;
   ulong cnt_for_resize_op ;
   long blocks_available ;
   HASH_LINK **hash_root ;
   HASH_LINK *hash_link_root ;
   HASH_LINK *free_hash_list ;
   BLOCK_LINK *free_block_list ;
   BLOCK_LINK *block_root ;
   byte *block_mem ;
   BLOCK_LINK *used_last ;
   BLOCK_LINK *used_ins ;
   pthread_mutex_t cache_lock ;
   KEYCACHE_WQUEUE resize_queue ;
   KEYCACHE_WQUEUE waiting_for_hash_link ;
   KEYCACHE_WQUEUE waiting_for_block ;
   BLOCK_LINK *changed_blocks[128] ;
   BLOCK_LINK *file_blocks[128] ;
   ulonglong param_buff_size ;
   ulong param_block_size ;
   ulong param_division_limit ;
   ulong param_age_threshold ;
   ulong global_blocks_changed ;
   ulonglong global_cache_w_requests ;
   ulonglong global_cache_write ;
   ulonglong global_cache_r_requests ;
   ulonglong global_cache_read ;
   int blocks ;
   my_bool in_init ;
};
#line 44 "../include/keycache.h"
typedef struct st_key_cache KEY_CACHE;
#line 25 "../include/my_handler.h"
struct st_HA_KEYSEG {
   CHARSET_INFO *charset ;
   uint32 start ;
   uint32 null_pos ;
   uint16 bit_pos ;
   uint16 flag ;
   uint16 length ;
   uint8 type ;
   uint8 language ;
   uint8 null_bit ;
   uint8 bit_start ;
   uint8 bit_end ;
   uint8 bit_length ;
};
#line 25 "../include/my_handler.h"
typedef struct st_HA_KEYSEG HA_KEYSEG;
#line 180 "../include/myisam.h"
struct st_myisam_info;
#line 180
struct st_myisam_info;
#line 181
struct st_mi_isam_share;
#line 181
struct st_mi_isam_share;
#line 182 "../include/myisam.h"
typedef struct st_myisam_info MI_INFO;
#line 183
struct st_mi_s_param;
#line 183
struct st_mi_s_param;
#line 185 "../include/myisam.h"
struct st_mi_keydef {
   struct st_mi_isam_share *share ;
   uint16 keysegs ;
   uint16 flag ;
   uint8 key_alg ;
   uint16 block_length ;
   uint16 underflow_block_length ;
   uint16 keylength ;
   uint16 minlength ;
   uint16 maxlength ;
   uint16 block_size ;
   uint32 version ;
   HA_KEYSEG *seg ;
   HA_KEYSEG *end ;
   int (*bin_search)(struct st_myisam_info *info ,
                     struct st_mi_keydef *keyinfo , uchar *page , uchar *key ,
                     uint key_len , uint comp_flag , uchar **ret_pos ,
                     uchar *buff , my_bool *was_last_key ) ;
   uint (*get_key)(struct st_mi_keydef *keyinfo , uint nod_flag , uchar **page ,
                   uchar *key ) ;
   int (*pack_key)(struct st_mi_keydef *keyinfo , uint nod_flag ,
                   uchar *next_key , uchar *org_key , uchar *prev_key ,
                   uchar *key , struct st_mi_s_param *s_temp ) ;
   void (*store_key)(struct st_mi_keydef *keyinfo , uchar *key_pos ,
                     struct st_mi_s_param *s_temp ) ;
   int (*ck_insert)(struct st_myisam_info *inf , uint k_nr , uchar *k ,
                    uint klen ) ;
   int (*ck_delete)(struct st_myisam_info *inf , uint k_nr , uchar *k ,
                    uint klen ) ;
};
#line 185 "../include/myisam.h"
typedef struct st_mi_keydef MI_KEYDEF;
#line 219 "../include/myisam.h"
struct st_unique_def {
   uint16 keysegs ;
   uchar key ;
   uint8 null_are_equal ;
   HA_KEYSEG *seg ;
   HA_KEYSEG *end ;
};
#line 219 "../include/myisam.h"
typedef struct st_unique_def MI_UNIQUEDEF;
#line 227 "../include/myisam.h"
struct st_mi_decode_tree {
   uint16 *table ;
   uint quick_table_bits ;
   byte *intervalls ;
};
#line 227 "../include/myisam.h"
typedef struct st_mi_decode_tree MI_DECODE_TREE;
#line 235
struct st_mi_bit_buff;
#line 235
struct st_mi_bit_buff;
#line 243 "../include/myisam.h"
struct st_columndef {
   int16 type ;
   uint16 length ;
   uint32 offset ;
   uint8 null_bit ;
   uint16 null_pos ;
   void (*unpack)(struct st_columndef *rec , struct st_mi_bit_buff *buff ,
                  uchar *start , uchar *end ) ;
   enum en_fieldtype base_type ;
   uint space_length_bits ;
   uint pack_type ;
   MI_DECODE_TREE *huff_tree ;
};
#line 243 "../include/myisam.h"
typedef struct st_columndef MI_COLUMNDEF;
#line 39 "../include/my_tree.h"
enum __anonenum_TREE_FREE_53 {
    free_init = 0,
    free_free = 1,
    free_end = 2
} ;
#line 39 "../include/my_tree.h"
typedef enum __anonenum_TREE_FREE_53 TREE_FREE;
#line 49 "../include/my_tree.h"
struct st_tree_element {
   struct st_tree_element *left ;
   struct st_tree_element *right ;
   uint32 count : 31 ;
   uint32 colour : 1 ;
};
#line 49 "../include/my_tree.h"
typedef struct st_tree_element TREE_ELEMENT;
#line 58 "../include/my_tree.h"
struct st_tree {
   TREE_ELEMENT *root ;
   TREE_ELEMENT null_element ;
   TREE_ELEMENT **parents[64] ;
   uint offset_to_key ;
   uint elements_in_tree ;
   uint size_of_element ;
   ulong memory_limit ;
   ulong allocated ;
   int (*compare)(void * , void const   * , void const   * ) ;
   void *custom_arg ;
   MEM_ROOT mem_root ;
   my_bool with_delete ;
   void (*free)(void * , TREE_FREE  , void * ) ;
   uint flag ;
};
#line 58 "../include/my_tree.h"
typedef struct st_tree TREE;
#line 27 "../include/thr_lock.h"
struct st_thr_lock;
#line 27
struct st_thr_lock;
#line 30
enum thr_lock_type {
    TL_IGNORE = -1,
    TL_UNLOCK = 0,
    TL_READ = 1,
    TL_READ_WITH_SHARED_LOCKS = 2,
    TL_READ_HIGH_PRIORITY = 3,
    TL_READ_NO_INSERT = 4,
    TL_WRITE_ALLOW_WRITE = 5,
    TL_WRITE_ALLOW_READ = 6,
    TL_WRITE_CONCURRENT_INSERT = 7,
    TL_WRITE_DELAYED = 8,
    TL_WRITE_DEFAULT = 9,
    TL_WRITE_LOW_PRIORITY = 10,
    TL_WRITE = 11,
    TL_WRITE_ONLY = 12
} ;
#line 83 "../include/thr_lock.h"
struct st_thr_lock_info {
   pthread_t thread ;
   ulong thread_id ;
   ulong n_cursors ;
};
#line 83 "../include/thr_lock.h"
typedef struct st_thr_lock_info THR_LOCK_INFO;
#line 96 "../include/thr_lock.h"
struct st_thr_lock_owner {
   THR_LOCK_INFO *info ;
};
#line 96 "../include/thr_lock.h"
typedef struct st_thr_lock_owner THR_LOCK_OWNER;
#line 102 "../include/thr_lock.h"
struct st_thr_lock_data {
   THR_LOCK_OWNER *owner ;
   struct st_thr_lock_data *next ;
   struct st_thr_lock_data **prev ;
   struct st_thr_lock *lock ;
   pthread_cond_t *cond ;
   enum thr_lock_type type ;
   void *status_param ;
   void *debug_print_param ;
};
#line 102 "../include/thr_lock.h"
typedef struct st_thr_lock_data THR_LOCK_DATA;
#line 112 "../include/thr_lock.h"
struct st_lock_list {
   THR_LOCK_DATA *data ;
   THR_LOCK_DATA **last ;
};
#line 116 "../include/thr_lock.h"
struct st_thr_lock {
   LIST list ;
   pthread_mutex_t mutex ;
   struct st_lock_list read_wait ;
   struct st_lock_list read ;
   struct st_lock_list write_wait ;
   struct st_lock_list write ;
   ulong write_lock_count ;
   uint read_no_write_count ;
   void (*get_status)(void * , int  ) ;
   void (*copy_status)(void * , void * ) ;
   void (*update_status)(void * ) ;
   void (*restore_status)(void * ) ;
   my_bool (*check_status)(void * ) ;
};
#line 116 "../include/thr_lock.h"
typedef struct st_thr_lock THR_LOCK;
#line 32 "myisamdef.h"
struct st_mi_status_info {
   ha_rows records ;
   ha_rows del ;
   my_off_t empty ;
   my_off_t key_empty ;
   my_off_t key_file_length ;
   my_off_t data_file_length ;
   ha_checksum checksum ;
};
#line 32 "myisamdef.h"
typedef struct st_mi_status_info MI_STATUS_INFO;
#line 43 "myisamdef.h"
struct __anonstruct_header_54 {
   uchar file_version[4] ;
   uchar options[2] ;
   uchar header_length[2] ;
   uchar state_info_length[2] ;
   uchar base_info_length[2] ;
   uchar base_pos[2] ;
   uchar key_parts[2] ;
   uchar unique_key_parts[2] ;
   uchar keys ;
   uchar uniques ;
   uchar language ;
   uchar max_block_size ;
   uchar fulltext_keys ;
   uchar not_used ;
};
#line 43 "myisamdef.h"
struct st_mi_state_info {
   struct __anonstruct_header_54 header ;
   MI_STATUS_INFO state ;
   ha_rows split ;
   my_off_t dellink ;
   ulonglong auto_increment ;
   ulong process ;
   ulong unique ;
   ulong update_count ;
   ulong status ;
   ulong *rec_per_key_part ;
   my_off_t *key_root ;
   my_off_t *key_del ;
   my_off_t rec_per_key_rows ;
   ulong sec_index_changed ;
   ulong sec_index_used ;
   ulonglong key_map ;
   ha_checksum checksum ;
   ulong version ;
   time_t create_time ;
   time_t recover_time ;
   time_t check_time ;
   uint sortkey ;
   uint open_count ;
   uint8 changed ;
   uint state_diff_length ;
   uint state_length ;
   ulong *key_info ;
};
#line 43 "myisamdef.h"
typedef struct st_mi_state_info MI_STATE_INFO;
#line 105 "myisamdef.h"
struct st_mi_base_info {
   my_off_t keystart ;
   my_off_t max_data_file_length ;
   my_off_t max_key_file_length ;
   my_off_t margin_key_file_length ;
   ha_rows records ;
   ha_rows reloc ;
   ulong mean_row_length ;
   ulong reclength ;
   ulong pack_reclength ;
   ulong min_pack_length ;
   ulong max_pack_length ;
   ulong min_block_length ;
   ulong fields ;
   ulong pack_fields ;
   uint rec_reflength ;
   uint key_reflength ;
   uint keys ;
   uint auto_key ;
   uint blobs ;
   uint pack_bits ;
   uint max_key_block_length ;
   uint max_key_length ;
   uint extra_alloc_bytes ;
   uint extra_alloc_procent ;
   uint raid_type ;
   uint raid_chunks ;
   ulong raid_chunksize ;
   uint key_parts ;
   uint all_key_parts ;
};
#line 105 "myisamdef.h"
typedef struct st_mi_base_info MI_BASE_INFO;
#line 141 "myisamdef.h"
struct st_mi_blob {
   ulong offset ;
   uint pack_length ;
   ulong length ;
};
#line 141 "myisamdef.h"
typedef struct st_mi_blob MI_BLOB;
#line 149 "myisamdef.h"
struct st_mi_isam_pack {
   ulong header_length ;
   uint ref_length ;
   uchar version ;
};
#line 149 "myisamdef.h"
typedef struct st_mi_isam_pack MI_PACK;
#line 156 "myisamdef.h"
struct st_mi_isam_share {
   MI_STATE_INFO state ;
   MI_BASE_INFO base ;
   MI_KEYDEF ft2_keyinfo ;
   MI_KEYDEF *keyinfo ;
   MI_UNIQUEDEF *uniqueinfo ;
   HA_KEYSEG *keyparts ;
   MI_COLUMNDEF *rec ;
   MI_PACK pack ;
   MI_BLOB *blobs ;
   char *unique_file_name ;
   char *data_file_name ;
   char *index_file_name ;
   byte *file_map ;
   KEY_CACHE *key_cache ;
   MI_DECODE_TREE *decode_trees ;
   uint16 *decode_tables ;
   int (*read_record)(struct st_myisam_info * , my_off_t  , byte * ) ;
   int (*write_record)(struct st_myisam_info * , byte const   * ) ;
   int (*update_record)(struct st_myisam_info * , my_off_t  , byte const   * ) ;
   int (*delete_record)(struct st_myisam_info * ) ;
   int (*read_rnd)(struct st_myisam_info * , byte * , my_off_t  , my_bool  ) ;
   int (*compare_record)(struct st_myisam_info * , byte const   * ) ;
   ha_checksum (*calc_checksum)(struct st_myisam_info * , byte const   * ) ;
   int (*compare_unique)(struct st_myisam_info * , MI_UNIQUEDEF * ,
                         byte const   *record , my_off_t pos ) ;
   void (*invalidator)(char const   *filename ) ;
   ulong this_process ;
   ulong last_process ;
   ulong last_version ;
   ulong options ;
   ulong min_pack_length ;
   ulong max_pack_length ;
   ulong state_diff_length ;
   uint rec_reflength ;
   uint unique_name_length ;
   File kfile ;
   File data_file ;
   int mode ;
   uint reopen ;
   uint w_locks ;
   uint r_locks ;
   uint tot_locks ;
   uint blocksize ;
   myf write_flag ;
   enum data_file_type data_file_type ;
   my_bool changed ;
   my_bool global_changed ;
   my_bool not_flushed ;
   my_bool temporary ;
   my_bool delay_key_write ;
   my_bool concurrent_insert ;
   THR_LOCK lock ;
   pthread_mutex_t intern_lock ;
   pthread_rwlock_t *key_root_lock ;
};
#line 156 "myisamdef.h"
typedef struct st_mi_isam_share MYISAM_SHARE;
#line 214 "myisamdef.h"
typedef uint mi_bit_type;
#line 216 "myisamdef.h"
struct st_mi_bit_buff {
   mi_bit_type current_byte ;
   uint bits ;
   uchar *pos ;
   uchar *end ;
   uchar *blob_pos ;
   uchar *blob_end ;
   uint error ;
};
#line 216 "myisamdef.h"
typedef struct st_mi_bit_buff MI_BIT_BUFF;
#line 223 "myisamdef.h"
struct st_myisam_info {
   MYISAM_SHARE *s ;
   MI_STATUS_INFO *state ;
   MI_STATUS_INFO save_state ;
   MI_BLOB *blobs ;
   MI_BIT_BUFF bit_buff ;
   TREE *bulk_insert ;
   DYNAMIC_ARRAY *ft1_to_ft2 ;
   char *filename ;
   uchar *buff ;
   uchar *lastkey ;
   uchar *lastkey2 ;
   uchar *first_mbr_key ;
   byte *rec_buff ;
   uchar *int_keypos ;
   uchar *int_maxpos ;
   uint int_nod_flag ;
   uint32 int_keytree_version ;
   int (*read_record)(struct st_myisam_info * , my_off_t  , byte * ) ;
   void (*invalidator)(char const   *filename ) ;
   ulong this_unique ;
   ulong last_unique ;
   ulong this_loop ;
   ulong last_loop ;
   my_off_t lastpos ;
   my_off_t nextpos ;
   my_off_t save_lastpos ;
   my_off_t pos ;
   my_off_t last_keypage ;
   my_off_t last_search_keypage ;
   my_off_t dupp_key_pos ;
   ha_checksum checksum ;
   ulong packed_length ;
   ulong blob_length ;
   int dfile ;
   uint opt_flag ;
   uint update ;
   int lastinx ;
   uint lastkey_length ;
   uint last_rkey_length ;
   enum ha_rkey_function last_key_func ;
   uint save_lastkey_length ;
   uint pack_key_length ;
   uint16 last_used_keyseg ;
   int errkey ;
   int lock_type ;
   int tmp_lock_type ;
   uint data_changed ;
   uint save_update ;
   int save_lastinx ;
   LIST open_list ;
   IO_CACHE rec_cache ;
   uint preload_buff_size ;
   myf lock_wait ;
   my_bool was_locked ;
   my_bool append_insert_at_end ;
   my_bool quick_mode ;
   my_bool page_changed ;
   my_bool buff_used ;
   my_bool once_flags ;
   THR_LOCK_DATA lock ;
   uchar *rtree_recursion_state ;
   int rtree_recursion_depth ;
};
#line 473 "myisamdef.h"
struct st_mi_s_param {
   uint ref_length ;
   uint key_length ;
   uint n_ref_length ;
   uint n_length ;
   uint totlength ;
   uint part_of_prev_key ;
   uint prev_length ;
   uint pack_marker ;
   uchar *key ;
   uchar *prev_key ;
   uchar *next_key_pos ;
   bool store_not_null ;
};
#line 473 "myisamdef.h"
typedef struct st_mi_s_param MI_KEY_PARAM;
#line 669
enum myisam_log_commands {
    MI_LOG_OPEN = 0,
    MI_LOG_WRITE = 1,
    MI_LOG_UPDATE = 2,
    MI_LOG_DELETE = 3,
    MI_LOG_CLOSE = 4,
    MI_LOG_EXTRA = 5,
    MI_LOG_LOCK = 6,
    MI_LOG_DELETE_ALL = 7
} ;
extern time_t __dyc_random_typdef_time_t(unsigned int __dyc_exp ) ;
extern time_t __dyc_read_typdef_time_t(void) ;
extern void __dyc_print_typdef_time_t(time_t __dyc_thistype ) ;
extern USED_MEM *__dyc_random_ptr__typdef_USED_MEM(unsigned int __dyc_exp ) ;
extern USED_MEM *__dyc_read_ptr__typdef_USED_MEM(void) ;
extern void __dyc_print_ptr__typdef_USED_MEM(USED_MEM const   *__dyc_thistype ) ;
extern MY_CHARSET_HANDLER __dyc_random_typdef_MY_CHARSET_HANDLER(unsigned int __dyc_exp ) ;
extern MY_CHARSET_HANDLER __dyc_read_typdef_MY_CHARSET_HANDLER(void) ;
extern void __dyc_print_typdef_MY_CHARSET_HANDLER(MY_CHARSET_HANDLER __dyc_thistype ) ;
extern THR_LOCK_DATA **__dyc_random_ptr__ptr__typdef_THR_LOCK_DATA(unsigned int __dyc_exp ) ;
extern THR_LOCK_DATA **__dyc_read_ptr__ptr__typdef_THR_LOCK_DATA(void) ;
extern void __dyc_print_ptr__ptr__typdef_THR_LOCK_DATA(THR_LOCK_DATA * const  *__dyc_thistype ) ;
extern struct st_unique_def __dyc_random_comp_124st_unique_def(unsigned int __dyc_exp ) ;
extern struct st_unique_def __dyc_read_comp_124st_unique_def(void) ;
extern void __dyc_print_comp_124st_unique_def(struct st_unique_def __dyc_thistype ) ;
extern struct st_io_cache_share __dyc_random_comp_108st_io_cache_share(unsigned int __dyc_exp ) ;
extern struct st_io_cache_share __dyc_read_comp_108st_io_cache_share(void) ;
extern void __dyc_print_comp_108st_io_cache_share(struct st_io_cache_share __dyc_thistype ) ;
extern my_off_t __dyc_random_typdef_my_off_t(unsigned int __dyc_exp ) ;
extern my_off_t __dyc_read_typdef_my_off_t(void) ;
extern void __dyc_print_typdef_my_off_t(my_off_t __dyc_thistype ) ;
extern union __anonunion_pthread_mutexattr_t_5 __dyc_random_comp_17__anonunion_pthread_mutexattr_t_5(unsigned int __dyc_exp ) ;
extern union __anonunion_pthread_mutexattr_t_5 __dyc_read_comp_17__anonunion_pthread_mutexattr_t_5(void) ;
extern void __dyc_print_comp_17__anonunion_pthread_mutexattr_t_5(union __anonunion_pthread_mutexattr_t_5 __dyc_thistype ) ;
extern bool __dyc_random_typdef_bool(unsigned int __dyc_exp ) ;
extern bool __dyc_read_typdef_bool(void) ;
extern void __dyc_print_typdef_bool(bool __dyc_thistype ) ;
extern pthread_rwlock_t __dyc_random_typdef_pthread_rwlock_t(unsigned int __dyc_exp ) ;
extern pthread_rwlock_t __dyc_read_typdef_pthread_rwlock_t(void) ;
extern void __dyc_print_typdef_pthread_rwlock_t(pthread_rwlock_t __dyc_thistype ) ;
extern struct st_mi_bit_buff __dyc_random_comp_126st_mi_bit_buff(unsigned int __dyc_exp ) ;
extern struct st_mi_bit_buff __dyc_read_comp_126st_mi_bit_buff(void) ;
extern void __dyc_print_comp_126st_mi_bit_buff(struct st_mi_bit_buff __dyc_thistype ) ;
extern struct my_uni_idx_st __dyc_random_comp_93my_uni_idx_st(unsigned int __dyc_exp ) ;
extern struct my_uni_idx_st __dyc_read_comp_93my_uni_idx_st(void) ;
extern void __dyc_print_comp_93my_uni_idx_st(struct my_uni_idx_st __dyc_thistype ) ;
extern struct st_thr_lock_data **__dyc_random_ptr__ptr__comp_137st_thr_lock_data(unsigned int __dyc_exp ) ;
extern struct st_thr_lock_data **__dyc_read_ptr__ptr__comp_137st_thr_lock_data(void) ;
extern void __dyc_print_ptr__ptr__comp_137st_thr_lock_data(struct st_thr_lock_data * const  *__dyc_thistype ) ;
extern struct st_thr_lock_owner __dyc_random_comp_136st_thr_lock_owner(unsigned int __dyc_exp ) ;
extern struct st_thr_lock_owner __dyc_read_comp_136st_thr_lock_owner(void) ;
extern void __dyc_print_comp_136st_thr_lock_owner(struct st_thr_lock_owner __dyc_thistype ) ;
extern my_bool *__dyc_random_ptr__typdef_my_bool(unsigned int __dyc_exp ) ;
extern my_bool *__dyc_read_ptr__typdef_my_bool(void) ;
extern void __dyc_print_ptr__typdef_my_bool(my_bool const   *__dyc_thistype ) ;
extern struct st_myisam_info *__dyc_random_ptr__comp_120st_myisam_info(unsigned int __dyc_exp ) ;
extern struct st_myisam_info *__dyc_read_ptr__comp_120st_myisam_info(void) ;
extern void __dyc_print_ptr__comp_120st_myisam_info(struct st_myisam_info  const  *__dyc_thistype ) ;
extern MYISAM_SHARE __dyc_random_typdef_MYISAM_SHARE(unsigned int __dyc_exp ) ;
extern MYISAM_SHARE __dyc_read_typdef_MYISAM_SHARE(void) ;
extern void __dyc_print_typdef_MYISAM_SHARE(MYISAM_SHARE __dyc_thistype ) ;
extern pthread_rwlockattr_t __dyc_random_typdef_pthread_rwlockattr_t(unsigned int __dyc_exp ) ;
extern pthread_rwlockattr_t __dyc_read_typdef_pthread_rwlockattr_t(void) ;
extern void __dyc_print_typdef_pthread_rwlockattr_t(pthread_rwlockattr_t __dyc_thistype ) ;
extern my_off_t *__dyc_random_ptr__typdef_my_off_t(unsigned int __dyc_exp ) ;
extern my_off_t *__dyc_read_ptr__typdef_my_off_t(void) ;
extern void __dyc_print_ptr__typdef_my_off_t(my_off_t const   *__dyc_thistype ) ;
extern THR_LOCK_INFO *__dyc_random_ptr__typdef_THR_LOCK_INFO(unsigned int __dyc_exp ) ;
extern THR_LOCK_INFO *__dyc_read_ptr__typdef_THR_LOCK_INFO(void) ;
extern void __dyc_print_ptr__typdef_THR_LOCK_INFO(THR_LOCK_INFO const   *__dyc_thistype ) ;
extern size_t __dyc_random_typdef_size_t(unsigned int __dyc_exp ) ;
extern size_t __dyc_read_typdef_size_t(void) ;
extern void __dyc_print_typdef_size_t(size_t __dyc_thistype ) ;
extern pthread_rwlock_t *__dyc_random_ptr__typdef_pthread_rwlock_t(unsigned int __dyc_exp ) ;
extern pthread_rwlock_t *__dyc_read_ptr__typdef_pthread_rwlock_t(void) ;
extern void __dyc_print_ptr__typdef_pthread_rwlock_t(pthread_rwlock_t const   *__dyc_thistype ) ;
extern int *__dyc_random_ptr__int(unsigned int __dyc_exp ) ;
extern int *__dyc_read_ptr__int(void) ;
extern void __dyc_print_ptr__int(int const   *__dyc_thistype ) ;
extern uint16 __dyc_random_typdef_uint16(unsigned int __dyc_exp ) ;
extern uint16 __dyc_read_typdef_uint16(void) ;
extern void __dyc_print_typdef_uint16(uint16 __dyc_thistype ) ;
extern pthread_mutex_t *__dyc_random_ptr__typdef_pthread_mutex_t(unsigned int __dyc_exp ) ;
extern pthread_mutex_t *__dyc_read_ptr__typdef_pthread_mutex_t(void) ;
extern void __dyc_print_ptr__typdef_pthread_mutex_t(pthread_mutex_t const   *__dyc_thistype ) ;
extern MI_COLUMNDEF __dyc_random_typdef_MI_COLUMNDEF(unsigned int __dyc_exp ) ;
extern MI_COLUMNDEF __dyc_read_typdef_MI_COLUMNDEF(void) ;
extern void __dyc_print_typdef_MI_COLUMNDEF(MI_COLUMNDEF __dyc_thistype ) ;
extern DYNAMIC_ARRAY __dyc_random_typdef_DYNAMIC_ARRAY(unsigned int __dyc_exp ) ;
extern DYNAMIC_ARRAY __dyc_read_typdef_DYNAMIC_ARRAY(void) ;
extern void __dyc_print_typdef_DYNAMIC_ARRAY(DYNAMIC_ARRAY __dyc_thistype ) ;
extern pbool __dyc_random_typdef_pbool(unsigned int __dyc_exp ) ;
extern pbool __dyc_read_typdef_pbool(void) ;
extern void __dyc_print_typdef_pbool(pbool __dyc_thistype ) ;
extern MYISAM_SHARE *__dyc_random_ptr__typdef_MYISAM_SHARE(unsigned int __dyc_exp ) ;
extern MYISAM_SHARE *__dyc_read_ptr__typdef_MYISAM_SHARE(void) ;
extern void __dyc_print_ptr__typdef_MYISAM_SHARE(MYISAM_SHARE const   *__dyc_thistype ) ;
extern struct st_mi_status_info __dyc_random_comp_139st_mi_status_info(unsigned int __dyc_exp ) ;
extern struct st_mi_status_info __dyc_read_comp_139st_mi_status_info(void) ;
extern void __dyc_print_comp_139st_mi_status_info(struct st_mi_status_info __dyc_thistype ) ;
extern struct st_mi_keydef __dyc_random_comp_123st_mi_keydef(unsigned int __dyc_exp ) ;
extern struct st_mi_keydef __dyc_read_comp_123st_mi_keydef(void) ;
extern void __dyc_print_comp_123st_mi_keydef(struct st_mi_keydef __dyc_thistype ) ;
extern pthread_rwlockattr_t *__dyc_random_ptr__typdef_pthread_rwlockattr_t(unsigned int __dyc_exp ) ;
extern pthread_rwlockattr_t *__dyc_read_ptr__typdef_pthread_rwlockattr_t(void) ;
extern void __dyc_print_ptr__typdef_pthread_rwlockattr_t(pthread_rwlockattr_t const   * __restrict  __dyc_thistype ) ;
extern MI_BLOB *__dyc_random_ptr__typdef_MI_BLOB(unsigned int __dyc_exp ) ;
extern MI_BLOB *__dyc_read_ptr__typdef_MI_BLOB(void) ;
extern void __dyc_print_ptr__typdef_MI_BLOB(MI_BLOB const   *__dyc_thistype ) ;
extern MY_UNICASE_INFO __dyc_random_typdef_MY_UNICASE_INFO(unsigned int __dyc_exp ) ;
extern MY_UNICASE_INFO __dyc_read_typdef_MY_UNICASE_INFO(void) ;
extern void __dyc_print_typdef_MY_UNICASE_INFO(MY_UNICASE_INFO __dyc_thistype ) ;
extern union __anonunion_pthread_rwlockattr_t_11 __dyc_random_comp_23__anonunion_pthread_rwlockattr_t_11(unsigned int __dyc_exp ) ;
extern union __anonunion_pthread_rwlockattr_t_11 __dyc_read_comp_23__anonunion_pthread_rwlockattr_t_11(void) ;
extern void __dyc_print_comp_23__anonunion_pthread_rwlockattr_t_11(union __anonunion_pthread_rwlockattr_t_11 __dyc_thistype ) ;
extern uint __dyc_random_typdef_uint(unsigned int __dyc_exp ) ;
extern uint __dyc_read_typdef_uint(void) ;
extern void __dyc_print_typdef_uint(uint __dyc_thistype ) ;
extern TREE_ELEMENT **__dyc_random_ptr__ptr__typdef_TREE_ELEMENT(unsigned int __dyc_exp ) ;
extern TREE_ELEMENT **__dyc_read_ptr__ptr__typdef_TREE_ELEMENT(void) ;
extern void __dyc_print_ptr__ptr__typdef_TREE_ELEMENT(TREE_ELEMENT * const  *__dyc_thistype ) ;
extern THR_LOCK __dyc_random_typdef_THR_LOCK(unsigned int __dyc_exp ) ;
extern THR_LOCK __dyc_read_typdef_THR_LOCK(void) ;
extern void __dyc_print_typdef_THR_LOCK(THR_LOCK __dyc_thistype ) ;
extern MI_COLUMNDEF *__dyc_random_ptr__typdef_MI_COLUMNDEF(unsigned int __dyc_exp ) ;
extern MI_COLUMNDEF *__dyc_read_ptr__typdef_MI_COLUMNDEF(void) ;
extern void __dyc_print_ptr__typdef_MI_COLUMNDEF(MI_COLUMNDEF const   *__dyc_thistype ) ;
extern struct st_columndef *__dyc_random_ptr__comp_127st_columndef(unsigned int __dyc_exp ) ;
extern struct st_columndef *__dyc_read_ptr__comp_127st_columndef(void) ;
extern void __dyc_print_ptr__comp_127st_columndef(struct st_columndef  const  *__dyc_thistype ) ;
extern HA_KEYSEG *__dyc_random_ptr__typdef_HA_KEYSEG(unsigned int __dyc_exp ) ;
extern HA_KEYSEG *__dyc_read_ptr__typdef_HA_KEYSEG(void) ;
extern void __dyc_print_ptr__typdef_HA_KEYSEG(HA_KEYSEG const   *__dyc_thistype ) ;
extern struct st_mi_isam_share __dyc_random_comp_121st_mi_isam_share(unsigned int __dyc_exp ) ;
extern struct st_mi_isam_share __dyc_read_comp_121st_mi_isam_share(void) ;
extern void __dyc_print_comp_121st_mi_isam_share(struct st_mi_isam_share __dyc_thistype ) ;
extern byte **__dyc_random_ptr__ptr__typdef_byte(unsigned int __dyc_exp ) ;
extern byte **__dyc_read_ptr__ptr__typdef_byte(void) ;
extern void __dyc_print_ptr__ptr__typdef_byte(byte * const  *__dyc_thistype ) ;
extern TREE_FREE __dyc_random_typdef_TREE_FREE(unsigned int __dyc_exp ) ;
extern TREE_FREE __dyc_read_typdef_TREE_FREE(void) ;
extern void __dyc_print_typdef_TREE_FREE(TREE_FREE __dyc_thistype ) ;
extern CHARSET_INFO __dyc_random_typdef_CHARSET_INFO(unsigned int __dyc_exp ) ;
extern CHARSET_INFO __dyc_read_typdef_CHARSET_INFO(void) ;
extern void __dyc_print_typdef_CHARSET_INFO(CHARSET_INFO __dyc_thistype ) ;
extern union __anonunion_pthread_cond_t_6 __dyc_random_comp_18__anonunion_pthread_cond_t_6(unsigned int __dyc_exp ) ;
extern union __anonunion_pthread_cond_t_6 __dyc_read_comp_18__anonunion_pthread_cond_t_6(void) ;
extern void __dyc_print_comp_18__anonunion_pthread_cond_t_6(union __anonunion_pthread_cond_t_6 __dyc_thistype ) ;
extern File __dyc_random_typdef_File(unsigned int __dyc_exp ) ;
extern File __dyc_read_typdef_File(void) ;
extern void __dyc_print_typdef_File(File __dyc_thistype ) ;
extern uint *__dyc_random_ptr__typdef_uint(unsigned int __dyc_exp ) ;
extern uint *__dyc_read_ptr__typdef_uint(void) ;
extern void __dyc_print_ptr__typdef_uint(uint const   *__dyc_thistype ) ;
extern MI_STATE_INFO __dyc_random_typdef_MI_STATE_INFO(unsigned int __dyc_exp ) ;
extern MI_STATE_INFO __dyc_read_typdef_MI_STATE_INFO(void) ;
extern void __dyc_print_typdef_MI_STATE_INFO(MI_STATE_INFO __dyc_thistype ) ;
extern struct st_mi_isam_pack __dyc_random_comp_144st_mi_isam_pack(unsigned int __dyc_exp ) ;
extern struct st_mi_isam_pack __dyc_read_comp_144st_mi_isam_pack(void) ;
extern void __dyc_print_comp_144st_mi_isam_pack(struct st_mi_isam_pack __dyc_thistype ) ;
extern struct st_key_cache __dyc_random_comp_116st_key_cache(unsigned int __dyc_exp ) ;
extern struct st_key_cache __dyc_read_comp_116st_key_cache(void) ;
extern void __dyc_print_comp_116st_key_cache(struct st_key_cache __dyc_thistype ) ;
extern struct st_mem_root __dyc_random_comp_99st_mem_root(unsigned int __dyc_exp ) ;
extern struct st_mem_root __dyc_read_comp_99st_mem_root(void) ;
extern void __dyc_print_comp_99st_mem_root(struct st_mem_root __dyc_thistype ) ;
extern THR_LOCK *__dyc_random_ptr__typdef_THR_LOCK(unsigned int __dyc_exp ) ;
extern THR_LOCK *__dyc_read_ptr__typdef_THR_LOCK(void) ;
extern void __dyc_print_ptr__typdef_THR_LOCK(THR_LOCK const   *__dyc_thistype ) ;
extern __pthread_list_t __dyc_random_typdef___pthread_list_t(unsigned int __dyc_exp ) ;
extern __pthread_list_t __dyc_read_typdef___pthread_list_t(void) ;
extern void __dyc_print_typdef___pthread_list_t(__pthread_list_t __dyc_thistype ) ;
extern CHARSET_INFO *__dyc_random_ptr__typdef_CHARSET_INFO(unsigned int __dyc_exp ) ;
extern CHARSET_INFO *__dyc_read_ptr__typdef_CHARSET_INFO(void) ;
extern void __dyc_print_ptr__typdef_CHARSET_INFO(CHARSET_INFO const   *__dyc_thistype ) ;
extern void *__dyc_random_ptr__typdef_HASH_LINK(unsigned int __dyc_exp ) ;
extern void *__dyc_read_ptr__typdef_HASH_LINK(void) ;
extern void __dyc_print_ptr__typdef_HASH_LINK(void const   * const  __dyc_thistype ) ;
extern struct __anonstruct_my_match_t_50 __dyc_random_comp_94__anonstruct_my_match_t_50(unsigned int __dyc_exp ) ;
extern struct __anonstruct_my_match_t_50 __dyc_read_comp_94__anonstruct_my_match_t_50(void) ;
extern void __dyc_print_comp_94__anonstruct_my_match_t_50(struct __anonstruct_my_match_t_50 __dyc_thistype ) ;
extern pthread_mutexattr_t *__dyc_random_ptr__typdef_pthread_mutexattr_t(unsigned int __dyc_exp ) ;
extern pthread_mutexattr_t *__dyc_read_ptr__typdef_pthread_mutexattr_t(void) ;
extern void __dyc_print_ptr__typdef_pthread_mutexattr_t(pthread_mutexattr_t const   *__dyc_thistype ) ;
extern MI_DECODE_TREE __dyc_random_typdef_MI_DECODE_TREE(unsigned int __dyc_exp ) ;
extern MI_DECODE_TREE __dyc_read_typdef_MI_DECODE_TREE(void) ;
extern void __dyc_print_typdef_MI_DECODE_TREE(MI_DECODE_TREE __dyc_thistype ) ;
extern THR_LOCK_DATA __dyc_random_typdef_THR_LOCK_DATA(unsigned int __dyc_exp ) ;
extern THR_LOCK_DATA __dyc_read_typdef_THR_LOCK_DATA(void) ;
extern void __dyc_print_typdef_THR_LOCK_DATA(THR_LOCK_DATA __dyc_thistype ) ;
extern DYNAMIC_ARRAY *__dyc_random_ptr__typdef_DYNAMIC_ARRAY(unsigned int __dyc_exp ) ;
extern DYNAMIC_ARRAY *__dyc_read_ptr__typdef_DYNAMIC_ARRAY(void) ;
extern void __dyc_print_ptr__typdef_DYNAMIC_ARRAY(DYNAMIC_ARRAY const   *__dyc_thistype ) ;
extern struct st_thr_lock_data __dyc_random_comp_137st_thr_lock_data(unsigned int __dyc_exp ) ;
extern struct st_thr_lock_data __dyc_read_comp_137st_thr_lock_data(void) ;
extern void __dyc_print_comp_137st_thr_lock_data(struct st_thr_lock_data __dyc_thistype ) ;
extern ulonglong __dyc_random_typdef_ulonglong(unsigned int __dyc_exp ) ;
extern ulonglong __dyc_read_typdef_ulonglong(void) ;
extern void __dyc_print_typdef_ulonglong(ulonglong __dyc_thistype ) ;
extern struct __pthread_internal_list __dyc_random_comp_14__pthread_internal_list(unsigned int __dyc_exp ) ;
extern struct __pthread_internal_list __dyc_read_comp_14__pthread_internal_list(void) ;
extern void __dyc_print_comp_14__pthread_internal_list(struct __pthread_internal_list __dyc_thistype ) ;
extern struct st_mi_keydef *__dyc_random_ptr__comp_123st_mi_keydef(unsigned int __dyc_exp ) ;
extern struct st_mi_keydef *__dyc_read_ptr__comp_123st_mi_keydef(void) ;
extern void __dyc_print_ptr__comp_123st_mi_keydef(struct st_mi_keydef  const  *__dyc_thistype ) ;
extern void *__dyc_random_ptr__fun_name_is_not_here(unsigned int __dyc_exp ) ;
extern void *__dyc_read_ptr__fun_name_is_not_here(void) ;
extern void __dyc_print_ptr__fun_name_is_not_here(void const   * const  __dyc_thistype ) ;
extern my_match_t __dyc_random_typdef_my_match_t(unsigned int __dyc_exp ) ;
extern my_match_t __dyc_read_typdef_my_match_t(void) ;
extern void __dyc_print_typdef_my_match_t(my_match_t __dyc_thistype ) ;
extern pthread_t __dyc_random_typdef_pthread_t(unsigned int __dyc_exp ) ;
extern pthread_t __dyc_read_typdef_pthread_t(void) ;
extern void __dyc_print_typdef_pthread_t(pthread_t __dyc_thistype ) ;
extern struct st_mi_s_param __dyc_random_comp_122st_mi_s_param(unsigned int __dyc_exp ) ;
extern struct st_mi_s_param __dyc_read_comp_122st_mi_s_param(void) ;
extern void __dyc_print_comp_122st_mi_s_param(struct st_mi_s_param __dyc_thistype ) ;
extern uchar **__dyc_random_ptr__ptr__typdef_uchar(unsigned int __dyc_exp ) ;
extern uchar **__dyc_read_ptr__ptr__typdef_uchar(void) ;
extern void __dyc_print_ptr__ptr__typdef_uchar(uchar * const  *__dyc_thistype ) ;
extern uint16 **__dyc_random_ptr__ptr__typdef_uint16(unsigned int __dyc_exp ) ;
extern uint16 **__dyc_read_ptr__ptr__typdef_uint16(void) ;
extern void __dyc_print_ptr__ptr__typdef_uint16(uint16 * const  *__dyc_thistype ) ;
extern MEM_ROOT __dyc_random_typdef_MEM_ROOT(unsigned int __dyc_exp ) ;
extern MEM_ROOT __dyc_read_typdef_MEM_ROOT(void) ;
extern void __dyc_print_typdef_MEM_ROOT(MEM_ROOT __dyc_thistype ) ;
extern struct st_mi_isam_share *__dyc_random_ptr__comp_121st_mi_isam_share(unsigned int __dyc_exp ) ;
extern struct st_mi_isam_share *__dyc_read_ptr__comp_121st_mi_isam_share(void) ;
extern void __dyc_print_ptr__comp_121st_mi_isam_share(struct st_mi_isam_share  const  *__dyc_thistype ) ;
extern pthread_cond_t *__dyc_random_ptr__typdef_pthread_cond_t(unsigned int __dyc_exp ) ;
extern pthread_cond_t *__dyc_read_ptr__typdef_pthread_cond_t(void) ;
extern void __dyc_print_ptr__typdef_pthread_cond_t(pthread_cond_t const   *__dyc_thistype ) ;
extern struct st_myisam_info __dyc_random_comp_120st_myisam_info(unsigned int __dyc_exp ) ;
extern struct st_myisam_info __dyc_read_comp_120st_myisam_info(void) ;
extern void __dyc_print_comp_120st_myisam_info(struct st_myisam_info __dyc_thistype ) ;
extern uint32 __dyc_random_typdef_uint32(unsigned int __dyc_exp ) ;
extern uint32 __dyc_read_typdef_uint32(void) ;
extern void __dyc_print_typdef_uint32(uint32 __dyc_thistype ) ;
extern my_bool __dyc_random_typdef_my_bool(unsigned int __dyc_exp ) ;
extern my_bool __dyc_read_typdef_my_bool(void) ;
extern void __dyc_print_typdef_my_bool(my_bool __dyc_thistype ) ;
extern void *__dyc_random_ptr__void(unsigned int __dyc_exp ) ;
extern void *__dyc_read_ptr__void(void) ;
extern void __dyc_print_ptr__void(void const   * const  __dyc_thistype ) ;
extern union __anonunion_pthread_mutex_t_4 __dyc_random_comp_15__anonunion_pthread_mutex_t_4(unsigned int __dyc_exp ) ;
extern union __anonunion_pthread_mutex_t_4 __dyc_read_comp_15__anonunion_pthread_mutex_t_4(void) ;
extern void __dyc_print_comp_15__anonunion_pthread_mutex_t_4(union __anonunion_pthread_mutex_t_4 __dyc_thistype ) ;
extern KEY_CACHE __dyc_random_typdef_KEY_CACHE(unsigned int __dyc_exp ) ;
extern KEY_CACHE __dyc_read_typdef_KEY_CACHE(void) ;
extern void __dyc_print_typdef_KEY_CACHE(KEY_CACHE __dyc_thistype ) ;
extern struct unicase_info_st __dyc_random_comp_92unicase_info_st(unsigned int __dyc_exp ) ;
extern struct unicase_info_st __dyc_read_comp_92unicase_info_st(void) ;
extern void __dyc_print_comp_92unicase_info_st(struct unicase_info_st __dyc_thistype ) ;
extern uint8 __dyc_random_typdef_uint8(unsigned int __dyc_exp ) ;
extern uint8 __dyc_read_typdef_uint8(void) ;
extern void __dyc_print_typdef_uint8(uint8 __dyc_thistype ) ;
extern struct st_io_cache __dyc_random_comp_107st_io_cache(unsigned int __dyc_exp ) ;
extern struct st_io_cache __dyc_read_comp_107st_io_cache(void) ;
extern void __dyc_print_comp_107st_io_cache(struct st_io_cache __dyc_thistype ) ;
extern MI_STATE_INFO *__dyc_random_ptr__typdef_MI_STATE_INFO(unsigned int __dyc_exp ) ;
extern MI_STATE_INFO *__dyc_read_ptr__typdef_MI_STATE_INFO(void) ;
extern void __dyc_print_ptr__typdef_MI_STATE_INFO(MI_STATE_INFO const   *__dyc_thistype ) ;
extern pthread_mutex_t __dyc_random_typdef_pthread_mutex_t(unsigned int __dyc_exp ) ;
extern pthread_mutex_t __dyc_read_typdef_pthread_mutex_t(void) ;
extern void __dyc_print_typdef_pthread_mutex_t(pthread_mutex_t __dyc_thistype ) ;
extern char *__dyc_random_ptr__char(unsigned int __dyc_exp ) ;
extern char *__dyc_read_ptr__char(void) ;
extern void __dyc_print_ptr__char(char const   *__dyc_thistype ) ;
extern THR_LOCK_OWNER *__dyc_random_ptr__typdef_THR_LOCK_OWNER(unsigned int __dyc_exp ) ;
extern THR_LOCK_OWNER *__dyc_read_ptr__typdef_THR_LOCK_OWNER(void) ;
extern void __dyc_print_ptr__typdef_THR_LOCK_OWNER(THR_LOCK_OWNER const   *__dyc_thistype ) ;
extern longlong __dyc_random_typdef_longlong(unsigned int __dyc_exp ) ;
extern longlong __dyc_read_typdef_longlong(void) ;
extern void __dyc_print_typdef_longlong(longlong __dyc_thistype ) ;
extern MI_BLOB __dyc_random_typdef_MI_BLOB(unsigned int __dyc_exp ) ;
extern MI_BLOB __dyc_read_typdef_MI_BLOB(void) ;
extern void __dyc_print_typdef_MI_BLOB(MI_BLOB __dyc_thistype ) ;
extern THR_LOCK_DATA *__dyc_random_ptr__typdef_THR_LOCK_DATA(unsigned int __dyc_exp ) ;
extern THR_LOCK_DATA *__dyc_read_ptr__typdef_THR_LOCK_DATA(void) ;
extern void __dyc_print_ptr__typdef_THR_LOCK_DATA(THR_LOCK_DATA const   *__dyc_thistype ) ;
extern ulong __dyc_random_typdef_ulong(unsigned int __dyc_exp ) ;
extern ulong __dyc_read_typdef_ulong(void) ;
extern void __dyc_print_typdef_ulong(ulong __dyc_thistype ) ;
extern KEYCACHE_WQUEUE __dyc_random_typdef_KEYCACHE_WQUEUE(unsigned int __dyc_exp ) ;
extern KEYCACHE_WQUEUE __dyc_read_typdef_KEYCACHE_WQUEUE(void) ;
extern void __dyc_print_typdef_KEYCACHE_WQUEUE(KEYCACHE_WQUEUE __dyc_thistype ) ;
extern struct st_io_cache *__dyc_random_ptr__comp_107st_io_cache(unsigned int __dyc_exp ) ;
extern struct st_io_cache *__dyc_read_ptr__comp_107st_io_cache(void) ;
extern void __dyc_print_ptr__comp_107st_io_cache(struct st_io_cache  const  *__dyc_thistype ) ;
extern struct __pthread_mutex_s __dyc_random_comp_16__pthread_mutex_s(unsigned int __dyc_exp ) ;
extern struct __pthread_mutex_s __dyc_read_comp_16__pthread_mutex_s(void) ;
extern void __dyc_print_comp_16__pthread_mutex_s(struct __pthread_mutex_s __dyc_thistype ) ;
extern __time_t __dyc_random_typdef___time_t(unsigned int __dyc_exp ) ;
extern __time_t __dyc_read_typdef___time_t(void) ;
extern void __dyc_print_typdef___time_t(__time_t __dyc_thistype ) ;
extern struct st_lock_list __dyc_random_comp_138st_lock_list(unsigned int __dyc_exp ) ;
extern struct st_lock_list __dyc_read_comp_138st_lock_list(void) ;
extern void __dyc_print_comp_138st_lock_list(struct st_lock_list __dyc_thistype ) ;
extern ha_checksum __dyc_random_typdef_ha_checksum(unsigned int __dyc_exp ) ;
extern ha_checksum __dyc_read_typdef_ha_checksum(void) ;
extern void __dyc_print_typdef_ha_checksum(ha_checksum __dyc_thistype ) ;
extern struct st_thr_lock_data *__dyc_random_ptr__comp_137st_thr_lock_data(unsigned int __dyc_exp ) ;
extern struct st_thr_lock_data *__dyc_read_ptr__comp_137st_thr_lock_data(void) ;
extern void __dyc_print_ptr__comp_137st_thr_lock_data(struct st_thr_lock_data  const  *__dyc_thistype ) ;
extern struct st_mi_decode_tree __dyc_random_comp_125st_mi_decode_tree(unsigned int __dyc_exp ) ;
extern struct st_mi_decode_tree __dyc_read_comp_125st_mi_decode_tree(void) ;
extern void __dyc_print_comp_125st_mi_decode_tree(struct st_mi_decode_tree __dyc_thistype ) ;
extern TREE __dyc_random_typdef_TREE(unsigned int __dyc_exp ) ;
extern TREE __dyc_read_typdef_TREE(void) ;
extern void __dyc_print_typdef_TREE(TREE __dyc_thistype ) ;
extern myf __dyc_random_typdef_myf(unsigned int __dyc_exp ) ;
extern myf __dyc_read_typdef_myf(void) ;
extern void __dyc_print_typdef_myf(myf __dyc_thistype ) ;
extern struct st_thr_lock __dyc_random_comp_134st_thr_lock(unsigned int __dyc_exp ) ;
extern struct st_thr_lock __dyc_read_comp_134st_thr_lock(void) ;
extern void __dyc_print_comp_134st_thr_lock(struct st_thr_lock __dyc_thistype ) ;
extern void *__dyc_random_ptr__typdef_BLOCK_LINK(unsigned int __dyc_exp ) ;
extern void *__dyc_read_ptr__typdef_BLOCK_LINK(void) ;
extern void __dyc_print_ptr__typdef_BLOCK_LINK(void const   * const  __dyc_thistype ) ;
extern MI_BASE_INFO __dyc_random_typdef_MI_BASE_INFO(unsigned int __dyc_exp ) ;
extern MI_BASE_INFO __dyc_read_typdef_MI_BASE_INFO(void) ;
extern void __dyc_print_typdef_MI_BASE_INFO(MI_BASE_INFO __dyc_thistype ) ;
extern union __anonunion_pthread_rwlock_t_9 __dyc_random_comp_21__anonunion_pthread_rwlock_t_9(unsigned int __dyc_exp ) ;
extern union __anonunion_pthread_rwlock_t_9 __dyc_read_comp_21__anonunion_pthread_rwlock_t_9(void) ;
extern void __dyc_print_comp_21__anonunion_pthread_rwlock_t_9(union __anonunion_pthread_rwlock_t_9 __dyc_thistype ) ;
extern struct st_mi_blob __dyc_random_comp_143st_mi_blob(unsigned int __dyc_exp ) ;
extern struct st_mi_blob __dyc_read_comp_143st_mi_blob(void) ;
extern void __dyc_print_comp_143st_mi_blob(struct st_mi_blob __dyc_thistype ) ;
extern MY_UNI_IDX *__dyc_random_ptr__typdef_MY_UNI_IDX(unsigned int __dyc_exp ) ;
extern MY_UNI_IDX *__dyc_read_ptr__typdef_MY_UNI_IDX(void) ;
extern void __dyc_print_ptr__typdef_MY_UNI_IDX(MY_UNI_IDX const   *__dyc_thistype ) ;
extern my_string __dyc_random_typdef_my_string(unsigned int __dyc_exp ) ;
extern my_string __dyc_read_typdef_my_string(void) ;
extern void __dyc_print_typdef_my_string(my_string __dyc_thistype ) ;
extern __pid_t __dyc_random_typdef___pid_t(unsigned int __dyc_exp ) ;
extern __pid_t __dyc_read_typdef___pid_t(void) ;
extern void __dyc_print_typdef___pid_t(__pid_t __dyc_thistype ) ;
extern MI_STATUS_INFO *__dyc_random_ptr__typdef_MI_STATUS_INFO(unsigned int __dyc_exp ) ;
extern MI_STATUS_INFO *__dyc_read_ptr__typdef_MI_STATUS_INFO(void) ;
extern void __dyc_print_ptr__typdef_MI_STATUS_INFO(MI_STATUS_INFO const   *__dyc_thistype ) ;
extern IO_CACHE_SHARE *__dyc_random_ptr__typdef_IO_CACHE_SHARE(unsigned int __dyc_exp ) ;
extern IO_CACHE_SHARE *__dyc_read_ptr__typdef_IO_CACHE_SHARE(void) ;
extern void __dyc_print_ptr__typdef_IO_CACHE_SHARE(IO_CACHE_SHARE const   *__dyc_thistype ) ;
extern struct __anonstruct___data_10 __dyc_random_comp_22__anonstruct___data_10(unsigned int __dyc_exp ) ;
extern struct __anonstruct___data_10 __dyc_read_comp_22__anonstruct___data_10(void) ;
extern void __dyc_print_comp_22__anonstruct___data_10(struct __anonstruct___data_10 __dyc_thistype ) ;
extern TREE *__dyc_random_ptr__typdef_TREE(unsigned int __dyc_exp ) ;
extern TREE *__dyc_read_ptr__typdef_TREE(void) ;
extern void __dyc_print_ptr__typdef_TREE(TREE const   *__dyc_thistype ) ;
extern KEY_CACHE *__dyc_random_ptr__typdef_KEY_CACHE(unsigned int __dyc_exp ) ;
extern KEY_CACHE *__dyc_read_ptr__typdef_KEY_CACHE(void) ;
extern void __dyc_print_ptr__typdef_KEY_CACHE(KEY_CACHE const   *__dyc_thistype ) ;
extern gptr __dyc_random_typdef_gptr(unsigned int __dyc_exp ) ;
extern gptr __dyc_read_typdef_gptr(void) ;
extern void __dyc_print_typdef_gptr(gptr __dyc_thistype ) ;
extern struct st_mi_base_info __dyc_random_comp_142st_mi_base_info(unsigned int __dyc_exp ) ;
extern struct st_mi_base_info __dyc_read_comp_142st_mi_base_info(void) ;
extern void __dyc_print_comp_142st_mi_base_info(struct st_mi_base_info __dyc_thistype ) ;
extern struct st_thr_lock *__dyc_random_ptr__comp_134st_thr_lock(unsigned int __dyc_exp ) ;
extern struct st_thr_lock *__dyc_read_ptr__comp_134st_thr_lock(void) ;
extern void __dyc_print_ptr__comp_134st_thr_lock(struct st_thr_lock  const  *__dyc_thistype ) ;
extern pthread_mutexattr_t __dyc_random_typdef_pthread_mutexattr_t(unsigned int __dyc_exp ) ;
extern pthread_mutexattr_t __dyc_read_typdef_pthread_mutexattr_t(void) ;
extern void __dyc_print_typdef_pthread_mutexattr_t(pthread_mutexattr_t __dyc_thistype ) ;
extern MY_CHARSET_HANDLER *__dyc_random_ptr__typdef_MY_CHARSET_HANDLER(unsigned int __dyc_exp ) ;
extern MY_CHARSET_HANDLER *__dyc_read_ptr__typdef_MY_CHARSET_HANDLER(void) ;
extern void __dyc_print_ptr__typdef_MY_CHARSET_HANDLER(MY_CHARSET_HANDLER const   *__dyc_thistype ) ;
extern struct charset_info_st *__dyc_random_ptr__comp_95charset_info_st(unsigned int __dyc_exp ) ;
extern struct charset_info_st *__dyc_read_ptr__comp_95charset_info_st(void) ;
extern void __dyc_print_ptr__comp_95charset_info_st(struct charset_info_st  const  *__dyc_thistype ) ;
extern MI_BASE_INFO *__dyc_random_ptr__typdef_MI_BASE_INFO(unsigned int __dyc_exp ) ;
extern MI_BASE_INFO *__dyc_read_ptr__typdef_MI_BASE_INFO(void) ;
extern void __dyc_print_ptr__typdef_MI_BASE_INFO(MI_BASE_INFO const   *__dyc_thistype ) ;
extern struct __anonstruct_header_54 __dyc_random_comp_141__anonstruct_header_54(unsigned int __dyc_exp ) ;
extern struct __anonstruct_header_54 __dyc_read_comp_141__anonstruct_header_54(void) ;
extern void __dyc_print_comp_141__anonstruct_header_54(struct __anonstruct_header_54 __dyc_thistype ) ;
extern uchar __dyc_random_typdef_uchar(unsigned int __dyc_exp ) ;
extern uchar __dyc_read_typdef_uchar(void) ;
extern void __dyc_print_typdef_uchar(uchar __dyc_thistype ) ;
extern struct __anonstruct___data_7 __dyc_random_comp_19__anonstruct___data_7(unsigned int __dyc_exp ) ;
extern struct __anonstruct___data_7 __dyc_read_comp_19__anonstruct___data_7(void) ;
extern void __dyc_print_comp_19__anonstruct___data_7(struct __anonstruct___data_7 __dyc_thistype ) ;
extern LIST __dyc_random_typdef_LIST(unsigned int __dyc_exp ) ;
extern LIST __dyc_read_typdef_LIST(void) ;
extern void __dyc_print_typdef_LIST(LIST __dyc_thistype ) ;
extern MI_INFO *__dyc_random_ptr__typdef_MI_INFO(unsigned int __dyc_exp ) ;
extern MI_INFO *__dyc_read_ptr__typdef_MI_INFO(void) ;
extern void __dyc_print_ptr__typdef_MI_INFO(MI_INFO const   *__dyc_thistype ) ;
extern MI_UNIQUEDEF __dyc_random_typdef_MI_UNIQUEDEF(unsigned int __dyc_exp ) ;
extern MI_UNIQUEDEF __dyc_read_typdef_MI_UNIQUEDEF(void) ;
extern void __dyc_print_typdef_MI_UNIQUEDEF(MI_UNIQUEDEF __dyc_thistype ) ;
extern MI_KEYDEF __dyc_random_typdef_MI_KEYDEF(unsigned int __dyc_exp ) ;
extern MI_KEYDEF __dyc_read_typdef_MI_KEYDEF(void) ;
extern void __dyc_print_typdef_MI_KEYDEF(MI_KEYDEF __dyc_thistype ) ;
extern ulong *__dyc_random_ptr__typdef_ulong(unsigned int __dyc_exp ) ;
extern ulong *__dyc_read_ptr__typdef_ulong(void) ;
extern void __dyc_print_ptr__typdef_ulong(ulong const   *__dyc_thistype ) ;
extern struct st_my_thread_var __dyc_random_comp_91st_my_thread_var(unsigned int __dyc_exp ) ;
extern struct st_my_thread_var __dyc_read_comp_91st_my_thread_var(void) ;
extern void __dyc_print_comp_91st_my_thread_var(struct st_my_thread_var __dyc_thistype ) ;
extern struct st_used_mem *__dyc_random_ptr__comp_98st_used_mem(unsigned int __dyc_exp ) ;
extern struct st_used_mem *__dyc_read_ptr__comp_98st_used_mem(void) ;
extern void __dyc_print_ptr__comp_98st_used_mem(struct st_used_mem  const  *__dyc_thistype ) ;
extern uint16 *__dyc_random_ptr__typdef_uint16(unsigned int __dyc_exp ) ;
extern uint16 *__dyc_read_ptr__typdef_uint16(void) ;
extern void __dyc_print_ptr__typdef_uint16(uint16 const   *__dyc_thistype ) ;
extern MI_BIT_BUFF __dyc_random_typdef_MI_BIT_BUFF(unsigned int __dyc_exp ) ;
extern MI_BIT_BUFF __dyc_read_typdef_MI_BIT_BUFF(void) ;
extern void __dyc_print_typdef_MI_BIT_BUFF(MI_BIT_BUFF __dyc_thistype ) ;
extern LIST *__dyc_random_ptr__typdef_LIST(unsigned int __dyc_exp ) ;
extern LIST *__dyc_read_ptr__typdef_LIST(void) ;
extern void __dyc_print_ptr__typdef_LIST(LIST const   *__dyc_thistype ) ;
extern struct st_keycache_wqueue __dyc_random_comp_115st_keycache_wqueue(unsigned int __dyc_exp ) ;
extern struct st_keycache_wqueue __dyc_read_comp_115st_keycache_wqueue(void) ;
extern void __dyc_print_comp_115st_keycache_wqueue(struct st_keycache_wqueue __dyc_thistype ) ;
extern ha_rows __dyc_random_typdef_ha_rows(unsigned int __dyc_exp ) ;
extern ha_rows __dyc_read_typdef_ha_rows(void) ;
extern void __dyc_print_typdef_ha_rows(ha_rows __dyc_thistype ) ;
extern struct st_tree_element __dyc_random_comp_132st_tree_element(unsigned int __dyc_exp ) ;
extern struct st_tree_element __dyc_read_comp_132st_tree_element(void) ;
extern void __dyc_print_comp_132st_tree_element(struct st_tree_element __dyc_thistype ) ;
extern int16 __dyc_random_typdef_int16(unsigned int __dyc_exp ) ;
extern int16 __dyc_read_typdef_int16(void) ;
extern void __dyc_print_typdef_int16(int16 __dyc_thistype ) ;
extern IO_CACHE __dyc_random_typdef_IO_CACHE(unsigned int __dyc_exp ) ;
extern IO_CACHE __dyc_read_typdef_IO_CACHE(void) ;
extern void __dyc_print_typdef_IO_CACHE(IO_CACHE __dyc_thistype ) ;
extern MI_UNIQUEDEF *__dyc_random_ptr__typdef_MI_UNIQUEDEF(unsigned int __dyc_exp ) ;
extern MI_UNIQUEDEF *__dyc_read_ptr__typdef_MI_UNIQUEDEF(void) ;
extern void __dyc_print_ptr__typdef_MI_UNIQUEDEF(MI_UNIQUEDEF const   *__dyc_thistype ) ;
extern struct st_HA_KEYSEG __dyc_random_comp_117st_HA_KEYSEG(unsigned int __dyc_exp ) ;
extern struct st_HA_KEYSEG __dyc_read_comp_117st_HA_KEYSEG(void) ;
extern void __dyc_print_comp_117st_HA_KEYSEG(struct st_HA_KEYSEG __dyc_thistype ) ;
extern struct st_my_thread_var *__dyc_random_ptr__comp_91st_my_thread_var(unsigned int __dyc_exp ) ;
extern struct st_my_thread_var *__dyc_read_ptr__comp_91st_my_thread_var(void) ;
extern void __dyc_print_ptr__comp_91st_my_thread_var(struct st_my_thread_var  const  *__dyc_thistype ) ;
extern mi_bit_type __dyc_random_typdef_mi_bit_type(unsigned int __dyc_exp ) ;
extern mi_bit_type __dyc_read_typdef_mi_bit_type(void) ;
extern void __dyc_print_typdef_mi_bit_type(mi_bit_type __dyc_thistype ) ;
extern struct st_mi_bit_buff *__dyc_random_ptr__comp_126st_mi_bit_buff(unsigned int __dyc_exp ) ;
extern struct st_mi_bit_buff *__dyc_read_ptr__comp_126st_mi_bit_buff(void) ;
extern void __dyc_print_ptr__comp_126st_mi_bit_buff(struct st_mi_bit_buff  const  *__dyc_thistype ) ;
extern struct st_tree __dyc_random_comp_133st_tree(unsigned int __dyc_exp ) ;
extern struct st_tree __dyc_read_comp_133st_tree(void) ;
extern void __dyc_print_comp_133st_tree(struct st_tree __dyc_thistype ) ;
extern struct my_collation_handler_st __dyc_random_comp_96my_collation_handler_st(unsigned int __dyc_exp ) ;
extern struct my_collation_handler_st __dyc_read_comp_96my_collation_handler_st(void) ;
extern void __dyc_print_comp_96my_collation_handler_st(struct my_collation_handler_st __dyc_thistype ) ;
extern struct st_tree_element *__dyc_random_ptr__comp_132st_tree_element(unsigned int __dyc_exp ) ;
extern struct st_tree_element *__dyc_read_ptr__comp_132st_tree_element(void) ;
extern void __dyc_print_ptr__comp_132st_tree_element(struct st_tree_element  const  *__dyc_thistype ) ;
extern uchar *__dyc_random_ptr__typdef_uchar(unsigned int __dyc_exp ) ;
extern uchar *__dyc_read_ptr__typdef_uchar(void) ;
extern void __dyc_print_ptr__typdef_uchar(uchar const   *__dyc_thistype ) ;
extern pthread_cond_t __dyc_random_typdef_pthread_cond_t(unsigned int __dyc_exp ) ;
extern pthread_cond_t __dyc_read_typdef_pthread_cond_t(void) ;
extern void __dyc_print_typdef_pthread_cond_t(pthread_cond_t __dyc_thistype ) ;
extern MI_KEY_PARAM __dyc_random_typdef_MI_KEY_PARAM(unsigned int __dyc_exp ) ;
extern MI_KEY_PARAM __dyc_read_typdef_MI_KEY_PARAM(void) ;
extern void __dyc_print_typdef_MI_KEY_PARAM(MI_KEY_PARAM __dyc_thistype ) ;
extern HASH_LINK **__dyc_random_ptr__ptr__typdef_HASH_LINK(unsigned int __dyc_exp ) ;
extern HASH_LINK **__dyc_read_ptr__ptr__typdef_HASH_LINK(void) ;
extern void __dyc_print_ptr__ptr__typdef_HASH_LINK(HASH_LINK * const  *__dyc_thistype ) ;
extern struct my_charset_handler_st __dyc_random_comp_97my_charset_handler_st(unsigned int __dyc_exp ) ;
extern struct my_charset_handler_st __dyc_read_comp_97my_charset_handler_st(void) ;
extern void __dyc_print_comp_97my_charset_handler_st(struct my_charset_handler_st __dyc_thistype ) ;
extern MI_DECODE_TREE *__dyc_random_ptr__typdef_MI_DECODE_TREE(unsigned int __dyc_exp ) ;
extern MI_DECODE_TREE *__dyc_read_ptr__typdef_MI_DECODE_TREE(void) ;
extern void __dyc_print_ptr__typdef_MI_DECODE_TREE(MI_DECODE_TREE const   *__dyc_thistype ) ;
extern MY_UNICASE_INFO *__dyc_random_ptr__typdef_MY_UNICASE_INFO(unsigned int __dyc_exp ) ;
extern MY_UNICASE_INFO *__dyc_read_ptr__typdef_MY_UNICASE_INFO(void) ;
extern void __dyc_print_ptr__typdef_MY_UNICASE_INFO(MY_UNICASE_INFO const   *__dyc_thistype ) ;
extern MI_KEYDEF *__dyc_random_ptr__typdef_MI_KEYDEF(unsigned int __dyc_exp ) ;
extern MI_KEYDEF *__dyc_read_ptr__typdef_MI_KEYDEF(void) ;
extern void __dyc_print_ptr__typdef_MI_KEYDEF(MI_KEYDEF const   *__dyc_thistype ) ;
extern struct st_mi_state_info __dyc_random_comp_140st_mi_state_info(unsigned int __dyc_exp ) ;
extern struct st_mi_state_info __dyc_read_comp_140st_mi_state_info(void) ;
extern void __dyc_print_comp_140st_mi_state_info(struct st_mi_state_info __dyc_thistype ) ;
extern THR_LOCK_OWNER __dyc_random_typdef_THR_LOCK_OWNER(unsigned int __dyc_exp ) ;
extern THR_LOCK_OWNER __dyc_read_typdef_THR_LOCK_OWNER(void) ;
extern void __dyc_print_typdef_THR_LOCK_OWNER(THR_LOCK_OWNER __dyc_thistype ) ;
extern struct st_list __dyc_random_comp_109st_list(unsigned int __dyc_exp ) ;
extern struct st_list __dyc_read_comp_109st_list(void) ;
extern void __dyc_print_comp_109st_list(struct st_list __dyc_thistype ) ;
extern MI_KEY_PARAM *__dyc_random_ptr__typdef_MI_KEY_PARAM(unsigned int __dyc_exp ) ;
extern MI_KEY_PARAM *__dyc_read_ptr__typdef_MI_KEY_PARAM(void) ;
extern void __dyc_print_ptr__typdef_MI_KEY_PARAM(MI_KEY_PARAM const   *__dyc_thistype ) ;
extern my_match_t *__dyc_random_ptr__typdef_my_match_t(unsigned int __dyc_exp ) ;
extern my_match_t *__dyc_read_ptr__typdef_my_match_t(void) ;
extern void __dyc_print_ptr__typdef_my_match_t(my_match_t const   *__dyc_thistype ) ;
extern MY_UNICASE_INFO **__dyc_random_ptr__ptr__typdef_MY_UNICASE_INFO(unsigned int __dyc_exp ) ;
extern MY_UNICASE_INFO **__dyc_read_ptr__ptr__typdef_MY_UNICASE_INFO(void) ;
extern void __dyc_print_ptr__ptr__typdef_MY_UNICASE_INFO(MY_UNICASE_INFO * const  *__dyc_thistype ) ;
extern struct charset_info_st __dyc_random_comp_95charset_info_st(unsigned int __dyc_exp ) ;
extern struct charset_info_st __dyc_read_comp_95charset_info_st(void) ;
extern void __dyc_print_comp_95charset_info_st(struct charset_info_st __dyc_thistype ) ;
extern THR_LOCK_INFO __dyc_random_typdef_THR_LOCK_INFO(unsigned int __dyc_exp ) ;
extern THR_LOCK_INFO __dyc_read_typdef_THR_LOCK_INFO(void) ;
extern void __dyc_print_typdef_THR_LOCK_INFO(THR_LOCK_INFO __dyc_thistype ) ;
extern MY_COLLATION_HANDLER __dyc_random_typdef_MY_COLLATION_HANDLER(unsigned int __dyc_exp ) ;
extern MY_COLLATION_HANDLER __dyc_read_typdef_MY_COLLATION_HANDLER(void) ;
extern void __dyc_print_typdef_MY_COLLATION_HANDLER(MY_COLLATION_HANDLER __dyc_thistype ) ;
extern struct st_mi_s_param *__dyc_random_ptr__comp_122st_mi_s_param(unsigned int __dyc_exp ) ;
extern struct st_mi_s_param *__dyc_read_ptr__comp_122st_mi_s_param(void) ;
extern void __dyc_print_ptr__comp_122st_mi_s_param(struct st_mi_s_param  const  *__dyc_thistype ) ;
extern struct st_my_thread_var **__dyc_random_ptr__ptr__comp_91st_my_thread_var(unsigned int __dyc_exp ) ;
extern struct st_my_thread_var **__dyc_read_ptr__ptr__comp_91st_my_thread_var(void) ;
extern void __dyc_print_ptr__ptr__comp_91st_my_thread_var(struct st_my_thread_var * const  *__dyc_thistype ) ;
extern struct st_thr_lock_info __dyc_random_comp_135st_thr_lock_info(unsigned int __dyc_exp ) ;
extern struct st_thr_lock_info __dyc_read_comp_135st_thr_lock_info(void) ;
extern void __dyc_print_comp_135st_thr_lock_info(struct st_thr_lock_info __dyc_thistype ) ;
extern TREE_ELEMENT __dyc_random_typdef_TREE_ELEMENT(unsigned int __dyc_exp ) ;
extern TREE_ELEMENT __dyc_read_typdef_TREE_ELEMENT(void) ;
extern void __dyc_print_typdef_TREE_ELEMENT(TREE_ELEMENT __dyc_thistype ) ;
extern MI_PACK __dyc_random_typdef_MI_PACK(unsigned int __dyc_exp ) ;
extern MI_PACK __dyc_read_typdef_MI_PACK(void) ;
extern void __dyc_print_typdef_MI_PACK(MI_PACK __dyc_thistype ) ;
extern byte __dyc_random_typdef_byte(unsigned int __dyc_exp ) ;
extern byte __dyc_read_typdef_byte(void) ;
extern void __dyc_print_typdef_byte(byte __dyc_thistype ) ;
extern uint32 *__dyc_random_ptr__typdef_uint32(unsigned int __dyc_exp ) ;
extern uint32 *__dyc_read_ptr__typdef_uint32(void) ;
extern void __dyc_print_ptr__typdef_uint32(uint32 const   *__dyc_thistype ) ;
extern struct st_list *__dyc_random_ptr__comp_109st_list(unsigned int __dyc_exp ) ;
extern struct st_list *__dyc_read_ptr__comp_109st_list(void) ;
extern void __dyc_print_ptr__comp_109st_list(struct st_list  const  *__dyc_thistype ) ;
extern struct st_dynamic_array __dyc_random_comp_104st_dynamic_array(unsigned int __dyc_exp ) ;
extern struct st_dynamic_array __dyc_read_comp_104st_dynamic_array(void) ;
extern void __dyc_print_comp_104st_dynamic_array(struct st_dynamic_array __dyc_thistype ) ;
extern pchar __dyc_random_typdef_pchar(unsigned int __dyc_exp ) ;
extern pchar __dyc_read_typdef_pchar(void) ;
extern void __dyc_print_typdef_pchar(pchar __dyc_thistype ) ;
extern USED_MEM __dyc_random_typdef_USED_MEM(unsigned int __dyc_exp ) ;
extern USED_MEM __dyc_read_typdef_USED_MEM(void) ;
extern void __dyc_print_typdef_USED_MEM(USED_MEM __dyc_thistype ) ;
extern MI_INFO __dyc_random_typdef_MI_INFO(unsigned int __dyc_exp ) ;
extern MI_INFO __dyc_read_typdef_MI_INFO(void) ;
extern void __dyc_print_typdef_MI_INFO(MI_INFO __dyc_thistype ) ;
extern MY_COLLATION_HANDLER *__dyc_random_ptr__typdef_MY_COLLATION_HANDLER(unsigned int __dyc_exp ) ;
extern MY_COLLATION_HANDLER *__dyc_read_ptr__typdef_MY_COLLATION_HANDLER(void) ;
extern void __dyc_print_ptr__typdef_MY_COLLATION_HANDLER(MY_COLLATION_HANDLER const   *__dyc_thistype ) ;
extern TREE_ELEMENT *__dyc_random_ptr__typdef_TREE_ELEMENT(unsigned int __dyc_exp ) ;
extern TREE_ELEMENT *__dyc_read_ptr__typdef_TREE_ELEMENT(void) ;
extern void __dyc_print_ptr__typdef_TREE_ELEMENT(TREE_ELEMENT const   *__dyc_thistype ) ;
extern struct st_used_mem __dyc_random_comp_98st_used_mem(unsigned int __dyc_exp ) ;
extern struct st_used_mem __dyc_read_comp_98st_used_mem(void) ;
extern void __dyc_print_comp_98st_used_mem(struct st_used_mem __dyc_thistype ) ;
extern MY_UNI_IDX __dyc_random_typdef_MY_UNI_IDX(unsigned int __dyc_exp ) ;
extern MY_UNI_IDX __dyc_read_typdef_MY_UNI_IDX(void) ;
extern void __dyc_print_typdef_MY_UNI_IDX(MY_UNI_IDX __dyc_thistype ) ;
extern char **__dyc_random_ptr__ptr__char(unsigned int __dyc_exp ) ;
extern char **__dyc_read_ptr__ptr__char(void) ;
extern void __dyc_print_ptr__ptr__char(char * const  *__dyc_thistype ) ;
extern MI_STATUS_INFO __dyc_random_typdef_MI_STATUS_INFO(unsigned int __dyc_exp ) ;
extern MI_STATUS_INFO __dyc_read_typdef_MI_STATUS_INFO(void) ;
extern void __dyc_print_typdef_MI_STATUS_INFO(MI_STATUS_INFO __dyc_thistype ) ;
extern struct st_columndef __dyc_random_comp_127st_columndef(unsigned int __dyc_exp ) ;
extern struct st_columndef __dyc_read_comp_127st_columndef(void) ;
extern void __dyc_print_comp_127st_columndef(struct st_columndef __dyc_thistype ) ;
extern HA_KEYSEG __dyc_random_typdef_HA_KEYSEG(unsigned int __dyc_exp ) ;
extern HA_KEYSEG __dyc_read_typdef_HA_KEYSEG(void) ;
extern void __dyc_print_typdef_HA_KEYSEG(HA_KEYSEG __dyc_thistype ) ;
extern byte *__dyc_random_ptr__typdef_byte(unsigned int __dyc_exp ) ;
extern byte *__dyc_read_ptr__typdef_byte(void) ;
extern void __dyc_print_ptr__typdef_byte(byte const   *__dyc_thistype ) ;
extern IO_CACHE_SHARE __dyc_random_typdef_IO_CACHE_SHARE(unsigned int __dyc_exp ) ;
extern IO_CACHE_SHARE __dyc_read_typdef_IO_CACHE_SHARE(void) ;
extern void __dyc_print_typdef_IO_CACHE_SHARE(IO_CACHE_SHARE __dyc_thistype ) ;
extern struct __pthread_internal_list *__dyc_random_ptr__comp_14__pthread_internal_list(unsigned int __dyc_exp ) ;
extern struct __pthread_internal_list *__dyc_read_ptr__comp_14__pthread_internal_list(void) ;
extern void __dyc_print_ptr__comp_14__pthread_internal_list(struct __pthread_internal_list  const  *__dyc_thistype ) ;
