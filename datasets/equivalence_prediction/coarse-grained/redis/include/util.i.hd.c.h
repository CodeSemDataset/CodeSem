#line 212 "/usr/local/lib/gcc/x86_64-unknown-linux-gnu/4.8.2/include/stddef.h"
typedef unsigned long size_t;
#line 41 "/usr/include/x86_64-linux-gnu/bits/types.h"
typedef int __int32_t;
#line 141 "/usr/include/x86_64-linux-gnu/bits/types.h"
typedef long __off_t;
#line 142 "/usr/include/x86_64-linux-gnu/bits/types.h"
typedef long __off64_t;
#line 143 "/usr/include/x86_64-linux-gnu/bits/types.h"
typedef int __pid_t;
#line 149 "/usr/include/x86_64-linux-gnu/bits/types.h"
typedef long __time_t;
#line 151 "/usr/include/x86_64-linux-gnu/bits/types.h"
typedef long __suseconds_t;
#line 180 "/usr/include/x86_64-linux-gnu/bits/types.h"
typedef long __ssize_t;
#line 99 "/usr/include/x86_64-linux-gnu/sys/types.h"
typedef __pid_t pid_t;
#line 110 "/usr/include/x86_64-linux-gnu/sys/types.h"
typedef __ssize_t ssize_t;
#line 198 "/usr/include/x86_64-linux-gnu/sys/types.h"
typedef long long int64_t;
#line 31 "/usr/include/x86_64-linux-gnu/bits/time.h"
struct timeval {
   __time_t tv_sec ;
   __suseconds_t tv_usec ;
};
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
#line 57 "/usr/include/x86_64-linux-gnu/sys/time.h"
struct timezone {
   int tz_minuteswest ;
   int tz_dsttime ;
};
#line 63 "/usr/include/x86_64-linux-gnu/sys/time.h"
typedef struct timezone *__timezone_ptr_t;
#line 49 "/usr/include/stdint.h"
typedef unsigned char uint8_t;
#line 50 "/usr/include/stdint.h"
typedef unsigned short uint16_t;
#line 52 "/usr/include/stdint.h"
typedef unsigned int uint32_t;
#line 56 "/usr/include/stdint.h"
typedef unsigned long uint64_t;
#line 42 "sds.h"
typedef char *sds;
#line 50 "sds.h"
struct sdshdr8 {
   uint8_t len ;
   uint8_t alloc ;
   unsigned char flags ;
   char buf[] ;
};
#line 56 "sds.h"
struct sdshdr16 {
   uint16_t len ;
   uint16_t alloc ;
   unsigned char flags ;
   char buf[] ;
};
#line 62 "sds.h"
struct sdshdr32 {
   uint32_t len ;
   uint32_t alloc ;
   unsigned char flags ;
   char buf[] ;
};
#line 68 "sds.h"
struct sdshdr64 {
   uint64_t len ;
   uint64_t alloc ;
   unsigned char flags ;
   char buf[] ;
};
#line 10 "sha1.h"
struct __anonstruct_SHA1_CTX_33 {
   uint32_t state[5] ;
   uint32_t count[2] ;
   unsigned char buffer[64] ;
};
#line 10 "sha1.h"
typedef struct __anonstruct_SHA1_CTX_33 SHA1_CTX;
extern struct sdshdr16 __dyc_random_comp_47sdshdr16(unsigned int __dyc_exp ) ;
extern struct sdshdr16 __dyc_read_comp_47sdshdr16(void) ;
extern void __dyc_print_comp_47sdshdr16(struct sdshdr16 __dyc_thistype ) ;
extern FILE *__dyc_random_ptr__typdef_FILE(unsigned int __dyc_exp ) ;
extern FILE *__dyc_read_ptr__typdef_FILE(void) ;
extern void __dyc_print_ptr__typdef_FILE(FILE const   *__dyc_thistype ) ;
extern struct timezone *__dyc_random_ptr__comp_43timezone(unsigned int __dyc_exp ) ;
extern struct timezone *__dyc_read_ptr__comp_43timezone(void) ;
extern void __dyc_print_ptr__comp_43timezone(struct timezone  const  *__dyc_thistype ) ;
extern struct sdshdr16 *__dyc_random_ptr__comp_47sdshdr16(unsigned int __dyc_exp ) ;
extern struct sdshdr16 *__dyc_read_ptr__comp_47sdshdr16(void) ;
extern void __dyc_print_ptr__comp_47sdshdr16(struct sdshdr16  const  *__dyc_thistype ) ;
extern unsigned short **__dyc_random_ptr__ptr__short(unsigned int __dyc_exp ) ;
extern unsigned short **__dyc_read_ptr__ptr__short(void) ;
extern void __dyc_print_ptr__ptr__short(unsigned short const   * const  *__dyc_thistype ) ;
extern int *__dyc_random_ptr__int(unsigned int __dyc_exp ) ;
extern int *__dyc_read_ptr__int(void) ;
extern void __dyc_print_ptr__int(int const   *__dyc_thistype ) ;
extern size_t __dyc_random_typdef_size_t(unsigned int __dyc_exp ) ;
extern size_t __dyc_read_typdef_size_t(void) ;
extern void __dyc_print_typdef_size_t(size_t __dyc_thistype ) ;
extern SHA1_CTX __dyc_random_typdef_SHA1_CTX(unsigned int __dyc_exp ) ;
extern SHA1_CTX __dyc_read_typdef_SHA1_CTX(void) ;
extern void __dyc_print_typdef_SHA1_CTX(SHA1_CTX __dyc_thistype ) ;
extern long long *__dyc_random_ptr__longlong(unsigned int __dyc_exp ) ;
extern long long *__dyc_read_ptr__longlong(void) ;
extern void __dyc_print_ptr__longlong(long long const   *__dyc_thistype ) ;
extern int64_t __dyc_random_typdef_int64_t(unsigned int __dyc_exp ) ;
extern int64_t __dyc_read_typdef_int64_t(void) ;
extern void __dyc_print_typdef_int64_t(int64_t __dyc_thistype ) ;
extern SHA1_CTX *__dyc_random_ptr__typdef_SHA1_CTX(unsigned int __dyc_exp ) ;
extern SHA1_CTX *__dyc_read_ptr__typdef_SHA1_CTX(void) ;
extern void __dyc_print_ptr__typdef_SHA1_CTX(SHA1_CTX const   *__dyc_thistype ) ;
extern struct sdshdr64 __dyc_random_comp_49sdshdr64(unsigned int __dyc_exp ) ;
extern struct sdshdr64 __dyc_read_comp_49sdshdr64(void) ;
extern void __dyc_print_comp_49sdshdr64(struct sdshdr64 __dyc_thistype ) ;
extern long *__dyc_random_ptr__long(unsigned int __dyc_exp ) ;
extern long *__dyc_read_ptr__long(void) ;
extern void __dyc_print_ptr__long(long const   *__dyc_thistype ) ;
extern struct _IO_marker __dyc_random_comp_36_IO_marker(unsigned int __dyc_exp ) ;
extern struct _IO_marker __dyc_read_comp_36_IO_marker(void) ;
extern void __dyc_print_comp_36_IO_marker(struct _IO_marker __dyc_thistype ) ;
extern __off_t __dyc_random_typdef___off_t(unsigned int __dyc_exp ) ;
extern __off_t __dyc_read_typdef___off_t(void) ;
extern void __dyc_print_typdef___off_t(__off_t __dyc_thistype ) ;
extern struct sdshdr64 *__dyc_random_ptr__comp_49sdshdr64(unsigned int __dyc_exp ) ;
extern struct sdshdr64 *__dyc_read_ptr__comp_49sdshdr64(void) ;
extern void __dyc_print_ptr__comp_49sdshdr64(struct sdshdr64  const  *__dyc_thistype ) ;
extern long double *__dyc_random_ptr__double(unsigned int __dyc_exp ) ;
extern long double *__dyc_read_ptr__double(void) ;
extern void __dyc_print_ptr__double(long double const   *__dyc_thistype ) ;
extern void *__dyc_random_ptr__void(unsigned int __dyc_exp ) ;
extern void *__dyc_read_ptr__void(void) ;
extern void __dyc_print_ptr__void(void const   * const  __dyc_thistype ) ;
extern __suseconds_t __dyc_random_typdef___suseconds_t(unsigned int __dyc_exp ) ;
extern __suseconds_t __dyc_read_typdef___suseconds_t(void) ;
extern void __dyc_print_typdef___suseconds_t(__suseconds_t __dyc_thistype ) ;
extern __int32_t **__dyc_random_ptr__ptr__typdef___int32_t(unsigned int __dyc_exp ) ;
extern __int32_t **__dyc_read_ptr__ptr__typdef___int32_t(void) ;
extern void __dyc_print_ptr__ptr__typdef___int32_t(__int32_t const   * const  *__dyc_thistype ) ;
extern unsigned short *__dyc_random_ptr__short(unsigned int __dyc_exp ) ;
extern unsigned short *__dyc_read_ptr__short(void) ;
extern void __dyc_print_ptr__short(unsigned short const   *__dyc_thistype ) ;
extern sds __dyc_random_typdef_sds(unsigned int __dyc_exp ) ;
extern sds __dyc_read_typdef_sds(void) ;
extern void __dyc_print_typdef_sds(sds __dyc_thistype ) ;
extern char *__dyc_random_ptr__char(unsigned int __dyc_exp ) ;
extern char *__dyc_read_ptr__char(void) ;
extern void __dyc_print_ptr__char(char const   *__dyc_thistype ) ;
extern struct _IO_FILE __dyc_random_comp_30_IO_FILE(unsigned int __dyc_exp ) ;
extern struct _IO_FILE __dyc_read_comp_30_IO_FILE(void) ;
extern void __dyc_print_comp_30_IO_FILE(struct _IO_FILE __dyc_thistype ) ;
extern __time_t __dyc_random_typdef___time_t(unsigned int __dyc_exp ) ;
extern __time_t __dyc_read_typdef___time_t(void) ;
extern void __dyc_print_typdef___time_t(__time_t __dyc_thistype ) ;
extern struct _IO_FILE *__dyc_random_ptr__comp_30_IO_FILE(unsigned int __dyc_exp ) ;
extern struct _IO_FILE *__dyc_read_ptr__comp_30_IO_FILE(void) ;
extern void __dyc_print_ptr__comp_30_IO_FILE(struct _IO_FILE  const  *__dyc_thistype ) ;
extern struct sdshdr32 __dyc_random_comp_48sdshdr32(unsigned int __dyc_exp ) ;
extern struct sdshdr32 __dyc_read_comp_48sdshdr32(void) ;
extern void __dyc_print_comp_48sdshdr32(struct sdshdr32 __dyc_thistype ) ;
extern __pid_t __dyc_random_typdef___pid_t(unsigned int __dyc_exp ) ;
extern __pid_t __dyc_read_typdef___pid_t(void) ;
extern void __dyc_print_typdef___pid_t(__pid_t __dyc_thistype ) ;
extern uint32_t __dyc_random_typdef_uint32_t(unsigned int __dyc_exp ) ;
extern uint32_t __dyc_read_typdef_uint32_t(void) ;
extern void __dyc_print_typdef_uint32_t(uint32_t __dyc_thistype ) ;
extern struct sdshdr32 *__dyc_random_ptr__comp_48sdshdr32(unsigned int __dyc_exp ) ;
extern struct sdshdr32 *__dyc_read_ptr__comp_48sdshdr32(void) ;
extern void __dyc_print_ptr__comp_48sdshdr32(struct sdshdr32  const  *__dyc_thistype ) ;
extern struct sdshdr8 *__dyc_random_ptr__comp_46sdshdr8(unsigned int __dyc_exp ) ;
extern struct sdshdr8 *__dyc_read_ptr__comp_46sdshdr8(void) ;
extern void __dyc_print_ptr__comp_46sdshdr8(struct sdshdr8  const  *__dyc_thistype ) ;
extern struct timeval *__dyc_random_ptr__comp_13timeval(unsigned int __dyc_exp ) ;
extern struct timeval *__dyc_read_ptr__comp_13timeval(void) ;
extern void __dyc_print_ptr__comp_13timeval(struct timeval  const  * __restrict  __dyc_thistype ) ;
extern struct __anonstruct_SHA1_CTX_33 __dyc_random_comp_50__anonstruct_SHA1_CTX_33(unsigned int __dyc_exp ) ;
extern struct __anonstruct_SHA1_CTX_33 __dyc_read_comp_50__anonstruct_SHA1_CTX_33(void) ;
extern void __dyc_print_comp_50__anonstruct_SHA1_CTX_33(struct __anonstruct_SHA1_CTX_33 __dyc_thistype ) ;
extern __int32_t __dyc_random_typdef___int32_t(unsigned int __dyc_exp ) ;
extern __int32_t __dyc_read_typdef___int32_t(void) ;
extern void __dyc_print_typdef___int32_t(__int32_t __dyc_thistype ) ;
extern __off64_t __dyc_random_typdef___off64_t(unsigned int __dyc_exp ) ;
extern __off64_t __dyc_read_typdef___off64_t(void) ;
extern void __dyc_print_typdef___off64_t(__off64_t __dyc_thistype ) ;
extern uint8_t __dyc_random_typdef_uint8_t(unsigned int __dyc_exp ) ;
extern uint8_t __dyc_read_typdef_uint8_t(void) ;
extern void __dyc_print_typdef_uint8_t(uint8_t __dyc_thistype ) ;
extern uint16_t __dyc_random_typdef_uint16_t(unsigned int __dyc_exp ) ;
extern uint16_t __dyc_read_typdef_uint16_t(void) ;
extern void __dyc_print_typdef_uint16_t(uint16_t __dyc_thistype ) ;
extern __ssize_t __dyc_random_typdef___ssize_t(unsigned int __dyc_exp ) ;
extern __ssize_t __dyc_read_typdef___ssize_t(void) ;
extern void __dyc_print_typdef___ssize_t(__ssize_t __dyc_thistype ) ;
extern __timezone_ptr_t __dyc_random_typdef___timezone_ptr_t(unsigned int __dyc_exp ) ;
extern __timezone_ptr_t __dyc_read_typdef___timezone_ptr_t(void) ;
extern void __dyc_print_typdef___timezone_ptr_t(__timezone_ptr_t __dyc_thistype ) ;
extern ssize_t __dyc_random_typdef_ssize_t(unsigned int __dyc_exp ) ;
extern ssize_t __dyc_read_typdef_ssize_t(void) ;
extern void __dyc_print_typdef_ssize_t(ssize_t __dyc_thistype ) ;
extern __int32_t *__dyc_random_ptr__typdef___int32_t(unsigned int __dyc_exp ) ;
extern __int32_t *__dyc_read_ptr__typdef___int32_t(void) ;
extern void __dyc_print_ptr__typdef___int32_t(__int32_t const   *__dyc_thistype ) ;
extern struct _IO_marker *__dyc_random_ptr__comp_36_IO_marker(unsigned int __dyc_exp ) ;
extern struct _IO_marker *__dyc_read_ptr__comp_36_IO_marker(void) ;
extern void __dyc_print_ptr__comp_36_IO_marker(struct _IO_marker  const  *__dyc_thistype ) ;
extern void *__dyc_random_ptr__typdef__IO_lock_t(unsigned int __dyc_exp ) ;
extern void *__dyc_read_ptr__typdef__IO_lock_t(void) ;
extern void __dyc_print_ptr__typdef__IO_lock_t(void const   * const  __dyc_thistype ) ;
extern pid_t __dyc_random_typdef_pid_t(unsigned int __dyc_exp ) ;
extern pid_t __dyc_read_typdef_pid_t(void) ;
extern void __dyc_print_typdef_pid_t(pid_t __dyc_thistype ) ;
extern struct sdshdr8 __dyc_random_comp_46sdshdr8(unsigned int __dyc_exp ) ;
extern struct sdshdr8 __dyc_read_comp_46sdshdr8(void) ;
extern void __dyc_print_comp_46sdshdr8(struct sdshdr8 __dyc_thistype ) ;
extern struct timeval __dyc_random_comp_13timeval(unsigned int __dyc_exp ) ;
extern struct timeval __dyc_read_comp_13timeval(void) ;
extern void __dyc_print_comp_13timeval(struct timeval __dyc_thistype ) ;
extern FILE __dyc_random_typdef_FILE(unsigned int __dyc_exp ) ;
extern FILE __dyc_read_typdef_FILE(void) ;
extern void __dyc_print_typdef_FILE(FILE __dyc_thistype ) ;
extern uint64_t __dyc_random_typdef_uint64_t(unsigned int __dyc_exp ) ;
extern uint64_t __dyc_read_typdef_uint64_t(void) ;
extern void __dyc_print_typdef_uint64_t(uint64_t __dyc_thistype ) ;
extern char **__dyc_random_ptr__ptr__char(unsigned int __dyc_exp ) ;
extern char **__dyc_read_ptr__ptr__char(void) ;
extern void __dyc_print_ptr__ptr__char(char * const  * __restrict  __dyc_thistype ) ;
extern struct timezone __dyc_random_comp_43timezone(unsigned int __dyc_exp ) ;
extern struct timezone __dyc_read_comp_43timezone(void) ;
extern void __dyc_print_comp_43timezone(struct timezone __dyc_thistype ) ;
