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
#line 343 "/usr/include/libio.h"
typedef struct _IO_FILE _IO_FILE;
#line 151 "/usr/include/x86_64-linux-gnu/sys/types.h"
typedef unsigned long ulong;
#line 153 "/usr/include/x86_64-linux-gnu/sys/types.h"
typedef unsigned int uint;
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
#line 220 "./../include/ut0ut.h"
struct trx_struct;
#line 220
struct trx_struct;
#line 13 "./../include/lock0types.h"
struct lock_struct;
#line 13 "./../include/lock0types.h"
typedef struct lock_struct ib_lock_t;
#line 14
struct lock_sys_struct;
#line 14 "./../include/lock0types.h"
typedef struct lock_sys_struct lock_sys_t;
#line 20 "./../include/ut0byte.h"
struct dulint_struct;
#line 20 "./../include/ut0byte.h"
typedef struct dulint_struct dulint;
#line 21 "./../include/ut0byte.h"
struct dulint_struct {
   ulint high ;
   ulint low ;
};
#line 16 "./../include/trx0types.h"
typedef struct trx_struct trx_t;
#line 17
struct trx_sys_struct;
#line 17 "./../include/trx0types.h"
typedef struct trx_sys_struct trx_sys_t;
#line 19
struct trx_sig_struct;
#line 19 "./../include/trx0types.h"
typedef struct trx_sig_struct trx_sig_t;
#line 20
struct trx_rseg_struct;
#line 20 "./../include/trx0types.h"
typedef struct trx_rseg_struct trx_rseg_t;
#line 21
struct trx_undo_struct;
#line 21 "./../include/trx0types.h"
typedef struct trx_undo_struct trx_undo_t;
#line 22
struct trx_undo_arr_struct;
#line 22 "./../include/trx0types.h"
typedef struct trx_undo_arr_struct trx_undo_arr_t;
#line 24
struct trx_purge_struct;
#line 24 "./../include/trx0types.h"
typedef struct trx_purge_struct trx_purge_t;
#line 27
struct trx_named_savept_struct;
#line 27 "./../include/trx0types.h"
typedef struct trx_named_savept_struct trx_named_savept_t;
#line 30
struct trx_savept_struct;
#line 30 "./../include/trx0types.h"
typedef struct trx_savept_struct trx_savept_t;
#line 31 "./../include/trx0types.h"
struct trx_savept_struct {
   dulint least_undo_no ;
};
#line 13 "./../include/rem0types.h"
typedef unsigned char rec_t;
#line 13 "./../include/dict0types.h"
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
#line 13 "./../include/data0types.h"
struct dfield_struct;
#line 13 "./../include/data0types.h"
typedef struct dfield_struct dfield_t;
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
#line 375 "./../include/data0data.h"
struct dfield_struct {
   void *data ;
   ulint len ;
   dtype_t type ;
};
#line 16 "./../include/que0types.h"
typedef void que_node_t;
#line 18
struct que_fork_struct;
#line 18 "./../include/que0types.h"
typedef struct que_fork_struct que_fork_t;
#line 21 "./../include/que0types.h"
typedef que_fork_t que_t;
#line 23
struct que_thr_struct;
#line 23 "./../include/que0types.h"
typedef struct que_thr_struct que_thr_t;
#line 24
struct que_common_struct;
#line 24 "./../include/que0types.h"
typedef struct que_common_struct que_common_t;
#line 29 "./../include/que0types.h"
struct que_common_struct {
   ulint type ;
   que_node_t *parent ;
   que_node_t *brother ;
   dfield_t val ;
   ulint val_buf_size ;
};
#line 17 "./../include/page0types.h"
typedef unsigned char ib_page_t;
#line 19
struct page_cur_struct;
#line 19 "./../include/page0types.h"
typedef struct page_cur_struct page_cur_t;
#line 12 "./../include/read0types.h"
struct read_view_struct;
#line 12 "./../include/read0types.h"
typedef struct read_view_struct read_view_t;
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
#line 669 "./../include/lock0lock.h"
struct lock_sys_struct {
   hash_table_t *rec_hash ;
};
#line 19 "./../include/btr0types.h"
struct btr_search_struct;
#line 19 "./../include/btr0types.h"
typedef struct btr_search_struct btr_search_t;
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
struct __anonstruct_tree_indexes_62 {
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
   struct __anonstruct_tree_indexes_62 tree_indexes ;
   ulint magic_n ;
};
#line 220 "./../include/dict0mem.h"
struct __anonstruct_indexes_63 {
   dict_index_t *prev ;
   dict_index_t *next ;
};
#line 220 "./../include/dict0mem.h"
struct __anonstruct_tree_indexes_64 {
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
   struct __anonstruct_indexes_63 indexes ;
   dict_tree_t *tree ;
   struct __anonstruct_tree_indexes_64 tree_indexes ;
   ulint cached ;
   btr_search_t *search_info ;
   ib_longlong *stat_n_diff_key_vals ;
   ulint stat_index_size ;
   ulint stat_n_leaf_pages ;
   ulint magic_n ;
};
#line 269 "./../include/dict0mem.h"
struct __anonstruct_foreign_list_65 {
   dict_foreign_t *prev ;
   dict_foreign_t *next ;
};
#line 269 "./../include/dict0mem.h"
struct __anonstruct_referenced_list_66 {
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
   struct __anonstruct_foreign_list_65 foreign_list ;
   struct __anonstruct_referenced_list_66 referenced_list ;
};
#line 318 "./../include/dict0mem.h"
struct __anonstruct_indexes_67 {
   ulint count ;
   dict_index_t *start ;
   dict_index_t *end ;
};
#line 318 "./../include/dict0mem.h"
struct __anonstruct_foreign_list_68 {
   ulint count ;
   dict_foreign_t *start ;
   dict_foreign_t *end ;
};
#line 318 "./../include/dict0mem.h"
struct __anonstruct_referenced_list_69 {
   ulint count ;
   dict_foreign_t *start ;
   dict_foreign_t *end ;
};
#line 318 "./../include/dict0mem.h"
struct __anonstruct_table_LRU_70 {
   dict_table_t *prev ;
   dict_table_t *next ;
};
#line 318 "./../include/dict0mem.h"
struct __anonstruct_locks_71 {
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
   struct __anonstruct_indexes_67 indexes ;
   struct __anonstruct_foreign_list_68 foreign_list ;
   struct __anonstruct_referenced_list_69 referenced_list ;
   struct __anonstruct_table_LRU_70 table_LRU ;
   ulint mem_fix ;
   ulint n_mysql_handles_opened ;
   ulint n_foreign_key_checks_running ;
   ulint cached ;
   ib_lock_t *auto_inc_lock ;
   dulint query_cache_inv_trx_id ;
   struct __anonstruct_locks_71 locks ;
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
#line 16 "./../include/dyn0dyn.h"
struct dyn_block_struct;
#line 16 "./../include/dyn0dyn.h"
typedef struct dyn_block_struct dyn_block_t;
#line 17 "./../include/dyn0dyn.h"
typedef dyn_block_t dyn_array_t;
#line 142 "./../include/dyn0dyn.h"
struct __anonstruct_base_73 {
   ulint count ;
   dyn_block_t *start ;
   dyn_block_t *end ;
};
#line 142 "./../include/dyn0dyn.h"
struct __anonstruct_list_74 {
   dyn_block_t *prev ;
   dyn_block_t *next ;
};
#line 142 "./../include/dyn0dyn.h"
struct dyn_block_struct {
   mem_heap_t *heap ;
   ulint used ;
   unsigned char data[512] ;
   struct __anonstruct_base_73 base ;
   struct __anonstruct_list_74 list ;
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
#line 12 "./../include/mtr0types.h"
struct mtr_struct;
#line 12 "./../include/mtr0types.h"
typedef struct mtr_struct mtr_t;
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
#line 27 "./../include/os0proc.h"
typedef ulint os_awe_t;
#line 710 "./../include/buf0buf.h"
struct __anonstruct_flush_list_75 {
   buf_block_t *prev ;
   buf_block_t *next ;
};
#line 710 "./../include/buf0buf.h"
struct __anonstruct_free_76 {
   buf_block_t *prev ;
   buf_block_t *next ;
};
#line 710 "./../include/buf0buf.h"
struct __anonstruct_LRU_77 {
   buf_block_t *prev ;
   buf_block_t *next ;
};
#line 710 "./../include/buf0buf.h"
struct __anonstruct_awe_LRU_free_mapped_78 {
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
   struct __anonstruct_flush_list_75 flush_list ;
   dulint newest_modification ;
   dulint oldest_modification ;
   ulint flush_type ;
   struct __anonstruct_free_76 free ;
   ulint in_free_list ;
   struct __anonstruct_LRU_77 LRU ;
   struct __anonstruct_awe_LRU_free_mapped_78 awe_LRU_free_mapped ;
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
struct __anonstruct_flush_list_79 {
   ulint count ;
   buf_block_t *start ;
   buf_block_t *end ;
};
#line 890 "./../include/buf0buf.h"
struct __anonstruct_free_80 {
   ulint count ;
   buf_block_t *start ;
   buf_block_t *end ;
};
#line 890 "./../include/buf0buf.h"
struct __anonstruct_LRU_81 {
   ulint count ;
   buf_block_t *start ;
   buf_block_t *end ;
};
#line 890 "./../include/buf0buf.h"
struct __anonstruct_awe_LRU_free_mapped_82 {
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
   struct __anonstruct_flush_list_79 flush_list ;
   ulint init_flush[4] ;
   ulint n_flush[4] ;
   os_event_t no_flush[4] ;
   ulint ulint_clock ;
   ulint freed_page_clock ;
   ulint LRU_flush_ended ;
   struct __anonstruct_free_80 free ;
   struct __anonstruct_LRU_81 LRU ;
   buf_block_t *LRU_old ;
   ulint LRU_old_len ;
   struct __anonstruct_awe_LRU_free_mapped_82 awe_LRU_free_mapped ;
};
#line 416 "./../include/trx0sys.h"
struct __anonstruct_trx_list_83 {
   ulint count ;
   trx_t *start ;
   trx_t *end ;
};
#line 416 "./../include/trx0sys.h"
struct __anonstruct_mysql_trx_list_84 {
   ulint count ;
   trx_t *start ;
   trx_t *end ;
};
#line 416 "./../include/trx0sys.h"
struct __anonstruct_rseg_list_85 {
   ulint count ;
   trx_rseg_t *start ;
   trx_rseg_t *end ;
};
#line 416 "./../include/trx0sys.h"
struct __anonstruct_view_list_86 {
   ulint count ;
   read_view_t *start ;
   read_view_t *end ;
};
#line 416 "./../include/trx0sys.h"
struct trx_sys_struct {
   dulint max_trx_id ;
   struct __anonstruct_trx_list_83 trx_list ;
   struct __anonstruct_mysql_trx_list_84 mysql_trx_list ;
   struct __anonstruct_rseg_list_85 rseg_list ;
   trx_rseg_t *latest_rseg ;
   trx_rseg_t *rseg_array[256] ;
   ulint rseg_history_len ;
   struct __anonstruct_view_list_86 view_list ;
};
#line 12 "./../include/usr0types.h"
struct sess_struct;
#line 12 "./../include/usr0types.h"
typedef struct sess_struct sess_t;
#line 18 "./../include/trx0xa.h"
struct xid_t {
   long formatID ;
   long gtrid_length ;
   long bqual_length ;
   char data[128] ;
};
#line 24 "./../include/trx0xa.h"
typedef struct xid_t XID;
#line 378 "./../include/trx0trx.h"
struct __anonstruct_signals_87 {
   trx_sig_t *prev ;
   trx_sig_t *next ;
};
#line 378 "./../include/trx0trx.h"
struct __anonstruct_reply_signals_88 {
   trx_sig_t *prev ;
   trx_sig_t *next ;
};
#line 378 "./../include/trx0trx.h"
struct trx_sig_struct {
   ulint type ;
   ulint state ;
   ulint sender ;
   que_thr_t *receiver ;
   trx_savept_t savept ;
   struct __anonstruct_signals_87 signals ;
   struct __anonstruct_reply_signals_88 reply_signals ;
};
#line 402 "./../include/trx0trx.h"
struct __anonstruct_trx_list_89 {
   trx_t *prev ;
   trx_t *next ;
};
#line 402 "./../include/trx0trx.h"
struct __anonstruct_mysql_trx_list_90 {
   trx_t *prev ;
   trx_t *next ;
};
#line 402 "./../include/trx0trx.h"
struct __anonstruct_signals_91 {
   ulint count ;
   trx_sig_t *start ;
   trx_sig_t *end ;
};
#line 402 "./../include/trx0trx.h"
struct __anonstruct_reply_signals_92 {
   ulint count ;
   trx_sig_t *start ;
   trx_sig_t *end ;
};
#line 402 "./../include/trx0trx.h"
struct __anonstruct_wait_thrs_93 {
   ulint count ;
   que_thr_t *start ;
   que_thr_t *end ;
};
#line 402 "./../include/trx0trx.h"
struct __anonstruct_trx_locks_94 {
   ulint count ;
   ib_lock_t *start ;
   ib_lock_t *end ;
};
#line 402 "./../include/trx0trx.h"
struct __anonstruct_trx_savepoints_95 {
   ulint count ;
   trx_named_savept_t *start ;
   trx_named_savept_t *end ;
};
#line 402 "./../include/trx0trx.h"
struct trx_struct {
   ulint magic_n ;
   char *op_info ;
   ulint type ;
   ulint conc_state ;
   time_t start_time ;
   ulint isolation_level ;
   ulint check_foreigns ;
   ulint check_unique_secondary ;
   dulint id ;
   XID xid ;
   ulint support_xa ;
   dulint no ;
   ulint flush_log_later ;
   ulint must_flush_log_later ;
   dulint commit_lsn ;
   ulint dict_operation ;
   dulint table_id ;
   int active_trans ;
   void *mysql_thd ;
   char **mysql_query_str ;
   char *mysql_log_file_name ;
   ib_longlong mysql_log_offset ;
   char *mysql_master_log_file_name ;
   ib_longlong mysql_master_log_pos ;
   char *repl_wait_binlog_name ;
   ib_longlong repl_wait_binlog_pos ;
   os_thread_id_t mysql_thread_id ;
   ulint mysql_process_no ;
   ulint n_mysql_tables_in_use ;
   ulint mysql_n_tables_locked ;
   ulint dict_operation_lock_mode ;
   ulint has_search_latch ;
   ulint search_latch_timeout ;
   ulint declared_to_be_inside_innodb ;
   ulint n_tickets_to_enter_innodb ;
   ib_lock_t *auto_inc_lock ;
   dict_index_t *new_rec_locks[2] ;
   struct __anonstruct_trx_list_89 trx_list ;
   struct __anonstruct_mysql_trx_list_90 mysql_trx_list ;
   ulint error_state ;
   void *error_info ;
   sess_t *sess ;
   ulint que_state ;
   que_t *graph ;
   ulint n_active_thrs ;
   ulint handling_signals ;
   que_t *graph_before_signal_handling ;
   trx_sig_t sig ;
   struct __anonstruct_signals_91 signals ;
   struct __anonstruct_reply_signals_92 reply_signals ;
   ib_lock_t *wait_lock ;
   ulint was_chosen_as_deadlock_victim ;
   time_t wait_started ;
   struct __anonstruct_wait_thrs_93 wait_thrs ;
   ulint deadlock_mark ;
   mem_heap_t *lock_heap ;
   struct __anonstruct_trx_locks_94 trx_locks ;
   mem_heap_t *global_read_view_heap ;
   read_view_t *global_read_view ;
   read_view_t *read_view ;
   struct __anonstruct_trx_savepoints_95 trx_savepoints ;
   ib_mutex_t undo_mutex ;
   dulint undo_no ;
   trx_savept_t last_sql_stat_start ;
   trx_rseg_t *rseg ;
   trx_undo_t *insert_undo ;
   trx_undo_t *update_undo ;
   dulint roll_limit ;
   ulint pages_undone ;
   trx_undo_arr_t *undo_no_arr ;
   char detailed_error[256] ;
};
#line 331 "./../include/trx0undo.h"
struct __anonstruct_undo_list_96 {
   trx_undo_t *prev ;
   trx_undo_t *next ;
};
#line 331 "./../include/trx0undo.h"
struct trx_undo_struct {
   ulint id ;
   ulint type ;
   ulint state ;
   ulint del_marks ;
   dulint trx_id ;
   XID xid ;
   ulint dict_operation ;
   dulint table_id ;
   trx_rseg_t *rseg ;
   ulint space ;
   ulint hdr_page_no ;
   ulint hdr_offset ;
   ulint last_page_no ;
   ulint size ;
   ulint empty ;
   ulint top_page_no ;
   ulint top_offset ;
   dulint top_undo_no ;
   ib_page_t *guess_page ;
   struct __anonstruct_undo_list_96 undo_list ;
};
#line 277 "./../include/page0cur.h"
struct page_cur_struct {
   unsigned char *rec ;
};
#line 103 "./../include/read0read.h"
struct __anonstruct_view_list_97 {
   read_view_t *prev ;
   read_view_t *next ;
};
#line 103 "./../include/read0read.h"
struct read_view_struct {
   ulint can_be_too_old ;
   dulint low_limit_no ;
   dulint low_limit_id ;
   dulint up_limit_id ;
   ulint n_trx_ids ;
   dulint *trx_ids ;
   trx_t *creator ;
   struct __anonstruct_view_list_97 view_list ;
};
#line 24 "./../include/row0types.h"
struct sel_node_struct;
#line 24 "./../include/row0types.h"
typedef struct sel_node_struct sel_node_t;
#line 13 "./../include/pars0types.h"
struct sym_tab_struct;
#line 13 "./../include/pars0types.h"
typedef struct sym_tab_struct sym_tab_t;
#line 330 "./../include/que0que.h"
struct __anonstruct_thrs_103 {
   que_thr_t *prev ;
   que_thr_t *next ;
};
#line 330 "./../include/que0que.h"
struct __anonstruct_trx_thrs_104 {
   que_thr_t *prev ;
   que_thr_t *next ;
};
#line 330 "./../include/que0que.h"
struct __anonstruct_queue_105 {
   que_thr_t *prev ;
   que_thr_t *next ;
};
#line 330 "./../include/que0que.h"
struct que_thr_struct {
   que_common_t common ;
   ulint magic_n ;
   que_node_t *child ;
   que_t *graph ;
   ulint is_active ;
   ulint state ;
   struct __anonstruct_thrs_103 thrs ;
   struct __anonstruct_trx_thrs_104 trx_thrs ;
   struct __anonstruct_queue_105 queue ;
   que_node_t *run_node ;
   que_node_t *prev_node ;
   ulint resource ;
   ulint lock_state ;
};
#line 370 "./../include/que0que.h"
struct __anonstruct_thrs_106 {
   ulint count ;
   que_thr_t *start ;
   que_thr_t *end ;
};
#line 370 "./../include/que0que.h"
struct __anonstruct_graphs_107 {
   que_fork_t *prev ;
   que_fork_t *next ;
};
#line 370 "./../include/que0que.h"
struct que_fork_struct {
   que_common_t common ;
   que_t *graph ;
   ulint fork_type ;
   ulint n_active_thrs ;
   trx_t *trx ;
   ulint state ;
   que_thr_t *caller ;
   struct __anonstruct_thrs_106 thrs ;
   sym_tab_t *sym_tab ;
   ulint cur_end ;
   ulint cur_pos ;
   ulint cur_on_row ;
   dulint n_inserts ;
   dulint n_updates ;
   dulint n_deletes ;
   sel_node_t *last_sel_node ;
   struct __anonstruct_graphs_107 graphs ;
   mem_heap_t *heap ;
};
#line 40 "./../include/usr0sess.h"
struct __anonstruct_graphs_108 {
   ulint count ;
   que_t *start ;
   que_t *end ;
};
#line 40 "./../include/usr0sess.h"
struct sess_struct {
   ulint state ;
   trx_t *trx ;
   struct __anonstruct_graphs_108 graphs ;
};
#line 105 "./../include/trx0purge.h"
struct trx_purge_struct {
   ulint state ;
   sess_t *sess ;
   trx_t *trx ;
   que_t *query ;
   rw_lock_t latch ;
   read_view_t *view ;
   ib_mutex_t mutex ;
   ulint n_pages_handled ;
   ulint handle_limit ;
   dulint purge_trx_no ;
   dulint purge_undo_no ;
   ulint next_stored ;
   trx_rseg_t *rseg ;
   ulint page_no ;
   ulint offset ;
   ulint hdr_page_no ;
   ulint hdr_offset ;
   trx_undo_arr_t *arr ;
   mem_heap_t *heap ;
};
#line 323 "lock0lock.c"
struct lock_table_struct;
#line 323 "lock0lock.c"
typedef struct lock_table_struct lock_table_t;
#line 324 "lock0lock.c"
struct __anonstruct_locks_109 {
   ib_lock_t *prev ;
   ib_lock_t *next ;
};
#line 324 "lock0lock.c"
struct lock_table_struct {
   dict_table_t *table ;
   struct __anonstruct_locks_109 locks ;
};
#line 331
struct lock_rec_struct;
#line 331 "lock0lock.c"
typedef struct lock_rec_struct lock_rec_t;
#line 332 "lock0lock.c"
struct lock_rec_struct {
   ulint space ;
   ulint page_no ;
   ulint n_bits ;
};
#line 341 "lock0lock.c"
struct __anonstruct_trx_locks_110 {
   ib_lock_t *prev ;
   ib_lock_t *next ;
};
#line 341 "lock0lock.c"
union __anonunion_un_member_111 {
   lock_table_t tab_lock ;
   lock_rec_t rec_lock ;
};
#line 341 "lock0lock.c"
struct lock_struct {
   trx_t *trx ;
   struct __anonstruct_trx_locks_110 trx_locks ;
   ulint type_mode ;
   hash_node_t hash ;
   dict_index_t *index ;
   union __anonunion_un_member_111 un_member ;
};
#line 2558 "lock0lock.c"
struct __anonstruct_old_locks_112 {
   ulint count ;
   ib_lock_t *start ;
   ib_lock_t *end ;
};
extern struct lock_rec_struct __dyc_random_comp_258lock_rec_struct(unsigned int __dyc_exp ) ;
extern struct lock_rec_struct __dyc_read_comp_258lock_rec_struct(void) ;
extern void __dyc_print_comp_258lock_rec_struct(struct lock_rec_struct __dyc_thistype ) ;
extern time_t __dyc_random_typdef_time_t(unsigned int __dyc_exp ) ;
extern time_t __dyc_read_typdef_time_t(void) ;
extern void __dyc_print_typdef_time_t(time_t __dyc_thistype ) ;
extern ib_lock_t *__dyc_random_ptr__typdef_ib_lock_t(unsigned int __dyc_exp ) ;
extern ib_lock_t *__dyc_read_ptr__typdef_ib_lock_t(void) ;
extern void __dyc_print_ptr__typdef_ib_lock_t(ib_lock_t const   *__dyc_thistype ) ;
extern read_view_t __dyc_random_typdef_read_view_t(unsigned int __dyc_exp ) ;
extern read_view_t __dyc_read_typdef_read_view_t(void) ;
extern void __dyc_print_typdef_read_view_t(read_view_t __dyc_thistype ) ;
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
extern trx_sys_t *__dyc_random_ptr__typdef_trx_sys_t(unsigned int __dyc_exp ) ;
extern trx_sys_t *__dyc_read_ptr__typdef_trx_sys_t(void) ;
extern void __dyc_print_ptr__typdef_trx_sys_t(trx_sys_t const   *__dyc_thistype ) ;
extern _IO_FILE *__dyc_random_ptr__typdef__IO_FILE(unsigned int __dyc_exp ) ;
extern _IO_FILE *__dyc_read_ptr__typdef__IO_FILE(void) ;
extern void __dyc_print_ptr__typdef__IO_FILE(_IO_FILE const   *__dyc_thistype ) ;
extern que_common_t __dyc_random_typdef_que_common_t(unsigned int __dyc_exp ) ;
extern que_common_t __dyc_read_typdef_que_common_t(void) ;
extern void __dyc_print_typdef_que_common_t(que_common_t __dyc_thistype ) ;
extern dict_field_t *__dyc_random_ptr__typdef_dict_field_t(unsigned int __dyc_exp ) ;
extern dict_field_t *__dyc_read_ptr__typdef_dict_field_t(void) ;
extern void __dyc_print_ptr__typdef_dict_field_t(dict_field_t const   *__dyc_thistype ) ;
extern struct trx_sys_struct __dyc_random_comp_94trx_sys_struct(unsigned int __dyc_exp ) ;
extern struct trx_sys_struct __dyc_read_comp_94trx_sys_struct(void) ;
extern void __dyc_print_comp_94trx_sys_struct(struct trx_sys_struct __dyc_thistype ) ;
extern struct __anonstruct_trx_savepoints_95 __dyc_random_comp_208__anonstruct_trx_savepoints_95(unsigned int __dyc_exp ) ;
extern struct __anonstruct_trx_savepoints_95 __dyc_read_comp_208__anonstruct_trx_savepoints_95(void) ;
extern void __dyc_print_comp_208__anonstruct_trx_savepoints_95(struct __anonstruct_trx_savepoints_95 __dyc_thistype ) ;
extern struct __anonstruct_list_61 __dyc_random_comp_159__anonstruct_list_61(unsigned int __dyc_exp ) ;
extern struct __anonstruct_list_61 __dyc_read_comp_159__anonstruct_list_61(void) ;
extern void __dyc_print_comp_159__anonstruct_list_61(struct __anonstruct_list_61 __dyc_thistype ) ;
extern que_t *__dyc_random_ptr__typdef_que_t(unsigned int __dyc_exp ) ;
extern que_t *__dyc_read_ptr__typdef_que_t(void) ;
extern void __dyc_print_ptr__typdef_que_t(que_t const   *__dyc_thistype ) ;
extern struct __anonstruct_locks_71 __dyc_random_comp_169__anonstruct_locks_71(unsigned int __dyc_exp ) ;
extern struct __anonstruct_locks_71 __dyc_read_comp_169__anonstruct_locks_71(void) ;
extern void __dyc_print_comp_169__anonstruct_locks_71(struct __anonstruct_locks_71 __dyc_thistype ) ;
extern struct __anonstruct_tree_indexes_62 __dyc_random_comp_160__anonstruct_tree_indexes_62(unsigned int __dyc_exp ) ;
extern struct __anonstruct_tree_indexes_62 __dyc_read_comp_160__anonstruct_tree_indexes_62(void) ;
extern void __dyc_print_comp_160__anonstruct_tree_indexes_62(struct __anonstruct_tree_indexes_62 __dyc_thistype ) ;
extern struct lock_struct __dyc_random_comp_91lock_struct(unsigned int __dyc_exp ) ;
extern struct lock_struct __dyc_read_comp_91lock_struct(void) ;
extern void __dyc_print_comp_91lock_struct(struct lock_struct __dyc_thistype ) ;
extern struct __anonstruct_flush_list_79 __dyc_random_comp_190__anonstruct_flush_list_79(unsigned int __dyc_exp ) ;
extern struct __anonstruct_flush_list_79 __dyc_read_comp_190__anonstruct_flush_list_79(void) ;
extern void __dyc_print_comp_190__anonstruct_flush_list_79(struct __anonstruct_flush_list_79 __dyc_thistype ) ;
extern struct __anonstruct_view_list_97 __dyc_random_comp_210__anonstruct_view_list_97(unsigned int __dyc_exp ) ;
extern struct __anonstruct_view_list_97 __dyc_read_comp_210__anonstruct_view_list_97(void) ;
extern void __dyc_print_comp_210__anonstruct_view_list_97(struct __anonstruct_view_list_97 __dyc_thistype ) ;
extern lock_sys_t *__dyc_random_ptr__typdef_lock_sys_t(unsigned int __dyc_exp ) ;
extern lock_sys_t *__dyc_read_ptr__typdef_lock_sys_t(void) ;
extern void __dyc_print_ptr__typdef_lock_sys_t(lock_sys_t const   *__dyc_thistype ) ;
extern size_t __dyc_random_typdef_size_t(unsigned int __dyc_exp ) ;
extern size_t __dyc_read_typdef_size_t(void) ;
extern void __dyc_print_typdef_size_t(size_t __dyc_thistype ) ;
extern trx_purge_t __dyc_random_typdef_trx_purge_t(unsigned int __dyc_exp ) ;
extern trx_purge_t __dyc_read_typdef_trx_purge_t(void) ;
extern void __dyc_print_typdef_trx_purge_t(trx_purge_t __dyc_thistype ) ;
extern pthread_mutex_t *__dyc_random_ptr__typdef_pthread_mutex_t(unsigned int __dyc_exp ) ;
extern pthread_mutex_t *__dyc_read_ptr__typdef_pthread_mutex_t(void) ;
extern void __dyc_print_ptr__typdef_pthread_mutex_t(pthread_mutex_t const   *__dyc_thistype ) ;
extern trx_t __dyc_random_typdef_trx_t(unsigned int __dyc_exp ) ;
extern trx_t __dyc_read_typdef_trx_t(void) ;
extern void __dyc_print_typdef_trx_t(trx_t __dyc_thistype ) ;
extern struct rw_lock_struct __dyc_random_comp_157rw_lock_struct(unsigned int __dyc_exp ) ;
extern struct rw_lock_struct __dyc_read_comp_157rw_lock_struct(void) ;
extern void __dyc_print_comp_157rw_lock_struct(struct rw_lock_struct __dyc_thistype ) ;
extern dict_foreign_t *__dyc_random_ptr__typdef_dict_foreign_t(unsigned int __dyc_exp ) ;
extern dict_foreign_t *__dyc_read_ptr__typdef_dict_foreign_t(void) ;
extern void __dyc_print_ptr__typdef_dict_foreign_t(dict_foreign_t const   *__dyc_thistype ) ;
extern struct __anonstruct_thrs_103 __dyc_random_comp_248__anonstruct_thrs_103(unsigned int __dyc_exp ) ;
extern struct __anonstruct_thrs_103 __dyc_read_comp_248__anonstruct_thrs_103(void) ;
extern void __dyc_print_comp_248__anonstruct_thrs_103(struct __anonstruct_thrs_103 __dyc_thistype ) ;
extern buf_frame_t __dyc_random_typdef_buf_frame_t(unsigned int __dyc_exp ) ;
extern buf_frame_t __dyc_read_typdef_buf_frame_t(void) ;
extern void __dyc_print_typdef_buf_frame_t(buf_frame_t __dyc_thistype ) ;
extern buf_block_t __dyc_random_typdef_buf_block_t(unsigned int __dyc_exp ) ;
extern buf_block_t __dyc_read_typdef_buf_block_t(void) ;
extern void __dyc_print_typdef_buf_block_t(buf_block_t __dyc_thistype ) ;
extern ib_mutex_t *__dyc_random_ptr__typdef_ib_mutex_t(unsigned int __dyc_exp ) ;
extern ib_mutex_t *__dyc_read_ptr__typdef_ib_mutex_t(void) ;
extern void __dyc_print_ptr__typdef_ib_mutex_t(ib_mutex_t const   *__dyc_thistype ) ;
extern struct __anonstruct_queue_105 __dyc_random_comp_250__anonstruct_queue_105(unsigned int __dyc_exp ) ;
extern struct __anonstruct_queue_105 __dyc_read_comp_250__anonstruct_queue_105(void) ;
extern void __dyc_print_comp_250__anonstruct_queue_105(struct __anonstruct_queue_105 __dyc_thistype ) ;
extern struct __anonstruct_foreign_list_68 __dyc_random_comp_166__anonstruct_foreign_list_68(unsigned int __dyc_exp ) ;
extern struct __anonstruct_foreign_list_68 __dyc_read_comp_166__anonstruct_foreign_list_68(void) ;
extern void __dyc_print_comp_166__anonstruct_foreign_list_68(struct __anonstruct_foreign_list_68 __dyc_thistype ) ;
extern dict_col_t *__dyc_random_ptr__typdef_dict_col_t(unsigned int __dyc_exp ) ;
extern dict_col_t *__dyc_read_ptr__typdef_dict_col_t(void) ;
extern void __dyc_print_ptr__typdef_dict_col_t(dict_col_t const   *__dyc_thistype ) ;
extern dulint __dyc_random_typdef_dulint(unsigned int __dyc_exp ) ;
extern dulint __dyc_read_typdef_dulint(void) ;
extern void __dyc_print_typdef_dulint(dulint __dyc_thistype ) ;
extern struct __anonstruct_undo_list_96 __dyc_random_comp_209__anonstruct_undo_list_96(unsigned int __dyc_exp ) ;
extern struct __anonstruct_undo_list_96 __dyc_read_comp_209__anonstruct_undo_list_96(void) ;
extern void __dyc_print_comp_209__anonstruct_undo_list_96(struct __anonstruct_undo_list_96 __dyc_thistype ) ;
extern uint __dyc_random_typdef_uint(unsigned int __dyc_exp ) ;
extern uint __dyc_read_typdef_uint(void) ;
extern void __dyc_print_typdef_uint(uint __dyc_thistype ) ;
extern trx_undo_t *__dyc_random_ptr__typdef_trx_undo_t(unsigned int __dyc_exp ) ;
extern trx_undo_t *__dyc_read_ptr__typdef_trx_undo_t(void) ;
extern void __dyc_print_ptr__typdef_trx_undo_t(trx_undo_t const   *__dyc_thistype ) ;
extern struct __anonstruct_base_54 __dyc_random_comp_127__anonstruct_base_54(unsigned int __dyc_exp ) ;
extern struct __anonstruct_base_54 __dyc_read_comp_127__anonstruct_base_54(void) ;
extern void __dyc_print_comp_127__anonstruct_base_54(struct __anonstruct_base_54 __dyc_thistype ) ;
extern os_fast_mutex_t *__dyc_random_ptr__typdef_os_fast_mutex_t(unsigned int __dyc_exp ) ;
extern os_fast_mutex_t *__dyc_read_ptr__typdef_os_fast_mutex_t(void) ;
extern void __dyc_print_ptr__typdef_os_fast_mutex_t(os_fast_mutex_t const   *__dyc_thistype ) ;
extern rec_t *__dyc_random_ptr__typdef_rec_t(unsigned int __dyc_exp ) ;
extern rec_t *__dyc_read_ptr__typdef_rec_t(void) ;
extern void __dyc_print_ptr__typdef_rec_t(rec_t const   *__dyc_thistype ) ;
extern que_fork_t *__dyc_random_ptr__typdef_que_fork_t(unsigned int __dyc_exp ) ;
extern que_fork_t *__dyc_read_ptr__typdef_que_fork_t(void) ;
extern void __dyc_print_ptr__typdef_que_fork_t(que_fork_t const   *__dyc_thistype ) ;
extern struct sess_struct __dyc_random_comp_198sess_struct(unsigned int __dyc_exp ) ;
extern struct sess_struct __dyc_read_comp_198sess_struct(void) ;
extern void __dyc_print_comp_198sess_struct(struct sess_struct __dyc_thistype ) ;
extern struct dict_field_struct __dyc_random_comp_108dict_field_struct(unsigned int __dyc_exp ) ;
extern struct dict_field_struct __dyc_read_comp_108dict_field_struct(void) ;
extern void __dyc_print_comp_108dict_field_struct(struct dict_field_struct __dyc_thistype ) ;
extern union __anonunion_pthread_cond_t_6 __dyc_random_comp_18__anonunion_pthread_cond_t_6(unsigned int __dyc_exp ) ;
extern union __anonunion_pthread_cond_t_6 __dyc_read_comp_18__anonunion_pthread_cond_t_6(void) ;
extern void __dyc_print_comp_18__anonunion_pthread_cond_t_6(union __anonunion_pthread_cond_t_6 __dyc_thistype ) ;
extern ib_longlong __dyc_random_typdef_ib_longlong(unsigned int __dyc_exp ) ;
extern ib_longlong __dyc_read_typdef_ib_longlong(void) ;
extern void __dyc_print_typdef_ib_longlong(ib_longlong __dyc_thistype ) ;
extern os_thread_t __dyc_random_typdef_os_thread_t(unsigned int __dyc_exp ) ;
extern os_thread_t __dyc_read_typdef_os_thread_t(void) ;
extern void __dyc_print_typdef_os_thread_t(os_thread_t __dyc_thistype ) ;
extern trx_savept_t __dyc_random_typdef_trx_savept_t(unsigned int __dyc_exp ) ;
extern trx_savept_t __dyc_read_typdef_trx_savept_t(void) ;
extern void __dyc_print_typdef_trx_savept_t(trx_savept_t __dyc_thistype ) ;
extern dfield_t __dyc_random_typdef_dfield_t(unsigned int __dyc_exp ) ;
extern dfield_t __dyc_read_typdef_dfield_t(void) ;
extern void __dyc_print_typdef_dfield_t(dfield_t __dyc_thistype ) ;
extern struct __anonstruct_LRU_77 __dyc_random_comp_188__anonstruct_LRU_77(unsigned int __dyc_exp ) ;
extern struct __anonstruct_LRU_77 __dyc_read_comp_188__anonstruct_LRU_77(void) ;
extern void __dyc_print_comp_188__anonstruct_LRU_77(struct __anonstruct_LRU_77 __dyc_thistype ) ;
extern void *__dyc_random_ptr__typdef_sym_tab_t(unsigned int __dyc_exp ) ;
extern void *__dyc_read_ptr__typdef_sym_tab_t(void) ;
extern void __dyc_print_ptr__typdef_sym_tab_t(void const   * const  __dyc_thistype ) ;
extern lock_table_t __dyc_random_typdef_lock_table_t(unsigned int __dyc_exp ) ;
extern lock_table_t __dyc_read_typdef_lock_table_t(void) ;
extern void __dyc_print_typdef_lock_table_t(lock_table_t __dyc_thistype ) ;
extern struct __anonstruct_list_55 __dyc_random_comp_128__anonstruct_list_55(unsigned int __dyc_exp ) ;
extern struct __anonstruct_list_55 __dyc_read_comp_128__anonstruct_list_55(void) ;
extern void __dyc_print_comp_128__anonstruct_list_55(struct __anonstruct_list_55 __dyc_thistype ) ;
extern struct __anonstruct_trx_list_89 __dyc_random_comp_202__anonstruct_trx_list_89(unsigned int __dyc_exp ) ;
extern struct __anonstruct_trx_list_89 __dyc_read_comp_202__anonstruct_trx_list_89(void) ;
extern void __dyc_print_comp_202__anonstruct_trx_list_89(struct __anonstruct_trx_list_89 __dyc_thistype ) ;
extern __pthread_list_t __dyc_random_typdef___pthread_list_t(unsigned int __dyc_exp ) ;
extern __pthread_list_t __dyc_read_typdef___pthread_list_t(void) ;
extern void __dyc_print_typdef___pthread_list_t(__pthread_list_t __dyc_thistype ) ;
extern void *__dyc_random_ptr__typdef_que_node_t(unsigned int __dyc_exp ) ;
extern void *__dyc_read_ptr__typdef_que_node_t(void) ;
extern void __dyc_print_ptr__typdef_que_node_t(void const   * const  __dyc_thistype ) ;
extern struct xid_t __dyc_random_comp_199xid_t(unsigned int __dyc_exp ) ;
extern struct xid_t __dyc_read_comp_199xid_t(void) ;
extern void __dyc_print_comp_199xid_t(struct xid_t __dyc_thistype ) ;
extern struct __anonstruct_old_locks_112 __dyc_random_comp_261__anonstruct_old_locks_112(unsigned int __dyc_exp ) ;
extern struct __anonstruct_old_locks_112 __dyc_read_comp_261__anonstruct_old_locks_112(void) ;
extern void __dyc_print_comp_261__anonstruct_old_locks_112(struct __anonstruct_old_locks_112 __dyc_thistype ) ;
extern struct __anonstruct_rseg_list_85 __dyc_random_comp_196__anonstruct_rseg_list_85(unsigned int __dyc_exp ) ;
extern struct __anonstruct_rseg_list_85 __dyc_read_comp_196__anonstruct_rseg_list_85(void) ;
extern void __dyc_print_comp_196__anonstruct_rseg_list_85(struct __anonstruct_rseg_list_85 __dyc_thistype ) ;
extern void *__dyc_random_ptr__typdef_trx_rseg_t(unsigned int __dyc_exp ) ;
extern void *__dyc_read_ptr__typdef_trx_rseg_t(void) ;
extern void __dyc_print_ptr__typdef_trx_rseg_t(void const   * const  __dyc_thistype ) ;
extern struct read_view_struct __dyc_random_comp_145read_view_struct(unsigned int __dyc_exp ) ;
extern struct read_view_struct __dyc_read_comp_145read_view_struct(void) ;
extern void __dyc_print_comp_145read_view_struct(struct read_view_struct __dyc_thistype ) ;
extern lock_table_t *__dyc_random_ptr__typdef_lock_table_t(unsigned int __dyc_exp ) ;
extern lock_table_t *__dyc_read_ptr__typdef_lock_table_t(void) ;
extern void __dyc_print_ptr__typdef_lock_table_t(lock_table_t const   *__dyc_thistype ) ;
extern trx_t *__dyc_random_ptr__typdef_trx_t(unsigned int __dyc_exp ) ;
extern trx_t *__dyc_read_ptr__typdef_trx_t(void) ;
extern void __dyc_print_ptr__typdef_trx_t(trx_t const   *__dyc_thistype ) ;
extern os_event_t __dyc_random_typdef_os_event_t(unsigned int __dyc_exp ) ;
extern os_event_t __dyc_read_typdef_os_event_t(void) ;
extern void __dyc_print_typdef_os_event_t(os_event_t __dyc_thistype ) ;
extern struct trx_struct __dyc_random_comp_90trx_struct(unsigned int __dyc_exp ) ;
extern struct trx_struct __dyc_read_comp_90trx_struct(void) ;
extern void __dyc_print_comp_90trx_struct(struct trx_struct __dyc_thistype ) ;
extern __off_t __dyc_random_typdef___off_t(unsigned int __dyc_exp ) ;
extern __off_t __dyc_read_typdef___off_t(void) ;
extern void __dyc_print_typdef___off_t(__off_t __dyc_thistype ) ;
extern struct __anonstruct_trx_locks_110 __dyc_random_comp_259__anonstruct_trx_locks_110(unsigned int __dyc_exp ) ;
extern struct __anonstruct_trx_locks_110 __dyc_read_comp_259__anonstruct_trx_locks_110(void) ;
extern void __dyc_print_comp_259__anonstruct_trx_locks_110(struct __anonstruct_trx_locks_110 __dyc_thistype ) ;
extern struct __pthread_internal_list __dyc_random_comp_14__pthread_internal_list(unsigned int __dyc_exp ) ;
extern struct __pthread_internal_list __dyc_read_comp_14__pthread_internal_list(void) ;
extern void __dyc_print_comp_14__pthread_internal_list(struct __pthread_internal_list __dyc_thistype ) ;
extern rw_lock_t __dyc_random_typdef_rw_lock_t(unsigned int __dyc_exp ) ;
extern rw_lock_t __dyc_read_typdef_rw_lock_t(void) ;
extern void __dyc_print_typdef_rw_lock_t(rw_lock_t __dyc_thistype ) ;
extern pthread_t __dyc_random_typdef_pthread_t(unsigned int __dyc_exp ) ;
extern pthread_t __dyc_read_typdef_pthread_t(void) ;
extern void __dyc_print_typdef_pthread_t(pthread_t __dyc_thistype ) ;
extern mem_block_t __dyc_random_typdef_mem_block_t(unsigned int __dyc_exp ) ;
extern mem_block_t __dyc_read_typdef_mem_block_t(void) ;
extern void __dyc_print_typdef_mem_block_t(mem_block_t __dyc_thistype ) ;
extern union __anonunion_un_member_111 __dyc_random_comp_260__anonunion_un_member_111(unsigned int __dyc_exp ) ;
extern union __anonunion_un_member_111 __dyc_read_comp_260__anonunion_un_member_111(void) ;
extern void __dyc_print_comp_260__anonunion_un_member_111(union __anonunion_un_member_111 __dyc_thistype ) ;
extern que_thr_t __dyc_random_typdef_que_thr_t(unsigned int __dyc_exp ) ;
extern que_thr_t __dyc_read_typdef_que_thr_t(void) ;
extern void __dyc_print_typdef_que_thr_t(que_thr_t __dyc_thistype ) ;
extern struct que_fork_struct __dyc_random_comp_140que_fork_struct(unsigned int __dyc_exp ) ;
extern struct que_fork_struct __dyc_read_comp_140que_fork_struct(void) ;
extern void __dyc_print_comp_140que_fork_struct(struct que_fork_struct __dyc_thistype ) ;
extern struct _IO_marker __dyc_random_comp_37_IO_marker(unsigned int __dyc_exp ) ;
extern struct _IO_marker __dyc_read_comp_37_IO_marker(void) ;
extern void __dyc_print_comp_37_IO_marker(struct _IO_marker __dyc_thistype ) ;
extern struct __anonstruct_awe_LRU_free_mapped_82 __dyc_random_comp_193__anonstruct_awe_LRU_free_mapped_82(unsigned int __dyc_exp ) ;
extern struct __anonstruct_awe_LRU_free_mapped_82 __dyc_read_comp_193__anonstruct_awe_LRU_free_mapped_82(void) ;
extern void __dyc_print_comp_193__anonstruct_awe_LRU_free_mapped_82(struct __anonstruct_awe_LRU_free_mapped_82 __dyc_thistype ) ;
extern struct dict_table_struct __dyc_random_comp_111dict_table_struct(unsigned int __dyc_exp ) ;
extern struct dict_table_struct __dyc_read_comp_111dict_table_struct(void) ;
extern void __dyc_print_comp_111dict_table_struct(struct dict_table_struct __dyc_thistype ) ;
extern void *__dyc_random_ptr__void(unsigned int __dyc_exp ) ;
extern void *__dyc_read_ptr__void(void) ;
extern void __dyc_print_ptr__void(void const   * const  __dyc_thistype ) ;
extern union __anonunion_pthread_mutex_t_4 __dyc_random_comp_15__anonunion_pthread_mutex_t_4(unsigned int __dyc_exp ) ;
extern union __anonunion_pthread_mutex_t_4 __dyc_read_comp_15__anonunion_pthread_mutex_t_4(void) ;
extern void __dyc_print_comp_15__anonunion_pthread_mutex_t_4(union __anonunion_pthread_mutex_t_4 __dyc_thistype ) ;
extern dtype_t __dyc_random_typdef_dtype_t(unsigned int __dyc_exp ) ;
extern dtype_t __dyc_read_typdef_dtype_t(void) ;
extern void __dyc_print_typdef_dtype_t(dtype_t __dyc_thistype ) ;
extern page_cur_t __dyc_random_typdef_page_cur_t(unsigned int __dyc_exp ) ;
extern page_cur_t __dyc_read_typdef_page_cur_t(void) ;
extern void __dyc_print_typdef_page_cur_t(page_cur_t __dyc_thistype ) ;
extern buf_pool_t __dyc_random_typdef_buf_pool_t(unsigned int __dyc_exp ) ;
extern buf_pool_t __dyc_read_typdef_buf_pool_t(void) ;
extern void __dyc_print_typdef_buf_pool_t(buf_pool_t __dyc_thistype ) ;
extern struct __anonstruct_base_73 __dyc_random_comp_172__anonstruct_base_73(unsigned int __dyc_exp ) ;
extern struct __anonstruct_base_73 __dyc_read_comp_172__anonstruct_base_73(void) ;
extern void __dyc_print_comp_172__anonstruct_base_73(struct __anonstruct_base_73 __dyc_thistype ) ;
extern struct hash_table_struct __dyc_random_comp_147hash_table_struct(unsigned int __dyc_exp ) ;
extern struct hash_table_struct __dyc_read_comp_147hash_table_struct(void) ;
extern void __dyc_print_comp_147hash_table_struct(struct hash_table_struct __dyc_thistype ) ;
extern pthread_mutex_t __dyc_random_typdef_pthread_mutex_t(unsigned int __dyc_exp ) ;
extern pthread_mutex_t __dyc_read_typdef_pthread_mutex_t(void) ;
extern void __dyc_print_typdef_pthread_mutex_t(pthread_mutex_t __dyc_thistype ) ;
extern struct trx_savept_struct __dyc_random_comp_105trx_savept_struct(unsigned int __dyc_exp ) ;
extern struct trx_savept_struct __dyc_read_comp_105trx_savept_struct(void) ;
extern void __dyc_print_comp_105trx_savept_struct(struct trx_savept_struct __dyc_thistype ) ;
extern char *__dyc_random_ptr__char(unsigned int __dyc_exp ) ;
extern char *__dyc_read_ptr__char(void) ;
extern void __dyc_print_ptr__char(char const   *__dyc_thistype ) ;
extern mtr_t __dyc_random_typdef_mtr_t(unsigned int __dyc_exp ) ;
extern mtr_t __dyc_read_typdef_mtr_t(void) ;
extern void __dyc_print_typdef_mtr_t(mtr_t __dyc_thistype ) ;
extern struct __anonstruct_graphs_108 __dyc_random_comp_253__anonstruct_graphs_108(unsigned int __dyc_exp ) ;
extern struct __anonstruct_graphs_108 __dyc_read_comp_253__anonstruct_graphs_108(void) ;
extern void __dyc_print_comp_253__anonstruct_graphs_108(struct __anonstruct_graphs_108 __dyc_thistype ) ;
extern struct __anonstruct_thrs_106 __dyc_random_comp_251__anonstruct_thrs_106(unsigned int __dyc_exp ) ;
extern struct __anonstruct_thrs_106 __dyc_read_comp_251__anonstruct_thrs_106(void) ;
extern void __dyc_print_comp_251__anonstruct_thrs_106(struct __anonstruct_thrs_106 __dyc_thistype ) ;
extern struct __anonstruct_LRU_81 __dyc_random_comp_192__anonstruct_LRU_81(unsigned int __dyc_exp ) ;
extern struct __anonstruct_LRU_81 __dyc_read_comp_192__anonstruct_LRU_81(void) ;
extern void __dyc_print_comp_192__anonstruct_LRU_81(struct __anonstruct_LRU_81 __dyc_thistype ) ;
extern longlong __dyc_random_typdef_longlong(unsigned int __dyc_exp ) ;
extern longlong __dyc_read_typdef_longlong(void) ;
extern void __dyc_print_typdef_longlong(longlong __dyc_thistype ) ;
extern struct __anonstruct_free_76 __dyc_random_comp_187__anonstruct_free_76(unsigned int __dyc_exp ) ;
extern struct __anonstruct_free_76 __dyc_read_comp_187__anonstruct_free_76(void) ;
extern void __dyc_print_comp_187__anonstruct_free_76(struct __anonstruct_free_76 __dyc_thistype ) ;
extern struct dyn_block_struct __dyc_random_comp_171dyn_block_struct(unsigned int __dyc_exp ) ;
extern struct dyn_block_struct __dyc_read_comp_171dyn_block_struct(void) ;
extern void __dyc_print_comp_171dyn_block_struct(struct dyn_block_struct __dyc_thistype ) ;
extern struct __anonstruct_referenced_list_69 __dyc_random_comp_167__anonstruct_referenced_list_69(unsigned int __dyc_exp ) ;
extern struct __anonstruct_referenced_list_69 __dyc_read_comp_167__anonstruct_referenced_list_69(void) ;
extern void __dyc_print_comp_167__anonstruct_referenced_list_69(struct __anonstruct_referenced_list_69 __dyc_thistype ) ;
extern struct trx_undo_struct __dyc_random_comp_98trx_undo_struct(unsigned int __dyc_exp ) ;
extern struct trx_undo_struct __dyc_read_comp_98trx_undo_struct(void) ;
extern void __dyc_print_comp_98trx_undo_struct(struct trx_undo_struct __dyc_thistype ) ;
extern struct __anonstruct_mysql_trx_list_90 __dyc_random_comp_203__anonstruct_mysql_trx_list_90(unsigned int __dyc_exp ) ;
extern struct __anonstruct_mysql_trx_list_90 __dyc_read_comp_203__anonstruct_mysql_trx_list_90(void) ;
extern void __dyc_print_comp_203__anonstruct_mysql_trx_list_90(struct __anonstruct_mysql_trx_list_90 __dyc_thistype ) ;
extern dict_table_t __dyc_random_typdef_dict_table_t(unsigned int __dyc_exp ) ;
extern dict_table_t __dyc_read_typdef_dict_table_t(void) ;
extern void __dyc_print_typdef_dict_table_t(dict_table_t __dyc_thistype ) ;
extern struct __anonstruct_view_list_86 __dyc_random_comp_197__anonstruct_view_list_86(unsigned int __dyc_exp ) ;
extern struct __anonstruct_view_list_86 __dyc_read_comp_197__anonstruct_view_list_86(void) ;
extern void __dyc_print_comp_197__anonstruct_view_list_86(struct __anonstruct_view_list_86 __dyc_thistype ) ;
extern mem_heap_t __dyc_random_typdef_mem_heap_t(unsigned int __dyc_exp ) ;
extern mem_heap_t __dyc_read_typdef_mem_heap_t(void) ;
extern void __dyc_print_typdef_mem_heap_t(mem_heap_t __dyc_thistype ) ;
extern void *__dyc_random_ptr__typdef_trx_undo_arr_t(unsigned int __dyc_exp ) ;
extern void *__dyc_read_ptr__typdef_trx_undo_arr_t(void) ;
extern void __dyc_print_ptr__typdef_trx_undo_arr_t(void const   * const  __dyc_thistype ) ;
extern hash_node_t __dyc_random_typdef_hash_node_t(unsigned int __dyc_exp ) ;
extern hash_node_t __dyc_read_typdef_hash_node_t(void) ;
extern void __dyc_print_typdef_hash_node_t(hash_node_t __dyc_thistype ) ;
extern ulong __dyc_random_typdef_ulong(unsigned int __dyc_exp ) ;
extern ulong __dyc_read_typdef_ulong(void) ;
extern void __dyc_print_typdef_ulong(ulong __dyc_thistype ) ;
extern ib_page_t __dyc_random_typdef_ib_page_t(unsigned int __dyc_exp ) ;
extern ib_page_t __dyc_read_typdef_ib_page_t(void) ;
extern void __dyc_print_typdef_ib_page_t(ib_page_t __dyc_thistype ) ;
extern struct __anonstruct_list_74 __dyc_random_comp_173__anonstruct_list_74(unsigned int __dyc_exp ) ;
extern struct __anonstruct_list_74 __dyc_read_comp_173__anonstruct_list_74(void) ;
extern void __dyc_print_comp_173__anonstruct_list_74(struct __anonstruct_list_74 __dyc_thistype ) ;
extern struct __anonstruct_foreign_list_65 __dyc_random_comp_163__anonstruct_foreign_list_65(unsigned int __dyc_exp ) ;
extern struct __anonstruct_foreign_list_65 __dyc_read_comp_163__anonstruct_foreign_list_65(void) ;
extern void __dyc_print_comp_163__anonstruct_foreign_list_65(struct __anonstruct_foreign_list_65 __dyc_thistype ) ;
extern struct dtype_struct __dyc_random_comp_117dtype_struct(unsigned int __dyc_exp ) ;
extern struct dtype_struct __dyc_read_comp_117dtype_struct(void) ;
extern void __dyc_print_comp_117dtype_struct(struct dtype_struct __dyc_thistype ) ;
extern struct __pthread_mutex_s __dyc_random_comp_16__pthread_mutex_s(unsigned int __dyc_exp ) ;
extern struct __pthread_mutex_s __dyc_read_comp_16__pthread_mutex_s(void) ;
extern void __dyc_print_comp_16__pthread_mutex_s(struct __pthread_mutex_s __dyc_thistype ) ;
extern __time_t __dyc_random_typdef___time_t(unsigned int __dyc_exp ) ;
extern __time_t __dyc_read_typdef___time_t(void) ;
extern void __dyc_print_typdef___time_t(__time_t __dyc_thistype ) ;
extern struct dulint_struct __dyc_random_comp_93dulint_struct(unsigned int __dyc_exp ) ;
extern struct dulint_struct __dyc_read_comp_93dulint_struct(void) ;
extern void __dyc_print_comp_93dulint_struct(struct dulint_struct __dyc_thistype ) ;
extern hash_cell_t *__dyc_random_ptr__typdef_hash_cell_t(unsigned int __dyc_exp ) ;
extern hash_cell_t *__dyc_read_ptr__typdef_hash_cell_t(void) ;
extern void __dyc_print_ptr__typdef_hash_cell_t(hash_cell_t const   *__dyc_thistype ) ;
extern os_fast_mutex_t __dyc_random_typdef_os_fast_mutex_t(unsigned int __dyc_exp ) ;
extern os_fast_mutex_t __dyc_read_typdef_os_fast_mutex_t(void) ;
extern void __dyc_print_typdef_os_fast_mutex_t(os_fast_mutex_t __dyc_thistype ) ;
extern struct dfield_struct __dyc_random_comp_115dfield_struct(unsigned int __dyc_exp ) ;
extern struct dfield_struct __dyc_read_comp_115dfield_struct(void) ;
extern void __dyc_print_comp_115dfield_struct(struct dfield_struct __dyc_thistype ) ;
extern dict_table_t *__dyc_random_ptr__typdef_dict_table_t(unsigned int __dyc_exp ) ;
extern dict_table_t *__dyc_read_ptr__typdef_dict_table_t(void) ;
extern void __dyc_print_ptr__typdef_dict_table_t(dict_table_t const   *__dyc_thistype ) ;
extern rw_lock_t *__dyc_random_ptr__typdef_rw_lock_t(unsigned int __dyc_exp ) ;
extern rw_lock_t *__dyc_read_ptr__typdef_rw_lock_t(void) ;
extern void __dyc_print_ptr__typdef_rw_lock_t(rw_lock_t const   *__dyc_thistype ) ;
extern hash_table_t __dyc_random_typdef_hash_table_t(unsigned int __dyc_exp ) ;
extern hash_table_t __dyc_read_typdef_hash_table_t(void) ;
extern void __dyc_print_typdef_hash_table_t(hash_table_t __dyc_thistype ) ;
extern sess_t *__dyc_random_ptr__typdef_sess_t(unsigned int __dyc_exp ) ;
extern sess_t *__dyc_read_ptr__typdef_sess_t(void) ;
extern void __dyc_print_ptr__typdef_sess_t(sess_t const   *__dyc_thistype ) ;
extern dyn_array_t *__dyc_random_ptr__typdef_dyn_array_t(unsigned int __dyc_exp ) ;
extern dyn_array_t *__dyc_read_ptr__typdef_dyn_array_t(void) ;
extern void __dyc_print_ptr__typdef_dyn_array_t(dyn_array_t const   *__dyc_thistype ) ;
extern que_thr_t *__dyc_random_ptr__typdef_que_thr_t(unsigned int __dyc_exp ) ;
extern que_thr_t *__dyc_read_ptr__typdef_que_thr_t(void) ;
extern void __dyc_print_ptr__typdef_que_thr_t(que_thr_t const   *__dyc_thistype ) ;
extern lock_sys_t __dyc_random_typdef_lock_sys_t(unsigned int __dyc_exp ) ;
extern lock_sys_t __dyc_read_typdef_lock_sys_t(void) ;
extern void __dyc_print_typdef_lock_sys_t(lock_sys_t __dyc_thistype ) ;
extern struct mtr_struct __dyc_random_comp_176mtr_struct(unsigned int __dyc_exp ) ;
extern struct mtr_struct __dyc_read_comp_176mtr_struct(void) ;
extern void __dyc_print_comp_176mtr_struct(struct mtr_struct __dyc_thistype ) ;
extern struct page_cur_struct __dyc_random_comp_144page_cur_struct(unsigned int __dyc_exp ) ;
extern struct page_cur_struct __dyc_read_comp_144page_cur_struct(void) ;
extern void __dyc_print_comp_144page_cur_struct(struct page_cur_struct __dyc_thistype ) ;
extern dict_foreign_t __dyc_random_typdef_dict_foreign_t(unsigned int __dyc_exp ) ;
extern dict_foreign_t __dyc_read_typdef_dict_foreign_t(void) ;
extern void __dyc_print_typdef_dict_foreign_t(dict_foreign_t __dyc_thistype ) ;
extern lock_rec_t __dyc_random_typdef_lock_rec_t(unsigned int __dyc_exp ) ;
extern lock_rec_t __dyc_read_typdef_lock_rec_t(void) ;
extern void __dyc_print_typdef_lock_rec_t(lock_rec_t __dyc_thistype ) ;
extern os_awe_t __dyc_random_typdef_os_awe_t(unsigned int __dyc_exp ) ;
extern os_awe_t __dyc_read_typdef_os_awe_t(void) ;
extern void __dyc_print_typdef_os_awe_t(os_awe_t __dyc_thistype ) ;
extern time_t *__dyc_random_ptr__typdef_time_t(unsigned int __dyc_exp ) ;
extern time_t *__dyc_read_ptr__typdef_time_t(void) ;
extern void __dyc_print_ptr__typdef_time_t(time_t const   *__dyc_thistype ) ;
extern struct buf_block_struct __dyc_random_comp_174buf_block_struct(unsigned int __dyc_exp ) ;
extern struct buf_block_struct __dyc_read_comp_174buf_block_struct(void) ;
extern void __dyc_print_comp_174buf_block_struct(struct buf_block_struct __dyc_thistype ) ;
extern hash_table_t *__dyc_random_ptr__typdef_hash_table_t(unsigned int __dyc_exp ) ;
extern hash_table_t *__dyc_read_ptr__typdef_hash_table_t(void) ;
extern void __dyc_print_ptr__typdef_hash_table_t(hash_table_t const   *__dyc_thistype ) ;
extern ib_mutex_t __dyc_random_typdef_ib_mutex_t(unsigned int __dyc_exp ) ;
extern ib_mutex_t __dyc_read_typdef_ib_mutex_t(void) ;
extern void __dyc_print_typdef_ib_mutex_t(ib_mutex_t __dyc_thistype ) ;
extern struct __anonstruct_signals_91 __dyc_random_comp_204__anonstruct_signals_91(unsigned int __dyc_exp ) ;
extern struct __anonstruct_signals_91 __dyc_read_comp_204__anonstruct_signals_91(void) ;
extern void __dyc_print_comp_204__anonstruct_signals_91(struct __anonstruct_signals_91 __dyc_thistype ) ;
extern dict_tree_t *__dyc_random_ptr__typdef_dict_tree_t(unsigned int __dyc_exp ) ;
extern dict_tree_t *__dyc_read_ptr__typdef_dict_tree_t(void) ;
extern void __dyc_print_ptr__typdef_dict_tree_t(dict_tree_t const   *__dyc_thistype ) ;
extern dict_col_t __dyc_random_typdef_dict_col_t(unsigned int __dyc_exp ) ;
extern dict_col_t __dyc_read_typdef_dict_col_t(void) ;
extern void __dyc_print_typdef_dict_col_t(dict_col_t __dyc_thistype ) ;
extern trx_undo_t __dyc_random_typdef_trx_undo_t(unsigned int __dyc_exp ) ;
extern trx_undo_t __dyc_read_typdef_trx_undo_t(void) ;
extern void __dyc_print_typdef_trx_undo_t(trx_undo_t __dyc_thistype ) ;
extern dict_index_t __dyc_random_typdef_dict_index_t(unsigned int __dyc_exp ) ;
extern dict_index_t __dyc_read_typdef_dict_index_t(void) ;
extern void __dyc_print_typdef_dict_index_t(dict_index_t __dyc_thistype ) ;
extern os_event_struct_t __dyc_random_typdef_os_event_struct_t(unsigned int __dyc_exp ) ;
extern os_event_struct_t __dyc_read_typdef_os_event_struct_t(void) ;
extern void __dyc_print_typdef_os_event_struct_t(os_event_struct_t __dyc_thistype ) ;
extern struct __anonstruct_mysql_trx_list_84 __dyc_random_comp_195__anonstruct_mysql_trx_list_84(unsigned int __dyc_exp ) ;
extern struct __anonstruct_mysql_trx_list_84 __dyc_read_comp_195__anonstruct_mysql_trx_list_84(void) ;
extern void __dyc_print_comp_195__anonstruct_mysql_trx_list_84(struct __anonstruct_mysql_trx_list_84 __dyc_thistype ) ;
extern mtr_t *__dyc_random_ptr__typdef_mtr_t(unsigned int __dyc_exp ) ;
extern mtr_t *__dyc_read_ptr__typdef_mtr_t(void) ;
extern void __dyc_print_ptr__typdef_mtr_t(mtr_t const   *__dyc_thistype ) ;
extern dyn_block_t *__dyc_random_ptr__typdef_dyn_block_t(unsigned int __dyc_exp ) ;
extern dyn_block_t *__dyc_read_ptr__typdef_dyn_block_t(void) ;
extern void __dyc_print_ptr__typdef_dyn_block_t(dyn_block_t const   *__dyc_thistype ) ;
extern trx_sig_t __dyc_random_typdef_trx_sig_t(unsigned int __dyc_exp ) ;
extern trx_sig_t __dyc_read_typdef_trx_sig_t(void) ;
extern void __dyc_print_typdef_trx_sig_t(trx_sig_t __dyc_thistype ) ;
extern os_awe_t *__dyc_random_ptr__typdef_os_awe_t(unsigned int __dyc_exp ) ;
extern os_awe_t *__dyc_read_ptr__typdef_os_awe_t(void) ;
extern void __dyc_print_ptr__typdef_os_awe_t(os_awe_t const   *__dyc_thistype ) ;
extern que_fork_t __dyc_random_typdef_que_fork_t(unsigned int __dyc_exp ) ;
extern que_fork_t __dyc_read_typdef_que_fork_t(void) ;
extern void __dyc_print_typdef_que_fork_t(que_fork_t __dyc_thistype ) ;
extern struct __anonstruct___data_7 __dyc_random_comp_19__anonstruct___data_7(unsigned int __dyc_exp ) ;
extern struct __anonstruct___data_7 __dyc_read_comp_19__anonstruct___data_7(void) ;
extern void __dyc_print_comp_19__anonstruct___data_7(struct __anonstruct___data_7 __dyc_thistype ) ;
extern struct __anonstruct_signals_87 __dyc_random_comp_200__anonstruct_signals_87(unsigned int __dyc_exp ) ;
extern struct __anonstruct_signals_87 __dyc_read_comp_200__anonstruct_signals_87(void) ;
extern void __dyc_print_comp_200__anonstruct_signals_87(struct __anonstruct_signals_87 __dyc_thistype ) ;
extern struct __anonstruct_flush_list_75 __dyc_random_comp_186__anonstruct_flush_list_75(unsigned int __dyc_exp ) ;
extern struct __anonstruct_flush_list_75 __dyc_read_comp_186__anonstruct_flush_list_75(void) ;
extern void __dyc_print_comp_186__anonstruct_flush_list_75(struct __anonstruct_flush_list_75 __dyc_thistype ) ;
extern void *__dyc_random_ptr__typdef_sel_node_t(unsigned int __dyc_exp ) ;
extern void *__dyc_read_ptr__typdef_sel_node_t(void) ;
extern void __dyc_print_ptr__typdef_sel_node_t(void const   * const  __dyc_thistype ) ;
extern ulint __dyc_random_typdef_ulint(unsigned int __dyc_exp ) ;
extern ulint __dyc_read_typdef_ulint(void) ;
extern void __dyc_print_typdef_ulint(ulint __dyc_thistype ) ;
extern struct __anonstruct_awe_LRU_free_mapped_78 __dyc_random_comp_189__anonstruct_awe_LRU_free_mapped_78(unsigned int __dyc_exp ) ;
extern struct __anonstruct_awe_LRU_free_mapped_78 __dyc_read_comp_189__anonstruct_awe_LRU_free_mapped_78(void) ;
extern void __dyc_print_comp_189__anonstruct_awe_LRU_free_mapped_78(struct __anonstruct_awe_LRU_free_mapped_78 __dyc_thistype ) ;
extern ib_page_t *__dyc_random_ptr__typdef_ib_page_t(unsigned int __dyc_exp ) ;
extern ib_page_t *__dyc_read_ptr__typdef_ib_page_t(void) ;
extern void __dyc_print_ptr__typdef_ib_page_t(ib_page_t const   *__dyc_thistype ) ;
extern dict_index_t *__dyc_random_ptr__typdef_dict_index_t(unsigned int __dyc_exp ) ;
extern dict_index_t *__dyc_read_ptr__typdef_dict_index_t(void) ;
extern void __dyc_print_ptr__typdef_dict_index_t(dict_index_t const   *__dyc_thistype ) ;
extern os_thread_id_t __dyc_random_typdef_os_thread_id_t(unsigned int __dyc_exp ) ;
extern os_thread_id_t __dyc_read_typdef_os_thread_id_t(void) ;
extern void __dyc_print_typdef_os_thread_id_t(os_thread_id_t __dyc_thistype ) ;
extern struct dict_foreign_struct __dyc_random_comp_112dict_foreign_struct(unsigned int __dyc_exp ) ;
extern struct dict_foreign_struct __dyc_read_comp_112dict_foreign_struct(void) ;
extern void __dyc_print_comp_112dict_foreign_struct(struct dict_foreign_struct __dyc_thistype ) ;
extern __off64_t __dyc_random_typdef___off64_t(unsigned int __dyc_exp ) ;
extern __off64_t __dyc_read_typdef___off64_t(void) ;
extern void __dyc_print_typdef___off64_t(__off64_t __dyc_thistype ) ;
extern struct __anonstruct_trx_locks_94 __dyc_random_comp_207__anonstruct_trx_locks_94(unsigned int __dyc_exp ) ;
extern struct __anonstruct_trx_locks_94 __dyc_read_comp_207__anonstruct_trx_locks_94(void) ;
extern void __dyc_print_comp_207__anonstruct_trx_locks_94(struct __anonstruct_trx_locks_94 __dyc_thistype ) ;
extern struct __anonstruct_reply_signals_88 __dyc_random_comp_201__anonstruct_reply_signals_88(unsigned int __dyc_exp ) ;
extern struct __anonstruct_reply_signals_88 __dyc_read_comp_201__anonstruct_reply_signals_88(void) ;
extern void __dyc_print_comp_201__anonstruct_reply_signals_88(struct __anonstruct_reply_signals_88 __dyc_thistype ) ;
extern struct hash_cell_struct __dyc_random_comp_148hash_cell_struct(unsigned int __dyc_exp ) ;
extern struct hash_cell_struct __dyc_read_comp_148hash_cell_struct(void) ;
extern void __dyc_print_comp_148hash_cell_struct(struct hash_cell_struct __dyc_thistype ) ;
extern mem_block_info_t __dyc_random_typdef_mem_block_info_t(unsigned int __dyc_exp ) ;
extern mem_block_info_t __dyc_read_typdef_mem_block_info_t(void) ;
extern void __dyc_print_typdef_mem_block_info_t(mem_block_info_t __dyc_thistype ) ;
extern struct __anonstruct_list_52 __dyc_random_comp_124__anonstruct_list_52(unsigned int __dyc_exp ) ;
extern struct __anonstruct_list_52 __dyc_read_comp_124__anonstruct_list_52(void) ;
extern void __dyc_print_comp_124__anonstruct_list_52(struct __anonstruct_list_52 __dyc_thistype ) ;
extern struct dict_col_struct __dyc_random_comp_107dict_col_struct(unsigned int __dyc_exp ) ;
extern struct dict_col_struct __dyc_read_comp_107dict_col_struct(void) ;
extern void __dyc_print_comp_107dict_col_struct(struct dict_col_struct __dyc_thistype ) ;
extern read_view_t *__dyc_random_ptr__typdef_read_view_t(unsigned int __dyc_exp ) ;
extern read_view_t *__dyc_read_ptr__typdef_read_view_t(void) ;
extern void __dyc_print_ptr__typdef_read_view_t(read_view_t const   *__dyc_thistype ) ;
extern mem_heap_t **__dyc_random_ptr__ptr__typdef_mem_heap_t(unsigned int __dyc_exp ) ;
extern mem_heap_t **__dyc_read_ptr__ptr__typdef_mem_heap_t(void) ;
extern void __dyc_print_ptr__ptr__typdef_mem_heap_t(mem_heap_t * const  *__dyc_thistype ) ;
extern struct _IO_FILE __dyc_random_comp_31_IO_FILE(unsigned int __dyc_exp ) ;
extern struct _IO_FILE __dyc_read_comp_31_IO_FILE(void) ;
extern void __dyc_print_comp_31_IO_FILE(struct _IO_FILE __dyc_thistype ) ;
extern dulint *__dyc_random_ptr__typdef_dulint(unsigned int __dyc_exp ) ;
extern dulint *__dyc_read_ptr__typdef_dulint(void) ;
extern void __dyc_print_ptr__typdef_dulint(dulint const   *__dyc_thistype ) ;
extern struct dict_index_struct __dyc_random_comp_109dict_index_struct(unsigned int __dyc_exp ) ;
extern struct dict_index_struct __dyc_read_comp_109dict_index_struct(void) ;
extern void __dyc_print_comp_109dict_index_struct(struct dict_index_struct __dyc_thistype ) ;
extern struct __anonstruct_trx_list_83 __dyc_random_comp_194__anonstruct_trx_list_83(unsigned int __dyc_exp ) ;
extern struct __anonstruct_trx_list_83 __dyc_read_comp_194__anonstruct_trx_list_83(void) ;
extern void __dyc_print_comp_194__anonstruct_trx_list_83(struct __anonstruct_trx_list_83 __dyc_thistype ) ;
extern struct __anonstruct_os_event_list_51 __dyc_random_comp_120__anonstruct_os_event_list_51(unsigned int __dyc_exp ) ;
extern struct __anonstruct_os_event_list_51 __dyc_read_comp_120__anonstruct_os_event_list_51(void) ;
extern void __dyc_print_comp_120__anonstruct_os_event_list_51(struct __anonstruct_os_event_list_51 __dyc_thistype ) ;
extern struct __anonstruct_free_80 __dyc_random_comp_191__anonstruct_free_80(unsigned int __dyc_exp ) ;
extern struct __anonstruct_free_80 __dyc_read_comp_191__anonstruct_free_80(void) ;
extern void __dyc_print_comp_191__anonstruct_free_80(struct __anonstruct_free_80 __dyc_thistype ) ;
extern struct que_common_struct __dyc_random_comp_142que_common_struct(unsigned int __dyc_exp ) ;
extern struct que_common_struct __dyc_read_comp_142que_common_struct(void) ;
extern void __dyc_print_comp_142que_common_struct(struct que_common_struct __dyc_thistype ) ;
extern struct os_event_struct __dyc_random_comp_119os_event_struct(unsigned int __dyc_exp ) ;
extern struct os_event_struct __dyc_read_comp_119os_event_struct(void) ;
extern void __dyc_print_comp_119os_event_struct(struct os_event_struct __dyc_thistype ) ;
extern struct _IO_FILE *__dyc_random_ptr__comp_31_IO_FILE(unsigned int __dyc_exp ) ;
extern struct _IO_FILE *__dyc_read_ptr__comp_31_IO_FILE(void) ;
extern void __dyc_print_ptr__comp_31_IO_FILE(struct _IO_FILE  const  *__dyc_thistype ) ;
extern struct buf_pool_struct __dyc_random_comp_175buf_pool_struct(unsigned int __dyc_exp ) ;
extern struct buf_pool_struct __dyc_read_comp_175buf_pool_struct(void) ;
extern void __dyc_print_comp_175buf_pool_struct(struct buf_pool_struct __dyc_thistype ) ;
extern struct trx_sig_struct __dyc_random_comp_96trx_sig_struct(unsigned int __dyc_exp ) ;
extern struct trx_sig_struct __dyc_read_comp_96trx_sig_struct(void) ;
extern void __dyc_print_comp_96trx_sig_struct(struct trx_sig_struct __dyc_thistype ) ;
extern struct __anonstruct_referenced_list_66 __dyc_random_comp_164__anonstruct_referenced_list_66(unsigned int __dyc_exp ) ;
extern struct __anonstruct_referenced_list_66 __dyc_read_comp_164__anonstruct_referenced_list_66(void) ;
extern void __dyc_print_comp_164__anonstruct_referenced_list_66(struct __anonstruct_referenced_list_66 __dyc_thistype ) ;
extern os_event_struct_t *__dyc_random_ptr__typdef_os_event_struct_t(unsigned int __dyc_exp ) ;
extern os_event_struct_t *__dyc_read_ptr__typdef_os_event_struct_t(void) ;
extern void __dyc_print_ptr__typdef_os_event_struct_t(os_event_struct_t const   *__dyc_thistype ) ;
extern trx_purge_t *__dyc_random_ptr__typdef_trx_purge_t(unsigned int __dyc_exp ) ;
extern trx_purge_t *__dyc_read_ptr__typdef_trx_purge_t(void) ;
extern void __dyc_print_ptr__typdef_trx_purge_t(trx_purge_t const   *__dyc_thistype ) ;
extern struct __anonstruct_wait_thrs_93 __dyc_random_comp_206__anonstruct_wait_thrs_93(unsigned int __dyc_exp ) ;
extern struct __anonstruct_wait_thrs_93 __dyc_read_comp_206__anonstruct_wait_thrs_93(void) ;
extern void __dyc_print_comp_206__anonstruct_wait_thrs_93(struct __anonstruct_wait_thrs_93 __dyc_thistype ) ;
extern struct que_thr_struct __dyc_random_comp_141que_thr_struct(unsigned int __dyc_exp ) ;
extern struct que_thr_struct __dyc_read_comp_141que_thr_struct(void) ;
extern void __dyc_print_comp_141que_thr_struct(struct que_thr_struct __dyc_thistype ) ;
extern hash_cell_t __dyc_random_typdef_hash_cell_t(unsigned int __dyc_exp ) ;
extern hash_cell_t __dyc_read_typdef_hash_cell_t(void) ;
extern void __dyc_print_typdef_hash_cell_t(hash_cell_t __dyc_thistype ) ;
extern pthread_cond_t __dyc_random_typdef_pthread_cond_t(unsigned int __dyc_exp ) ;
extern pthread_cond_t __dyc_read_typdef_pthread_cond_t(void) ;
extern void __dyc_print_typdef_pthread_cond_t(pthread_cond_t __dyc_thistype ) ;
extern trx_sig_t *__dyc_random_ptr__typdef_trx_sig_t(unsigned int __dyc_exp ) ;
extern trx_sig_t *__dyc_read_ptr__typdef_trx_sig_t(void) ;
extern void __dyc_print_ptr__typdef_trx_sig_t(trx_sig_t const   *__dyc_thistype ) ;
extern struct __anonstruct_indexes_67 __dyc_random_comp_165__anonstruct_indexes_67(unsigned int __dyc_exp ) ;
extern struct __anonstruct_indexes_67 __dyc_read_comp_165__anonstruct_indexes_67(void) ;
extern void __dyc_print_comp_165__anonstruct_indexes_67(struct __anonstruct_indexes_67 __dyc_thistype ) ;
extern buf_frame_t *__dyc_random_ptr__typdef_buf_frame_t(unsigned int __dyc_exp ) ;
extern buf_frame_t *__dyc_read_ptr__typdef_buf_frame_t(void) ;
extern void __dyc_print_ptr__typdef_buf_frame_t(buf_frame_t const   *__dyc_thistype ) ;
extern buf_block_t *__dyc_random_ptr__typdef_buf_block_t(unsigned int __dyc_exp ) ;
extern buf_block_t *__dyc_read_ptr__typdef_buf_block_t(void) ;
extern void __dyc_print_ptr__typdef_buf_block_t(buf_block_t const   *__dyc_thistype ) ;
extern ib_lock_t __dyc_random_typdef_ib_lock_t(unsigned int __dyc_exp ) ;
extern ib_lock_t __dyc_read_typdef_ib_lock_t(void) ;
extern void __dyc_print_typdef_ib_lock_t(ib_lock_t __dyc_thistype ) ;
extern ulint *__dyc_random_ptr__typdef_ulint(unsigned int __dyc_exp ) ;
extern ulint *__dyc_read_ptr__typdef_ulint(void) ;
extern void __dyc_print_ptr__typdef_ulint(ulint const   *__dyc_thistype ) ;
extern dyn_array_t __dyc_random_typdef_dyn_array_t(unsigned int __dyc_exp ) ;
extern dyn_array_t __dyc_read_typdef_dyn_array_t(void) ;
extern void __dyc_print_typdef_dyn_array_t(dyn_array_t __dyc_thistype ) ;
extern trx_sys_t __dyc_random_typdef_trx_sys_t(unsigned int __dyc_exp ) ;
extern trx_sys_t __dyc_read_typdef_trx_sys_t(void) ;
extern void __dyc_print_typdef_trx_sys_t(trx_sys_t __dyc_thistype ) ;
extern void *__dyc_random_ptr__typdef_trx_named_savept_t(unsigned int __dyc_exp ) ;
extern void *__dyc_read_ptr__typdef_trx_named_savept_t(void) ;
extern void __dyc_print_ptr__typdef_trx_named_savept_t(void const   * const  __dyc_thistype ) ;
extern struct lock_table_struct __dyc_random_comp_256lock_table_struct(unsigned int __dyc_exp ) ;
extern struct lock_table_struct __dyc_read_comp_256lock_table_struct(void) ;
extern void __dyc_print_comp_256lock_table_struct(struct lock_table_struct __dyc_thistype ) ;
extern struct __anonstruct_tree_indexes_64 __dyc_random_comp_162__anonstruct_tree_indexes_64(unsigned int __dyc_exp ) ;
extern struct __anonstruct_tree_indexes_64 __dyc_read_comp_162__anonstruct_tree_indexes_64(void) ;
extern void __dyc_print_comp_162__anonstruct_tree_indexes_64(struct __anonstruct_tree_indexes_64 __dyc_thistype ) ;
extern struct trx_struct *__dyc_random_ptr__comp_90trx_struct(unsigned int __dyc_exp ) ;
extern struct trx_struct *__dyc_read_ptr__comp_90trx_struct(void) ;
extern void __dyc_print_ptr__comp_90trx_struct(struct trx_struct  const  *__dyc_thistype ) ;
extern struct __anonstruct_reply_signals_92 __dyc_random_comp_205__anonstruct_reply_signals_92(unsigned int __dyc_exp ) ;
extern struct __anonstruct_reply_signals_92 __dyc_read_comp_205__anonstruct_reply_signals_92(void) ;
extern void __dyc_print_comp_205__anonstruct_reply_signals_92(struct __anonstruct_reply_signals_92 __dyc_thistype ) ;
extern struct mem_block_info_struct __dyc_random_comp_126mem_block_info_struct(unsigned int __dyc_exp ) ;
extern struct mem_block_info_struct __dyc_read_comp_126mem_block_info_struct(void) ;
extern void __dyc_print_comp_126mem_block_info_struct(struct mem_block_info_struct __dyc_thistype ) ;
extern que_t __dyc_random_typdef_que_t(unsigned int __dyc_exp ) ;
extern que_t __dyc_read_typdef_que_t(void) ;
extern void __dyc_print_typdef_que_t(que_t __dyc_thistype ) ;
extern buf_block_t **__dyc_random_ptr__ptr__typdef_buf_block_t(unsigned int __dyc_exp ) ;
extern buf_block_t **__dyc_read_ptr__ptr__typdef_buf_block_t(void) ;
extern void __dyc_print_ptr__ptr__typdef_buf_block_t(buf_block_t * const  *__dyc_thistype ) ;
extern ib_longlong *__dyc_random_ptr__typdef_ib_longlong(unsigned int __dyc_exp ) ;
extern ib_longlong *__dyc_read_ptr__typdef_ib_longlong(void) ;
extern void __dyc_print_ptr__typdef_ib_longlong(ib_longlong const   *__dyc_thistype ) ;
extern struct mutex_struct __dyc_random_comp_118mutex_struct(unsigned int __dyc_exp ) ;
extern struct mutex_struct __dyc_read_comp_118mutex_struct(void) ;
extern void __dyc_print_comp_118mutex_struct(struct mutex_struct __dyc_thistype ) ;
extern void *__dyc_random_ptr__typdef__IO_lock_t(unsigned int __dyc_exp ) ;
extern void *__dyc_read_ptr__typdef__IO_lock_t(void) ;
extern void __dyc_print_ptr__typdef__IO_lock_t(void const   * const  __dyc_thistype ) ;
extern XID __dyc_random_typdef_XID(unsigned int __dyc_exp ) ;
extern XID __dyc_read_typdef_XID(void) ;
extern void __dyc_print_typdef_XID(XID __dyc_thistype ) ;
extern dict_tree_t __dyc_random_typdef_dict_tree_t(unsigned int __dyc_exp ) ;
extern dict_tree_t __dyc_read_typdef_dict_tree_t(void) ;
extern void __dyc_print_typdef_dict_tree_t(dict_tree_t __dyc_thistype ) ;
extern struct _IO_marker *__dyc_random_ptr__comp_37_IO_marker(unsigned int __dyc_exp ) ;
extern struct _IO_marker *__dyc_read_ptr__comp_37_IO_marker(void) ;
extern void __dyc_print_ptr__comp_37_IO_marker(struct _IO_marker  const  *__dyc_thistype ) ;
extern dyn_block_t __dyc_random_typdef_dyn_block_t(unsigned int __dyc_exp ) ;
extern dyn_block_t __dyc_read_typdef_dyn_block_t(void) ;
extern void __dyc_print_typdef_dyn_block_t(dyn_block_t __dyc_thistype ) ;
extern struct __anonstruct_table_LRU_70 __dyc_random_comp_168__anonstruct_table_LRU_70(unsigned int __dyc_exp ) ;
extern struct __anonstruct_table_LRU_70 __dyc_read_comp_168__anonstruct_table_LRU_70(void) ;
extern void __dyc_print_comp_168__anonstruct_table_LRU_70(struct __anonstruct_table_LRU_70 __dyc_thistype ) ;
extern struct __anonstruct_indexes_63 __dyc_random_comp_161__anonstruct_indexes_63(unsigned int __dyc_exp ) ;
extern struct __anonstruct_indexes_63 __dyc_read_comp_161__anonstruct_indexes_63(void) ;
extern void __dyc_print_comp_161__anonstruct_indexes_63(struct __anonstruct_indexes_63 __dyc_thistype ) ;
extern struct trx_purge_struct __dyc_random_comp_101trx_purge_struct(unsigned int __dyc_exp ) ;
extern struct trx_purge_struct __dyc_read_comp_101trx_purge_struct(void) ;
extern void __dyc_print_comp_101trx_purge_struct(struct trx_purge_struct __dyc_thistype ) ;
extern struct __anonstruct_trx_thrs_104 __dyc_random_comp_249__anonstruct_trx_thrs_104(unsigned int __dyc_exp ) ;
extern struct __anonstruct_trx_thrs_104 __dyc_read_comp_249__anonstruct_trx_thrs_104(void) ;
extern void __dyc_print_comp_249__anonstruct_trx_thrs_104(struct __anonstruct_trx_thrs_104 __dyc_thistype ) ;
extern struct dict_tree_struct __dyc_random_comp_110dict_tree_struct(unsigned int __dyc_exp ) ;
extern struct dict_tree_struct __dyc_read_comp_110dict_tree_struct(void) ;
extern void __dyc_print_comp_110dict_tree_struct(struct dict_tree_struct __dyc_thistype ) ;
extern sess_t __dyc_random_typdef_sess_t(unsigned int __dyc_exp ) ;
extern sess_t __dyc_read_typdef_sess_t(void) ;
extern void __dyc_print_typdef_sess_t(sess_t __dyc_thistype ) ;
extern FILE __dyc_random_typdef_FILE(unsigned int __dyc_exp ) ;
extern FILE __dyc_read_typdef_FILE(void) ;
extern void __dyc_print_typdef_FILE(FILE __dyc_thistype ) ;
extern struct __anonstruct_graphs_107 __dyc_random_comp_252__anonstruct_graphs_107(unsigned int __dyc_exp ) ;
extern struct __anonstruct_graphs_107 __dyc_read_comp_252__anonstruct_graphs_107(void) ;
extern void __dyc_print_comp_252__anonstruct_graphs_107(struct __anonstruct_graphs_107 __dyc_thistype ) ;
extern page_cur_t *__dyc_random_ptr__typdef_page_cur_t(unsigned int __dyc_exp ) ;
extern page_cur_t *__dyc_read_ptr__typdef_page_cur_t(void) ;
extern void __dyc_print_ptr__typdef_page_cur_t(page_cur_t const   *__dyc_thistype ) ;
extern buf_pool_t *__dyc_random_ptr__typdef_buf_pool_t(unsigned int __dyc_exp ) ;
extern buf_pool_t *__dyc_read_ptr__typdef_buf_pool_t(void) ;
extern void __dyc_print_ptr__typdef_buf_pool_t(buf_pool_t const   *__dyc_thistype ) ;
extern _IO_FILE __dyc_random_typdef__IO_FILE(unsigned int __dyc_exp ) ;
extern _IO_FILE __dyc_read_typdef__IO_FILE(void) ;
extern void __dyc_print_typdef__IO_FILE(_IO_FILE __dyc_thistype ) ;
extern struct __anonstruct_locks_109 __dyc_random_comp_257__anonstruct_locks_109(unsigned int __dyc_exp ) ;
extern struct __anonstruct_locks_109 __dyc_read_comp_257__anonstruct_locks_109(void) ;
extern void __dyc_print_comp_257__anonstruct_locks_109(struct __anonstruct_locks_109 __dyc_thistype ) ;
extern dict_field_t __dyc_random_typdef_dict_field_t(unsigned int __dyc_exp ) ;
extern dict_field_t __dyc_read_typdef_dict_field_t(void) ;
extern void __dyc_print_typdef_dict_field_t(dict_field_t __dyc_thistype ) ;
extern char **__dyc_random_ptr__ptr__char(unsigned int __dyc_exp ) ;
extern char **__dyc_read_ptr__ptr__char(void) ;
extern void __dyc_print_ptr__ptr__char(char * const  *__dyc_thistype ) ;
extern struct lock_sys_struct __dyc_random_comp_92lock_sys_struct(unsigned int __dyc_exp ) ;
extern struct lock_sys_struct __dyc_read_comp_92lock_sys_struct(void) ;
extern void __dyc_print_comp_92lock_sys_struct(struct lock_sys_struct __dyc_thistype ) ;
extern rec_t __dyc_random_typdef_rec_t(unsigned int __dyc_exp ) ;
extern rec_t __dyc_read_typdef_rec_t(void) ;
extern void __dyc_print_typdef_rec_t(rec_t __dyc_thistype ) ;
extern struct __pthread_internal_list *__dyc_random_ptr__comp_14__pthread_internal_list(unsigned int __dyc_exp ) ;
extern struct __pthread_internal_list *__dyc_read_ptr__comp_14__pthread_internal_list(void) ;
extern void __dyc_print_ptr__comp_14__pthread_internal_list(struct __pthread_internal_list  const  *__dyc_thistype ) ;
