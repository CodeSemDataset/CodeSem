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
#line 149 "/usr/include/x86_64-linux-gnu/bits/types.h"
typedef long __time_t;
#line 164 "/usr/include/x86_64-linux-gnu/bits/types.h"
typedef long __blksize_t;
#line 169 "/usr/include/x86_64-linux-gnu/bits/types.h"
typedef long __blkcnt_t;
#line 212 "/usr/lib/gcc/x86_64-linux-gnu/4.6/include/stddef.h"
typedef unsigned long size_t;
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
extern size_t __dyc_random_typdef_size_t(unsigned int __dyc_exp ) ;
extern size_t __dyc_read_typdef_size_t(void) ;
extern void __dyc_print_typdef_size_t(size_t __dyc_thistype ) ;
extern int *__dyc_random_ptr__int(unsigned int __dyc_exp ) ;
extern int *__dyc_read_ptr__int(void) ;
extern void __dyc_print_ptr__int(int const   *__dyc_thistype ) ;
extern struct stat __dyc_random_comp_31stat(unsigned int __dyc_exp ) ;
extern struct stat __dyc_read_comp_31stat(void) ;
extern void __dyc_print_comp_31stat(struct stat __dyc_thistype ) ;
extern __nlink_t __dyc_random_typdef___nlink_t(unsigned int __dyc_exp ) ;
extern __nlink_t __dyc_read_typdef___nlink_t(void) ;
extern void __dyc_print_typdef___nlink_t(__nlink_t __dyc_thistype ) ;
extern __uid_t __dyc_random_typdef___uid_t(unsigned int __dyc_exp ) ;
extern __uid_t __dyc_read_typdef___uid_t(void) ;
extern void __dyc_print_typdef___uid_t(__uid_t __dyc_thistype ) ;
extern struct stat *__dyc_random_ptr__comp_31stat(unsigned int __dyc_exp ) ;
extern struct stat *__dyc_read_ptr__comp_31stat(void) ;
extern void __dyc_print_ptr__comp_31stat(struct stat  const  * __restrict  __dyc_thistype ) ;
extern __blkcnt_t __dyc_random_typdef___blkcnt_t(unsigned int __dyc_exp ) ;
extern __blkcnt_t __dyc_read_typdef___blkcnt_t(void) ;
extern void __dyc_print_typdef___blkcnt_t(__blkcnt_t __dyc_thistype ) ;
extern __off_t __dyc_random_typdef___off_t(unsigned int __dyc_exp ) ;
extern __off_t __dyc_read_typdef___off_t(void) ;
extern void __dyc_print_typdef___off_t(__off_t __dyc_thistype ) ;
extern struct timespec __dyc_random_comp_3timespec(unsigned int __dyc_exp ) ;
extern struct timespec __dyc_read_comp_3timespec(void) ;
extern void __dyc_print_comp_3timespec(struct timespec __dyc_thistype ) ;
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
extern __blksize_t __dyc_random_typdef___blksize_t(unsigned int __dyc_exp ) ;
extern __blksize_t __dyc_read_typdef___blksize_t(void) ;
extern void __dyc_print_typdef___blksize_t(__blksize_t __dyc_thistype ) ;
extern __ino_t __dyc_random_typdef___ino_t(unsigned int __dyc_exp ) ;
extern __ino_t __dyc_read_typdef___ino_t(void) ;
extern void __dyc_print_typdef___ino_t(__ino_t __dyc_thistype ) ;
