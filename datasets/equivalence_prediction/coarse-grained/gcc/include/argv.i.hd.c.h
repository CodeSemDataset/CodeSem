#line 212 "/usr/lib/gcc/x86_64-linux-gnu/4.6/include/stddef.h"
typedef unsigned long size_t;
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
extern FILE *__dyc_random_ptr__typdef_FILE(unsigned int __dyc_exp ) ;
extern FILE *__dyc_read_ptr__typdef_FILE(void) ;
extern void __dyc_print_ptr__typdef_FILE(FILE const   *__dyc_thistype ) ;
extern struct timespec __dyc_random_comp_25timespec(unsigned int __dyc_exp ) ;
extern struct timespec __dyc_read_comp_25timespec(void) ;
extern void __dyc_print_comp_25timespec(struct timespec __dyc_thistype ) ;
extern int *__dyc_random_ptr__int(unsigned int __dyc_exp ) ;
extern int *__dyc_read_ptr__int(void) ;
extern void __dyc_print_ptr__int(int const   *__dyc_thistype ) ;
extern size_t __dyc_random_typdef_size_t(unsigned int __dyc_exp ) ;
extern size_t __dyc_read_typdef_size_t(void) ;
extern void __dyc_print_typdef_size_t(size_t __dyc_thistype ) ;
extern struct stat __dyc_random_comp_44stat(unsigned int __dyc_exp ) ;
extern struct stat __dyc_read_comp_44stat(void) ;
extern void __dyc_print_comp_44stat(struct stat __dyc_thistype ) ;
extern struct _IO_marker __dyc_random_comp_8_IO_marker(unsigned int __dyc_exp ) ;
extern struct _IO_marker __dyc_read_comp_8_IO_marker(void) ;
extern void __dyc_print_comp_8_IO_marker(struct _IO_marker __dyc_thistype ) ;
extern struct stat *__dyc_random_ptr__comp_44stat(unsigned int __dyc_exp ) ;
extern struct stat *__dyc_read_ptr__comp_44stat(void) ;
extern void __dyc_print_ptr__comp_44stat(struct stat  const  * __restrict  __dyc_thistype ) ;
extern __nlink_t __dyc_random_typdef___nlink_t(unsigned int __dyc_exp ) ;
extern __nlink_t __dyc_read_typdef___nlink_t(void) ;
extern void __dyc_print_typdef___nlink_t(__nlink_t __dyc_thistype ) ;
extern __uid_t __dyc_random_typdef___uid_t(unsigned int __dyc_exp ) ;
extern __uid_t __dyc_read_typdef___uid_t(void) ;
extern void __dyc_print_typdef___uid_t(__uid_t __dyc_thistype ) ;
extern __blkcnt_t __dyc_random_typdef___blkcnt_t(unsigned int __dyc_exp ) ;
extern __blkcnt_t __dyc_read_typdef___blkcnt_t(void) ;
extern void __dyc_print_typdef___blkcnt_t(__blkcnt_t __dyc_thistype ) ;
extern __off_t __dyc_random_typdef___off_t(unsigned int __dyc_exp ) ;
extern __off_t __dyc_read_typdef___off_t(void) ;
extern void __dyc_print_typdef___off_t(__off_t __dyc_thistype ) ;
extern struct _IO_marker *__dyc_random_ptr__comp_8_IO_marker(unsigned int __dyc_exp ) ;
extern struct _IO_marker *__dyc_read_ptr__comp_8_IO_marker(void) ;
extern void __dyc_print_ptr__comp_8_IO_marker(struct _IO_marker  const  *__dyc_thistype ) ;
extern __mode_t __dyc_random_typdef___mode_t(unsigned int __dyc_exp ) ;
extern __mode_t __dyc_read_typdef___mode_t(void) ;
extern void __dyc_print_typdef___mode_t(__mode_t __dyc_thistype ) ;
extern __gid_t __dyc_random_typdef___gid_t(unsigned int __dyc_exp ) ;
extern __gid_t __dyc_read_typdef___gid_t(void) ;
extern void __dyc_print_typdef___gid_t(__gid_t __dyc_thistype ) ;
extern void *__dyc_random_ptr__void(unsigned int __dyc_exp ) ;
extern void *__dyc_read_ptr__void(void) ;
extern void __dyc_print_ptr__void(void const   * const  __dyc_thistype ) ;
extern __dev_t __dyc_random_typdef___dev_t(unsigned int __dyc_exp ) ;
extern __dev_t __dyc_read_typdef___dev_t(void) ;
extern void __dyc_print_typdef___dev_t(__dev_t __dyc_thistype ) ;
extern char *__dyc_random_ptr__char(unsigned int __dyc_exp ) ;
extern char *__dyc_read_ptr__char(void) ;
extern void __dyc_print_ptr__char(char const   *__dyc_thistype ) ;
extern __time_t __dyc_random_typdef___time_t(unsigned int __dyc_exp ) ;
extern __time_t __dyc_read_typdef___time_t(void) ;
extern void __dyc_print_typdef___time_t(__time_t __dyc_thistype ) ;
extern struct _IO_FILE *__dyc_random_ptr__comp_2_IO_FILE(unsigned int __dyc_exp ) ;
extern struct _IO_FILE *__dyc_read_ptr__comp_2_IO_FILE(void) ;
extern void __dyc_print_ptr__comp_2_IO_FILE(struct _IO_FILE  const  *__dyc_thistype ) ;
extern __blksize_t __dyc_random_typdef___blksize_t(unsigned int __dyc_exp ) ;
extern __blksize_t __dyc_read_typdef___blksize_t(void) ;
extern void __dyc_print_typdef___blksize_t(__blksize_t __dyc_thistype ) ;
extern __ino_t __dyc_random_typdef___ino_t(unsigned int __dyc_exp ) ;
extern __ino_t __dyc_read_typdef___ino_t(void) ;
extern void __dyc_print_typdef___ino_t(__ino_t __dyc_thistype ) ;
extern __off64_t __dyc_random_typdef___off64_t(unsigned int __dyc_exp ) ;
extern __off64_t __dyc_read_typdef___off64_t(void) ;
extern void __dyc_print_typdef___off64_t(__off64_t __dyc_thistype ) ;
extern char ***__dyc_random_ptr__ptr__ptr__char(unsigned int __dyc_exp ) ;
extern char ***__dyc_read_ptr__ptr__ptr__char(void) ;
extern void __dyc_print_ptr__ptr__ptr__char(char ** const  *__dyc_thistype ) ;
extern struct _IO_FILE __dyc_random_comp_2_IO_FILE(unsigned int __dyc_exp ) ;
extern struct _IO_FILE __dyc_read_comp_2_IO_FILE(void) ;
extern void __dyc_print_comp_2_IO_FILE(struct _IO_FILE __dyc_thistype ) ;
extern void *__dyc_random_ptr__typdef__IO_lock_t(unsigned int __dyc_exp ) ;
extern void *__dyc_read_ptr__typdef__IO_lock_t(void) ;
extern void __dyc_print_ptr__typdef__IO_lock_t(void const   * const  __dyc_thistype ) ;
extern FILE __dyc_random_typdef_FILE(unsigned int __dyc_exp ) ;
extern FILE __dyc_read_typdef_FILE(void) ;
extern void __dyc_print_typdef_FILE(FILE __dyc_thistype ) ;
extern char **__dyc_random_ptr__ptr__char(unsigned int __dyc_exp ) ;
extern char **__dyc_read_ptr__ptr__char(void) ;
extern void __dyc_print_ptr__ptr__char(char * const  *__dyc_thistype ) ;
