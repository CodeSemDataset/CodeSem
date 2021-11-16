#line 141 "/usr/include/x86_64-linux-gnu/bits/types.h"
typedef long __off_t;
#line 142 "/usr/include/x86_64-linux-gnu/bits/types.h"
typedef long __off64_t;
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
#line 45 "/usr/include/stdio.h"
struct _IO_FILE;
#line 45
struct _IO_FILE;
#line 49 "/usr/include/stdio.h"
typedef struct _IO_FILE FILE;
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
#line 151 "/usr/include/x86_64-linux-gnu/sys/types.h"
typedef unsigned long ulong;
#line 903 "./../../include/my_global.h"
typedef long longlong;
#line 187 "./../include/univ.i"
typedef unsigned long ulint;
#line 195 "./../include/univ.i"
typedef longlong ib_longlong;
#line 33 "./../include/os0thread.h"
typedef pthread_t os_thread_t;
#line 34 "./../include/os0thread.h"
typedef os_thread_t os_thread_id_t;
#line 20 "./../include/ut0byte.h"
struct dulint_struct;
#line 20 "./../include/ut0byte.h"
typedef struct dulint_struct dulint;
#line 21 "./../include/ut0byte.h"
struct dulint_struct {
   ulint high ;
   ulint low ;
};
#line 13 "./../include/sync0types.h"
struct mutex_struct;
#line 13 "./../include/sync0types.h"
typedef struct mutex_struct ib_mutex_t;
#line 31 "./../include/os0sync.h"
typedef pthread_mutex_t os_fast_mutex_t;
#line 33
struct os_event_struct;
#line 33 "./../include/os0sync.h"
typedef struct os_event_struct os_event_struct_t;
#line 34 "./../include/os0sync.h"
typedef os_event_struct_t *os_event_t;
#line 36 "./../include/os0sync.h"
struct __anonstruct_os_event_list_51 {
   os_event_struct_t *prev ;
   os_event_struct_t *next ;
};
#line 36 "./../include/os0sync.h"
struct os_event_struct {
   os_fast_mutex_t os_mutex ;
   ulint is_set ;
   ib_longlong signal_count ;
   pthread_cond_t cond_var ;
   struct __anonstruct_os_event_list_51 os_event_list ;
};
#line 461 "./../include/sync0sync.h"
struct __anonstruct_list_52 {
   ib_mutex_t *prev ;
   ib_mutex_t *next ;
};
#line 461 "./../include/sync0sync.h"
struct mutex_struct {
   os_event_t event ;
   ulint lock_word ;
   os_fast_mutex_t os_fast_mutex ;
   ulint waiters ;
   struct __anonstruct_list_52 list ;
   ulint level ;
   char *cfile_name ;
   ulint cline ;
   ulint magic_n ;
   ulong count_os_wait ;
};
#line 24 "./../include/mem0mem.h"
struct mem_block_info_struct;
#line 24 "./../include/mem0mem.h"
typedef struct mem_block_info_struct mem_block_info_t;
#line 28 "./../include/mem0mem.h"
typedef mem_block_info_t mem_block_t;
#line 31 "./../include/mem0mem.h"
typedef mem_block_t mem_heap_t;
#line 328 "./../include/mem0mem.h"
struct __anonstruct_base_54 {
   ulint count ;
   mem_block_t *start ;
   mem_block_t *end ;
};
#line 328 "./../include/mem0mem.h"
struct __anonstruct_list_55 {
   mem_block_t *prev ;
   mem_block_t *next ;
};
#line 328 "./../include/mem0mem.h"
struct mem_block_info_struct {
   ulint magic_n ;
   char file_name[8] ;
   ulint line ;
   struct __anonstruct_base_54 base ;
   struct __anonstruct_list_55 list ;
   ulint len ;
   ulint type ;
   ulint init_block ;
   ulint free ;
   ulint start ;
   unsigned char *free_block ;
};
#line 16 "./../include/dyn0dyn.h"
struct dyn_block_struct;
#line 16 "./../include/dyn0dyn.h"
typedef struct dyn_block_struct dyn_block_t;
#line 17 "./../include/dyn0dyn.h"
typedef dyn_block_t dyn_array_t;
#line 142 "./../include/dyn0dyn.h"
struct __anonstruct_base_58 {
   ulint count ;
   dyn_block_t *start ;
   dyn_block_t *end ;
};
#line 142 "./../include/dyn0dyn.h"
struct __anonstruct_list_59 {
   dyn_block_t *prev ;
   dyn_block_t *next ;
};
#line 142 "./../include/dyn0dyn.h"
struct dyn_block_struct {
   mem_heap_t *heap ;
   ulint used ;
   unsigned char data[512] ;
   struct __anonstruct_base_58 base ;
   struct __anonstruct_list_59 list ;
};
#line 12 "./../include/buf0types.h"
struct buf_block_struct;
#line 12 "./../include/buf0types.h"
typedef struct buf_block_struct buf_block_t;
#line 13
struct buf_pool_struct;
#line 13 "./../include/buf0types.h"
typedef struct buf_pool_struct buf_pool_t;
#line 16 "./../include/buf0types.h"
typedef unsigned char buf_frame_t;
#line 27 "./../include/sync0rw.h"
struct rw_lock_struct;
#line 27 "./../include/sync0rw.h"
typedef struct rw_lock_struct rw_lock_t;
#line 419 "./../include/sync0rw.h"
struct __anonstruct_list_61 {
   rw_lock_t *prev ;
   rw_lock_t *next ;
};
#line 419 "./../include/sync0rw.h"
struct rw_lock_struct {
   os_event_t event ;
   ulint reader_count ;
   ulint writer ;
   os_thread_id_t writer_thread ;
   ulint writer_count ;
   ib_mutex_t mutex ;
   ulint pass ;
   ulint waiters ;
   ulint writer_is_wait_ex ;
   struct __anonstruct_list_61 list ;
   ulint level ;
   char *cfile_name ;
   ulint cline ;
   char *last_s_file_name ;
   char *last_x_file_name ;
   ulint last_s_line ;
   ulint last_x_line ;
   ulint magic_n ;
};
#line 12 "./../include/mtr0types.h"
struct mtr_struct;
#line 12 "./../include/mtr0types.h"
typedef struct mtr_struct mtr_t;
#line 17 "./../include/page0types.h"
typedef unsigned char ib_page_t;
#line 315 "./../include/mtr0mtr.h"
struct mtr_struct {
   ulint state ;
   dyn_array_t memo ;
   dyn_array_t log ;
   ulint modifications ;
   ulint n_log_recs ;
   ulint log_mode ;
   dulint start_lsn ;
   dulint end_lsn ;
   ulint magic_n ;
};
#line 12 "./../include/dict0types.h"
struct dict_sys_struct;
#line 12 "./../include/dict0types.h"
typedef struct dict_sys_struct dict_sys_t;
#line 13
struct dict_col_struct;
#line 13 "./../include/dict0types.h"
typedef struct dict_col_struct dict_col_t;
#line 14
struct dict_field_struct;
#line 14 "./../include/dict0types.h"
typedef struct dict_field_struct dict_field_t;
#line 15
struct dict_index_struct;
#line 15 "./../include/dict0types.h"
typedef struct dict_index_struct dict_index_t;
#line 16
struct dict_tree_struct;
#line 16 "./../include/dict0types.h"
typedef struct dict_tree_struct dict_tree_t;
#line 17
struct dict_table_struct;
#line 17 "./../include/dict0types.h"
typedef struct dict_table_struct dict_table_t;
#line 18
struct dict_foreign_struct;
#line 18 "./../include/dict0types.h"
typedef struct dict_foreign_struct dict_foreign_t;
#line 16 "./../include/hash0hash.h"
struct hash_table_struct;
#line 16 "./../include/hash0hash.h"
typedef struct hash_table_struct hash_table_t;
#line 17
struct hash_cell_struct;
#line 17 "./../include/hash0hash.h"
typedef struct hash_cell_struct hash_cell_t;
#line 19 "./../include/hash0hash.h"
typedef void *hash_node_t;
#line 305 "./../include/hash0hash.h"
struct hash_cell_struct {
   void *node ;
};
#line 310 "./../include/hash0hash.h"
struct hash_table_struct {
   ulint adaptive ;
   ulint n_cells ;
   hash_cell_t *array ;
   ulint n_mutexes ;
   ib_mutex_t *mutexes ;
   mem_heap_t **heaps ;
   mem_heap_t *heap ;
   ulint magic_n ;
};
#line 27 "./../include/os0proc.h"
typedef ulint os_awe_t;
#line 710 "./../include/buf0buf.h"
struct __anonstruct_flush_list_62 {
   buf_block_t *prev ;
   buf_block_t *next ;
};
#line 710 "./../include/buf0buf.h"
struct __anonstruct_free_63 {
   buf_block_t *prev ;
   buf_block_t *next ;
};
#line 710 "./../include/buf0buf.h"
struct __anonstruct_LRU_64 {
   buf_block_t *prev ;
   buf_block_t *next ;
};
#line 710 "./../include/buf0buf.h"
struct __anonstruct_awe_LRU_free_mapped_65 {
   buf_block_t *prev ;
   buf_block_t *next ;
};
#line 710 "./../include/buf0buf.h"
struct buf_block_struct {
   ulint magic_n ;
   ulint state ;
   unsigned char *frame ;
   os_awe_t *awe_info ;
   ulint space ;
   ulint offset ;
   ulint lock_hash_val ;
   ib_mutex_t mutex ;
   rw_lock_t lock ;
   buf_block_t *hash ;
   ulint check_index_page_at_flush ;
   struct __anonstruct_flush_list_62 flush_list ;
   dulint newest_modification ;
   dulint oldest_modification ;
   ulint flush_type ;
   struct __anonstruct_free_63 free ;
   ulint in_free_list ;
   struct __anonstruct_LRU_64 LRU ;
   struct __anonstruct_awe_LRU_free_mapped_65 awe_LRU_free_mapped ;
   ulint in_LRU_list ;
   ulint LRU_position ;
   ulint freed_page_clock ;
   ulint old ;
   ulint accessed ;
   ulint buf_fix_count ;
   ulint io_fix ;
   dulint modify_clock ;
   ulint n_hash_helps ;
   ulint n_fields ;
   ulint n_bytes ;
   ulint side ;
   ulint is_hashed ;
   ulint n_pointers ;
   ulint curr_n_fields ;
   ulint curr_n_bytes ;
   ulint curr_side ;
   dict_index_t *index ;
   ulint file_page_was_freed ;
};
#line 890 "./../include/buf0buf.h"
struct __anonstruct_flush_list_66 {
   ulint count ;
   buf_block_t *start ;
   buf_block_t *end ;
};
#line 890 "./../include/buf0buf.h"
struct __anonstruct_free_67 {
   ulint count ;
   buf_block_t *start ;
   buf_block_t *end ;
};
#line 890 "./../include/buf0buf.h"
struct __anonstruct_LRU_68 {
   ulint count ;
   buf_block_t *start ;
   buf_block_t *end ;
};
#line 890 "./../include/buf0buf.h"
struct __anonstruct_awe_LRU_free_mapped_69 {
   ulint count ;
   buf_block_t *start ;
   buf_block_t *end ;
};
#line 890 "./../include/buf0buf.h"
struct buf_pool_struct {
   ib_mutex_t mutex ;
   unsigned char *frame_mem ;
   unsigned char *frame_zero ;
   unsigned char *high_end ;
   ulint n_frames ;
   buf_block_t *blocks ;
   buf_block_t **blocks_of_frames ;
   os_awe_t *awe_info ;
   ulint max_size ;
   ulint curr_size ;
   hash_table_t *page_hash ;
   ulint n_pend_reads ;
   time_t last_printout_time ;
   ulint n_pages_read ;
   ulint n_pages_written ;
   ulint n_pages_created ;
   ulint n_page_gets ;
   ulint n_pages_awe_remapped ;
   ulint n_page_gets_old ;
   ulint n_pages_read_old ;
   ulint n_pages_written_old ;
   ulint n_pages_created_old ;
   ulint n_pages_awe_remapped_old ;
   struct __anonstruct_flush_list_66 flush_list ;
   ulint init_flush[4] ;
   ulint n_flush[4] ;
   os_event_t no_flush[4] ;
   ulint ulint_clock ;
   ulint freed_page_clock ;
   ulint LRU_flush_ended ;
   struct __anonstruct_free_67 free ;
   struct __anonstruct_LRU_68 LRU ;
   buf_block_t *LRU_old ;
   ulint LRU_old_len ;
   struct __anonstruct_awe_LRU_free_mapped_69 awe_LRU_free_mapped ;
};
#line 19 "./../include/data0type.h"
struct dtype_struct;
#line 19 "./../include/data0type.h"
typedef struct dtype_struct dtype_t;
#line 407 "./../include/data0type.h"
struct dtype_struct {
   ulint mtype ;
   ulint prtype ;
   ulint len ;
   ulint prec ;
   ulint mbminlen ;
   ulint mbmaxlen ;
};
#line 19 "./../include/btr0types.h"
struct btr_search_struct;
#line 19 "./../include/btr0types.h"
typedef struct btr_search_struct btr_search_t;
#line 13 "./../include/lock0types.h"
struct lock_struct;
#line 13 "./../include/lock0types.h"
typedef struct lock_struct ib_lock_t;
#line 147 "./../include/dict0mem.h"
struct dict_col_struct {
   hash_node_t hash ;
   ulint ind ;
   ulint clust_pos ;
   ulint ord_part ;
   char *name ;
   dtype_t type ;
   dict_table_t *table ;
   ulint aux ;
};
#line 170 "./../include/dict0mem.h"
struct dict_field_struct {
   dict_col_t *col ;
   char *name ;
   ulint order ;
   ulint prefix_len ;
   ulint fixed_len ;
   ulint fixed_offs ;
};
#line 192 "./../include/dict0mem.h"
struct __anonstruct_tree_indexes_71 {
   ulint count ;
   dict_index_t *start ;
   dict_index_t *end ;
};
#line 192 "./../include/dict0mem.h"
struct dict_tree_struct {
   ulint type ;
   dulint id ;
   ulint space ;
   ulint page ;
   unsigned char pad[64] ;
   rw_lock_t lock ;
   ulint mem_fix ;
   struct __anonstruct_tree_indexes_71 tree_indexes ;
   ulint magic_n ;
};
#line 220 "./../include/dict0mem.h"
struct __anonstruct_indexes_72 {
   dict_index_t *prev ;
   dict_index_t *next ;
};
#line 220 "./../include/dict0mem.h"
struct __anonstruct_tree_indexes_73 {
   dict_index_t *prev ;
   dict_index_t *next ;
};
#line 220 "./../include/dict0mem.h"
struct dict_index_struct {
   dulint id ;
   mem_heap_t *heap ;
   ulint type ;
   char *name ;
   char *table_name ;
   dict_table_t *table ;
   ulint space ;
   ulint trx_id_offset ;
   ulint n_user_defined_cols ;
   ulint n_uniq ;
   ulint n_def ;
   ulint n_fields ;
   dict_field_t *fields ;
   ulint n_nullable ;
   struct __anonstruct_indexes_72 indexes ;
   dict_tree_t *tree ;
   struct __anonstruct_tree_indexes_73 tree_indexes ;
   ulint cached ;
   btr_search_t *search_info ;
   ib_longlong *stat_n_diff_key_vals ;
   ulint stat_index_size ;
   ulint stat_n_leaf_pages ;
   ulint magic_n ;
};
#line 269 "./../include/dict0mem.h"
struct __anonstruct_foreign_list_74 {
   dict_foreign_t *prev ;
   dict_foreign_t *next ;
};
#line 269 "./../include/dict0mem.h"
struct __anonstruct_referenced_list_75 {
   dict_foreign_t *prev ;
   dict_foreign_t *next ;
};
#line 269 "./../include/dict0mem.h"
struct dict_foreign_struct {
   mem_heap_t *heap ;
   char *id ;
   ulint type ;
   char *foreign_table_name ;
   dict_table_t *foreign_table ;
   char **foreign_col_names ;
   char *referenced_table_name ;
   dict_table_t *referenced_table ;
   char **referenced_col_names ;
   ulint n_fields ;
   dict_index_t *foreign_index ;
   dict_index_t *referenced_index ;
   struct __anonstruct_foreign_list_74 foreign_list ;
   struct __anonstruct_referenced_list_75 referenced_list ;
};
#line 318 "./../include/dict0mem.h"
struct __anonstruct_indexes_76 {
   ulint count ;
   dict_index_t *start ;
   dict_index_t *end ;
};
#line 318 "./../include/dict0mem.h"
struct __anonstruct_foreign_list_77 {
   ulint count ;
   dict_foreign_t *start ;
   dict_foreign_t *end ;
};
#line 318 "./../include/dict0mem.h"
struct __anonstruct_referenced_list_78 {
   ulint count ;
   dict_foreign_t *start ;
   dict_foreign_t *end ;
};
#line 318 "./../include/dict0mem.h"
struct __anonstruct_table_LRU_79 {
   dict_table_t *prev ;
   dict_table_t *next ;
};
#line 318 "./../include/dict0mem.h"
struct __anonstruct_locks_80 {
   ulint count ;
   ib_lock_t *start ;
   ib_lock_t *end ;
};
#line 318 "./../include/dict0mem.h"
struct dict_table_struct {
   dulint id ;
   ulint type ;
   mem_heap_t *heap ;
   char *name ;
   char *dir_path_of_temp_table ;
   ulint space ;
   ulint ibd_file_missing ;
   ulint tablespace_discarded ;
   ulint comp ;
   hash_node_t name_hash ;
   hash_node_t id_hash ;
   ulint n_def ;
   ulint n_cols ;
   dict_col_t *cols ;
   struct __anonstruct_indexes_76 indexes ;
   struct __anonstruct_foreign_list_77 foreign_list ;
   struct __anonstruct_referenced_list_78 referenced_list ;
   struct __anonstruct_table_LRU_79 table_LRU ;
   ulint mem_fix ;
   ulint n_mysql_handles_opened ;
   ulint n_foreign_key_checks_running ;
   ulint cached ;
   ib_lock_t *auto_inc_lock ;
   dulint query_cache_inv_trx_id ;
   struct __anonstruct_locks_80 locks ;
   dulint mix_id ;
   ulint mix_len ;
   ulint mix_id_len ;
   unsigned char mix_id_buf[12] ;
   char *cluster_name ;
   ulint does_not_fit_in_memory ;
   ib_longlong stat_n_rows ;
   ulint stat_clustered_index_size ;
   ulint stat_sum_of_other_index_sizes ;
   ulint stat_initialized ;
   ulint stat_modified_counter ;
   ib_mutex_t autoinc_mutex ;
   ulint autoinc_inited ;
   ib_longlong autoinc ;
   ulint magic_n ;
};
#line 939 "./../include/dict0dict.h"
struct __anonstruct_table_LRU_81 {
   ulint count ;
   dict_table_t *start ;
   dict_table_t *end ;
};
#line 939 "./../include/dict0dict.h"
struct dict_sys_struct {
   ib_mutex_t mutex ;
   dulint row_id ;
   hash_table_t *table_hash ;
   hash_table_t *table_id_hash ;
   hash_table_t *col_hash ;
   struct __anonstruct_table_LRU_81 table_LRU ;
   ulint size ;
   dict_table_t *sys_tables ;
   dict_table_t *sys_columns ;
   dict_table_t *sys_indexes ;
   dict_table_t *sys_fields ;
};
#line 21 "./../include/dict0boot.h"
typedef unsigned char dict_hdr_t;
extern void *__dyc_random_ptr__typdef_ib_lock_t(unsigned int __dyc_exp ) ;
extern void *__dyc_read_ptr__typdef_ib_lock_t(void) ;
extern void __dyc_print_ptr__typdef_ib_lock_t(void const   * const  __dyc_thistype ) ;
extern time_t __dyc_random_typdef_time_t(unsigned int __dyc_exp ) ;
extern time_t __dyc_read_typdef_time_t(void) ;
extern void __dyc_print_typdef_time_t(time_t __dyc_thistype ) ;
extern struct __anonstruct_base_58 __dyc_random_comp_112__anonstruct_base_58(unsigned int __dyc_exp ) ;
extern struct __anonstruct_base_58 __dyc_read_comp_112__anonstruct_base_58(void) ;
extern void __dyc_print_comp_112__anonstruct_base_58(struct __anonstruct_base_58 __dyc_thistype ) ;
extern mem_heap_t *__dyc_random_ptr__typdef_mem_heap_t(unsigned int __dyc_exp ) ;
extern mem_heap_t *__dyc_read_ptr__typdef_mem_heap_t(void) ;
extern void __dyc_print_ptr__typdef_mem_heap_t(mem_heap_t const   *__dyc_thistype ) ;
extern FILE *__dyc_random_ptr__typdef_FILE(unsigned int __dyc_exp ) ;
extern FILE *__dyc_read_ptr__typdef_FILE(void) ;
extern void __dyc_print_ptr__typdef_FILE(FILE const   * __restrict  __dyc_thistype ) ;
extern void *__dyc_random_ptr__typdef_btr_search_t(unsigned int __dyc_exp ) ;
extern void *__dyc_read_ptr__typdef_btr_search_t(void) ;
extern void __dyc_print_ptr__typdef_btr_search_t(void const   * const  __dyc_thistype ) ;
extern mem_block_t *__dyc_random_ptr__typdef_mem_block_t(unsigned int __dyc_exp ) ;
extern mem_block_t *__dyc_read_ptr__typdef_mem_block_t(void) ;
extern void __dyc_print_ptr__typdef_mem_block_t(mem_block_t const   *__dyc_thistype ) ;
extern dict_field_t *__dyc_random_ptr__typdef_dict_field_t(unsigned int __dyc_exp ) ;
extern dict_field_t *__dyc_read_ptr__typdef_dict_field_t(void) ;
extern void __dyc_print_ptr__typdef_dict_field_t(dict_field_t const   *__dyc_thistype ) ;
extern struct rw_lock_struct __dyc_random_comp_116rw_lock_struct(unsigned int __dyc_exp ) ;
extern struct rw_lock_struct __dyc_read_comp_116rw_lock_struct(void) ;
extern void __dyc_print_comp_116rw_lock_struct(struct rw_lock_struct __dyc_thistype ) ;
extern struct __anonstruct_list_59 __dyc_random_comp_113__anonstruct_list_59(unsigned int __dyc_exp ) ;
extern struct __anonstruct_list_59 __dyc_read_comp_113__anonstruct_list_59(void) ;
extern void __dyc_print_comp_113__anonstruct_list_59(struct __anonstruct_list_59 __dyc_thistype ) ;
extern size_t __dyc_random_typdef_size_t(unsigned int __dyc_exp ) ;
extern size_t __dyc_read_typdef_size_t(void) ;
extern void __dyc_print_typdef_size_t(size_t __dyc_thistype ) ;
extern pthread_mutex_t *__dyc_random_ptr__typdef_pthread_mutex_t(unsigned int __dyc_exp ) ;
extern pthread_mutex_t *__dyc_read_ptr__typdef_pthread_mutex_t(void) ;
extern void __dyc_print_ptr__typdef_pthread_mutex_t(pthread_mutex_t const   *__dyc_thistype ) ;
extern dict_foreign_t *__dyc_random_ptr__typdef_dict_foreign_t(unsigned int __dyc_exp ) ;
extern dict_foreign_t *__dyc_read_ptr__typdef_dict_foreign_t(void) ;
extern void __dyc_print_ptr__typdef_dict_foreign_t(dict_foreign_t const   *__dyc_thistype ) ;
extern buf_frame_t __dyc_random_typdef_buf_frame_t(unsigned int __dyc_exp ) ;
extern buf_frame_t __dyc_read_typdef_buf_frame_t(void) ;
extern void __dyc_print_typdef_buf_frame_t(buf_frame_t __dyc_thistype ) ;
extern buf_block_t __dyc_random_typdef_buf_block_t(unsigned int __dyc_exp ) ;
extern buf_block_t __dyc_read_typdef_buf_block_t(void) ;
extern void __dyc_print_typdef_buf_block_t(buf_block_t __dyc_thistype ) ;
extern ib_mutex_t *__dyc_random_ptr__typdef_ib_mutex_t(unsigned int __dyc_exp ) ;
extern ib_mutex_t *__dyc_read_ptr__typdef_ib_mutex_t(void) ;
extern void __dyc_print_ptr__typdef_ib_mutex_t(ib_mutex_t const   *__dyc_thistype ) ;
extern struct __anonstruct_foreign_list_74 __dyc_random_comp_167__anonstruct_foreign_list_74(unsigned int __dyc_exp ) ;
extern struct __anonstruct_foreign_list_74 __dyc_read_comp_167__anonstruct_foreign_list_74(void) ;
extern void __dyc_print_comp_167__anonstruct_foreign_list_74(struct __anonstruct_foreign_list_74 __dyc_thistype ) ;
extern dict_col_t *__dyc_random_ptr__typdef_dict_col_t(unsigned int __dyc_exp ) ;
extern dict_col_t *__dyc_read_ptr__typdef_dict_col_t(void) ;
extern void __dyc_print_ptr__typdef_dict_col_t(dict_col_t const   *__dyc_thistype ) ;
extern struct __anonstruct_flush_list_66 __dyc_random_comp_146__anonstruct_flush_list_66(unsigned int __dyc_exp ) ;
extern struct __anonstruct_flush_list_66 __dyc_read_comp_146__anonstruct_flush_list_66(void) ;
extern void __dyc_print_comp_146__anonstruct_flush_list_66(struct __anonstruct_flush_list_66 __dyc_thistype ) ;
extern struct dict_tree_struct __dyc_random_comp_127dict_tree_struct(unsigned int __dyc_exp ) ;
extern struct dict_tree_struct __dyc_read_comp_127dict_tree_struct(void) ;
extern void __dyc_print_comp_127dict_tree_struct(struct dict_tree_struct __dyc_thistype ) ;
extern dulint __dyc_random_typdef_dulint(unsigned int __dyc_exp ) ;
extern dulint __dyc_read_typdef_dulint(void) ;
extern void __dyc_print_typdef_dulint(dulint __dyc_thistype ) ;
extern struct __anonstruct_LRU_64 __dyc_random_comp_144__anonstruct_LRU_64(unsigned int __dyc_exp ) ;
extern struct __anonstruct_LRU_64 __dyc_read_comp_144__anonstruct_LRU_64(void) ;
extern void __dyc_print_comp_144__anonstruct_LRU_64(struct __anonstruct_LRU_64 __dyc_thistype ) ;
extern struct __anonstruct_list_52 __dyc_random_comp_98__anonstruct_list_52(unsigned int __dyc_exp ) ;
extern struct __anonstruct_list_52 __dyc_read_comp_98__anonstruct_list_52(void) ;
extern void __dyc_print_comp_98__anonstruct_list_52(struct __anonstruct_list_52 __dyc_thistype ) ;
extern os_fast_mutex_t *__dyc_random_ptr__typdef_os_fast_mutex_t(unsigned int __dyc_exp ) ;
extern os_fast_mutex_t *__dyc_read_ptr__typdef_os_fast_mutex_t(void) ;
extern void __dyc_print_ptr__typdef_os_fast_mutex_t(os_fast_mutex_t const   *__dyc_thistype ) ;
extern struct __anonstruct_table_LRU_79 __dyc_random_comp_172__anonstruct_table_LRU_79(unsigned int __dyc_exp ) ;
extern struct __anonstruct_table_LRU_79 __dyc_read_comp_172__anonstruct_table_LRU_79(void) ;
extern void __dyc_print_comp_172__anonstruct_table_LRU_79(struct __anonstruct_table_LRU_79 __dyc_thistype ) ;
extern union __anonunion_pthread_cond_t_6 __dyc_random_comp_18__anonunion_pthread_cond_t_6(unsigned int __dyc_exp ) ;
extern union __anonunion_pthread_cond_t_6 __dyc_read_comp_18__anonunion_pthread_cond_t_6(void) ;
extern void __dyc_print_comp_18__anonunion_pthread_cond_t_6(union __anonunion_pthread_cond_t_6 __dyc_thistype ) ;
extern ib_longlong __dyc_random_typdef_ib_longlong(unsigned int __dyc_exp ) ;
extern ib_longlong __dyc_read_typdef_ib_longlong(void) ;
extern void __dyc_print_typdef_ib_longlong(ib_longlong __dyc_thistype ) ;
extern os_thread_t __dyc_random_typdef_os_thread_t(unsigned int __dyc_exp ) ;
extern os_thread_t __dyc_read_typdef_os_thread_t(void) ;
extern void __dyc_print_typdef_os_thread_t(os_thread_t __dyc_thistype ) ;
extern struct __anonstruct_free_67 __dyc_random_comp_147__anonstruct_free_67(unsigned int __dyc_exp ) ;
extern struct __anonstruct_free_67 __dyc_read_comp_147__anonstruct_free_67(void) ;
extern void __dyc_print_comp_147__anonstruct_free_67(struct __anonstruct_free_67 __dyc_thistype ) ;
extern struct dict_table_struct __dyc_random_comp_128dict_table_struct(unsigned int __dyc_exp ) ;
extern struct dict_table_struct __dyc_read_comp_128dict_table_struct(void) ;
extern void __dyc_print_comp_128dict_table_struct(struct dict_table_struct __dyc_thistype ) ;
extern __pthread_list_t __dyc_random_typdef___pthread_list_t(unsigned int __dyc_exp ) ;
extern __pthread_list_t __dyc_read_typdef___pthread_list_t(void) ;
extern void __dyc_print_typdef___pthread_list_t(__pthread_list_t __dyc_thistype ) ;
extern dict_hdr_t *__dyc_random_ptr__typdef_dict_hdr_t(unsigned int __dyc_exp ) ;
extern dict_hdr_t *__dyc_read_ptr__typdef_dict_hdr_t(void) ;
extern void __dyc_print_ptr__typdef_dict_hdr_t(dict_hdr_t const   *__dyc_thistype ) ;
extern os_event_t __dyc_random_typdef_os_event_t(unsigned int __dyc_exp ) ;
extern os_event_t __dyc_read_typdef_os_event_t(void) ;
extern void __dyc_print_typdef_os_event_t(os_event_t __dyc_thistype ) ;
extern __off_t __dyc_random_typdef___off_t(unsigned int __dyc_exp ) ;
extern __off_t __dyc_read_typdef___off_t(void) ;
extern void __dyc_print_typdef___off_t(__off_t __dyc_thistype ) ;
extern dict_sys_t __dyc_random_typdef_dict_sys_t(unsigned int __dyc_exp ) ;
extern dict_sys_t __dyc_read_typdef_dict_sys_t(void) ;
extern void __dyc_print_typdef_dict_sys_t(dict_sys_t __dyc_thistype ) ;
extern struct mutex_struct __dyc_random_comp_92mutex_struct(unsigned int __dyc_exp ) ;
extern struct mutex_struct __dyc_read_comp_92mutex_struct(void) ;
extern void __dyc_print_comp_92mutex_struct(struct mutex_struct __dyc_thistype ) ;
extern struct __pthread_internal_list __dyc_random_comp_14__pthread_internal_list(unsigned int __dyc_exp ) ;
extern struct __pthread_internal_list __dyc_read_comp_14__pthread_internal_list(void) ;
extern void __dyc_print_comp_14__pthread_internal_list(struct __pthread_internal_list __dyc_thistype ) ;
extern struct __anonstruct_referenced_list_78 __dyc_random_comp_171__anonstruct_referenced_list_78(unsigned int __dyc_exp ) ;
extern struct __anonstruct_referenced_list_78 __dyc_read_comp_171__anonstruct_referenced_list_78(void) ;
extern void __dyc_print_comp_171__anonstruct_referenced_list_78(struct __anonstruct_referenced_list_78 __dyc_thistype ) ;
extern rw_lock_t __dyc_random_typdef_rw_lock_t(unsigned int __dyc_exp ) ;
extern rw_lock_t __dyc_read_typdef_rw_lock_t(void) ;
extern void __dyc_print_typdef_rw_lock_t(rw_lock_t __dyc_thistype ) ;
extern struct __anonstruct_base_54 __dyc_random_comp_101__anonstruct_base_54(unsigned int __dyc_exp ) ;
extern struct __anonstruct_base_54 __dyc_read_comp_101__anonstruct_base_54(void) ;
extern void __dyc_print_comp_101__anonstruct_base_54(struct __anonstruct_base_54 __dyc_thistype ) ;
extern struct __anonstruct_list_61 __dyc_random_comp_118__anonstruct_list_61(unsigned int __dyc_exp ) ;
extern struct __anonstruct_list_61 __dyc_read_comp_118__anonstruct_list_61(void) ;
extern void __dyc_print_comp_118__anonstruct_list_61(struct __anonstruct_list_61 __dyc_thistype ) ;
extern pthread_t __dyc_random_typdef_pthread_t(unsigned int __dyc_exp ) ;
extern pthread_t __dyc_read_typdef_pthread_t(void) ;
extern void __dyc_print_typdef_pthread_t(pthread_t __dyc_thistype ) ;
extern mem_block_t __dyc_random_typdef_mem_block_t(unsigned int __dyc_exp ) ;
extern mem_block_t __dyc_read_typdef_mem_block_t(void) ;
extern void __dyc_print_typdef_mem_block_t(mem_block_t __dyc_thistype ) ;
extern struct _IO_marker __dyc_random_comp_37_IO_marker(unsigned int __dyc_exp ) ;
extern struct _IO_marker __dyc_read_comp_37_IO_marker(void) ;
extern void __dyc_print_comp_37_IO_marker(struct _IO_marker __dyc_thistype ) ;
extern void *__dyc_random_ptr__void(unsigned int __dyc_exp ) ;
extern void *__dyc_read_ptr__void(void) ;
extern void __dyc_print_ptr__void(void const   * const  __dyc_thistype ) ;
extern union __anonunion_pthread_mutex_t_4 __dyc_random_comp_15__anonunion_pthread_mutex_t_4(unsigned int __dyc_exp ) ;
extern union __anonunion_pthread_mutex_t_4 __dyc_read_comp_15__anonunion_pthread_mutex_t_4(void) ;
extern void __dyc_print_comp_15__anonunion_pthread_mutex_t_4(union __anonunion_pthread_mutex_t_4 __dyc_thistype ) ;
extern dtype_t __dyc_random_typdef_dtype_t(unsigned int __dyc_exp ) ;
extern dtype_t __dyc_read_typdef_dtype_t(void) ;
extern void __dyc_print_typdef_dtype_t(dtype_t __dyc_thistype ) ;
extern struct __anonstruct_list_55 __dyc_random_comp_102__anonstruct_list_55(unsigned int __dyc_exp ) ;
extern struct __anonstruct_list_55 __dyc_read_comp_102__anonstruct_list_55(void) ;
extern void __dyc_print_comp_102__anonstruct_list_55(struct __anonstruct_list_55 __dyc_thistype ) ;
extern buf_pool_t __dyc_random_typdef_buf_pool_t(unsigned int __dyc_exp ) ;
extern buf_pool_t __dyc_read_typdef_buf_pool_t(void) ;
extern void __dyc_print_typdef_buf_pool_t(buf_pool_t __dyc_thistype ) ;
extern struct dict_index_struct __dyc_random_comp_126dict_index_struct(unsigned int __dyc_exp ) ;
extern struct dict_index_struct __dyc_read_comp_126dict_index_struct(void) ;
extern void __dyc_print_comp_126dict_index_struct(struct dict_index_struct __dyc_thistype ) ;
extern pthread_mutex_t __dyc_random_typdef_pthread_mutex_t(unsigned int __dyc_exp ) ;
extern pthread_mutex_t __dyc_read_typdef_pthread_mutex_t(void) ;
extern void __dyc_print_typdef_pthread_mutex_t(pthread_mutex_t __dyc_thistype ) ;
extern char *__dyc_random_ptr__char(unsigned int __dyc_exp ) ;
extern char *__dyc_read_ptr__char(void) ;
extern void __dyc_print_ptr__char(char const   *__dyc_thistype ) ;
extern mtr_t __dyc_random_typdef_mtr_t(unsigned int __dyc_exp ) ;
extern mtr_t __dyc_read_typdef_mtr_t(void) ;
extern void __dyc_print_typdef_mtr_t(mtr_t __dyc_thistype ) ;
extern struct __anonstruct_table_LRU_81 __dyc_random_comp_186__anonstruct_table_LRU_81(unsigned int __dyc_exp ) ;
extern struct __anonstruct_table_LRU_81 __dyc_read_comp_186__anonstruct_table_LRU_81(void) ;
extern void __dyc_print_comp_186__anonstruct_table_LRU_81(struct __anonstruct_table_LRU_81 __dyc_thistype ) ;
extern longlong __dyc_random_typdef_longlong(unsigned int __dyc_exp ) ;
extern longlong __dyc_read_typdef_longlong(void) ;
extern void __dyc_print_typdef_longlong(longlong __dyc_thistype ) ;
extern struct __anonstruct_os_event_list_51 __dyc_random_comp_94__anonstruct_os_event_list_51(unsigned int __dyc_exp ) ;
extern struct __anonstruct_os_event_list_51 __dyc_read_comp_94__anonstruct_os_event_list_51(void) ;
extern void __dyc_print_comp_94__anonstruct_os_event_list_51(struct __anonstruct_os_event_list_51 __dyc_thistype ) ;
extern dict_table_t __dyc_random_typdef_dict_table_t(unsigned int __dyc_exp ) ;
extern dict_table_t __dyc_read_typdef_dict_table_t(void) ;
extern void __dyc_print_typdef_dict_table_t(dict_table_t __dyc_thistype ) ;
extern struct hash_table_struct __dyc_random_comp_136hash_table_struct(unsigned int __dyc_exp ) ;
extern struct hash_table_struct __dyc_read_comp_136hash_table_struct(void) ;
extern void __dyc_print_comp_136hash_table_struct(struct hash_table_struct __dyc_thistype ) ;
extern mem_heap_t __dyc_random_typdef_mem_heap_t(unsigned int __dyc_exp ) ;
extern mem_heap_t __dyc_read_typdef_mem_heap_t(void) ;
extern void __dyc_print_typdef_mem_heap_t(mem_heap_t __dyc_thistype ) ;
extern hash_node_t __dyc_random_typdef_hash_node_t(unsigned int __dyc_exp ) ;
extern hash_node_t __dyc_read_typdef_hash_node_t(void) ;
extern void __dyc_print_typdef_hash_node_t(hash_node_t __dyc_thistype ) ;
extern ulong __dyc_random_typdef_ulong(unsigned int __dyc_exp ) ;
extern ulong __dyc_read_typdef_ulong(void) ;
extern void __dyc_print_typdef_ulong(ulong __dyc_thistype ) ;
extern ib_page_t __dyc_random_typdef_ib_page_t(unsigned int __dyc_exp ) ;
extern ib_page_t __dyc_read_typdef_ib_page_t(void) ;
extern void __dyc_print_typdef_ib_page_t(ib_page_t __dyc_thistype ) ;
extern struct __pthread_mutex_s __dyc_random_comp_16__pthread_mutex_s(unsigned int __dyc_exp ) ;
extern struct __pthread_mutex_s __dyc_read_comp_16__pthread_mutex_s(void) ;
extern void __dyc_print_comp_16__pthread_mutex_s(struct __pthread_mutex_s __dyc_thistype ) ;
extern __time_t __dyc_random_typdef___time_t(unsigned int __dyc_exp ) ;
extern __time_t __dyc_read_typdef___time_t(void) ;
extern void __dyc_print_typdef___time_t(__time_t __dyc_thistype ) ;
extern hash_cell_t *__dyc_random_ptr__typdef_hash_cell_t(unsigned int __dyc_exp ) ;
extern hash_cell_t *__dyc_read_ptr__typdef_hash_cell_t(void) ;
extern void __dyc_print_ptr__typdef_hash_cell_t(hash_cell_t const   *__dyc_thistype ) ;
extern os_fast_mutex_t __dyc_random_typdef_os_fast_mutex_t(unsigned int __dyc_exp ) ;
extern os_fast_mutex_t __dyc_read_typdef_os_fast_mutex_t(void) ;
extern void __dyc_print_typdef_os_fast_mutex_t(os_fast_mutex_t __dyc_thistype ) ;
extern dict_table_t *__dyc_random_ptr__typdef_dict_table_t(unsigned int __dyc_exp ) ;
extern dict_table_t *__dyc_read_ptr__typdef_dict_table_t(void) ;
extern void __dyc_print_ptr__typdef_dict_table_t(dict_table_t const   *__dyc_thistype ) ;
extern hash_table_t __dyc_random_typdef_hash_table_t(unsigned int __dyc_exp ) ;
extern hash_table_t __dyc_read_typdef_hash_table_t(void) ;
extern void __dyc_print_typdef_hash_table_t(hash_table_t __dyc_thistype ) ;
extern rw_lock_t *__dyc_random_ptr__typdef_rw_lock_t(unsigned int __dyc_exp ) ;
extern rw_lock_t *__dyc_read_ptr__typdef_rw_lock_t(void) ;
extern void __dyc_print_ptr__typdef_rw_lock_t(rw_lock_t const   *__dyc_thistype ) ;
extern struct __anonstruct_locks_80 __dyc_random_comp_173__anonstruct_locks_80(unsigned int __dyc_exp ) ;
extern struct __anonstruct_locks_80 __dyc_read_comp_173__anonstruct_locks_80(void) ;
extern void __dyc_print_comp_173__anonstruct_locks_80(struct __anonstruct_locks_80 __dyc_thistype ) ;
extern struct hash_cell_struct __dyc_random_comp_137hash_cell_struct(unsigned int __dyc_exp ) ;
extern struct hash_cell_struct __dyc_read_comp_137hash_cell_struct(void) ;
extern void __dyc_print_comp_137hash_cell_struct(struct hash_cell_struct __dyc_thistype ) ;
extern dyn_array_t *__dyc_random_ptr__typdef_dyn_array_t(unsigned int __dyc_exp ) ;
extern dyn_array_t *__dyc_read_ptr__typdef_dyn_array_t(void) ;
extern void __dyc_print_ptr__typdef_dyn_array_t(dyn_array_t const   *__dyc_thistype ) ;
extern struct __anonstruct_tree_indexes_73 __dyc_random_comp_166__anonstruct_tree_indexes_73(unsigned int __dyc_exp ) ;
extern struct __anonstruct_tree_indexes_73 __dyc_read_comp_166__anonstruct_tree_indexes_73(void) ;
extern void __dyc_print_comp_166__anonstruct_tree_indexes_73(struct __anonstruct_tree_indexes_73 __dyc_thistype ) ;
extern struct dict_sys_struct __dyc_random_comp_123dict_sys_struct(unsigned int __dyc_exp ) ;
extern struct dict_sys_struct __dyc_read_comp_123dict_sys_struct(void) ;
extern void __dyc_print_comp_123dict_sys_struct(struct dict_sys_struct __dyc_thistype ) ;
extern struct __anonstruct_LRU_68 __dyc_random_comp_148__anonstruct_LRU_68(unsigned int __dyc_exp ) ;
extern struct __anonstruct_LRU_68 __dyc_read_comp_148__anonstruct_LRU_68(void) ;
extern void __dyc_print_comp_148__anonstruct_LRU_68(struct __anonstruct_LRU_68 __dyc_thistype ) ;
extern struct dyn_block_struct __dyc_random_comp_111dyn_block_struct(unsigned int __dyc_exp ) ;
extern struct dyn_block_struct __dyc_read_comp_111dyn_block_struct(void) ;
extern void __dyc_print_comp_111dyn_block_struct(struct dyn_block_struct __dyc_thistype ) ;
extern dict_foreign_t __dyc_random_typdef_dict_foreign_t(unsigned int __dyc_exp ) ;
extern dict_foreign_t __dyc_read_typdef_dict_foreign_t(void) ;
extern void __dyc_print_typdef_dict_foreign_t(dict_foreign_t __dyc_thistype ) ;
extern os_awe_t __dyc_random_typdef_os_awe_t(unsigned int __dyc_exp ) ;
extern os_awe_t __dyc_read_typdef_os_awe_t(void) ;
extern void __dyc_print_typdef_os_awe_t(os_awe_t __dyc_thistype ) ;
extern struct dict_col_struct __dyc_random_comp_124dict_col_struct(unsigned int __dyc_exp ) ;
extern struct dict_col_struct __dyc_read_comp_124dict_col_struct(void) ;
extern void __dyc_print_comp_124dict_col_struct(struct dict_col_struct __dyc_thistype ) ;
extern hash_table_t *__dyc_random_ptr__typdef_hash_table_t(unsigned int __dyc_exp ) ;
extern hash_table_t *__dyc_read_ptr__typdef_hash_table_t(void) ;
extern void __dyc_print_ptr__typdef_hash_table_t(hash_table_t const   *__dyc_thistype ) ;
extern ib_mutex_t __dyc_random_typdef_ib_mutex_t(unsigned int __dyc_exp ) ;
extern ib_mutex_t __dyc_read_typdef_ib_mutex_t(void) ;
extern void __dyc_print_typdef_ib_mutex_t(ib_mutex_t __dyc_thistype ) ;
extern dict_tree_t *__dyc_random_ptr__typdef_dict_tree_t(unsigned int __dyc_exp ) ;
extern dict_tree_t *__dyc_read_ptr__typdef_dict_tree_t(void) ;
extern void __dyc_print_ptr__typdef_dict_tree_t(dict_tree_t const   *__dyc_thistype ) ;
extern dict_col_t __dyc_random_typdef_dict_col_t(unsigned int __dyc_exp ) ;
extern dict_col_t __dyc_read_typdef_dict_col_t(void) ;
extern void __dyc_print_typdef_dict_col_t(dict_col_t __dyc_thistype ) ;
extern dict_index_t __dyc_random_typdef_dict_index_t(unsigned int __dyc_exp ) ;
extern dict_index_t __dyc_read_typdef_dict_index_t(void) ;
extern void __dyc_print_typdef_dict_index_t(dict_index_t __dyc_thistype ) ;
extern os_event_struct_t __dyc_random_typdef_os_event_struct_t(unsigned int __dyc_exp ) ;
extern os_event_struct_t __dyc_read_typdef_os_event_struct_t(void) ;
extern void __dyc_print_typdef_os_event_struct_t(os_event_struct_t __dyc_thistype ) ;
extern struct __anonstruct_awe_LRU_free_mapped_65 __dyc_random_comp_145__anonstruct_awe_LRU_free_mapped_65(unsigned int __dyc_exp ) ;
extern struct __anonstruct_awe_LRU_free_mapped_65 __dyc_read_comp_145__anonstruct_awe_LRU_free_mapped_65(void) ;
extern void __dyc_print_comp_145__anonstruct_awe_LRU_free_mapped_65(struct __anonstruct_awe_LRU_free_mapped_65 __dyc_thistype ) ;
extern mtr_t *__dyc_random_ptr__typdef_mtr_t(unsigned int __dyc_exp ) ;
extern mtr_t *__dyc_read_ptr__typdef_mtr_t(void) ;
extern void __dyc_print_ptr__typdef_mtr_t(mtr_t const   *__dyc_thistype ) ;
extern dyn_block_t *__dyc_random_ptr__typdef_dyn_block_t(unsigned int __dyc_exp ) ;
extern dyn_block_t *__dyc_read_ptr__typdef_dyn_block_t(void) ;
extern void __dyc_print_ptr__typdef_dyn_block_t(dyn_block_t const   *__dyc_thistype ) ;
extern os_awe_t *__dyc_random_ptr__typdef_os_awe_t(unsigned int __dyc_exp ) ;
extern os_awe_t *__dyc_read_ptr__typdef_os_awe_t(void) ;
extern void __dyc_print_ptr__typdef_os_awe_t(os_awe_t const   *__dyc_thistype ) ;
extern struct __anonstruct___data_7 __dyc_random_comp_19__anonstruct___data_7(unsigned int __dyc_exp ) ;
extern struct __anonstruct___data_7 __dyc_read_comp_19__anonstruct___data_7(void) ;
extern void __dyc_print_comp_19__anonstruct___data_7(struct __anonstruct___data_7 __dyc_thistype ) ;
extern struct __anonstruct_free_63 __dyc_random_comp_143__anonstruct_free_63(unsigned int __dyc_exp ) ;
extern struct __anonstruct_free_63 __dyc_read_comp_143__anonstruct_free_63(void) ;
extern void __dyc_print_comp_143__anonstruct_free_63(struct __anonstruct_free_63 __dyc_thistype ) ;
extern ulint __dyc_random_typdef_ulint(unsigned int __dyc_exp ) ;
extern ulint __dyc_read_typdef_ulint(void) ;
extern void __dyc_print_typdef_ulint(ulint __dyc_thistype ) ;
extern ib_page_t *__dyc_random_ptr__typdef_ib_page_t(unsigned int __dyc_exp ) ;
extern ib_page_t *__dyc_read_ptr__typdef_ib_page_t(void) ;
extern void __dyc_print_ptr__typdef_ib_page_t(ib_page_t const   *__dyc_thistype ) ;
extern dict_index_t *__dyc_random_ptr__typdef_dict_index_t(unsigned int __dyc_exp ) ;
extern dict_index_t *__dyc_read_ptr__typdef_dict_index_t(void) ;
extern void __dyc_print_ptr__typdef_dict_index_t(dict_index_t const   *__dyc_thistype ) ;
extern os_thread_id_t __dyc_random_typdef_os_thread_id_t(unsigned int __dyc_exp ) ;
extern os_thread_id_t __dyc_read_typdef_os_thread_id_t(void) ;
extern void __dyc_print_typdef_os_thread_id_t(os_thread_id_t __dyc_thistype ) ;
extern __off64_t __dyc_random_typdef___off64_t(unsigned int __dyc_exp ) ;
extern __off64_t __dyc_read_typdef___off64_t(void) ;
extern void __dyc_print_typdef___off64_t(__off64_t __dyc_thistype ) ;
extern mem_block_info_t __dyc_random_typdef_mem_block_info_t(unsigned int __dyc_exp ) ;
extern mem_block_info_t __dyc_read_typdef_mem_block_info_t(void) ;
extern void __dyc_print_typdef_mem_block_info_t(mem_block_info_t __dyc_thistype ) ;
extern struct buf_block_struct __dyc_random_comp_114buf_block_struct(unsigned int __dyc_exp ) ;
extern struct buf_block_struct __dyc_read_comp_114buf_block_struct(void) ;
extern void __dyc_print_comp_114buf_block_struct(struct buf_block_struct __dyc_thistype ) ;
extern mem_heap_t **__dyc_random_ptr__ptr__typdef_mem_heap_t(unsigned int __dyc_exp ) ;
extern mem_heap_t **__dyc_read_ptr__ptr__typdef_mem_heap_t(void) ;
extern void __dyc_print_ptr__ptr__typdef_mem_heap_t(mem_heap_t * const  *__dyc_thistype ) ;
extern struct _IO_FILE __dyc_random_comp_31_IO_FILE(unsigned int __dyc_exp ) ;
extern struct _IO_FILE __dyc_read_comp_31_IO_FILE(void) ;
extern void __dyc_print_comp_31_IO_FILE(struct _IO_FILE __dyc_thistype ) ;
extern dict_hdr_t __dyc_random_typdef_dict_hdr_t(unsigned int __dyc_exp ) ;
extern dict_hdr_t __dyc_read_typdef_dict_hdr_t(void) ;
extern void __dyc_print_typdef_dict_hdr_t(dict_hdr_t __dyc_thistype ) ;
extern struct buf_pool_struct __dyc_random_comp_115buf_pool_struct(unsigned int __dyc_exp ) ;
extern struct buf_pool_struct __dyc_read_comp_115buf_pool_struct(void) ;
extern void __dyc_print_comp_115buf_pool_struct(struct buf_pool_struct __dyc_thistype ) ;
extern struct mtr_struct __dyc_random_comp_119mtr_struct(unsigned int __dyc_exp ) ;
extern struct mtr_struct __dyc_read_comp_119mtr_struct(void) ;
extern void __dyc_print_comp_119mtr_struct(struct mtr_struct __dyc_thistype ) ;
extern struct __anonstruct_tree_indexes_71 __dyc_random_comp_164__anonstruct_tree_indexes_71(unsigned int __dyc_exp ) ;
extern struct __anonstruct_tree_indexes_71 __dyc_read_comp_164__anonstruct_tree_indexes_71(void) ;
extern void __dyc_print_comp_164__anonstruct_tree_indexes_71(struct __anonstruct_tree_indexes_71 __dyc_thistype ) ;
extern struct __anonstruct_foreign_list_77 __dyc_random_comp_170__anonstruct_foreign_list_77(unsigned int __dyc_exp ) ;
extern struct __anonstruct_foreign_list_77 __dyc_read_comp_170__anonstruct_foreign_list_77(void) ;
extern void __dyc_print_comp_170__anonstruct_foreign_list_77(struct __anonstruct_foreign_list_77 __dyc_thistype ) ;
extern struct __anonstruct_referenced_list_75 __dyc_random_comp_168__anonstruct_referenced_list_75(unsigned int __dyc_exp ) ;
extern struct __anonstruct_referenced_list_75 __dyc_read_comp_168__anonstruct_referenced_list_75(void) ;
extern void __dyc_print_comp_168__anonstruct_referenced_list_75(struct __anonstruct_referenced_list_75 __dyc_thistype ) ;
extern struct _IO_FILE *__dyc_random_ptr__comp_31_IO_FILE(unsigned int __dyc_exp ) ;
extern struct _IO_FILE *__dyc_read_ptr__comp_31_IO_FILE(void) ;
extern void __dyc_print_ptr__comp_31_IO_FILE(struct _IO_FILE  const  *__dyc_thistype ) ;
extern os_event_struct_t *__dyc_random_ptr__typdef_os_event_struct_t(unsigned int __dyc_exp ) ;
extern os_event_struct_t *__dyc_read_ptr__typdef_os_event_struct_t(void) ;
extern void __dyc_print_ptr__typdef_os_event_struct_t(os_event_struct_t const   *__dyc_thistype ) ;
extern struct __anonstruct_indexes_76 __dyc_random_comp_169__anonstruct_indexes_76(unsigned int __dyc_exp ) ;
extern struct __anonstruct_indexes_76 __dyc_read_comp_169__anonstruct_indexes_76(void) ;
extern void __dyc_print_comp_169__anonstruct_indexes_76(struct __anonstruct_indexes_76 __dyc_thistype ) ;
extern hash_cell_t __dyc_random_typdef_hash_cell_t(unsigned int __dyc_exp ) ;
extern hash_cell_t __dyc_read_typdef_hash_cell_t(void) ;
extern void __dyc_print_typdef_hash_cell_t(hash_cell_t __dyc_thistype ) ;
extern pthread_cond_t __dyc_random_typdef_pthread_cond_t(unsigned int __dyc_exp ) ;
extern pthread_cond_t __dyc_read_typdef_pthread_cond_t(void) ;
extern void __dyc_print_typdef_pthread_cond_t(pthread_cond_t __dyc_thistype ) ;
extern buf_frame_t *__dyc_random_ptr__typdef_buf_frame_t(unsigned int __dyc_exp ) ;
extern buf_frame_t *__dyc_read_ptr__typdef_buf_frame_t(void) ;
extern void __dyc_print_ptr__typdef_buf_frame_t(buf_frame_t const   *__dyc_thistype ) ;
extern buf_block_t *__dyc_random_ptr__typdef_buf_block_t(unsigned int __dyc_exp ) ;
extern buf_block_t *__dyc_read_ptr__typdef_buf_block_t(void) ;
extern void __dyc_print_ptr__typdef_buf_block_t(buf_block_t const   *__dyc_thistype ) ;
extern ulint *__dyc_random_ptr__typdef_ulint(unsigned int __dyc_exp ) ;
extern ulint *__dyc_read_ptr__typdef_ulint(void) ;
extern void __dyc_print_ptr__typdef_ulint(ulint const   *__dyc_thistype ) ;
extern struct __anonstruct_flush_list_62 __dyc_random_comp_142__anonstruct_flush_list_62(unsigned int __dyc_exp ) ;
extern struct __anonstruct_flush_list_62 __dyc_read_comp_142__anonstruct_flush_list_62(void) ;
extern void __dyc_print_comp_142__anonstruct_flush_list_62(struct __anonstruct_flush_list_62 __dyc_thistype ) ;
extern dyn_array_t __dyc_random_typdef_dyn_array_t(unsigned int __dyc_exp ) ;
extern dyn_array_t __dyc_read_typdef_dyn_array_t(void) ;
extern void __dyc_print_typdef_dyn_array_t(dyn_array_t __dyc_thistype ) ;
extern struct mem_block_info_struct __dyc_random_comp_100mem_block_info_struct(unsigned int __dyc_exp ) ;
extern struct mem_block_info_struct __dyc_read_comp_100mem_block_info_struct(void) ;
extern void __dyc_print_comp_100mem_block_info_struct(struct mem_block_info_struct __dyc_thistype ) ;
extern dict_sys_t *__dyc_random_ptr__typdef_dict_sys_t(unsigned int __dyc_exp ) ;
extern dict_sys_t *__dyc_read_ptr__typdef_dict_sys_t(void) ;
extern void __dyc_print_ptr__typdef_dict_sys_t(dict_sys_t const   *__dyc_thistype ) ;
extern ib_longlong *__dyc_random_ptr__typdef_ib_longlong(unsigned int __dyc_exp ) ;
extern ib_longlong *__dyc_read_ptr__typdef_ib_longlong(void) ;
extern void __dyc_print_ptr__typdef_ib_longlong(ib_longlong const   *__dyc_thistype ) ;
extern buf_block_t **__dyc_random_ptr__ptr__typdef_buf_block_t(unsigned int __dyc_exp ) ;
extern buf_block_t **__dyc_read_ptr__ptr__typdef_buf_block_t(void) ;
extern void __dyc_print_ptr__ptr__typdef_buf_block_t(buf_block_t * const  *__dyc_thistype ) ;
extern struct dict_field_struct __dyc_random_comp_125dict_field_struct(unsigned int __dyc_exp ) ;
extern struct dict_field_struct __dyc_read_comp_125dict_field_struct(void) ;
extern void __dyc_print_comp_125dict_field_struct(struct dict_field_struct __dyc_thistype ) ;
extern void *__dyc_random_ptr__typdef__IO_lock_t(unsigned int __dyc_exp ) ;
extern void *__dyc_read_ptr__typdef__IO_lock_t(void) ;
extern void __dyc_print_ptr__typdef__IO_lock_t(void const   * const  __dyc_thistype ) ;
extern struct dtype_struct __dyc_random_comp_150dtype_struct(unsigned int __dyc_exp ) ;
extern struct dtype_struct __dyc_read_comp_150dtype_struct(void) ;
extern void __dyc_print_comp_150dtype_struct(struct dtype_struct __dyc_thistype ) ;
extern dict_tree_t __dyc_random_typdef_dict_tree_t(unsigned int __dyc_exp ) ;
extern dict_tree_t __dyc_read_typdef_dict_tree_t(void) ;
extern void __dyc_print_typdef_dict_tree_t(dict_tree_t __dyc_thistype ) ;
extern struct dict_foreign_struct __dyc_random_comp_129dict_foreign_struct(unsigned int __dyc_exp ) ;
extern struct dict_foreign_struct __dyc_read_comp_129dict_foreign_struct(void) ;
extern void __dyc_print_comp_129dict_foreign_struct(struct dict_foreign_struct __dyc_thistype ) ;
extern struct __anonstruct_indexes_72 __dyc_random_comp_165__anonstruct_indexes_72(unsigned int __dyc_exp ) ;
extern struct __anonstruct_indexes_72 __dyc_read_comp_165__anonstruct_indexes_72(void) ;
extern void __dyc_print_comp_165__anonstruct_indexes_72(struct __anonstruct_indexes_72 __dyc_thistype ) ;
extern struct _IO_marker *__dyc_random_ptr__comp_37_IO_marker(unsigned int __dyc_exp ) ;
extern struct _IO_marker *__dyc_read_ptr__comp_37_IO_marker(void) ;
extern void __dyc_print_ptr__comp_37_IO_marker(struct _IO_marker  const  *__dyc_thistype ) ;
extern dyn_block_t __dyc_random_typdef_dyn_block_t(unsigned int __dyc_exp ) ;
extern dyn_block_t __dyc_read_typdef_dyn_block_t(void) ;
extern void __dyc_print_typdef_dyn_block_t(dyn_block_t __dyc_thistype ) ;
extern struct dulint_struct __dyc_random_comp_91dulint_struct(unsigned int __dyc_exp ) ;
extern struct dulint_struct __dyc_read_comp_91dulint_struct(void) ;
extern void __dyc_print_comp_91dulint_struct(struct dulint_struct __dyc_thistype ) ;
extern FILE __dyc_random_typdef_FILE(unsigned int __dyc_exp ) ;
extern FILE __dyc_read_typdef_FILE(void) ;
extern void __dyc_print_typdef_FILE(FILE __dyc_thistype ) ;
extern buf_pool_t *__dyc_random_ptr__typdef_buf_pool_t(unsigned int __dyc_exp ) ;
extern buf_pool_t *__dyc_read_ptr__typdef_buf_pool_t(void) ;
extern void __dyc_print_ptr__typdef_buf_pool_t(buf_pool_t const   *__dyc_thistype ) ;
extern dict_field_t __dyc_random_typdef_dict_field_t(unsigned int __dyc_exp ) ;
extern dict_field_t __dyc_read_typdef_dict_field_t(void) ;
extern void __dyc_print_typdef_dict_field_t(dict_field_t __dyc_thistype ) ;
extern char **__dyc_random_ptr__ptr__char(unsigned int __dyc_exp ) ;
extern char **__dyc_read_ptr__ptr__char(void) ;
extern void __dyc_print_ptr__ptr__char(char * const  *__dyc_thistype ) ;
extern struct __anonstruct_awe_LRU_free_mapped_69 __dyc_random_comp_149__anonstruct_awe_LRU_free_mapped_69(unsigned int __dyc_exp ) ;
extern struct __anonstruct_awe_LRU_free_mapped_69 __dyc_read_comp_149__anonstruct_awe_LRU_free_mapped_69(void) ;
extern void __dyc_print_comp_149__anonstruct_awe_LRU_free_mapped_69(struct __anonstruct_awe_LRU_free_mapped_69 __dyc_thistype ) ;
extern struct os_event_struct __dyc_random_comp_93os_event_struct(unsigned int __dyc_exp ) ;
extern struct os_event_struct __dyc_read_comp_93os_event_struct(void) ;
extern void __dyc_print_comp_93os_event_struct(struct os_event_struct __dyc_thistype ) ;
extern struct __pthread_internal_list *__dyc_random_ptr__comp_14__pthread_internal_list(unsigned int __dyc_exp ) ;
extern struct __pthread_internal_list *__dyc_read_ptr__comp_14__pthread_internal_list(void) ;
extern void __dyc_print_ptr__comp_14__pthread_internal_list(struct __pthread_internal_list  const  *__dyc_thistype ) ;
