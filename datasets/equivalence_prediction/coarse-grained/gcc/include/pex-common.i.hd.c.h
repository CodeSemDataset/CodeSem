#line 212 "/usr/lib/gcc/x86_64-linux-gnu/4.6/include/stddef.h"
typedef unsigned long size_t;
#line 141 "/usr/include/x86_64-linux-gnu/bits/types.h"
typedef long __off_t;
#line 142 "/usr/include/x86_64-linux-gnu/bits/types.h"
typedef long __off64_t;
#line 143 "/usr/include/x86_64-linux-gnu/bits/types.h"
typedef int __pid_t;
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
#line 428 "/home/chenqian/Downloads/eqminer_gcc/../gcc-10.3.0/libiberty/../include/libiberty.h"
struct pex_obj;
#line 591 "/home/chenqian/Downloads/eqminer_gcc/../gcc-10.3.0/libiberty/../include/libiberty.h"
struct pex_time {
   unsigned long user_seconds ;
   unsigned long user_microseconds ;
   unsigned long system_seconds ;
   unsigned long system_microseconds ;
};
#line 99 "/usr/include/x86_64-linux-gnu/sys/types.h"
typedef __pid_t pid_t;
#line 53 "/home/chenqian/Downloads/eqminer_gcc/../gcc-10.3.0/libiberty/pex-common.h"
struct pex_funcs;
#line 53 "/home/chenqian/Downloads/eqminer_gcc/../gcc-10.3.0/libiberty/pex-common.h"
struct pex_obj {
   int flags ;
   char *pname ;
   char *tempbase ;
   int next_input ;
   char *next_input_name ;
   int next_input_name_allocated ;
   int stderr_pipe ;
   int count ;
   pid_t *children ;
   int *status ;
   struct pex_time *time ;
   int number_waited ;
   FILE *input_file ;
   FILE *read_output ;
   FILE *read_err ;
   int remove_count ;
   char **remove ;
   struct pex_funcs *funcs ;
   void *sysdep ;
};
#line 98 "/home/chenqian/Downloads/eqminer_gcc/../gcc-10.3.0/libiberty/pex-common.h"
struct pex_funcs {
   int (*open_read)(struct pex_obj * , char const   * , int  ) ;
   int (*open_write)(struct pex_obj * , char const   * , int  , int  ) ;
   pid_t (*exec_child)(struct pex_obj * , int  , char const   * ,
                       char * const  * , char * const  * , int  , int  , int  ,
                       int  , char const   ** , int * ) ;
   int (*close)(struct pex_obj * , int  ) ;
   pid_t (*wait)(struct pex_obj * , pid_t  , int * , struct pex_time * , int  ,
                 char const   ** , int * ) ;
   int (*pipe)(struct pex_obj * , int * , int  ) ;
   FILE *(*fdopenr)(struct pex_obj * , int  , int  ) ;
   FILE *(*fdopenw)(struct pex_obj * , int  , int  ) ;
   void (*cleanup)(struct pex_obj * ) ;
};
extern FILE *__dyc_random_ptr__typdef_FILE(unsigned int __dyc_exp ) ;
extern FILE *__dyc_read_ptr__typdef_FILE(void) ;
extern void __dyc_print_ptr__typdef_FILE(FILE const   *__dyc_thistype ) ;
extern struct pex_obj *__dyc_random_ptr__comp_13pex_obj(unsigned int __dyc_exp ) ;
extern struct pex_obj *__dyc_read_ptr__comp_13pex_obj(void) ;
extern void __dyc_print_ptr__comp_13pex_obj(struct pex_obj  const  *__dyc_thistype ) ;
extern pid_t *__dyc_random_ptr__typdef_pid_t(unsigned int __dyc_exp ) ;
extern pid_t *__dyc_read_ptr__typdef_pid_t(void) ;
extern void __dyc_print_ptr__typdef_pid_t(pid_t const   *__dyc_thistype ) ;
extern int *__dyc_random_ptr__int(unsigned int __dyc_exp ) ;
extern int *__dyc_read_ptr__int(void) ;
extern void __dyc_print_ptr__int(int const   *__dyc_thistype ) ;
extern size_t __dyc_random_typdef_size_t(unsigned int __dyc_exp ) ;
extern size_t __dyc_read_typdef_size_t(void) ;
extern void __dyc_print_typdef_size_t(size_t __dyc_thistype ) ;
extern struct _IO_marker __dyc_random_comp_8_IO_marker(unsigned int __dyc_exp ) ;
extern struct _IO_marker __dyc_read_comp_8_IO_marker(void) ;
extern void __dyc_print_comp_8_IO_marker(struct _IO_marker __dyc_thistype ) ;
extern struct pex_time __dyc_random_comp_14pex_time(unsigned int __dyc_exp ) ;
extern struct pex_time __dyc_read_comp_14pex_time(void) ;
extern void __dyc_print_comp_14pex_time(struct pex_time __dyc_thistype ) ;
extern __off_t __dyc_random_typdef___off_t(unsigned int __dyc_exp ) ;
extern __off_t __dyc_read_typdef___off_t(void) ;
extern void __dyc_print_typdef___off_t(__off_t __dyc_thistype ) ;
extern struct _IO_marker *__dyc_random_ptr__comp_8_IO_marker(unsigned int __dyc_exp ) ;
extern struct _IO_marker *__dyc_read_ptr__comp_8_IO_marker(void) ;
extern void __dyc_print_ptr__comp_8_IO_marker(struct _IO_marker  const  *__dyc_thistype ) ;
extern void *__dyc_random_ptr__fun_name_is_not_here(unsigned int __dyc_exp ) ;
extern void *__dyc_read_ptr__fun_name_is_not_here(void) ;
extern void __dyc_print_ptr__fun_name_is_not_here(void const   * const  __dyc_thistype ) ;
extern struct pex_time *__dyc_random_ptr__comp_14pex_time(unsigned int __dyc_exp ) ;
extern struct pex_time *__dyc_read_ptr__comp_14pex_time(void) ;
extern void __dyc_print_ptr__comp_14pex_time(struct pex_time  const  *__dyc_thistype ) ;
extern void *__dyc_random_ptr__void(unsigned int __dyc_exp ) ;
extern void *__dyc_read_ptr__void(void) ;
extern void __dyc_print_ptr__void(void const   * const  __dyc_thistype ) ;
extern struct pex_obj __dyc_random_comp_13pex_obj(unsigned int __dyc_exp ) ;
extern struct pex_obj __dyc_read_comp_13pex_obj(void) ;
extern void __dyc_print_comp_13pex_obj(struct pex_obj __dyc_thistype ) ;
extern char *__dyc_random_ptr__char(unsigned int __dyc_exp ) ;
extern char *__dyc_read_ptr__char(void) ;
extern void __dyc_print_ptr__char(char const   *__dyc_thistype ) ;
extern struct pex_funcs __dyc_random_comp_32pex_funcs(unsigned int __dyc_exp ) ;
extern struct pex_funcs __dyc_read_comp_32pex_funcs(void) ;
extern void __dyc_print_comp_32pex_funcs(struct pex_funcs __dyc_thistype ) ;
extern struct _IO_FILE *__dyc_random_ptr__comp_2_IO_FILE(unsigned int __dyc_exp ) ;
extern struct _IO_FILE *__dyc_read_ptr__comp_2_IO_FILE(void) ;
extern void __dyc_print_ptr__comp_2_IO_FILE(struct _IO_FILE  const  *__dyc_thistype ) ;
extern __pid_t __dyc_random_typdef___pid_t(unsigned int __dyc_exp ) ;
extern __pid_t __dyc_read_typdef___pid_t(void) ;
extern void __dyc_print_typdef___pid_t(__pid_t __dyc_thistype ) ;
extern struct pex_funcs *__dyc_random_ptr__comp_32pex_funcs(unsigned int __dyc_exp ) ;
extern struct pex_funcs *__dyc_read_ptr__comp_32pex_funcs(void) ;
extern void __dyc_print_ptr__comp_32pex_funcs(struct pex_funcs  const  *__dyc_thistype ) ;
extern __off64_t __dyc_random_typdef___off64_t(unsigned int __dyc_exp ) ;
extern __off64_t __dyc_read_typdef___off64_t(void) ;
extern void __dyc_print_typdef___off64_t(__off64_t __dyc_thistype ) ;
extern struct _IO_FILE __dyc_random_comp_2_IO_FILE(unsigned int __dyc_exp ) ;
extern struct _IO_FILE __dyc_read_comp_2_IO_FILE(void) ;
extern void __dyc_print_comp_2_IO_FILE(struct _IO_FILE __dyc_thistype ) ;
extern void *__dyc_random_ptr__typdef__IO_lock_t(unsigned int __dyc_exp ) ;
extern void *__dyc_read_ptr__typdef__IO_lock_t(void) ;
extern void __dyc_print_ptr__typdef__IO_lock_t(void const   * const  __dyc_thistype ) ;
extern pid_t __dyc_random_typdef_pid_t(unsigned int __dyc_exp ) ;
extern pid_t __dyc_read_typdef_pid_t(void) ;
extern void __dyc_print_typdef_pid_t(pid_t __dyc_thistype ) ;
extern FILE __dyc_random_typdef_FILE(unsigned int __dyc_exp ) ;
extern FILE __dyc_read_typdef_FILE(void) ;
extern void __dyc_print_typdef_FILE(FILE __dyc_thistype ) ;
extern char **__dyc_random_ptr__ptr__char(unsigned int __dyc_exp ) ;
extern char **__dyc_read_ptr__ptr__char(void) ;
extern void __dyc_print_ptr__ptr__char(char * const  *__dyc_thistype ) ;
