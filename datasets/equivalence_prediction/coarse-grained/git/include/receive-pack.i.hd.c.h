#line 141 "/usr/include/x86_64-linux-gnu/bits/types.h"
typedef long __off_t;
#line 142 "/usr/include/x86_64-linux-gnu/bits/types.h"
typedef long __off64_t;
#line 143 "/usr/include/x86_64-linux-gnu/bits/types.h"
typedef int __pid_t;
#line 149 "/usr/include/x86_64-linux-gnu/bits/types.h"
typedef long __time_t;
#line 180 "/usr/include/x86_64-linux-gnu/bits/types.h"
typedef long __ssize_t;
#line 189 "/usr/include/x86_64-linux-gnu/bits/types.h"
typedef long __intptr_t;
#line 221 "/usr/include/unistd.h"
typedef __ssize_t ssize_t;
#line 212 "/usr/lib/gcc/x86_64-linux-gnu/4.6/include/stddef.h"
typedef unsigned long size_t;
#line 246 "/usr/include/unistd.h"
typedef __off64_t off_t;
#line 261 "/usr/include/unistd.h"
typedef __pid_t pid_t;
#line 268 "/usr/include/unistd.h"
typedef __intptr_t intptr_t;
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
#line 80 "/usr/include/stdio.h"
typedef __gnuc_va_list va_list;
#line 76 "/usr/include/time.h"
typedef __time_t time_t;
#line 198 "/usr/include/x86_64-linux-gnu/sys/types.h"
typedef long long int64_t;
#line 24 "/usr/include/x86_64-linux-gnu/bits/sigset.h"
typedef int __sig_atomic_t;
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
union __anonunion_pthread_mutex_t_13 {
   struct __pthread_mutex_s __data ;
   char __size[40] ;
   long __align ;
};
#line 76 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h"
typedef union __anonunion_pthread_mutex_t_13 pthread_mutex_t;
#line 41 "/usr/include/signal.h"
typedef __sig_atomic_t sig_atomic_t;
#line 37 "/usr/include/x86_64-linux-gnu/sys/poll.h"
typedef unsigned long nfds_t;
#line 40 "/usr/include/x86_64-linux-gnu/sys/poll.h"
struct pollfd {
   int fd ;
   short events ;
   short revents ;
};
#line 49 "/usr/include/stdint.h"
typedef unsigned char uint8_t;
#line 52 "/usr/include/stdint.h"
typedef unsigned int uint32_t;
#line 56 "/usr/include/stdint.h"
typedef unsigned long uint64_t;
#line 136 "/usr/include/stdint.h"
typedef unsigned long uintmax_t;
#line 332 "./git-compat-util.h"
typedef uintmax_t timestamp_t;
#line 463
struct strbuf;
#line 463
struct strbuf;
#line 4 "./strbuf.h"
struct string_list;
#line 4
struct string_list;
#line 66 "./strbuf.h"
struct strbuf {
   size_t alloc ;
   size_t len ;
   char *buf ;
};
#line 79
struct object_id;
#line 79
struct object_id;
#line 4 "./path.h"
struct repository;
#line 4
struct repository;
#line 5
struct strbuf;
#line 172 "./path.h"
struct path_cache {
   char *squash_msg ;
   char *merge_msg ;
   char *merge_rr ;
   char *merge_mode ;
   char *merge_head ;
   char *merge_autostash ;
   char *auto_merge ;
   char *fetch_head ;
   char *shallow ;
};
#line 6 "./repository.h"
struct config_set;
#line 6
struct config_set;
#line 7
struct git_hash_algo;
#line 7
struct git_hash_algo;
#line 8
struct index_state;
#line 8
struct index_state;
#line 9
struct lock_file;
#line 9
struct lock_file;
#line 11
struct raw_object_store;
#line 11
struct raw_object_store;
#line 12
struct submodule_cache;
#line 12
struct submodule_cache;
#line 13
struct promisor_remote_config;
#line 13
struct promisor_remote_config;
#line 15
enum untracked_cache_setting {
    UNTRACKED_CACHE_UNSET = -1,
    UNTRACKED_CACHE_REMOVE = 0,
    UNTRACKED_CACHE_KEEP = 1,
    UNTRACKED_CACHE_WRITE = 2
} ;
#line 22
enum fetch_negotiation_setting {
    FETCH_NEGOTIATION_UNSET = -1,
    FETCH_NEGOTIATION_NONE = 0,
    FETCH_NEGOTIATION_DEFAULT = 1,
    FETCH_NEGOTIATION_SKIPPING = 2,
    FETCH_NEGOTIATION_NOOP = 3
} ;
#line 30 "./repository.h"
struct repo_settings {
   int initialized ;
   int core_commit_graph ;
   int commit_graph_read_changed_paths ;
   int gc_write_commit_graph ;
   int fetch_write_commit_graph ;
   int index_version ;
   enum untracked_cache_setting core_untracked_cache ;
   int pack_use_sparse ;
   enum fetch_negotiation_setting fetch_negotiation_algorithm ;
   int core_multi_pack_index ;
   unsigned int command_requires_full_index : 1 ;
   unsigned int sparse_index : 1 ;
};
#line 50
struct parsed_object_pool;
#line 50
struct ref_store;
#line 50 "./repository.h"
struct repository {
   char *gitdir ;
   char *commondir ;
   struct raw_object_store *objects ;
   struct parsed_object_pool *parsed_objects ;
   struct ref_store *refs_private ;
   struct path_cache cached_paths ;
   char *graft_file ;
   char *index_file ;
   char *worktree ;
   char *submodule_prefix ;
   struct repo_settings settings ;
   struct config_set *config ;
   struct submodule_cache *submodule_cache ;
   struct index_state *index ;
   struct git_hash_algo *hash_algo ;
   int trace2_repo_id ;
   int commit_graph_disabled ;
   char *repository_format_partial_clone ;
   struct promisor_remote_config *promisor_remote_config ;
   unsigned int different_commondir : 1 ;
};
#line 39 "./sha1dc/sha1.h"
struct __anonstruct_SHA1_CTX_84 {
   uint64_t total ;
   uint32_t ihv[5] ;
   unsigned char buffer[64] ;
   int found_collision ;
   int safe_hash ;
   int detect_coll ;
   int ubc_check ;
   int reduced_round_coll ;
   void (*callback)(uint64_t  , uint32_t const   * , uint32_t const   * ,
                    uint32_t const   * , uint32_t const   * ) ;
   uint32_t ihv1[5] ;
   uint32_t ihv2[5] ;
   uint32_t m1[80] ;
   uint32_t m2[80] ;
   uint32_t states[80][5] ;
};
#line 39 "./sha1dc/sha1.h"
typedef struct __anonstruct_SHA1_CTX_84 SHA1_CTX;
#line 6 "./sha256/block/sha256.h"
struct blk_SHA256_CTX {
   uint32_t state[8] ;
   uint64_t size ;
   uint32_t offset ;
   uint8_t buf[64] ;
};
#line 13 "./sha256/block/sha256.h"
typedef struct blk_SHA256_CTX blk_SHA256_CTX;
#line 116 "./hash.h"
struct object_id {
   unsigned char hash[32] ;
   int algo ;
};
#line 122 "./hash.h"
union git_hash_ctx {
   SHA1_CTX sha1 ;
   blk_SHA256_CTX sha256 ;
};
#line 126 "./hash.h"
typedef union git_hash_ctx git_hash_ctx;
#line 134 "./hash.h"
struct git_hash_algo {
   char *name ;
   uint32_t format_id ;
   size_t rawsz ;
   size_t hexsz ;
   size_t blksz ;
   void (*init_fn)(git_hash_ctx *ctx ) ;
   void (*clone_fn)(git_hash_ctx *dst , git_hash_ctx const   *src ) ;
   void (*update_fn)(git_hash_ctx *ctx , void const   *in , size_t len ) ;
   void (*final_fn)(unsigned char *hash , git_hash_ctx *ctx ) ;
   void (*final_oid_fn)(struct object_id *oid , git_hash_ctx *ctx ) ;
   struct object_id *empty_tree ;
   struct object_id *empty_blob ;
   struct object_id *null_oid ;
};
#line 148 "./hashmap.h"
struct hashmap_entry {
   struct hashmap_entry *next ;
   unsigned int hash ;
};
#line 187 "./hashmap.h"
struct hashmap {
   struct hashmap_entry **table ;
   int (*cmpfn)(void const   *hashmap_cmp_fn_data ,
                struct hashmap_entry  const  *entry ,
                struct hashmap_entry  const  *entry_or_key ,
                void const   *keydata ) ;
   void *cmpfn_data ;
   unsigned int private_size ;
   unsigned int tablesize ;
   unsigned int grow_at ;
   unsigned int shrink_at ;
   unsigned int do_count_items : 1 ;
};
#line 35 "./list.h"
struct list_head {
   struct list_head *next ;
   struct list_head *prev ;
};
#line 171 "./list.h"
struct volatile_list_head {
   struct volatile_list_head *next ;
   struct volatile_list_head *prev ;
};
#line 6 "./advice.h"
struct string_list;
#line 68 "./string-list.h"
struct string_list_item {
   char *string ;
   void *util ;
};
#line 87 "./string-list.h"
struct string_list {
   struct string_list_item *items ;
   unsigned int nr ;
   unsigned int alloc ;
   unsigned int strdup_strings : 1 ;
   int (*cmp)(char const   * , char const   * ) ;
};
#line 10 "./convert.h"
struct index_state;
#line 11
struct strbuf;
#line 83 "./trace.h"
struct trace_key {
   char *key ;
   int fd ;
   unsigned int initialized : 1 ;
   unsigned int need_close : 1 ;
};
#line 38 "./trace2.h"
struct child_process;
#line 38
struct child_process;
#line 39
struct repository;
#line 40 "./pack-revindex.h"
struct packed_git;
#line 40
struct packed_git;
#line 41
struct multi_pack_index;
#line 41
struct multi_pack_index;
#line 52 "./oid-array.h"
struct oid_array {
   struct object_id *oid ;
   size_t nr ;
   size_t alloc ;
   int sorted ;
};
#line 4 "./mem-pool.h"
struct mp_block {
   struct mp_block *next_block ;
   char *next_free ;
   char *end ;
   uintmax_t space[] ;
};
#line 11 "./mem-pool.h"
struct mem_pool {
   struct mp_block *mp_block ;
   size_t block_alloc ;
   size_t pool_alloc ;
};
#line 127 "./cache.h"
struct cache_time {
   uint32_t sec ;
   uint32_t nsec ;
};
#line 132 "./cache.h"
struct stat_data {
   struct cache_time sd_ctime ;
   struct cache_time sd_mtime ;
   unsigned int sd_dev ;
   unsigned int sd_ino ;
   unsigned int sd_uid ;
   unsigned int sd_gid ;
   unsigned int sd_size ;
};
#line 142 "./cache.h"
struct cache_entry {
   struct hashmap_entry ent ;
   struct stat_data ce_stat_data ;
   unsigned int ce_mode ;
   unsigned int ce_flags ;
   unsigned int mem_pool_allocated ;
   unsigned int ce_namelen ;
   unsigned int index ;
   struct object_id oid ;
   char name[] ;
};
#line 211
struct child_process;
#line 212
struct tree;
#line 212
struct tree;
#line 309
struct split_index;
#line 309
struct split_index;
#line 310
struct untracked_cache;
#line 310
struct untracked_cache;
#line 311
struct progress;
#line 311
struct progress;
#line 312
struct pattern_list;
#line 312
struct pattern_list;
#line 314
struct cache_tree;
#line 314
struct ewah_bitmap;
#line 314 "./cache.h"
struct index_state {
   struct cache_entry **cache ;
   unsigned int version ;
   unsigned int cache_nr ;
   unsigned int cache_alloc ;
   unsigned int cache_changed ;
   struct string_list *resolve_undo ;
   struct cache_tree *cache_tree ;
   struct split_index *split_index ;
   struct cache_time timestamp ;
   unsigned int name_hash_initialized : 1 ;
   unsigned int initialized : 1 ;
   unsigned int drop_cache_tree : 1 ;
   unsigned int updated_workdir : 1 ;
   unsigned int updated_skipworktree : 1 ;
   unsigned int fsmonitor_has_run_once : 1 ;
   unsigned int sparse_index : 1 ;
   struct hashmap name_hash ;
   struct hashmap dir_hash ;
   struct object_id oid ;
   struct untracked_cache *untracked ;
   char *fsmonitor_last_update ;
   struct ewah_bitmap *fsmonitor_dirty ;
   struct mem_pool *ce_mem_pool ;
   struct progress *progress ;
   struct repository *repo ;
   struct pattern_list *sparse_checkout_patterns ;
};
#line 742
struct lock_file;
#line 1547
struct object;
#line 1676 "./cache.h"
struct pack_window {
   struct pack_window *next ;
   unsigned char *base ;
   off_t offset ;
   size_t len ;
   unsigned int last_used ;
   unsigned int inuse_cnt ;
};
#line 1846
struct commit_list;
#line 1846
struct commit_list;
#line 1864 "./cache.h"
struct stat_validity {
   struct stat_data *sd ;
};
#line 6 "./object.h"
struct buffer_slab;
#line 6
struct buffer_slab;
#line 8
struct alloc_state;
#line 8
struct commit_graft;
#line 8 "./object.h"
struct parsed_object_pool {
   struct object **obj_hash ;
   int nr_objs ;
   int obj_hash_size ;
   struct alloc_state *blob_state ;
   struct alloc_state *tree_state ;
   struct alloc_state *commit_state ;
   struct alloc_state *tag_state ;
   struct alloc_state *object_state ;
   struct commit_graft **grafts ;
   int grafts_alloc ;
   int grafts_nr ;
   int is_shallow ;
   struct stat_validity *shallow_stat ;
   char *alternate_shallow_file ;
   int commit_graft_prepared ;
   int substituted_parent ;
   struct buffer_slab *buffer_slab ;
};
#line 88 "./object.h"
struct object {
   unsigned int parsed : 1 ;
   unsigned int type : 3 ;
   unsigned int flags : 28 ;
   struct object_id oid ;
};
#line 6 "./tree.h"
struct repository;
#line 7
struct strbuf;
#line 9 "./tree.h"
struct tree {
   struct object object ;
   void *buffer ;
   unsigned long size ;
};
#line 4 "./gpg-interface.h"
struct strbuf;
#line 10
enum signature_trust_level {
    TRUST_UNDEFINED = 0,
    TRUST_NEVER = 1,
    TRUST_MARGINAL = 2,
    TRUST_FULLY = 3,
    TRUST_ULTIMATE = 4
} ;
#line 18 "./gpg-interface.h"
struct signature_check {
   char *payload ;
   char *gpg_output ;
   char *gpg_status ;
   char result ;
   char *signer ;
   char *key ;
   char *fingerprint ;
   char *primary_key_fingerprint ;
   enum signature_trust_level trust_level ;
};
#line 7 "./pretty.h"
struct commit;
#line 7
struct commit;
#line 8
struct strbuf;
#line 19 "./commit.h"
struct commit_list {
   struct commit *item ;
   struct commit_list *next ;
};
#line 29 "./commit.h"
struct commit {
   struct object object ;
   timestamp_t date ;
   struct commit_list *parents ;
   struct tree *maybe_tree ;
   unsigned int index ;
};
#line 105
struct buffer_slab;
#line 238 "./commit.h"
struct commit_graft {
   struct object_id oid ;
   int nr_parent ;
   struct object_id parent[] ;
};
#line 257
struct oid_array;
#line 23 "./config.h"
struct object_id;
#line 417 "./config.h"
struct config_set_element {
   struct hashmap_entry ent ;
   char *key ;
   struct string_list value_list ;
};
#line 423 "./config.h"
struct configset_list_item {
   struct config_set_element *e ;
   int value_index ;
};
#line 434 "./config.h"
struct configset_list {
   struct configset_list_item *items ;
   unsigned int nr ;
   unsigned int alloc ;
};
#line 439 "./config.h"
struct config_set {
   struct hashmap config_hash ;
   int hash_initialized ;
   struct configset_list list ;
};
#line 496
struct repository;
#line 78 "./tempfile.h"
struct tempfile {
   struct volatile_list_head list ;
   sig_atomic_t active ;
   int fd ;
   FILE *fp ;
   pid_t owner ;
   struct strbuf filename ;
};
#line 120 "./lockfile.h"
struct lock_file {
   struct tempfile *tempfile ;
};
#line 6 "./csum-file.h"
struct progress;
#line 7 "./pack.h"
struct repository;
#line 15 "./pack.h"
struct pack_header {
   uint32_t hdr_signature ;
   uint32_t hdr_version ;
   uint32_t hdr_entries ;
};
#line 80
struct progress;
#line 6 "./refs.h"
struct object_id;
#line 7
struct ref_store;
#line 8
struct repository;
#line 9
struct strbuf;
#line 10
struct string_list;
#line 11
struct string_list_item;
#line 12
struct worktree;
#line 12
struct worktree;
#line 152
struct strvec;
#line 152
struct strvec;
#line 262
struct ref_transaction;
#line 262
struct ref_transaction;
#line 297 "./refs.h"
typedef int each_ref_fn(char const   *refname , struct object_id  const  *oid ,
                        int flags , void *cb_data );
#line 98 "./pkt-line.h"
enum packet_read_status {
    PACKET_READ_EOF = 0,
    PACKET_READ_NORMAL = 1,
    PACKET_READ_FLUSH = 2,
    PACKET_READ_DELIM = 3,
    PACKET_READ_RESPONSE_END = 4
} ;
#line 156 "./pkt-line.h"
struct packet_reader {
   int fd ;
   char *src_buffer ;
   size_t src_len ;
   char *buffer ;
   unsigned int buffer_size ;
   int options ;
   enum packet_read_status status ;
   int pktlen ;
   char *line ;
   int line_peeked ;
   unsigned int use_sideband : 1 ;
   char *me ;
   struct git_hash_algo *hash_algo ;
};
#line 30 "./strvec.h"
struct strvec {
   char **v ;
   size_t nr ;
   size_t alloc ;
};
#line 44 "./run-command.h"
struct child_process {
   char **argv ;
   struct strvec args ;
   struct strvec env_array ;
   pid_t pid ;
   int trace2_child_id ;
   uint64_t trace2_child_us_start ;
   char *trace2_child_class ;
   char *trace2_hook_name ;
   int in ;
   int out ;
   int err ;
   char *dir ;
   char **env ;
   unsigned int no_stdin : 1 ;
   unsigned int no_stdout : 1 ;
   unsigned int no_stderr : 1 ;
   unsigned int git_cmd : 1 ;
   unsigned int silent_exec_failure : 1 ;
   unsigned int use_shell : 1 ;
   unsigned int stdout_to_stderr : 1 ;
   unsigned int clean_on_exit : 1 ;
   unsigned int wait_after_clean : 1 ;
   void (*clean_on_exit_handler)(struct child_process *process ) ;
   void *clean_on_exit_handler_cbdata ;
};
#line 326 "./run-command.h"
struct async {
   int (*proc)(int in , int out , void *data ) ;
   void *data ;
   int in ;
   int out ;
   pthread_t tid ;
   int proc_in ;
   int proc_out ;
   int isolate_sigpipe ;
};
#line 4 "./exec-cmd.h"
struct strvec;
#line 8 "./parse-options.h"
enum parse_opt_type {
    OPTION_END = 0,
    OPTION_ARGUMENT = 1,
    OPTION_GROUP = 2,
    OPTION_NUMBER = 3,
    OPTION_ALIAS = 4,
    OPTION_BIT = 5,
    OPTION_NEGBIT = 6,
    OPTION_BITOP = 7,
    OPTION_COUNTUP = 8,
    OPTION_SET_INT = 9,
    OPTION_STRING = 10,
    OPTION_INTEGER = 11,
    OPTION_MAGNITUDE = 12,
    OPTION_CALLBACK = 13,
    OPTION_LOWLEVEL_CALLBACK = 14,
    OPTION_FILENAME = 15
} ;
#line 54
enum parse_opt_result {
    PARSE_OPT_COMPLETE = -3,
    PARSE_OPT_HELP = -2,
    PARSE_OPT_ERROR = -1,
    PARSE_OPT_DONE = 0,
    PARSE_OPT_NON_OPTION = 1,
    PARSE_OPT_UNKNOWN = 2
} ;
#line 63
struct option;
#line 63
struct option;
#line 64 "./parse-options.h"
typedef int parse_opt_cb(struct option  const  * , char const   *arg ,
                         int unset );
#line 66
struct parse_opt_ctx_t;
#line 66
struct parse_opt_ctx_t;
#line 67 "./parse-options.h"
typedef enum parse_opt_result parse_opt_ll_cb(struct parse_opt_ctx_t *ctx ,
                                              struct option  const  *opt ,
                                              char const   *arg , int unset );
#line 130 "./parse-options.h"
struct option {
   enum parse_opt_type type ;
   int short_name ;
   char *long_name ;
   void *value ;
   char *argh ;
   char *help ;
   int flags ;
   parse_opt_cb *callback ;
   intptr_t defval ;
   parse_opt_ll_cb *ll_callback ;
   intptr_t extra ;
};
#line 263 "./parse-options.h"
struct parse_opt_ctx_t {
   char **argv ;
   char **out ;
   int argc ;
   int cpidx ;
   int total ;
   char *opt ;
   int flags ;
   char *prefix ;
   char **alias_groups ;
   struct option *updated_options ;
};
#line 69 "./refspec.h"
struct strvec;
#line 98 "./remote.h"
struct ref_push_report {
   char *ref_name ;
   struct object_id *old_oid ;
   struct object_id *new_oid ;
   unsigned int forced_update : 1 ;
   struct ref_push_report *next ;
};
#line 189
struct oid_array;
#line 190
struct packet_reader;
#line 191
struct strvec;
#line 192
struct string_list;
#line 4 "./protocol.h"
enum protocol_version {
    protocol_unknown_version = -1,
    protocol_v0 = 0,
    protocol_v1 = 1,
    protocol_v2 = 2
} ;
#line 18 "./connect.h"
struct packet_reader;
#line 4 "./connected.h"
struct object_id;
#line 5
struct transport;
#line 5
struct transport;
#line 18 "./connected.h"
struct check_connected_options {
   int quiet ;
   char *shallow_file ;
   struct transport *transport ;
   int err_fd ;
   int progress ;
   char **env ;
   unsigned int is_deepening_fetch : 1 ;
};
#line 34 "./khash.h"
typedef uint32_t khint32_t;
#line 37 "./khash.h"
typedef khint32_t khint_t;
#line 333 "./khash.h"
struct __anonstruct_kh_oid_set_t_102 {
   khint_t n_buckets ;
   khint_t size ;
   khint_t n_occupied ;
   khint_t upper_bound ;
   khint32_t *flags ;
   struct object_id *keys ;
   int *vals ;
};
#line 333 "./khash.h"
typedef struct __anonstruct_kh_oid_set_t_102 kh_oid_set_t;
#line 21 "./oidset.h"
struct oidset {
   kh_oid_set_t set ;
};
#line 86 "./fsck.h"
struct object;
#line 22 "./tmp-objdir.h"
struct tmp_objdir;
#line 22
struct tmp_objdir;
#line 8 "./packfile.h"
struct packed_git;
#line 21 "./oidmap.h"
struct oidmap {
   struct hashmap map ;
};
#line 52 "./dir.h"
struct path_pattern {
   struct pattern_list *pl ;
   char *pattern ;
   int patternlen ;
   int nowildcardlen ;
   char *base ;
   int baselen ;
   unsigned int flags ;
   int srcpos ;
};
#line 87 "./dir.h"
struct pattern_list {
   int nr ;
   int alloc ;
   char *filebuf ;
   char *src ;
   struct path_pattern **patterns ;
   unsigned int use_cone_patterns ;
   unsigned int full_cone ;
   struct hashmap recursive_hashmap ;
   struct hashmap parent_hashmap ;
};
#line 126
struct untracked_cache_dir;
#line 138 "./dir.h"
struct oid_stat {
   struct stat_data stat ;
   struct object_id oid ;
   int valid ;
};
#line 172 "./dir.h"
struct untracked_cache_dir {
   struct untracked_cache_dir **dirs ;
   char **untracked ;
   struct stat_data stat_data ;
   unsigned int untracked_alloc ;
   unsigned int dirs_nr ;
   unsigned int dirs_alloc ;
   unsigned int untracked_nr ;
   unsigned int check_only : 1 ;
   unsigned int valid : 1 ;
   unsigned int recurse : 1 ;
   struct object_id exclude_oid ;
   char name[] ;
};
#line 187 "./dir.h"
struct untracked_cache {
   struct oid_stat ss_info_exclude ;
   struct oid_stat ss_excludes_file ;
   char *exclude_per_dir ;
   struct strbuf ident ;
   unsigned int dir_flags ;
   struct untracked_cache_dir *root ;
   int dir_created ;
   int gitignore_invalidated ;
   int dir_invalidated ;
   int dir_opened ;
   unsigned int use_fsmonitor : 1 ;
};
#line 19 "./cbtree.h"
struct cb_node;
#line 19
struct cb_node;
#line 20 "./cbtree.h"
struct cb_node {
   struct cb_node *child[2] ;
   uint32_t byte ;
   uint8_t otherbits ;
   uint8_t k[] ;
};
#line 31 "./cbtree.h"
struct cb_tree {
   struct cb_node *root ;
};
#line 8 "./oidtree.h"
struct oidtree {
   struct cb_tree tree ;
   struct mem_pool mem_pool ;
};
#line 14 "./object-store.h"
struct object_directory {
   struct object_directory *next ;
   uint32_t loose_objects_subdir_seen[8] ;
   struct oidtree *loose_objects_cache ;
   char *path ;
};
#line 36 "./object-store.h"
struct __anonstruct_kh_odb_path_map_t_106 {
   khint_t n_buckets ;
   khint_t size ;
   khint_t n_occupied ;
   khint_t upper_bound ;
   khint32_t *flags ;
   char **keys ;
   struct object_directory **vals ;
};
#line 36 "./object-store.h"
typedef struct __anonstruct_kh_odb_path_map_t_106 kh_odb_path_map_t;
#line 43 "./object-store.h"
typedef void alternate_ref_fn(struct object_id  const  *oid , void * );
#line 69
struct revindex_entry;
#line 69 "./object-store.h"
struct packed_git {
   struct hashmap_entry packmap_ent ;
   struct packed_git *next ;
   struct list_head mru ;
   struct pack_window *windows ;
   off_t pack_size ;
   void *index_data ;
   size_t index_size ;
   uint32_t num_objects ;
   uint32_t num_bad_objects ;
   uint32_t crc_offset ;
   unsigned char *bad_object_sha1 ;
   int index_version ;
   time_t mtime ;
   int pack_fd ;
   int index ;
   unsigned int pack_local : 1 ;
   unsigned int pack_keep : 1 ;
   unsigned int pack_keep_in_core : 1 ;
   unsigned int freshened : 1 ;
   unsigned int do_not_close : 1 ;
   unsigned int pack_promisor : 1 ;
   unsigned int multi_pack_index : 1 ;
   unsigned char hash[32] ;
   struct revindex_entry *revindex ;
   uint32_t *revindex_data ;
   uint32_t *revindex_map ;
   size_t revindex_size ;
   char pack_name[] ;
};
#line 101
struct multi_pack_index;
#line 117
struct commit_graph;
#line 117 "./object-store.h"
struct __anonstruct_kept_pack_cache_107 {
   struct packed_git **packs ;
   unsigned int flags ;
};
#line 117 "./object-store.h"
struct raw_object_store {
   struct object_directory *odb ;
   struct object_directory **odb_tail ;
   kh_odb_path_map_t *odb_by_path ;
   int loaded_alternates ;
   char *alternate_db ;
   struct oidmap *replace_map ;
   unsigned int replace_map_initialized : 1 ;
   pthread_mutex_t replace_mutex ;
   struct commit_graph *commit_graph ;
   unsigned int commit_graph_attempted : 1 ;
   struct multi_pack_index *multi_pack_index ;
   struct packed_git *packed_git ;
   struct list_head packed_git_mru ;
   struct __anonstruct_kept_pack_cache_107 kept_pack_cache ;
   struct hashmap pack_map ;
   unsigned long approximate_object_count ;
   unsigned int approximate_object_count_valid : 1 ;
   unsigned int packed_git_initialized : 1 ;
};
#line 7 "./commit-reach.h"
struct commit_list;
#line 9
struct object_id;
#line 7 "./worktree.h"
struct strbuf;
#line 9 "./worktree.h"
struct worktree {
   char *path ;
   char *id ;
   char *head_ref ;
   char *lock_reason ;
   char *prune_reason ;
   struct object_id head_oid ;
   int is_detached ;
   int is_bare ;
   int is_current ;
   int lock_reason_valid ;
   int prune_reason_valid ;
};
#line 23 "./shallow.h"
struct shallow_lock {
   struct lock_file lock ;
};
#line 56 "./shallow.h"
struct shallow_info {
   struct oid_array *shallow ;
   int *ours ;
   int nr_ours ;
   int *theirs ;
   int nr_theirs ;
   struct oid_array *ref ;
   uint32_t **used_shallow ;
   int *need_reachability_test ;
   int *reachable ;
   int *shallow_ref ;
   struct commit **commits ;
   int nr_commits ;
};
#line 38 "builtin/receive-pack.c"
enum deny_action {
    DENY_UNCONFIGURED = 0,
    DENY_IGNORE = 1,
    DENY_WARN = 2,
    DENY_REFUSE = 3,
    DENY_UPDATE_INSTEAD = 4
} ;
#line 93
enum __anonenum_use_keepalive_111 {
    KEEPALIVE_NEVER = 0,
    KEEPALIVE_AFTER_NUL = 1,
    KEEPALIVE_ALWAYS = 2
} ;
#line 102 "builtin/receive-pack.c"
struct proc_receive_ref {
   unsigned int want_add : 1 ;
   unsigned int want_delete : 1 ;
   unsigned int want_modify : 1 ;
   unsigned int negative_ref : 1 ;
   char *ref_prefix ;
   struct proc_receive_ref *next ;
};
#line 342 "builtin/receive-pack.c"
struct command {
   struct command *next ;
   char *error_string ;
   struct ref_push_report *report ;
   unsigned int skip_update : 1 ;
   unsigned int did_not_exist : 1 ;
   unsigned int run_proc_receive : 2 ;
   int index ;
   struct object_id old_oid ;
   struct object_id new_oid ;
   char ref_name[] ;
};
#line 796 "builtin/receive-pack.c"
struct receive_hook_feed_state {
   struct command *cmd ;
   struct ref_push_report *report ;
   int skip_broken ;
   struct strbuf buf ;
   struct string_list *push_options ;
};
#line 1768 "builtin/receive-pack.c"
struct iterate_data {
   struct command *cmds ;
   struct shallow_info *si ;
};
extern time_t __dyc_random_typdef_time_t(unsigned int __dyc_exp ) ;
extern time_t __dyc_read_typdef_time_t(void) ;
extern void __dyc_print_typdef_time_t(time_t __dyc_thistype ) ;
extern struct object_directory **__dyc_random_ptr__ptr__comp_558object_directory(unsigned int __dyc_exp ) ;
extern struct object_directory **__dyc_read_ptr__ptr__comp_558object_directory(void) ;
extern void __dyc_print_ptr__ptr__comp_558object_directory(struct object_directory * const  *__dyc_thistype ) ;
extern FILE *__dyc_random_ptr__typdef_FILE(unsigned int __dyc_exp ) ;
extern FILE *__dyc_read_ptr__typdef_FILE(void) ;
extern void __dyc_print_ptr__typdef_FILE(FILE const   *__dyc_thistype ) ;
extern struct mem_pool *__dyc_random_ptr__comp_445mem_pool(unsigned int __dyc_exp ) ;
extern struct mem_pool *__dyc_read_ptr__comp_445mem_pool(void) ;
extern void __dyc_print_ptr__comp_445mem_pool(struct mem_pool  const  *__dyc_thistype ) ;
extern struct list_head __dyc_random_comp_429list_head(unsigned int __dyc_exp ) ;
extern struct list_head __dyc_read_comp_429list_head(void) ;
extern void __dyc_print_comp_429list_head(struct list_head __dyc_thistype ) ;
extern struct option *__dyc_random_ptr__comp_522option(unsigned int __dyc_exp ) ;
extern struct option *__dyc_read_ptr__comp_522option(void) ;
extern void __dyc_print_ptr__comp_522option(struct option  const  *__dyc_thistype ) ;
extern struct stat_data *__dyc_random_ptr__comp_452stat_data(unsigned int __dyc_exp ) ;
extern struct stat_data *__dyc_read_ptr__comp_452stat_data(void) ;
extern void __dyc_print_ptr__comp_452stat_data(struct stat_data  const  *__dyc_thistype ) ;
extern struct repository *__dyc_random_ptr__comp_408repository(unsigned int __dyc_exp ) ;
extern struct repository *__dyc_read_ptr__comp_408repository(void) ;
extern void __dyc_print_ptr__comp_408repository(struct repository  const  *__dyc_thistype ) ;
extern struct iterate_data *__dyc_random_ptr__comp_572iterate_data(unsigned int __dyc_exp ) ;
extern struct iterate_data *__dyc_read_ptr__comp_572iterate_data(void) ;
extern void __dyc_print_ptr__comp_572iterate_data(struct iterate_data  const  *__dyc_thistype ) ;
extern struct shallow_lock *__dyc_random_ptr__comp_567shallow_lock(unsigned int __dyc_exp ) ;
extern struct shallow_lock *__dyc_read_ptr__comp_567shallow_lock(void) ;
extern void __dyc_print_ptr__comp_567shallow_lock(struct shallow_lock  const  *__dyc_thistype ) ;
extern struct strbuf __dyc_random_comp_365strbuf(unsigned int __dyc_exp ) ;
extern struct strbuf __dyc_read_comp_365strbuf(void) ;
extern void __dyc_print_comp_365strbuf(struct strbuf __dyc_thistype ) ;
extern struct raw_object_store *__dyc_random_ptr__comp_415raw_object_store(unsigned int __dyc_exp ) ;
extern struct raw_object_store *__dyc_read_ptr__comp_415raw_object_store(void) ;
extern void __dyc_print_ptr__comp_415raw_object_store(struct raw_object_store  const  *__dyc_thistype ) ;
extern struct configset_list __dyc_random_comp_499configset_list(unsigned int __dyc_exp ) ;
extern struct configset_list __dyc_read_comp_499configset_list(void) ;
extern void __dyc_print_comp_499configset_list(struct configset_list __dyc_thistype ) ;
extern struct path_pattern **__dyc_random_ptr__ptr__comp_547path_pattern(unsigned int __dyc_exp ) ;
extern struct path_pattern **__dyc_read_ptr__ptr__comp_547path_pattern(void) ;
extern void __dyc_print_ptr__ptr__comp_547path_pattern(struct path_pattern * const  *__dyc_thistype ) ;
extern struct oidmap __dyc_random_comp_544oidmap(unsigned int __dyc_exp ) ;
extern struct oidmap __dyc_read_comp_544oidmap(void) ;
extern void __dyc_print_comp_544oidmap(struct oidmap __dyc_thistype ) ;
extern void *__dyc_random_ptr__comp_473buffer_slab(unsigned int __dyc_exp ) ;
extern void *__dyc_read_ptr__comp_473buffer_slab(void) ;
extern void __dyc_print_ptr__comp_473buffer_slab(void const   * const  __dyc_thistype ) ;
extern int *__dyc_random_ptr__int(unsigned int __dyc_exp ) ;
extern int *__dyc_read_ptr__int(void) ;
extern void __dyc_print_ptr__int(int const   *__dyc_thistype ) ;
extern struct object __dyc_random_comp_464object(unsigned int __dyc_exp ) ;
extern struct object __dyc_read_comp_464object(void) ;
extern void __dyc_print_comp_464object(struct object __dyc_thistype ) ;
extern struct mp_block *__dyc_random_ptr__comp_444mp_block(unsigned int __dyc_exp ) ;
extern struct mp_block *__dyc_read_ptr__comp_444mp_block(void) ;
extern void __dyc_print_ptr__comp_444mp_block(struct mp_block  const  *__dyc_thistype ) ;
extern size_t __dyc_random_typdef_size_t(unsigned int __dyc_exp ) ;
extern size_t __dyc_read_typdef_size_t(void) ;
extern void __dyc_print_typdef_size_t(size_t __dyc_thistype ) ;
extern git_hash_ctx __dyc_random_typdef_git_hash_ctx(unsigned int __dyc_exp ) ;
extern git_hash_ctx __dyc_read_typdef_git_hash_ctx(void) ;
extern void __dyc_print_typdef_git_hash_ctx(git_hash_ctx __dyc_thistype ) ;
extern struct packet_reader *__dyc_random_ptr__comp_511packet_reader(unsigned int __dyc_exp ) ;
extern struct packet_reader *__dyc_read_ptr__comp_511packet_reader(void) ;
extern void __dyc_print_ptr__comp_511packet_reader(struct packet_reader  const  *__dyc_thistype ) ;
extern struct cb_node __dyc_random_comp_555cb_node(unsigned int __dyc_exp ) ;
extern struct cb_node __dyc_read_comp_555cb_node(void) ;
extern void __dyc_print_comp_555cb_node(struct cb_node __dyc_thistype ) ;
extern struct stat_validity *__dyc_random_ptr__comp_472stat_validity(unsigned int __dyc_exp ) ;
extern struct stat_validity *__dyc_read_ptr__comp_472stat_validity(void) ;
extern void __dyc_print_ptr__comp_472stat_validity(struct stat_validity  const  *__dyc_thistype ) ;
extern SHA1_CTX __dyc_random_typdef_SHA1_CTX(unsigned int __dyc_exp ) ;
extern SHA1_CTX __dyc_read_typdef_SHA1_CTX(void) ;
extern void __dyc_print_typdef_SHA1_CTX(SHA1_CTX __dyc_thistype ) ;
extern struct _IO_marker __dyc_random_comp_8_IO_marker(unsigned int __dyc_exp ) ;
extern struct _IO_marker __dyc_read_comp_8_IO_marker(void) ;
extern void __dyc_print_comp_8_IO_marker(struct _IO_marker __dyc_thistype ) ;
extern int64_t __dyc_random_typdef_int64_t(unsigned int __dyc_exp ) ;
extern int64_t __dyc_read_typdef_int64_t(void) ;
extern void __dyc_print_typdef_int64_t(int64_t __dyc_thistype ) ;
extern void *__dyc_random_ptr__comp_460ewah_bitmap(unsigned int __dyc_exp ) ;
extern void *__dyc_read_ptr__comp_460ewah_bitmap(void) ;
extern void __dyc_print_ptr__comp_460ewah_bitmap(void const   * const  __dyc_thistype ) ;
extern struct oidset *__dyc_random_ptr__comp_538oidset(unsigned int __dyc_exp ) ;
extern struct oidset *__dyc_read_ptr__comp_538oidset(void) ;
extern void __dyc_print_ptr__comp_538oidset(struct oidset  const  *__dyc_thistype ) ;
extern struct command **__dyc_random_ptr__ptr__comp_570command(unsigned int __dyc_exp ) ;
extern struct command **__dyc_read_ptr__ptr__comp_570command(void) ;
extern void __dyc_print_ptr__ptr__comp_570command(struct command * const  *__dyc_thistype ) ;
extern struct blk_SHA256_CTX __dyc_random_comp_424blk_SHA256_CTX(unsigned int __dyc_exp ) ;
extern struct blk_SHA256_CTX __dyc_read_comp_424blk_SHA256_CTX(void) ;
extern void __dyc_print_comp_424blk_SHA256_CTX(struct blk_SHA256_CTX __dyc_thistype ) ;
extern void *__dyc_random_ptr__comp_510ref_transaction(unsigned int __dyc_exp ) ;
extern void *__dyc_read_ptr__comp_510ref_transaction(void) ;
extern void __dyc_print_ptr__comp_510ref_transaction(void const   * const  __dyc_thistype ) ;
extern struct shallow_info __dyc_random_comp_568shallow_info(unsigned int __dyc_exp ) ;
extern struct shallow_info __dyc_read_comp_568shallow_info(void) ;
extern void __dyc_print_comp_568shallow_info(struct shallow_info __dyc_thistype ) ;
extern struct child_process __dyc_random_comp_439child_process(unsigned int __dyc_exp ) ;
extern struct child_process __dyc_read_comp_439child_process(void) ;
extern void __dyc_print_comp_439child_process(struct child_process __dyc_thistype ) ;
extern struct tempfile *__dyc_random_ptr__comp_501tempfile(unsigned int __dyc_exp ) ;
extern struct tempfile *__dyc_read_ptr__comp_501tempfile(void) ;
extern void __dyc_print_ptr__comp_501tempfile(struct tempfile  const  *__dyc_thistype ) ;
extern git_hash_ctx *__dyc_random_ptr__typdef_git_hash_ctx(unsigned int __dyc_exp ) ;
extern git_hash_ctx *__dyc_read_ptr__typdef_git_hash_ctx(void) ;
extern void __dyc_print_ptr__typdef_git_hash_ctx(git_hash_ctx const   *__dyc_thistype ) ;
extern struct receive_hook_feed_state __dyc_random_comp_571receive_hook_feed_state(unsigned int __dyc_exp ) ;
extern struct receive_hook_feed_state __dyc_read_comp_571receive_hook_feed_state(void) ;
extern void __dyc_print_comp_571receive_hook_feed_state(struct receive_hook_feed_state __dyc_thistype ) ;
extern struct cb_node *__dyc_random_ptr__comp_555cb_node(unsigned int __dyc_exp ) ;
extern struct cb_node *__dyc_read_ptr__comp_555cb_node(void) ;
extern void __dyc_print_ptr__comp_555cb_node(struct cb_node  const  *__dyc_thistype ) ;
extern __intptr_t __dyc_random_typdef___intptr_t(unsigned int __dyc_exp ) ;
extern __intptr_t __dyc_read_typdef___intptr_t(void) ;
extern void __dyc_print_typdef___intptr_t(__intptr_t __dyc_thistype ) ;
extern struct untracked_cache_dir **__dyc_random_ptr__ptr__comp_550untracked_cache_dir(unsigned int __dyc_exp ) ;
extern struct untracked_cache_dir **__dyc_read_ptr__ptr__comp_550untracked_cache_dir(void) ;
extern void __dyc_print_ptr__ptr__comp_550untracked_cache_dir(struct untracked_cache_dir * const  *__dyc_thistype ) ;
extern struct __anonstruct_kept_pack_cache_107 __dyc_random_comp_562__anonstruct_kept_pack_cache_107(unsigned int __dyc_exp ) ;
extern struct __anonstruct_kept_pack_cache_107 __dyc_read_comp_562__anonstruct_kept_pack_cache_107(void) ;
extern void __dyc_print_comp_562__anonstruct_kept_pack_cache_107(struct __anonstruct_kept_pack_cache_107 __dyc_thistype ) ;
extern struct index_state __dyc_random_comp_412index_state(unsigned int __dyc_exp ) ;
extern struct index_state __dyc_read_comp_412index_state(void) ;
extern void __dyc_print_comp_412index_state(struct index_state __dyc_thistype ) ;
extern struct trace_key __dyc_random_comp_438trace_key(unsigned int __dyc_exp ) ;
extern struct trace_key __dyc_read_comp_438trace_key(void) ;
extern void __dyc_print_comp_438trace_key(struct trace_key __dyc_thistype ) ;
extern void *__dyc_random_ptr__comp_561commit_graph(unsigned int __dyc_exp ) ;
extern void *__dyc_read_ptr__comp_561commit_graph(void) ;
extern void __dyc_print_ptr__comp_561commit_graph(void const   * const  __dyc_thistype ) ;
extern struct cb_tree __dyc_random_comp_556cb_tree(unsigned int __dyc_exp ) ;
extern struct cb_tree __dyc_read_comp_556cb_tree(void) ;
extern void __dyc_print_comp_556cb_tree(struct cb_tree __dyc_thistype ) ;
extern struct __pthread_mutex_s __dyc_random_comp_22__pthread_mutex_s(unsigned int __dyc_exp ) ;
extern struct __pthread_mutex_s __dyc_read_comp_22__pthread_mutex_s(void) ;
extern void __dyc_print_comp_22__pthread_mutex_s(struct __pthread_mutex_s __dyc_thistype ) ;
extern struct __pthread_internal_list __dyc_random_comp_20__pthread_internal_list(unsigned int __dyc_exp ) ;
extern struct __pthread_internal_list __dyc_read_comp_20__pthread_internal_list(void) ;
extern void __dyc_print_comp_20__pthread_internal_list(struct __pthread_internal_list __dyc_thistype ) ;
extern struct commit_graft __dyc_random_comp_475commit_graft(unsigned int __dyc_exp ) ;
extern struct commit_graft __dyc_read_comp_475commit_graft(void) ;
extern void __dyc_print_comp_475commit_graft(struct commit_graft __dyc_thistype ) ;
extern uintmax_t __dyc_random_typdef_uintmax_t(unsigned int __dyc_exp ) ;
extern uintmax_t __dyc_read_typdef_uintmax_t(void) ;
extern void __dyc_print_typdef_uintmax_t(uintmax_t __dyc_thistype ) ;
extern struct receive_hook_feed_state *__dyc_random_ptr__comp_571receive_hook_feed_state(unsigned int __dyc_exp ) ;
extern struct receive_hook_feed_state *__dyc_read_ptr__comp_571receive_hook_feed_state(void) ;
extern void __dyc_print_ptr__comp_571receive_hook_feed_state(struct receive_hook_feed_state  const  *__dyc_thistype ) ;
extern __pthread_list_t __dyc_random_typdef___pthread_list_t(unsigned int __dyc_exp ) ;
extern __pthread_list_t __dyc_read_typdef___pthread_list_t(void) ;
extern void __dyc_print_typdef___pthread_list_t(__pthread_list_t __dyc_thistype ) ;
extern struct lock_file __dyc_random_comp_413lock_file(unsigned int __dyc_exp ) ;
extern struct lock_file __dyc_read_comp_413lock_file(void) ;
extern void __dyc_print_comp_413lock_file(struct lock_file __dyc_thistype ) ;
extern struct configset_list_item __dyc_random_comp_498configset_list_item(unsigned int __dyc_exp ) ;
extern struct configset_list_item __dyc_read_comp_498configset_list_item(void) ;
extern void __dyc_print_comp_498configset_list_item(struct configset_list_item __dyc_thistype ) ;
extern struct object_directory __dyc_random_comp_558object_directory(unsigned int __dyc_exp ) ;
extern struct object_directory __dyc_read_comp_558object_directory(void) ;
extern void __dyc_print_comp_558object_directory(struct object_directory __dyc_thistype ) ;
extern struct __anonstruct_kh_oid_set_t_102 __dyc_random_comp_535__anonstruct_kh_oid_set_t_102(unsigned int __dyc_exp ) ;
extern struct __anonstruct_kh_oid_set_t_102 __dyc_read_comp_535__anonstruct_kh_oid_set_t_102(void) ;
extern void __dyc_print_comp_535__anonstruct_kh_oid_set_t_102(struct __anonstruct_kh_oid_set_t_102 __dyc_thistype ) ;
extern struct untracked_cache __dyc_random_comp_456untracked_cache(unsigned int __dyc_exp ) ;
extern struct untracked_cache __dyc_read_comp_456untracked_cache(void) ;
extern void __dyc_print_comp_456untracked_cache(struct untracked_cache __dyc_thistype ) ;
extern struct index_state *__dyc_random_ptr__comp_412index_state(unsigned int __dyc_exp ) ;
extern struct index_state *__dyc_read_ptr__comp_412index_state(void) ;
extern void __dyc_print_ptr__comp_412index_state(struct index_state  const  *__dyc_thistype ) ;
extern struct check_connected_options __dyc_random_comp_533check_connected_options(unsigned int __dyc_exp ) ;
extern struct check_connected_options __dyc_read_comp_533check_connected_options(void) ;
extern void __dyc_print_comp_533check_connected_options(struct check_connected_options __dyc_thistype ) ;
extern struct __anonstruct_kh_odb_path_map_t_106 __dyc_random_comp_559__anonstruct_kh_odb_path_map_t_106(unsigned int __dyc_exp ) ;
extern struct __anonstruct_kh_odb_path_map_t_106 __dyc_read_comp_559__anonstruct_kh_odb_path_map_t_106(void) ;
extern void __dyc_print_comp_559__anonstruct_kh_odb_path_map_t_106(struct __anonstruct_kh_odb_path_map_t_106 __dyc_thistype ) ;
extern struct object_id *__dyc_random_ptr__comp_406object_id(unsigned int __dyc_exp ) ;
extern struct object_id *__dyc_read_ptr__comp_406object_id(void) ;
extern void __dyc_print_ptr__comp_406object_id(struct object_id  const  *__dyc_thistype ) ;
extern struct strvec *__dyc_random_ptr__comp_509strvec(unsigned int __dyc_exp ) ;
extern struct strvec *__dyc_read_ptr__comp_509strvec(void) ;
extern void __dyc_print_ptr__comp_509strvec(struct strvec  const  *__dyc_thistype ) ;
extern struct string_list __dyc_random_comp_405string_list(unsigned int __dyc_exp ) ;
extern struct string_list __dyc_read_comp_405string_list(void) ;
extern void __dyc_print_comp_405string_list(struct string_list __dyc_thistype ) ;
extern struct git_hash_algo *__dyc_random_ptr__comp_411git_hash_algo(unsigned int __dyc_exp ) ;
extern struct git_hash_algo *__dyc_read_ptr__comp_411git_hash_algo(void) ;
extern void __dyc_print_ptr__comp_411git_hash_algo(struct git_hash_algo  const  *__dyc_thistype ) ;
extern void *__dyc_random_ptr__comp_417promisor_remote_config(unsigned int __dyc_exp ) ;
extern void *__dyc_read_ptr__comp_417promisor_remote_config(void) ;
extern void __dyc_print_ptr__comp_417promisor_remote_config(void const   * const  __dyc_thistype ) ;
extern __off_t __dyc_random_typdef___off_t(unsigned int __dyc_exp ) ;
extern __off_t __dyc_read_typdef___off_t(void) ;
extern void __dyc_print_typdef___off_t(__off_t __dyc_thistype ) ;
extern struct configset_list_item *__dyc_random_ptr__comp_498configset_list_item(unsigned int __dyc_exp ) ;
extern struct configset_list_item *__dyc_read_ptr__comp_498configset_list_item(void) ;
extern void __dyc_print_ptr__comp_498configset_list_item(struct configset_list_item  const  *__dyc_thistype ) ;
extern struct config_set __dyc_random_comp_410config_set(unsigned int __dyc_exp ) ;
extern struct config_set __dyc_read_comp_410config_set(void) ;
extern void __dyc_print_comp_410config_set(struct config_set __dyc_thistype ) ;
extern struct _IO_marker *__dyc_random_ptr__comp_8_IO_marker(unsigned int __dyc_exp ) ;
extern struct _IO_marker *__dyc_read_ptr__comp_8_IO_marker(void) ;
extern void __dyc_print_ptr__comp_8_IO_marker(struct _IO_marker  const  *__dyc_thistype ) ;
extern struct untracked_cache *__dyc_random_ptr__comp_456untracked_cache(unsigned int __dyc_exp ) ;
extern struct untracked_cache *__dyc_read_ptr__comp_456untracked_cache(void) ;
extern void __dyc_print_ptr__comp_456untracked_cache(struct untracked_cache  const  *__dyc_thistype ) ;
extern void *__dyc_random_ptr__fun_name_is_not_here(unsigned int __dyc_exp ) ;
extern void *__dyc_read_ptr__fun_name_is_not_here(void) ;
extern void __dyc_print_ptr__fun_name_is_not_here(void const   * const  __dyc_thistype ) ;
extern struct check_connected_options *__dyc_random_ptr__comp_533check_connected_options(unsigned int __dyc_exp ) ;
extern struct check_connected_options *__dyc_read_ptr__comp_533check_connected_options(void) ;
extern void __dyc_print_ptr__comp_533check_connected_options(struct check_connected_options  const  *__dyc_thistype ) ;
extern struct path_pattern __dyc_random_comp_547path_pattern(unsigned int __dyc_exp ) ;
extern struct path_pattern __dyc_read_comp_547path_pattern(void) ;
extern void __dyc_print_comp_547path_pattern(struct path_pattern __dyc_thistype ) ;
extern pthread_t __dyc_random_typdef_pthread_t(unsigned int __dyc_exp ) ;
extern pthread_t __dyc_read_typdef_pthread_t(void) ;
extern void __dyc_print_typdef_pthread_t(pthread_t __dyc_thistype ) ;
extern struct oid_array __dyc_random_comp_443oid_array(unsigned int __dyc_exp ) ;
extern struct oid_array __dyc_read_comp_443oid_array(void) ;
extern void __dyc_print_comp_443oid_array(struct oid_array __dyc_thistype ) ;
extern void *__dyc_random_ptr__comp_457progress(unsigned int __dyc_exp ) ;
extern void *__dyc_read_ptr__comp_457progress(void) ;
extern void __dyc_print_ptr__comp_457progress(void const   * const  __dyc_thistype ) ;
extern struct shallow_info *__dyc_random_ptr__comp_568shallow_info(unsigned int __dyc_exp ) ;
extern struct shallow_info *__dyc_read_ptr__comp_568shallow_info(void) ;
extern void __dyc_print_ptr__comp_568shallow_info(struct shallow_info  const  *__dyc_thistype ) ;
extern struct config_set_element *__dyc_random_ptr__comp_497config_set_element(unsigned int __dyc_exp ) ;
extern struct config_set_element *__dyc_read_ptr__comp_497config_set_element(void) ;
extern void __dyc_print_ptr__comp_497config_set_element(struct config_set_element  const  *__dyc_thistype ) ;
extern struct pattern_list __dyc_random_comp_458pattern_list(unsigned int __dyc_exp ) ;
extern struct pattern_list __dyc_read_comp_458pattern_list(void) ;
extern void __dyc_print_comp_458pattern_list(struct pattern_list __dyc_thistype ) ;
extern struct string_list *__dyc_random_ptr__comp_405string_list(unsigned int __dyc_exp ) ;
extern struct string_list *__dyc_read_ptr__comp_405string_list(void) ;
extern void __dyc_print_ptr__comp_405string_list(struct string_list  const  *__dyc_thistype ) ;
extern void *__dyc_random_ptr__comp_420ref_store(unsigned int __dyc_exp ) ;
extern void *__dyc_read_ptr__comp_420ref_store(void) ;
extern void __dyc_print_ptr__comp_420ref_store(void const   * const  __dyc_thistype ) ;
extern struct option __dyc_random_comp_522option(unsigned int __dyc_exp ) ;
extern struct option __dyc_read_comp_522option(void) ;
extern void __dyc_print_comp_522option(struct option __dyc_thistype ) ;
extern struct repository __dyc_random_comp_408repository(unsigned int __dyc_exp ) ;
extern struct repository __dyc_read_comp_408repository(void) ;
extern void __dyc_print_comp_408repository(struct repository __dyc_thistype ) ;
extern union __anonunion_pthread_mutex_t_13 __dyc_random_comp_21__anonunion_pthread_mutex_t_13(unsigned int __dyc_exp ) ;
extern union __anonunion_pthread_mutex_t_13 __dyc_read_comp_21__anonunion_pthread_mutex_t_13(void) ;
extern void __dyc_print_comp_21__anonunion_pthread_mutex_t_13(union __anonunion_pthread_mutex_t_13 __dyc_thistype ) ;
extern void *__dyc_random_ptr__comp_416submodule_cache(unsigned int __dyc_exp ) ;
extern void *__dyc_read_ptr__comp_416submodule_cache(void) ;
extern void __dyc_print_ptr__comp_416submodule_cache(void const   * const  __dyc_thistype ) ;
extern void *__dyc_random_ptr__void(unsigned int __dyc_exp ) ;
extern void *__dyc_read_ptr__void(void) ;
extern void __dyc_print_ptr__void(void const   * const  __dyc_thistype ) ;
extern khint32_t __dyc_random_typdef_khint32_t(unsigned int __dyc_exp ) ;
extern khint32_t __dyc_read_typdef_khint32_t(void) ;
extern void __dyc_print_typdef_khint32_t(khint32_t __dyc_thistype ) ;
extern struct proc_receive_ref __dyc_random_comp_569proc_receive_ref(unsigned int __dyc_exp ) ;
extern struct proc_receive_ref __dyc_read_comp_569proc_receive_ref(void) ;
extern void __dyc_print_comp_569proc_receive_ref(struct proc_receive_ref __dyc_thistype ) ;
extern struct pack_window __dyc_random_comp_468pack_window(unsigned int __dyc_exp ) ;
extern struct pack_window __dyc_read_comp_468pack_window(void) ;
extern void __dyc_print_comp_468pack_window(struct pack_window __dyc_thistype ) ;
extern struct string_list_item __dyc_random_comp_432string_list_item(unsigned int __dyc_exp ) ;
extern struct string_list_item __dyc_read_comp_432string_list_item(void) ;
extern void __dyc_print_comp_432string_list_item(struct string_list_item __dyc_thistype ) ;
extern struct async __dyc_random_comp_521async(unsigned int __dyc_exp ) ;
extern struct async __dyc_read_comp_521async(void) ;
extern void __dyc_print_comp_521async(struct async __dyc_thistype ) ;
extern pthread_mutex_t __dyc_random_typdef_pthread_mutex_t(unsigned int __dyc_exp ) ;
extern pthread_mutex_t __dyc_read_typdef_pthread_mutex_t(void) ;
extern void __dyc_print_typdef_pthread_mutex_t(pthread_mutex_t __dyc_thistype ) ;
extern struct commit_graft *__dyc_random_ptr__comp_475commit_graft(unsigned int __dyc_exp ) ;
extern struct commit_graft *__dyc_read_ptr__comp_475commit_graft(void) ;
extern void __dyc_print_ptr__comp_475commit_graft(struct commit_graft  const  *__dyc_thistype ) ;
extern char *__dyc_random_ptr__char(unsigned int __dyc_exp ) ;
extern char *__dyc_read_ptr__char(void) ;
extern void __dyc_print_ptr__char(char const   *__dyc_thistype ) ;
extern struct hashmap_entry __dyc_random_comp_426hashmap_entry(unsigned int __dyc_exp ) ;
extern struct hashmap_entry __dyc_read_comp_426hashmap_entry(void) ;
extern void __dyc_print_comp_426hashmap_entry(struct hashmap_entry __dyc_thistype ) ;
extern blk_SHA256_CTX __dyc_random_typdef_blk_SHA256_CTX(unsigned int __dyc_exp ) ;
extern blk_SHA256_CTX __dyc_read_typdef_blk_SHA256_CTX(void) ;
extern void __dyc_print_typdef_blk_SHA256_CTX(blk_SHA256_CTX __dyc_thistype ) ;
extern struct object_directory *__dyc_random_ptr__comp_558object_directory(unsigned int __dyc_exp ) ;
extern struct object_directory *__dyc_read_ptr__comp_558object_directory(void) ;
extern void __dyc_print_ptr__comp_558object_directory(struct object_directory  const  *__dyc_thistype ) ;
extern struct oidset __dyc_random_comp_538oidset(unsigned int __dyc_exp ) ;
extern struct oidset __dyc_read_comp_538oidset(void) ;
extern void __dyc_print_comp_538oidset(struct oidset __dyc_thistype ) ;
extern struct pack_window *__dyc_random_ptr__comp_468pack_window(unsigned int __dyc_exp ) ;
extern struct pack_window *__dyc_read_ptr__comp_468pack_window(void) ;
extern void __dyc_print_ptr__comp_468pack_window(struct pack_window  const  *__dyc_thistype ) ;
extern struct cache_time __dyc_random_comp_451cache_time(unsigned int __dyc_exp ) ;
extern struct cache_time __dyc_read_comp_451cache_time(void) ;
extern void __dyc_print_comp_451cache_time(struct cache_time __dyc_thistype ) ;
extern void *__dyc_random_ptr__comp_532transport(unsigned int __dyc_exp ) ;
extern void *__dyc_read_ptr__comp_532transport(void) ;
extern void __dyc_print_ptr__comp_532transport(void const   * const  __dyc_thistype ) ;
extern struct volatile_list_head *__dyc_random_ptr__comp_430volatile_list_head(unsigned int __dyc_exp ) ;
extern struct volatile_list_head *__dyc_read_ptr__comp_430volatile_list_head(void) ;
extern void __dyc_print_ptr__comp_430volatile_list_head(struct volatile_list_head  const  *__dyc_thistype ) ;
extern struct commit *__dyc_random_ptr__comp_482commit(unsigned int __dyc_exp ) ;
extern struct commit *__dyc_read_ptr__comp_482commit(void) ;
extern void __dyc_print_ptr__comp_482commit(struct commit  const  *__dyc_thistype ) ;
extern __time_t __dyc_random_typdef___time_t(unsigned int __dyc_exp ) ;
extern __time_t __dyc_read_typdef___time_t(void) ;
extern void __dyc_print_typdef___time_t(__time_t __dyc_thistype ) ;
extern struct signature_check __dyc_random_comp_481signature_check(unsigned int __dyc_exp ) ;
extern struct signature_check __dyc_read_comp_481signature_check(void) ;
extern void __dyc_print_comp_481signature_check(struct signature_check __dyc_thistype ) ;
extern struct pollfd *__dyc_random_ptr__comp_87pollfd(unsigned int __dyc_exp ) ;
extern struct pollfd *__dyc_read_ptr__comp_87pollfd(void) ;
extern void __dyc_print_ptr__comp_87pollfd(struct pollfd  const  *__dyc_thistype ) ;
extern struct stat_data __dyc_random_comp_452stat_data(unsigned int __dyc_exp ) ;
extern struct stat_data __dyc_read_comp_452stat_data(void) ;
extern void __dyc_print_comp_452stat_data(struct stat_data __dyc_thistype ) ;
extern struct pack_header __dyc_random_comp_504pack_header(unsigned int __dyc_exp ) ;
extern struct pack_header __dyc_read_comp_504pack_header(void) ;
extern void __dyc_print_comp_504pack_header(struct pack_header __dyc_thistype ) ;
extern struct path_pattern *__dyc_random_ptr__comp_547path_pattern(unsigned int __dyc_exp ) ;
extern struct path_pattern *__dyc_read_ptr__comp_547path_pattern(void) ;
extern void __dyc_print_ptr__comp_547path_pattern(struct path_pattern  const  *__dyc_thistype ) ;
extern void *__dyc_random_ptr__typdef_parse_opt_cb(unsigned int __dyc_exp ) ;
extern void *__dyc_read_ptr__typdef_parse_opt_cb(void) ;
extern void __dyc_print_ptr__typdef_parse_opt_cb(void const   * const  __dyc_thistype ) ;
extern struct parsed_object_pool *__dyc_random_ptr__comp_419parsed_object_pool(unsigned int __dyc_exp ) ;
extern struct parsed_object_pool *__dyc_read_ptr__comp_419parsed_object_pool(void) ;
extern void __dyc_print_ptr__comp_419parsed_object_pool(struct parsed_object_pool  const  *__dyc_thistype ) ;
extern struct pattern_list *__dyc_random_ptr__comp_458pattern_list(unsigned int __dyc_exp ) ;
extern struct pattern_list *__dyc_read_ptr__comp_458pattern_list(void) ;
extern void __dyc_print_ptr__comp_458pattern_list(struct pattern_list  const  *__dyc_thistype ) ;
extern struct _IO_FILE *__dyc_random_ptr__comp_2_IO_FILE(unsigned int __dyc_exp ) ;
extern struct _IO_FILE *__dyc_read_ptr__comp_2_IO_FILE(void) ;
extern void __dyc_print_ptr__comp_2_IO_FILE(struct _IO_FILE  const  *__dyc_thistype ) ;
extern struct commit **__dyc_random_ptr__ptr__comp_482commit(unsigned int __dyc_exp ) ;
extern struct commit **__dyc_read_ptr__ptr__comp_482commit(void) ;
extern void __dyc_print_ptr__ptr__comp_482commit(struct commit * const  *__dyc_thistype ) ;
extern void *__dyc_random_ptr__typdef_parse_opt_ll_cb(unsigned int __dyc_exp ) ;
extern void *__dyc_read_ptr__typdef_parse_opt_ll_cb(void) ;
extern void __dyc_print_ptr__typdef_parse_opt_ll_cb(void const   * const  __dyc_thistype ) ;
extern struct signature_check *__dyc_random_ptr__comp_481signature_check(unsigned int __dyc_exp ) ;
extern struct signature_check *__dyc_read_ptr__comp_481signature_check(void) ;
extern void __dyc_print_ptr__comp_481signature_check(struct signature_check  const  *__dyc_thistype ) ;
extern timestamp_t __dyc_random_typdef_timestamp_t(unsigned int __dyc_exp ) ;
extern timestamp_t __dyc_read_typdef_timestamp_t(void) ;
extern void __dyc_print_typdef_timestamp_t(timestamp_t __dyc_thistype ) ;
extern struct packet_reader __dyc_random_comp_511packet_reader(unsigned int __dyc_exp ) ;
extern struct packet_reader __dyc_read_comp_511packet_reader(void) ;
extern void __dyc_print_comp_511packet_reader(struct packet_reader __dyc_thistype ) ;
extern __pid_t __dyc_random_typdef___pid_t(unsigned int __dyc_exp ) ;
extern __pid_t __dyc_read_typdef___pid_t(void) ;
extern void __dyc_print_typdef___pid_t(__pid_t __dyc_thistype ) ;
extern struct pack_header *__dyc_random_ptr__comp_504pack_header(unsigned int __dyc_exp ) ;
extern struct pack_header *__dyc_read_ptr__comp_504pack_header(void) ;
extern void __dyc_print_ptr__comp_504pack_header(struct pack_header  const  *__dyc_thistype ) ;
extern struct packed_git *__dyc_random_ptr__comp_441packed_git(unsigned int __dyc_exp ) ;
extern struct packed_git *__dyc_read_ptr__comp_441packed_git(void) ;
extern void __dyc_print_ptr__comp_441packed_git(struct packed_git  const  *__dyc_thistype ) ;
extern struct stat_validity __dyc_random_comp_472stat_validity(unsigned int __dyc_exp ) ;
extern struct stat_validity __dyc_read_comp_472stat_validity(void) ;
extern void __dyc_print_comp_472stat_validity(struct stat_validity __dyc_thistype ) ;
extern time_t *__dyc_random_ptr__typdef_time_t(unsigned int __dyc_exp ) ;
extern time_t *__dyc_read_ptr__typdef_time_t(void) ;
extern void __dyc_print_ptr__typdef_time_t(time_t const   *__dyc_thistype ) ;
extern khint32_t *__dyc_random_ptr__typdef_khint32_t(unsigned int __dyc_exp ) ;
extern khint32_t *__dyc_read_ptr__typdef_khint32_t(void) ;
extern void __dyc_print_ptr__typdef_khint32_t(khint32_t const   *__dyc_thistype ) ;
extern uint32_t __dyc_random_typdef_uint32_t(unsigned int __dyc_exp ) ;
extern uint32_t __dyc_read_typdef_uint32_t(void) ;
extern void __dyc_print_typdef_uint32_t(uint32_t __dyc_thistype ) ;
extern struct proc_receive_ref *__dyc_random_ptr__comp_569proc_receive_ref(unsigned int __dyc_exp ) ;
extern struct proc_receive_ref *__dyc_read_ptr__comp_569proc_receive_ref(void) ;
extern void __dyc_print_ptr__comp_569proc_receive_ref(struct proc_receive_ref  const  *__dyc_thistype ) ;
extern struct list_head *__dyc_random_ptr__comp_429list_head(unsigned int __dyc_exp ) ;
extern struct list_head *__dyc_read_ptr__comp_429list_head(void) ;
extern void __dyc_print_ptr__comp_429list_head(struct list_head  const  *__dyc_thistype ) ;
extern struct strvec __dyc_random_comp_509strvec(unsigned int __dyc_exp ) ;
extern struct strvec __dyc_read_comp_509strvec(void) ;
extern void __dyc_print_comp_509strvec(struct strvec __dyc_thistype ) ;
extern struct tree __dyc_random_comp_454tree(unsigned int __dyc_exp ) ;
extern struct tree __dyc_read_comp_454tree(void) ;
extern void __dyc_print_comp_454tree(struct tree __dyc_thistype ) ;
extern struct string_list_item *__dyc_random_ptr__comp_432string_list_item(unsigned int __dyc_exp ) ;
extern struct string_list_item *__dyc_read_ptr__comp_432string_list_item(void) ;
extern void __dyc_print_ptr__comp_432string_list_item(struct string_list_item  const  *__dyc_thistype ) ;
extern kh_odb_path_map_t __dyc_random_typdef_kh_odb_path_map_t(unsigned int __dyc_exp ) ;
extern kh_odb_path_map_t __dyc_read_typdef_kh_odb_path_map_t(void) ;
extern void __dyc_print_typdef_kh_odb_path_map_t(kh_odb_path_map_t __dyc_thistype ) ;
extern struct worktree __dyc_random_comp_508worktree(unsigned int __dyc_exp ) ;
extern struct worktree __dyc_read_comp_508worktree(void) ;
extern void __dyc_print_comp_508worktree(struct worktree __dyc_thistype ) ;
extern struct packed_git **__dyc_random_ptr__ptr__comp_441packed_git(unsigned int __dyc_exp ) ;
extern struct packed_git **__dyc_read_ptr__ptr__comp_441packed_git(void) ;
extern void __dyc_print_ptr__ptr__comp_441packed_git(struct packed_git * const  *__dyc_thistype ) ;
extern uint32_t *__dyc_random_ptr__typdef_uint32_t(unsigned int __dyc_exp ) ;
extern uint32_t *__dyc_read_ptr__typdef_uint32_t(void) ;
extern void __dyc_print_ptr__typdef_uint32_t(uint32_t const   *__dyc_thistype ) ;
extern struct commit_list __dyc_random_comp_471commit_list(unsigned int __dyc_exp ) ;
extern struct commit_list __dyc_read_comp_471commit_list(void) ;
extern void __dyc_print_comp_471commit_list(struct commit_list __dyc_thistype ) ;
extern off_t __dyc_random_typdef_off_t(unsigned int __dyc_exp ) ;
extern off_t __dyc_read_typdef_off_t(void) ;
extern void __dyc_print_typdef_off_t(off_t __dyc_thistype ) ;
extern struct config_set_element __dyc_random_comp_497config_set_element(unsigned int __dyc_exp ) ;
extern struct config_set_element __dyc_read_comp_497config_set_element(void) ;
extern void __dyc_print_comp_497config_set_element(struct config_set_element __dyc_thistype ) ;
extern size_t *__dyc_random_ptr__typdef_size_t(unsigned int __dyc_exp ) ;
extern size_t *__dyc_read_ptr__typdef_size_t(void) ;
extern void __dyc_print_ptr__typdef_size_t(size_t const   *__dyc_thistype ) ;
extern void *__dyc_random_ptr__comp_560revindex_entry(unsigned int __dyc_exp ) ;
extern void *__dyc_read_ptr__comp_560revindex_entry(void) ;
extern void __dyc_print_ptr__comp_560revindex_entry(void const   * const  __dyc_thistype ) ;
extern __off64_t __dyc_random_typdef___off64_t(unsigned int __dyc_exp ) ;
extern __off64_t __dyc_read_typdef___off64_t(void) ;
extern void __dyc_print_typdef___off64_t(__off64_t __dyc_thistype ) ;
extern uint8_t __dyc_random_typdef_uint8_t(unsigned int __dyc_exp ) ;
extern uint8_t __dyc_read_typdef_uint8_t(void) ;
extern void __dyc_print_typdef_uint8_t(uint8_t __dyc_thistype ) ;
extern nfds_t __dyc_random_typdef_nfds_t(unsigned int __dyc_exp ) ;
extern nfds_t __dyc_read_typdef_nfds_t(void) ;
extern void __dyc_print_typdef_nfds_t(nfds_t __dyc_thistype ) ;
extern struct hashmap_entry **__dyc_random_ptr__ptr__comp_426hashmap_entry(unsigned int __dyc_exp ) ;
extern struct hashmap_entry **__dyc_read_ptr__ptr__comp_426hashmap_entry(void) ;
extern void __dyc_print_ptr__ptr__comp_426hashmap_entry(struct hashmap_entry * const  *__dyc_thistype ) ;
extern void *__dyc_random_ptr__comp_474alloc_state(unsigned int __dyc_exp ) ;
extern void *__dyc_read_ptr__comp_474alloc_state(void) ;
extern void __dyc_print_ptr__comp_474alloc_state(void const   * const  __dyc_thistype ) ;
extern __ssize_t __dyc_random_typdef___ssize_t(unsigned int __dyc_exp ) ;
extern __ssize_t __dyc_read_typdef___ssize_t(void) ;
extern void __dyc_print_typdef___ssize_t(__ssize_t __dyc_thistype ) ;
extern struct cache_entry __dyc_random_comp_453cache_entry(unsigned int __dyc_exp ) ;
extern struct cache_entry __dyc_read_comp_453cache_entry(void) ;
extern void __dyc_print_comp_453cache_entry(struct cache_entry __dyc_thistype ) ;
extern __sig_atomic_t __dyc_random_typdef___sig_atomic_t(unsigned int __dyc_exp ) ;
extern __sig_atomic_t __dyc_read_typdef___sig_atomic_t(void) ;
extern void __dyc_print_typdef___sig_atomic_t(__sig_atomic_t __dyc_thistype ) ;
extern struct commit_list *__dyc_random_ptr__comp_471commit_list(unsigned int __dyc_exp ) ;
extern struct commit_list *__dyc_read_ptr__comp_471commit_list(void) ;
extern void __dyc_print_ptr__comp_471commit_list(struct commit_list  const  *__dyc_thistype ) ;
extern struct hashmap __dyc_random_comp_427hashmap(unsigned int __dyc_exp ) ;
extern struct hashmap __dyc_read_comp_427hashmap(void) ;
extern void __dyc_print_comp_427hashmap(struct hashmap __dyc_thistype ) ;
extern struct object_id __dyc_random_comp_406object_id(unsigned int __dyc_exp ) ;
extern struct object_id __dyc_read_comp_406object_id(void) ;
extern void __dyc_print_comp_406object_id(struct object_id __dyc_thistype ) ;
extern void *__dyc_random_ptr__typdef_alternate_ref_fn(unsigned int __dyc_exp ) ;
extern void *__dyc_read_ptr__typdef_alternate_ref_fn(void) ;
extern void __dyc_print_ptr__typdef_alternate_ref_fn(void const   * const  __dyc_thistype ) ;
extern void *__dyc_random_ptr__comp_541tmp_objdir(unsigned int __dyc_exp ) ;
extern void *__dyc_read_ptr__comp_541tmp_objdir(void) ;
extern void __dyc_print_ptr__comp_541tmp_objdir(void const   * const  __dyc_thistype ) ;
extern struct child_process *__dyc_random_ptr__comp_439child_process(unsigned int __dyc_exp ) ;
extern struct child_process *__dyc_read_ptr__comp_439child_process(void) ;
extern void __dyc_print_ptr__comp_439child_process(struct child_process  const  *__dyc_thistype ) ;
extern struct git_hash_algo __dyc_random_comp_411git_hash_algo(unsigned int __dyc_exp ) ;
extern struct git_hash_algo __dyc_read_comp_411git_hash_algo(void) ;
extern void __dyc_print_comp_411git_hash_algo(struct git_hash_algo __dyc_thistype ) ;
extern khint_t __dyc_random_typdef_khint_t(unsigned int __dyc_exp ) ;
extern khint_t __dyc_read_typdef_khint_t(void) ;
extern void __dyc_print_typdef_khint_t(khint_t __dyc_thistype ) ;
extern kh_oid_set_t __dyc_random_typdef_kh_oid_set_t(unsigned int __dyc_exp ) ;
extern kh_oid_set_t __dyc_read_typdef_kh_oid_set_t(void) ;
extern void __dyc_print_typdef_kh_oid_set_t(kh_oid_set_t __dyc_thistype ) ;
extern struct strbuf *__dyc_random_ptr__comp_365strbuf(unsigned int __dyc_exp ) ;
extern struct strbuf *__dyc_read_ptr__comp_365strbuf(void) ;
extern void __dyc_print_ptr__comp_365strbuf(struct strbuf  const  *__dyc_thistype ) ;
extern struct cache_entry *__dyc_random_ptr__comp_453cache_entry(unsigned int __dyc_exp ) ;
extern struct cache_entry *__dyc_read_ptr__comp_453cache_entry(void) ;
extern void __dyc_print_ptr__comp_453cache_entry(struct cache_entry  const  *__dyc_thistype ) ;
extern struct __anonstruct_SHA1_CTX_84 __dyc_random_comp_423__anonstruct_SHA1_CTX_84(unsigned int __dyc_exp ) ;
extern struct __anonstruct_SHA1_CTX_84 __dyc_read_comp_423__anonstruct_SHA1_CTX_84(void) ;
extern void __dyc_print_comp_423__anonstruct_SHA1_CTX_84(struct __anonstruct_SHA1_CTX_84 __dyc_thistype ) ;
extern struct trace_key *__dyc_random_ptr__comp_438trace_key(unsigned int __dyc_exp ) ;
extern struct trace_key *__dyc_read_ptr__comp_438trace_key(void) ;
extern void __dyc_print_ptr__comp_438trace_key(struct trace_key  const  *__dyc_thistype ) ;
extern union git_hash_ctx __dyc_random_comp_425git_hash_ctx(unsigned int __dyc_exp ) ;
extern union git_hash_ctx __dyc_read_comp_425git_hash_ctx(void) ;
extern void __dyc_print_comp_425git_hash_ctx(union git_hash_ctx __dyc_thistype ) ;
extern struct oidmap *__dyc_random_ptr__comp_544oidmap(unsigned int __dyc_exp ) ;
extern struct oidmap *__dyc_read_ptr__comp_544oidmap(void) ;
extern void __dyc_print_ptr__comp_544oidmap(struct oidmap  const  *__dyc_thistype ) ;
extern struct volatile_list_head __dyc_random_comp_430volatile_list_head(unsigned int __dyc_exp ) ;
extern struct volatile_list_head __dyc_read_comp_430volatile_list_head(void) ;
extern void __dyc_print_comp_430volatile_list_head(struct volatile_list_head __dyc_thistype ) ;
extern struct repo_settings __dyc_random_comp_418repo_settings(unsigned int __dyc_exp ) ;
extern struct repo_settings __dyc_read_comp_418repo_settings(void) ;
extern void __dyc_print_comp_418repo_settings(struct repo_settings __dyc_thistype ) ;
extern ssize_t __dyc_random_typdef_ssize_t(unsigned int __dyc_exp ) ;
extern ssize_t __dyc_read_typdef_ssize_t(void) ;
extern void __dyc_print_typdef_ssize_t(ssize_t __dyc_thistype ) ;
extern struct tree *__dyc_random_ptr__comp_454tree(unsigned int __dyc_exp ) ;
extern struct tree *__dyc_read_ptr__comp_454tree(void) ;
extern void __dyc_print_ptr__comp_454tree(struct tree  const  *__dyc_thistype ) ;
extern struct commit __dyc_random_comp_482commit(unsigned int __dyc_exp ) ;
extern struct commit __dyc_read_comp_482commit(void) ;
extern void __dyc_print_comp_482commit(struct commit __dyc_thistype ) ;
extern struct object *__dyc_random_ptr__comp_464object(unsigned int __dyc_exp ) ;
extern struct object *__dyc_read_ptr__comp_464object(void) ;
extern void __dyc_print_ptr__comp_464object(struct object  const  *__dyc_thistype ) ;
extern kh_odb_path_map_t *__dyc_random_ptr__typdef_kh_odb_path_map_t(unsigned int __dyc_exp ) ;
extern kh_odb_path_map_t *__dyc_read_ptr__typdef_kh_odb_path_map_t(void) ;
extern void __dyc_print_ptr__typdef_kh_odb_path_map_t(kh_odb_path_map_t const   *__dyc_thistype ) ;
extern struct worktree *__dyc_random_ptr__comp_508worktree(unsigned int __dyc_exp ) ;
extern struct worktree *__dyc_read_ptr__comp_508worktree(void) ;
extern void __dyc_print_ptr__comp_508worktree(struct worktree  const  *__dyc_thistype ) ;
extern void *__dyc_random_ptr__typdef_each_ref_fn(unsigned int __dyc_exp ) ;
extern void *__dyc_read_ptr__typdef_each_ref_fn(void) ;
extern void __dyc_print_ptr__typdef_each_ref_fn(void const   * const  __dyc_thistype ) ;
extern uint32_t **__dyc_random_ptr__ptr__typdef_uint32_t(unsigned int __dyc_exp ) ;
extern uint32_t **__dyc_read_ptr__ptr__typdef_uint32_t(void) ;
extern void __dyc_print_ptr__ptr__typdef_uint32_t(uint32_t * const  *__dyc_thistype ) ;
extern struct parsed_object_pool __dyc_random_comp_419parsed_object_pool(unsigned int __dyc_exp ) ;
extern struct parsed_object_pool __dyc_read_comp_419parsed_object_pool(void) ;
extern void __dyc_print_comp_419parsed_object_pool(struct parsed_object_pool __dyc_thistype ) ;
extern struct oidtree __dyc_random_comp_557oidtree(unsigned int __dyc_exp ) ;
extern struct oidtree __dyc_read_comp_557oidtree(void) ;
extern void __dyc_print_comp_557oidtree(struct oidtree __dyc_thistype ) ;
extern struct mem_pool __dyc_random_comp_445mem_pool(unsigned int __dyc_exp ) ;
extern struct mem_pool __dyc_read_comp_445mem_pool(void) ;
extern void __dyc_print_comp_445mem_pool(struct mem_pool __dyc_thistype ) ;
extern void *__dyc_random_ptr__comp_442multi_pack_index(unsigned int __dyc_exp ) ;
extern void *__dyc_read_ptr__comp_442multi_pack_index(void) ;
extern void __dyc_print_ptr__comp_442multi_pack_index(void const   * const  __dyc_thistype ) ;
extern struct parse_opt_ctx_t __dyc_random_comp_523parse_opt_ctx_t(unsigned int __dyc_exp ) ;
extern struct parse_opt_ctx_t __dyc_read_comp_523parse_opt_ctx_t(void) ;
extern void __dyc_print_comp_523parse_opt_ctx_t(struct parse_opt_ctx_t __dyc_thistype ) ;
extern struct _IO_FILE __dyc_random_comp_2_IO_FILE(unsigned int __dyc_exp ) ;
extern struct _IO_FILE __dyc_read_comp_2_IO_FILE(void) ;
extern void __dyc_print_comp_2_IO_FILE(struct _IO_FILE __dyc_thistype ) ;
extern struct object **__dyc_random_ptr__ptr__comp_464object(unsigned int __dyc_exp ) ;
extern struct object **__dyc_read_ptr__ptr__comp_464object(void) ;
extern void __dyc_print_ptr__ptr__comp_464object(struct object * const  *__dyc_thistype ) ;
extern struct iterate_data __dyc_random_comp_572iterate_data(unsigned int __dyc_exp ) ;
extern struct iterate_data __dyc_read_comp_572iterate_data(void) ;
extern void __dyc_print_comp_572iterate_data(struct iterate_data __dyc_thistype ) ;
extern struct oid_stat __dyc_random_comp_552oid_stat(unsigned int __dyc_exp ) ;
extern struct oid_stat __dyc_read_comp_552oid_stat(void) ;
extern void __dyc_print_comp_552oid_stat(struct oid_stat __dyc_thistype ) ;
extern struct shallow_lock __dyc_random_comp_567shallow_lock(unsigned int __dyc_exp ) ;
extern struct shallow_lock __dyc_read_comp_567shallow_lock(void) ;
extern void __dyc_print_comp_567shallow_lock(struct shallow_lock __dyc_thistype ) ;
extern struct packed_git __dyc_random_comp_441packed_git(unsigned int __dyc_exp ) ;
extern struct packed_git __dyc_read_comp_441packed_git(void) ;
extern void __dyc_print_comp_441packed_git(struct packed_git __dyc_thistype ) ;
extern struct raw_object_store __dyc_random_comp_415raw_object_store(unsigned int __dyc_exp ) ;
extern struct raw_object_store __dyc_read_comp_415raw_object_store(void) ;
extern void __dyc_print_comp_415raw_object_store(struct raw_object_store __dyc_thistype ) ;
extern void *__dyc_random_ptr__typdef__IO_lock_t(unsigned int __dyc_exp ) ;
extern void *__dyc_read_ptr__typdef__IO_lock_t(void) ;
extern void __dyc_print_ptr__typdef__IO_lock_t(void const   * const  __dyc_thistype ) ;
extern struct command __dyc_random_comp_570command(unsigned int __dyc_exp ) ;
extern struct command __dyc_read_comp_570command(void) ;
extern void __dyc_print_comp_570command(struct command __dyc_thistype ) ;
extern struct oid_array *__dyc_random_ptr__comp_443oid_array(unsigned int __dyc_exp ) ;
extern struct oid_array *__dyc_read_ptr__comp_443oid_array(void) ;
extern void __dyc_print_ptr__comp_443oid_array(struct oid_array  const  *__dyc_thistype ) ;
extern struct oidtree *__dyc_random_ptr__comp_557oidtree(unsigned int __dyc_exp ) ;
extern struct oidtree *__dyc_read_ptr__comp_557oidtree(void) ;
extern void __dyc_print_ptr__comp_557oidtree(struct oidtree  const  *__dyc_thistype ) ;
extern pid_t __dyc_random_typdef_pid_t(unsigned int __dyc_exp ) ;
extern pid_t __dyc_read_typdef_pid_t(void) ;
extern void __dyc_print_typdef_pid_t(pid_t __dyc_thistype ) ;
extern void *__dyc_random_ptr__comp_459cache_tree(unsigned int __dyc_exp ) ;
extern void *__dyc_read_ptr__comp_459cache_tree(void) ;
extern void __dyc_print_ptr__comp_459cache_tree(void const   * const  __dyc_thistype ) ;
extern struct ref_push_report __dyc_random_comp_528ref_push_report(unsigned int __dyc_exp ) ;
extern struct ref_push_report __dyc_read_comp_528ref_push_report(void) ;
extern void __dyc_print_comp_528ref_push_report(struct ref_push_report __dyc_thistype ) ;
extern struct parse_opt_ctx_t *__dyc_random_ptr__comp_523parse_opt_ctx_t(unsigned int __dyc_exp ) ;
extern struct parse_opt_ctx_t *__dyc_read_ptr__comp_523parse_opt_ctx_t(void) ;
extern void __dyc_print_ptr__comp_523parse_opt_ctx_t(struct parse_opt_ctx_t  const  *__dyc_thistype ) ;
extern struct mp_block __dyc_random_comp_444mp_block(unsigned int __dyc_exp ) ;
extern struct mp_block __dyc_read_comp_444mp_block(void) ;
extern void __dyc_print_comp_444mp_block(struct mp_block __dyc_thistype ) ;
extern struct __pthread_internal_list *__dyc_random_ptr__comp_20__pthread_internal_list(unsigned int __dyc_exp ) ;
extern struct __pthread_internal_list *__dyc_read_ptr__comp_20__pthread_internal_list(void) ;
extern void __dyc_print_ptr__comp_20__pthread_internal_list(struct __pthread_internal_list  const  *__dyc_thistype ) ;
extern struct pollfd __dyc_random_comp_87pollfd(unsigned int __dyc_exp ) ;
extern struct pollfd __dyc_read_comp_87pollfd(void) ;
extern void __dyc_print_comp_87pollfd(struct pollfd __dyc_thistype ) ;
extern struct untracked_cache_dir __dyc_random_comp_550untracked_cache_dir(unsigned int __dyc_exp ) ;
extern struct untracked_cache_dir __dyc_read_comp_550untracked_cache_dir(void) ;
extern void __dyc_print_comp_550untracked_cache_dir(struct untracked_cache_dir __dyc_thistype ) ;
extern struct cache_entry **__dyc_random_ptr__ptr__comp_453cache_entry(unsigned int __dyc_exp ) ;
extern struct cache_entry **__dyc_read_ptr__ptr__comp_453cache_entry(void) ;
extern void __dyc_print_ptr__ptr__comp_453cache_entry(struct cache_entry * const  *__dyc_thistype ) ;
extern struct path_cache __dyc_random_comp_409path_cache(unsigned int __dyc_exp ) ;
extern struct path_cache __dyc_read_comp_409path_cache(void) ;
extern void __dyc_print_comp_409path_cache(struct path_cache __dyc_thistype ) ;
extern struct command *__dyc_random_ptr__comp_570command(unsigned int __dyc_exp ) ;
extern struct command *__dyc_read_ptr__comp_570command(void) ;
extern void __dyc_print_ptr__comp_570command(struct command  const  *__dyc_thistype ) ;
extern intptr_t __dyc_random_typdef_intptr_t(unsigned int __dyc_exp ) ;
extern intptr_t __dyc_read_typdef_intptr_t(void) ;
extern void __dyc_print_typdef_intptr_t(intptr_t __dyc_thistype ) ;
extern FILE __dyc_random_typdef_FILE(unsigned int __dyc_exp ) ;
extern FILE __dyc_read_typdef_FILE(void) ;
extern void __dyc_print_typdef_FILE(FILE __dyc_thistype ) ;
extern void *__dyc_random_ptr__comp_455split_index(unsigned int __dyc_exp ) ;
extern void *__dyc_read_ptr__comp_455split_index(void) ;
extern void __dyc_print_ptr__comp_455split_index(void const   * const  __dyc_thistype ) ;
extern struct ref_push_report *__dyc_random_ptr__comp_528ref_push_report(unsigned int __dyc_exp ) ;
extern struct ref_push_report *__dyc_read_ptr__comp_528ref_push_report(void) ;
extern void __dyc_print_ptr__comp_528ref_push_report(struct ref_push_report  const  *__dyc_thistype ) ;
extern uint64_t __dyc_random_typdef_uint64_t(unsigned int __dyc_exp ) ;
extern uint64_t __dyc_read_typdef_uint64_t(void) ;
extern void __dyc_print_typdef_uint64_t(uint64_t __dyc_thistype ) ;
extern sig_atomic_t __dyc_random_typdef_sig_atomic_t(unsigned int __dyc_exp ) ;
extern sig_atomic_t __dyc_read_typdef_sig_atomic_t(void) ;
extern void __dyc_print_typdef_sig_atomic_t(sig_atomic_t __dyc_thistype ) ;
extern struct async *__dyc_random_ptr__comp_521async(unsigned int __dyc_exp ) ;
extern struct async *__dyc_read_ptr__comp_521async(void) ;
extern void __dyc_print_ptr__comp_521async(struct async  const  *__dyc_thistype ) ;
extern char **__dyc_random_ptr__ptr__char(unsigned int __dyc_exp ) ;
extern char **__dyc_read_ptr__ptr__char(void) ;
extern void __dyc_print_ptr__ptr__char(char * const  *__dyc_thistype ) ;
extern struct tempfile __dyc_random_comp_501tempfile(unsigned int __dyc_exp ) ;
extern struct tempfile __dyc_read_comp_501tempfile(void) ;
extern void __dyc_print_comp_501tempfile(struct tempfile __dyc_thistype ) ;
extern struct commit_graft **__dyc_random_ptr__ptr__comp_475commit_graft(unsigned int __dyc_exp ) ;
extern struct commit_graft **__dyc_read_ptr__ptr__comp_475commit_graft(void) ;
extern void __dyc_print_ptr__ptr__comp_475commit_graft(struct commit_graft * const  *__dyc_thistype ) ;
extern struct hashmap_entry *__dyc_random_ptr__comp_426hashmap_entry(unsigned int __dyc_exp ) ;
extern struct hashmap_entry *__dyc_read_ptr__comp_426hashmap_entry(void) ;
extern void __dyc_print_ptr__comp_426hashmap_entry(struct hashmap_entry  const  *__dyc_thistype ) ;
extern struct untracked_cache_dir *__dyc_random_ptr__comp_550untracked_cache_dir(unsigned int __dyc_exp ) ;
extern struct untracked_cache_dir *__dyc_read_ptr__comp_550untracked_cache_dir(void) ;
extern void __dyc_print_ptr__comp_550untracked_cache_dir(struct untracked_cache_dir  const  *__dyc_thistype ) ;
extern struct config_set *__dyc_random_ptr__comp_410config_set(unsigned int __dyc_exp ) ;
extern struct config_set *__dyc_read_ptr__comp_410config_set(void) ;
extern void __dyc_print_ptr__comp_410config_set(struct config_set  const  *__dyc_thistype ) ;
