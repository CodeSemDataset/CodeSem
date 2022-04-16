#line 134 "/usr/include/x86_64-linux-gnu/bits/types.h"
typedef unsigned long __dev_t;
#line 135 "/usr/include/x86_64-linux-gnu/bits/types.h"
typedef unsigned int __uid_t;
#line 136 "/usr/include/x86_64-linux-gnu/bits/types.h"
typedef unsigned int __gid_t;
#line 137 "/usr/include/x86_64-linux-gnu/bits/types.h"
typedef unsigned long __ino_t;
#line 139 "/usr/include/x86_64-linux-gnu/bits/types.h"
typedef unsigned int __mode_t;
#line 140 "/usr/include/x86_64-linux-gnu/bits/types.h"
typedef unsigned long __nlink_t;
#line 141 "/usr/include/x86_64-linux-gnu/bits/types.h"
typedef long __off_t;
#line 142 "/usr/include/x86_64-linux-gnu/bits/types.h"
typedef long __off64_t;
#line 149 "/usr/include/x86_64-linux-gnu/bits/types.h"
typedef long __time_t;
#line 164 "/usr/include/x86_64-linux-gnu/bits/types.h"
typedef long __blksize_t;
#line 169 "/usr/include/x86_64-linux-gnu/bits/types.h"
typedef long __blkcnt_t;
#line 180 "/usr/include/x86_64-linux-gnu/bits/types.h"
typedef long __ssize_t;
#line 221 "/usr/include/unistd.h"
typedef __ssize_t ssize_t;
#line 212 "/usr/lib/gcc/x86_64-linux-gnu/4.6/include/stddef.h"
typedef unsigned long size_t;
#line 246 "/usr/include/unistd.h"
typedef __off64_t off_t;
#line 45 "/usr/include/stdio.h"
struct _IO_FILE;
#line 45
struct _IO_FILE;
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
#line 120 "/usr/include/time.h"
struct timespec {
   __time_t tv_sec ;
   long tv_nsec ;
};
#line 46 "/usr/include/x86_64-linux-gnu/bits/stat.h"
struct stat {
   __dev_t st_dev ;
   __ino_t st_ino ;
   __nlink_t st_nlink ;
   __mode_t st_mode ;
   __uid_t st_uid ;
   __gid_t st_gid ;
   int __pad0 ;
   __dev_t st_rdev ;
   __off_t st_size ;
   __blksize_t st_blksize ;
   __blkcnt_t st_blocks ;
   struct timespec st_atim ;
   struct timespec st_mtim ;
   struct timespec st_ctim ;
   long __unused[3] ;
};
#line 50 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h"
typedef unsigned long pthread_t;
#line 53 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h"
union __anonunion_pthread_attr_t_12 {
   char __size[56] ;
   long __align ;
};
#line 53 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h"
typedef union __anonunion_pthread_attr_t_12 pthread_attr_t;
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
#line 106 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h"
union __anonunion_pthread_mutexattr_t_14 {
   char __size[4] ;
   int __align ;
};
#line 106 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h"
typedef union __anonunion_pthread_mutexattr_t_14 pthread_mutexattr_t;
#line 140 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h"
typedef unsigned int pthread_key_t;
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
#line 177
struct stream_filter;
#line 177
struct stream_filter;
#line 39 "./trace2.h"
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
#line 328 "/usr/include/zconf.h"
typedef unsigned char Byte;
#line 330 "/usr/include/zconf.h"
typedef unsigned int uInt;
#line 331 "/usr/include/zconf.h"
typedef unsigned long uLong;
#line 337 "/usr/include/zconf.h"
typedef Byte Bytef;
#line 346 "/usr/include/zconf.h"
typedef void *voidpf;
#line 83 "/usr/include/zlib.h"
struct internal_state;
#line 83
struct internal_state;
#line 85 "/usr/include/zlib.h"
struct z_stream_s {
   Bytef *next_in ;
   uInt avail_in ;
   uLong total_in ;
   Bytef *next_out ;
   uInt avail_out ;
   uLong total_out ;
   char *msg ;
   struct internal_state *state ;
   voidpf (*zalloc)(voidpf opaque , uInt items , uInt size ) ;
   void (*zfree)(voidpf opaque , voidpf address ) ;
   voidpf opaque ;
   int data_type ;
   uLong adler ;
   uLong reserved ;
};
#line 85 "/usr/include/zlib.h"
typedef struct z_stream_s z_stream;
#line 1476 "/usr/include/zlib.h"
struct internal_state {
   int dummy ;
};
#line 22 "./cache.h"
struct git_zstream {
   z_stream z ;
   unsigned long avail_in ;
   unsigned long avail_out ;
   unsigned long total_in ;
   unsigned long total_out ;
   unsigned char *next_in ;
   unsigned char *next_out ;
};
#line 22 "./cache.h"
typedef struct git_zstream git_zstream;
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
#line 1839 "./cache.h"
struct startup_info {
   int have_repository ;
   char *prefix ;
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
#line 6 "./csum-file.h"
struct progress;
#line 9 "./csum-file.h"
struct hashfile {
   int fd ;
   int check_fd ;
   unsigned int offset ;
   git_hash_ctx ctx ;
   off_t total ;
   struct progress *tp ;
   char *name ;
   int do_crc ;
   uint32_t crc32 ;
   size_t buffer_len ;
   unsigned char *buffer ;
   unsigned char *check_buffer ;
};
#line 7 "./pack.h"
struct repository;
#line 15 "./pack.h"
struct pack_header {
   uint32_t hdr_signature ;
   uint32_t hdr_version ;
   uint32_t hdr_entries ;
};
#line 40 "./pack.h"
struct pack_idx_option {
   unsigned int flags ;
   uint32_t version ;
   uint32_t off32_limit ;
   int anomaly_alloc ;
   int anomaly_nr ;
   uint32_t *anomaly ;
};
#line 73 "./pack.h"
struct pack_idx_entry {
   struct object_id oid ;
   uint32_t crc32 ;
   off_t offset ;
};
#line 80
struct progress;
#line 8 "./blob.h"
struct blob {
   struct object object ;
};
#line 4 "./progress.h"
struct progress;
#line 34 "./khash.h"
typedef uint32_t khint32_t;
#line 37 "./khash.h"
typedef khint32_t khint_t;
#line 333 "./khash.h"
struct __anonstruct_kh_oid_set_t_86 {
   khint_t n_buckets ;
   khint_t size ;
   khint_t n_occupied ;
   khint_t upper_bound ;
   khint32_t *flags ;
   struct object_id *keys ;
   int *vals ;
};
#line 333 "./khash.h"
typedef struct __anonstruct_kh_oid_set_t_86 kh_oid_set_t;
#line 335 "./khash.h"
struct __anonstruct_kh_oid_map_t_87 {
   khint_t n_buckets ;
   khint_t size ;
   khint_t n_occupied ;
   khint_t upper_bound ;
   khint32_t *flags ;
   struct object_id *keys ;
   void **vals ;
};
#line 335 "./khash.h"
typedef struct __anonstruct_kh_oid_map_t_87 kh_oid_map_t;
#line 21 "./oidset.h"
struct oidset {
   kh_oid_set_t set ;
};
#line 6 "./fsck.h"
enum fsck_msg_type {
    FSCK_IGNORE = 0,
    FSCK_INFO = 1,
    FSCK_FATAL = 2,
    FSCK_ERROR = 3,
    FSCK_WARN = 4
} ;
#line 79
enum fsck_msg_id {
    FSCK_MSG_NUL_IN_HEADER = 0,
    FSCK_MSG_UNTERMINATED_HEADER = 1,
    FSCK_MSG_BAD_DATE = 2,
    FSCK_MSG_BAD_DATE_OVERFLOW = 3,
    FSCK_MSG_BAD_EMAIL = 4,
    FSCK_MSG_BAD_NAME = 5,
    FSCK_MSG_BAD_OBJECT_SHA1 = 6,
    FSCK_MSG_BAD_PARENT_SHA1 = 7,
    FSCK_MSG_BAD_TAG_OBJECT = 8,
    FSCK_MSG_BAD_TIMEZONE = 9,
    FSCK_MSG_BAD_TREE = 10,
    FSCK_MSG_BAD_TREE_SHA1 = 11,
    FSCK_MSG_BAD_TYPE = 12,
    FSCK_MSG_DUPLICATE_ENTRIES = 13,
    FSCK_MSG_MISSING_AUTHOR = 14,
    FSCK_MSG_MISSING_COMMITTER = 15,
    FSCK_MSG_MISSING_EMAIL = 16,
    FSCK_MSG_MISSING_NAME_BEFORE_EMAIL = 17,
    FSCK_MSG_MISSING_OBJECT = 18,
    FSCK_MSG_MISSING_SPACE_BEFORE_DATE = 19,
    FSCK_MSG_MISSING_SPACE_BEFORE_EMAIL = 20,
    FSCK_MSG_MISSING_TAG = 21,
    FSCK_MSG_MISSING_TAG_ENTRY = 22,
    FSCK_MSG_MISSING_TREE = 23,
    FSCK_MSG_MISSING_TREE_OBJECT = 24,
    FSCK_MSG_MISSING_TYPE = 25,
    FSCK_MSG_MISSING_TYPE_ENTRY = 26,
    FSCK_MSG_MULTIPLE_AUTHORS = 27,
    FSCK_MSG_TREE_NOT_SORTED = 28,
    FSCK_MSG_UNKNOWN_TYPE = 29,
    FSCK_MSG_ZERO_PADDED_DATE = 30,
    FSCK_MSG_GITMODULES_MISSING = 31,
    FSCK_MSG_GITMODULES_BLOB = 32,
    FSCK_MSG_GITMODULES_LARGE = 33,
    FSCK_MSG_GITMODULES_NAME = 34,
    FSCK_MSG_GITMODULES_SYMLINK = 35,
    FSCK_MSG_GITMODULES_URL = 36,
    FSCK_MSG_GITMODULES_PATH = 37,
    FSCK_MSG_GITMODULES_UPDATE = 38,
    FSCK_MSG_BAD_FILEMODE = 39,
    FSCK_MSG_EMPTY_NAME = 40,
    FSCK_MSG_FULL_PATHNAME = 41,
    FSCK_MSG_HAS_DOT = 42,
    FSCK_MSG_HAS_DOTDOT = 43,
    FSCK_MSG_HAS_DOTGIT = 44,
    FSCK_MSG_NULL_SHA1 = 45,
    FSCK_MSG_ZERO_PADDED_FILEMODE = 46,
    FSCK_MSG_NUL_IN_COMMIT = 47,
    FSCK_MSG_GITMODULES_PARSE = 48,
    FSCK_MSG_GITIGNORE_SYMLINK = 49,
    FSCK_MSG_GITATTRIBUTES_SYMLINK = 50,
    FSCK_MSG_MAILMAP_SYMLINK = 51,
    FSCK_MSG_BAD_TAG_NAME = 52,
    FSCK_MSG_MISSING_TAGGER_ENTRY = 53,
    FSCK_MSG_EXTRA_HEADER_ENTRY = 54,
    FSCK_MSG_MAX = 55
} ;
#line 85
struct fsck_options;
#line 85
struct fsck_options;
#line 86
struct object;
#line 124 "./fsck.h"
struct fsck_options {
   int (*walk)(struct object *obj , enum object_type object_type , void *data ,
               struct fsck_options *options ) ;
   int (*error_func)(struct fsck_options *o , struct object_id  const  *oid ,
                     enum object_type object_type ,
                     enum fsck_msg_type msg_type , enum fsck_msg_id msg_id ,
                     char const   *message ) ;
   unsigned int strict : 1 ;
   enum fsck_msg_type *msg_type ;
   struct oidset skiplist ;
   struct oidset gitmodules_found ;
   struct oidset gitmodules_done ;
   kh_oid_map_t *object_names ;
};
#line 9 "./streaming.h"
struct git_istream;
#line 9
struct git_istream;
#line 8 "./packfile.h"
struct packed_git;
#line 9
struct object_info;
#line 9
struct object_info;
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
struct __anonstruct_kh_odb_path_map_t_103 {
   khint_t n_buckets ;
   khint_t size ;
   khint_t n_occupied ;
   khint_t upper_bound ;
   khint32_t *flags ;
   char **keys ;
   struct object_directory **vals ;
};
#line 36 "./object-store.h"
typedef struct __anonstruct_kh_odb_path_map_t_103 kh_odb_path_map_t;
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
struct __anonstruct_kept_pack_cache_104 {
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
   struct __anonstruct_kept_pack_cache_104 kept_pack_cache ;
   struct hashmap pack_map ;
   unsigned long approximate_object_count ;
   unsigned int approximate_object_count_valid : 1 ;
   unsigned int packed_git_initialized : 1 ;
};
#line 336
enum __anonenum_whence_105 {
    OI_CACHED = 0,
    OI_LOOSE = 1,
    OI_PACKED = 2,
    OI_DBCACHED = 3
} ;
#line 336 "./object-store.h"
struct __anonstruct_packed_107 {
   struct packed_git *pack ;
   off_t offset ;
   unsigned int is_delta ;
};
#line 336 "./object-store.h"
union __anonunion_u_106 {
   struct __anonstruct_packed_107 packed ;
};
#line 336 "./object-store.h"
struct object_info {
   enum object_type *typep ;
   unsigned long *sizep ;
   off_t *disk_sizep ;
   struct object_id *delta_base_oid ;
   struct strbuf *type_name ;
   void **contentp ;
   enum __anonenum_whence_105 whence ;
   union __anonunion_u_106 u ;
};
#line 6 "./promisor-remote.h"
struct object_id;
#line 22 "builtin/index-pack.c"
struct object_entry {
   struct pack_idx_entry idx ;
   unsigned long size ;
   unsigned char hdr_size ;
   signed char type ;
   signed char real_type ;
};
#line 30 "builtin/index-pack.c"
struct object_stat {
   unsigned int delta_depth ;
   int base_object_no ;
};
#line 35 "builtin/index-pack.c"
struct base_data {
   struct base_data *base ;
   struct object_entry *obj ;
   int ref_first ;
   int ref_last ;
   int ofs_first ;
   int ofs_last ;
   int retain_data ;
   int children_remaining ;
   struct list_head list ;
   void *data ;
   unsigned long size ;
};
#line 89 "builtin/index-pack.c"
struct thread_local {
   pthread_t thread ;
   int pack_fd ;
};
#line 98 "builtin/index-pack.c"
struct ofs_delta_entry {
   off_t offset ;
   int obj_no ;
};
#line 103 "builtin/index-pack.c"
struct ref_delta_entry {
   struct object_id oid ;
   int obj_no ;
};
#line 731 "builtin/index-pack.c"
struct compare_data {
   struct object_entry *entry ;
   struct git_istream *st ;
   unsigned char *buf ;
   unsigned long buf_size ;
};
extern struct hashfile __dyc_random_comp_502hashfile(unsigned int __dyc_exp ) ;
extern struct hashfile __dyc_read_comp_502hashfile(void) ;
extern void __dyc_print_comp_502hashfile(struct hashfile __dyc_thistype ) ;
extern time_t __dyc_random_typdef_time_t(unsigned int __dyc_exp ) ;
extern time_t __dyc_read_typdef_time_t(void) ;
extern void __dyc_print_typdef_time_t(time_t __dyc_thistype ) ;
extern struct untracked_cache_dir __dyc_random_comp_534untracked_cache_dir(unsigned int __dyc_exp ) ;
extern struct untracked_cache_dir __dyc_read_comp_534untracked_cache_dir(void) ;
extern void __dyc_print_comp_534untracked_cache_dir(struct untracked_cache_dir __dyc_thistype ) ;
extern void *__dyc_random_ptr__comp_544revindex_entry(unsigned int __dyc_exp ) ;
extern void *__dyc_read_ptr__comp_544revindex_entry(void) ;
extern void __dyc_print_ptr__comp_544revindex_entry(void const   * const  __dyc_thistype ) ;
extern struct mem_pool *__dyc_random_ptr__comp_445mem_pool(unsigned int __dyc_exp ) ;
extern struct mem_pool *__dyc_read_ptr__comp_445mem_pool(void) ;
extern void __dyc_print_ptr__comp_445mem_pool(struct mem_pool  const  *__dyc_thistype ) ;
extern struct list_head __dyc_random_comp_429list_head(unsigned int __dyc_exp ) ;
extern struct list_head __dyc_read_comp_429list_head(void) ;
extern void __dyc_print_comp_429list_head(struct list_head __dyc_thistype ) ;
extern _IO_FILE *__dyc_random_ptr__typdef__IO_FILE(unsigned int __dyc_exp ) ;
extern _IO_FILE *__dyc_read_ptr__typdef__IO_FILE(void) ;
extern void __dyc_print_ptr__typdef__IO_FILE(_IO_FILE const   *__dyc_thistype ) ;
extern struct stat_data *__dyc_random_ptr__comp_452stat_data(unsigned int __dyc_exp ) ;
extern struct stat_data *__dyc_read_ptr__comp_452stat_data(void) ;
extern void __dyc_print_ptr__comp_452stat_data(struct stat_data  const  *__dyc_thistype ) ;
extern struct repository *__dyc_random_ptr__comp_408repository(unsigned int __dyc_exp ) ;
extern struct repository *__dyc_read_ptr__comp_408repository(void) ;
extern void __dyc_print_ptr__comp_408repository(struct repository  const  *__dyc_thistype ) ;
extern struct strbuf __dyc_random_comp_365strbuf(unsigned int __dyc_exp ) ;
extern struct strbuf __dyc_read_comp_365strbuf(void) ;
extern void __dyc_print_comp_365strbuf(struct strbuf __dyc_thistype ) ;
extern struct raw_object_store *__dyc_random_ptr__comp_415raw_object_store(unsigned int __dyc_exp ) ;
extern struct raw_object_store *__dyc_read_ptr__comp_415raw_object_store(void) ;
extern void __dyc_print_ptr__comp_415raw_object_store(struct raw_object_store  const  *__dyc_thistype ) ;
extern struct configset_list __dyc_random_comp_499configset_list(unsigned int __dyc_exp ) ;
extern struct configset_list __dyc_read_comp_499configset_list(void) ;
extern void __dyc_print_comp_499configset_list(struct configset_list __dyc_thistype ) ;
extern Bytef __dyc_random_typdef_Bytef(unsigned int __dyc_exp ) ;
extern Bytef __dyc_read_typdef_Bytef(void) ;
extern void __dyc_print_typdef_Bytef(Bytef __dyc_thistype ) ;
extern struct untracked_cache_dir *__dyc_random_ptr__comp_534untracked_cache_dir(unsigned int __dyc_exp ) ;
extern struct untracked_cache_dir *__dyc_read_ptr__comp_534untracked_cache_dir(void) ;
extern void __dyc_print_ptr__comp_534untracked_cache_dir(struct untracked_cache_dir  const  *__dyc_thistype ) ;
extern struct object_info __dyc_random_comp_526object_info(unsigned int __dyc_exp ) ;
extern struct object_info __dyc_read_comp_526object_info(void) ;
extern void __dyc_print_comp_526object_info(struct object_info __dyc_thistype ) ;
extern void *__dyc_random_ptr__comp_473buffer_slab(unsigned int __dyc_exp ) ;
extern void *__dyc_read_ptr__comp_473buffer_slab(void) ;
extern void __dyc_print_ptr__comp_473buffer_slab(void const   * const  __dyc_thistype ) ;
extern struct oid_stat __dyc_random_comp_536oid_stat(unsigned int __dyc_exp ) ;
extern struct oid_stat __dyc_read_comp_536oid_stat(void) ;
extern void __dyc_print_comp_536oid_stat(struct oid_stat __dyc_thistype ) ;
extern int *__dyc_random_ptr__int(unsigned int __dyc_exp ) ;
extern int *__dyc_read_ptr__int(void) ;
extern void __dyc_print_ptr__int(int const   *__dyc_thistype ) ;
extern struct object __dyc_random_comp_464object(unsigned int __dyc_exp ) ;
extern struct object __dyc_read_comp_464object(void) ;
extern void __dyc_print_comp_464object(struct object __dyc_thistype ) ;
extern voidpf __dyc_random_typdef_voidpf(unsigned int __dyc_exp ) ;
extern voidpf __dyc_read_typdef_voidpf(void) ;
extern void __dyc_print_typdef_voidpf(voidpf __dyc_thistype ) ;
extern struct mp_block *__dyc_random_ptr__comp_444mp_block(unsigned int __dyc_exp ) ;
extern struct mp_block *__dyc_read_ptr__comp_444mp_block(void) ;
extern void __dyc_print_ptr__comp_444mp_block(struct mp_block  const  *__dyc_thistype ) ;
extern size_t __dyc_random_typdef_size_t(unsigned int __dyc_exp ) ;
extern size_t __dyc_read_typdef_size_t(void) ;
extern void __dyc_print_typdef_size_t(size_t __dyc_thistype ) ;
extern pthread_mutex_t *__dyc_random_ptr__typdef_pthread_mutex_t(unsigned int __dyc_exp ) ;
extern pthread_mutex_t *__dyc_read_ptr__typdef_pthread_mutex_t(void) ;
extern void __dyc_print_ptr__typdef_pthread_mutex_t(pthread_mutex_t const   *__dyc_thistype ) ;
extern git_hash_ctx __dyc_random_typdef_git_hash_ctx(unsigned int __dyc_exp ) ;
extern git_hash_ctx __dyc_read_typdef_git_hash_ctx(void) ;
extern void __dyc_print_typdef_git_hash_ctx(git_hash_ctx __dyc_thistype ) ;
extern git_zstream *__dyc_random_ptr__typdef_git_zstream(unsigned int __dyc_exp ) ;
extern git_zstream *__dyc_read_ptr__typdef_git_zstream(void) ;
extern void __dyc_print_ptr__typdef_git_zstream(git_zstream const   *__dyc_thistype ) ;
extern struct stat_validity *__dyc_random_ptr__comp_472stat_validity(unsigned int __dyc_exp ) ;
extern struct stat_validity *__dyc_read_ptr__comp_472stat_validity(void) ;
extern void __dyc_print_ptr__comp_472stat_validity(struct stat_validity  const  *__dyc_thistype ) ;
extern SHA1_CTX __dyc_random_typdef_SHA1_CTX(unsigned int __dyc_exp ) ;
extern SHA1_CTX __dyc_read_typdef_SHA1_CTX(void) ;
extern void __dyc_print_typdef_SHA1_CTX(SHA1_CTX __dyc_thistype ) ;
extern struct _IO_marker __dyc_random_comp_8_IO_marker(unsigned int __dyc_exp ) ;
extern struct _IO_marker __dyc_read_comp_8_IO_marker(void) ;
extern void __dyc_print_comp_8_IO_marker(struct _IO_marker __dyc_thistype ) ;
extern void *__dyc_random_ptr__comp_460ewah_bitmap(unsigned int __dyc_exp ) ;
extern void *__dyc_read_ptr__comp_460ewah_bitmap(void) ;
extern void __dyc_print_ptr__comp_460ewah_bitmap(void const   * const  __dyc_thistype ) ;
extern union __anonunion_pthread_attr_t_12 __dyc_random_comp_19__anonunion_pthread_attr_t_12(unsigned int __dyc_exp ) ;
extern union __anonunion_pthread_attr_t_12 __dyc_read_comp_19__anonunion_pthread_attr_t_12(void) ;
extern void __dyc_print_comp_19__anonunion_pthread_attr_t_12(union __anonunion_pthread_attr_t_12 __dyc_thistype ) ;
extern struct object_info *__dyc_random_ptr__comp_526object_info(unsigned int __dyc_exp ) ;
extern struct object_info *__dyc_read_ptr__comp_526object_info(void) ;
extern void __dyc_print_ptr__comp_526object_info(struct object_info  const  *__dyc_thistype ) ;
extern struct blk_SHA256_CTX __dyc_random_comp_424blk_SHA256_CTX(unsigned int __dyc_exp ) ;
extern struct blk_SHA256_CTX __dyc_read_comp_424blk_SHA256_CTX(void) ;
extern void __dyc_print_comp_424blk_SHA256_CTX(struct blk_SHA256_CTX __dyc_thistype ) ;
extern enum object_type *__dyc_random_ptr__enum_object_type(unsigned int __dyc_exp ) ;
extern enum object_type *__dyc_read_ptr__enum_object_type(void) ;
extern void __dyc_print_ptr__enum_object_type(enum object_type  const  *__dyc_thistype ) ;
extern struct internal_state __dyc_random_comp_446internal_state(unsigned int __dyc_exp ) ;
extern struct internal_state __dyc_read_comp_446internal_state(void) ;
extern void __dyc_print_comp_446internal_state(struct internal_state __dyc_thistype ) ;
extern git_hash_ctx *__dyc_random_ptr__typdef_git_hash_ctx(unsigned int __dyc_exp ) ;
extern git_hash_ctx *__dyc_read_ptr__typdef_git_hash_ctx(void) ;
extern void __dyc_print_ptr__typdef_git_hash_ctx(git_hash_ctx const   *__dyc_thistype ) ;
extern struct cb_tree __dyc_random_comp_540cb_tree(unsigned int __dyc_exp ) ;
extern struct cb_tree __dyc_read_comp_540cb_tree(void) ;
extern void __dyc_print_comp_540cb_tree(struct cb_tree __dyc_thistype ) ;
extern Byte __dyc_random_typdef_Byte(unsigned int __dyc_exp ) ;
extern Byte __dyc_read_typdef_Byte(void) ;
extern void __dyc_print_typdef_Byte(Byte __dyc_thistype ) ;
extern void *__dyc_random_ptr__comp_545commit_graph(unsigned int __dyc_exp ) ;
extern void *__dyc_read_ptr__comp_545commit_graph(void) ;
extern void __dyc_print_ptr__comp_545commit_graph(void const   * const  __dyc_thistype ) ;
extern struct z_stream_s __dyc_random_comp_447z_stream_s(unsigned int __dyc_exp ) ;
extern struct z_stream_s __dyc_read_comp_447z_stream_s(void) ;
extern void __dyc_print_comp_447z_stream_s(struct z_stream_s __dyc_thistype ) ;
extern __nlink_t __dyc_random_typdef___nlink_t(unsigned int __dyc_exp ) ;
extern __nlink_t __dyc_read_typdef___nlink_t(void) ;
extern void __dyc_print_typdef___nlink_t(__nlink_t __dyc_thistype ) ;
extern struct hashfile *__dyc_random_ptr__comp_502hashfile(unsigned int __dyc_exp ) ;
extern struct hashfile *__dyc_read_ptr__comp_502hashfile(void) ;
extern void __dyc_print_ptr__comp_502hashfile(struct hashfile  const  *__dyc_thistype ) ;
extern struct index_state __dyc_random_comp_412index_state(unsigned int __dyc_exp ) ;
extern struct index_state __dyc_read_comp_412index_state(void) ;
extern void __dyc_print_comp_412index_state(struct index_state __dyc_thistype ) ;
extern struct __pthread_mutex_s __dyc_random_comp_22__pthread_mutex_s(unsigned int __dyc_exp ) ;
extern struct __pthread_mutex_s __dyc_read_comp_22__pthread_mutex_s(void) ;
extern void __dyc_print_comp_22__pthread_mutex_s(struct __pthread_mutex_s __dyc_thistype ) ;
extern __uid_t __dyc_random_typdef___uid_t(unsigned int __dyc_exp ) ;
extern __uid_t __dyc_read_typdef___uid_t(void) ;
extern void __dyc_print_typdef___uid_t(__uid_t __dyc_thistype ) ;
extern struct __pthread_internal_list __dyc_random_comp_20__pthread_internal_list(unsigned int __dyc_exp ) ;
extern struct __pthread_internal_list __dyc_read_comp_20__pthread_internal_list(void) ;
extern void __dyc_print_comp_20__pthread_internal_list(struct __pthread_internal_list __dyc_thistype ) ;
extern struct commit_graft __dyc_random_comp_475commit_graft(unsigned int __dyc_exp ) ;
extern struct commit_graft __dyc_read_comp_475commit_graft(void) ;
extern void __dyc_print_comp_475commit_graft(struct commit_graft __dyc_thistype ) ;
extern uintmax_t __dyc_random_typdef_uintmax_t(unsigned int __dyc_exp ) ;
extern uintmax_t __dyc_read_typdef_uintmax_t(void) ;
extern void __dyc_print_typdef_uintmax_t(uintmax_t __dyc_thistype ) ;
extern __pthread_list_t __dyc_random_typdef___pthread_list_t(unsigned int __dyc_exp ) ;
extern __pthread_list_t __dyc_read_typdef___pthread_list_t(void) ;
extern void __dyc_print_typdef___pthread_list_t(__pthread_list_t __dyc_thistype ) ;
extern struct configset_list_item __dyc_random_comp_498configset_list_item(unsigned int __dyc_exp ) ;
extern struct configset_list_item __dyc_read_comp_498configset_list_item(void) ;
extern void __dyc_print_comp_498configset_list_item(struct configset_list_item __dyc_thistype ) ;
extern __blkcnt_t __dyc_random_typdef___blkcnt_t(unsigned int __dyc_exp ) ;
extern __blkcnt_t __dyc_read_typdef___blkcnt_t(void) ;
extern void __dyc_print_typdef___blkcnt_t(__blkcnt_t __dyc_thistype ) ;
extern struct startup_info __dyc_random_comp_470startup_info(unsigned int __dyc_exp ) ;
extern struct startup_info __dyc_read_comp_470startup_info(void) ;
extern void __dyc_print_comp_470startup_info(struct startup_info __dyc_thistype ) ;
extern struct fsck_options __dyc_random_comp_515fsck_options(unsigned int __dyc_exp ) ;
extern struct fsck_options __dyc_read_comp_515fsck_options(void) ;
extern void __dyc_print_comp_515fsck_options(struct fsck_options __dyc_thistype ) ;
extern struct untracked_cache __dyc_random_comp_456untracked_cache(unsigned int __dyc_exp ) ;
extern struct untracked_cache __dyc_read_comp_456untracked_cache(void) ;
extern void __dyc_print_comp_456untracked_cache(struct untracked_cache __dyc_thistype ) ;
extern Bytef *__dyc_random_ptr__typdef_Bytef(unsigned int __dyc_exp ) ;
extern Bytef *__dyc_read_ptr__typdef_Bytef(void) ;
extern void __dyc_print_ptr__typdef_Bytef(Bytef const   *__dyc_thistype ) ;
extern struct index_state *__dyc_random_ptr__comp_412index_state(unsigned int __dyc_exp ) ;
extern struct index_state *__dyc_read_ptr__comp_412index_state(void) ;
extern void __dyc_print_ptr__comp_412index_state(struct index_state  const  *__dyc_thistype ) ;
extern struct compare_data __dyc_random_comp_556compare_data(unsigned int __dyc_exp ) ;
extern struct compare_data __dyc_read_comp_556compare_data(void) ;
extern void __dyc_print_comp_556compare_data(struct compare_data __dyc_thistype ) ;
extern struct untracked_cache_dir **__dyc_random_ptr__ptr__comp_534untracked_cache_dir(unsigned int __dyc_exp ) ;
extern struct untracked_cache_dir **__dyc_read_ptr__ptr__comp_534untracked_cache_dir(void) ;
extern void __dyc_print_ptr__ptr__comp_534untracked_cache_dir(struct untracked_cache_dir * const  *__dyc_thistype ) ;
extern struct git_zstream __dyc_random_comp_449git_zstream(unsigned int __dyc_exp ) ;
extern struct git_zstream __dyc_read_comp_449git_zstream(void) ;
extern void __dyc_print_comp_449git_zstream(struct git_zstream __dyc_thistype ) ;
extern pthread_mutexattr_t *__dyc_random_ptr__typdef_pthread_mutexattr_t(unsigned int __dyc_exp ) ;
extern pthread_mutexattr_t *__dyc_read_ptr__typdef_pthread_mutexattr_t(void) ;
extern void __dyc_print_ptr__typdef_pthread_mutexattr_t(pthread_mutexattr_t const   *__dyc_thistype ) ;
extern struct object_id *__dyc_random_ptr__comp_406object_id(unsigned int __dyc_exp ) ;
extern struct object_id *__dyc_read_ptr__comp_406object_id(void) ;
extern void __dyc_print_ptr__comp_406object_id(struct object_id  const  *__dyc_thistype ) ;
extern unsigned long *__dyc_random_ptr__long(unsigned int __dyc_exp ) ;
extern unsigned long *__dyc_read_ptr__long(void) ;
extern void __dyc_print_ptr__long(unsigned long const   *__dyc_thistype ) ;
extern struct string_list __dyc_random_comp_405string_list(unsigned int __dyc_exp ) ;
extern struct string_list __dyc_read_comp_405string_list(void) ;
extern void __dyc_print_comp_405string_list(struct string_list __dyc_thistype ) ;
extern struct git_hash_algo *__dyc_random_ptr__comp_411git_hash_algo(unsigned int __dyc_exp ) ;
extern struct git_hash_algo *__dyc_read_ptr__comp_411git_hash_algo(void) ;
extern void __dyc_print_ptr__comp_411git_hash_algo(struct git_hash_algo  const  *__dyc_thistype ) ;
extern struct pack_idx_entry *__dyc_random_ptr__comp_507pack_idx_entry(unsigned int __dyc_exp ) ;
extern struct pack_idx_entry *__dyc_read_ptr__comp_507pack_idx_entry(void) ;
extern void __dyc_print_ptr__comp_507pack_idx_entry(struct pack_idx_entry  const  *__dyc_thistype ) ;
extern void *__dyc_random_ptr__comp_417promisor_remote_config(unsigned int __dyc_exp ) ;
extern void *__dyc_read_ptr__comp_417promisor_remote_config(void) ;
extern void __dyc_print_ptr__comp_417promisor_remote_config(void const   * const  __dyc_thistype ) ;
extern __off_t __dyc_random_typdef___off_t(unsigned int __dyc_exp ) ;
extern __off_t __dyc_read_typdef___off_t(void) ;
extern void __dyc_print_typdef___off_t(__off_t __dyc_thistype ) ;
extern struct object_directory **__dyc_random_ptr__ptr__comp_542object_directory(unsigned int __dyc_exp ) ;
extern struct object_directory **__dyc_read_ptr__ptr__comp_542object_directory(void) ;
extern void __dyc_print_ptr__ptr__comp_542object_directory(struct object_directory * const  *__dyc_thistype ) ;
extern struct configset_list_item *__dyc_random_ptr__comp_498configset_list_item(unsigned int __dyc_exp ) ;
extern struct configset_list_item *__dyc_read_ptr__comp_498configset_list_item(void) ;
extern void __dyc_print_ptr__comp_498configset_list_item(struct configset_list_item  const  *__dyc_thistype ) ;
extern struct config_set __dyc_random_comp_410config_set(unsigned int __dyc_exp ) ;
extern struct config_set __dyc_read_comp_410config_set(void) ;
extern void __dyc_print_comp_410config_set(struct config_set __dyc_thistype ) ;
extern struct _IO_marker *__dyc_random_ptr__comp_8_IO_marker(unsigned int __dyc_exp ) ;
extern struct _IO_marker *__dyc_read_ptr__comp_8_IO_marker(void) ;
extern void __dyc_print_ptr__comp_8_IO_marker(struct _IO_marker  const  *__dyc_thistype ) ;
extern kh_oid_map_t __dyc_random_typdef_kh_oid_map_t(unsigned int __dyc_exp ) ;
extern kh_oid_map_t __dyc_read_typdef_kh_oid_map_t(void) ;
extern void __dyc_print_typdef_kh_oid_map_t(kh_oid_map_t __dyc_thistype ) ;
extern struct untracked_cache *__dyc_random_ptr__comp_456untracked_cache(unsigned int __dyc_exp ) ;
extern struct untracked_cache *__dyc_read_ptr__comp_456untracked_cache(void) ;
extern void __dyc_print_ptr__comp_456untracked_cache(struct untracked_cache  const  *__dyc_thistype ) ;
extern void *__dyc_random_ptr__fun_name_is_not_here(unsigned int __dyc_exp ) ;
extern void *__dyc_read_ptr__fun_name_is_not_here(void) ;
extern void __dyc_print_ptr__fun_name_is_not_here(void const   * const  __dyc_thistype ) ;
extern pthread_t __dyc_random_typdef_pthread_t(unsigned int __dyc_exp ) ;
extern pthread_t __dyc_read_typdef_pthread_t(void) ;
extern void __dyc_print_typdef_pthread_t(pthread_t __dyc_thistype ) ;
extern struct oid_array __dyc_random_comp_443oid_array(unsigned int __dyc_exp ) ;
extern struct oid_array __dyc_read_comp_443oid_array(void) ;
extern void __dyc_print_comp_443oid_array(struct oid_array __dyc_thistype ) ;
extern struct __anonstruct_kh_oid_set_t_86 __dyc_random_comp_510__anonstruct_kh_oid_set_t_86(unsigned int __dyc_exp ) ;
extern struct __anonstruct_kh_oid_set_t_86 __dyc_read_comp_510__anonstruct_kh_oid_set_t_86(void) ;
extern void __dyc_print_comp_510__anonstruct_kh_oid_set_t_86(struct __anonstruct_kh_oid_set_t_86 __dyc_thistype ) ;
extern void *__dyc_random_ptr__comp_457progress(unsigned int __dyc_exp ) ;
extern void *__dyc_read_ptr__comp_457progress(void) ;
extern void __dyc_print_ptr__comp_457progress(void const   * const  __dyc_thistype ) ;
extern __mode_t __dyc_random_typdef___mode_t(unsigned int __dyc_exp ) ;
extern __mode_t __dyc_read_typdef___mode_t(void) ;
extern void __dyc_print_typdef___mode_t(__mode_t __dyc_thistype ) ;
extern struct base_data __dyc_random_comp_552base_data(unsigned int __dyc_exp ) ;
extern struct base_data __dyc_read_comp_552base_data(void) ;
extern void __dyc_print_comp_552base_data(struct base_data __dyc_thistype ) ;
extern struct config_set_element *__dyc_random_ptr__comp_497config_set_element(unsigned int __dyc_exp ) ;
extern struct config_set_element *__dyc_read_ptr__comp_497config_set_element(void) ;
extern void __dyc_print_ptr__comp_497config_set_element(struct config_set_element  const  *__dyc_thistype ) ;
extern struct pattern_list __dyc_random_comp_458pattern_list(unsigned int __dyc_exp ) ;
extern struct pattern_list __dyc_read_comp_458pattern_list(void) ;
extern void __dyc_print_comp_458pattern_list(struct pattern_list __dyc_thistype ) ;
extern intmax_t __dyc_random_typdef_intmax_t(unsigned int __dyc_exp ) ;
extern intmax_t __dyc_read_typdef_intmax_t(void) ;
extern void __dyc_print_typdef_intmax_t(intmax_t __dyc_thistype ) ;
extern struct string_list *__dyc_random_ptr__comp_405string_list(unsigned int __dyc_exp ) ;
extern struct string_list *__dyc_read_ptr__comp_405string_list(void) ;
extern void __dyc_print_ptr__comp_405string_list(struct string_list  const  *__dyc_thistype ) ;
extern void *__dyc_random_ptr__comp_420ref_store(unsigned int __dyc_exp ) ;
extern void *__dyc_read_ptr__comp_420ref_store(void) ;
extern void __dyc_print_ptr__comp_420ref_store(void const   * const  __dyc_thistype ) ;
extern uint8_t *__dyc_random_ptr__typdef_uint8_t(unsigned int __dyc_exp ) ;
extern uint8_t *__dyc_read_ptr__typdef_uint8_t(void) ;
extern void __dyc_print_ptr__typdef_uint8_t(uint8_t const   *__dyc_thistype ) ;
extern struct pack_idx_entry **__dyc_random_ptr__ptr__comp_507pack_idx_entry(unsigned int __dyc_exp ) ;
extern struct pack_idx_entry **__dyc_read_ptr__ptr__comp_507pack_idx_entry(void) ;
extern void __dyc_print_ptr__ptr__comp_507pack_idx_entry(struct pack_idx_entry * const  *__dyc_thistype ) ;
extern struct object_entry __dyc_random_comp_550object_entry(unsigned int __dyc_exp ) ;
extern struct object_entry __dyc_read_comp_550object_entry(void) ;
extern void __dyc_print_comp_550object_entry(struct object_entry __dyc_thistype ) ;
extern struct repository __dyc_random_comp_408repository(unsigned int __dyc_exp ) ;
extern struct repository __dyc_read_comp_408repository(void) ;
extern void __dyc_print_comp_408repository(struct repository __dyc_thistype ) ;
extern __gid_t __dyc_random_typdef___gid_t(unsigned int __dyc_exp ) ;
extern __gid_t __dyc_read_typdef___gid_t(void) ;
extern void __dyc_print_typdef___gid_t(__gid_t __dyc_thistype ) ;
extern union __anonunion_pthread_mutex_t_13 __dyc_random_comp_21__anonunion_pthread_mutex_t_13(unsigned int __dyc_exp ) ;
extern union __anonunion_pthread_mutex_t_13 __dyc_read_comp_21__anonunion_pthread_mutex_t_13(void) ;
extern void __dyc_print_comp_21__anonunion_pthread_mutex_t_13(union __anonunion_pthread_mutex_t_13 __dyc_thistype ) ;
extern void *__dyc_random_ptr__comp_416submodule_cache(unsigned int __dyc_exp ) ;
extern void *__dyc_read_ptr__comp_416submodule_cache(void) ;
extern void __dyc_print_ptr__comp_416submodule_cache(void const   * const  __dyc_thistype ) ;
extern void *__dyc_random_ptr__void(unsigned int __dyc_exp ) ;
extern void *__dyc_read_ptr__void(void) ;
extern void __dyc_print_ptr__void(void const   * const  __dyc_thistype ) ;
extern kh_oid_map_t *__dyc_random_ptr__typdef_kh_oid_map_t(unsigned int __dyc_exp ) ;
extern kh_oid_map_t *__dyc_read_ptr__typdef_kh_oid_map_t(void) ;
extern void __dyc_print_ptr__typdef_kh_oid_map_t(kh_oid_map_t const   *__dyc_thistype ) ;
extern khint32_t __dyc_random_typdef_khint32_t(unsigned int __dyc_exp ) ;
extern khint32_t __dyc_read_typdef_khint32_t(void) ;
extern void __dyc_print_typdef_khint32_t(khint32_t __dyc_thistype ) ;
extern __dev_t __dyc_random_typdef___dev_t(unsigned int __dyc_exp ) ;
extern __dev_t __dyc_read_typdef___dev_t(void) ;
extern void __dyc_print_typdef___dev_t(__dev_t __dyc_thistype ) ;
extern struct pack_window __dyc_random_comp_468pack_window(unsigned int __dyc_exp ) ;
extern struct pack_window __dyc_read_comp_468pack_window(void) ;
extern void __dyc_print_comp_468pack_window(struct pack_window __dyc_thistype ) ;
extern struct string_list_item __dyc_random_comp_432string_list_item(unsigned int __dyc_exp ) ;
extern struct string_list_item __dyc_read_comp_432string_list_item(void) ;
extern void __dyc_print_comp_432string_list_item(struct string_list_item __dyc_thistype ) ;
extern pthread_attr_t __dyc_random_typdef_pthread_attr_t(unsigned int __dyc_exp ) ;
extern pthread_attr_t __dyc_read_typdef_pthread_attr_t(void) ;
extern void __dyc_print_typdef_pthread_attr_t(pthread_attr_t __dyc_thistype ) ;
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
extern git_zstream __dyc_random_typdef_git_zstream(unsigned int __dyc_exp ) ;
extern git_zstream __dyc_read_typdef_git_zstream(void) ;
extern void __dyc_print_typdef_git_zstream(git_zstream __dyc_thistype ) ;
extern blk_SHA256_CTX __dyc_random_typdef_blk_SHA256_CTX(unsigned int __dyc_exp ) ;
extern blk_SHA256_CTX __dyc_read_typdef_blk_SHA256_CTX(void) ;
extern void __dyc_print_typdef_blk_SHA256_CTX(blk_SHA256_CTX __dyc_thistype ) ;
extern struct startup_info *__dyc_random_ptr__comp_470startup_info(unsigned int __dyc_exp ) ;
extern struct startup_info *__dyc_read_ptr__comp_470startup_info(void) ;
extern void __dyc_print_ptr__comp_470startup_info(struct startup_info  const  *__dyc_thistype ) ;
extern struct cb_node __dyc_random_comp_539cb_node(unsigned int __dyc_exp ) ;
extern struct cb_node __dyc_read_comp_539cb_node(void) ;
extern void __dyc_print_comp_539cb_node(struct cb_node __dyc_thistype ) ;
extern struct fsck_options *__dyc_random_ptr__comp_515fsck_options(unsigned int __dyc_exp ) ;
extern struct fsck_options *__dyc_read_ptr__comp_515fsck_options(void) ;
extern void __dyc_print_ptr__comp_515fsck_options(struct fsck_options  const  *__dyc_thistype ) ;
extern struct compare_data *__dyc_random_ptr__comp_556compare_data(unsigned int __dyc_exp ) ;
extern struct compare_data *__dyc_read_ptr__comp_556compare_data(void) ;
extern void __dyc_print_ptr__comp_556compare_data(struct compare_data  const  *__dyc_thistype ) ;
extern struct blob __dyc_random_comp_508blob(unsigned int __dyc_exp ) ;
extern struct blob __dyc_read_comp_508blob(void) ;
extern void __dyc_print_comp_508blob(struct blob __dyc_thistype ) ;
extern struct pack_window *__dyc_random_ptr__comp_468pack_window(unsigned int __dyc_exp ) ;
extern struct pack_window *__dyc_read_ptr__comp_468pack_window(void) ;
extern void __dyc_print_ptr__comp_468pack_window(struct pack_window  const  *__dyc_thistype ) ;
extern struct cache_time __dyc_random_comp_451cache_time(unsigned int __dyc_exp ) ;
extern struct cache_time __dyc_read_comp_451cache_time(void) ;
extern void __dyc_print_comp_451cache_time(struct cache_time __dyc_thistype ) ;
extern struct commit *__dyc_random_ptr__comp_482commit(unsigned int __dyc_exp ) ;
extern struct commit *__dyc_read_ptr__comp_482commit(void) ;
extern void __dyc_print_ptr__comp_482commit(struct commit  const  *__dyc_thistype ) ;
extern __time_t __dyc_random_typdef___time_t(unsigned int __dyc_exp ) ;
extern __time_t __dyc_read_typdef___time_t(void) ;
extern void __dyc_print_typdef___time_t(__time_t __dyc_thistype ) ;
extern struct stat_data __dyc_random_comp_452stat_data(unsigned int __dyc_exp ) ;
extern struct stat_data __dyc_read_comp_452stat_data(void) ;
extern void __dyc_print_comp_452stat_data(struct stat_data __dyc_thistype ) ;
extern struct pack_header __dyc_random_comp_504pack_header(unsigned int __dyc_exp ) ;
extern struct pack_header __dyc_read_comp_504pack_header(void) ;
extern void __dyc_print_comp_504pack_header(struct pack_header __dyc_thistype ) ;
extern struct __anonstruct_packed_107 __dyc_random_comp_548__anonstruct_packed_107(unsigned int __dyc_exp ) ;
extern struct __anonstruct_packed_107 __dyc_read_comp_548__anonstruct_packed_107(void) ;
extern void __dyc_print_comp_548__anonstruct_packed_107(struct __anonstruct_packed_107 __dyc_thistype ) ;
extern struct pack_idx_option __dyc_random_comp_505pack_idx_option(unsigned int __dyc_exp ) ;
extern struct pack_idx_option __dyc_read_comp_505pack_idx_option(void) ;
extern void __dyc_print_comp_505pack_idx_option(struct pack_idx_option __dyc_thistype ) ;
extern struct cb_node *__dyc_random_ptr__comp_539cb_node(unsigned int __dyc_exp ) ;
extern struct cb_node *__dyc_read_ptr__comp_539cb_node(void) ;
extern void __dyc_print_ptr__comp_539cb_node(struct cb_node  const  *__dyc_thistype ) ;
extern struct path_pattern **__dyc_random_ptr__ptr__comp_531path_pattern(unsigned int __dyc_exp ) ;
extern struct path_pattern **__dyc_read_ptr__ptr__comp_531path_pattern(void) ;
extern void __dyc_print_ptr__ptr__comp_531path_pattern(struct path_pattern * const  *__dyc_thistype ) ;
extern pthread_t *__dyc_random_ptr__typdef_pthread_t(unsigned int __dyc_exp ) ;
extern pthread_t *__dyc_read_ptr__typdef_pthread_t(void) ;
extern void __dyc_print_ptr__typdef_pthread_t(pthread_t const   * __restrict  __dyc_thistype ) ;
extern struct parsed_object_pool *__dyc_random_ptr__comp_419parsed_object_pool(unsigned int __dyc_exp ) ;
extern struct parsed_object_pool *__dyc_read_ptr__comp_419parsed_object_pool(void) ;
extern void __dyc_print_ptr__comp_419parsed_object_pool(struct parsed_object_pool  const  *__dyc_thistype ) ;
extern struct pattern_list *__dyc_random_ptr__comp_458pattern_list(unsigned int __dyc_exp ) ;
extern struct pattern_list *__dyc_read_ptr__comp_458pattern_list(void) ;
extern void __dyc_print_ptr__comp_458pattern_list(struct pattern_list  const  *__dyc_thistype ) ;
extern z_stream __dyc_random_typdef_z_stream(unsigned int __dyc_exp ) ;
extern z_stream __dyc_read_typdef_z_stream(void) ;
extern void __dyc_print_typdef_z_stream(z_stream __dyc_thistype ) ;
extern struct _IO_FILE *__dyc_random_ptr__comp_2_IO_FILE(unsigned int __dyc_exp ) ;
extern struct _IO_FILE *__dyc_read_ptr__comp_2_IO_FILE(void) ;
extern void __dyc_print_ptr__comp_2_IO_FILE(struct _IO_FILE  const  *__dyc_thistype ) ;
extern struct stat __dyc_random_comp_14stat(unsigned int __dyc_exp ) ;
extern struct stat __dyc_read_comp_14stat(void) ;
extern void __dyc_print_comp_14stat(struct stat __dyc_thistype ) ;
extern struct object_entry *__dyc_random_ptr__comp_550object_entry(unsigned int __dyc_exp ) ;
extern struct object_entry *__dyc_read_ptr__comp_550object_entry(void) ;
extern void __dyc_print_ptr__comp_550object_entry(struct object_entry  const  *__dyc_thistype ) ;
extern timestamp_t __dyc_random_typdef_timestamp_t(unsigned int __dyc_exp ) ;
extern timestamp_t __dyc_read_typdef_timestamp_t(void) ;
extern void __dyc_print_typdef_timestamp_t(timestamp_t __dyc_thistype ) ;
extern __blksize_t __dyc_random_typdef___blksize_t(unsigned int __dyc_exp ) ;
extern __blksize_t __dyc_read_typdef___blksize_t(void) ;
extern void __dyc_print_typdef___blksize_t(__blksize_t __dyc_thistype ) ;
extern struct pack_header *__dyc_random_ptr__comp_504pack_header(unsigned int __dyc_exp ) ;
extern struct pack_header *__dyc_read_ptr__comp_504pack_header(void) ;
extern void __dyc_print_ptr__comp_504pack_header(struct pack_header  const  *__dyc_thistype ) ;
extern struct packed_git *__dyc_random_ptr__comp_441packed_git(unsigned int __dyc_exp ) ;
extern struct packed_git *__dyc_read_ptr__comp_441packed_git(void) ;
extern void __dyc_print_ptr__comp_441packed_git(struct packed_git  const  *__dyc_thistype ) ;
extern struct object_directory __dyc_random_comp_542object_directory(unsigned int __dyc_exp ) ;
extern struct object_directory __dyc_read_comp_542object_directory(void) ;
extern void __dyc_print_comp_542object_directory(struct object_directory __dyc_thistype ) ;
extern struct stat_validity __dyc_random_comp_472stat_validity(unsigned int __dyc_exp ) ;
extern struct stat_validity __dyc_read_comp_472stat_validity(void) ;
extern void __dyc_print_comp_472stat_validity(struct stat_validity __dyc_thistype ) ;
extern struct pack_idx_option *__dyc_random_ptr__comp_505pack_idx_option(unsigned int __dyc_exp ) ;
extern struct pack_idx_option *__dyc_read_ptr__comp_505pack_idx_option(void) ;
extern void __dyc_print_ptr__comp_505pack_idx_option(struct pack_idx_option  const  *__dyc_thistype ) ;
extern khint32_t *__dyc_random_ptr__typdef_khint32_t(unsigned int __dyc_exp ) ;
extern khint32_t *__dyc_read_ptr__typdef_khint32_t(void) ;
extern void __dyc_print_ptr__typdef_khint32_t(khint32_t const   *__dyc_thistype ) ;
extern uint32_t __dyc_random_typdef_uint32_t(unsigned int __dyc_exp ) ;
extern uint32_t __dyc_read_typdef_uint32_t(void) ;
extern void __dyc_print_typdef_uint32_t(uint32_t __dyc_thistype ) ;
extern union __anonunion_pthread_mutexattr_t_14 __dyc_random_comp_23__anonunion_pthread_mutexattr_t_14(unsigned int __dyc_exp ) ;
extern union __anonunion_pthread_mutexattr_t_14 __dyc_read_comp_23__anonunion_pthread_mutexattr_t_14(void) ;
extern void __dyc_print_comp_23__anonunion_pthread_mutexattr_t_14(union __anonunion_pthread_mutexattr_t_14 __dyc_thistype ) ;
extern __ino_t __dyc_random_typdef___ino_t(unsigned int __dyc_exp ) ;
extern __ino_t __dyc_read_typdef___ino_t(void) ;
extern void __dyc_print_typdef___ino_t(__ino_t __dyc_thistype ) ;
extern pthread_mutexattr_t __dyc_random_typdef_pthread_mutexattr_t(unsigned int __dyc_exp ) ;
extern pthread_mutexattr_t __dyc_read_typdef_pthread_mutexattr_t(void) ;
extern void __dyc_print_typdef_pthread_mutexattr_t(pthread_mutexattr_t __dyc_thistype ) ;
extern struct __anonstruct_kh_oid_map_t_87 __dyc_random_comp_511__anonstruct_kh_oid_map_t_87(unsigned int __dyc_exp ) ;
extern struct __anonstruct_kh_oid_map_t_87 __dyc_read_comp_511__anonstruct_kh_oid_map_t_87(void) ;
extern void __dyc_print_comp_511__anonstruct_kh_oid_map_t_87(struct __anonstruct_kh_oid_map_t_87 __dyc_thistype ) ;
extern struct base_data **__dyc_random_ptr__ptr__comp_552base_data(unsigned int __dyc_exp ) ;
extern struct base_data **__dyc_read_ptr__ptr__comp_552base_data(void) ;
extern void __dyc_print_ptr__ptr__comp_552base_data(struct base_data * const  *__dyc_thistype ) ;
extern struct list_head *__dyc_random_ptr__comp_429list_head(unsigned int __dyc_exp ) ;
extern struct list_head *__dyc_read_ptr__comp_429list_head(void) ;
extern void __dyc_print_ptr__comp_429list_head(struct list_head  const  *__dyc_thistype ) ;
extern struct stat *__dyc_random_ptr__comp_14stat(unsigned int __dyc_exp ) ;
extern struct stat *__dyc_read_ptr__comp_14stat(void) ;
extern void __dyc_print_ptr__comp_14stat(struct stat  const  *__dyc_thistype ) ;
extern struct tree __dyc_random_comp_454tree(unsigned int __dyc_exp ) ;
extern struct tree __dyc_read_comp_454tree(void) ;
extern void __dyc_print_comp_454tree(struct tree __dyc_thistype ) ;
extern struct string_list_item *__dyc_random_ptr__comp_432string_list_item(unsigned int __dyc_exp ) ;
extern struct string_list_item *__dyc_read_ptr__comp_432string_list_item(void) ;
extern void __dyc_print_ptr__comp_432string_list_item(struct string_list_item  const  *__dyc_thistype ) ;
extern struct pack_idx_entry __dyc_random_comp_507pack_idx_entry(unsigned int __dyc_exp ) ;
extern struct pack_idx_entry __dyc_read_comp_507pack_idx_entry(void) ;
extern void __dyc_print_comp_507pack_idx_entry(struct pack_idx_entry __dyc_thistype ) ;
extern kh_odb_path_map_t __dyc_random_typdef_kh_odb_path_map_t(unsigned int __dyc_exp ) ;
extern kh_odb_path_map_t __dyc_read_typdef_kh_odb_path_map_t(void) ;
extern void __dyc_print_typdef_kh_odb_path_map_t(kh_odb_path_map_t __dyc_thistype ) ;
extern struct packed_git **__dyc_random_ptr__ptr__comp_441packed_git(unsigned int __dyc_exp ) ;
extern struct packed_git **__dyc_read_ptr__ptr__comp_441packed_git(void) ;
extern void __dyc_print_ptr__ptr__comp_441packed_git(struct packed_git * const  *__dyc_thistype ) ;
extern struct object_stat __dyc_random_comp_551object_stat(unsigned int __dyc_exp ) ;
extern struct object_stat __dyc_read_comp_551object_stat(void) ;
extern void __dyc_print_comp_551object_stat(struct object_stat __dyc_thistype ) ;
extern struct oidmap *__dyc_random_ptr__comp_528oidmap(unsigned int __dyc_exp ) ;
extern struct oidmap *__dyc_read_ptr__comp_528oidmap(void) ;
extern void __dyc_print_ptr__comp_528oidmap(struct oidmap  const  *__dyc_thistype ) ;
extern uint32_t *__dyc_random_ptr__typdef_uint32_t(unsigned int __dyc_exp ) ;
extern uint32_t *__dyc_read_ptr__typdef_uint32_t(void) ;
extern void __dyc_print_ptr__typdef_uint32_t(uint32_t const   *__dyc_thistype ) ;
extern struct blob *__dyc_random_ptr__comp_508blob(unsigned int __dyc_exp ) ;
extern struct blob *__dyc_read_ptr__comp_508blob(void) ;
extern void __dyc_print_ptr__comp_508blob(struct blob  const  *__dyc_thistype ) ;
extern struct commit_list __dyc_random_comp_471commit_list(unsigned int __dyc_exp ) ;
extern struct commit_list __dyc_read_comp_471commit_list(void) ;
extern void __dyc_print_comp_471commit_list(struct commit_list __dyc_thistype ) ;
extern off_t __dyc_random_typdef_off_t(unsigned int __dyc_exp ) ;
extern off_t __dyc_read_typdef_off_t(void) ;
extern void __dyc_print_typdef_off_t(off_t __dyc_thistype ) ;
extern struct config_set_element __dyc_random_comp_497config_set_element(unsigned int __dyc_exp ) ;
extern struct config_set_element __dyc_read_comp_497config_set_element(void) ;
extern void __dyc_print_comp_497config_set_element(struct config_set_element __dyc_thistype ) ;
extern struct timespec __dyc_random_comp_13timespec(unsigned int __dyc_exp ) ;
extern struct timespec __dyc_read_comp_13timespec(void) ;
extern void __dyc_print_comp_13timespec(struct timespec __dyc_thistype ) ;
extern size_t *__dyc_random_ptr__typdef_size_t(unsigned int __dyc_exp ) ;
extern size_t *__dyc_read_ptr__typdef_size_t(void) ;
extern void __dyc_print_ptr__typdef_size_t(size_t const   *__dyc_thistype ) ;
extern __off64_t __dyc_random_typdef___off64_t(unsigned int __dyc_exp ) ;
extern __off64_t __dyc_read_typdef___off64_t(void) ;
extern void __dyc_print_typdef___off64_t(__off64_t __dyc_thistype ) ;
extern struct ofs_delta_entry __dyc_random_comp_554ofs_delta_entry(unsigned int __dyc_exp ) ;
extern struct ofs_delta_entry __dyc_read_comp_554ofs_delta_entry(void) ;
extern void __dyc_print_comp_554ofs_delta_entry(struct ofs_delta_entry __dyc_thistype ) ;
extern uint8_t __dyc_random_typdef_uint8_t(unsigned int __dyc_exp ) ;
extern uint8_t __dyc_read_typdef_uint8_t(void) ;
extern void __dyc_print_typdef_uint8_t(uint8_t __dyc_thistype ) ;
extern struct hashmap_entry **__dyc_random_ptr__ptr__comp_426hashmap_entry(unsigned int __dyc_exp ) ;
extern struct hashmap_entry **__dyc_read_ptr__ptr__comp_426hashmap_entry(void) ;
extern void __dyc_print_ptr__ptr__comp_426hashmap_entry(struct hashmap_entry * const  *__dyc_thistype ) ;
extern void *__dyc_random_ptr__comp_474alloc_state(unsigned int __dyc_exp ) ;
extern void *__dyc_read_ptr__comp_474alloc_state(void) ;
extern void __dyc_print_ptr__comp_474alloc_state(void const   * const  __dyc_thistype ) ;
extern __ssize_t __dyc_random_typdef___ssize_t(unsigned int __dyc_exp ) ;
extern __ssize_t __dyc_read_typdef___ssize_t(void) ;
extern void __dyc_print_typdef___ssize_t(__ssize_t __dyc_thistype ) ;
extern struct thread_local __dyc_random_comp_553thread_local(unsigned int __dyc_exp ) ;
extern struct thread_local __dyc_read_comp_553thread_local(void) ;
extern void __dyc_print_comp_553thread_local(struct thread_local __dyc_thistype ) ;
extern struct object_stat *__dyc_random_ptr__comp_551object_stat(unsigned int __dyc_exp ) ;
extern struct object_stat *__dyc_read_ptr__comp_551object_stat(void) ;
extern void __dyc_print_ptr__comp_551object_stat(struct object_stat  const  *__dyc_thistype ) ;
extern void *__dyc_random_ptr__comp_437stream_filter(unsigned int __dyc_exp ) ;
extern void *__dyc_read_ptr__comp_437stream_filter(void) ;
extern void __dyc_print_ptr__comp_437stream_filter(void const   * const  __dyc_thistype ) ;
extern struct cache_entry __dyc_random_comp_453cache_entry(unsigned int __dyc_exp ) ;
extern struct cache_entry __dyc_read_comp_453cache_entry(void) ;
extern void __dyc_print_comp_453cache_entry(struct cache_entry __dyc_thistype ) ;
extern pthread_key_t __dyc_random_typdef_pthread_key_t(unsigned int __dyc_exp ) ;
extern pthread_key_t __dyc_read_typdef_pthread_key_t(void) ;
extern void __dyc_print_typdef_pthread_key_t(pthread_key_t __dyc_thistype ) ;
extern struct commit_list *__dyc_random_ptr__comp_471commit_list(unsigned int __dyc_exp ) ;
extern struct commit_list *__dyc_read_ptr__comp_471commit_list(void) ;
extern void __dyc_print_ptr__comp_471commit_list(struct commit_list  const  *__dyc_thistype ) ;
extern void *__dyc_random_ptr__comp_517git_istream(unsigned int __dyc_exp ) ;
extern void *__dyc_read_ptr__comp_517git_istream(void) ;
extern void __dyc_print_ptr__comp_517git_istream(void const   * const  __dyc_thistype ) ;
extern struct hashmap __dyc_random_comp_427hashmap(unsigned int __dyc_exp ) ;
extern struct hashmap __dyc_read_comp_427hashmap(void) ;
extern void __dyc_print_comp_427hashmap(struct hashmap __dyc_thistype ) ;
extern struct object_id __dyc_random_comp_406object_id(unsigned int __dyc_exp ) ;
extern struct object_id __dyc_read_comp_406object_id(void) ;
extern void __dyc_print_comp_406object_id(struct object_id __dyc_thistype ) ;
extern struct ref_delta_entry __dyc_random_comp_555ref_delta_entry(unsigned int __dyc_exp ) ;
extern struct ref_delta_entry __dyc_read_comp_555ref_delta_entry(void) ;
extern void __dyc_print_comp_555ref_delta_entry(struct ref_delta_entry __dyc_thistype ) ;
extern uLong __dyc_random_typdef_uLong(unsigned int __dyc_exp ) ;
extern uLong __dyc_read_typdef_uLong(void) ;
extern void __dyc_print_typdef_uLong(uLong __dyc_thistype ) ;
extern struct git_hash_algo __dyc_random_comp_411git_hash_algo(unsigned int __dyc_exp ) ;
extern struct git_hash_algo __dyc_read_comp_411git_hash_algo(void) ;
extern void __dyc_print_comp_411git_hash_algo(struct git_hash_algo __dyc_thistype ) ;
extern struct ofs_delta_entry *__dyc_random_ptr__comp_554ofs_delta_entry(unsigned int __dyc_exp ) ;
extern struct ofs_delta_entry *__dyc_read_ptr__comp_554ofs_delta_entry(void) ;
extern void __dyc_print_ptr__comp_554ofs_delta_entry(struct ofs_delta_entry  const  *__dyc_thistype ) ;
extern struct __anonstruct_kh_odb_path_map_t_103 __dyc_random_comp_543__anonstruct_kh_odb_path_map_t_103(unsigned int __dyc_exp ) ;
extern struct __anonstruct_kh_odb_path_map_t_103 __dyc_read_comp_543__anonstruct_kh_odb_path_map_t_103(void) ;
extern void __dyc_print_comp_543__anonstruct_kh_odb_path_map_t_103(struct __anonstruct_kh_odb_path_map_t_103 __dyc_thistype ) ;
extern khint_t __dyc_random_typdef_khint_t(unsigned int __dyc_exp ) ;
extern khint_t __dyc_read_typdef_khint_t(void) ;
extern void __dyc_print_typdef_khint_t(khint_t __dyc_thistype ) ;
extern kh_oid_set_t __dyc_random_typdef_kh_oid_set_t(unsigned int __dyc_exp ) ;
extern kh_oid_set_t __dyc_read_typdef_kh_oid_set_t(void) ;
extern void __dyc_print_typdef_kh_oid_set_t(kh_oid_set_t __dyc_thistype ) ;
extern struct strbuf *__dyc_random_ptr__comp_365strbuf(unsigned int __dyc_exp ) ;
extern struct strbuf *__dyc_read_ptr__comp_365strbuf(void) ;
extern void __dyc_print_ptr__comp_365strbuf(struct strbuf  const  *__dyc_thistype ) ;
extern struct object_directory *__dyc_random_ptr__comp_542object_directory(unsigned int __dyc_exp ) ;
extern struct object_directory *__dyc_read_ptr__comp_542object_directory(void) ;
extern void __dyc_print_ptr__comp_542object_directory(struct object_directory  const  *__dyc_thistype ) ;
extern struct path_pattern __dyc_random_comp_531path_pattern(unsigned int __dyc_exp ) ;
extern struct path_pattern __dyc_read_comp_531path_pattern(void) ;
extern void __dyc_print_comp_531path_pattern(struct path_pattern __dyc_thistype ) ;
extern struct cache_entry *__dyc_random_ptr__comp_453cache_entry(unsigned int __dyc_exp ) ;
extern struct cache_entry *__dyc_read_ptr__comp_453cache_entry(void) ;
extern void __dyc_print_ptr__comp_453cache_entry(struct cache_entry  const  *__dyc_thistype ) ;
extern struct __anonstruct_SHA1_CTX_84 __dyc_random_comp_423__anonstruct_SHA1_CTX_84(unsigned int __dyc_exp ) ;
extern struct __anonstruct_SHA1_CTX_84 __dyc_read_comp_423__anonstruct_SHA1_CTX_84(void) ;
extern void __dyc_print_comp_423__anonstruct_SHA1_CTX_84(struct __anonstruct_SHA1_CTX_84 __dyc_thistype ) ;
extern union git_hash_ctx __dyc_random_comp_425git_hash_ctx(unsigned int __dyc_exp ) ;
extern union git_hash_ctx __dyc_read_comp_425git_hash_ctx(void) ;
extern void __dyc_print_comp_425git_hash_ctx(union git_hash_ctx __dyc_thistype ) ;
extern struct repo_settings __dyc_random_comp_418repo_settings(unsigned int __dyc_exp ) ;
extern struct repo_settings __dyc_read_comp_418repo_settings(void) ;
extern void __dyc_print_comp_418repo_settings(struct repo_settings __dyc_thistype ) ;
extern struct ref_delta_entry *__dyc_random_ptr__comp_555ref_delta_entry(unsigned int __dyc_exp ) ;
extern struct ref_delta_entry *__dyc_read_ptr__comp_555ref_delta_entry(void) ;
extern void __dyc_print_ptr__comp_555ref_delta_entry(struct ref_delta_entry  const  *__dyc_thistype ) ;
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
extern struct oidset __dyc_random_comp_513oidset(unsigned int __dyc_exp ) ;
extern struct oidset __dyc_read_comp_513oidset(void) ;
extern void __dyc_print_comp_513oidset(struct oidset __dyc_thistype ) ;
extern struct oidtree __dyc_random_comp_541oidtree(unsigned int __dyc_exp ) ;
extern struct oidtree __dyc_read_comp_541oidtree(void) ;
extern void __dyc_print_comp_541oidtree(struct oidtree __dyc_thistype ) ;
extern enum fsck_msg_type *__dyc_random_ptr__enum_fsck_msg_type(unsigned int __dyc_exp ) ;
extern enum fsck_msg_type *__dyc_read_ptr__enum_fsck_msg_type(void) ;
extern void __dyc_print_ptr__enum_fsck_msg_type(enum fsck_msg_type  const  *__dyc_thistype ) ;
extern struct parsed_object_pool __dyc_random_comp_419parsed_object_pool(unsigned int __dyc_exp ) ;
extern struct parsed_object_pool __dyc_read_comp_419parsed_object_pool(void) ;
extern void __dyc_print_comp_419parsed_object_pool(struct parsed_object_pool __dyc_thistype ) ;
extern off_t *__dyc_random_ptr__typdef_off_t(unsigned int __dyc_exp ) ;
extern off_t *__dyc_read_ptr__typdef_off_t(void) ;
extern void __dyc_print_ptr__typdef_off_t(off_t const   *__dyc_thistype ) ;
extern struct mem_pool __dyc_random_comp_445mem_pool(unsigned int __dyc_exp ) ;
extern struct mem_pool __dyc_read_comp_445mem_pool(void) ;
extern void __dyc_print_comp_445mem_pool(struct mem_pool __dyc_thistype ) ;
extern void *__dyc_random_ptr__comp_442multi_pack_index(unsigned int __dyc_exp ) ;
extern void *__dyc_read_ptr__comp_442multi_pack_index(void) ;
extern void __dyc_print_ptr__comp_442multi_pack_index(void const   * const  __dyc_thistype ) ;
extern struct _IO_FILE __dyc_random_comp_2_IO_FILE(unsigned int __dyc_exp ) ;
extern struct _IO_FILE __dyc_read_comp_2_IO_FILE(void) ;
extern void __dyc_print_comp_2_IO_FILE(struct _IO_FILE __dyc_thistype ) ;
extern struct object **__dyc_random_ptr__ptr__comp_464object(unsigned int __dyc_exp ) ;
extern struct object **__dyc_read_ptr__ptr__comp_464object(void) ;
extern void __dyc_print_ptr__ptr__comp_464object(struct object * const  *__dyc_thistype ) ;
extern struct internal_state *__dyc_random_ptr__comp_446internal_state(unsigned int __dyc_exp ) ;
extern struct internal_state *__dyc_read_ptr__comp_446internal_state(void) ;
extern void __dyc_print_ptr__comp_446internal_state(struct internal_state  const  *__dyc_thistype ) ;
extern struct packed_git __dyc_random_comp_441packed_git(unsigned int __dyc_exp ) ;
extern struct packed_git __dyc_read_comp_441packed_git(void) ;
extern void __dyc_print_comp_441packed_git(struct packed_git __dyc_thistype ) ;
extern struct oidtree *__dyc_random_ptr__comp_541oidtree(unsigned int __dyc_exp ) ;
extern struct oidtree *__dyc_read_ptr__comp_541oidtree(void) ;
extern void __dyc_print_ptr__comp_541oidtree(struct oidtree  const  *__dyc_thistype ) ;
extern struct raw_object_store __dyc_random_comp_415raw_object_store(unsigned int __dyc_exp ) ;
extern struct raw_object_store __dyc_read_comp_415raw_object_store(void) ;
extern void __dyc_print_comp_415raw_object_store(struct raw_object_store __dyc_thistype ) ;
extern struct thread_local *__dyc_random_ptr__comp_553thread_local(unsigned int __dyc_exp ) ;
extern struct thread_local *__dyc_read_ptr__comp_553thread_local(void) ;
extern void __dyc_print_ptr__comp_553thread_local(struct thread_local  const  *__dyc_thistype ) ;
extern void *__dyc_random_ptr__typdef__IO_lock_t(unsigned int __dyc_exp ) ;
extern void *__dyc_read_ptr__typdef__IO_lock_t(void) ;
extern void __dyc_print_ptr__typdef__IO_lock_t(void const   * const  __dyc_thistype ) ;
extern pthread_key_t *__dyc_random_ptr__typdef_pthread_key_t(unsigned int __dyc_exp ) ;
extern pthread_key_t *__dyc_read_ptr__typdef_pthread_key_t(void) ;
extern void __dyc_print_ptr__typdef_pthread_key_t(pthread_key_t const   *__dyc_thistype ) ;
extern struct progress **__dyc_random_ptr__ptr__comp_457progress(unsigned int __dyc_exp ) ;
extern struct progress **__dyc_read_ptr__ptr__comp_457progress(void) ;
extern void __dyc_print_ptr__ptr__comp_457progress(struct progress * const  *__dyc_thistype ) ;
extern struct oid_array *__dyc_random_ptr__comp_443oid_array(unsigned int __dyc_exp ) ;
extern struct oid_array *__dyc_read_ptr__comp_443oid_array(void) ;
extern void __dyc_print_ptr__comp_443oid_array(struct oid_array  const  *__dyc_thistype ) ;
extern union __anonunion_u_106 __dyc_random_comp_547__anonunion_u_106(unsigned int __dyc_exp ) ;
extern union __anonunion_u_106 __dyc_read_comp_547__anonunion_u_106(void) ;
extern void __dyc_print_comp_547__anonunion_u_106(union __anonunion_u_106 __dyc_thistype ) ;
extern void *__dyc_random_ptr__comp_459cache_tree(unsigned int __dyc_exp ) ;
extern void *__dyc_read_ptr__comp_459cache_tree(void) ;
extern void __dyc_print_ptr__comp_459cache_tree(void const   * const  __dyc_thistype ) ;
extern struct base_data *__dyc_random_ptr__comp_552base_data(unsigned int __dyc_exp ) ;
extern struct base_data *__dyc_read_ptr__comp_552base_data(void) ;
extern void __dyc_print_ptr__comp_552base_data(struct base_data  const  *__dyc_thistype ) ;
extern struct __anonstruct_kept_pack_cache_104 __dyc_random_comp_546__anonstruct_kept_pack_cache_104(unsigned int __dyc_exp ) ;
extern struct __anonstruct_kept_pack_cache_104 __dyc_read_comp_546__anonstruct_kept_pack_cache_104(void) ;
extern void __dyc_print_comp_546__anonstruct_kept_pack_cache_104(struct __anonstruct_kept_pack_cache_104 __dyc_thistype ) ;
extern uInt __dyc_random_typdef_uInt(unsigned int __dyc_exp ) ;
extern uInt __dyc_read_typdef_uInt(void) ;
extern void __dyc_print_typdef_uInt(uInt __dyc_thistype ) ;
extern struct mp_block __dyc_random_comp_444mp_block(unsigned int __dyc_exp ) ;
extern struct mp_block __dyc_read_comp_444mp_block(void) ;
extern void __dyc_print_comp_444mp_block(struct mp_block __dyc_thistype ) ;
extern struct __pthread_internal_list *__dyc_random_ptr__comp_20__pthread_internal_list(unsigned int __dyc_exp ) ;
extern struct __pthread_internal_list *__dyc_read_ptr__comp_20__pthread_internal_list(void) ;
extern void __dyc_print_ptr__comp_20__pthread_internal_list(struct __pthread_internal_list  const  *__dyc_thistype ) ;
extern void **__dyc_random_ptr__ptr__void(unsigned int __dyc_exp ) ;
extern void **__dyc_read_ptr__ptr__void(void) ;
extern void __dyc_print_ptr__ptr__void(void * const  *__dyc_thistype ) ;
extern struct oidmap __dyc_random_comp_528oidmap(unsigned int __dyc_exp ) ;
extern struct oidmap __dyc_read_comp_528oidmap(void) ;
extern void __dyc_print_comp_528oidmap(struct oidmap __dyc_thistype ) ;
extern struct path_pattern *__dyc_random_ptr__comp_531path_pattern(unsigned int __dyc_exp ) ;
extern struct path_pattern *__dyc_read_ptr__comp_531path_pattern(void) ;
extern void __dyc_print_ptr__comp_531path_pattern(struct path_pattern  const  *__dyc_thistype ) ;
extern struct cache_entry **__dyc_random_ptr__ptr__comp_453cache_entry(unsigned int __dyc_exp ) ;
extern struct cache_entry **__dyc_read_ptr__ptr__comp_453cache_entry(void) ;
extern void __dyc_print_ptr__ptr__comp_453cache_entry(struct cache_entry * const  *__dyc_thistype ) ;
extern struct path_cache __dyc_random_comp_409path_cache(unsigned int __dyc_exp ) ;
extern struct path_cache __dyc_read_comp_409path_cache(void) ;
extern void __dyc_print_comp_409path_cache(struct path_cache __dyc_thistype ) ;
extern void *__dyc_random_ptr__comp_455split_index(unsigned int __dyc_exp ) ;
extern void *__dyc_read_ptr__comp_455split_index(void) ;
extern void __dyc_print_ptr__comp_455split_index(void const   * const  __dyc_thistype ) ;
extern struct ref_delta_entry **__dyc_random_ptr__ptr__comp_555ref_delta_entry(unsigned int __dyc_exp ) ;
extern struct ref_delta_entry **__dyc_read_ptr__ptr__comp_555ref_delta_entry(void) ;
extern void __dyc_print_ptr__ptr__comp_555ref_delta_entry(struct ref_delta_entry * const  *__dyc_thistype ) ;
extern uint64_t __dyc_random_typdef_uint64_t(unsigned int __dyc_exp ) ;
extern uint64_t __dyc_read_typdef_uint64_t(void) ;
extern void __dyc_print_typdef_uint64_t(uint64_t __dyc_thistype ) ;
extern _IO_FILE __dyc_random_typdef__IO_FILE(unsigned int __dyc_exp ) ;
extern _IO_FILE __dyc_read_typdef__IO_FILE(void) ;
extern void __dyc_print_typdef__IO_FILE(_IO_FILE __dyc_thistype ) ;
extern pthread_attr_t *__dyc_random_ptr__typdef_pthread_attr_t(unsigned int __dyc_exp ) ;
extern pthread_attr_t *__dyc_read_ptr__typdef_pthread_attr_t(void) ;
extern void __dyc_print_ptr__typdef_pthread_attr_t(pthread_attr_t const   * __restrict  __dyc_thistype ) ;
extern char **__dyc_random_ptr__ptr__char(unsigned int __dyc_exp ) ;
extern char **__dyc_read_ptr__ptr__char(void) ;
extern void __dyc_print_ptr__ptr__char(char * const  *__dyc_thistype ) ;
extern struct commit_graft **__dyc_random_ptr__ptr__comp_475commit_graft(unsigned int __dyc_exp ) ;
extern struct commit_graft **__dyc_read_ptr__ptr__comp_475commit_graft(void) ;
extern void __dyc_print_ptr__ptr__comp_475commit_graft(struct commit_graft * const  *__dyc_thistype ) ;
extern struct hashmap_entry *__dyc_random_ptr__comp_426hashmap_entry(unsigned int __dyc_exp ) ;
extern struct hashmap_entry *__dyc_read_ptr__comp_426hashmap_entry(void) ;
extern void __dyc_print_ptr__comp_426hashmap_entry(struct hashmap_entry  const  *__dyc_thistype ) ;
extern struct config_set *__dyc_random_ptr__comp_410config_set(unsigned int __dyc_exp ) ;
extern struct config_set *__dyc_read_ptr__comp_410config_set(void) ;
extern void __dyc_print_ptr__comp_410config_set(struct config_set  const  *__dyc_thistype ) ;
