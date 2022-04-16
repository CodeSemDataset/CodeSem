#line 139 "/usr/include/x86_64-linux-gnu/bits/types.h"
typedef unsigned int __mode_t;
#line 141 "/usr/include/x86_64-linux-gnu/bits/types.h"
typedef long __off_t;
#line 142 "/usr/include/x86_64-linux-gnu/bits/types.h"
typedef long __off64_t;
#line 180 "/usr/include/x86_64-linux-gnu/bits/types.h"
typedef long __ssize_t;
#line 24 "/usr/include/x86_64-linux-gnu/bits/termios.h"
typedef unsigned char cc_t;
#line 25 "/usr/include/x86_64-linux-gnu/bits/termios.h"
typedef unsigned int speed_t;
#line 26 "/usr/include/x86_64-linux-gnu/bits/termios.h"
typedef unsigned int tcflag_t;
#line 29 "/usr/include/x86_64-linux-gnu/bits/termios.h"
struct termios {
   tcflag_t c_iflag ;
   tcflag_t c_oflag ;
   tcflag_t c_cflag ;
   tcflag_t c_lflag ;
   cc_t c_line ;
   cc_t c_cc[32] ;
   speed_t c_ispeed ;
   speed_t c_ospeed ;
};
#line 221 "/usr/include/unistd.h"
typedef __ssize_t ssize_t;
#line 212 "/usr/local/lib/gcc/x86_64-unknown-linux-gnu/4.8.2/include/stddef.h"
typedef unsigned long size_t;
#line 71 "/usr/include/x86_64-linux-gnu/sys/types.h"
typedef __mode_t mode_t;
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
#line 28 "/usr/include/x86_64-linux-gnu/bits/ioctl-types.h"
struct winsize {
   unsigned short ws_row ;
   unsigned short ws_col ;
   unsigned short ws_xpixel ;
   unsigned short ws_ypixel ;
};
#line 46 "linenoise.h"
struct linenoiseCompletions {
   size_t len ;
   char **cvec ;
};
#line 46 "linenoise.h"
typedef struct linenoiseCompletions linenoiseCompletions;
#line 51 "linenoise.h"
typedef void linenoiseCompletionCallback(char const   * ,
                                         linenoiseCompletions * );
#line 52 "linenoise.h"
typedef char *linenoiseHintsCallback(char const   * , int *color , int *bold );
#line 53 "linenoise.h"
typedef void linenoiseFreeHintsCallback(void * );
#line 138 "linenoise.c"
struct linenoiseState {
   int ifd ;
   int ofd ;
   char *buf ;
   size_t buflen ;
   char *prompt ;
   size_t plen ;
   size_t pos ;
   size_t oldpos ;
   size_t len ;
   size_t cols ;
   size_t maxrows ;
   int history_index ;
};
#line 451 "linenoise.c"
struct abuf {
   char *b ;
   int len ;
};
extern FILE *__dyc_random_ptr__typdef_FILE(unsigned int __dyc_exp ) ;
extern FILE *__dyc_read_ptr__typdef_FILE(void) ;
extern void __dyc_print_ptr__typdef_FILE(FILE const   *__dyc_thistype ) ;
extern struct termios __dyc_random_comp_2termios(unsigned int __dyc_exp ) ;
extern struct termios __dyc_read_comp_2termios(void) ;
extern void __dyc_print_comp_2termios(struct termios __dyc_thistype ) ;
extern unsigned short **__dyc_random_ptr__ptr__short(unsigned int __dyc_exp ) ;
extern unsigned short **__dyc_read_ptr__ptr__short(void) ;
extern void __dyc_print_ptr__ptr__short(unsigned short const   * const  *__dyc_thistype ) ;
extern int *__dyc_random_ptr__int(unsigned int __dyc_exp ) ;
extern int *__dyc_read_ptr__int(void) ;
extern void __dyc_print_ptr__int(int const   *__dyc_thistype ) ;
extern size_t __dyc_random_typdef_size_t(unsigned int __dyc_exp ) ;
extern size_t __dyc_read_typdef_size_t(void) ;
extern void __dyc_print_typdef_size_t(size_t __dyc_thistype ) ;
extern tcflag_t __dyc_random_typdef_tcflag_t(unsigned int __dyc_exp ) ;
extern tcflag_t __dyc_read_typdef_tcflag_t(void) ;
extern void __dyc_print_typdef_tcflag_t(tcflag_t __dyc_thistype ) ;
extern struct _IO_marker __dyc_random_comp_35_IO_marker(unsigned int __dyc_exp ) ;
extern struct _IO_marker __dyc_read_comp_35_IO_marker(void) ;
extern void __dyc_print_comp_35_IO_marker(struct _IO_marker __dyc_thistype ) ;
extern void *__dyc_random_ptr__typdef_linenoiseFreeHintsCallback(unsigned int __dyc_exp ) ;
extern void *__dyc_read_ptr__typdef_linenoiseFreeHintsCallback(void) ;
extern void __dyc_print_ptr__typdef_linenoiseFreeHintsCallback(void const   * const  __dyc_thistype ) ;
extern void *__dyc_random_ptr__typdef_linenoiseHintsCallback(unsigned int __dyc_exp ) ;
extern void *__dyc_read_ptr__typdef_linenoiseHintsCallback(void) ;
extern void __dyc_print_ptr__typdef_linenoiseHintsCallback(void const   * const  __dyc_thistype ) ;
extern __off_t __dyc_random_typdef___off_t(unsigned int __dyc_exp ) ;
extern __off_t __dyc_read_typdef___off_t(void) ;
extern void __dyc_print_typdef___off_t(__off_t __dyc_thistype ) ;
extern void *__dyc_random_ptr__fun_name_is_not_here(unsigned int __dyc_exp ) ;
extern void *__dyc_read_ptr__fun_name_is_not_here(void) ;
extern void __dyc_print_ptr__fun_name_is_not_here(void const   * const  __dyc_thistype ) ;
extern __mode_t __dyc_random_typdef___mode_t(unsigned int __dyc_exp ) ;
extern __mode_t __dyc_read_typdef___mode_t(void) ;
extern void __dyc_print_typdef___mode_t(__mode_t __dyc_thistype ) ;
extern void *__dyc_random_ptr__void(unsigned int __dyc_exp ) ;
extern void *__dyc_read_ptr__void(void) ;
extern void __dyc_print_ptr__void(void const   * const  __dyc_thistype ) ;
extern unsigned short *__dyc_random_ptr__short(unsigned int __dyc_exp ) ;
extern unsigned short *__dyc_read_ptr__short(void) ;
extern void __dyc_print_ptr__short(unsigned short const   *__dyc_thistype ) ;
extern struct linenoiseState __dyc_random_comp_43linenoiseState(unsigned int __dyc_exp ) ;
extern struct linenoiseState __dyc_read_comp_43linenoiseState(void) ;
extern void __dyc_print_comp_43linenoiseState(struct linenoiseState __dyc_thistype ) ;
extern void *__dyc_random_ptr__typdef_linenoiseCompletionCallback(unsigned int __dyc_exp ) ;
extern void *__dyc_read_ptr__typdef_linenoiseCompletionCallback(void) ;
extern void __dyc_print_ptr__typdef_linenoiseCompletionCallback(void const   * const  __dyc_thistype ) ;
extern char *__dyc_random_ptr__char(unsigned int __dyc_exp ) ;
extern char *__dyc_read_ptr__char(void) ;
extern void __dyc_print_ptr__char(char const   *__dyc_thistype ) ;
extern cc_t __dyc_random_typdef_cc_t(unsigned int __dyc_exp ) ;
extern cc_t __dyc_read_typdef_cc_t(void) ;
extern void __dyc_print_typdef_cc_t(cc_t __dyc_thistype ) ;
extern speed_t __dyc_random_typdef_speed_t(unsigned int __dyc_exp ) ;
extern speed_t __dyc_read_typdef_speed_t(void) ;
extern void __dyc_print_typdef_speed_t(speed_t __dyc_thistype ) ;
extern struct termios *__dyc_random_ptr__comp_2termios(unsigned int __dyc_exp ) ;
extern struct termios *__dyc_read_ptr__comp_2termios(void) ;
extern void __dyc_print_ptr__comp_2termios(struct termios  const  *__dyc_thistype ) ;
extern struct abuf __dyc_random_comp_44abuf(unsigned int __dyc_exp ) ;
extern struct abuf __dyc_read_comp_44abuf(void) ;
extern void __dyc_print_comp_44abuf(struct abuf __dyc_thistype ) ;
extern linenoiseCompletions __dyc_random_typdef_linenoiseCompletions(unsigned int __dyc_exp ) ;
extern linenoiseCompletions __dyc_read_typdef_linenoiseCompletions(void) ;
extern void __dyc_print_typdef_linenoiseCompletions(linenoiseCompletions __dyc_thistype ) ;
extern __off64_t __dyc_random_typdef___off64_t(unsigned int __dyc_exp ) ;
extern __off64_t __dyc_read_typdef___off64_t(void) ;
extern void __dyc_print_typdef___off64_t(__off64_t __dyc_thistype ) ;
extern __ssize_t __dyc_random_typdef___ssize_t(unsigned int __dyc_exp ) ;
extern __ssize_t __dyc_read_typdef___ssize_t(void) ;
extern void __dyc_print_typdef___ssize_t(__ssize_t __dyc_thistype ) ;
extern struct abuf *__dyc_random_ptr__comp_44abuf(unsigned int __dyc_exp ) ;
extern struct abuf *__dyc_read_ptr__comp_44abuf(void) ;
extern void __dyc_print_ptr__comp_44abuf(struct abuf  const  *__dyc_thistype ) ;
extern linenoiseCompletions *__dyc_random_ptr__typdef_linenoiseCompletions(unsigned int __dyc_exp ) ;
extern linenoiseCompletions *__dyc_read_ptr__typdef_linenoiseCompletions(void) ;
extern void __dyc_print_ptr__typdef_linenoiseCompletions(linenoiseCompletions const   *__dyc_thistype ) ;
extern ssize_t __dyc_random_typdef_ssize_t(unsigned int __dyc_exp ) ;
extern ssize_t __dyc_read_typdef_ssize_t(void) ;
extern void __dyc_print_typdef_ssize_t(ssize_t __dyc_thistype ) ;
extern struct _IO_marker *__dyc_random_ptr__comp_35_IO_marker(unsigned int __dyc_exp ) ;
extern struct _IO_marker *__dyc_read_ptr__comp_35_IO_marker(void) ;
extern void __dyc_print_ptr__comp_35_IO_marker(struct _IO_marker  const  *__dyc_thistype ) ;
extern mode_t __dyc_random_typdef_mode_t(unsigned int __dyc_exp ) ;
extern mode_t __dyc_read_typdef_mode_t(void) ;
extern void __dyc_print_typdef_mode_t(mode_t __dyc_thistype ) ;
extern struct _IO_FILE __dyc_random_comp_29_IO_FILE(unsigned int __dyc_exp ) ;
extern struct _IO_FILE __dyc_read_comp_29_IO_FILE(void) ;
extern void __dyc_print_comp_29_IO_FILE(struct _IO_FILE __dyc_thistype ) ;
extern void *__dyc_random_ptr__typdef__IO_lock_t(unsigned int __dyc_exp ) ;
extern void *__dyc_read_ptr__typdef__IO_lock_t(void) ;
extern void __dyc_print_ptr__typdef__IO_lock_t(void const   * const  __dyc_thistype ) ;
extern struct linenoiseCompletions __dyc_random_comp_42linenoiseCompletions(unsigned int __dyc_exp ) ;
extern struct linenoiseCompletions __dyc_read_comp_42linenoiseCompletions(void) ;
extern void __dyc_print_comp_42linenoiseCompletions(struct linenoiseCompletions __dyc_thistype ) ;
extern struct _IO_FILE *__dyc_random_ptr__comp_29_IO_FILE(unsigned int __dyc_exp ) ;
extern struct _IO_FILE *__dyc_read_ptr__comp_29_IO_FILE(void) ;
extern void __dyc_print_ptr__comp_29_IO_FILE(struct _IO_FILE  const  *__dyc_thistype ) ;
extern FILE __dyc_random_typdef_FILE(unsigned int __dyc_exp ) ;
extern FILE __dyc_read_typdef_FILE(void) ;
extern void __dyc_print_typdef_FILE(FILE __dyc_thistype ) ;
extern struct linenoiseState *__dyc_random_ptr__comp_43linenoiseState(unsigned int __dyc_exp ) ;
extern struct linenoiseState *__dyc_read_ptr__comp_43linenoiseState(void) ;
extern void __dyc_print_ptr__comp_43linenoiseState(struct linenoiseState  const  *__dyc_thistype ) ;
extern struct winsize __dyc_random_comp_40winsize(unsigned int __dyc_exp ) ;
extern struct winsize __dyc_read_comp_40winsize(void) ;
extern void __dyc_print_comp_40winsize(struct winsize __dyc_thistype ) ;
extern char **__dyc_random_ptr__ptr__char(unsigned int __dyc_exp ) ;
extern char **__dyc_read_ptr__ptr__char(void) ;
extern void __dyc_print_ptr__ptr__char(char * const  *__dyc_thistype ) ;
