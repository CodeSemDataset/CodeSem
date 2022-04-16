#line 212 "/usr/lib/gcc/x86_64-linux-gnu/4.6/include/stddef.h"
typedef unsigned long size_t;
#line 141 "/usr/include/x86_64-linux-gnu/bits/types.h"
typedef long __off_t;
#line 142 "/usr/include/x86_64-linux-gnu/bits/types.h"
typedef long __off64_t;
#line 149 "/usr/include/x86_64-linux-gnu/bits/types.h"
typedef long __time_t;
#line 45 "/usr/include/stdio.h"
struct _IO_FILE;
#line 45
struct _IO_FILE;
#line 49 "/usr/include/stdio.h"
typedef struct _IO_FILE FILE;
#line 40 "/usr/lib/gcc/x86_64-linux-gnu/4.6/include/stdarg.h"
typedef __builtin_va_list __gnuc_va_list;
#line 172 "/usr/include/libio.h"
struct _IO_FILE;
#line 182 "/usr/include/libio.h"
typedef void _IO_lock_t;
#line 188 "/usr/include/libio.h"
struct _IO_marker {
   struct _IO_marker *_next ;
   struct _IO_FILE *_sbuf ;
   int _pos ;
};
#line 273 "/usr/include/libio.h"
struct _IO_FILE {
   int _flags ;
   char *_IO_read_ptr ;
   char *_IO_read_end ;
   char *_IO_read_base ;
   char *_IO_write_base ;
   char *_IO_write_ptr ;
   char *_IO_write_end ;
   char *_IO_buf_base ;
   char *_IO_buf_end ;
   char *_IO_save_base ;
   char *_IO_backup_base ;
   char *_IO_save_end ;
   struct _IO_marker *_markers ;
   struct _IO_FILE *_chain ;
   int _fileno ;
   int _flags2 ;
   __off_t _old_offset ;
   unsigned short _cur_column ;
   signed char _vtable_offset ;
   char _shortbuf[1] ;
   _IO_lock_t *_lock ;
   __off64_t _offset ;
   void *__pad1 ;
   void *__pad2 ;
   void *__pad3 ;
   void *__pad4 ;
   size_t __pad5 ;
   int _mode ;
   char _unused2[(15UL * sizeof(int ) - 4UL * sizeof(void *)) - sizeof(size_t )] ;
};
#line 343 "/usr/include/libio.h"
typedef struct _IO_FILE _IO_FILE;
#line 80 "/usr/include/stdio.h"
typedef __gnuc_va_list va_list;
#line 76 "/usr/include/time.h"
typedef __time_t time_t;
#line 151 "/usr/include/x86_64-linux-gnu/sys/types.h"
typedef unsigned long ulong;
#line 153 "/usr/include/x86_64-linux-gnu/sys/types.h"
typedef unsigned int uint;
#line 550 "../include/my_global.h"
typedef int my_socket;
#line 559 "../include/my_global.h"
typedef char pchar;
#line 868 "../include/my_global.h"
typedef char *gptr;
#line 875 "../include/my_global.h"
typedef unsigned char uchar;
#line 878 "../include/my_global.h"
typedef unsigned short uint16;
#line 902 "../include/my_global.h"
typedef unsigned long ulonglong;
#line 903 "../include/my_global.h"
typedef long longlong;
#line 912 "../include/my_global.h"
typedef unsigned long long my_ulonglong;
#line 974 "../include/my_global.h"
typedef char *my_string;
#line 976 "../include/my_global.h"
typedef int myf;
#line 978 "../include/my_global.h"
typedef char byte;
#line 980 "../include/my_global.h"
typedef char my_bool;
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
struct __anonstruct_my_match_t_37 {
   uint beg ;
   uint end ;
   uint mb_len ;
};
#line 91 "../include/m_ctype.h"
typedef struct __anonstruct_my_match_t_37 my_match_t;
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
#line 22 "../include/typelib.h"
struct st_typelib {
   unsigned int count ;
   char *name ;
   char **type_names ;
   unsigned int *type_lengths ;
};
#line 22 "../include/typelib.h"
typedef struct st_typelib TYPELIB;
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
#line 340 "../include/my_sys.h"
struct st_dynamic_string {
   char *str ;
   uint length ;
   uint max_length ;
   uint alloc_increment ;
};
#line 340 "../include/my_sys.h"
typedef struct st_dynamic_string DYNAMIC_STRING;
#line 33 "../include/hash.h"
struct st_hash {
   uint key_offset ;
   uint key_length ;
   uint records ;
   uint blength ;
   uint flags ;
   DYNAMIC_ARRAY array ;
   byte *(*get_key)(byte const   * , uint * , my_bool  ) ;
   void (*free)(void * ) ;
   CHARSET_INFO *charset ;
};
#line 33 "../include/hash.h"
typedef struct st_hash HASH;
#line 51 "../include/mysql_com.h"
enum enum_server_command {
    COM_SLEEP = 0,
    COM_QUIT = 1,
    COM_INIT_DB = 2,
    COM_QUERY = 3,
    COM_FIELD_LIST = 4,
    COM_CREATE_DB = 5,
    COM_DROP_DB = 6,
    COM_REFRESH = 7,
    COM_SHUTDOWN = 8,
    COM_STATISTICS = 9,
    COM_PROCESS_INFO = 10,
    COM_CONNECT = 11,
    COM_PROCESS_KILL = 12,
    COM_DEBUG = 13,
    COM_PING = 14,
    COM_TIME = 15,
    COM_DELAYED_INSERT = 16,
    COM_CHANGE_USER = 17,
    COM_BINLOG_DUMP = 18,
    COM_TABLE_DUMP = 19,
    COM_CONNECT_OUT = 20,
    COM_REGISTER_SLAVE = 21,
    COM_STMT_PREPARE = 22,
    COM_STMT_EXECUTE = 23,
    COM_STMT_SEND_LONG_DATA = 24,
    COM_STMT_CLOSE = 25,
    COM_STMT_RESET = 26,
    COM_SET_OPTION = 27,
    COM_STMT_FETCH = 28,
    COM_END = 29
} ;
#line 168
struct st_vio;
#line 168
struct st_vio;
#line 169 "../include/mysql_com.h"
typedef struct st_vio Vio;
#line 179 "../include/mysql_com.h"
struct st_net {
   Vio *vio ;
   unsigned char *buff ;
   unsigned char *buff_end ;
   unsigned char *write_pos ;
   unsigned char *read_pos ;
   my_socket fd ;
   unsigned long max_packet ;
   unsigned long max_packet_size ;
   unsigned int pkt_nr ;
   unsigned int compress_pkt_nr ;
   unsigned int write_timeout ;
   unsigned int read_timeout ;
   unsigned int retry_count ;
   int fcntl ;
   my_bool compress ;
   unsigned long remain_in_buf ;
   unsigned long length ;
   unsigned long buf_length ;
   unsigned long where_b ;
   unsigned int *return_status ;
   unsigned char reading_or_writing ;
   char save_char ;
   my_bool no_send_ok ;
   my_bool no_send_eof ;
   my_bool no_send_error ;
   char last_error[512] ;
   char sqlstate[6] ;
   unsigned int last_errno ;
   unsigned char error ;
   gptr query_cache_query ;
   my_bool report_error ;
   my_bool return_errno ;
};
#line 179 "../include/mysql_com.h"
typedef struct st_net NET;
#line 226
enum enum_field_types {
    MYSQL_TYPE_DECIMAL = 0,
    MYSQL_TYPE_TINY = 1,
    MYSQL_TYPE_SHORT = 2,
    MYSQL_TYPE_LONG = 3,
    MYSQL_TYPE_FLOAT = 4,
    MYSQL_TYPE_DOUBLE = 5,
    MYSQL_TYPE_NULL = 6,
    MYSQL_TYPE_TIMESTAMP = 7,
    MYSQL_TYPE_LONGLONG = 8,
    MYSQL_TYPE_INT24 = 9,
    MYSQL_TYPE_DATE = 10,
    MYSQL_TYPE_TIME = 11,
    MYSQL_TYPE_DATETIME = 12,
    MYSQL_TYPE_YEAR = 13,
    MYSQL_TYPE_NEWDATE = 14,
    MYSQL_TYPE_VARCHAR = 15,
    MYSQL_TYPE_BIT = 16,
    MYSQL_TYPE_NEWDECIMAL = 246,
    MYSQL_TYPE_ENUM = 247,
    MYSQL_TYPE_SET = 248,
    MYSQL_TYPE_TINY_BLOB = 249,
    MYSQL_TYPE_MEDIUM_BLOB = 250,
    MYSQL_TYPE_LONG_BLOB = 251,
    MYSQL_TYPE_BLOB = 252,
    MYSQL_TYPE_VAR_STRING = 253,
    MYSQL_TYPE_STRING = 254,
    MYSQL_TYPE_GEOMETRY = 255
} ;
#line 23 "../include/my_list.h"
struct st_list {
   struct st_list *prev ;
   struct st_list *next ;
   void *data ;
};
#line 23 "../include/my_list.h"
typedef struct st_list LIST;
#line 93 "../include/mysql.h"
struct st_mysql_field {
   char *name ;
   char *org_name ;
   char *table ;
   char *org_table ;
   char *db ;
   char *catalog ;
   char *def ;
   unsigned long length ;
   unsigned long max_length ;
   unsigned int name_length ;
   unsigned int org_name_length ;
   unsigned int table_length ;
   unsigned int org_table_length ;
   unsigned int db_length ;
   unsigned int catalog_length ;
   unsigned int def_length ;
   unsigned int flags ;
   unsigned int decimals ;
   unsigned int charsetnr ;
   enum enum_field_types type ;
};
#line 93 "../include/mysql.h"
typedef struct st_mysql_field MYSQL_FIELD;
#line 116 "../include/mysql.h"
typedef char **MYSQL_ROW;
#line 117 "../include/mysql.h"
typedef unsigned int MYSQL_FIELD_OFFSET;
#line 134 "../include/mysql.h"
struct st_mysql_rows {
   struct st_mysql_rows *next ;
   MYSQL_ROW data ;
   unsigned long length ;
};
#line 134 "../include/mysql.h"
typedef struct st_mysql_rows MYSQL_ROWS;
#line 144
struct embedded_query_result;
#line 145 "../include/mysql.h"
struct st_mysql_data {
   my_ulonglong rows ;
   unsigned int fields ;
   MYSQL_ROWS *data ;
   MEM_ROOT alloc ;
   struct embedded_query_result *embedded_info ;
};
#line 145 "../include/mysql.h"
typedef struct st_mysql_data MYSQL_DATA;
#line 154
enum mysql_option {
    MYSQL_OPT_CONNECT_TIMEOUT = 0,
    MYSQL_OPT_COMPRESS = 1,
    MYSQL_OPT_NAMED_PIPE = 2,
    MYSQL_INIT_COMMAND = 3,
    MYSQL_READ_DEFAULT_FILE = 4,
    MYSQL_READ_DEFAULT_GROUP = 5,
    MYSQL_SET_CHARSET_DIR = 6,
    MYSQL_SET_CHARSET_NAME = 7,
    MYSQL_OPT_LOCAL_INFILE = 8,
    MYSQL_OPT_PROTOCOL = 9,
    MYSQL_SHARED_MEMORY_BASE_NAME = 10,
    MYSQL_OPT_READ_TIMEOUT = 11,
    MYSQL_OPT_WRITE_TIMEOUT = 12,
    MYSQL_OPT_USE_RESULT = 13,
    MYSQL_OPT_USE_REMOTE_CONNECTION = 14,
    MYSQL_OPT_USE_EMBEDDED_CONNECTION = 15,
    MYSQL_OPT_GUESS_CONNECTION = 16,
    MYSQL_SET_CLIENT_IP = 17,
    MYSQL_SECURE_AUTH = 18,
    MYSQL_REPORT_DATA_TRUNCATION = 19,
    MYSQL_OPT_RECONNECT = 20,
    MYSQL_OPT_SSL_VERIFY_SERVER_CERT = 21
} ;
#line 167 "../include/mysql.h"
struct st_mysql_options {
   unsigned int connect_timeout ;
   unsigned int read_timeout ;
   unsigned int write_timeout ;
   unsigned int port ;
   unsigned int protocol ;
   unsigned long client_flag ;
   char *host ;
   char *user ;
   char *password ;
   char *unix_socket ;
   char *db ;
   struct st_dynamic_array *init_commands ;
   char *my_cnf_file ;
   char *my_cnf_group ;
   char *charset_dir ;
   char *charset_name ;
   char *ssl_key ;
   char *ssl_cert ;
   char *ssl_ca ;
   char *ssl_capath ;
   char *ssl_cipher ;
   char *shared_memory_base_name ;
   unsigned long max_allowed_packet ;
   my_bool use_ssl ;
   my_bool compress ;
   my_bool named_pipe ;
   my_bool rpl_probe ;
   my_bool rpl_parse ;
   my_bool no_master_reads ;
   my_bool separate_thread ;
   enum mysql_option methods_to_use ;
   char *client_ip ;
   my_bool secure_auth ;
   my_bool report_data_truncation ;
   int (*local_infile_init)(void ** , char const   * , void * ) ;
   int (*local_infile_read)(void * , char * , unsigned int  ) ;
   void (*local_infile_end)(void * ) ;
   int (*local_infile_error)(void * , char * , unsigned int  ) ;
   void *local_infile_userdata ;
};
#line 216
enum mysql_status {
    MYSQL_STATUS_READY = 0,
    MYSQL_STATUS_GET_RESULT = 1,
    MYSQL_STATUS_USE_RESULT = 2
} ;
#line 248
struct st_mysql_methods;
#line 248
struct st_mysql_methods;
#line 249
struct st_mysql_stmt;
#line 249
struct st_mysql_stmt;
#line 251 "../include/mysql.h"
struct st_mysql {
   NET net ;
   gptr connector_fd ;
   char *host ;
   char *user ;
   char *passwd ;
   char *unix_socket ;
   char *server_version ;
   char *host_info ;
   char *info ;
   char *db ;
   struct charset_info_st *charset ;
   MYSQL_FIELD *fields ;
   MEM_ROOT field_alloc ;
   my_ulonglong affected_rows ;
   my_ulonglong insert_id ;
   my_ulonglong extra_info ;
   unsigned long thread_id ;
   unsigned long packet_length ;
   unsigned int port ;
   unsigned long client_flag ;
   unsigned long server_capabilities ;
   unsigned int protocol_version ;
   unsigned int field_count ;
   unsigned int server_status ;
   unsigned int server_language ;
   unsigned int warning_count ;
   struct st_mysql_options options ;
   enum mysql_status status ;
   my_bool free_me ;
   my_bool reconnect ;
   char scramble[21] ;
   my_bool rpl_pivot ;
   struct st_mysql *master ;
   struct st_mysql *next_slave ;
   struct st_mysql *last_used_slave ;
   struct st_mysql *last_used_con ;
   LIST *stmts ;
   struct st_mysql_methods *methods ;
   void *thd ;
   my_bool *unbuffered_fetch_owner ;
};
#line 251 "../include/mysql.h"
typedef struct st_mysql MYSQL;
#line 309 "../include/mysql.h"
struct st_mysql_res {
   my_ulonglong row_count ;
   MYSQL_FIELD *fields ;
   MYSQL_DATA *data ;
   MYSQL_ROWS *data_cursor ;
   unsigned long *lengths ;
   MYSQL *handle ;
   MEM_ROOT field_alloc ;
   unsigned int field_count ;
   unsigned int current_field ;
   MYSQL_ROW row ;
   MYSQL_ROW current_row ;
   my_bool eof ;
   my_bool unbuffered_fetch_cancelled ;
   struct st_mysql_methods *methods ;
};
#line 309 "../include/mysql.h"
typedef struct st_mysql_res MYSQL_RES;
#line 354 "../include/mysql.h"
struct st_mysql_parameters {
   unsigned long *p_max_allowed_packet ;
   unsigned long *p_net_buffer_length ;
};
#line 354 "../include/mysql.h"
typedef struct st_mysql_parameters MYSQL_PARAMETERS;
#line 583
enum enum_mysql_stmt_state {
    MYSQL_STMT_INIT_DONE = 1,
    MYSQL_STMT_PREPARE_DONE = 2,
    MYSQL_STMT_EXECUTE_DONE = 3,
    MYSQL_STMT_FETCH_DONE = 4
} ;
#line 653 "../include/mysql.h"
struct st_mysql_bind {
   unsigned long *length ;
   my_bool *is_null ;
   void *buffer ;
   my_bool *error ;
   enum enum_field_types buffer_type ;
   unsigned long buffer_length ;
   unsigned char *row_ptr ;
   unsigned long offset ;
   unsigned long length_value ;
   unsigned int param_number ;
   unsigned int pack_length ;
   my_bool error_value ;
   my_bool is_unsigned ;
   my_bool long_data_used ;
   my_bool is_null_value ;
   void (*store_param_func)(NET *net , struct st_mysql_bind *param ) ;
   void (*fetch_result)(struct st_mysql_bind * , MYSQL_FIELD * ,
                        unsigned char **row ) ;
   void (*skip_result)(struct st_mysql_bind * , MYSQL_FIELD * ,
                       unsigned char **row ) ;
};
#line 653 "../include/mysql.h"
typedef struct st_mysql_bind MYSQL_BIND;
#line 681 "../include/mysql.h"
struct st_mysql_stmt {
   MEM_ROOT mem_root ;
   LIST list ;
   MYSQL *mysql ;
   MYSQL_BIND *params ;
   MYSQL_BIND *bind ;
   MYSQL_FIELD *fields ;
   MYSQL_DATA result ;
   MYSQL_ROWS *data_cursor ;
   my_ulonglong affected_rows ;
   my_ulonglong insert_id ;
   int (*read_row_func)(struct st_mysql_stmt *stmt , unsigned char **row ) ;
   unsigned long stmt_id ;
   unsigned long flags ;
   unsigned long prefetch_rows ;
   unsigned int server_status ;
   unsigned int last_errno ;
   unsigned int param_count ;
   unsigned int field_count ;
   enum enum_mysql_stmt_state state ;
   char last_error[512] ;
   char sqlstate[6] ;
   my_bool send_types_to_server ;
   my_bool bind_param_done ;
   unsigned char bind_result_done ;
   my_bool unbuffered_fetch_cancelled ;
   my_bool update_max_length ;
};
#line 681 "../include/mysql.h"
typedef struct st_mysql_stmt MYSQL_STMT;
#line 750 "../include/mysql.h"
struct st_mysql_methods {
   my_bool (*read_query_result)(MYSQL *mysql ) ;
   my_bool (*advanced_command)(MYSQL *mysql , enum enum_server_command command ,
                               char const   *header ,
                               unsigned long header_length , char const   *arg ,
                               unsigned long arg_length , my_bool skip_check ,
                               MYSQL_STMT *stmt ) ;
   MYSQL_DATA *(*read_rows)(MYSQL *mysql , MYSQL_FIELD *mysql_fields ,
                            unsigned int fields ) ;
   MYSQL_RES *(*use_result)(MYSQL *mysql ) ;
   void (*fetch_lengths)(unsigned long *to , MYSQL_ROW column ,
                         unsigned int field_count ) ;
   void (*flush_use_result)(MYSQL *mysql ) ;
   MYSQL_FIELD *(*list_fields)(MYSQL *mysql ) ;
   my_bool (*read_prepare_result)(MYSQL *mysql , MYSQL_STMT *stmt ) ;
   int (*stmt_execute)(MYSQL_STMT *stmt ) ;
   int (*read_binary_rows)(MYSQL_STMT *stmt ) ;
   int (*unbuffered_fetch)(MYSQL *mysql , char **row ) ;
   void (*free_embedded_thd)(MYSQL *mysql ) ;
   char const   *(*read_statistics)(MYSQL *mysql ) ;
   my_bool (*next_result)(MYSQL *mysql ) ;
   int (*read_change_user_result)(MYSQL *mysql , char *buff ,
                                  char const   *passwd ) ;
   int (*read_rows_from_cursor)(MYSQL_STMT *stmt ) ;
};
#line 36 "../include/my_getopt.h"
enum get_opt_arg_type {
    NO_ARG = 0,
    OPT_ARG = 1,
    REQUIRED_ARG = 2
} ;
#line 38 "../include/my_getopt.h"
struct my_option {
   char *name ;
   int id ;
   char *comment ;
   gptr *value ;
   gptr *u_max_value ;
   char **str_values ;
   ulong var_type ;
   enum get_opt_arg_type arg_type ;
   longlong def_value ;
   longlong min_value ;
   longlong max_value ;
   longlong sub_size ;
   long block_size ;
   int app_type ;
};
extern time_t __dyc_random_typdef_time_t(unsigned int __dyc_exp ) ;
extern time_t __dyc_read_typdef_time_t(void) ;
extern void __dyc_print_typdef_time_t(time_t __dyc_thistype ) ;
extern TYPELIB *__dyc_random_ptr__typdef_TYPELIB(unsigned int __dyc_exp ) ;
extern TYPELIB *__dyc_read_ptr__typdef_TYPELIB(void) ;
extern void __dyc_print_ptr__typdef_TYPELIB(TYPELIB const   *__dyc_thistype ) ;
extern USED_MEM *__dyc_random_ptr__typdef_USED_MEM(unsigned int __dyc_exp ) ;
extern USED_MEM *__dyc_read_ptr__typdef_USED_MEM(void) ;
extern void __dyc_print_ptr__typdef_USED_MEM(USED_MEM const   *__dyc_thistype ) ;
extern FILE *__dyc_random_ptr__typdef_FILE(unsigned int __dyc_exp ) ;
extern FILE *__dyc_read_ptr__typdef_FILE(void) ;
extern void __dyc_print_ptr__typdef_FILE(FILE const   *__dyc_thistype ) ;
extern void *__dyc_random_ptr__typdef_Vio(unsigned int __dyc_exp ) ;
extern void *__dyc_read_ptr__typdef_Vio(void) ;
extern void __dyc_print_ptr__typdef_Vio(void const   * const  __dyc_thistype ) ;
extern MY_CHARSET_HANDLER __dyc_random_typdef_MY_CHARSET_HANDLER(unsigned int __dyc_exp ) ;
extern MY_CHARSET_HANDLER __dyc_read_typdef_MY_CHARSET_HANDLER(void) ;
extern void __dyc_print_typdef_MY_CHARSET_HANDLER(MY_CHARSET_HANDLER __dyc_thistype ) ;
extern _IO_FILE *__dyc_random_ptr__typdef__IO_FILE(unsigned int __dyc_exp ) ;
extern _IO_FILE *__dyc_read_ptr__typdef__IO_FILE(void) ;
extern void __dyc_print_ptr__typdef__IO_FILE(_IO_FILE const   *__dyc_thistype ) ;
extern MYSQL_RES *__dyc_random_ptr__typdef_MYSQL_RES(unsigned int __dyc_exp ) ;
extern MYSQL_RES *__dyc_read_ptr__typdef_MYSQL_RES(void) ;
extern void __dyc_print_ptr__typdef_MYSQL_RES(MYSQL_RES const   *__dyc_thistype ) ;
extern struct __anonstruct_my_match_t_37 __dyc_random_comp_82__anonstruct_my_match_t_37(unsigned int __dyc_exp ) ;
extern struct __anonstruct_my_match_t_37 __dyc_read_comp_82__anonstruct_my_match_t_37(void) ;
extern void __dyc_print_comp_82__anonstruct_my_match_t_37(struct __anonstruct_my_match_t_37 __dyc_thistype ) ;
extern struct st_mysql_methods __dyc_random_comp_110st_mysql_methods(unsigned int __dyc_exp ) ;
extern struct st_mysql_methods __dyc_read_comp_110st_mysql_methods(void) ;
extern void __dyc_print_comp_110st_mysql_methods(struct st_mysql_methods __dyc_thistype ) ;
extern my_bool *__dyc_random_ptr__typdef_my_bool(unsigned int __dyc_exp ) ;
extern my_bool *__dyc_read_ptr__typdef_my_bool(void) ;
extern void __dyc_print_ptr__typdef_my_bool(my_bool const   *__dyc_thistype ) ;
extern struct st_net __dyc_random_comp_98st_net(unsigned int __dyc_exp ) ;
extern struct st_net __dyc_read_comp_98st_net(void) ;
extern void __dyc_print_comp_98st_net(struct st_net __dyc_thistype ) ;
extern struct my_collation_handler_st __dyc_random_comp_84my_collation_handler_st(unsigned int __dyc_exp ) ;
extern struct my_collation_handler_st __dyc_read_comp_84my_collation_handler_st(void) ;
extern void __dyc_print_comp_84my_collation_handler_st(struct my_collation_handler_st __dyc_thistype ) ;
extern struct st_dynamic_string __dyc_random_comp_94st_dynamic_string(unsigned int __dyc_exp ) ;
extern struct st_dynamic_string __dyc_read_comp_94st_dynamic_string(void) ;
extern void __dyc_print_comp_94st_dynamic_string(struct st_dynamic_string __dyc_thistype ) ;
extern int *__dyc_random_ptr__int(unsigned int __dyc_exp ) ;
extern int *__dyc_read_ptr__int(void) ;
extern void __dyc_print_ptr__int(int const   *__dyc_thistype ) ;
extern size_t __dyc_random_typdef_size_t(unsigned int __dyc_exp ) ;
extern size_t __dyc_read_typdef_size_t(void) ;
extern void __dyc_print_typdef_size_t(size_t __dyc_thistype ) ;
extern struct st_list __dyc_random_comp_103st_list(unsigned int __dyc_exp ) ;
extern struct st_list __dyc_read_comp_103st_list(void) ;
extern void __dyc_print_comp_103st_list(struct st_list __dyc_thistype ) ;
extern uint16 __dyc_random_typdef_uint16(unsigned int __dyc_exp ) ;
extern uint16 __dyc_read_typdef_uint16(void) ;
extern void __dyc_print_typdef_uint16(uint16 __dyc_thistype ) ;
extern DYNAMIC_ARRAY __dyc_random_typdef_DYNAMIC_ARRAY(unsigned int __dyc_exp ) ;
extern DYNAMIC_ARRAY __dyc_read_typdef_DYNAMIC_ARRAY(void) ;
extern void __dyc_print_typdef_DYNAMIC_ARRAY(DYNAMIC_ARRAY __dyc_thistype ) ;
extern struct _IO_marker __dyc_random_comp_8_IO_marker(unsigned int __dyc_exp ) ;
extern struct _IO_marker __dyc_read_comp_8_IO_marker(void) ;
extern void __dyc_print_comp_8_IO_marker(struct _IO_marker __dyc_thistype ) ;
extern MY_UNICASE_INFO __dyc_random_typdef_MY_UNICASE_INFO(unsigned int __dyc_exp ) ;
extern MY_UNICASE_INFO __dyc_read_typdef_MY_UNICASE_INFO(void) ;
extern void __dyc_print_typdef_MY_UNICASE_INFO(MY_UNICASE_INFO __dyc_thistype ) ;
extern struct st_mysql_rows *__dyc_random_ptr__comp_105st_mysql_rows(unsigned int __dyc_exp ) ;
extern struct st_mysql_rows *__dyc_read_ptr__comp_105st_mysql_rows(void) ;
extern void __dyc_print_ptr__comp_105st_mysql_rows(struct st_mysql_rows  const  *__dyc_thistype ) ;
extern uint __dyc_random_typdef_uint(unsigned int __dyc_exp ) ;
extern uint __dyc_read_typdef_uint(void) ;
extern void __dyc_print_typdef_uint(uint __dyc_thistype ) ;
extern struct st_list *__dyc_random_ptr__comp_103st_list(unsigned int __dyc_exp ) ;
extern struct st_list *__dyc_read_ptr__comp_103st_list(void) ;
extern void __dyc_print_ptr__comp_103st_list(struct st_list  const  *__dyc_thistype ) ;
extern struct st_mem_root __dyc_random_comp_87st_mem_root(unsigned int __dyc_exp ) ;
extern struct st_mem_root __dyc_read_comp_87st_mem_root(void) ;
extern void __dyc_print_comp_87st_mem_root(struct st_mem_root __dyc_thistype ) ;
extern struct st_mysql_options __dyc_random_comp_108st_mysql_options(unsigned int __dyc_exp ) ;
extern struct st_mysql_options __dyc_read_comp_108st_mysql_options(void) ;
extern void __dyc_print_comp_108st_mysql_options(struct st_mysql_options __dyc_thistype ) ;
extern MYSQL_FIELD *__dyc_random_ptr__typdef_MYSQL_FIELD(unsigned int __dyc_exp ) ;
extern MYSQL_FIELD *__dyc_read_ptr__typdef_MYSQL_FIELD(void) ;
extern void __dyc_print_ptr__typdef_MYSQL_FIELD(MYSQL_FIELD const   *__dyc_thistype ) ;
extern CHARSET_INFO __dyc_random_typdef_CHARSET_INFO(unsigned int __dyc_exp ) ;
extern CHARSET_INFO __dyc_read_typdef_CHARSET_INFO(void) ;
extern void __dyc_print_typdef_CHARSET_INFO(CHARSET_INFO __dyc_thistype ) ;
extern MYSQL_ROWS *__dyc_random_ptr__typdef_MYSQL_ROWS(unsigned int __dyc_exp ) ;
extern MYSQL_ROWS *__dyc_read_ptr__typdef_MYSQL_ROWS(void) ;
extern void __dyc_print_ptr__typdef_MYSQL_ROWS(MYSQL_ROWS const   *__dyc_thistype ) ;
extern NET __dyc_random_typdef_NET(unsigned int __dyc_exp ) ;
extern NET __dyc_read_typdef_NET(void) ;
extern void __dyc_print_typdef_NET(NET __dyc_thistype ) ;
extern uint *__dyc_random_ptr__typdef_uint(unsigned int __dyc_exp ) ;
extern uint *__dyc_read_ptr__typdef_uint(void) ;
extern void __dyc_print_ptr__typdef_uint(uint const   *__dyc_thistype ) ;
extern struct st_mysql_methods *__dyc_random_ptr__comp_110st_mysql_methods(unsigned int __dyc_exp ) ;
extern struct st_mysql_methods *__dyc_read_ptr__comp_110st_mysql_methods(void) ;
extern void __dyc_print_ptr__comp_110st_mysql_methods(struct st_mysql_methods  const  *__dyc_thistype ) ;
extern CHARSET_INFO *__dyc_random_ptr__typdef_CHARSET_INFO(unsigned int __dyc_exp ) ;
extern CHARSET_INFO *__dyc_read_ptr__typdef_CHARSET_INFO(void) ;
extern void __dyc_print_ptr__typdef_CHARSET_INFO(CHARSET_INFO const   *__dyc_thistype ) ;
extern unsigned long *__dyc_random_ptr__long(unsigned int __dyc_exp ) ;
extern unsigned long *__dyc_read_ptr__long(void) ;
extern void __dyc_print_ptr__long(unsigned long const   *__dyc_thistype ) ;
extern __off_t __dyc_random_typdef___off_t(unsigned int __dyc_exp ) ;
extern __off_t __dyc_read_typdef___off_t(void) ;
extern void __dyc_print_typdef___off_t(__off_t __dyc_thistype ) ;
extern struct st_mysql_bind __dyc_random_comp_116st_mysql_bind(unsigned int __dyc_exp ) ;
extern struct st_mysql_bind __dyc_read_comp_116st_mysql_bind(void) ;
extern void __dyc_print_comp_116st_mysql_bind(struct st_mysql_bind __dyc_thistype ) ;
extern ulonglong __dyc_random_typdef_ulonglong(unsigned int __dyc_exp ) ;
extern ulonglong __dyc_read_typdef_ulonglong(void) ;
extern void __dyc_print_typdef_ulonglong(ulonglong __dyc_thistype ) ;
extern struct my_uni_idx_st __dyc_random_comp_81my_uni_idx_st(unsigned int __dyc_exp ) ;
extern struct my_uni_idx_st __dyc_read_comp_81my_uni_idx_st(void) ;
extern void __dyc_print_comp_81my_uni_idx_st(struct my_uni_idx_st __dyc_thistype ) ;
extern struct _IO_marker *__dyc_random_ptr__comp_8_IO_marker(unsigned int __dyc_exp ) ;
extern struct _IO_marker *__dyc_read_ptr__comp_8_IO_marker(void) ;
extern void __dyc_print_ptr__comp_8_IO_marker(struct _IO_marker  const  *__dyc_thistype ) ;
extern void *__dyc_random_ptr__fun_name_is_not_here(unsigned int __dyc_exp ) ;
extern void *__dyc_read_ptr__fun_name_is_not_here(void) ;
extern void __dyc_print_ptr__fun_name_is_not_here(void const   * const  __dyc_thistype ) ;
extern TYPELIB __dyc_random_typdef_TYPELIB(unsigned int __dyc_exp ) ;
extern TYPELIB __dyc_read_typdef_TYPELIB(void) ;
extern void __dyc_print_typdef_TYPELIB(TYPELIB __dyc_thistype ) ;
extern my_match_t __dyc_random_typdef_my_match_t(unsigned int __dyc_exp ) ;
extern my_match_t __dyc_read_typdef_my_match_t(void) ;
extern void __dyc_print_typdef_my_match_t(my_match_t __dyc_thistype ) ;
extern struct st_typelib __dyc_random_comp_88st_typelib(unsigned int __dyc_exp ) ;
extern struct st_typelib __dyc_read_comp_88st_typelib(void) ;
extern void __dyc_print_comp_88st_typelib(struct st_typelib __dyc_thistype ) ;
extern struct my_charset_handler_st __dyc_random_comp_85my_charset_handler_st(unsigned int __dyc_exp ) ;
extern struct my_charset_handler_st __dyc_read_comp_85my_charset_handler_st(void) ;
extern void __dyc_print_comp_85my_charset_handler_st(struct my_charset_handler_st __dyc_thistype ) ;
extern MYSQL_DATA __dyc_random_typdef_MYSQL_DATA(unsigned int __dyc_exp ) ;
extern MYSQL_DATA __dyc_read_typdef_MYSQL_DATA(void) ;
extern void __dyc_print_typdef_MYSQL_DATA(MYSQL_DATA __dyc_thistype ) ;
extern uint16 **__dyc_random_ptr__ptr__typdef_uint16(unsigned int __dyc_exp ) ;
extern uint16 **__dyc_read_ptr__ptr__typdef_uint16(void) ;
extern void __dyc_print_ptr__ptr__typdef_uint16(uint16 * const  *__dyc_thistype ) ;
extern MEM_ROOT __dyc_random_typdef_MEM_ROOT(unsigned int __dyc_exp ) ;
extern MEM_ROOT __dyc_read_typdef_MEM_ROOT(void) ;
extern void __dyc_print_typdef_MEM_ROOT(MEM_ROOT __dyc_thistype ) ;
extern MYSQL_ROW __dyc_random_typdef_MYSQL_ROW(unsigned int __dyc_exp ) ;
extern MYSQL_ROW __dyc_read_typdef_MYSQL_ROW(void) ;
extern void __dyc_print_typdef_MYSQL_ROW(MYSQL_ROW __dyc_thistype ) ;
extern my_bool __dyc_random_typdef_my_bool(unsigned int __dyc_exp ) ;
extern my_bool __dyc_read_typdef_my_bool(void) ;
extern void __dyc_print_typdef_my_bool(my_bool __dyc_thistype ) ;
extern void *__dyc_random_ptr__void(unsigned int __dyc_exp ) ;
extern void *__dyc_read_ptr__void(void) ;
extern void __dyc_print_ptr__void(void const   * const  __dyc_thistype ) ;
extern DYNAMIC_STRING __dyc_random_typdef_DYNAMIC_STRING(unsigned int __dyc_exp ) ;
extern DYNAMIC_STRING __dyc_read_typdef_DYNAMIC_STRING(void) ;
extern void __dyc_print_typdef_DYNAMIC_STRING(DYNAMIC_STRING __dyc_thistype ) ;
extern MYSQL_STMT *__dyc_random_ptr__typdef_MYSQL_STMT(unsigned int __dyc_exp ) ;
extern MYSQL_STMT *__dyc_read_ptr__typdef_MYSQL_STMT(void) ;
extern void __dyc_print_ptr__typdef_MYSQL_STMT(MYSQL_STMT const   *__dyc_thistype ) ;
extern struct st_mysql_parameters __dyc_random_comp_115st_mysql_parameters(unsigned int __dyc_exp ) ;
extern struct st_mysql_parameters __dyc_read_comp_115st_mysql_parameters(void) ;
extern void __dyc_print_comp_115st_mysql_parameters(struct st_mysql_parameters __dyc_thistype ) ;
extern char *__dyc_random_ptr__char(unsigned int __dyc_exp ) ;
extern char *__dyc_read_ptr__char(void) ;
extern void __dyc_print_ptr__char(char const   *__dyc_thistype ) ;
extern MEM_ROOT *__dyc_random_ptr__typdef_MEM_ROOT(unsigned int __dyc_exp ) ;
extern MEM_ROOT *__dyc_read_ptr__typdef_MEM_ROOT(void) ;
extern void __dyc_print_ptr__typdef_MEM_ROOT(MEM_ROOT const   *__dyc_thistype ) ;
extern longlong __dyc_random_typdef_longlong(unsigned int __dyc_exp ) ;
extern longlong __dyc_read_typdef_longlong(void) ;
extern void __dyc_print_typdef_longlong(longlong __dyc_thistype ) ;
extern MYSQL_BIND *__dyc_random_ptr__typdef_MYSQL_BIND(unsigned int __dyc_exp ) ;
extern MYSQL_BIND *__dyc_read_ptr__typdef_MYSQL_BIND(void) ;
extern void __dyc_print_ptr__typdef_MYSQL_BIND(MYSQL_BIND const   *__dyc_thistype ) ;
extern struct unicase_info_st __dyc_random_comp_80unicase_info_st(unsigned int __dyc_exp ) ;
extern struct unicase_info_st __dyc_read_comp_80unicase_info_st(void) ;
extern void __dyc_print_comp_80unicase_info_st(struct unicase_info_st __dyc_thistype ) ;
extern struct st_mysql_stmt *__dyc_random_ptr__comp_111st_mysql_stmt(unsigned int __dyc_exp ) ;
extern struct st_mysql_stmt *__dyc_read_ptr__comp_111st_mysql_stmt(void) ;
extern void __dyc_print_ptr__comp_111st_mysql_stmt(struct st_mysql_stmt  const  *__dyc_thistype ) ;
extern ulong __dyc_random_typdef_ulong(unsigned int __dyc_exp ) ;
extern ulong __dyc_read_typdef_ulong(void) ;
extern void __dyc_print_typdef_ulong(ulong __dyc_thistype ) ;
extern __time_t __dyc_random_typdef___time_t(unsigned int __dyc_exp ) ;
extern __time_t __dyc_read_typdef___time_t(void) ;
extern void __dyc_print_typdef___time_t(__time_t __dyc_thistype ) ;
extern struct st_mysql __dyc_random_comp_112st_mysql(unsigned int __dyc_exp ) ;
extern struct st_mysql __dyc_read_comp_112st_mysql(void) ;
extern void __dyc_print_comp_112st_mysql(struct st_mysql __dyc_thistype ) ;
extern MYSQL_FIELD __dyc_random_typdef_MYSQL_FIELD(unsigned int __dyc_exp ) ;
extern MYSQL_FIELD __dyc_read_typdef_MYSQL_FIELD(void) ;
extern void __dyc_print_typdef_MYSQL_FIELD(MYSQL_FIELD __dyc_thistype ) ;
extern void *__dyc_random_ptr__comp_106embedded_query_result(unsigned int __dyc_exp ) ;
extern void *__dyc_read_ptr__comp_106embedded_query_result(void) ;
extern void __dyc_print_ptr__comp_106embedded_query_result(void const   * const  __dyc_thistype ) ;
extern myf __dyc_random_typdef_myf(unsigned int __dyc_exp ) ;
extern myf __dyc_read_typdef_myf(void) ;
extern void __dyc_print_typdef_myf(myf __dyc_thistype ) ;
extern my_socket __dyc_random_typdef_my_socket(unsigned int __dyc_exp ) ;
extern my_socket __dyc_read_typdef_my_socket(void) ;
extern void __dyc_print_typdef_my_socket(my_socket __dyc_thistype ) ;
extern MYSQL_PARAMETERS __dyc_random_typdef_MYSQL_PARAMETERS(unsigned int __dyc_exp ) ;
extern MYSQL_PARAMETERS __dyc_read_typdef_MYSQL_PARAMETERS(void) ;
extern void __dyc_print_typdef_MYSQL_PARAMETERS(MYSQL_PARAMETERS __dyc_thistype ) ;
extern struct _IO_FILE *__dyc_random_ptr__comp_2_IO_FILE(unsigned int __dyc_exp ) ;
extern struct _IO_FILE *__dyc_read_ptr__comp_2_IO_FILE(void) ;
extern void __dyc_print_ptr__comp_2_IO_FILE(struct _IO_FILE  const  *__dyc_thistype ) ;
extern MYSQL __dyc_random_typdef_MYSQL(unsigned int __dyc_exp ) ;
extern MYSQL __dyc_read_typdef_MYSQL(void) ;
extern void __dyc_print_typdef_MYSQL(MYSQL __dyc_thistype ) ;
extern MY_UNI_IDX *__dyc_random_ptr__typdef_MY_UNI_IDX(unsigned int __dyc_exp ) ;
extern MY_UNI_IDX *__dyc_read_ptr__typdef_MY_UNI_IDX(void) ;
extern void __dyc_print_ptr__typdef_MY_UNI_IDX(MY_UNI_IDX const   *__dyc_thistype ) ;
extern struct my_option *__dyc_random_ptr__comp_117my_option(unsigned int __dyc_exp ) ;
extern struct my_option *__dyc_read_ptr__comp_117my_option(void) ;
extern void __dyc_print_ptr__comp_117my_option(struct my_option  const  *__dyc_thistype ) ;
extern my_string __dyc_random_typdef_my_string(unsigned int __dyc_exp ) ;
extern my_string __dyc_read_typdef_my_string(void) ;
extern void __dyc_print_typdef_my_string(my_string __dyc_thistype ) ;
extern MYSQL_ROW *__dyc_random_ptr__typdef_MYSQL_ROW(unsigned int __dyc_exp ) ;
extern MYSQL_ROW *__dyc_read_ptr__typdef_MYSQL_ROW(void) ;
extern void __dyc_print_ptr__typdef_MYSQL_ROW(MYSQL_ROW const   *__dyc_thistype ) ;
extern struct st_mysql_res __dyc_random_comp_113st_mysql_res(unsigned int __dyc_exp ) ;
extern struct st_mysql_res __dyc_read_comp_113st_mysql_res(void) ;
extern void __dyc_print_comp_113st_mysql_res(struct st_mysql_res __dyc_thistype ) ;
extern MYSQL_PARAMETERS *__dyc_random_ptr__typdef_MYSQL_PARAMETERS(unsigned int __dyc_exp ) ;
extern MYSQL_PARAMETERS *__dyc_read_ptr__typdef_MYSQL_PARAMETERS(void) ;
extern void __dyc_print_ptr__typdef_MYSQL_PARAMETERS(MYSQL_PARAMETERS const   *__dyc_thistype ) ;
extern gptr __dyc_random_typdef_gptr(unsigned int __dyc_exp ) ;
extern gptr __dyc_read_typdef_gptr(void) ;
extern void __dyc_print_typdef_gptr(gptr __dyc_thistype ) ;
extern MY_CHARSET_HANDLER *__dyc_random_ptr__typdef_MY_CHARSET_HANDLER(unsigned int __dyc_exp ) ;
extern MY_CHARSET_HANDLER *__dyc_read_ptr__typdef_MY_CHARSET_HANDLER(void) ;
extern void __dyc_print_ptr__typdef_MY_CHARSET_HANDLER(MY_CHARSET_HANDLER const   *__dyc_thistype ) ;
extern struct st_mysql_rows __dyc_random_comp_105st_mysql_rows(unsigned int __dyc_exp ) ;
extern struct st_mysql_rows __dyc_read_comp_105st_mysql_rows(void) ;
extern void __dyc_print_comp_105st_mysql_rows(struct st_mysql_rows __dyc_thistype ) ;
extern MYSQL_RES **__dyc_random_ptr__ptr__typdef_MYSQL_RES(unsigned int __dyc_exp ) ;
extern MYSQL_RES **__dyc_read_ptr__ptr__typdef_MYSQL_RES(void) ;
extern void __dyc_print_ptr__ptr__typdef_MYSQL_RES(MYSQL_RES * const  *__dyc_thistype ) ;
extern uchar __dyc_random_typdef_uchar(unsigned int __dyc_exp ) ;
extern uchar __dyc_read_typdef_uchar(void) ;
extern void __dyc_print_typdef_uchar(uchar __dyc_thistype ) ;
extern struct st_used_mem *__dyc_random_ptr__comp_86st_used_mem(unsigned int __dyc_exp ) ;
extern struct st_used_mem *__dyc_read_ptr__comp_86st_used_mem(void) ;
extern void __dyc_print_ptr__comp_86st_used_mem(struct st_used_mem  const  *__dyc_thistype ) ;
extern HASH __dyc_random_typdef_HASH(unsigned int __dyc_exp ) ;
extern HASH __dyc_read_typdef_HASH(void) ;
extern void __dyc_print_typdef_HASH(HASH __dyc_thistype ) ;
extern LIST __dyc_random_typdef_LIST(unsigned int __dyc_exp ) ;
extern LIST __dyc_read_typdef_LIST(void) ;
extern void __dyc_print_typdef_LIST(LIST __dyc_thistype ) ;
extern MYSQL_ROWS __dyc_random_typdef_MYSQL_ROWS(unsigned int __dyc_exp ) ;
extern MYSQL_ROWS __dyc_read_typdef_MYSQL_ROWS(void) ;
extern void __dyc_print_typdef_MYSQL_ROWS(MYSQL_ROWS __dyc_thistype ) ;
extern gptr *__dyc_random_ptr__typdef_gptr(unsigned int __dyc_exp ) ;
extern gptr *__dyc_read_ptr__typdef_gptr(void) ;
extern void __dyc_print_ptr__typdef_gptr(gptr const   *__dyc_thistype ) ;
extern ulong *__dyc_random_ptr__typdef_ulong(unsigned int __dyc_exp ) ;
extern ulong *__dyc_read_ptr__typdef_ulong(void) ;
extern void __dyc_print_ptr__typdef_ulong(ulong const   *__dyc_thistype ) ;
extern struct charset_info_st *__dyc_random_ptr__comp_83charset_info_st(unsigned int __dyc_exp ) ;
extern struct charset_info_st *__dyc_read_ptr__comp_83charset_info_st(void) ;
extern void __dyc_print_ptr__comp_83charset_info_st(struct charset_info_st  const  *__dyc_thistype ) ;
extern __off64_t __dyc_random_typdef___off64_t(unsigned int __dyc_exp ) ;
extern __off64_t __dyc_read_typdef___off64_t(void) ;
extern void __dyc_print_typdef___off64_t(__off64_t __dyc_thistype ) ;
extern char ***__dyc_random_ptr__ptr__ptr__char(unsigned int __dyc_exp ) ;
extern char ***__dyc_read_ptr__ptr__ptr__char(void) ;
extern void __dyc_print_ptr__ptr__ptr__char(char ** const  *__dyc_thistype ) ;
extern struct st_mysql *__dyc_random_ptr__comp_112st_mysql(unsigned int __dyc_exp ) ;
extern struct st_mysql *__dyc_read_ptr__comp_112st_mysql(void) ;
extern void __dyc_print_ptr__comp_112st_mysql(struct st_mysql  const  *__dyc_thistype ) ;
extern uint16 *__dyc_random_ptr__typdef_uint16(unsigned int __dyc_exp ) ;
extern uint16 *__dyc_read_ptr__typdef_uint16(void) ;
extern void __dyc_print_ptr__typdef_uint16(uint16 const   *__dyc_thistype ) ;
extern HASH *__dyc_random_ptr__typdef_HASH(unsigned int __dyc_exp ) ;
extern HASH *__dyc_read_ptr__typdef_HASH(void) ;
extern void __dyc_print_ptr__typdef_HASH(HASH const   *__dyc_thistype ) ;
extern LIST *__dyc_random_ptr__typdef_LIST(unsigned int __dyc_exp ) ;
extern LIST *__dyc_read_ptr__typdef_LIST(void) ;
extern void __dyc_print_ptr__typdef_LIST(LIST const   *__dyc_thistype ) ;
extern MYSQL *__dyc_random_ptr__typdef_MYSQL(unsigned int __dyc_exp ) ;
extern MYSQL *__dyc_read_ptr__typdef_MYSQL(void) ;
extern void __dyc_print_ptr__typdef_MYSQL(MYSQL const   *__dyc_thistype ) ;
extern uchar *__dyc_random_ptr__typdef_uchar(unsigned int __dyc_exp ) ;
extern uchar *__dyc_read_ptr__typdef_uchar(void) ;
extern void __dyc_print_ptr__typdef_uchar(uchar const   *__dyc_thistype ) ;
extern struct st_mysql_field __dyc_random_comp_104st_mysql_field(unsigned int __dyc_exp ) ;
extern struct st_mysql_field __dyc_read_comp_104st_mysql_field(void) ;
extern void __dyc_print_comp_104st_mysql_field(struct st_mysql_field __dyc_thistype ) ;
extern my_ulonglong __dyc_random_typdef_my_ulonglong(unsigned int __dyc_exp ) ;
extern my_ulonglong __dyc_read_typdef_my_ulonglong(void) ;
extern void __dyc_print_typdef_my_ulonglong(my_ulonglong __dyc_thistype ) ;
extern MY_UNICASE_INFO *__dyc_random_ptr__typdef_MY_UNICASE_INFO(unsigned int __dyc_exp ) ;
extern MY_UNICASE_INFO *__dyc_read_ptr__typdef_MY_UNICASE_INFO(void) ;
extern void __dyc_print_ptr__typdef_MY_UNICASE_INFO(MY_UNICASE_INFO const   *__dyc_thistype ) ;
extern MYSQL_STMT __dyc_random_typdef_MYSQL_STMT(unsigned int __dyc_exp ) ;
extern MYSQL_STMT __dyc_read_typdef_MYSQL_STMT(void) ;
extern void __dyc_print_typdef_MYSQL_STMT(MYSQL_STMT __dyc_thistype ) ;
extern struct _IO_FILE __dyc_random_comp_2_IO_FILE(unsigned int __dyc_exp ) ;
extern struct _IO_FILE __dyc_read_comp_2_IO_FILE(void) ;
extern void __dyc_print_comp_2_IO_FILE(struct _IO_FILE __dyc_thistype ) ;
extern MYSQL_RES __dyc_random_typdef_MYSQL_RES(unsigned int __dyc_exp ) ;
extern MYSQL_RES __dyc_read_typdef_MYSQL_RES(void) ;
extern void __dyc_print_typdef_MYSQL_RES(MYSQL_RES __dyc_thistype ) ;
extern struct st_mysql_data __dyc_random_comp_107st_mysql_data(unsigned int __dyc_exp ) ;
extern struct st_mysql_data __dyc_read_comp_107st_mysql_data(void) ;
extern void __dyc_print_comp_107st_mysql_data(struct st_mysql_data __dyc_thistype ) ;
extern struct st_mysql_bind *__dyc_random_ptr__comp_116st_mysql_bind(unsigned int __dyc_exp ) ;
extern struct st_mysql_bind *__dyc_read_ptr__comp_116st_mysql_bind(void) ;
extern void __dyc_print_ptr__comp_116st_mysql_bind(struct st_mysql_bind  const  *__dyc_thistype ) ;
extern MYSQL_BIND __dyc_random_typdef_MYSQL_BIND(unsigned int __dyc_exp ) ;
extern MYSQL_BIND __dyc_read_typdef_MYSQL_BIND(void) ;
extern void __dyc_print_typdef_MYSQL_BIND(MYSQL_BIND __dyc_thistype ) ;
extern void *__dyc_random_ptr__typdef__IO_lock_t(unsigned int __dyc_exp ) ;
extern void *__dyc_read_ptr__typdef__IO_lock_t(void) ;
extern void __dyc_print_ptr__typdef__IO_lock_t(void const   * const  __dyc_thistype ) ;
extern my_match_t *__dyc_random_ptr__typdef_my_match_t(unsigned int __dyc_exp ) ;
extern my_match_t *__dyc_read_ptr__typdef_my_match_t(void) ;
extern void __dyc_print_ptr__typdef_my_match_t(my_match_t const   *__dyc_thistype ) ;
extern MY_UNICASE_INFO **__dyc_random_ptr__ptr__typdef_MY_UNICASE_INFO(unsigned int __dyc_exp ) ;
extern MY_UNICASE_INFO **__dyc_read_ptr__ptr__typdef_MY_UNICASE_INFO(void) ;
extern void __dyc_print_ptr__ptr__typdef_MY_UNICASE_INFO(MY_UNICASE_INFO * const  *__dyc_thistype ) ;
extern struct st_mysql_stmt __dyc_random_comp_111st_mysql_stmt(unsigned int __dyc_exp ) ;
extern struct st_mysql_stmt __dyc_read_comp_111st_mysql_stmt(void) ;
extern void __dyc_print_comp_111st_mysql_stmt(struct st_mysql_stmt __dyc_thistype ) ;
extern NET *__dyc_random_ptr__typdef_NET(unsigned int __dyc_exp ) ;
extern NET *__dyc_read_ptr__typdef_NET(void) ;
extern void __dyc_print_ptr__typdef_NET(NET const   *__dyc_thistype ) ;
extern MY_COLLATION_HANDLER __dyc_random_typdef_MY_COLLATION_HANDLER(unsigned int __dyc_exp ) ;
extern MY_COLLATION_HANDLER __dyc_read_typdef_MY_COLLATION_HANDLER(void) ;
extern void __dyc_print_typdef_MY_COLLATION_HANDLER(MY_COLLATION_HANDLER __dyc_thistype ) ;
extern MYSQL_DATA *__dyc_random_ptr__typdef_MYSQL_DATA(unsigned int __dyc_exp ) ;
extern MYSQL_DATA *__dyc_read_ptr__typdef_MYSQL_DATA(void) ;
extern void __dyc_print_ptr__typdef_MYSQL_DATA(MYSQL_DATA const   *__dyc_thistype ) ;
extern struct st_dynamic_array __dyc_random_comp_92st_dynamic_array(unsigned int __dyc_exp ) ;
extern struct st_dynamic_array __dyc_read_comp_92st_dynamic_array(void) ;
extern void __dyc_print_comp_92st_dynamic_array(struct st_dynamic_array __dyc_thistype ) ;
extern byte __dyc_random_typdef_byte(unsigned int __dyc_exp ) ;
extern byte __dyc_read_typdef_byte(void) ;
extern void __dyc_print_typdef_byte(byte __dyc_thistype ) ;
extern struct st_used_mem __dyc_random_comp_86st_used_mem(unsigned int __dyc_exp ) ;
extern struct st_used_mem __dyc_read_comp_86st_used_mem(void) ;
extern void __dyc_print_comp_86st_used_mem(struct st_used_mem __dyc_thistype ) ;
extern void **__dyc_random_ptr__ptr__void(unsigned int __dyc_exp ) ;
extern void **__dyc_read_ptr__ptr__void(void) ;
extern void __dyc_print_ptr__ptr__void(void * const  *__dyc_thistype ) ;
extern pchar __dyc_random_typdef_pchar(unsigned int __dyc_exp ) ;
extern pchar __dyc_read_typdef_pchar(void) ;
extern void __dyc_print_typdef_pchar(pchar __dyc_thistype ) ;
extern USED_MEM __dyc_random_typdef_USED_MEM(unsigned int __dyc_exp ) ;
extern USED_MEM __dyc_read_typdef_USED_MEM(void) ;
extern void __dyc_print_typdef_USED_MEM(USED_MEM __dyc_thistype ) ;
extern FILE __dyc_random_typdef_FILE(unsigned int __dyc_exp ) ;
extern FILE __dyc_read_typdef_FILE(void) ;
extern void __dyc_print_typdef_FILE(FILE __dyc_thistype ) ;
extern DYNAMIC_STRING *__dyc_random_ptr__typdef_DYNAMIC_STRING(unsigned int __dyc_exp ) ;
extern DYNAMIC_STRING *__dyc_read_ptr__typdef_DYNAMIC_STRING(void) ;
extern void __dyc_print_ptr__typdef_DYNAMIC_STRING(DYNAMIC_STRING const   *__dyc_thistype ) ;
extern MY_COLLATION_HANDLER *__dyc_random_ptr__typdef_MY_COLLATION_HANDLER(unsigned int __dyc_exp ) ;
extern MY_COLLATION_HANDLER *__dyc_read_ptr__typdef_MY_COLLATION_HANDLER(void) ;
extern void __dyc_print_ptr__typdef_MY_COLLATION_HANDLER(MY_COLLATION_HANDLER const   *__dyc_thistype ) ;
extern struct charset_info_st __dyc_random_comp_83charset_info_st(unsigned int __dyc_exp ) ;
extern struct charset_info_st __dyc_read_comp_83charset_info_st(void) ;
extern void __dyc_print_comp_83charset_info_st(struct charset_info_st __dyc_thistype ) ;
extern _IO_FILE __dyc_random_typdef__IO_FILE(unsigned int __dyc_exp ) ;
extern _IO_FILE __dyc_read_typdef__IO_FILE(void) ;
extern void __dyc_print_typdef__IO_FILE(_IO_FILE __dyc_thistype ) ;
extern struct st_dynamic_array *__dyc_random_ptr__comp_92st_dynamic_array(unsigned int __dyc_exp ) ;
extern struct st_dynamic_array *__dyc_read_ptr__comp_92st_dynamic_array(void) ;
extern void __dyc_print_ptr__comp_92st_dynamic_array(struct st_dynamic_array  const  *__dyc_thistype ) ;
extern MY_UNI_IDX __dyc_random_typdef_MY_UNI_IDX(unsigned int __dyc_exp ) ;
extern MY_UNI_IDX __dyc_read_typdef_MY_UNI_IDX(void) ;
extern void __dyc_print_typdef_MY_UNI_IDX(MY_UNI_IDX __dyc_thistype ) ;
extern char **__dyc_random_ptr__ptr__char(unsigned int __dyc_exp ) ;
extern char **__dyc_read_ptr__ptr__char(void) ;
extern void __dyc_print_ptr__ptr__char(char * const  *__dyc_thistype ) ;
extern struct my_option __dyc_random_comp_117my_option(unsigned int __dyc_exp ) ;
extern struct my_option __dyc_read_comp_117my_option(void) ;
extern void __dyc_print_comp_117my_option(struct my_option __dyc_thistype ) ;
extern struct st_hash __dyc_random_comp_96st_hash(unsigned int __dyc_exp ) ;
extern struct st_hash __dyc_read_comp_96st_hash(void) ;
extern void __dyc_print_comp_96st_hash(struct st_hash __dyc_thistype ) ;
extern byte *__dyc_random_ptr__typdef_byte(unsigned int __dyc_exp ) ;
extern byte *__dyc_read_ptr__typdef_byte(void) ;
extern void __dyc_print_ptr__typdef_byte(byte const   *__dyc_thistype ) ;
extern MYSQL_FIELD_OFFSET __dyc_random_typdef_MYSQL_FIELD_OFFSET(unsigned int __dyc_exp ) ;
extern MYSQL_FIELD_OFFSET __dyc_read_typdef_MYSQL_FIELD_OFFSET(void) ;
extern void __dyc_print_typdef_MYSQL_FIELD_OFFSET(MYSQL_FIELD_OFFSET __dyc_thistype ) ;
