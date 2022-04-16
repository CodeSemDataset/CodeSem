#line 141 "/usr/include/x86_64-linux-gnu/bits/types.h"
typedef long __off_t;
#line 142 "/usr/include/x86_64-linux-gnu/bits/types.h"
typedef long __off64_t;
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
#line 268 "/usr/include/unistd.h"
typedef __intptr_t intptr_t;
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
#line 76 "/usr/include/time.h"
typedef __time_t time_t;
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
#line 45 "/usr/include/regex.h"
typedef unsigned long reg_syntax_t;
#line 370 "/usr/include/regex.h"
struct re_pattern_buffer {
   unsigned char *buffer ;
   unsigned long allocated ;
   unsigned long used ;
   reg_syntax_t syntax ;
   char *fastmap ;
   unsigned char *translate ;
   size_t re_nsub ;
   unsigned int can_be_null : 1 ;
   unsigned int regs_allocated : 2 ;
   unsigned int fastmap_accurate : 1 ;
   unsigned int no_sub : 1 ;
   unsigned int not_bol : 1 ;
   unsigned int not_eol : 1 ;
   unsigned int newline_anchor : 1 ;
};
#line 436 "/usr/include/regex.h"
typedef struct re_pattern_buffer regex_t;
#line 49 "/usr/include/stdint.h"
typedef unsigned char uint8_t;
#line 52 "/usr/include/stdint.h"
typedef unsigned int uint32_t;
#line 56 "/usr/include/stdint.h"
typedef unsigned long uint64_t;
#line 135 "/usr/include/stdint.h"
typedef long intmax_t;
#line 136 "/usr/include/stdint.h"
typedef unsigned long uintmax_t;
#line 332 "git-compat-util.h"
typedef uintmax_t timestamp_t;
#line 463
struct strbuf;
#line 463
struct strbuf;
#line 4 "strbuf.h"
struct string_list;
#line 4
struct string_list;
#line 66 "strbuf.h"
struct strbuf {
   size_t alloc ;
   size_t len ;
   char *buf ;
};
#line 79
struct object_id;
#line 79
struct object_id;
#line 4 "path.h"
struct repository;
#line 4
struct repository;
#line 5
struct strbuf;
#line 172 "path.h"
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
#line 6 "repository.h"
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
#line 10
struct pathspec;
#line 10
struct pathspec;
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
#line 30 "repository.h"
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
#line 50 "repository.h"
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
#line 39 "sha1dc/sha1.h"
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
#line 39 "sha1dc/sha1.h"
typedef struct __anonstruct_SHA1_CTX_84 SHA1_CTX;
#line 6 "sha256/block/sha256.h"
struct blk_SHA256_CTX {
   uint32_t state[8] ;
   uint64_t size ;
   uint32_t offset ;
   uint8_t buf[64] ;
};
#line 13 "sha256/block/sha256.h"
typedef struct blk_SHA256_CTX blk_SHA256_CTX;
#line 116 "hash.h"
struct object_id {
   unsigned char hash[32] ;
   int algo ;
};
#line 122 "hash.h"
union git_hash_ctx {
   SHA1_CTX sha1 ;
   blk_SHA256_CTX sha256 ;
};
#line 126 "hash.h"
typedef union git_hash_ctx git_hash_ctx;
#line 134 "hash.h"
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
#line 148 "hashmap.h"
struct hashmap_entry {
   struct hashmap_entry *next ;
   unsigned int hash ;
};
#line 187 "hashmap.h"
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
#line 462 "hashmap.h"
struct hashmap_iter {
   struct hashmap *map ;
   struct hashmap_entry *next ;
   unsigned int tablepos ;
};
#line 35 "list.h"
struct list_head {
   struct list_head *next ;
   struct list_head *prev ;
};
#line 6 "advice.h"
struct string_list;
#line 68 "string-list.h"
struct string_list_item {
   char *string ;
   void *util ;
};
#line 87 "string-list.h"
struct string_list {
   struct string_list_item *items ;
   unsigned int nr ;
   unsigned int alloc ;
   unsigned int strdup_strings : 1 ;
   int (*cmp)(char const   * , char const   * ) ;
};
#line 10 "convert.h"
struct index_state;
#line 11
struct strbuf;
#line 39 "trace2.h"
struct repository;
#line 40
struct json_writer;
#line 40
struct json_writer;
#line 40 "pack-revindex.h"
struct packed_git;
#line 40
struct packed_git;
#line 41
struct multi_pack_index;
#line 41
struct multi_pack_index;
#line 4 "mem-pool.h"
struct mp_block {
   struct mp_block *next_block ;
   char *next_free ;
   char *end ;
   uintmax_t space[] ;
};
#line 11 "mem-pool.h"
struct mem_pool {
   struct mp_block *mp_block ;
   size_t block_alloc ;
   size_t pool_alloc ;
};
#line 127 "cache.h"
struct cache_time {
   uint32_t sec ;
   uint32_t nsec ;
};
#line 132 "cache.h"
struct stat_data {
   struct cache_time sd_ctime ;
   struct cache_time sd_mtime ;
   unsigned int sd_dev ;
   unsigned int sd_ino ;
   unsigned int sd_uid ;
   unsigned int sd_gid ;
   unsigned int sd_size ;
};
#line 142 "cache.h"
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
#line 210
struct pathspec;
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
#line 314 "cache.h"
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
#line 467
enum object_type {
    OBJ_BAD = -1,
    OBJ_NONE = 0,
    OBJ_COMMIT = 1,
    OBJ_TREE = 2,
    OBJ_BLOB = 3,
    OBJ_TAG = 4,
    OBJ_OFS_DELTA = 6,
    OBJ_REF_DELTA = 7,
    OBJ_ANY = 8,
    OBJ_MAX = 9
} ;
#line 1347 "cache.h"
struct object_context {
   unsigned short mode ;
   struct strbuf symlink_path ;
   char *path ;
};
#line 1377
enum get_oid_result {
    FOUND = 0,
    MISSING_OBJECT = -1,
    SHORT_NAME_AMBIGUOUS = -2,
    DANGLING_SYMLINK = -4,
    SYMLINK_LOOP = -5,
    NOT_DIR = -6
} ;
#line 1511 "cache.h"
struct interpret_branch_name_options {
   unsigned int allowed ;
   unsigned int nonfatal_dangling_mark : 1 ;
};
#line 1547
struct object;
#line 1553
enum date_mode_type {
    DATE_NORMAL = 0,
    DATE_HUMAN = 1,
    DATE_RELATIVE = 2,
    DATE_SHORT = 3,
    DATE_ISO8601 = 4,
    DATE_ISO8601_STRICT = 5,
    DATE_RFC2822 = 6,
    DATE_STRFTIME = 7,
    DATE_RAW = 8,
    DATE_UNIX = 9
} ;
#line 1566 "cache.h"
struct date_mode {
   enum date_mode_type type ;
   char *strftime_fmt ;
   int local ;
};
#line 1623 "cache.h"
struct ident_split {
   char *name_begin ;
   char *name_end ;
   char *mail_begin ;
   char *mail_end ;
   char *date_begin ;
   char *date_end ;
   char *tz_begin ;
   char *tz_end ;
};
#line 1676 "cache.h"
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
#line 1864 "cache.h"
struct stat_validity {
   struct stat_data *sd ;
};
#line 21 "oidmap.h"
struct oidmap {
   struct hashmap map ;
};
#line 34 "khash.h"
typedef uint32_t khint32_t;
#line 37 "khash.h"
typedef khint32_t khint_t;
#line 38 "khash.h"
typedef khint_t khiter_t;
#line 333 "khash.h"
struct __anonstruct_kh_oid_set_t_99 {
   khint_t n_buckets ;
   khint_t size ;
   khint_t n_occupied ;
   khint_t upper_bound ;
   khint32_t *flags ;
   struct object_id *keys ;
   int *vals ;
};
#line 333 "khash.h"
typedef struct __anonstruct_kh_oid_set_t_99 kh_oid_set_t;
#line 52 "dir.h"
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
#line 87 "dir.h"
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
#line 138 "dir.h"
struct oid_stat {
   struct stat_data stat ;
   struct object_id oid ;
   int valid ;
};
#line 172 "dir.h"
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
#line 187 "dir.h"
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
#line 499
struct pathspec_item;
#line 499
struct pathspec_item;
#line 19 "cbtree.h"
struct cb_node;
#line 19
struct cb_node;
#line 20 "cbtree.h"
struct cb_node {
   struct cb_node *child[2] ;
   uint32_t byte ;
   uint8_t otherbits ;
   uint8_t k[] ;
};
#line 31 "cbtree.h"
struct cb_tree {
   struct cb_node *root ;
};
#line 8 "oidtree.h"
struct oidtree {
   struct cb_tree tree ;
   struct mem_pool mem_pool ;
};
#line 14 "object-store.h"
struct object_directory {
   struct object_directory *next ;
   uint32_t loose_objects_subdir_seen[8] ;
   struct oidtree *loose_objects_cache ;
   char *path ;
};
#line 36 "object-store.h"
struct __anonstruct_kh_odb_path_map_t_103 {
   khint_t n_buckets ;
   khint_t size ;
   khint_t n_occupied ;
   khint_t upper_bound ;
   khint32_t *flags ;
   char **keys ;
   struct object_directory **vals ;
};
#line 36 "object-store.h"
typedef struct __anonstruct_kh_odb_path_map_t_103 kh_odb_path_map_t;
#line 43 "object-store.h"
typedef void alternate_ref_fn(struct object_id  const  *oid , void * );
#line 69
struct revindex_entry;
#line 69 "object-store.h"
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
#line 117 "object-store.h"
struct __anonstruct_kept_pack_cache_104 {
   struct packed_git **packs ;
   unsigned int flags ;
};
#line 117 "object-store.h"
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
   struct __anonstruct_kept_pack_cache_104 kept_pack_cache ;
   struct hashmap pack_map ;
   unsigned long approximate_object_count ;
   unsigned int approximate_object_count_valid : 1 ;
   unsigned int packed_git_initialized : 1 ;
};
#line 447
enum for_each_object_flags {
    FOR_EACH_OBJECT_LOCAL_ONLY = 1,
    FOR_EACH_OBJECT_PROMISOR_ONLY = 2,
    FOR_EACH_OBJECT_PACK_ORDER = 4
} ;
#line 478 "object-store.h"
typedef int each_packed_object_fn(struct object_id  const  *oid ,
                                  struct packed_git *pack , uint32_t pos ,
                                  void *data );
#line 6 "object.h"
struct buffer_slab;
#line 6
struct buffer_slab;
#line 8
struct alloc_state;
#line 8
struct commit_graft;
#line 8 "object.h"
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
#line 41 "object.h"
struct object_array_entry {
   struct object *item ;
   char *name ;
   char *path ;
   unsigned int mode ;
};
#line 41 "object.h"
struct object_array {
   unsigned int nr ;
   unsigned int alloc ;
   struct object_array_entry *objects ;
};
#line 88 "object.h"
struct object {
   unsigned int parsed : 1 ;
   unsigned int type : 3 ;
   unsigned int flags : 28 ;
   struct object_id oid ;
};
#line 8 "tag.h"
struct tag {
   struct object object ;
   struct object *tagged ;
   char *tag ;
   timestamp_t date ;
};
#line 8 "blob.h"
struct blob {
   struct object object ;
};
#line 6 "tree.h"
struct repository;
#line 7
struct strbuf;
#line 9 "tree.h"
struct tree {
   struct object object ;
   void *buffer ;
   unsigned long size ;
};
#line 13 "decorate.h"
struct decoration_entry {
   struct object *base ;
   void *decoration ;
};
#line 23 "decorate.h"
struct decoration {
   char *name ;
   unsigned int size ;
   unsigned int nr ;
   struct decoration_entry *entries ;
};
#line 4 "gpg-interface.h"
struct strbuf;
#line 7 "pretty.h"
struct commit;
#line 7
struct commit;
#line 8
struct strbuf;
#line 12
enum cmit_fmt {
    CMIT_FMT_RAW = 0,
    CMIT_FMT_MEDIUM = 1,
    CMIT_FMT_DEFAULT = 1,
    CMIT_FMT_SHORT = 2,
    CMIT_FMT_FULL = 3,
    CMIT_FMT_FULLER = 4,
    CMIT_FMT_ONELINE = 5,
    CMIT_FMT_EMAIL = 6,
    CMIT_FMT_MBOXRD = 7,
    CMIT_FMT_USERFORMAT = 8,
    CMIT_FMT_UNSPECIFIED = 9
} ;
#line 31
struct reflog_walk_info;
#line 31
struct rev_info;
#line 19 "commit.h"
struct commit_list {
   struct commit *item ;
   struct commit_list *next ;
};
#line 29 "commit.h"
struct commit {
   struct object object ;
   timestamp_t date ;
   struct commit_list *parents ;
   struct tree *maybe_tree ;
   unsigned int index ;
};
#line 47 "commit.h"
struct name_decoration {
   struct name_decoration *next ;
   int type ;
   char name[] ;
};
#line 105
struct buffer_slab;
#line 192
struct rev_info;
#line 220
enum rev_sort_order {
    REV_SORT_IN_GRAPH_ORDER = 0,
    REV_SORT_BY_COMMIT_DATE = 1,
    REV_SORT_BY_AUTHOR_DATE = 2
} ;
#line 238 "commit.h"
struct commit_graft {
   struct object_id oid ;
   int nr_parent ;
   struct object_id parent[] ;
};
#line 339
struct author_date_slab;
#line 339
struct author_date_slab;
#line 15 "tree-walk.h"
struct name_entry {
   struct object_id oid ;
   char *path ;
   int pathlen ;
   unsigned int mode ;
};
#line 25 "tree-walk.h"
struct tree_desc {
   void *buffer ;
   struct name_entry entry ;
   unsigned int size ;
};
#line 4 "pathspec.h"
struct index_state;
#line 30
enum attr_match_mode {
    MATCH_SET = 0,
    MATCH_UNSET = 1,
    MATCH_VALUE = 2,
    MATCH_UNSPECIFIED = 3
} ;
#line 30 "pathspec.h"
struct attr_match {
   char *value ;
   enum attr_match_mode match_mode ;
};
#line 30
struct attr_check;
#line 30 "pathspec.h"
struct pathspec_item {
   char *match ;
   char *original ;
   unsigned int magic ;
   int len ;
   int prefix ;
   int nowildcard_len ;
   int flags ;
   int attr_match_nr ;
   struct attr_match *attr_match ;
   struct attr_check *attr_check ;
};
#line 30 "pathspec.h"
struct pathspec {
   int nr ;
   unsigned int has_wildcard : 1 ;
   unsigned int recursive : 1 ;
   unsigned int recurse_submodules : 1 ;
   unsigned int magic ;
   int max_depth ;
   struct pathspec_item *items ;
};
#line 21 "oidset.h"
struct oidset {
   kh_oid_set_t set ;
};
#line 85 "oidset.h"
struct oidset_iter {
   kh_oid_set_t *set ;
   khiter_t iter ;
};
#line 65 "diff.h"
struct combine_diff_path;
#line 65
struct combine_diff_path;
#line 66
struct commit;
#line 67
struct diff_filespec;
#line 67
struct diff_filespec;
#line 68
struct diff_options;
#line 68
struct diff_options;
#line 69
struct diff_queue_struct;
#line 69
struct diff_queue_struct;
#line 71
struct option;
#line 71
struct option;
#line 72
struct repository;
#line 73
struct rev_info;
#line 74
struct strbuf;
#line 75
struct userdiff_driver;
#line 75
struct userdiff_driver;
#line 120 "diff.h"
struct diff_flags {
   unsigned int recursive ;
   unsigned int tree_in_recursive ;
   unsigned int binary ;
   unsigned int text ;
   unsigned int full_index ;
   unsigned int silent_on_remove ;
   unsigned int find_copies_harder ;
   unsigned int follow_renames ;
   unsigned int rename_empty ;
   unsigned int has_changes ;
   unsigned int quick ;
   unsigned int no_index ;
   unsigned int allow_external ;
   unsigned int exit_with_status ;
   unsigned int reverse_diff ;
   unsigned int check_failed ;
   unsigned int relative_name ;
   unsigned int ignore_submodules ;
   unsigned int dirstat_cumulative ;
   unsigned int dirstat_by_file ;
   unsigned int allow_textconv ;
   unsigned int textconv_set_via_cmdline ;
   unsigned int diff_from_contents ;
   unsigned int dirty_submodules ;
   unsigned int ignore_untracked_in_submodules ;
   unsigned int ignore_submodule_set ;
   unsigned int ignore_dirty_submodules ;
   unsigned int override_submodule_config ;
   unsigned int dirstat_by_line ;
   unsigned int funccontext ;
   unsigned int default_follow_renames ;
   unsigned int stat_with_summary ;
   unsigned int suppress_diff_headers ;
   unsigned int dual_color_diffed_diffs ;
   unsigned int suppress_hunk_header_line_count ;
};
#line 220
enum diff_words_type {
    DIFF_WORDS_NONE = 0,
    DIFF_WORDS_PORCELAIN = 1,
    DIFF_WORDS_PLAIN = 2,
    DIFF_WORDS_COLOR = 3
} ;
#line 227
enum diff_submodule_format {
    DIFF_SUBMODULE_SHORT = 0,
    DIFF_SUBMODULE_LOG = 1,
    DIFF_SUBMODULE_INLINE_DIFF = 2
} ;
#line 237
struct emitted_diff_symbols;
#line 237
enum __anonenum_color_moved_108 {
    COLOR_MOVED_NO = 0,
    COLOR_MOVED_PLAIN = 1,
    COLOR_MOVED_BLOCKS = 2,
    COLOR_MOVED_ZEBRA = 3,
    COLOR_MOVED_ZEBRA_DIM = 4
} ;
#line 237 "diff.h"
struct diff_options {
   char *orderfile ;
   char *rotate_to ;
   int skip_instead_of_rotate ;
   int rotate_to_strict ;
   char *pickaxe ;
   unsigned int pickaxe_opts ;
   regex_t **ignore_regex ;
   size_t ignore_regex_nr ;
   size_t ignore_regex_alloc ;
   char *single_follow ;
   char *a_prefix ;
   char *b_prefix ;
   char *line_prefix ;
   size_t line_prefix_length ;
   struct diff_flags flags ;
   unsigned int filter ;
   int use_color ;
   int context ;
   int interhunkcontext ;
   int break_opt ;
   int detect_rename ;
   int irreversible_delete ;
   int skip_stat_unmatch ;
   int line_termination ;
   int output_format ;
   int rename_score ;
   int rename_limit ;
   int needed_rename_limit ;
   int degraded_cc_to_c ;
   int show_rename_progress ;
   int dirstat_permille ;
   int setup ;
   int abbrev ;
   int max_changes ;
   int ita_invisible_in_index ;
   unsigned int ws_error_highlight ;
   char *prefix ;
   int prefix_length ;
   char *stat_sep ;
   int xdl_opts ;
   char **anchors ;
   size_t anchors_nr ;
   size_t anchors_alloc ;
   int stat_width ;
   int stat_name_width ;
   int stat_graph_width ;
   int stat_count ;
   char *word_regex ;
   enum diff_words_type word_diff ;
   enum diff_submodule_format submodule_format ;
   struct oidset *objfind ;
   int found_changes ;
   int found_follow ;
   void (*set_default)(struct diff_options * ) ;
   FILE *file ;
   int close_file ;
   char output_indicators[3] ;
   struct pathspec pathspec ;
   int (*pathchange)(struct diff_options *options ,
                     struct combine_diff_path *path ) ;
   void (*change)(struct diff_options *options , unsigned int old_mode ,
                  unsigned int new_mode , struct object_id  const  *old_oid ,
                  struct object_id  const  *new_oid , int old_oid_valid ,
                  int new_oid_valid , char const   *fullpath ,
                  unsigned int old_dirty_submodule ,
                  unsigned int new_dirty_submodule ) ;
   void (*add_remove)(struct diff_options *options , int addremove ,
                      unsigned int mode , struct object_id  const  *oid ,
                      int oid_valid , char const   *fullpath ,
                      unsigned int dirty_submodule ) ;
   void *change_fn_data ;
   void (*format_callback)(struct diff_queue_struct *q ,
                           struct diff_options *options , void *data ) ;
   void *format_callback_data ;
   struct strbuf *(*output_prefix)(struct diff_options *opt , void *data ) ;
   void *output_prefix_data ;
   int diff_path_counter ;
   struct emitted_diff_symbols *emitted_symbols ;
   enum __anonenum_color_moved_108 color_moved ;
   unsigned int color_moved_ws_handling ;
   struct repository *repo ;
   struct option *parseopts ;
   int no_free ;
};
#line 475 "diff.h"
struct combine_diff_parent {
   char status ;
   unsigned int mode ;
   struct object_id oid ;
   struct strbuf path ;
};
#line 475 "diff.h"
struct combine_diff_path {
   struct combine_diff_path *next ;
   char *path ;
   unsigned int mode ;
   struct object_id oid ;
   struct combine_diff_parent parent[] ;
};
#line 517
struct diff_filepair;
#line 10 "diff-merges.h"
struct rev_info;
#line 6 "refs.h"
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
#line 297 "refs.h"
typedef int each_ref_fn(char const   *refname , struct object_id  const  *oid ,
                        int flags , void *cb_data );
#line 467 "refs.h"
typedef int each_reflog_ent_fn(struct object_id *old_oid ,
                               struct object_id *new_oid ,
                               char const   *committer , timestamp_t timestamp ,
                               int tz , char const   *msg , void *cb_data );
#line 8 "parse-options.h"
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
#line 64 "parse-options.h"
typedef int parse_opt_cb(struct option  const  * , char const   *arg ,
                         int unset );
#line 66
struct parse_opt_ctx_t;
#line 66
struct parse_opt_ctx_t;
#line 67 "parse-options.h"
typedef enum parse_opt_result parse_opt_ll_cb(struct parse_opt_ctx_t *ctx ,
                                              struct option  const  *opt ,
                                              char const   *arg , int unset );
#line 130 "parse-options.h"
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
#line 263 "parse-options.h"
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
#line 4 "color.h"
struct strbuf;
#line 14 "grep.h"
typedef int pcre2_code;
#line 15 "grep.h"
typedef int pcre2_match_data;
#line 16 "grep.h"
typedef int pcre2_compile_context;
#line 17 "grep.h"
typedef int pcre2_general_context;
#line 6 "notes.h"
struct object_id;
#line 7
struct strbuf;
#line 51
struct int_node;
#line 51
struct non_note;
#line 51 "notes.h"
struct notes_tree {
   struct int_node *root ;
   struct non_note *first_non_note ;
   struct non_note *prev_non_note ;
   char *ref ;
   char *update_ref ;
   int (*combine_notes)(struct object_id *cur_oid ,
                        struct object_id  const  *new_oid ) ;
   int initialized ;
   int dirty ;
};
#line 256
struct string_list;
#line 258 "notes.h"
struct display_notes_opt {
   int use_default_notes ;
   struct string_list extra_notes_refs ;
};
#line 6 "notes-cache.h"
struct repository;
#line 8 "notes-cache.h"
struct notes_cache {
   struct notes_tree tree ;
   char *validity ;
};
#line 6 "userdiff.h"
struct index_state;
#line 7
struct repository;
#line 9 "userdiff.h"
struct userdiff_funcname {
   char *pattern ;
   int cflags ;
};
#line 14 "userdiff.h"
struct userdiff_driver {
   char *name ;
   char *external ;
   int binary ;
   struct userdiff_funcname funcname ;
   char *word_regex ;
   char *textconv ;
   struct notes_cache *textconv_cache ;
   int textconv_want_cache ;
};
#line 26 "grep.h"
struct repository;
#line 28
enum grep_pat_token {
    GREP_PATTERN = 0,
    GREP_PATTERN_HEAD = 1,
    GREP_PATTERN_BODY = 2,
    GREP_AND = 3,
    GREP_OPEN_PAREN = 4,
    GREP_CLOSE_PAREN = 5,
    GREP_NOT = 6,
    GREP_OR = 7
} ;
#line 44
enum grep_header_field {
    GREP_HEADER_FIELD_MIN = 0,
    GREP_HEADER_AUTHOR = 0,
    GREP_HEADER_COMMITTER = 1,
    GREP_HEADER_REFLOG = 2,
    GREP_HEADER_FIELD_MAX = 3
} ;
#line 67 "grep.h"
struct grep_pat {
   struct grep_pat *next ;
   char *origin ;
   int no ;
   enum grep_pat_token token ;
   char *pattern ;
   size_t patternlen ;
   enum grep_header_field field ;
   regex_t regexp ;
   pcre2_code *pcre2_pattern ;
   pcre2_match_data *pcre2_match_data ;
   pcre2_compile_context *pcre2_compile_context ;
   pcre2_general_context *pcre2_general_context ;
   uint8_t *pcre2_tables ;
   uint32_t pcre2_jit_on ;
   unsigned int fixed : 1 ;
   unsigned int is_fixed : 1 ;
   unsigned int ignore_case : 1 ;
   unsigned int word_regexp : 1 ;
};
#line 88
enum grep_expr_node {
    GREP_NODE_ATOM = 0,
    GREP_NODE_NOT = 1,
    GREP_NODE_AND = 2,
    GREP_NODE_TRUE = 3,
    GREP_NODE_OR = 4
} ;
#line 96
enum grep_pattern_type {
    GREP_PATTERN_TYPE_UNSPECIFIED = 0,
    GREP_PATTERN_TYPE_BRE = 1,
    GREP_PATTERN_TYPE_ERE = 2,
    GREP_PATTERN_TYPE_FIXED = 3,
    GREP_PATTERN_TYPE_PCRE = 4
} ;
#line 104 "grep.h"
struct __anonstruct_binary_110 {
   struct grep_expr *left ;
   struct grep_expr *right ;
};
#line 104 "grep.h"
union __anonunion_u_109 {
   struct grep_pat *atom ;
   struct grep_expr *unary ;
   struct __anonstruct_binary_110 binary ;
};
#line 104 "grep.h"
struct grep_expr {
   enum grep_expr_node node ;
   unsigned int hit ;
   union __anonunion_u_109 u ;
};
#line 117 "grep.h"
struct grep_opt {
   struct grep_pat *pattern_list ;
   struct grep_pat **pattern_tail ;
   struct grep_pat *header_list ;
   struct grep_pat **header_tail ;
   struct grep_expr *pattern_expression ;
   struct repository *repo ;
   char *prefix ;
   int prefix_length ;
   regex_t regexp ;
   int linenum ;
   int columnnum ;
   int invert ;
   int ignore_case ;
   int status_only ;
   int name_only ;
   int unmatch_name_only ;
   int count ;
   int word_regexp ;
   int fixed ;
   int all_match ;
   int binary ;
   int allow_textconv ;
   int extended ;
   int use_reflog_filter ;
   int pcre2 ;
   int relative ;
   int pathname ;
   int null_following_name ;
   int only_matching ;
   int color ;
   int max_depth ;
   int funcname ;
   int funcbody ;
   int extended_regexp_option ;
   int pattern_type_option ;
   int ignore_locale ;
   char colors[9][75] ;
   unsigned int pre_context ;
   unsigned int post_context ;
   unsigned int last_shown ;
   int show_hunk_mark ;
   int file_break ;
   int heading ;
   void *priv ;
   void (*output)(struct grep_opt *opt , void const   *data , size_t size ) ;
   void *output_priv ;
};
#line 55 "revision.h"
struct log_info;
#line 55
struct log_info;
#line 56
struct repository;
#line 57
struct rev_info;
#line 58
struct string_list;
#line 59
struct saved_parents;
#line 59
struct saved_parents;
#line 60
struct bloom_key;
#line 60
struct bloom_key;
#line 61
struct bloom_filter_settings;
#line 61
struct bloom_filter_settings;
#line 62 "revision.h"
struct revision_sources {
   unsigned int slab_size ;
   unsigned int stride ;
   unsigned int slab_count ;
   char ***slab ;
};
#line 64
enum __anonenum_whence_111 {
    REV_CMD_REF = 0,
    REV_CMD_PARENTS_ONLY = 1,
    REV_CMD_LEFT = 2,
    REV_CMD_RIGHT = 3,
    REV_CMD_MERGE_BASE = 4,
    REV_CMD_REV = 5
} ;
#line 64 "revision.h"
struct rev_cmdline_entry {
   struct object *item ;
   char *name ;
   enum __anonenum_whence_111 whence ;
   unsigned int flags ;
};
#line 64 "revision.h"
struct rev_cmdline_info {
   unsigned int nr ;
   unsigned int alloc ;
   struct rev_cmdline_entry *rev ;
};
#line 86
struct oidset;
#line 87
struct topo_walk_info;
#line 87
struct topo_walk_info;
#line 89
struct git_graph;
#line 89 "revision.h"
struct rev_info {
   struct commit_list *commits ;
   struct object_array pending ;
   struct repository *repo ;
   struct object_array boundary_commits ;
   struct rev_cmdline_info cmdline ;
   struct string_list *ref_excludes ;
   char *prefix ;
   char *def ;
   struct pathspec prune_data ;
   int rev_input_given ;
   int read_from_stdin ;
   enum rev_sort_order sort_order ;
   unsigned int early_output ;
   unsigned int ignore_missing : 1 ;
   unsigned int ignore_missing_links : 1 ;
   unsigned int dense : 1 ;
   unsigned int prune : 1 ;
   unsigned int no_walk : 2 ;
   unsigned int remove_empty_trees : 1 ;
   unsigned int simplify_history : 1 ;
   unsigned int show_pulls : 1 ;
   unsigned int topo_order : 1 ;
   unsigned int simplify_merges : 1 ;
   unsigned int simplify_by_decoration : 1 ;
   unsigned int single_worktree : 1 ;
   unsigned int tag_objects : 1 ;
   unsigned int tree_objects : 1 ;
   unsigned int blob_objects : 1 ;
   unsigned int verify_objects : 1 ;
   unsigned int edge_hint : 1 ;
   unsigned int edge_hint_aggressive : 1 ;
   unsigned int limited : 1 ;
   unsigned int unpacked : 1 ;
   unsigned int no_kept_objects : 1 ;
   unsigned int boundary : 2 ;
   unsigned int count : 1 ;
   unsigned int left_right : 1 ;
   unsigned int left_only : 1 ;
   unsigned int right_only : 1 ;
   unsigned int rewrite_parents : 1 ;
   unsigned int print_parents : 1 ;
   unsigned int show_decorations : 1 ;
   unsigned int reverse : 1 ;
   unsigned int reverse_output_stage : 1 ;
   unsigned int cherry_pick : 1 ;
   unsigned int cherry_mark : 1 ;
   unsigned int bisect : 1 ;
   unsigned int ancestry_path : 1 ;
   unsigned int first_parent_only : 1 ;
   unsigned int line_level_traverse : 1 ;
   unsigned int tree_blobs_in_commit_order : 1 ;
   unsigned int do_not_die_on_missing_tree : 1 ;
   unsigned int exclude_promisor_objects : 1 ;
   unsigned int diff : 1 ;
   unsigned int full_diff : 1 ;
   unsigned int show_root_diff : 1 ;
   unsigned int match_missing : 1 ;
   unsigned int no_commit_id : 1 ;
   unsigned int verbose_header : 1 ;
   unsigned int always_show_header : 1 ;
   unsigned int explicit_diff_merges : 1 ;
   unsigned int merges_need_diff : 1 ;
   unsigned int merges_imply_patch : 1 ;
   unsigned int separate_merges : 1 ;
   unsigned int combine_merges : 1 ;
   unsigned int combined_all_paths : 1 ;
   unsigned int dense_combined_merges : 1 ;
   unsigned int first_parent_merges : 1 ;
   int show_notes ;
   unsigned int shown_one : 1 ;
   unsigned int shown_dashes : 1 ;
   unsigned int show_merge : 1 ;
   unsigned int show_notes_given : 1 ;
   unsigned int show_signature : 1 ;
   unsigned int pretty_given : 1 ;
   unsigned int abbrev_commit : 1 ;
   unsigned int abbrev_commit_given : 1 ;
   unsigned int zero_commit : 1 ;
   unsigned int use_terminator : 1 ;
   unsigned int missing_newline : 1 ;
   unsigned int date_mode_explicit : 1 ;
   unsigned int preserve_subject : 1 ;
   unsigned int encode_email_headers : 1 ;
   unsigned int include_header : 1 ;
   unsigned int disable_stdin : 1 ;
   unsigned int track_linear : 1 ;
   unsigned int track_first_time : 1 ;
   unsigned int linear : 1 ;
   struct date_mode date_mode ;
   int expand_tabs_in_log ;
   int expand_tabs_in_log_default ;
   unsigned int abbrev ;
   enum cmit_fmt commit_format ;
   struct log_info *loginfo ;
   int nr ;
   int total ;
   char *mime_boundary ;
   char *patch_suffix ;
   int numbered_files ;
   char *reroll_count ;
   char *message_id ;
   struct ident_split from_ident ;
   struct string_list *ref_message_ids ;
   int add_signoff ;
   char *extra_headers ;
   char *log_reencode ;
   char *subject_prefix ;
   int patch_name_max ;
   int no_inline ;
   int show_log_size ;
   struct string_list *mailmap ;
   struct grep_opt grep_filter ;
   int invert_grep ;
   struct git_graph *graph ;
   int skip_count ;
   int max_count ;
   timestamp_t max_age ;
   timestamp_t min_age ;
   int min_parents ;
   int max_parents ;
   int (*include_check)(struct commit * , void * ) ;
   int (*include_check_obj)(struct object *obj , void * ) ;
   void *include_check_data ;
   struct diff_options diffopt ;
   struct diff_options pruning ;
   struct reflog_walk_info *reflog_info ;
   struct decoration children ;
   struct decoration merge_simplification ;
   struct decoration treesame ;
   struct display_notes_opt notes_opt ;
   struct object_id *idiff_oid1 ;
   struct object_id *idiff_oid2 ;
   char *idiff_title ;
   char *rdiff1 ;
   char *rdiff2 ;
   int creation_factor ;
   char *rdiff_title ;
   int count_left ;
   int count_right ;
   int count_same ;
   struct decoration line_log_data ;
   struct saved_parents *saved_parents_slab ;
   struct commit_list *previous_parents ;
   char *break_bar ;
   struct revision_sources *sources ;
   struct topo_walk_info *topo_walk_info ;
   struct bloom_key *bloom_keys ;
   int bloom_keys_nr ;
   struct bloom_filter_settings *bloom_filter_settings ;
   unsigned int keep_pack_cache_flags ;
};
#line 339 "revision.h"
struct setup_revision_opt {
   char *def ;
   void (*tweak)(struct rev_info * , struct setup_revision_opt * ) ;
   char *submodule ;
   unsigned int assume_dashdash : 1 ;
   unsigned int allow_exclude_promisor_objects : 1 ;
   unsigned int revarg_opt ;
};
#line 434
enum commit_action {
    commit_ignore = 0,
    commit_show = 1,
    commit_error = 2
} ;
#line 445
enum rewrite_result {
    rewrite_one_ok = 0,
    rewrite_one_noparents = 1,
    rewrite_one_error = 2
} ;
#line 103 "graph.h"
struct git_graph;
#line 6 "reflog-walk.h"
struct commit;
#line 7
struct reflog_walk_info;
#line 7 "patch-ids.h"
struct commit;
#line 8
struct object_id;
#line 9
struct repository;
#line 11 "patch-ids.h"
struct patch_id {
   struct hashmap_entry ent ;
   struct object_id patch_id ;
   struct commit *commit ;
};
#line 17 "patch-ids.h"
struct patch_ids {
   struct hashmap patches ;
   struct diff_options diffopts ;
};
#line 6 "log-tree.h"
struct log_info {
   struct commit *commit ;
   struct commit *parent ;
};
#line 9 "diffcore.h"
struct diff_options;
#line 10
struct repository;
#line 13
struct userdiff_driver;
#line 39 "diffcore.h"
struct diff_filespec {
   struct object_id oid ;
   char *path ;
   void *data ;
   void *cnt_data ;
   unsigned long size ;
   int count ;
   int rename_used ;
   unsigned short mode ;
   unsigned int oid_valid : 1 ;
   unsigned int should_free : 1 ;
   unsigned int should_munmap : 1 ;
   unsigned int dirty_submodule : 2 ;
   unsigned int is_stdin : 1 ;
   unsigned int has_more_entries : 1 ;
   int is_binary : 2 ;
   struct userdiff_driver *driver ;
};
#line 104 "diffcore.h"
struct diff_filepair {
   struct diff_filespec *one ;
   struct diff_filespec *two ;
   unsigned short score ;
   char status ;
   unsigned int broken_pair : 1 ;
   unsigned int renamed_pair : 1 ;
   unsigned int is_unmerged : 1 ;
   unsigned int done_skip_stat_unmatch : 1 ;
   unsigned int skip_stat_unmatch_result : 1 ;
};
#line 146 "diffcore.h"
struct diff_queue_struct {
   struct diff_filepair **queue ;
   int alloc ;
   int nr ;
};
#line 6 "line-log.h"
struct rev_info;
#line 7
struct commit;
#line 4 "mailmap.h"
struct string_list;
#line 8 "cache-tree.h"
struct cache_tree;
#line 9 "cache-tree.h"
struct cache_tree_sub {
   struct cache_tree *cache_tree ;
   int count ;
   int namelen ;
   int used ;
   char name[] ;
};
#line 17 "cache-tree.h"
struct cache_tree {
   int entry_count ;
   struct object_id oid ;
   int subtree_nr ;
   int subtree_alloc ;
   struct cache_tree_sub **down ;
};
#line 4 "bisect.h"
struct commit_list;
#line 5
struct repository;
#line 8 "packfile.h"
struct packed_git;
#line 7 "worktree.h"
struct strbuf;
#line 9 "worktree.h"
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
#line 30 "strvec.h"
struct strvec {
   char **v ;
   size_t nr ;
   size_t alloc ;
};
#line 7 "commit-reach.h"
struct commit_list;
#line 9
struct object_id;
#line 10
struct object_array;
#line 21 "commit-graph.h"
struct commit;
#line 22
struct bloom_filter_settings;
#line 23
struct repository;
#line 24
struct raw_object_store;
#line 25
struct string_list;
#line 54
struct topo_level_slab;
#line 54 "commit-graph.h"
struct commit_graph {
   unsigned char *data ;
   size_t data_len ;
   unsigned char hash_len ;
   unsigned char num_chunks ;
   uint32_t num_commits ;
   struct object_id oid ;
   char *filename ;
   struct object_directory *odb ;
   uint32_t num_commits_in_base ;
   unsigned int read_generation_data ;
   struct commit_graph *base_graph ;
   uint32_t *chunk_oid_fanout ;
   unsigned char *chunk_oid_lookup ;
   unsigned char *chunk_commit_data ;
   unsigned char *chunk_generation_data ;
   unsigned char *chunk_generation_data_overflow ;
   unsigned char *chunk_extra_edges ;
   unsigned char *chunk_base_graphs ;
   unsigned char *chunk_bloom_indexes ;
   unsigned char *chunk_bloom_data ;
   struct topo_level_slab *topo_levels ;
   struct bloom_filter_settings *bloom_filter_settings ;
};
#line 24 "prio-queue.h"
struct prio_queue_entry {
   unsigned int ctr ;
   void *data ;
};
#line 29 "prio-queue.h"
struct prio_queue {
   int (*compare)(void const   *one , void const   *two , void *cb_data ) ;
   unsigned int insertion_ctr ;
   void *cb_data ;
   int alloc ;
   int nr ;
   struct prio_queue_entry *array ;
};
#line 4 "utf8.h"
struct strbuf;
#line 4 "bloom.h"
struct commit;
#line 5
struct repository;
#line 7 "bloom.h"
struct bloom_filter_settings {
   uint32_t hash_version ;
   uint32_t num_hashes ;
   uint32_t bits_per_entry ;
   uint32_t max_changed_paths ;
};
#line 52 "bloom.h"
struct bloom_filter {
   unsigned char *data ;
   size_t len ;
};
#line 67 "bloom.h"
struct bloom_key {
   uint32_t *hashes ;
};
#line 92
enum bloom_filter_computed {
    BLOOM_NOT_COMPUTED = 1,
    BLOOM_COMPUTED = 2,
    BLOOM_TRUNC_LARGE = 4,
    BLOOM_TRUNC_EMPTY = 8
} ;
#line 47 "json-writer.h"
struct json_writer {
   struct strbuf json ;
   struct strbuf open_stack ;
   unsigned int need_comma : 1 ;
   unsigned int pretty : 1 ;
};
#line 41 "revision.c"
struct revision_sources;
#line 109 "revision.c"
struct path_and_oids_entry {
   struct hashmap_entry ent ;
   char *path ;
   struct oidset trees ;
};
#line 248 "revision.c"
struct commit_stack {
   struct commit **items ;
   size_t nr ;
   size_t alloc ;
};
#line 833 "revision.c"
struct treesame_state {
   unsigned int nparents ;
   unsigned char treesame[] ;
};
#line 1505 "revision.c"
struct all_refs_cb {
   int all_flags ;
   int warned_bad_reflog ;
   struct rev_info *all_revs ;
   char *name_for_errormsg ;
   struct worktree *wt ;
};
#line 1738 "revision.c"
struct add_alternate_refs_data {
   struct rev_info *revs ;
   unsigned int flags ;
};
#line 2938 "revision.c"
struct merge_simplify_state {
   struct commit *simplified ;
};
#line 3285 "revision.c"
struct indegree_slab {
   unsigned int slab_size ;
   unsigned int stride ;
   unsigned int slab_count ;
   int **slab ;
};
#line 3285
struct indegree_slab;
#line 3286 "revision.c"
struct author_date_slab {
   unsigned int slab_size ;
   unsigned int stride ;
   unsigned int slab_count ;
   timestamp_t **slab ;
};
#line 3286
struct author_date_slab;
#line 3288 "revision.c"
struct topo_walk_info {
   timestamp_t min_generation ;
   struct prio_queue explore_queue ;
   struct prio_queue indegree_queue ;
   struct prio_queue topo_queue ;
   struct indegree_slab indegree ;
   struct author_date_slab author_date ;
};
#line 3877 "revision.c"
struct saved_parents {
   unsigned int slab_size ;
   unsigned int stride ;
   unsigned int slab_count ;
   struct commit_list ***slab ;
};
#line 3877
struct saved_parents;
extern struct grep_opt __dyc_random_comp_563grep_opt(unsigned int __dyc_exp ) ;
extern struct grep_opt __dyc_read_comp_563grep_opt(void) ;
extern void __dyc_print_comp_563grep_opt(struct grep_opt __dyc_thistype ) ;
extern intmax_t __dyc_random_typdef_intmax_t(unsigned int __dyc_exp ) ;
extern intmax_t __dyc_read_typdef_intmax_t(void) ;
extern void __dyc_print_typdef_intmax_t(intmax_t __dyc_thistype ) ;
extern struct commit_graph __dyc_random_comp_502commit_graph(unsigned int __dyc_exp ) ;
extern struct commit_graph __dyc_read_comp_502commit_graph(void) ;
extern void __dyc_print_comp_502commit_graph(struct commit_graph __dyc_thistype ) ;
extern size_t *__dyc_random_ptr__typdef_size_t(unsigned int __dyc_exp ) ;
extern size_t *__dyc_read_ptr__typdef_size_t(void) ;
extern void __dyc_print_ptr__typdef_size_t(size_t const   *__dyc_thistype ) ;
extern uint8_t *__dyc_random_ptr__typdef_uint8_t(unsigned int __dyc_exp ) ;
extern uint8_t *__dyc_read_ptr__typdef_uint8_t(void) ;
extern void __dyc_print_ptr__typdef_uint8_t(uint8_t const   *__dyc_thistype ) ;
extern struct diff_filespec __dyc_random_comp_538diff_filespec(unsigned int __dyc_exp ) ;
extern struct diff_filespec __dyc_read_comp_538diff_filespec(void) ;
extern void __dyc_print_comp_538diff_filespec(struct diff_filespec __dyc_thistype ) ;
extern struct stat_validity *__dyc_random_ptr__comp_472stat_validity(unsigned int __dyc_exp ) ;
extern struct stat_validity *__dyc_read_ptr__comp_472stat_validity(void) ;
extern void __dyc_print_ptr__comp_472stat_validity(struct stat_validity  const  *__dyc_thistype ) ;
extern _IO_FILE __dyc_random_typdef__IO_FILE(unsigned int __dyc_exp ) ;
extern _IO_FILE __dyc_read_typdef__IO_FILE(void) ;
extern void __dyc_print_typdef__IO_FILE(_IO_FILE __dyc_thistype ) ;
extern struct bloom_key __dyc_random_comp_567bloom_key(unsigned int __dyc_exp ) ;
extern struct bloom_key __dyc_read_comp_567bloom_key(void) ;
extern void __dyc_print_comp_567bloom_key(struct bloom_key __dyc_thistype ) ;
extern uint32_t *__dyc_random_ptr__typdef_uint32_t(unsigned int __dyc_exp ) ;
extern uint32_t *__dyc_read_ptr__typdef_uint32_t(void) ;
extern void __dyc_print_ptr__typdef_uint32_t(uint32_t const   *__dyc_thistype ) ;
extern struct list_head *__dyc_random_ptr__comp_429list_head(unsigned int __dyc_exp ) ;
extern struct list_head *__dyc_read_ptr__comp_429list_head(void) ;
extern void __dyc_print_ptr__comp_429list_head(struct list_head  const  *__dyc_thistype ) ;
extern struct _IO_FILE __dyc_random_comp_2_IO_FILE(unsigned int __dyc_exp ) ;
extern struct _IO_FILE __dyc_read_comp_2_IO_FILE(void) ;
extern void __dyc_print_comp_2_IO_FILE(struct _IO_FILE __dyc_thistype ) ;
extern struct oidset __dyc_random_comp_535oidset(unsigned int __dyc_exp ) ;
extern struct oidset __dyc_read_comp_535oidset(void) ;
extern void __dyc_print_comp_535oidset(struct oidset __dyc_thistype ) ;
extern git_hash_ctx __dyc_random_typdef_git_hash_ctx(unsigned int __dyc_exp ) ;
extern git_hash_ctx __dyc_read_typdef_git_hash_ctx(void) ;
extern void __dyc_print_typdef_git_hash_ctx(git_hash_ctx __dyc_thistype ) ;
extern struct merge_simplify_state __dyc_random_comp_601merge_simplify_state(unsigned int __dyc_exp ) ;
extern struct merge_simplify_state __dyc_read_comp_601merge_simplify_state(void) ;
extern void __dyc_print_comp_601merge_simplify_state(struct merge_simplify_state __dyc_thistype ) ;
extern struct hashmap_iter __dyc_random_comp_428hashmap_iter(unsigned int __dyc_exp ) ;
extern struct hashmap_iter __dyc_read_comp_428hashmap_iter(void) ;
extern void __dyc_print_comp_428hashmap_iter(struct hashmap_iter __dyc_thistype ) ;
extern struct mem_pool __dyc_random_comp_445mem_pool(unsigned int __dyc_exp ) ;
extern struct mem_pool __dyc_read_comp_445mem_pool(void) ;
extern void __dyc_print_comp_445mem_pool(struct mem_pool __dyc_thistype ) ;
extern blk_SHA256_CTX __dyc_random_typdef_blk_SHA256_CTX(unsigned int __dyc_exp ) ;
extern blk_SHA256_CTX __dyc_read_typdef_blk_SHA256_CTX(void) ;
extern void __dyc_print_typdef_blk_SHA256_CTX(blk_SHA256_CTX __dyc_thistype ) ;
extern struct userdiff_funcname __dyc_random_comp_558userdiff_funcname(unsigned int __dyc_exp ) ;
extern struct userdiff_funcname __dyc_read_comp_558userdiff_funcname(void) ;
extern void __dyc_print_comp_558userdiff_funcname(struct userdiff_funcname __dyc_thistype ) ;
extern struct object_directory __dyc_random_comp_499object_directory(unsigned int __dyc_exp ) ;
extern struct object_directory __dyc_read_comp_499object_directory(void) ;
extern void __dyc_print_comp_499object_directory(struct object_directory __dyc_thistype ) ;
extern struct hashmap *__dyc_random_ptr__comp_427hashmap(unsigned int __dyc_exp ) ;
extern struct hashmap *__dyc_read_ptr__comp_427hashmap(void) ;
extern void __dyc_print_ptr__comp_427hashmap(struct hashmap  const  *__dyc_thistype ) ;
extern struct indegree_slab *__dyc_random_ptr__comp_602indegree_slab(unsigned int __dyc_exp ) ;
extern struct indegree_slab *__dyc_read_ptr__comp_602indegree_slab(void) ;
extern void __dyc_print_ptr__comp_602indegree_slab(struct indegree_slab  const  *__dyc_thistype ) ;
extern reg_syntax_t __dyc_random_typdef_reg_syntax_t(unsigned int __dyc_exp ) ;
extern reg_syntax_t __dyc_read_typdef_reg_syntax_t(void) ;
extern void __dyc_print_typdef_reg_syntax_t(reg_syntax_t __dyc_thistype ) ;
extern union __anonunion_u_109 __dyc_random_comp_561__anonunion_u_109(unsigned int __dyc_exp ) ;
extern union __anonunion_u_109 __dyc_read_comp_561__anonunion_u_109(void) ;
extern void __dyc_print_comp_561__anonunion_u_109(union __anonunion_u_109 __dyc_thistype ) ;
extern union git_hash_ctx __dyc_random_comp_425git_hash_ctx(unsigned int __dyc_exp ) ;
extern union git_hash_ctx __dyc_read_comp_425git_hash_ctx(void) ;
extern void __dyc_print_comp_425git_hash_ctx(union git_hash_ctx __dyc_thistype ) ;
extern struct object_array_entry *__dyc_random_ptr__comp_512object_array_entry(unsigned int __dyc_exp ) ;
extern struct object_array_entry *__dyc_read_ptr__comp_512object_array_entry(void) ;
extern void __dyc_print_ptr__comp_512object_array_entry(struct object_array_entry  const  *__dyc_thistype ) ;
extern struct combine_diff_parent __dyc_random_comp_547combine_diff_parent(unsigned int __dyc_exp ) ;
extern struct combine_diff_parent __dyc_read_comp_547combine_diff_parent(void) ;
extern void __dyc_print_comp_547combine_diff_parent(struct combine_diff_parent __dyc_thistype ) ;
extern struct rev_cmdline_info __dyc_random_comp_570rev_cmdline_info(unsigned int __dyc_exp ) ;
extern struct rev_cmdline_info __dyc_read_comp_570rev_cmdline_info(void) ;
extern void __dyc_print_comp_570rev_cmdline_info(struct rev_cmdline_info __dyc_thistype ) ;
extern struct strvec *__dyc_random_ptr__comp_550strvec(unsigned int __dyc_exp ) ;
extern struct strvec *__dyc_read_ptr__comp_550strvec(void) ;
extern void __dyc_print_ptr__comp_550strvec(struct strvec  const  *__dyc_thistype ) ;
extern int **__dyc_random_ptr__ptr__int(unsigned int __dyc_exp ) ;
extern int **__dyc_read_ptr__ptr__int(void) ;
extern void __dyc_print_ptr__ptr__int(int * const  *__dyc_thistype ) ;
extern struct userdiff_driver *__dyc_random_ptr__comp_542userdiff_driver(unsigned int __dyc_exp ) ;
extern struct userdiff_driver *__dyc_read_ptr__comp_542userdiff_driver(void) ;
extern void __dyc_print_ptr__comp_542userdiff_driver(struct userdiff_driver  const  *__dyc_thistype ) ;
extern struct re_pattern_buffer __dyc_random_comp_83re_pattern_buffer(unsigned int __dyc_exp ) ;
extern struct re_pattern_buffer __dyc_read_comp_83re_pattern_buffer(void) ;
extern void __dyc_print_comp_83re_pattern_buffer(struct re_pattern_buffer __dyc_thistype ) ;
extern timestamp_t __dyc_random_typdef_timestamp_t(unsigned int __dyc_exp ) ;
extern timestamp_t __dyc_read_typdef_timestamp_t(void) ;
extern void __dyc_print_typdef_timestamp_t(timestamp_t __dyc_thistype ) ;
extern struct commit_stack __dyc_random_comp_597commit_stack(unsigned int __dyc_exp ) ;
extern struct commit_stack __dyc_read_comp_597commit_stack(void) ;
extern void __dyc_print_comp_597commit_stack(struct commit_stack __dyc_thistype ) ;
extern khint32_t *__dyc_random_ptr__typdef_khint32_t(unsigned int __dyc_exp ) ;
extern khint32_t *__dyc_read_ptr__typdef_khint32_t(void) ;
extern void __dyc_print_ptr__typdef_khint32_t(khint32_t const   *__dyc_thistype ) ;
extern ssize_t __dyc_random_typdef_ssize_t(unsigned int __dyc_exp ) ;
extern ssize_t __dyc_read_typdef_ssize_t(void) ;
extern void __dyc_print_typdef_ssize_t(ssize_t __dyc_thistype ) ;
extern struct raw_object_store __dyc_random_comp_415raw_object_store(unsigned int __dyc_exp ) ;
extern struct raw_object_store __dyc_read_comp_415raw_object_store(void) ;
extern void __dyc_print_comp_415raw_object_store(struct raw_object_store __dyc_thistype ) ;
extern struct path_pattern __dyc_random_comp_488path_pattern(unsigned int __dyc_exp ) ;
extern struct path_pattern __dyc_read_comp_488path_pattern(void) ;
extern void __dyc_print_comp_488path_pattern(struct path_pattern __dyc_thistype ) ;
extern struct notes_cache __dyc_random_comp_557notes_cache(unsigned int __dyc_exp ) ;
extern struct notes_cache __dyc_read_comp_557notes_cache(void) ;
extern void __dyc_print_comp_557notes_cache(struct notes_cache __dyc_thistype ) ;
extern struct option __dyc_random_comp_541option(unsigned int __dyc_exp ) ;
extern struct option __dyc_read_comp_541option(void) ;
extern void __dyc_print_comp_541option(struct option __dyc_thistype ) ;
extern struct hashmap_iter *__dyc_random_ptr__comp_428hashmap_iter(unsigned int __dyc_exp ) ;
extern struct hashmap_iter *__dyc_read_ptr__comp_428hashmap_iter(void) ;
extern void __dyc_print_ptr__comp_428hashmap_iter(struct hashmap_iter  const  *__dyc_thistype ) ;
extern void *__dyc_random_ptr__comp_420ref_store(unsigned int __dyc_exp ) ;
extern void *__dyc_read_ptr__comp_420ref_store(void) ;
extern void __dyc_print_ptr__comp_420ref_store(void const   * const  __dyc_thistype ) ;
extern void *__dyc_random_ptr__comp_457progress(unsigned int __dyc_exp ) ;
extern void *__dyc_read_ptr__comp_457progress(void) ;
extern void __dyc_print_ptr__comp_457progress(void const   * const  __dyc_thistype ) ;
extern struct __anonstruct_SHA1_CTX_84 __dyc_random_comp_423__anonstruct_SHA1_CTX_84(unsigned int __dyc_exp ) ;
extern struct __anonstruct_SHA1_CTX_84 __dyc_read_comp_423__anonstruct_SHA1_CTX_84(void) ;
extern void __dyc_print_comp_423__anonstruct_SHA1_CTX_84(struct __anonstruct_SHA1_CTX_84 __dyc_thistype ) ;
extern struct oidmap __dyc_random_comp_474oidmap(unsigned int __dyc_exp ) ;
extern struct oidmap __dyc_read_comp_474oidmap(void) ;
extern void __dyc_print_comp_474oidmap(struct oidmap __dyc_thistype ) ;
extern struct repository __dyc_random_comp_408repository(unsigned int __dyc_exp ) ;
extern struct repository __dyc_read_comp_408repository(void) ;
extern void __dyc_print_comp_408repository(struct repository __dyc_thistype ) ;
extern struct bloom_filter_settings *__dyc_random_ptr__comp_568bloom_filter_settings(unsigned int __dyc_exp ) ;
extern struct bloom_filter_settings *__dyc_read_ptr__comp_568bloom_filter_settings(void) ;
extern void __dyc_print_ptr__comp_568bloom_filter_settings(struct bloom_filter_settings  const  *__dyc_thistype ) ;
extern struct stat_data __dyc_random_comp_452stat_data(unsigned int __dyc_exp ) ;
extern struct stat_data __dyc_read_comp_452stat_data(void) ;
extern void __dyc_print_comp_452stat_data(struct stat_data __dyc_thistype ) ;
extern git_hash_ctx *__dyc_random_ptr__typdef_git_hash_ctx(unsigned int __dyc_exp ) ;
extern git_hash_ctx *__dyc_read_ptr__typdef_git_hash_ctx(void) ;
extern void __dyc_print_ptr__typdef_git_hash_ctx(git_hash_ctx const   *__dyc_thistype ) ;
extern struct combine_diff_path __dyc_random_comp_537combine_diff_path(unsigned int __dyc_exp ) ;
extern struct combine_diff_path __dyc_read_comp_537combine_diff_path(void) ;
extern void __dyc_print_comp_537combine_diff_path(struct combine_diff_path __dyc_thistype ) ;
extern struct packed_git **__dyc_random_ptr__ptr__comp_441packed_git(unsigned int __dyc_exp ) ;
extern struct packed_git **__dyc_read_ptr__ptr__comp_441packed_git(void) ;
extern void __dyc_print_ptr__ptr__comp_441packed_git(struct packed_git * const  *__dyc_thistype ) ;
extern void *__dyc_random_ptr__comp_508alloc_state(unsigned int __dyc_exp ) ;
extern void *__dyc_read_ptr__comp_508alloc_state(void) ;
extern void __dyc_print_ptr__comp_508alloc_state(void const   * const  __dyc_thistype ) ;
extern struct diff_filepair __dyc_random_comp_548diff_filepair(unsigned int __dyc_exp ) ;
extern struct diff_filepair __dyc_read_comp_548diff_filepair(void) ;
extern void __dyc_print_comp_548diff_filepair(struct diff_filepair __dyc_thistype ) ;
extern struct bloom_key *__dyc_random_ptr__comp_567bloom_key(unsigned int __dyc_exp ) ;
extern struct bloom_key *__dyc_read_ptr__comp_567bloom_key(void) ;
extern void __dyc_print_ptr__comp_567bloom_key(struct bloom_key  const  *__dyc_thistype ) ;
extern struct tree_desc __dyc_random_comp_531tree_desc(unsigned int __dyc_exp ) ;
extern struct tree_desc __dyc_read_comp_531tree_desc(void) ;
extern void __dyc_print_comp_531tree_desc(struct tree_desc __dyc_thistype ) ;
extern struct commit_stack *__dyc_random_ptr__comp_597commit_stack(unsigned int __dyc_exp ) ;
extern struct commit_stack *__dyc_read_ptr__comp_597commit_stack(void) ;
extern void __dyc_print_ptr__comp_597commit_stack(struct commit_stack  const  *__dyc_thistype ) ;
extern struct hashmap_entry **__dyc_random_ptr__ptr__comp_426hashmap_entry(unsigned int __dyc_exp ) ;
extern struct hashmap_entry **__dyc_read_ptr__ptr__comp_426hashmap_entry(void) ;
extern void __dyc_print_ptr__ptr__comp_426hashmap_entry(struct hashmap_entry * const  *__dyc_thistype ) ;
extern pcre2_compile_context __dyc_random_typdef_pcre2_compile_context(unsigned int __dyc_exp ) ;
extern pcre2_compile_context __dyc_read_typdef_pcre2_compile_context(void) ;
extern void __dyc_print_typdef_pcre2_compile_context(pcre2_compile_context __dyc_thistype ) ;
extern struct object __dyc_random_comp_464object(unsigned int __dyc_exp ) ;
extern struct object __dyc_read_comp_464object(void) ;
extern void __dyc_print_comp_464object(struct object __dyc_thistype ) ;
extern struct mp_block __dyc_random_comp_444mp_block(unsigned int __dyc_exp ) ;
extern struct mp_block __dyc_read_comp_444mp_block(void) ;
extern void __dyc_print_comp_444mp_block(struct mp_block __dyc_thistype ) ;
extern struct string_list_item __dyc_random_comp_432string_list_item(unsigned int __dyc_exp ) ;
extern struct string_list_item __dyc_read_comp_432string_list_item(void) ;
extern void __dyc_print_comp_432string_list_item(struct string_list_item __dyc_thistype ) ;
extern struct blob __dyc_random_comp_514blob(unsigned int __dyc_exp ) ;
extern struct blob __dyc_read_comp_514blob(void) ;
extern void __dyc_print_comp_514blob(struct blob __dyc_thistype ) ;
extern struct git_hash_algo __dyc_random_comp_411git_hash_algo(unsigned int __dyc_exp ) ;
extern struct git_hash_algo __dyc_read_comp_411git_hash_algo(void) ;
extern void __dyc_print_comp_411git_hash_algo(struct git_hash_algo __dyc_thistype ) ;
extern struct worktree __dyc_random_comp_549worktree(unsigned int __dyc_exp ) ;
extern struct worktree __dyc_read_comp_549worktree(void) ;
extern void __dyc_print_comp_549worktree(struct worktree __dyc_thistype ) ;
extern struct notes_cache *__dyc_random_ptr__comp_557notes_cache(unsigned int __dyc_exp ) ;
extern struct notes_cache *__dyc_read_ptr__comp_557notes_cache(void) ;
extern void __dyc_print_ptr__comp_557notes_cache(struct notes_cache  const  *__dyc_thistype ) ;
extern pcre2_code __dyc_random_typdef_pcre2_code(unsigned int __dyc_exp ) ;
extern pcre2_code __dyc_read_typdef_pcre2_code(void) ;
extern void __dyc_print_typdef_pcre2_code(pcre2_code __dyc_thistype ) ;
extern struct object_array_entry __dyc_random_comp_512object_array_entry(unsigned int __dyc_exp ) ;
extern struct object_array_entry __dyc_read_comp_512object_array_entry(void) ;
extern void __dyc_print_comp_512object_array_entry(struct object_array_entry __dyc_thistype ) ;
extern struct tag __dyc_random_comp_513tag(unsigned int __dyc_exp ) ;
extern struct tag __dyc_read_comp_513tag(void) ;
extern void __dyc_print_comp_513tag(struct tag __dyc_thistype ) ;
extern void *__dyc_random_ptr__comp_501revindex_entry(unsigned int __dyc_exp ) ;
extern void *__dyc_read_ptr__comp_501revindex_entry(void) ;
extern void __dyc_print_ptr__comp_501revindex_entry(void const   * const  __dyc_thistype ) ;
extern struct string_list __dyc_random_comp_405string_list(unsigned int __dyc_exp ) ;
extern struct string_list __dyc_read_comp_405string_list(void) ;
extern void __dyc_print_comp_405string_list(struct string_list __dyc_thistype ) ;
extern struct string_list_item *__dyc_random_ptr__comp_432string_list_item(unsigned int __dyc_exp ) ;
extern struct string_list_item *__dyc_read_ptr__comp_432string_list_item(void) ;
extern void __dyc_print_ptr__comp_432string_list_item(struct string_list_item  const  *__dyc_thistype ) ;
extern regex_t __dyc_random_typdef_regex_t(unsigned int __dyc_exp ) ;
extern regex_t __dyc_read_typdef_regex_t(void) ;
extern void __dyc_print_typdef_regex_t(regex_t __dyc_thistype ) ;
extern struct grep_pat **__dyc_random_ptr__ptr__comp_559grep_pat(unsigned int __dyc_exp ) ;
extern struct grep_pat **__dyc_read_ptr__ptr__comp_559grep_pat(void) ;
extern void __dyc_print_ptr__ptr__comp_559grep_pat(struct grep_pat * const  *__dyc_thistype ) ;
extern struct merge_simplify_state *__dyc_random_ptr__comp_601merge_simplify_state(unsigned int __dyc_exp ) ;
extern struct merge_simplify_state *__dyc_read_ptr__comp_601merge_simplify_state(void) ;
extern void __dyc_print_ptr__comp_601merge_simplify_state(struct merge_simplify_state  const  *__dyc_thistype ) ;
extern struct reflog_walk_info **__dyc_random_ptr__ptr__comp_522reflog_walk_info(unsigned int __dyc_exp ) ;
extern struct reflog_walk_info **__dyc_read_ptr__ptr__comp_522reflog_walk_info(void) ;
extern void __dyc_print_ptr__ptr__comp_522reflog_walk_info(struct reflog_walk_info * const  *__dyc_thistype ) ;
extern struct commit __dyc_random_comp_518commit(unsigned int __dyc_exp ) ;
extern struct commit __dyc_read_comp_518commit(void) ;
extern void __dyc_print_comp_518commit(struct commit __dyc_thistype ) ;
extern struct cache_entry __dyc_random_comp_453cache_entry(unsigned int __dyc_exp ) ;
extern struct cache_entry __dyc_read_comp_453cache_entry(void) ;
extern void __dyc_print_comp_453cache_entry(struct cache_entry __dyc_thistype ) ;
extern struct commit_graft *__dyc_random_ptr__comp_509commit_graft(unsigned int __dyc_exp ) ;
extern struct commit_graft *__dyc_read_ptr__comp_509commit_graft(void) ;
extern void __dyc_print_ptr__comp_509commit_graft(struct commit_graft  const  *__dyc_thistype ) ;
extern struct decoration __dyc_random_comp_516decoration(unsigned int __dyc_exp ) ;
extern struct decoration __dyc_read_comp_516decoration(void) ;
extern void __dyc_print_comp_516decoration(struct decoration __dyc_thistype ) ;
extern struct diff_flags __dyc_random_comp_543diff_flags(unsigned int __dyc_exp ) ;
extern struct diff_flags __dyc_read_comp_543diff_flags(void) ;
extern void __dyc_print_comp_543diff_flags(struct diff_flags __dyc_thistype ) ;
extern struct diff_queue_struct *__dyc_random_ptr__comp_540diff_queue_struct(unsigned int __dyc_exp ) ;
extern struct diff_queue_struct *__dyc_read_ptr__comp_540diff_queue_struct(void) ;
extern void __dyc_print_ptr__comp_540diff_queue_struct(struct diff_queue_struct  const  *__dyc_thistype ) ;
extern void *__dyc_random_ptr__comp_416submodule_cache(unsigned int __dyc_exp ) ;
extern void *__dyc_read_ptr__comp_416submodule_cache(void) ;
extern void __dyc_print_ptr__comp_416submodule_cache(void const   * const  __dyc_thistype ) ;
extern void *__dyc_random_ptr__comp_417promisor_remote_config(unsigned int __dyc_exp ) ;
extern void *__dyc_read_ptr__comp_417promisor_remote_config(void) ;
extern void __dyc_print_ptr__comp_417promisor_remote_config(void const   * const  __dyc_thistype ) ;
extern struct stat_data *__dyc_random_ptr__comp_452stat_data(unsigned int __dyc_exp ) ;
extern struct stat_data *__dyc_read_ptr__comp_452stat_data(void) ;
extern void __dyc_print_ptr__comp_452stat_data(struct stat_data  const  *__dyc_thistype ) ;
extern char ***__dyc_random_ptr__ptr__ptr__char(unsigned int __dyc_exp ) ;
extern char ***__dyc_read_ptr__ptr__ptr__char(void) ;
extern void __dyc_print_ptr__ptr__ptr__char(char ** const  *__dyc_thistype ) ;
extern struct topo_walk_info __dyc_random_comp_572topo_walk_info(unsigned int __dyc_exp ) ;
extern struct topo_walk_info __dyc_read_comp_572topo_walk_info(void) ;
extern void __dyc_print_comp_572topo_walk_info(struct topo_walk_info __dyc_thistype ) ;
extern void *__dyc_random_ptr__typdef__IO_lock_t(unsigned int __dyc_exp ) ;
extern void *__dyc_read_ptr__typdef__IO_lock_t(void) ;
extern void __dyc_print_ptr__typdef__IO_lock_t(void const   * const  __dyc_thistype ) ;
extern uintmax_t __dyc_random_typdef_uintmax_t(unsigned int __dyc_exp ) ;
extern uintmax_t __dyc_read_typdef_uintmax_t(void) ;
extern void __dyc_print_typdef_uintmax_t(uintmax_t __dyc_thistype ) ;
extern struct tree_desc *__dyc_random_ptr__comp_531tree_desc(unsigned int __dyc_exp ) ;
extern struct tree_desc *__dyc_read_ptr__comp_531tree_desc(void) ;
extern void __dyc_print_ptr__comp_531tree_desc(struct tree_desc  const  *__dyc_thistype ) ;
extern struct prio_queue_entry __dyc_random_comp_593prio_queue_entry(unsigned int __dyc_exp ) ;
extern struct prio_queue_entry __dyc_read_comp_593prio_queue_entry(void) ;
extern void __dyc_print_comp_593prio_queue_entry(struct prio_queue_entry __dyc_thistype ) ;
extern struct __pthread_internal_list *__dyc_random_ptr__comp_20__pthread_internal_list(unsigned int __dyc_exp ) ;
extern struct __pthread_internal_list *__dyc_read_ptr__comp_20__pthread_internal_list(void) ;
extern void __dyc_print_ptr__comp_20__pthread_internal_list(struct __pthread_internal_list  const  *__dyc_thistype ) ;
extern enum bloom_filter_computed *__dyc_random_ptr__enum_bloom_filter_computed(unsigned int __dyc_exp ) ;
extern enum bloom_filter_computed *__dyc_read_ptr__enum_bloom_filter_computed(void) ;
extern void __dyc_print_ptr__enum_bloom_filter_computed(enum bloom_filter_computed  const  *__dyc_thistype ) ;
extern struct log_info __dyc_random_comp_565log_info(unsigned int __dyc_exp ) ;
extern struct log_info __dyc_read_comp_565log_info(void) ;
extern void __dyc_print_comp_565log_info(struct log_info __dyc_thistype ) ;
extern void *__dyc_random_ptr__comp_590topo_level_slab(unsigned int __dyc_exp ) ;
extern void *__dyc_read_ptr__comp_590topo_level_slab(void) ;
extern void __dyc_print_ptr__comp_590topo_level_slab(void const   * const  __dyc_thistype ) ;
extern struct pack_window *__dyc_random_ptr__comp_468pack_window(unsigned int __dyc_exp ) ;
extern struct pack_window *__dyc_read_ptr__comp_468pack_window(void) ;
extern void __dyc_print_ptr__comp_468pack_window(struct pack_window  const  *__dyc_thistype ) ;
extern struct object_context *__dyc_random_ptr__comp_462object_context(unsigned int __dyc_exp ) ;
extern struct object_context *__dyc_read_ptr__comp_462object_context(void) ;
extern void __dyc_print_ptr__comp_462object_context(struct object_context  const  *__dyc_thistype ) ;
extern struct hashmap_entry *__dyc_random_ptr__comp_426hashmap_entry(unsigned int __dyc_exp ) ;
extern struct hashmap_entry *__dyc_read_ptr__comp_426hashmap_entry(void) ;
extern void __dyc_print_ptr__comp_426hashmap_entry(struct hashmap_entry  const  *__dyc_thistype ) ;
extern struct grep_opt *__dyc_random_ptr__comp_563grep_opt(unsigned int __dyc_exp ) ;
extern struct grep_opt *__dyc_read_ptr__comp_563grep_opt(void) ;
extern void __dyc_print_ptr__comp_563grep_opt(struct grep_opt  const  *__dyc_thistype ) ;
extern struct commit_graph *__dyc_random_ptr__comp_502commit_graph(unsigned int __dyc_exp ) ;
extern struct commit_graph *__dyc_read_ptr__comp_502commit_graph(void) ;
extern void __dyc_print_ptr__comp_502commit_graph(struct commit_graph  const  *__dyc_thistype ) ;
extern struct object_directory *__dyc_random_ptr__comp_499object_directory(unsigned int __dyc_exp ) ;
extern struct object_directory *__dyc_read_ptr__comp_499object_directory(void) ;
extern void __dyc_print_ptr__comp_499object_directory(struct object_directory  const  *__dyc_thistype ) ;
extern struct untracked_cache_dir **__dyc_random_ptr__ptr__comp_491untracked_cache_dir(unsigned int __dyc_exp ) ;
extern struct untracked_cache_dir **__dyc_read_ptr__ptr__comp_491untracked_cache_dir(void) ;
extern void __dyc_print_ptr__ptr__comp_491untracked_cache_dir(struct untracked_cache_dir * const  *__dyc_thistype ) ;
extern struct prio_queue __dyc_random_comp_594prio_queue(unsigned int __dyc_exp ) ;
extern struct prio_queue __dyc_read_comp_594prio_queue(void) ;
extern void __dyc_print_comp_594prio_queue(struct prio_queue __dyc_thistype ) ;
extern struct string_list *__dyc_random_ptr__comp_405string_list(unsigned int __dyc_exp ) ;
extern struct string_list *__dyc_read_ptr__comp_405string_list(void) ;
extern void __dyc_print_ptr__comp_405string_list(struct string_list  const  *__dyc_thistype ) ;
extern void *__dyc_random_ptr__comp_507buffer_slab(unsigned int __dyc_exp ) ;
extern void *__dyc_read_ptr__comp_507buffer_slab(void) ;
extern void __dyc_print_ptr__comp_507buffer_slab(void const   * const  __dyc_thistype ) ;
extern struct prio_queue_entry *__dyc_random_ptr__comp_593prio_queue_entry(unsigned int __dyc_exp ) ;
extern struct prio_queue_entry *__dyc_read_ptr__comp_593prio_queue_entry(void) ;
extern void __dyc_print_ptr__comp_593prio_queue_entry(struct prio_queue_entry  const  *__dyc_thistype ) ;
extern struct packed_git __dyc_random_comp_441packed_git(unsigned int __dyc_exp ) ;
extern struct packed_git __dyc_read_comp_441packed_git(void) ;
extern void __dyc_print_comp_441packed_git(struct packed_git __dyc_thistype ) ;
extern pcre2_code *__dyc_random_ptr__typdef_pcre2_code(unsigned int __dyc_exp ) ;
extern pcre2_code *__dyc_read_ptr__typdef_pcre2_code(void) ;
extern void __dyc_print_ptr__typdef_pcre2_code(pcre2_code const   *__dyc_thistype ) ;
extern struct name_decoration __dyc_random_comp_525name_decoration(unsigned int __dyc_exp ) ;
extern struct name_decoration __dyc_read_comp_525name_decoration(void) ;
extern void __dyc_print_comp_525name_decoration(struct name_decoration __dyc_thistype ) ;
extern struct cache_entry *__dyc_random_ptr__comp_453cache_entry(unsigned int __dyc_exp ) ;
extern struct cache_entry *__dyc_read_ptr__comp_453cache_entry(void) ;
extern void __dyc_print_ptr__comp_453cache_entry(struct cache_entry  const  *__dyc_thistype ) ;
extern struct attr_match __dyc_random_comp_533attr_match(unsigned int __dyc_exp ) ;
extern struct attr_match __dyc_read_comp_533attr_match(void) ;
extern void __dyc_print_comp_533attr_match(struct attr_match __dyc_thistype ) ;
extern struct oid_stat __dyc_random_comp_493oid_stat(unsigned int __dyc_exp ) ;
extern struct oid_stat __dyc_read_comp_493oid_stat(void) ;
extern void __dyc_print_comp_493oid_stat(struct oid_stat __dyc_thistype ) ;
extern struct mem_pool *__dyc_random_ptr__comp_445mem_pool(unsigned int __dyc_exp ) ;
extern struct mem_pool *__dyc_read_ptr__comp_445mem_pool(void) ;
extern void __dyc_print_ptr__comp_445mem_pool(struct mem_pool  const  *__dyc_thistype ) ;
extern struct add_alternate_refs_data *__dyc_random_ptr__comp_600add_alternate_refs_data(unsigned int __dyc_exp ) ;
extern struct add_alternate_refs_data *__dyc_read_ptr__comp_600add_alternate_refs_data(void) ;
extern void __dyc_print_ptr__comp_600add_alternate_refs_data(struct add_alternate_refs_data  const  *__dyc_thistype ) ;
extern int *__dyc_random_ptr__int(unsigned int __dyc_exp ) ;
extern int *__dyc_read_ptr__int(void) ;
extern void __dyc_print_ptr__int(int const   *__dyc_thistype ) ;
extern struct setup_revision_opt *__dyc_random_ptr__comp_574setup_revision_opt(unsigned int __dyc_exp ) ;
extern struct setup_revision_opt *__dyc_read_ptr__comp_574setup_revision_opt(void) ;
extern void __dyc_print_ptr__comp_574setup_revision_opt(struct setup_revision_opt  const  *__dyc_thistype ) ;
extern struct strbuf *__dyc_random_ptr__comp_365strbuf(unsigned int __dyc_exp ) ;
extern struct strbuf *__dyc_read_ptr__comp_365strbuf(void) ;
extern void __dyc_print_ptr__comp_365strbuf(struct strbuf  const  *__dyc_thistype ) ;
extern struct combine_diff_path *__dyc_random_ptr__comp_537combine_diff_path(unsigned int __dyc_exp ) ;
extern struct combine_diff_path *__dyc_read_ptr__comp_537combine_diff_path(void) ;
extern void __dyc_print_ptr__comp_537combine_diff_path(struct combine_diff_path  const  *__dyc_thistype ) ;
extern void *__dyc_random_ptr__comp_544emitted_diff_symbols(unsigned int __dyc_exp ) ;
extern void *__dyc_read_ptr__comp_544emitted_diff_symbols(void) ;
extern void __dyc_print_ptr__comp_544emitted_diff_symbols(void const   * const  __dyc_thistype ) ;
extern struct rev_cmdline_info *__dyc_random_ptr__comp_570rev_cmdline_info(unsigned int __dyc_exp ) ;
extern struct rev_cmdline_info *__dyc_read_ptr__comp_570rev_cmdline_info(void) ;
extern void __dyc_print_ptr__comp_570rev_cmdline_info(struct rev_cmdline_info  const  *__dyc_thistype ) ;
extern struct tag *__dyc_random_ptr__comp_513tag(unsigned int __dyc_exp ) ;
extern struct tag *__dyc_read_ptr__comp_513tag(void) ;
extern void __dyc_print_ptr__comp_513tag(struct tag  const  *__dyc_thistype ) ;
extern unsigned long *__dyc_random_ptr__long(unsigned int __dyc_exp ) ;
extern unsigned long *__dyc_read_ptr__long(void) ;
extern void __dyc_print_ptr__long(unsigned long const   *__dyc_thistype ) ;
extern struct interpret_branch_name_options *__dyc_random_ptr__comp_463interpret_branch_name_options(unsigned int __dyc_exp ) ;
extern struct interpret_branch_name_options *__dyc_read_ptr__comp_463interpret_branch_name_options(void) ;
extern void __dyc_print_ptr__comp_463interpret_branch_name_options(struct interpret_branch_name_options  const  *__dyc_thistype ) ;
extern void *__dyc_random_ptr__comp_442multi_pack_index(unsigned int __dyc_exp ) ;
extern void *__dyc_read_ptr__comp_442multi_pack_index(void) ;
extern void __dyc_print_ptr__comp_442multi_pack_index(void const   * const  __dyc_thistype ) ;
extern void *__dyc_random_ptr__fun_name_is_not_here(unsigned int __dyc_exp ) ;
extern void *__dyc_read_ptr__fun_name_is_not_here(void) ;
extern void __dyc_print_ptr__fun_name_is_not_here(void const   * const  __dyc_thistype ) ;
extern struct string_list **__dyc_random_ptr__ptr__comp_405string_list(unsigned int __dyc_exp ) ;
extern struct string_list **__dyc_read_ptr__ptr__comp_405string_list(void) ;
extern void __dyc_print_ptr__ptr__comp_405string_list(struct string_list * const  *__dyc_thistype ) ;
extern struct userdiff_driver __dyc_random_comp_542userdiff_driver(unsigned int __dyc_exp ) ;
extern struct userdiff_driver __dyc_read_comp_542userdiff_driver(void) ;
extern void __dyc_print_comp_542userdiff_driver(struct userdiff_driver __dyc_thistype ) ;
extern union __anonunion_pthread_mutex_t_13 __dyc_random_comp_21__anonunion_pthread_mutex_t_13(unsigned int __dyc_exp ) ;
extern union __anonunion_pthread_mutex_t_13 __dyc_read_comp_21__anonunion_pthread_mutex_t_13(void) ;
extern void __dyc_print_comp_21__anonunion_pthread_mutex_t_13(union __anonunion_pthread_mutex_t_13 __dyc_thistype ) ;
extern struct __pthread_mutex_s __dyc_random_comp_22__pthread_mutex_s(unsigned int __dyc_exp ) ;
extern struct __pthread_mutex_s __dyc_read_comp_22__pthread_mutex_s(void) ;
extern void __dyc_print_comp_22__pthread_mutex_s(struct __pthread_mutex_s __dyc_thistype ) ;
extern struct repo_settings __dyc_random_comp_418repo_settings(unsigned int __dyc_exp ) ;
extern struct repo_settings __dyc_read_comp_418repo_settings(void) ;
extern void __dyc_print_comp_418repo_settings(struct repo_settings __dyc_thistype ) ;
extern struct rev_info __dyc_random_comp_523rev_info(unsigned int __dyc_exp ) ;
extern struct rev_info __dyc_read_comp_523rev_info(void) ;
extern void __dyc_print_comp_523rev_info(struct rev_info __dyc_thistype ) ;
extern struct tree *__dyc_random_ptr__comp_454tree(unsigned int __dyc_exp ) ;
extern struct tree *__dyc_read_ptr__comp_454tree(void) ;
extern void __dyc_print_ptr__comp_454tree(struct tree  const  *__dyc_thistype ) ;
extern pcre2_compile_context *__dyc_random_ptr__typdef_pcre2_compile_context(unsigned int __dyc_exp ) ;
extern pcre2_compile_context *__dyc_read_ptr__typdef_pcre2_compile_context(void) ;
extern void __dyc_print_ptr__typdef_pcre2_compile_context(pcre2_compile_context const   *__dyc_thistype ) ;
extern struct raw_object_store *__dyc_random_ptr__comp_415raw_object_store(unsigned int __dyc_exp ) ;
extern struct raw_object_store *__dyc_read_ptr__comp_415raw_object_store(void) ;
extern void __dyc_print_ptr__comp_415raw_object_store(struct raw_object_store  const  *__dyc_thistype ) ;
extern struct object_directory **__dyc_random_ptr__ptr__comp_499object_directory(unsigned int __dyc_exp ) ;
extern struct object_directory **__dyc_read_ptr__ptr__comp_499object_directory(void) ;
extern void __dyc_print_ptr__ptr__comp_499object_directory(struct object_directory * const  *__dyc_thistype ) ;
extern struct cache_tree __dyc_random_comp_459cache_tree(unsigned int __dyc_exp ) ;
extern struct cache_tree __dyc_read_comp_459cache_tree(void) ;
extern void __dyc_print_comp_459cache_tree(struct cache_tree __dyc_thistype ) ;
extern void *__dyc_random_ptr__comp_534attr_check(unsigned int __dyc_exp ) ;
extern void *__dyc_read_ptr__comp_534attr_check(void) ;
extern void __dyc_print_ptr__comp_534attr_check(void const   * const  __dyc_thistype ) ;
extern void *__dyc_random_ptr__comp_573git_graph(unsigned int __dyc_exp ) ;
extern void *__dyc_read_ptr__comp_573git_graph(void) ;
extern void __dyc_print_ptr__comp_573git_graph(void const   * const  __dyc_thistype ) ;
extern struct diff_filepair **__dyc_random_ptr__ptr__comp_548diff_filepair(unsigned int __dyc_exp ) ;
extern struct diff_filepair **__dyc_read_ptr__ptr__comp_548diff_filepair(void) ;
extern void __dyc_print_ptr__ptr__comp_548diff_filepair(struct diff_filepair * const  *__dyc_thistype ) ;
extern _IO_FILE *__dyc_random_ptr__typdef__IO_FILE(unsigned int __dyc_exp ) ;
extern _IO_FILE *__dyc_read_ptr__typdef__IO_FILE(void) ;
extern void __dyc_print_ptr__typdef__IO_FILE(_IO_FILE const   *__dyc_thistype ) ;
extern struct saved_parents __dyc_random_comp_566saved_parents(unsigned int __dyc_exp ) ;
extern struct saved_parents __dyc_read_comp_566saved_parents(void) ;
extern void __dyc_print_comp_566saved_parents(struct saved_parents __dyc_thistype ) ;
extern FILE __dyc_random_typdef_FILE(unsigned int __dyc_exp ) ;
extern FILE __dyc_read_typdef_FILE(void) ;
extern void __dyc_print_typdef_FILE(FILE __dyc_thistype ) ;
extern __off_t __dyc_random_typdef___off_t(unsigned int __dyc_exp ) ;
extern __off_t __dyc_read_typdef___off_t(void) ;
extern void __dyc_print_typdef___off_t(__off_t __dyc_thistype ) ;
extern struct diff_filespec *__dyc_random_ptr__comp_538diff_filespec(unsigned int __dyc_exp ) ;
extern struct diff_filespec *__dyc_read_ptr__comp_538diff_filespec(void) ;
extern void __dyc_print_ptr__comp_538diff_filespec(struct diff_filespec  const  *__dyc_thistype ) ;
extern struct grep_expr __dyc_random_comp_560grep_expr(unsigned int __dyc_exp ) ;
extern struct grep_expr __dyc_read_comp_560grep_expr(void) ;
extern void __dyc_print_comp_560grep_expr(struct grep_expr __dyc_thistype ) ;
extern struct revision_sources __dyc_random_comp_569revision_sources(unsigned int __dyc_exp ) ;
extern struct revision_sources __dyc_read_comp_569revision_sources(void) ;
extern void __dyc_print_comp_569revision_sources(struct revision_sources __dyc_thistype ) ;
extern struct patch_id __dyc_random_comp_575patch_id(unsigned int __dyc_exp ) ;
extern struct patch_id __dyc_read_comp_575patch_id(void) ;
extern void __dyc_print_comp_575patch_id(struct patch_id __dyc_thistype ) ;
extern char *__dyc_random_ptr__char(unsigned int __dyc_exp ) ;
extern char *__dyc_read_ptr__char(void) ;
extern void __dyc_print_ptr__char(char const   *__dyc_thistype ) ;
extern struct path_pattern *__dyc_random_ptr__comp_488path_pattern(unsigned int __dyc_exp ) ;
extern struct path_pattern *__dyc_read_ptr__comp_488path_pattern(void) ;
extern void __dyc_print_ptr__comp_488path_pattern(struct path_pattern  const  *__dyc_thistype ) ;
extern timestamp_t *__dyc_random_ptr__typdef_timestamp_t(unsigned int __dyc_exp ) ;
extern timestamp_t *__dyc_read_ptr__typdef_timestamp_t(void) ;
extern void __dyc_print_ptr__typdef_timestamp_t(timestamp_t const   *__dyc_thistype ) ;
extern struct cb_tree __dyc_random_comp_497cb_tree(unsigned int __dyc_exp ) ;
extern struct cb_tree __dyc_read_comp_497cb_tree(void) ;
extern void __dyc_print_comp_497cb_tree(struct cb_tree __dyc_thistype ) ;
extern khiter_t __dyc_random_typdef_khiter_t(unsigned int __dyc_exp ) ;
extern khiter_t __dyc_read_typdef_khiter_t(void) ;
extern void __dyc_print_typdef_khiter_t(khiter_t __dyc_thistype ) ;
extern void *__dyc_random_ptr__typdef_alternate_ref_fn(unsigned int __dyc_exp ) ;
extern void *__dyc_read_ptr__typdef_alternate_ref_fn(void) ;
extern void __dyc_print_ptr__typdef_alternate_ref_fn(void const   * const  __dyc_thistype ) ;
extern struct commit_list __dyc_random_comp_471commit_list(unsigned int __dyc_exp ) ;
extern struct commit_list __dyc_read_comp_471commit_list(void) ;
extern void __dyc_print_comp_471commit_list(struct commit_list __dyc_thistype ) ;
extern off_t __dyc_random_typdef_off_t(unsigned int __dyc_exp ) ;
extern off_t __dyc_read_typdef_off_t(void) ;
extern void __dyc_print_typdef_off_t(off_t __dyc_thistype ) ;
extern struct _IO_marker __dyc_random_comp_8_IO_marker(unsigned int __dyc_exp ) ;
extern struct _IO_marker __dyc_read_comp_8_IO_marker(void) ;
extern void __dyc_print_comp_8_IO_marker(struct _IO_marker __dyc_thistype ) ;
extern struct pack_window __dyc_random_comp_468pack_window(unsigned int __dyc_exp ) ;
extern struct pack_window __dyc_read_comp_468pack_window(void) ;
extern void __dyc_print_comp_468pack_window(struct pack_window __dyc_thistype ) ;
extern struct repository *__dyc_random_ptr__comp_408repository(unsigned int __dyc_exp ) ;
extern struct repository *__dyc_read_ptr__comp_408repository(void) ;
extern void __dyc_print_ptr__comp_408repository(struct repository  const  *__dyc_thistype ) ;
extern struct index_state *__dyc_random_ptr__comp_412index_state(unsigned int __dyc_exp ) ;
extern struct index_state *__dyc_read_ptr__comp_412index_state(void) ;
extern void __dyc_print_ptr__comp_412index_state(struct index_state  const  *__dyc_thistype ) ;
extern struct name_entry __dyc_random_comp_530name_entry(unsigned int __dyc_exp ) ;
extern struct name_entry __dyc_read_comp_530name_entry(void) ;
extern void __dyc_print_comp_530name_entry(struct name_entry __dyc_thistype ) ;
extern struct date_mode __dyc_random_comp_465date_mode(unsigned int __dyc_exp ) ;
extern struct date_mode __dyc_read_comp_465date_mode(void) ;
extern void __dyc_print_comp_465date_mode(struct date_mode __dyc_thistype ) ;
extern struct oidtree __dyc_random_comp_498oidtree(unsigned int __dyc_exp ) ;
extern struct oidtree __dyc_read_comp_498oidtree(void) ;
extern void __dyc_print_comp_498oidtree(struct oidtree __dyc_thistype ) ;
extern void *__dyc_random_ptr__typdef_parse_opt_cb(unsigned int __dyc_exp ) ;
extern void *__dyc_read_ptr__typdef_parse_opt_cb(void) ;
extern void __dyc_print_ptr__typdef_parse_opt_cb(void const   * const  __dyc_thistype ) ;
extern struct display_notes_opt __dyc_random_comp_556display_notes_opt(unsigned int __dyc_exp ) ;
extern struct display_notes_opt __dyc_read_comp_556display_notes_opt(void) ;
extern void __dyc_print_comp_556display_notes_opt(struct display_notes_opt __dyc_thistype ) ;
extern struct decoration_entry __dyc_random_comp_515decoration_entry(unsigned int __dyc_exp ) ;
extern struct decoration_entry __dyc_read_comp_515decoration_entry(void) ;
extern void __dyc_print_comp_515decoration_entry(struct decoration_entry __dyc_thistype ) ;
extern struct object_array __dyc_random_comp_511object_array(unsigned int __dyc_exp ) ;
extern struct object_array __dyc_read_comp_511object_array(void) ;
extern void __dyc_print_comp_511object_array(struct object_array __dyc_thistype ) ;
extern struct commit_graft **__dyc_random_ptr__ptr__comp_509commit_graft(unsigned int __dyc_exp ) ;
extern struct commit_graft **__dyc_read_ptr__ptr__comp_509commit_graft(void) ;
extern void __dyc_print_ptr__ptr__comp_509commit_graft(struct commit_graft * const  *__dyc_thistype ) ;
extern struct patch_ids __dyc_random_comp_576patch_ids(unsigned int __dyc_exp ) ;
extern struct patch_ids __dyc_read_comp_576patch_ids(void) ;
extern void __dyc_print_comp_576patch_ids(struct patch_ids __dyc_thistype ) ;
extern pcre2_match_data __dyc_random_typdef_pcre2_match_data(unsigned int __dyc_exp ) ;
extern pcre2_match_data __dyc_read_typdef_pcre2_match_data(void) ;
extern void __dyc_print_typdef_pcre2_match_data(pcre2_match_data __dyc_thistype ) ;
extern struct all_refs_cb __dyc_random_comp_599all_refs_cb(unsigned int __dyc_exp ) ;
extern struct all_refs_cb __dyc_read_comp_599all_refs_cb(void) ;
extern void __dyc_print_comp_599all_refs_cb(struct all_refs_cb __dyc_thistype ) ;
extern kh_oid_set_t __dyc_random_typdef_kh_oid_set_t(unsigned int __dyc_exp ) ;
extern kh_oid_set_t __dyc_read_typdef_kh_oid_set_t(void) ;
extern void __dyc_print_typdef_kh_oid_set_t(kh_oid_set_t __dyc_thistype ) ;
extern struct oidset_iter __dyc_random_comp_536oidset_iter(unsigned int __dyc_exp ) ;
extern struct oidset_iter __dyc_read_comp_536oidset_iter(void) ;
extern void __dyc_print_comp_536oidset_iter(struct oidset_iter __dyc_thistype ) ;
extern __ssize_t __dyc_random_typdef___ssize_t(unsigned int __dyc_exp ) ;
extern __ssize_t __dyc_read_typdef___ssize_t(void) ;
extern void __dyc_print_typdef___ssize_t(__ssize_t __dyc_thistype ) ;
extern struct mp_block *__dyc_random_ptr__comp_444mp_block(unsigned int __dyc_exp ) ;
extern struct mp_block *__dyc_read_ptr__comp_444mp_block(void) ;
extern void __dyc_print_ptr__comp_444mp_block(struct mp_block  const  *__dyc_thistype ) ;
extern uint64_t __dyc_random_typdef_uint64_t(unsigned int __dyc_exp ) ;
extern uint64_t __dyc_read_typdef_uint64_t(void) ;
extern void __dyc_print_typdef_uint64_t(uint64_t __dyc_thistype ) ;
extern struct setup_revision_opt __dyc_random_comp_574setup_revision_opt(unsigned int __dyc_exp ) ;
extern struct setup_revision_opt __dyc_read_comp_574setup_revision_opt(void) ;
extern void __dyc_print_comp_574setup_revision_opt(struct setup_revision_opt __dyc_thistype ) ;
extern struct grep_pat __dyc_random_comp_559grep_pat(unsigned int __dyc_exp ) ;
extern struct grep_pat __dyc_read_comp_559grep_pat(void) ;
extern void __dyc_print_comp_559grep_pat(struct grep_pat __dyc_thistype ) ;
extern time_t __dyc_random_typdef_time_t(unsigned int __dyc_exp ) ;
extern time_t __dyc_read_typdef_time_t(void) ;
extern void __dyc_print_typdef_time_t(time_t __dyc_thistype ) ;
extern struct commit *__dyc_random_ptr__comp_518commit(unsigned int __dyc_exp ) ;
extern struct commit *__dyc_read_ptr__comp_518commit(void) ;
extern void __dyc_print_ptr__comp_518commit(struct commit  const  *__dyc_thistype ) ;
extern struct parsed_object_pool *__dyc_random_ptr__comp_419parsed_object_pool(unsigned int __dyc_exp ) ;
extern struct parsed_object_pool *__dyc_read_ptr__comp_419parsed_object_pool(void) ;
extern void __dyc_print_ptr__comp_419parsed_object_pool(struct parsed_object_pool  const  *__dyc_thistype ) ;
extern struct worktree *__dyc_random_ptr__comp_549worktree(unsigned int __dyc_exp ) ;
extern struct worktree *__dyc_read_ptr__comp_549worktree(void) ;
extern void __dyc_print_ptr__comp_549worktree(struct worktree  const  *__dyc_thistype ) ;
extern khint_t __dyc_random_typdef_khint_t(unsigned int __dyc_exp ) ;
extern khint_t __dyc_read_typdef_khint_t(void) ;
extern void __dyc_print_typdef_khint_t(khint_t __dyc_thistype ) ;
extern struct commit_list *__dyc_random_ptr__comp_471commit_list(unsigned int __dyc_exp ) ;
extern struct commit_list *__dyc_read_ptr__comp_471commit_list(void) ;
extern void __dyc_print_ptr__comp_471commit_list(struct commit_list  const  *__dyc_thistype ) ;
extern struct untracked_cache *__dyc_random_ptr__comp_456untracked_cache(unsigned int __dyc_exp ) ;
extern struct untracked_cache *__dyc_read_ptr__comp_456untracked_cache(void) ;
extern void __dyc_print_ptr__comp_456untracked_cache(struct untracked_cache  const  *__dyc_thistype ) ;
extern struct strvec __dyc_random_comp_550strvec(unsigned int __dyc_exp ) ;
extern struct strvec __dyc_read_comp_550strvec(void) ;
extern void __dyc_print_comp_550strvec(struct strvec __dyc_thistype ) ;
extern struct object_array *__dyc_random_ptr__comp_511object_array(unsigned int __dyc_exp ) ;
extern struct object_array *__dyc_read_ptr__comp_511object_array(void) ;
extern void __dyc_print_ptr__comp_511object_array(struct object_array  const  *__dyc_thistype ) ;
extern struct diff_filepair *__dyc_random_ptr__comp_548diff_filepair(unsigned int __dyc_exp ) ;
extern struct diff_filepair *__dyc_read_ptr__comp_548diff_filepair(void) ;
extern void __dyc_print_ptr__comp_548diff_filepair(struct diff_filepair  const  *__dyc_thistype ) ;
extern struct pathspec_item __dyc_random_comp_495pathspec_item(unsigned int __dyc_exp ) ;
extern struct pathspec_item __dyc_read_comp_495pathspec_item(void) ;
extern void __dyc_print_comp_495pathspec_item(struct pathspec_item __dyc_thistype ) ;
extern struct grep_expr *__dyc_random_ptr__comp_560grep_expr(unsigned int __dyc_exp ) ;
extern struct grep_expr *__dyc_read_ptr__comp_560grep_expr(void) ;
extern void __dyc_print_ptr__comp_560grep_expr(struct grep_expr  const  *__dyc_thistype ) ;
extern SHA1_CTX __dyc_random_typdef_SHA1_CTX(unsigned int __dyc_exp ) ;
extern SHA1_CTX __dyc_read_typdef_SHA1_CTX(void) ;
extern void __dyc_print_typdef_SHA1_CTX(SHA1_CTX __dyc_thistype ) ;
extern struct _IO_FILE *__dyc_random_ptr__comp_2_IO_FILE(unsigned int __dyc_exp ) ;
extern struct _IO_FILE *__dyc_read_ptr__comp_2_IO_FILE(void) ;
extern void __dyc_print_ptr__comp_2_IO_FILE(struct _IO_FILE  const  *__dyc_thistype ) ;
extern struct oidset *__dyc_random_ptr__comp_535oidset(unsigned int __dyc_exp ) ;
extern struct oidset *__dyc_read_ptr__comp_535oidset(void) ;
extern void __dyc_print_ptr__comp_535oidset(struct oidset  const  *__dyc_thistype ) ;
extern struct object **__dyc_random_ptr__ptr__comp_464object(unsigned int __dyc_exp ) ;
extern struct object **__dyc_read_ptr__ptr__comp_464object(void) ;
extern void __dyc_print_ptr__ptr__comp_464object(struct object * const  *__dyc_thistype ) ;
extern struct bloom_filter __dyc_random_comp_595bloom_filter(unsigned int __dyc_exp ) ;
extern struct bloom_filter __dyc_read_comp_595bloom_filter(void) ;
extern void __dyc_print_comp_595bloom_filter(struct bloom_filter __dyc_thistype ) ;
extern struct decoration *__dyc_random_ptr__comp_516decoration(unsigned int __dyc_exp ) ;
extern struct decoration *__dyc_read_ptr__comp_516decoration(void) ;
extern void __dyc_print_ptr__comp_516decoration(struct decoration  const  *__dyc_thistype ) ;
extern pcre2_general_context __dyc_random_typdef_pcre2_general_context(unsigned int __dyc_exp ) ;
extern pcre2_general_context __dyc_read_typdef_pcre2_general_context(void) ;
extern void __dyc_print_typdef_pcre2_general_context(pcre2_general_context __dyc_thistype ) ;
extern kh_odb_path_map_t __dyc_random_typdef_kh_odb_path_map_t(unsigned int __dyc_exp ) ;
extern kh_odb_path_map_t __dyc_read_typdef_kh_odb_path_map_t(void) ;
extern void __dyc_print_typdef_kh_odb_path_map_t(kh_odb_path_map_t __dyc_thistype ) ;
extern void *__dyc_random_ptr__comp_455split_index(unsigned int __dyc_exp ) ;
extern void *__dyc_read_ptr__comp_455split_index(void) ;
extern void __dyc_print_ptr__comp_455split_index(void const   * const  __dyc_thistype ) ;
extern struct object_id __dyc_random_comp_406object_id(unsigned int __dyc_exp ) ;
extern struct object_id __dyc_read_comp_406object_id(void) ;
extern void __dyc_print_comp_406object_id(struct object_id __dyc_thistype ) ;
extern struct index_state __dyc_random_comp_412index_state(unsigned int __dyc_exp ) ;
extern struct index_state __dyc_read_comp_412index_state(void) ;
extern void __dyc_print_comp_412index_state(struct index_state __dyc_thistype ) ;
extern struct all_refs_cb *__dyc_random_ptr__comp_599all_refs_cb(unsigned int __dyc_exp ) ;
extern struct all_refs_cb *__dyc_read_ptr__comp_599all_refs_cb(void) ;
extern void __dyc_print_ptr__comp_599all_refs_cb(struct all_refs_cb  const  *__dyc_thistype ) ;
extern struct date_mode *__dyc_random_ptr__comp_465date_mode(unsigned int __dyc_exp ) ;
extern struct date_mode *__dyc_read_ptr__comp_465date_mode(void) ;
extern void __dyc_print_ptr__comp_465date_mode(struct date_mode  const  *__dyc_thistype ) ;
extern struct git_hash_algo *__dyc_random_ptr__comp_411git_hash_algo(unsigned int __dyc_exp ) ;
extern struct git_hash_algo *__dyc_read_ptr__comp_411git_hash_algo(void) ;
extern void __dyc_print_ptr__comp_411git_hash_algo(struct git_hash_algo  const  *__dyc_thistype ) ;
extern struct cb_node __dyc_random_comp_496cb_node(unsigned int __dyc_exp ) ;
extern struct cb_node __dyc_read_comp_496cb_node(void) ;
extern void __dyc_print_comp_496cb_node(struct cb_node __dyc_thistype ) ;
extern kh_oid_set_t *__dyc_random_ptr__typdef_kh_oid_set_t(unsigned int __dyc_exp ) ;
extern kh_oid_set_t *__dyc_read_ptr__typdef_kh_oid_set_t(void) ;
extern void __dyc_print_ptr__typdef_kh_oid_set_t(kh_oid_set_t const   *__dyc_thistype ) ;
extern struct oidset_iter *__dyc_random_ptr__comp_536oidset_iter(unsigned int __dyc_exp ) ;
extern struct oidset_iter *__dyc_read_ptr__comp_536oidset_iter(void) ;
extern void __dyc_print_ptr__comp_536oidset_iter(struct oidset_iter  const  *__dyc_thistype ) ;
extern struct cache_tree_sub __dyc_random_comp_586cache_tree_sub(unsigned int __dyc_exp ) ;
extern struct cache_tree_sub __dyc_read_comp_586cache_tree_sub(void) ;
extern void __dyc_print_comp_586cache_tree_sub(struct cache_tree_sub __dyc_thistype ) ;
extern struct stat_validity __dyc_random_comp_472stat_validity(unsigned int __dyc_exp ) ;
extern struct stat_validity __dyc_read_comp_472stat_validity(void) ;
extern void __dyc_print_comp_472stat_validity(struct stat_validity __dyc_thistype ) ;
extern struct patch_ids *__dyc_random_ptr__comp_576patch_ids(unsigned int __dyc_exp ) ;
extern struct patch_ids *__dyc_read_ptr__comp_576patch_ids(void) ;
extern void __dyc_print_ptr__comp_576patch_ids(struct patch_ids  const  *__dyc_thistype ) ;
extern struct parse_opt_ctx_t *__dyc_random_ptr__comp_552parse_opt_ctx_t(unsigned int __dyc_exp ) ;
extern struct parse_opt_ctx_t *__dyc_read_ptr__comp_552parse_opt_ctx_t(void) ;
extern void __dyc_print_ptr__comp_552parse_opt_ctx_t(struct parse_opt_ctx_t  const  *__dyc_thistype ) ;
extern struct add_alternate_refs_data __dyc_random_comp_600add_alternate_refs_data(unsigned int __dyc_exp ) ;
extern struct add_alternate_refs_data __dyc_read_comp_600add_alternate_refs_data(void) ;
extern void __dyc_print_comp_600add_alternate_refs_data(struct add_alternate_refs_data __dyc_thistype ) ;
extern struct log_info *__dyc_random_ptr__comp_565log_info(unsigned int __dyc_exp ) ;
extern struct log_info *__dyc_read_ptr__comp_565log_info(void) ;
extern void __dyc_print_ptr__comp_565log_info(struct log_info  const  *__dyc_thistype ) ;
extern struct commit **__dyc_random_ptr__ptr__comp_518commit(unsigned int __dyc_exp ) ;
extern struct commit **__dyc_read_ptr__ptr__comp_518commit(void) ;
extern void __dyc_print_ptr__ptr__comp_518commit(struct commit * const  *__dyc_thistype ) ;
extern uint32_t __dyc_random_typdef_uint32_t(unsigned int __dyc_exp ) ;
extern uint32_t __dyc_read_typdef_uint32_t(void) ;
extern void __dyc_print_typdef_uint32_t(uint32_t __dyc_thistype ) ;
extern struct option *__dyc_random_ptr__comp_541option(unsigned int __dyc_exp ) ;
extern struct option *__dyc_read_ptr__comp_541option(void) ;
extern void __dyc_print_ptr__comp_541option(struct option  const  *__dyc_thistype ) ;
extern struct json_writer __dyc_random_comp_440json_writer(unsigned int __dyc_exp ) ;
extern struct json_writer __dyc_read_comp_440json_writer(void) ;
extern void __dyc_print_comp_440json_writer(struct json_writer __dyc_thistype ) ;
extern struct cache_entry **__dyc_random_ptr__ptr__comp_453cache_entry(unsigned int __dyc_exp ) ;
extern struct cache_entry **__dyc_read_ptr__ptr__comp_453cache_entry(void) ;
extern void __dyc_print_ptr__ptr__comp_453cache_entry(struct cache_entry * const  *__dyc_thistype ) ;
extern struct pathspec __dyc_random_comp_414pathspec(unsigned int __dyc_exp ) ;
extern struct pathspec __dyc_read_comp_414pathspec(void) ;
extern void __dyc_print_comp_414pathspec(struct pathspec __dyc_thistype ) ;
extern struct topo_walk_info *__dyc_random_ptr__comp_572topo_walk_info(unsigned int __dyc_exp ) ;
extern struct topo_walk_info *__dyc_read_ptr__comp_572topo_walk_info(void) ;
extern void __dyc_print_ptr__comp_572topo_walk_info(struct topo_walk_info  const  *__dyc_thistype ) ;
extern struct __anonstruct_binary_110 __dyc_random_comp_562__anonstruct_binary_110(unsigned int __dyc_exp ) ;
extern struct __anonstruct_binary_110 __dyc_read_comp_562__anonstruct_binary_110(void) ;
extern void __dyc_print_comp_562__anonstruct_binary_110(struct __anonstruct_binary_110 __dyc_thistype ) ;
extern struct indegree_slab __dyc_random_comp_602indegree_slab(unsigned int __dyc_exp ) ;
extern struct indegree_slab __dyc_read_comp_602indegree_slab(void) ;
extern void __dyc_print_comp_602indegree_slab(struct indegree_slab __dyc_thistype ) ;
extern struct __anonstruct_kh_odb_path_map_t_103 __dyc_random_comp_500__anonstruct_kh_odb_path_map_t_103(unsigned int __dyc_exp ) ;
extern struct __anonstruct_kh_odb_path_map_t_103 __dyc_read_comp_500__anonstruct_kh_odb_path_map_t_103(void) ;
extern void __dyc_print_comp_500__anonstruct_kh_odb_path_map_t_103(struct __anonstruct_kh_odb_path_map_t_103 __dyc_thistype ) ;
extern struct oidmap *__dyc_random_ptr__comp_474oidmap(unsigned int __dyc_exp ) ;
extern struct oidmap *__dyc_read_ptr__comp_474oidmap(void) ;
extern void __dyc_print_ptr__comp_474oidmap(struct oidmap  const  *__dyc_thistype ) ;
extern struct path_pattern **__dyc_random_ptr__ptr__comp_488path_pattern(unsigned int __dyc_exp ) ;
extern struct path_pattern **__dyc_read_ptr__ptr__comp_488path_pattern(void) ;
extern void __dyc_print_ptr__ptr__comp_488path_pattern(struct path_pattern * const  *__dyc_thistype ) ;
extern struct hashmap __dyc_random_comp_427hashmap(unsigned int __dyc_exp ) ;
extern struct hashmap __dyc_read_comp_427hashmap(void) ;
extern void __dyc_print_comp_427hashmap(struct hashmap __dyc_thistype ) ;
extern struct prio_queue *__dyc_random_ptr__comp_594prio_queue(unsigned int __dyc_exp ) ;
extern struct prio_queue *__dyc_read_ptr__comp_594prio_queue(void) ;
extern void __dyc_print_ptr__comp_594prio_queue(struct prio_queue  const  *__dyc_thistype ) ;
extern void *__dyc_random_ptr__comp_460ewah_bitmap(unsigned int __dyc_exp ) ;
extern void *__dyc_read_ptr__comp_460ewah_bitmap(void) ;
extern void __dyc_print_ptr__comp_460ewah_bitmap(void const   * const  __dyc_thistype ) ;
extern struct packed_git *__dyc_random_ptr__comp_441packed_git(unsigned int __dyc_exp ) ;
extern struct packed_git *__dyc_read_ptr__comp_441packed_git(void) ;
extern void __dyc_print_ptr__comp_441packed_git(struct packed_git  const  *__dyc_thistype ) ;
extern struct parsed_object_pool __dyc_random_comp_419parsed_object_pool(unsigned int __dyc_exp ) ;
extern struct parsed_object_pool __dyc_read_comp_419parsed_object_pool(void) ;
extern void __dyc_print_comp_419parsed_object_pool(struct parsed_object_pool __dyc_thistype ) ;
extern struct author_date_slab __dyc_random_comp_529author_date_slab(unsigned int __dyc_exp ) ;
extern struct author_date_slab __dyc_read_comp_529author_date_slab(void) ;
extern void __dyc_print_comp_529author_date_slab(struct author_date_slab __dyc_thistype ) ;
extern struct blob *__dyc_random_ptr__comp_514blob(unsigned int __dyc_exp ) ;
extern struct blob *__dyc_read_ptr__comp_514blob(void) ;
extern void __dyc_print_ptr__comp_514blob(struct blob  const  *__dyc_thistype ) ;
extern struct attr_match *__dyc_random_ptr__comp_533attr_match(unsigned int __dyc_exp ) ;
extern struct attr_match *__dyc_read_ptr__comp_533attr_match(void) ;
extern void __dyc_print_ptr__comp_533attr_match(struct attr_match  const  *__dyc_thistype ) ;
extern struct revision_sources *__dyc_random_ptr__comp_569revision_sources(unsigned int __dyc_exp ) ;
extern struct revision_sources *__dyc_read_ptr__comp_569revision_sources(void) ;
extern void __dyc_print_ptr__comp_569revision_sources(struct revision_sources  const  *__dyc_thistype ) ;
extern pthread_mutex_t __dyc_random_typdef_pthread_mutex_t(unsigned int __dyc_exp ) ;
extern pthread_mutex_t __dyc_read_typdef_pthread_mutex_t(void) ;
extern void __dyc_print_typdef_pthread_mutex_t(pthread_mutex_t __dyc_thistype ) ;
extern struct path_and_oids_entry __dyc_random_comp_596path_and_oids_entry(unsigned int __dyc_exp ) ;
extern struct path_and_oids_entry __dyc_read_comp_596path_and_oids_entry(void) ;
extern void __dyc_print_comp_596path_and_oids_entry(struct path_and_oids_entry __dyc_thistype ) ;
extern struct path_cache __dyc_random_comp_409path_cache(unsigned int __dyc_exp ) ;
extern struct path_cache __dyc_read_comp_409path_cache(void) ;
extern void __dyc_print_comp_409path_cache(struct path_cache __dyc_thistype ) ;
extern struct object *__dyc_random_ptr__comp_464object(unsigned int __dyc_exp ) ;
extern struct object *__dyc_read_ptr__comp_464object(void) ;
extern void __dyc_print_ptr__comp_464object(struct object  const  *__dyc_thistype ) ;
extern struct rev_info *__dyc_random_ptr__comp_523rev_info(unsigned int __dyc_exp ) ;
extern struct rev_info *__dyc_read_ptr__comp_523rev_info(void) ;
extern void __dyc_print_ptr__comp_523rev_info(struct rev_info  const  *__dyc_thistype ) ;
extern struct author_date_slab *__dyc_random_ptr__comp_529author_date_slab(unsigned int __dyc_exp ) ;
extern struct author_date_slab *__dyc_read_ptr__comp_529author_date_slab(void) ;
extern void __dyc_print_ptr__comp_529author_date_slab(struct author_date_slab  const  *__dyc_thistype ) ;
extern struct interpret_branch_name_options __dyc_random_comp_463interpret_branch_name_options(unsigned int __dyc_exp ) ;
extern struct interpret_branch_name_options __dyc_read_comp_463interpret_branch_name_options(void) ;
extern void __dyc_print_comp_463interpret_branch_name_options(struct interpret_branch_name_options __dyc_thistype ) ;
extern uint8_t __dyc_random_typdef_uint8_t(unsigned int __dyc_exp ) ;
extern uint8_t __dyc_read_typdef_uint8_t(void) ;
extern void __dyc_print_typdef_uint8_t(uint8_t __dyc_thistype ) ;
extern struct cache_tree *__dyc_random_ptr__comp_459cache_tree(unsigned int __dyc_exp ) ;
extern struct cache_tree *__dyc_read_ptr__comp_459cache_tree(void) ;
extern void __dyc_print_ptr__comp_459cache_tree(struct cache_tree  const  *__dyc_thistype ) ;
extern struct cache_tree_sub *__dyc_random_ptr__comp_586cache_tree_sub(unsigned int __dyc_exp ) ;
extern struct cache_tree_sub *__dyc_read_ptr__comp_586cache_tree_sub(void) ;
extern void __dyc_print_ptr__comp_586cache_tree_sub(struct cache_tree_sub  const  *__dyc_thistype ) ;
extern struct rev_cmdline_entry __dyc_random_comp_571rev_cmdline_entry(unsigned int __dyc_exp ) ;
extern struct rev_cmdline_entry __dyc_read_comp_571rev_cmdline_entry(void) ;
extern void __dyc_print_comp_571rev_cmdline_entry(struct rev_cmdline_entry __dyc_thistype ) ;
extern char **__dyc_random_ptr__ptr__char(unsigned int __dyc_exp ) ;
extern char **__dyc_read_ptr__ptr__char(void) ;
extern void __dyc_print_ptr__ptr__char(char * const  *__dyc_thistype ) ;
extern struct object_id *__dyc_random_ptr__comp_406object_id(unsigned int __dyc_exp ) ;
extern struct object_id *__dyc_read_ptr__comp_406object_id(void) ;
extern void __dyc_print_ptr__comp_406object_id(struct object_id  const  *__dyc_thistype ) ;
extern struct blk_SHA256_CTX __dyc_random_comp_424blk_SHA256_CTX(unsigned int __dyc_exp ) ;
extern struct blk_SHA256_CTX __dyc_read_comp_424blk_SHA256_CTX(void) ;
extern void __dyc_print_comp_424blk_SHA256_CTX(struct blk_SHA256_CTX __dyc_thistype ) ;
extern struct patch_id *__dyc_random_ptr__comp_575patch_id(unsigned int __dyc_exp ) ;
extern struct patch_id *__dyc_read_ptr__comp_575patch_id(void) ;
extern void __dyc_print_ptr__comp_575patch_id(struct patch_id  const  *__dyc_thistype ) ;
extern struct notes_tree __dyc_random_comp_553notes_tree(unsigned int __dyc_exp ) ;
extern struct notes_tree __dyc_read_comp_553notes_tree(void) ;
extern void __dyc_print_comp_553notes_tree(struct notes_tree __dyc_thistype ) ;
extern struct json_writer *__dyc_random_ptr__comp_440json_writer(unsigned int __dyc_exp ) ;
extern struct json_writer *__dyc_read_ptr__comp_440json_writer(void) ;
extern void __dyc_print_ptr__comp_440json_writer(struct json_writer  const  *__dyc_thistype ) ;
extern struct treesame_state __dyc_random_comp_598treesame_state(unsigned int __dyc_exp ) ;
extern struct treesame_state __dyc_read_comp_598treesame_state(void) ;
extern void __dyc_print_comp_598treesame_state(struct treesame_state __dyc_thistype ) ;
extern struct decoration_entry *__dyc_random_ptr__comp_515decoration_entry(unsigned int __dyc_exp ) ;
extern struct decoration_entry *__dyc_read_ptr__comp_515decoration_entry(void) ;
extern void __dyc_print_ptr__comp_515decoration_entry(struct decoration_entry  const  *__dyc_thistype ) ;
extern struct _IO_marker *__dyc_random_ptr__comp_8_IO_marker(unsigned int __dyc_exp ) ;
extern struct _IO_marker *__dyc_read_ptr__comp_8_IO_marker(void) ;
extern void __dyc_print_ptr__comp_8_IO_marker(struct _IO_marker  const  *__dyc_thistype ) ;
extern regex_t *__dyc_random_ptr__typdef_regex_t(unsigned int __dyc_exp ) ;
extern regex_t *__dyc_read_ptr__typdef_regex_t(void) ;
extern void __dyc_print_ptr__typdef_regex_t(regex_t const   *__dyc_thistype ) ;
extern khint32_t __dyc_random_typdef_khint32_t(unsigned int __dyc_exp ) ;
extern khint32_t __dyc_read_typdef_khint32_t(void) ;
extern void __dyc_print_typdef_khint32_t(khint32_t __dyc_thistype ) ;
extern void *__dyc_random_ptr__typdef_each_ref_fn(unsigned int __dyc_exp ) ;
extern void *__dyc_read_ptr__typdef_each_ref_fn(void) ;
extern void __dyc_print_ptr__typdef_each_ref_fn(void const   * const  __dyc_thistype ) ;
extern void *__dyc_random_ptr__typdef_parse_opt_ll_cb(unsigned int __dyc_exp ) ;
extern void *__dyc_read_ptr__typdef_parse_opt_ll_cb(void) ;
extern void __dyc_print_ptr__typdef_parse_opt_ll_cb(void const   * const  __dyc_thistype ) ;
extern struct diff_queue_struct __dyc_random_comp_540diff_queue_struct(unsigned int __dyc_exp ) ;
extern struct diff_queue_struct __dyc_read_comp_540diff_queue_struct(void) ;
extern void __dyc_print_comp_540diff_queue_struct(struct diff_queue_struct __dyc_thistype ) ;
extern struct name_entry *__dyc_random_ptr__comp_530name_entry(unsigned int __dyc_exp ) ;
extern struct name_entry *__dyc_read_ptr__comp_530name_entry(void) ;
extern void __dyc_print_ptr__comp_530name_entry(struct name_entry  const  *__dyc_thistype ) ;
extern FILE *__dyc_random_ptr__typdef_FILE(unsigned int __dyc_exp ) ;
extern FILE *__dyc_read_ptr__typdef_FILE(void) ;
extern void __dyc_print_ptr__typdef_FILE(FILE const   *__dyc_thistype ) ;
extern struct saved_parents *__dyc_random_ptr__comp_566saved_parents(unsigned int __dyc_exp ) ;
extern struct saved_parents *__dyc_read_ptr__comp_566saved_parents(void) ;
extern void __dyc_print_ptr__comp_566saved_parents(struct saved_parents  const  *__dyc_thistype ) ;
extern pcre2_general_context *__dyc_random_ptr__typdef_pcre2_general_context(unsigned int __dyc_exp ) ;
extern pcre2_general_context *__dyc_read_ptr__typdef_pcre2_general_context(void) ;
extern void __dyc_print_ptr__typdef_pcre2_general_context(pcre2_general_context const   *__dyc_thistype ) ;
extern struct ident_split __dyc_random_comp_466ident_split(unsigned int __dyc_exp ) ;
extern struct ident_split __dyc_read_comp_466ident_split(void) ;
extern void __dyc_print_comp_466ident_split(struct ident_split __dyc_thistype ) ;
extern struct __anonstruct_kh_oid_set_t_99 __dyc_random_comp_484__anonstruct_kh_oid_set_t_99(unsigned int __dyc_exp ) ;
extern struct __anonstruct_kh_oid_set_t_99 __dyc_read_comp_484__anonstruct_kh_oid_set_t_99(void) ;
extern void __dyc_print_comp_484__anonstruct_kh_oid_set_t_99(struct __anonstruct_kh_oid_set_t_99 __dyc_thistype ) ;
extern struct untracked_cache_dir __dyc_random_comp_491untracked_cache_dir(unsigned int __dyc_exp ) ;
extern struct untracked_cache_dir __dyc_read_comp_491untracked_cache_dir(void) ;
extern void __dyc_print_comp_491untracked_cache_dir(struct untracked_cache_dir __dyc_thistype ) ;
extern struct name_decoration *__dyc_random_ptr__comp_525name_decoration(unsigned int __dyc_exp ) ;
extern struct name_decoration *__dyc_read_ptr__comp_525name_decoration(void) ;
extern void __dyc_print_ptr__comp_525name_decoration(struct name_decoration  const  *__dyc_thistype ) ;
extern struct bloom_filter_settings __dyc_random_comp_568bloom_filter_settings(unsigned int __dyc_exp ) ;
extern struct bloom_filter_settings __dyc_read_comp_568bloom_filter_settings(void) ;
extern void __dyc_print_comp_568bloom_filter_settings(struct bloom_filter_settings __dyc_thistype ) ;
extern struct path_and_oids_entry *__dyc_random_ptr__comp_596path_and_oids_entry(unsigned int __dyc_exp ) ;
extern struct path_and_oids_entry *__dyc_read_ptr__comp_596path_and_oids_entry(void) ;
extern void __dyc_print_ptr__comp_596path_and_oids_entry(struct path_and_oids_entry  const  *__dyc_thistype ) ;
extern struct __anonstruct_kept_pack_cache_104 __dyc_random_comp_503__anonstruct_kept_pack_cache_104(unsigned int __dyc_exp ) ;
extern struct __anonstruct_kept_pack_cache_104 __dyc_read_comp_503__anonstruct_kept_pack_cache_104(void) ;
extern void __dyc_print_comp_503__anonstruct_kept_pack_cache_104(struct __anonstruct_kept_pack_cache_104 __dyc_thistype ) ;
extern __off64_t __dyc_random_typdef___off64_t(unsigned int __dyc_exp ) ;
extern __off64_t __dyc_read_typdef___off64_t(void) ;
extern void __dyc_print_typdef___off64_t(__off64_t __dyc_thistype ) ;
extern struct strbuf __dyc_random_comp_365strbuf(unsigned int __dyc_exp ) ;
extern struct strbuf __dyc_read_comp_365strbuf(void) ;
extern void __dyc_print_comp_365strbuf(struct strbuf __dyc_thistype ) ;
extern struct commit_list **__dyc_random_ptr__ptr__comp_471commit_list(unsigned int __dyc_exp ) ;
extern struct commit_list **__dyc_read_ptr__ptr__comp_471commit_list(void) ;
extern void __dyc_print_ptr__ptr__comp_471commit_list(struct commit_list * const  *__dyc_thistype ) ;
extern struct untracked_cache __dyc_random_comp_456untracked_cache(unsigned int __dyc_exp ) ;
extern struct untracked_cache __dyc_read_comp_456untracked_cache(void) ;
extern void __dyc_print_comp_456untracked_cache(struct untracked_cache __dyc_thistype ) ;
extern struct grep_pat *__dyc_random_ptr__comp_559grep_pat(unsigned int __dyc_exp ) ;
extern struct grep_pat *__dyc_read_ptr__comp_559grep_pat(void) ;
extern void __dyc_print_ptr__comp_559grep_pat(struct grep_pat  const  *__dyc_thistype ) ;
extern struct pattern_list __dyc_random_comp_458pattern_list(unsigned int __dyc_exp ) ;
extern struct pattern_list __dyc_read_comp_458pattern_list(void) ;
extern void __dyc_print_comp_458pattern_list(struct pattern_list __dyc_thistype ) ;
extern __intptr_t __dyc_random_typdef___intptr_t(unsigned int __dyc_exp ) ;
extern __intptr_t __dyc_read_typdef___intptr_t(void) ;
extern void __dyc_print_typdef___intptr_t(__intptr_t __dyc_thistype ) ;
extern struct cache_tree_sub **__dyc_random_ptr__ptr__comp_586cache_tree_sub(unsigned int __dyc_exp ) ;
extern struct cache_tree_sub **__dyc_read_ptr__ptr__comp_586cache_tree_sub(void) ;
extern void __dyc_print_ptr__ptr__comp_586cache_tree_sub(struct cache_tree_sub * const  *__dyc_thistype ) ;
extern size_t __dyc_random_typdef_size_t(unsigned int __dyc_exp ) ;
extern size_t __dyc_read_typdef_size_t(void) ;
extern void __dyc_print_typdef_size_t(size_t __dyc_thistype ) ;
extern struct oidtree *__dyc_random_ptr__comp_498oidtree(unsigned int __dyc_exp ) ;
extern struct oidtree *__dyc_read_ptr__comp_498oidtree(void) ;
extern void __dyc_print_ptr__comp_498oidtree(struct oidtree  const  *__dyc_thistype ) ;
extern struct treesame_state *__dyc_random_ptr__comp_598treesame_state(unsigned int __dyc_exp ) ;
extern struct treesame_state *__dyc_read_ptr__comp_598treesame_state(void) ;
extern void __dyc_print_ptr__comp_598treesame_state(struct treesame_state  const  *__dyc_thistype ) ;
extern void *__dyc_random_ptr__void(unsigned int __dyc_exp ) ;
extern void *__dyc_read_ptr__void(void) ;
extern void __dyc_print_ptr__void(void const   * const  __dyc_thistype ) ;
extern struct diff_options __dyc_random_comp_539diff_options(unsigned int __dyc_exp ) ;
extern struct diff_options __dyc_read_comp_539diff_options(void) ;
extern void __dyc_print_comp_539diff_options(struct diff_options __dyc_thistype ) ;
extern regex_t **__dyc_random_ptr__ptr__typdef_regex_t(unsigned int __dyc_exp ) ;
extern regex_t **__dyc_read_ptr__ptr__typdef_regex_t(void) ;
extern void __dyc_print_ptr__ptr__typdef_regex_t(regex_t * const  *__dyc_thistype ) ;
extern kh_odb_path_map_t *__dyc_random_ptr__typdef_kh_odb_path_map_t(unsigned int __dyc_exp ) ;
extern kh_odb_path_map_t *__dyc_read_ptr__typdef_kh_odb_path_map_t(void) ;
extern void __dyc_print_ptr__typdef_kh_odb_path_map_t(kh_odb_path_map_t const   *__dyc_thistype ) ;
extern struct __pthread_internal_list __dyc_random_comp_20__pthread_internal_list(unsigned int __dyc_exp ) ;
extern struct __pthread_internal_list __dyc_read_comp_20__pthread_internal_list(void) ;
extern void __dyc_print_comp_20__pthread_internal_list(struct __pthread_internal_list __dyc_thistype ) ;
extern struct list_head __dyc_random_comp_429list_head(unsigned int __dyc_exp ) ;
extern struct list_head __dyc_read_comp_429list_head(void) ;
extern void __dyc_print_comp_429list_head(struct list_head __dyc_thistype ) ;
extern timestamp_t **__dyc_random_ptr__ptr__typdef_timestamp_t(unsigned int __dyc_exp ) ;
extern timestamp_t **__dyc_read_ptr__ptr__typdef_timestamp_t(void) ;
extern void __dyc_print_ptr__ptr__typdef_timestamp_t(timestamp_t * const  *__dyc_thistype ) ;
extern void *__dyc_random_ptr__typdef_each_packed_object_fn(unsigned int __dyc_exp ) ;
extern void *__dyc_read_ptr__typdef_each_packed_object_fn(void) ;
extern void __dyc_print_ptr__typdef_each_packed_object_fn(void const   * const  __dyc_thistype ) ;
extern struct commit_list ***__dyc_random_ptr__ptr__ptr__comp_471commit_list(unsigned int __dyc_exp ) ;
extern struct commit_list ***__dyc_read_ptr__ptr__ptr__comp_471commit_list(void) ;
extern void __dyc_print_ptr__ptr__ptr__comp_471commit_list(struct commit_list ** const  *__dyc_thistype ) ;
extern struct cache_time __dyc_random_comp_451cache_time(unsigned int __dyc_exp ) ;
extern struct cache_time __dyc_read_comp_451cache_time(void) ;
extern void __dyc_print_comp_451cache_time(struct cache_time __dyc_thistype ) ;
extern struct tree __dyc_random_comp_454tree(unsigned int __dyc_exp ) ;
extern struct tree __dyc_read_comp_454tree(void) ;
extern void __dyc_print_comp_454tree(struct tree __dyc_thistype ) ;
extern struct parse_opt_ctx_t __dyc_random_comp_552parse_opt_ctx_t(unsigned int __dyc_exp ) ;
extern struct parse_opt_ctx_t __dyc_read_comp_552parse_opt_ctx_t(void) ;
extern void __dyc_print_comp_552parse_opt_ctx_t(struct parse_opt_ctx_t __dyc_thistype ) ;
extern struct bloom_filter *__dyc_random_ptr__comp_595bloom_filter(unsigned int __dyc_exp ) ;
extern struct bloom_filter *__dyc_read_ptr__comp_595bloom_filter(void) ;
extern void __dyc_print_ptr__comp_595bloom_filter(struct bloom_filter  const  *__dyc_thistype ) ;
extern void *__dyc_random_ptr__typdef_each_reflog_ent_fn(unsigned int __dyc_exp ) ;
extern void *__dyc_read_ptr__typdef_each_reflog_ent_fn(void) ;
extern void __dyc_print_ptr__typdef_each_reflog_ent_fn(void const   * const  __dyc_thistype ) ;
extern struct ident_split *__dyc_random_ptr__comp_466ident_split(unsigned int __dyc_exp ) ;
extern struct ident_split *__dyc_read_ptr__comp_466ident_split(void) ;
extern void __dyc_print_ptr__comp_466ident_split(struct ident_split  const  *__dyc_thistype ) ;
extern struct pattern_list *__dyc_random_ptr__comp_458pattern_list(unsigned int __dyc_exp ) ;
extern struct pattern_list *__dyc_read_ptr__comp_458pattern_list(void) ;
extern void __dyc_print_ptr__comp_458pattern_list(struct pattern_list  const  *__dyc_thistype ) ;
extern intptr_t __dyc_random_typdef_intptr_t(unsigned int __dyc_exp ) ;
extern intptr_t __dyc_read_typdef_intptr_t(void) ;
extern void __dyc_print_typdef_intptr_t(intptr_t __dyc_thistype ) ;
extern void *__dyc_random_ptr__comp_555non_note(unsigned int __dyc_exp ) ;
extern void *__dyc_read_ptr__comp_555non_note(void) ;
extern void __dyc_print_ptr__comp_555non_note(void const   * const  __dyc_thistype ) ;
extern struct hashmap_entry __dyc_random_comp_426hashmap_entry(unsigned int __dyc_exp ) ;
extern struct hashmap_entry __dyc_read_comp_426hashmap_entry(void) ;
extern void __dyc_print_comp_426hashmap_entry(struct hashmap_entry __dyc_thistype ) ;
extern struct untracked_cache_dir *__dyc_random_ptr__comp_491untracked_cache_dir(unsigned int __dyc_exp ) ;
extern struct untracked_cache_dir *__dyc_read_ptr__comp_491untracked_cache_dir(void) ;
extern void __dyc_print_ptr__comp_491untracked_cache_dir(struct untracked_cache_dir  const  *__dyc_thistype ) ;
extern struct commit_graft __dyc_random_comp_509commit_graft(unsigned int __dyc_exp ) ;
extern struct commit_graft __dyc_read_comp_509commit_graft(void) ;
extern void __dyc_print_comp_509commit_graft(struct commit_graft __dyc_thistype ) ;
extern struct worktree **__dyc_random_ptr__ptr__comp_549worktree(unsigned int __dyc_exp ) ;
extern struct worktree **__dyc_read_ptr__ptr__comp_549worktree(void) ;
extern void __dyc_print_ptr__ptr__comp_549worktree(struct worktree * const  *__dyc_thistype ) ;
extern void *__dyc_random_ptr__comp_522reflog_walk_info(unsigned int __dyc_exp ) ;
extern void *__dyc_read_ptr__comp_522reflog_walk_info(void) ;
extern void __dyc_print_ptr__comp_522reflog_walk_info(void const   * const  __dyc_thistype ) ;
extern __time_t __dyc_random_typdef___time_t(unsigned int __dyc_exp ) ;
extern __time_t __dyc_read_typdef___time_t(void) ;
extern void __dyc_print_typdef___time_t(__time_t __dyc_thistype ) ;
extern struct diff_options *__dyc_random_ptr__comp_539diff_options(unsigned int __dyc_exp ) ;
extern struct diff_options *__dyc_read_ptr__comp_539diff_options(void) ;
extern void __dyc_print_ptr__comp_539diff_options(struct diff_options  const  *__dyc_thistype ) ;
extern struct display_notes_opt *__dyc_random_ptr__comp_556display_notes_opt(unsigned int __dyc_exp ) ;
extern struct display_notes_opt *__dyc_read_ptr__comp_556display_notes_opt(void) ;
extern void __dyc_print_ptr__comp_556display_notes_opt(struct display_notes_opt  const  *__dyc_thistype ) ;
extern struct pathspec_item *__dyc_random_ptr__comp_495pathspec_item(unsigned int __dyc_exp ) ;
extern struct pathspec_item *__dyc_read_ptr__comp_495pathspec_item(void) ;
extern void __dyc_print_ptr__comp_495pathspec_item(struct pathspec_item  const  *__dyc_thistype ) ;
extern pcre2_match_data *__dyc_random_ptr__typdef_pcre2_match_data(unsigned int __dyc_exp ) ;
extern pcre2_match_data *__dyc_read_ptr__typdef_pcre2_match_data(void) ;
extern void __dyc_print_ptr__typdef_pcre2_match_data(pcre2_match_data const   *__dyc_thistype ) ;
extern struct object_context __dyc_random_comp_462object_context(unsigned int __dyc_exp ) ;
extern struct object_context __dyc_read_comp_462object_context(void) ;
extern void __dyc_print_comp_462object_context(struct object_context __dyc_thistype ) ;
extern struct pathspec *__dyc_random_ptr__comp_414pathspec(unsigned int __dyc_exp ) ;
extern struct pathspec *__dyc_read_ptr__comp_414pathspec(void) ;
extern void __dyc_print_ptr__comp_414pathspec(struct pathspec  const  *__dyc_thistype ) ;
extern struct rev_cmdline_entry *__dyc_random_ptr__comp_571rev_cmdline_entry(unsigned int __dyc_exp ) ;
extern struct rev_cmdline_entry *__dyc_read_ptr__comp_571rev_cmdline_entry(void) ;
extern void __dyc_print_ptr__comp_571rev_cmdline_entry(struct rev_cmdline_entry  const  *__dyc_thistype ) ;
extern void *__dyc_random_ptr__comp_410config_set(unsigned int __dyc_exp ) ;
extern void *__dyc_read_ptr__comp_410config_set(void) ;
extern void __dyc_print_ptr__comp_410config_set(void const   * const  __dyc_thistype ) ;
extern __pthread_list_t __dyc_random_typdef___pthread_list_t(unsigned int __dyc_exp ) ;
extern __pthread_list_t __dyc_read_typdef___pthread_list_t(void) ;
extern void __dyc_print_typdef___pthread_list_t(__pthread_list_t __dyc_thistype ) ;
extern void *__dyc_random_ptr__comp_554int_node(unsigned int __dyc_exp ) ;
extern void *__dyc_read_ptr__comp_554int_node(void) ;
extern void __dyc_print_ptr__comp_554int_node(void const   * const  __dyc_thistype ) ;
extern struct cb_node *__dyc_random_ptr__comp_496cb_node(unsigned int __dyc_exp ) ;
extern struct cb_node *__dyc_read_ptr__comp_496cb_node(void) ;
extern void __dyc_print_ptr__comp_496cb_node(struct cb_node  const  *__dyc_thistype ) ;
