#line 31 "/usr/include/x86_64-linux-gnu/bits/types.h"
typedef unsigned char __u_char;
#line 32 "/usr/include/x86_64-linux-gnu/bits/types.h"
typedef unsigned short __u_short;
#line 33 "/usr/include/x86_64-linux-gnu/bits/types.h"
typedef unsigned int __u_int;
#line 135 "/usr/include/x86_64-linux-gnu/bits/types.h"
typedef unsigned int __uid_t;
#line 136 "/usr/include/x86_64-linux-gnu/bits/types.h"
typedef unsigned int __gid_t;
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
#line 34 "/usr/include/x86_64-linux-gnu/sys/types.h"
typedef __u_char u_char;
#line 35 "/usr/include/x86_64-linux-gnu/sys/types.h"
typedef __u_short u_short;
#line 36 "/usr/include/x86_64-linux-gnu/sys/types.h"
typedef __u_int u_int;
#line 99 "/usr/include/x86_64-linux-gnu/sys/types.h"
typedef __pid_t pid_t;
#line 212 "/usr/local/lib/gcc/x86_64-unknown-linux-gnu/4.8.2/include/stddef.h"
typedef unsigned long size_t;
#line 31 "/usr/include/x86_64-linux-gnu/bits/time.h"
struct timeval {
   __time_t tv_sec ;
   __suseconds_t tv_usec ;
};
#line 50 "/usr/include/pwd.h"
struct passwd {
   char *pw_name ;
   char *pw_passwd ;
   __uid_t pw_uid ;
   __gid_t pw_gid ;
   char *pw_gecos ;
   char *pw_dir ;
   char *pw_shell ;
};
#line 45 "/usr/include/stdio.h"
struct _IO_FILE;
#line 45
struct _IO_FILE;
#line 49 "/usr/include/stdio.h"
typedef struct _IO_FILE FILE;
#line 324 "/usr/local/lib/gcc/x86_64-unknown-linux-gnu/4.8.2/include/stddef.h"
typedef int wchar_t;
#line 40 "/usr/local/lib/gcc/x86_64-unknown-linux-gnu/4.8.2/include/stdarg.h"
typedef __builtin_va_list __gnuc_va_list;
#line 98 "/usr/local/lib/gcc/x86_64-unknown-linux-gnu/4.8.2/include/stdarg.h"
typedef __gnuc_va_list va_list;
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
#line 49 "/usr/include/stdint.h"
typedef unsigned char uint8_t;
#line 56 "/usr/include/stdint.h"
typedef unsigned long uint64_t;
#line 217 "/usr/local/include/event2/event.h"
struct event_base;
#line 217
struct event_base;
#line 276
struct event;
#line 276
struct event;
#line 105 "/usr/local/include/event2/event_struct.h"
struct event;
#line 107 "/usr/local/include/event2/event_struct.h"
struct __anonstruct_evcb_active_next_42 {
   struct event_callback *tqe_next ;
   struct event_callback **tqe_prev ;
};
#line 107 "/usr/local/include/event2/event_struct.h"
union __anonunion_evcb_cb_union_43 {
   void (*evcb_callback)(int  , short  , void * ) ;
   void (*evcb_selfcb)(struct event_callback * , void * ) ;
   void (*evcb_evfinalize)(struct event * , void * ) ;
   void (*evcb_cbfinalize)(struct event_callback * , void * ) ;
};
#line 107 "/usr/local/include/event2/event_struct.h"
struct event_callback {
   struct __anonstruct_evcb_active_next_42 evcb_active_next ;
   short evcb_flags ;
   uint8_t evcb_pri ;
   uint8_t evcb_closure ;
   union __anonunion_evcb_cb_union_43 evcb_cb_union ;
   void *evcb_arg ;
};
#line 122
struct event_base;
#line 123 "/usr/local/include/event2/event_struct.h"
struct __anonstruct_ev_next_with_common_timeout_45 {
   struct event *tqe_next ;
   struct event **tqe_prev ;
};
#line 123 "/usr/local/include/event2/event_struct.h"
union __anonunion_ev_timeout_pos_44 {
   struct __anonstruct_ev_next_with_common_timeout_45 ev_next_with_common_timeout ;
   int min_heap_idx ;
};
#line 123 "/usr/local/include/event2/event_struct.h"
struct __anonstruct_ev_io_next_48 {
   struct event *le_next ;
   struct event **le_prev ;
};
#line 123 "/usr/local/include/event2/event_struct.h"
struct __anonstruct_ev_io_47 {
   struct __anonstruct_ev_io_next_48 ev_io_next ;
   struct timeval ev_timeout ;
};
#line 123 "/usr/local/include/event2/event_struct.h"
struct __anonstruct_ev_signal_next_50 {
   struct event *le_next ;
   struct event **le_prev ;
};
#line 123 "/usr/local/include/event2/event_struct.h"
struct __anonstruct_ev_signal_49 {
   struct __anonstruct_ev_signal_next_50 ev_signal_next ;
   short ev_ncalls ;
   short *ev_pncalls ;
};
#line 123 "/usr/local/include/event2/event_struct.h"
union __anonunion_ev__46 {
   struct __anonstruct_ev_io_47 ev_io ;
   struct __anonstruct_ev_signal_49 ev_signal ;
};
#line 123 "/usr/local/include/event2/event_struct.h"
struct event {
   struct event_callback ev_evcallback ;
   union __anonunion_ev_timeout_pos_44 ev_timeout_pos ;
   int ev_fd ;
   struct event_base *ev_base ;
   union __anonunion_ev__46 ev_ ;
   short ev_events ;
   short ev_res ;
   struct timeval ev_timeout ;
};
#line 97 "/usr/local/include/event2/buffer.h"
struct evbuffer;
#line 97
struct evbuffer;
#line 1046
struct event_base;
#line 113 "/usr/local/include/event2/bufferevent.h"
struct bufferevent;
#line 113
struct bufferevent;
#line 118
struct event_base;
#line 119
struct evbuffer;
#line 57 "/usr/local/include/event2/bufferevent_struct.h"
struct event_watermark {
   size_t low ;
   size_t high ;
};
#line 70
struct bufferevent_ops;
#line 70 "/usr/local/include/event2/bufferevent_struct.h"
struct bufferevent {
   struct event_base *ev_base ;
   struct bufferevent_ops *be_ops ;
   struct event ev_read ;
   struct event ev_write ;
   struct evbuffer *input ;
   struct evbuffer *output ;
   struct event_watermark wm_read ;
   struct event_watermark wm_write ;
   void (*readcb)(struct bufferevent *bev , void *ctx ) ;
   void (*writecb)(struct bufferevent *bev , void *ctx ) ;
   void (*errorcb)(struct bufferevent *bev , short what , void *ctx ) ;
   void *cbarg ;
   struct timeval timeout_read ;
   struct timeval timeout_write ;
   short enabled ;
};
#line 48 "compat/bitstring.h"
typedef unsigned char bitstr_t;
#line 39 "tmux.h"
struct args;
#line 39
struct args;
#line 41
struct client;
#line 41
struct client;
#line 42
struct cmd;
#line 42
struct cmd;
#line 43
struct cmd_find_state;
#line 43
struct cmd_find_state;
#line 44
struct cmdq_item;
#line 44
struct cmdq_item;
#line 45
struct cmdq_list;
#line 45
struct cmdq_list;
#line 46
struct cmdq_state;
#line 46
struct cmdq_state;
#line 47
struct cmds;
#line 47
struct cmds;
#line 48
struct control_state;
#line 48
struct control_state;
#line 49
struct environ;
#line 49
struct environ;
#line 50
struct format_job_tree;
#line 50
struct format_job_tree;
#line 51
struct format_tree;
#line 51
struct format_tree;
#line 52
struct input_ctx;
#line 52
struct input_ctx;
#line 55
struct mouse_event;
#line 55
struct mouse_event;
#line 56
struct options;
#line 56
struct options;
#line 60
struct screen_write_cline;
#line 60
struct screen_write_cline;
#line 62
struct session;
#line 62
struct session;
#line 64
struct tmuxpeer;
#line 64
struct tmuxpeer;
#line 66
struct winlink;
#line 66
struct winlink;
#line 177 "tmux.h"
typedef unsigned long long key_code;
#line 505
enum msgtype {
    MSG_VERSION = 12,
    MSG_IDENTIFY_FLAGS = 100,
    MSG_IDENTIFY_TERM = 101,
    MSG_IDENTIFY_TTYNAME = 102,
    MSG_IDENTIFY_OLDCWD = 103,
    MSG_IDENTIFY_STDIN = 104,
    MSG_IDENTIFY_ENVIRON = 105,
    MSG_IDENTIFY_DONE = 106,
    MSG_IDENTIFY_CLIENTPID = 107,
    MSG_IDENTIFY_CWD = 108,
    MSG_IDENTIFY_FEATURES = 109,
    MSG_IDENTIFY_STDOUT = 110,
    MSG_IDENTIFY_LONGFLAGS = 111,
    MSG_IDENTIFY_TERMINFO = 112,
    MSG_COMMAND = 200,
    MSG_DETACH = 201,
    MSG_DETACHKILL = 202,
    MSG_EXIT = 203,
    MSG_EXITED = 204,
    MSG_EXITING = 205,
    MSG_LOCK = 206,
    MSG_READY = 207,
    MSG_RESIZE = 208,
    MSG_SHELL = 209,
    MSG_SHUTDOWN = 210,
    MSG_OLDSTDERR = 211,
    MSG_OLDSTDIN = 212,
    MSG_OLDSTDOUT = 213,
    MSG_SUSPEND = 214,
    MSG_UNLOCK = 215,
    MSG_WAKEUP = 216,
    MSG_EXEC = 217,
    MSG_FLAGS = 218,
    MSG_READ_OPEN = 300,
    MSG_READ = 301,
    MSG_READ_DONE = 302,
    MSG_WRITE_OPEN = 303,
    MSG_WRITE = 304,
    MSG_WRITE_READY = 305,
    MSG_WRITE_CLOSE = 306
} ;
#line 620 "tmux.h"
typedef u_int utf8_char;
#line 628 "tmux.h"
struct utf8_data {
   u_char data[21] ;
   u_char have ;
   u_char size ;
   u_char width ;
};
#line 688 "tmux.h"
struct grid_cell {
   struct utf8_data data ;
   u_short attr ;
   u_char flags ;
   int fg ;
   int bg ;
   int us ;
};
#line 698 "tmux.h"
struct grid_extd_entry {
   utf8_char data ;
   u_short attr ;
   u_char flags ;
   int fg ;
   int bg ;
   int us ;
};
#line 708 "tmux.h"
struct __anonstruct_data_58 {
   u_char attr ;
   u_char fg ;
   u_char bg ;
   u_char data ;
};
#line 708 "tmux.h"
union __anonunion____missing_field_name_57 {
   u_int offset ;
   struct __anonstruct_data_58 data ;
};
#line 708 "tmux.h"
struct grid_cell_entry {
   u_char flags ;
   union __anonunion____missing_field_name_57 __annonCompField1 ;
};
#line 722 "tmux.h"
struct grid_line {
   u_int cellused ;
   u_int cellsize ;
   struct grid_cell_entry *celldata ;
   u_int extdsize ;
   struct grid_extd_entry *extddata ;
   int flags ;
};
#line 734 "tmux.h"
struct grid {
   int flags ;
   u_int sx ;
   u_int sy ;
   u_int hscrolled ;
   u_int hsize ;
   u_int hlimit ;
   struct grid_line *linedata ;
};
#line 774
enum style_range_type {
    STYLE_RANGE_NONE = 0,
    STYLE_RANGE_LEFT = 1,
    STYLE_RANGE_RIGHT = 2,
    STYLE_RANGE_WINDOW = 3
} ;
#line 780 "tmux.h"
struct __anonstruct_entry_59 {
   struct style_range *tqe_next ;
   struct style_range **tqe_prev ;
};
#line 780 "tmux.h"
struct style_range {
   enum style_range_type type ;
   u_int argument ;
   u_int start ;
   u_int end ;
   struct __anonstruct_entry_59 entry ;
};
#line 789 "tmux.h"
struct style_ranges {
   struct style_range *tqh_first ;
   struct style_range **tqh_last ;
};
#line 814
struct screen_sel;
#line 814
struct screen_sel;
#line 815
struct screen_titles;
#line 815
struct screen_titles;
#line 816 "tmux.h"
struct screen {
   char *title ;
   char *path ;
   struct screen_titles *titles ;
   struct grid *grid ;
   u_int cx ;
   u_int cy ;
   u_int cstyle ;
   char *ccolour ;
   u_int rupper ;
   u_int rlower ;
   int mode ;
   u_int saved_cx ;
   u_int saved_cy ;
   struct grid *saved_grid ;
   struct grid_cell saved_cell ;
   int saved_flags ;
   bitstr_t *tabs ;
   struct screen_sel *sel ;
   struct screen_write_cline *write_list ;
};
#line 849
struct window_pane;
#line 865 "tmux.h"
struct screen_redraw_ctx {
   struct client *c ;
   u_int statuslines ;
   int statustop ;
   int pane_status ;
   int pane_lines ;
   u_int sx ;
   u_int sy ;
   u_int ox ;
   u_int oy ;
};
#line 904
struct window_mode_entry;
#line 904
struct window_mode_entry;
#line 905 "tmux.h"
struct window_mode {
   char *name ;
   char *default_format ;
   struct screen *(*init)(struct window_mode_entry * , struct cmd_find_state * ,
                          struct args * ) ;
   void (*free)(struct window_mode_entry * ) ;
   void (*resize)(struct window_mode_entry * , u_int  , u_int  ) ;
   void (*update)(struct window_mode_entry * ) ;
   void (*key)(struct window_mode_entry * , struct client * , struct session * ,
               struct winlink * , key_code  , struct mouse_event * ) ;
   char const   *(*key_table)(struct window_mode_entry * ) ;
   void (*command)(struct window_mode_entry * , struct client * ,
                   struct session * , struct winlink * , struct args * ,
                   struct mouse_event * ) ;
   void (*formats)(struct window_mode_entry * , struct format_tree * ) ;
};
#line 927 "tmux.h"
struct __anonstruct_entry_60 {
   struct window_mode_entry *tqe_next ;
   struct window_mode_entry **tqe_prev ;
};
#line 927 "tmux.h"
struct window_mode_entry {
   struct window_pane *wp ;
   struct window_pane *swp ;
   struct window_mode *mode ;
   void *data ;
   struct screen *screen ;
   u_int prefix ;
   struct __anonstruct_entry_60 entry ;
};
#line 941 "tmux.h"
struct window_pane_offset {
   size_t used ;
};
#line 946 "tmux.h"
struct __anonstruct_entry_61 {
   struct window_pane_resize *tqe_next ;
   struct window_pane_resize **tqe_prev ;
};
#line 946 "tmux.h"
struct window_pane_resize {
   u_int sx ;
   u_int sy ;
   u_int osx ;
   u_int osy ;
   struct __anonstruct_entry_61 entry ;
};
#line 955 "tmux.h"
struct window_pane_resizes {
   struct window_pane_resize *tqh_first ;
   struct window_pane_resize **tqh_last ;
};
#line 958
struct window;
#line 958
struct layout_cell;
#line 958 "tmux.h"
struct __anonstruct_modes_62 {
   struct window_mode_entry *tqh_first ;
   struct window_mode_entry **tqh_last ;
};
#line 958 "tmux.h"
struct __anonstruct_entry_63 {
   struct window_pane *tqe_next ;
   struct window_pane **tqe_prev ;
};
#line 958 "tmux.h"
struct __anonstruct_tree_entry_64 {
   struct window_pane *rbe_left ;
   struct window_pane *rbe_right ;
   struct window_pane *rbe_parent ;
   int rbe_color ;
};
#line 958 "tmux.h"
struct window_pane {
   u_int id ;
   u_int active_point ;
   struct window *window ;
   struct options *options ;
   struct layout_cell *layout_cell ;
   struct layout_cell *saved_layout_cell ;
   u_int sx ;
   u_int sy ;
   u_int xoff ;
   u_int yoff ;
   int fg ;
   int bg ;
   int flags ;
   int argc ;
   char **argv ;
   char *shell ;
   char *cwd ;
   pid_t pid ;
   char tty[32] ;
   int status ;
   int fd ;
   struct bufferevent *event ;
   struct window_pane_offset offset ;
   size_t base_offset ;
   struct window_pane_resizes resize_queue ;
   struct event resize_timer ;
   struct input_ctx *ictx ;
   struct grid_cell cached_gc ;
   struct grid_cell cached_active_gc ;
   int *palette ;
   int pipe_fd ;
   struct bufferevent *pipe_event ;
   struct window_pane_offset pipe_offset ;
   struct screen *screen ;
   struct screen base ;
   struct screen status_screen ;
   size_t status_size ;
   struct __anonstruct_modes_62 modes ;
   char *searchstr ;
   int searchregex ;
   int border_gc_set ;
   struct grid_cell border_gc ;
   struct __anonstruct_entry_63 entry ;
   struct __anonstruct_tree_entry_64 tree_entry ;
};
#line 1037 "tmux.h"
struct window_panes {
   struct window_pane *tqh_first ;
   struct window_pane **tqh_last ;
};
#line 1041 "tmux.h"
struct __anonstruct_alerts_entry_65 {
   struct window *tqe_next ;
   struct window **tqe_prev ;
};
#line 1041 "tmux.h"
struct __anonstruct_winlinks_66 {
   struct winlink *tqh_first ;
   struct winlink **tqh_last ;
};
#line 1041 "tmux.h"
struct __anonstruct_entry_67 {
   struct window *rbe_left ;
   struct window *rbe_right ;
   struct window *rbe_parent ;
   int rbe_color ;
};
#line 1041 "tmux.h"
struct window {
   u_int id ;
   void *latest ;
   char *name ;
   struct event name_event ;
   struct timeval name_time ;
   struct event alerts_timer ;
   struct event offset_timer ;
   struct timeval activity_time ;
   struct window_pane *active ;
   struct window_pane *last ;
   struct window_panes panes ;
   int lastlayout ;
   struct layout_cell *layout_root ;
   struct layout_cell *saved_layout_root ;
   char *old_layout ;
   u_int sx ;
   u_int sy ;
   u_int xpixel ;
   u_int ypixel ;
   u_int new_sx ;
   u_int new_sy ;
   u_int new_xpixel ;
   u_int new_ypixel ;
   int flags ;
   int alerts_queued ;
   struct __anonstruct_alerts_entry_65 alerts_entry ;
   struct options *options ;
   u_int references ;
   struct __anonstruct_winlinks_66 winlinks ;
   struct __anonstruct_entry_67 entry ;
};
#line 1095 "tmux.h"
struct __anonstruct_entry_68 {
   struct winlink *rbe_left ;
   struct winlink *rbe_right ;
   struct winlink *rbe_parent ;
   int rbe_color ;
};
#line 1095 "tmux.h"
struct __anonstruct_wentry_69 {
   struct winlink *tqe_next ;
   struct winlink **tqe_prev ;
};
#line 1095 "tmux.h"
struct __anonstruct_sentry_70 {
   struct winlink *tqe_next ;
   struct winlink **tqe_prev ;
};
#line 1095 "tmux.h"
struct winlink {
   int idx ;
   struct session *session ;
   struct window *window ;
   int flags ;
   struct __anonstruct_entry_68 entry ;
   struct __anonstruct_wentry_69 wentry ;
   struct __anonstruct_sentry_70 sentry ;
};
#line 1110 "tmux.h"
struct winlinks {
   struct winlink *rbh_root ;
};
#line 1111 "tmux.h"
struct winlink_stack {
   struct winlink *tqh_first ;
   struct winlink **tqh_last ;
};
#line 1132
enum layout_type {
    LAYOUT_LEFTRIGHT = 0,
    LAYOUT_TOPBOTTOM = 1,
    LAYOUT_WINDOWPANE = 2
} ;
#line 1139 "tmux.h"
struct layout_cells {
   struct layout_cell *tqh_first ;
   struct layout_cell **tqh_last ;
};
#line 1142 "tmux.h"
struct __anonstruct_entry_71 {
   struct layout_cell *tqe_next ;
   struct layout_cell **tqe_prev ;
};
#line 1142 "tmux.h"
struct layout_cell {
   enum layout_type type ;
   struct layout_cell *parent ;
   u_int sx ;
   u_int sy ;
   u_int xoff ;
   u_int yoff ;
   struct window_pane *wp ;
   struct layout_cells cells ;
   struct __anonstruct_entry_71 entry ;
};
#line 1160 "tmux.h"
struct __anonstruct_entry_72 {
   struct environ_entry *rbe_left ;
   struct environ_entry *rbe_right ;
   struct environ_entry *rbe_parent ;
   int rbe_color ;
};
#line 1160 "tmux.h"
struct environ_entry {
   char *name ;
   char *value ;
   int flags ;
   struct __anonstruct_entry_72 entry ;
};
#line 1179 "tmux.h"
struct __anonstruct_gentry_75 {
   struct session *tqe_next ;
   struct session **tqe_prev ;
};
#line 1179 "tmux.h"
struct __anonstruct_entry_76 {
   struct session *rbe_left ;
   struct session *rbe_right ;
   struct session *rbe_parent ;
   int rbe_color ;
};
#line 1179 "tmux.h"
struct session {
   u_int id ;
   char *name ;
   char *cwd ;
   struct timeval creation_time ;
   struct timeval last_attached_time ;
   struct timeval activity_time ;
   struct timeval last_activity_time ;
   struct event lock_timer ;
   struct winlink *curw ;
   struct winlink_stack lastw ;
   struct winlinks windows ;
   int statusat ;
   u_int statuslines ;
   struct options *options ;
   int flags ;
   u_int attached ;
   struct termios *tio ;
   struct environ *environ ;
   int references ;
   struct __anonstruct_gentry_75 gentry ;
   struct __anonstruct_entry_76 entry ;
};
#line 1237 "tmux.h"
struct mouse_event {
   int valid ;
   int ignore ;
   key_code key ;
   int statusat ;
   u_int statuslines ;
   u_int x ;
   u_int y ;
   u_int b ;
   u_int lx ;
   u_int ly ;
   u_int lb ;
   u_int ox ;
   u_int oy ;
   int s ;
   int w ;
   int wp ;
   u_int sgr_type ;
   u_int sgr_b ;
};
#line 1266 "tmux.h"
struct key_event {
   key_code key ;
   struct mouse_event m ;
};
#line 1272 "tmux.h"
struct tty_key {
   char ch ;
   key_code key ;
   struct tty_key *left ;
   struct tty_key *right ;
   struct tty_key *next ;
};
#line 1282
struct tty_code;
#line 1282
struct tty_code;
#line 1283
struct tty;
#line 1283 "tmux.h"
struct __anonstruct_entry_77 {
   struct tty_term *le_next ;
   struct tty_term **le_prev ;
};
#line 1283 "tmux.h"
struct tty_term {
   char *name ;
   struct tty *tty ;
   int features ;
   char acs[256][2] ;
   struct tty_code *codes ;
   int flags ;
   struct __anonstruct_entry_77 entry ;
};
#line 1304 "tmux.h"
struct tty {
   struct client *client ;
   struct event start_timer ;
   u_int sx ;
   u_int sy ;
   u_int xpixel ;
   u_int ypixel ;
   u_int cx ;
   u_int cy ;
   u_int cstyle ;
   char *ccolour ;
   int oflag ;
   u_int oox ;
   u_int ooy ;
   u_int osx ;
   u_int osy ;
   int mode ;
   u_int rlower ;
   u_int rupper ;
   u_int rleft ;
   u_int rright ;
   struct event event_in ;
   struct evbuffer *in ;
   struct event event_out ;
   struct evbuffer *out ;
   struct event timer ;
   size_t discarded ;
   struct termios tio ;
   struct grid_cell cell ;
   struct grid_cell last_cell ;
   int flags ;
   struct tty_term *term ;
   u_int mouse_last_x ;
   u_int mouse_last_y ;
   u_int mouse_last_b ;
   int mouse_drag_flag ;
   void (*mouse_drag_update)(struct client * , struct mouse_event * ) ;
   void (*mouse_drag_release)(struct client * , struct mouse_event * ) ;
   struct event key_timer ;
   struct tty_key *key_tree ;
};
#line 1433
struct args_entry;
#line 1433
struct args_entry;
#line 1434 "tmux.h"
struct args_tree {
   struct args_entry *rbh_root ;
};
#line 1435 "tmux.h"
struct args {
   struct args_tree tree ;
   int argc ;
   char **argv ;
};
#line 1447 "tmux.h"
struct cmd_find_state {
   int flags ;
   struct cmd_find_state *current ;
   struct session *s ;
   struct winlink *wl ;
   struct window *w ;
   struct window_pane *wp ;
   int idx ;
};
#line 1468 "tmux.h"
struct cmd_list {
   int references ;
   u_int group ;
   struct cmds *list ;
};
#line 1483
enum cmd_parse_status {
    CMD_PARSE_EMPTY = 0,
    CMD_PARSE_ERROR = 1,
    CMD_PARSE_SUCCESS = 2
} ;
#line 1488 "tmux.h"
struct cmd_parse_result {
   enum cmd_parse_status status ;
   struct cmd_list *cmdlist ;
   char *error ;
};
#line 1493 "tmux.h"
struct cmd_parse_input {
   int flags ;
   char *file ;
   u_int line ;
   struct cmdq_item *item ;
   struct client *c ;
   struct cmd_find_state fs ;
};
#line 1552 "tmux.h"
struct status_line_entry {
   char *expanded ;
   struct style_ranges ranges ;
};
#line 1556 "tmux.h"
struct status_line {
   struct event timer ;
   struct screen screen ;
   struct screen *active ;
   int references ;
   struct grid_cell style ;
   struct status_line_entry entries[5] ;
};
#line 1570
struct client_files;
#line 1570 "tmux.h"
struct __anonstruct_entry_80 {
   struct client_file *rbe_left ;
   struct client_file *rbe_right ;
   struct client_file *rbe_parent ;
   int rbe_color ;
};
#line 1570 "tmux.h"
struct client_file {
   struct client *c ;
   struct tmuxpeer *peer ;
   struct client_files *tree ;
   int references ;
   int stream ;
   char *path ;
   struct evbuffer *buffer ;
   struct bufferevent *event ;
   int fd ;
   int error ;
   int closed ;
   void (*cb)(struct client * , char const   * , int  , int  ,
              struct evbuffer * , void * ) ;
   void *data ;
   struct __anonstruct_entry_80 entry ;
};
#line 1590 "tmux.h"
struct client_files {
   struct client_file *rbh_root ;
};
#line 1593 "tmux.h"
struct __anonstruct_entry_81 {
   struct client_window *rbe_left ;
   struct client_window *rbe_right ;
   struct client_window *rbe_parent ;
   int rbe_color ;
};
#line 1593 "tmux.h"
struct client_window {
   u_int window ;
   struct window_pane *pane ;
   struct __anonstruct_entry_81 entry ;
};
#line 1598 "tmux.h"
struct client_windows {
   struct client_window *rbh_root ;
};
#line 1608
enum __anonenum_exit_type_82 {
    CLIENT_EXIT_RETURN = 0,
    CLIENT_EXIT_SHUTDOWN = 1,
    CLIENT_EXIT_DETACH = 2
} ;
#line 1608
struct key_table;
#line 1608
enum __anonenum_prompt_mode_83 {
    PROMPT_ENTRY = 0,
    PROMPT_COMMAND = 1
} ;
#line 1608 "tmux.h"
struct __anonstruct_entry_84 {
   struct client *tqe_next ;
   struct client **tqe_prev ;
};
#line 1608 "tmux.h"
struct client {
   char *name ;
   struct tmuxpeer *peer ;
   struct cmdq_list *queue ;
   struct client_windows windows ;
   struct control_state *control_state ;
   u_int pause_age ;
   pid_t pid ;
   int fd ;
   int out_fd ;
   struct event event ;
   int retval ;
   struct timeval creation_time ;
   struct timeval activity_time ;
   struct environ *environ ;
   struct format_job_tree *jobs ;
   char *title ;
   char *cwd ;
   char *term_name ;
   int term_features ;
   char *term_type ;
   char **term_caps ;
   u_int term_ncaps ;
   char *ttyname ;
   struct tty tty ;
   size_t written ;
   size_t discarded ;
   size_t redraw ;
   struct event repeat_timer ;
   struct event click_timer ;
   u_int click_button ;
   struct mouse_event click_event ;
   struct status_line status ;
   uint64_t flags ;
   enum __anonenum_exit_type_82 exit_type ;
   enum msgtype exit_msgtype ;
   char *exit_session ;
   char *exit_message ;
   struct key_table *keytable ;
   uint64_t redraw_panes ;
   int message_ignore_keys ;
   int message_ignore_styles ;
   char *message_string ;
   struct event message_timer ;
   char *prompt_string ;
   struct utf8_data *prompt_buffer ;
   char *prompt_last ;
   size_t prompt_index ;
   int (*prompt_inputcb)(struct client * , void * , char const   * , int  ) ;
   void (*prompt_freecb)(void * ) ;
   void *prompt_data ;
   u_int prompt_hindex ;
   enum __anonenum_prompt_mode_83 prompt_mode ;
   struct utf8_data *prompt_saved ;
   int prompt_flags ;
   struct session *session ;
   struct session *last_session ;
   int references ;
   void *pan_window ;
   u_int pan_ox ;
   u_int pan_oy ;
   int (*overlay_check)(struct client * , u_int  , u_int  ) ;
   struct screen *(*overlay_mode)(struct client * , u_int * , u_int * ) ;
   void (*overlay_draw)(struct client * , struct screen_redraw_ctx * ) ;
   int (*overlay_key)(struct client * , struct key_event * ) ;
   void (*overlay_free)(struct client * ) ;
   void *overlay_data ;
   struct event overlay_timer ;
   struct client_files files ;
   struct __anonstruct_entry_84 entry ;
};
#line 1776 "tmux.h"
struct __anonstruct_entry_85 {
   struct key_binding *rbe_left ;
   struct key_binding *rbe_right ;
   struct key_binding *rbe_parent ;
   int rbe_color ;
};
#line 1776 "tmux.h"
struct key_binding {
   key_code key ;
   struct cmd_list *cmdlist ;
   char *note ;
   int flags ;
   struct __anonstruct_entry_85 entry ;
};
#line 1786 "tmux.h"
struct key_bindings {
   struct key_binding *rbh_root ;
};
#line 1788 "tmux.h"
struct __anonstruct_entry_86 {
   struct key_table *rbe_left ;
   struct key_table *rbe_right ;
   struct key_table *rbe_parent ;
   int rbe_color ;
};
#line 1788 "tmux.h"
struct key_table {
   char *name ;
   struct key_bindings key_bindings ;
   struct key_bindings default_key_bindings ;
   u_int references ;
   struct __anonstruct_entry_86 entry ;
};
#line 1976
struct format_tree;
#line 40 "cmd-parse.y"
struct __anonstruct_entry_87 {
   struct cmd_parse_scope *tqe_next ;
   struct cmd_parse_scope **tqe_prev ;
};
#line 40 "cmd-parse.y"
struct cmd_parse_scope {
   int flag ;
   struct __anonstruct_entry_87 entry ;
};
#line 45 "cmd-parse.y"
struct __anonstruct_entry_88 {
   struct cmd_parse_command *tqe_next ;
   struct cmd_parse_command **tqe_prev ;
};
#line 45 "cmd-parse.y"
struct cmd_parse_command {
   u_int line ;
   int argc ;
   char **argv ;
   struct __anonstruct_entry_88 entry ;
};
#line 53 "cmd-parse.y"
struct cmd_parse_commands {
   struct cmd_parse_command *tqh_first ;
   struct cmd_parse_command **tqh_last ;
};
#line 55 "cmd-parse.y"
struct __anonstruct_stack_89 {
   struct cmd_parse_scope *tqh_first ;
   struct cmd_parse_scope **tqh_last ;
};
#line 55 "cmd-parse.y"
struct cmd_parse_state {
   FILE *f ;
   char *buf ;
   size_t len ;
   size_t off ;
   int condition ;
   int eol ;
   int eof ;
   struct cmd_parse_input *input ;
   u_int escapes ;
   char *error ;
   struct cmd_parse_commands *commands ;
   struct cmd_parse_scope *scope ;
   struct __anonstruct_stack_89 stack ;
};
#line 189 "cmd-parse.c"
struct __anonstruct_arguments_90 {
   int argc ;
   char **argv ;
};
#line 189 "cmd-parse.c"
struct __anonstruct_elif_91 {
   int flag ;
   struct cmd_parse_commands *commands ;
};
#line 189 "cmd-parse.c"
union YYSTYPE {
   char *token ;
   struct __anonstruct_arguments_90 arguments ;
   int flag ;
   struct __anonstruct_elif_91 elif ;
   struct cmd_parse_commands *commands ;
   struct cmd_parse_command *command ;
};
#line 209 "cmd-parse.c"
typedef union YYSTYPE YYSTYPE;
#line 232 "cmd-parse.c"
typedef unsigned char yytype_uint8;
#line 238 "cmd-parse.c"
typedef signed char yytype_int8;
#line 250 "cmd-parse.c"
typedef short yytype_int16;
#line 407 "cmd-parse.c"
union yyalloc {
   yytype_int16 yyss_alloc ;
   YYSTYPE yyvs_alloc ;
};
#line 1490 "cmd-parse.y"
enum __anonenum_state_92 {
    START = 0,
    NONE = 1,
    DOUBLE_QUOTES = 2,
    SINGLE_QUOTES = 3
} ;
extern yytype_int8 __dyc_random_typdef_yytype_int8(unsigned int __dyc_exp ) ;
extern yytype_int8 __dyc_read_typdef_yytype_int8(void) ;
extern void __dyc_print_typdef_yytype_int8(yytype_int8 __dyc_thistype ) ;
extern struct cmd_parse_scope **__dyc_random_ptr__ptr__comp_275cmd_parse_scope(unsigned int __dyc_exp ) ;
extern struct cmd_parse_scope **__dyc_read_ptr__ptr__comp_275cmd_parse_scope(void) ;
extern void __dyc_print_ptr__ptr__comp_275cmd_parse_scope(struct cmd_parse_scope * const  *__dyc_thistype ) ;
extern u_short __dyc_random_typdef_u_short(unsigned int __dyc_exp ) ;
extern u_short __dyc_read_typdef_u_short(void) ;
extern void __dyc_print_typdef_u_short(u_short __dyc_thistype ) ;
extern struct cmd_parse_command __dyc_random_comp_277cmd_parse_command(unsigned int __dyc_exp ) ;
extern struct cmd_parse_command __dyc_read_comp_277cmd_parse_command(void) ;
extern void __dyc_print_comp_277cmd_parse_command(struct cmd_parse_command __dyc_thistype ) ;
extern struct key_binding __dyc_random_comp_261key_binding(unsigned int __dyc_exp ) ;
extern struct key_binding __dyc_read_comp_261key_binding(void) ;
extern void __dyc_print_comp_261key_binding(struct key_binding __dyc_thistype ) ;
extern FILE *__dyc_random_ptr__typdef_FILE(unsigned int __dyc_exp ) ;
extern FILE *__dyc_read_ptr__typdef_FILE(void) ;
extern void __dyc_print_ptr__typdef_FILE(FILE const   *__dyc_thistype ) ;
extern void *__dyc_random_ptr__comp_148cmdq_list(unsigned int __dyc_exp ) ;
extern void *__dyc_read_ptr__comp_148cmdq_list(void) ;
extern void __dyc_print_ptr__comp_148cmdq_list(void const   * const  __dyc_thistype ) ;
extern u_int __dyc_random_typdef_u_int(unsigned int __dyc_exp ) ;
extern u_int __dyc_read_typdef_u_int(void) ;
extern void __dyc_print_typdef_u_int(u_int __dyc_thistype ) ;
extern _IO_FILE *__dyc_random_ptr__typdef__IO_FILE(unsigned int __dyc_exp ) ;
extern _IO_FILE *__dyc_read_ptr__typdef__IO_FILE(void) ;
extern void __dyc_print_ptr__typdef__IO_FILE(_IO_FILE const   *__dyc_thistype ) ;
extern struct tty __dyc_random_comp_236tty(unsigned int __dyc_exp ) ;
extern struct tty __dyc_read_comp_236tty(void) ;
extern void __dyc_print_comp_236tty(struct tty __dyc_thistype ) ;
extern struct grid_line __dyc_random_comp_184grid_line(unsigned int __dyc_exp ) ;
extern struct grid_line __dyc_read_comp_184grid_line(void) ;
extern void __dyc_print_comp_184grid_line(struct grid_line __dyc_thistype ) ;
extern union YYSTYPE __dyc_random_comp_282YYSTYPE(unsigned int __dyc_exp ) ;
extern union YYSTYPE __dyc_read_comp_282YYSTYPE(void) ;
extern void __dyc_print_comp_282YYSTYPE(union YYSTYPE __dyc_thistype ) ;
extern struct screen_redraw_ctx __dyc_random_comp_195screen_redraw_ctx(unsigned int __dyc_exp ) ;
extern struct screen_redraw_ctx __dyc_read_comp_195screen_redraw_ctx(void) ;
extern void __dyc_print_comp_195screen_redraw_ctx(struct screen_redraw_ctx __dyc_thistype ) ;
extern struct _IO_FILE __dyc_random_comp_22_IO_FILE(unsigned int __dyc_exp ) ;
extern struct _IO_FILE __dyc_read_comp_22_IO_FILE(void) ;
extern void __dyc_print_comp_22_IO_FILE(struct _IO_FILE __dyc_thistype ) ;
extern wchar_t __dyc_random_typdef_wchar_t(unsigned int __dyc_exp ) ;
extern wchar_t __dyc_read_typdef_wchar_t(void) ;
extern void __dyc_print_typdef_wchar_t(wchar_t __dyc_thistype ) ;
extern struct cmd_list __dyc_random_comp_244cmd_list(unsigned int __dyc_exp ) ;
extern struct cmd_list __dyc_read_comp_244cmd_list(void) ;
extern void __dyc_print_comp_244cmd_list(struct cmd_list __dyc_thistype ) ;
extern unsigned short **__dyc_random_ptr__ptr__short(unsigned int __dyc_exp ) ;
extern unsigned short **__dyc_read_ptr__ptr__short(void) ;
extern void __dyc_print_ptr__ptr__short(unsigned short const   * const  *__dyc_thistype ) ;
extern struct key_binding *__dyc_random_ptr__comp_261key_binding(unsigned int __dyc_exp ) ;
extern struct key_binding *__dyc_read_ptr__comp_261key_binding(void) ;
extern void __dyc_print_ptr__comp_261key_binding(struct key_binding  const  *__dyc_thistype ) ;
extern struct __anonstruct_arguments_90 __dyc_random_comp_283__anonstruct_arguments_90(unsigned int __dyc_exp ) ;
extern struct __anonstruct_arguments_90 __dyc_read_comp_283__anonstruct_arguments_90(void) ;
extern void __dyc_print_comp_283__anonstruct_arguments_90(struct __anonstruct_arguments_90 __dyc_thistype ) ;
extern u_char __dyc_random_typdef_u_char(unsigned int __dyc_exp ) ;
extern u_char __dyc_read_typdef_u_char(void) ;
extern void __dyc_print_typdef_u_char(u_char __dyc_thistype ) ;
extern yytype_uint8 __dyc_random_typdef_yytype_uint8(unsigned int __dyc_exp ) ;
extern yytype_uint8 __dyc_read_typdef_yytype_uint8(void) ;
extern void __dyc_print_typdef_yytype_uint8(yytype_uint8 __dyc_thistype ) ;
extern struct session **__dyc_random_ptr__ptr__comp_165session(unsigned int __dyc_exp ) ;
extern struct session **__dyc_read_ptr__ptr__comp_165session(void) ;
extern void __dyc_print_ptr__ptr__comp_165session(struct session * const  *__dyc_thistype ) ;
extern struct __anonstruct_stack_89 __dyc_random_comp_281__anonstruct_stack_89(unsigned int __dyc_exp ) ;
extern struct __anonstruct_stack_89 __dyc_read_comp_281__anonstruct_stack_89(void) ;
extern void __dyc_print_comp_281__anonstruct_stack_89(struct __anonstruct_stack_89 __dyc_thistype ) ;
extern struct layout_cell **__dyc_random_ptr__ptr__comp_206layout_cell(unsigned int __dyc_exp ) ;
extern struct layout_cell **__dyc_read_ptr__ptr__comp_206layout_cell(void) ;
extern void __dyc_print_ptr__ptr__comp_206layout_cell(struct layout_cell * const  *__dyc_thistype ) ;
extern int *__dyc_random_ptr__int(unsigned int __dyc_exp ) ;
extern int *__dyc_read_ptr__int(void) ;
extern void __dyc_print_ptr__int(int const   *__dyc_thistype ) ;
extern struct __anonstruct_ev_signal_next_50 __dyc_random_comp_115__anonstruct_ev_signal_next_50(unsigned int __dyc_exp ) ;
extern struct __anonstruct_ev_signal_next_50 __dyc_read_comp_115__anonstruct_ev_signal_next_50(void) ;
extern void __dyc_print_comp_115__anonstruct_ev_signal_next_50(struct __anonstruct_ev_signal_next_50 __dyc_thistype ) ;
extern size_t __dyc_random_typdef_size_t(unsigned int __dyc_exp ) ;
extern size_t __dyc_read_typdef_size_t(void) ;
extern void __dyc_print_typdef_size_t(size_t __dyc_thistype ) ;
extern struct tty *__dyc_random_ptr__comp_236tty(unsigned int __dyc_exp ) ;
extern struct tty *__dyc_read_ptr__comp_236tty(void) ;
extern void __dyc_print_ptr__comp_236tty(struct tty  const  *__dyc_thistype ) ;
extern void *__dyc_random_ptr__comp_192screen_titles(unsigned int __dyc_exp ) ;
extern void *__dyc_read_ptr__comp_192screen_titles(void) ;
extern void __dyc_print_ptr__comp_192screen_titles(void const   * const  __dyc_thistype ) ;
extern struct key_table __dyc_random_comp_258key_table(unsigned int __dyc_exp ) ;
extern struct key_table __dyc_read_comp_258key_table(void) ;
extern void __dyc_print_comp_258key_table(struct key_table __dyc_thistype ) ;
extern struct client_files *__dyc_random_ptr__comp_253client_files(unsigned int __dyc_exp ) ;
extern struct client_files *__dyc_read_ptr__comp_253client_files(void) ;
extern void __dyc_print_ptr__comp_253client_files(struct client_files  const  *__dyc_thistype ) ;
extern struct screen *__dyc_random_ptr__comp_193screen(unsigned int __dyc_exp ) ;
extern struct screen *__dyc_read_ptr__comp_193screen(void) ;
extern void __dyc_print_ptr__comp_193screen(struct screen  const  *__dyc_thistype ) ;
extern tcflag_t __dyc_random_typdef_tcflag_t(unsigned int __dyc_exp ) ;
extern tcflag_t __dyc_read_typdef_tcflag_t(void) ;
extern void __dyc_print_typdef_tcflag_t(tcflag_t __dyc_thistype ) ;
extern struct _IO_FILE *__dyc_random_ptr__comp_22_IO_FILE(unsigned int __dyc_exp ) ;
extern struct _IO_FILE *__dyc_read_ptr__comp_22_IO_FILE(void) ;
extern void __dyc_print_ptr__comp_22_IO_FILE(struct _IO_FILE  const  *__dyc_thistype ) ;
extern union __anonunion_evcb_cb_union_43 __dyc_random_comp_108__anonunion_evcb_cb_union_43(unsigned int __dyc_exp ) ;
extern union __anonunion_evcb_cb_union_43 __dyc_read_comp_108__anonunion_evcb_cb_union_43(void) ;
extern void __dyc_print_comp_108__anonunion_evcb_cb_union_43(union __anonunion_evcb_cb_union_43 __dyc_thistype ) ;
extern struct window_mode_entry **__dyc_random_ptr__ptr__comp_198window_mode_entry(unsigned int __dyc_exp ) ;
extern struct window_mode_entry **__dyc_read_ptr__ptr__comp_198window_mode_entry(void) ;
extern void __dyc_print_ptr__ptr__comp_198window_mode_entry(struct window_mode_entry * const  *__dyc_thistype ) ;
extern struct tty_key __dyc_random_comp_233tty_key(unsigned int __dyc_exp ) ;
extern struct tty_key __dyc_read_comp_233tty_key(void) ;
extern void __dyc_print_comp_233tty_key(struct tty_key __dyc_thistype ) ;
extern void *__dyc_random_ptr__comp_152environ(unsigned int __dyc_exp ) ;
extern void *__dyc_read_ptr__comp_152environ(void) ;
extern void __dyc_print_ptr__comp_152environ(void const   * const  __dyc_thistype ) ;
extern struct __anonstruct_entry_60 __dyc_random_comp_200__anonstruct_entry_60(unsigned int __dyc_exp ) ;
extern struct __anonstruct_entry_60 __dyc_read_comp_200__anonstruct_entry_60(void) ;
extern void __dyc_print_comp_200__anonstruct_entry_60(struct __anonstruct_entry_60 __dyc_thistype ) ;
extern void *__dyc_random_ptr__comp_151control_state(unsigned int __dyc_exp ) ;
extern void *__dyc_read_ptr__comp_151control_state(void) ;
extern void __dyc_print_ptr__comp_151control_state(void const   * const  __dyc_thistype ) ;
extern struct client *__dyc_random_ptr__comp_144client(unsigned int __dyc_exp ) ;
extern struct client *__dyc_read_ptr__comp_144client(void) ;
extern void __dyc_print_ptr__comp_144client(struct client  const  *__dyc_thistype ) ;
extern struct __anonstruct_wentry_69 __dyc_random_comp_217__anonstruct_wentry_69(unsigned int __dyc_exp ) ;
extern struct __anonstruct_wentry_69 __dyc_read_comp_217__anonstruct_wentry_69(void) ;
extern void __dyc_print_comp_217__anonstruct_wentry_69(struct __anonstruct_wentry_69 __dyc_thistype ) ;
extern struct __anonstruct_evcb_active_next_42 __dyc_random_comp_107__anonstruct_evcb_active_next_42(unsigned int __dyc_exp ) ;
extern struct __anonstruct_evcb_active_next_42 __dyc_read_comp_107__anonstruct_evcb_active_next_42(void) ;
extern void __dyc_print_comp_107__anonstruct_evcb_active_next_42(struct __anonstruct_evcb_active_next_42 __dyc_thistype ) ;
extern struct winlinks __dyc_random_comp_219winlinks(unsigned int __dyc_exp ) ;
extern struct winlinks __dyc_read_comp_219winlinks(void) ;
extern void __dyc_print_comp_219winlinks(struct winlinks __dyc_thistype ) ;
extern struct window __dyc_random_comp_205window(unsigned int __dyc_exp ) ;
extern struct window __dyc_read_comp_205window(void) ;
extern void __dyc_print_comp_205window(struct window __dyc_thistype ) ;
extern struct __anonstruct_entry_85 __dyc_random_comp_262__anonstruct_entry_85(unsigned int __dyc_exp ) ;
extern struct __anonstruct_entry_85 __dyc_read_comp_262__anonstruct_entry_85(void) ;
extern void __dyc_print_comp_262__anonstruct_entry_85(struct __anonstruct_entry_85 __dyc_thistype ) ;
extern u_int *__dyc_random_ptr__typdef_u_int(unsigned int __dyc_exp ) ;
extern u_int *__dyc_read_ptr__typdef_u_int(void) ;
extern void __dyc_print_ptr__typdef_u_int(u_int const   *__dyc_thistype ) ;
extern struct client_window *__dyc_random_ptr__comp_255client_window(unsigned int __dyc_exp ) ;
extern struct client_window *__dyc_read_ptr__comp_255client_window(void) ;
extern void __dyc_print_ptr__comp_255client_window(struct client_window  const  *__dyc_thistype ) ;
extern __uid_t __dyc_random_typdef___uid_t(unsigned int __dyc_exp ) ;
extern __uid_t __dyc_read_typdef___uid_t(void) ;
extern void __dyc_print_typdef___uid_t(__uid_t __dyc_thistype ) ;
extern struct tty_key *__dyc_random_ptr__comp_233tty_key(unsigned int __dyc_exp ) ;
extern struct tty_key *__dyc_read_ptr__comp_233tty_key(void) ;
extern void __dyc_print_ptr__comp_233tty_key(struct tty_key  const  *__dyc_thistype ) ;
extern struct winlink_stack __dyc_random_comp_220winlink_stack(unsigned int __dyc_exp ) ;
extern struct winlink_stack __dyc_read_comp_220winlink_stack(void) ;
extern void __dyc_print_comp_220winlink_stack(struct winlink_stack __dyc_thistype ) ;
extern void *__dyc_random_ptr__comp_163screen_write_cline(unsigned int __dyc_exp ) ;
extern void *__dyc_read_ptr__comp_163screen_write_cline(void) ;
extern void __dyc_print_ptr__comp_163screen_write_cline(void const   * const  __dyc_thistype ) ;
extern struct timeval __dyc_random_comp_4timeval(unsigned int __dyc_exp ) ;
extern struct timeval __dyc_read_comp_4timeval(void) ;
extern void __dyc_print_comp_4timeval(struct timeval __dyc_thistype ) ;
extern struct __anonstruct_entry_61 __dyc_random_comp_203__anonstruct_entry_61(unsigned int __dyc_exp ) ;
extern struct __anonstruct_entry_61 __dyc_read_comp_203__anonstruct_entry_61(void) ;
extern void __dyc_print_comp_203__anonstruct_entry_61(struct __anonstruct_entry_61 __dyc_thistype ) ;
extern struct client **__dyc_random_ptr__ptr__comp_144client(unsigned int __dyc_exp ) ;
extern struct client **__dyc_read_ptr__ptr__comp_144client(void) ;
extern void __dyc_print_ptr__ptr__comp_144client(struct client * const  *__dyc_thistype ) ;
extern struct __anonstruct_winlinks_66 __dyc_random_comp_213__anonstruct_winlinks_66(unsigned int __dyc_exp ) ;
extern struct __anonstruct_winlinks_66 __dyc_read_comp_213__anonstruct_winlinks_66(void) ;
extern void __dyc_print_comp_213__anonstruct_winlinks_66(struct __anonstruct_winlinks_66 __dyc_thistype ) ;
extern struct args __dyc_random_comp_142args(unsigned int __dyc_exp ) ;
extern struct args __dyc_read_comp_142args(void) ;
extern void __dyc_print_comp_142args(struct args __dyc_thistype ) ;
extern struct status_line_entry __dyc_random_comp_250status_line_entry(unsigned int __dyc_exp ) ;
extern struct status_line_entry __dyc_read_comp_250status_line_entry(void) ;
extern void __dyc_print_comp_250status_line_entry(struct status_line_entry __dyc_thistype ) ;
extern void *__dyc_random_ptr__comp_147cmdq_item(unsigned int __dyc_exp ) ;
extern void *__dyc_read_ptr__comp_147cmdq_item(void) ;
extern void __dyc_print_ptr__comp_147cmdq_item(void const   * const  __dyc_thistype ) ;
extern struct cmd_list *__dyc_random_ptr__comp_244cmd_list(unsigned int __dyc_exp ) ;
extern struct cmd_list *__dyc_read_ptr__comp_244cmd_list(void) ;
extern void __dyc_print_ptr__comp_244cmd_list(struct cmd_list  const  *__dyc_thistype ) ;
extern struct __anonstruct_entry_71 __dyc_random_comp_222__anonstruct_entry_71(unsigned int __dyc_exp ) ;
extern struct __anonstruct_entry_71 __dyc_read_comp_222__anonstruct_entry_71(void) ;
extern void __dyc_print_comp_222__anonstruct_entry_71(struct __anonstruct_entry_71 __dyc_thistype ) ;
extern struct cmd_parse_command **__dyc_random_ptr__ptr__comp_277cmd_parse_command(unsigned int __dyc_exp ) ;
extern struct cmd_parse_command **__dyc_read_ptr__ptr__comp_277cmd_parse_command(void) ;
extern void __dyc_print_ptr__ptr__comp_277cmd_parse_command(struct cmd_parse_command * const  *__dyc_thistype ) ;
extern struct event *__dyc_random_ptr__comp_101event(unsigned int __dyc_exp ) ;
extern struct event *__dyc_read_ptr__comp_101event(void) ;
extern void __dyc_print_ptr__comp_101event(struct event  const  *__dyc_thistype ) ;
extern struct __anonstruct_elif_91 __dyc_random_comp_284__anonstruct_elif_91(unsigned int __dyc_exp ) ;
extern struct __anonstruct_elif_91 __dyc_read_comp_284__anonstruct_elif_91(void) ;
extern void __dyc_print_comp_284__anonstruct_elif_91(struct __anonstruct_elif_91 __dyc_thistype ) ;
extern struct __anonstruct_entry_86 __dyc_random_comp_264__anonstruct_entry_86(unsigned int __dyc_exp ) ;
extern struct __anonstruct_entry_86 __dyc_read_comp_264__anonstruct_entry_86(void) ;
extern void __dyc_print_comp_264__anonstruct_entry_86(struct __anonstruct_entry_86 __dyc_thistype ) ;
extern struct _IO_marker __dyc_random_comp_41_IO_marker(unsigned int __dyc_exp ) ;
extern struct _IO_marker __dyc_read_comp_41_IO_marker(void) ;
extern void __dyc_print_comp_41_IO_marker(struct _IO_marker __dyc_thistype ) ;
extern union yyalloc __dyc_random_comp_285yyalloc(unsigned int __dyc_exp ) ;
extern union yyalloc __dyc_read_comp_285yyalloc(void) ;
extern void __dyc_print_comp_285yyalloc(union yyalloc __dyc_thistype ) ;
extern void *__dyc_random_ptr__comp_167tmuxpeer(unsigned int __dyc_exp ) ;
extern void *__dyc_read_ptr__comp_167tmuxpeer(void) ;
extern void __dyc_print_ptr__comp_167tmuxpeer(void const   * const  __dyc_thistype ) ;
extern struct client_file __dyc_random_comp_252client_file(unsigned int __dyc_exp ) ;
extern struct client_file __dyc_read_comp_252client_file(void) ;
extern void __dyc_print_comp_252client_file(struct client_file __dyc_thistype ) ;
extern struct termios __dyc_random_comp_46termios(unsigned int __dyc_exp ) ;
extern struct termios __dyc_read_comp_46termios(void) ;
extern void __dyc_print_comp_46termios(struct termios __dyc_thistype ) ;
extern struct window_mode __dyc_random_comp_199window_mode(unsigned int __dyc_exp ) ;
extern struct window_mode __dyc_read_comp_199window_mode(void) ;
extern void __dyc_print_comp_199window_mode(struct window_mode __dyc_thistype ) ;
extern utf8_char __dyc_random_typdef_utf8_char(unsigned int __dyc_exp ) ;
extern utf8_char __dyc_read_typdef_utf8_char(void) ;
extern void __dyc_print_typdef_utf8_char(utf8_char __dyc_thistype ) ;
extern __off_t __dyc_random_typdef___off_t(unsigned int __dyc_exp ) ;
extern __off_t __dyc_read_typdef___off_t(void) ;
extern void __dyc_print_typdef___off_t(__off_t __dyc_thistype ) ;
extern struct __anonstruct_entry_72 __dyc_random_comp_224__anonstruct_entry_72(unsigned int __dyc_exp ) ;
extern struct __anonstruct_entry_72 __dyc_read_comp_224__anonstruct_entry_72(void) ;
extern void __dyc_print_comp_224__anonstruct_entry_72(struct __anonstruct_entry_72 __dyc_thistype ) ;
extern void *__dyc_random_ptr__comp_150cmds(unsigned int __dyc_exp ) ;
extern void *__dyc_read_ptr__comp_150cmds(void) ;
extern void __dyc_print_ptr__comp_150cmds(void const   * const  __dyc_thistype ) ;
extern void *__dyc_random_ptr__fun_name_is_not_here(unsigned int __dyc_exp ) ;
extern void *__dyc_read_ptr__fun_name_is_not_here(void) ;
extern void __dyc_print_ptr__fun_name_is_not_here(void const   * const  __dyc_thistype ) ;
extern struct tty_term **__dyc_random_ptr__ptr__comp_235tty_term(unsigned int __dyc_exp ) ;
extern struct tty_term **__dyc_read_ptr__ptr__comp_235tty_term(void) ;
extern void __dyc_print_ptr__ptr__comp_235tty_term(struct tty_term * const  *__dyc_thistype ) ;
extern struct __anonstruct_ev_signal_49 __dyc_random_comp_114__anonstruct_ev_signal_49(unsigned int __dyc_exp ) ;
extern struct __anonstruct_ev_signal_49 __dyc_read_comp_114__anonstruct_ev_signal_49(void) ;
extern void __dyc_print_comp_114__anonstruct_ev_signal_49(struct __anonstruct_ev_signal_49 __dyc_thistype ) ;
extern struct key_event *__dyc_random_ptr__comp_232key_event(unsigned int __dyc_exp ) ;
extern struct key_event *__dyc_read_ptr__comp_232key_event(void) ;
extern void __dyc_print_ptr__comp_232key_event(struct key_event  const  *__dyc_thistype ) ;
extern union yyalloc *__dyc_random_ptr__comp_285yyalloc(unsigned int __dyc_exp ) ;
extern union yyalloc *__dyc_read_ptr__comp_285yyalloc(void) ;
extern void __dyc_print_ptr__comp_285yyalloc(union yyalloc  const  *__dyc_thistype ) ;
extern struct window_pane_resize *__dyc_random_ptr__comp_202window_pane_resize(unsigned int __dyc_exp ) ;
extern struct window_pane_resize *__dyc_read_ptr__comp_202window_pane_resize(void) ;
extern void __dyc_print_ptr__comp_202window_pane_resize(struct window_pane_resize  const  *__dyc_thistype ) ;
extern struct args_tree __dyc_random_comp_243args_tree(unsigned int __dyc_exp ) ;
extern struct args_tree __dyc_read_comp_243args_tree(void) ;
extern void __dyc_print_comp_243args_tree(struct args_tree __dyc_thistype ) ;
extern struct event_callback *__dyc_random_ptr__comp_106event_callback(unsigned int __dyc_exp ) ;
extern struct event_callback *__dyc_read_ptr__comp_106event_callback(void) ;
extern void __dyc_print_ptr__comp_106event_callback(struct event_callback  const  *__dyc_thistype ) ;
extern struct __anonstruct_modes_62 __dyc_random_comp_207__anonstruct_modes_62(unsigned int __dyc_exp ) ;
extern struct __anonstruct_modes_62 __dyc_read_comp_207__anonstruct_modes_62(void) ;
extern void __dyc_print_comp_207__anonstruct_modes_62(struct __anonstruct_modes_62 __dyc_thistype ) ;
extern struct event_watermark __dyc_random_comp_128event_watermark(unsigned int __dyc_exp ) ;
extern struct event_watermark __dyc_read_comp_128event_watermark(void) ;
extern void __dyc_print_comp_128event_watermark(struct event_watermark __dyc_thistype ) ;
extern struct __anonstruct_ev_io_next_48 __dyc_random_comp_113__anonstruct_ev_io_next_48(unsigned int __dyc_exp ) ;
extern struct __anonstruct_ev_io_next_48 __dyc_read_comp_113__anonstruct_ev_io_next_48(void) ;
extern void __dyc_print_comp_113__anonstruct_ev_io_next_48(struct __anonstruct_ev_io_next_48 __dyc_thistype ) ;
extern __gid_t __dyc_random_typdef___gid_t(unsigned int __dyc_exp ) ;
extern __gid_t __dyc_read_typdef___gid_t(void) ;
extern void __dyc_print_typdef___gid_t(__gid_t __dyc_thistype ) ;
extern struct client_file *__dyc_random_ptr__comp_252client_file(unsigned int __dyc_exp ) ;
extern struct client_file *__dyc_read_ptr__comp_252client_file(void) ;
extern void __dyc_print_ptr__comp_252client_file(struct client_file  const  *__dyc_thistype ) ;
extern struct environ_entry __dyc_random_comp_223environ_entry(unsigned int __dyc_exp ) ;
extern struct environ_entry __dyc_read_comp_223environ_entry(void) ;
extern void __dyc_print_comp_223environ_entry(struct environ_entry __dyc_thistype ) ;
extern struct window_mode *__dyc_random_ptr__comp_199window_mode(unsigned int __dyc_exp ) ;
extern struct window_mode *__dyc_read_ptr__comp_199window_mode(void) ;
extern void __dyc_print_ptr__comp_199window_mode(struct window_mode  const  *__dyc_thistype ) ;
extern struct cmd_find_state *__dyc_random_ptr__comp_146cmd_find_state(unsigned int __dyc_exp ) ;
extern struct cmd_find_state *__dyc_read_ptr__comp_146cmd_find_state(void) ;
extern void __dyc_print_ptr__comp_146cmd_find_state(struct cmd_find_state  const  *__dyc_thistype ) ;
extern void *__dyc_random_ptr__comp_129bufferevent_ops(unsigned int __dyc_exp ) ;
extern void *__dyc_read_ptr__comp_129bufferevent_ops(void) ;
extern void __dyc_print_ptr__comp_129bufferevent_ops(void const   * const  __dyc_thistype ) ;
extern struct __anonstruct_entry_63 __dyc_random_comp_208__anonstruct_entry_63(unsigned int __dyc_exp ) ;
extern struct __anonstruct_entry_63 __dyc_read_comp_208__anonstruct_entry_63(void) ;
extern void __dyc_print_comp_208__anonstruct_entry_63(struct __anonstruct_entry_63 __dyc_thistype ) ;
extern struct __anonstruct_entry_59 __dyc_random_comp_188__anonstruct_entry_59(unsigned int __dyc_exp ) ;
extern struct __anonstruct_entry_59 __dyc_read_comp_188__anonstruct_entry_59(void) ;
extern void __dyc_print_comp_188__anonstruct_entry_59(struct __anonstruct_entry_59 __dyc_thistype ) ;
extern void *__dyc_random_ptr__void(unsigned int __dyc_exp ) ;
extern void *__dyc_read_ptr__void(void) ;
extern void __dyc_print_ptr__void(void const   * const  __dyc_thistype ) ;
extern struct cmd_parse_commands *__dyc_random_ptr__comp_279cmd_parse_commands(unsigned int __dyc_exp ) ;
extern struct cmd_parse_commands *__dyc_read_ptr__comp_279cmd_parse_commands(void) ;
extern void __dyc_print_ptr__comp_279cmd_parse_commands(struct cmd_parse_commands  const  *__dyc_thistype ) ;
extern struct window_pane __dyc_random_comp_194window_pane(unsigned int __dyc_exp ) ;
extern struct window_pane __dyc_read_comp_194window_pane(void) ;
extern void __dyc_print_comp_194window_pane(struct window_pane __dyc_thistype ) ;
extern __suseconds_t __dyc_random_typdef___suseconds_t(unsigned int __dyc_exp ) ;
extern __suseconds_t __dyc_read_typdef___suseconds_t(void) ;
extern void __dyc_print_typdef___suseconds_t(__suseconds_t __dyc_thistype ) ;
extern yytype_int16 __dyc_random_typdef_yytype_int16(unsigned int __dyc_exp ) ;
extern yytype_int16 __dyc_read_typdef_yytype_int16(void) ;
extern void __dyc_print_typdef_yytype_int16(yytype_int16 __dyc_thistype ) ;
extern short *__dyc_random_ptr__short(unsigned int __dyc_exp ) ;
extern short *__dyc_read_ptr__short(void) ;
extern void __dyc_print_ptr__short(short const   *__dyc_thistype ) ;
extern struct window_pane_resizes __dyc_random_comp_204window_pane_resizes(unsigned int __dyc_exp ) ;
extern struct window_pane_resizes __dyc_read_comp_204window_pane_resizes(void) ;
extern void __dyc_print_comp_204window_pane_resizes(struct window_pane_resizes __dyc_thistype ) ;
extern struct utf8_data *__dyc_random_ptr__comp_178utf8_data(unsigned int __dyc_exp ) ;
extern struct utf8_data *__dyc_read_ptr__comp_178utf8_data(void) ;
extern void __dyc_print_ptr__comp_178utf8_data(struct utf8_data  const  *__dyc_thistype ) ;
extern struct window_pane_resize **__dyc_random_ptr__ptr__comp_202window_pane_resize(unsigned int __dyc_exp ) ;
extern struct window_pane_resize **__dyc_read_ptr__ptr__comp_202window_pane_resize(void) ;
extern void __dyc_print_ptr__ptr__comp_202window_pane_resize(struct window_pane_resize * const  *__dyc_thistype ) ;
extern struct event_callback **__dyc_random_ptr__ptr__comp_106event_callback(unsigned int __dyc_exp ) ;
extern struct event_callback **__dyc_read_ptr__ptr__comp_106event_callback(void) ;
extern void __dyc_print_ptr__ptr__comp_106event_callback(struct event_callback * const  *__dyc_thistype ) ;
extern char *__dyc_random_ptr__char(unsigned int __dyc_exp ) ;
extern char *__dyc_read_ptr__char(void) ;
extern void __dyc_print_ptr__char(char const   *__dyc_thistype ) ;
extern struct screen __dyc_random_comp_193screen(unsigned int __dyc_exp ) ;
extern struct screen __dyc_read_comp_193screen(void) ;
extern void __dyc_print_comp_193screen(struct screen __dyc_thistype ) ;
extern struct args *__dyc_random_ptr__comp_142args(unsigned int __dyc_exp ) ;
extern struct args *__dyc_read_ptr__comp_142args(void) ;
extern void __dyc_print_ptr__comp_142args(struct args  const  *__dyc_thistype ) ;
extern struct grid __dyc_random_comp_185grid(unsigned int __dyc_exp ) ;
extern struct grid __dyc_read_comp_185grid(void) ;
extern void __dyc_print_comp_185grid(struct grid __dyc_thistype ) ;
extern struct __anonstruct_ev_next_with_common_timeout_45 __dyc_random_comp_110__anonstruct_ev_next_with_common_timeout_45(unsigned int __dyc_exp ) ;
extern struct __anonstruct_ev_next_with_common_timeout_45 __dyc_read_comp_110__anonstruct_ev_next_with_common_timeout_45(void) ;
extern void __dyc_print_comp_110__anonstruct_ev_next_with_common_timeout_45(struct __anonstruct_ev_next_with_common_timeout_45 __dyc_thistype ) ;
extern struct cmd_parse_result __dyc_random_comp_245cmd_parse_result(unsigned int __dyc_exp ) ;
extern struct cmd_parse_result __dyc_read_comp_245cmd_parse_result(void) ;
extern void __dyc_print_comp_245cmd_parse_result(struct cmd_parse_result __dyc_thistype ) ;
extern struct window_pane *__dyc_random_ptr__comp_194window_pane(unsigned int __dyc_exp ) ;
extern struct window_pane *__dyc_read_ptr__comp_194window_pane(void) ;
extern void __dyc_print_ptr__comp_194window_pane(struct window_pane  const  *__dyc_thistype ) ;
extern yytype_int16 *__dyc_random_ptr__typdef_yytype_int16(unsigned int __dyc_exp ) ;
extern yytype_int16 *__dyc_read_ptr__typdef_yytype_int16(void) ;
extern void __dyc_print_ptr__typdef_yytype_int16(yytype_int16 const   *__dyc_thistype ) ;
extern struct window_mode_entry *__dyc_random_ptr__comp_198window_mode_entry(unsigned int __dyc_exp ) ;
extern struct window_mode_entry *__dyc_read_ptr__comp_198window_mode_entry(void) ;
extern void __dyc_print_ptr__comp_198window_mode_entry(struct window_mode_entry  const  *__dyc_thistype ) ;
extern struct __anonstruct_ev_io_47 __dyc_random_comp_112__anonstruct_ev_io_47(unsigned int __dyc_exp ) ;
extern struct __anonstruct_ev_io_47 __dyc_read_comp_112__anonstruct_ev_io_47(void) ;
extern void __dyc_print_comp_112__anonstruct_ev_io_47(struct __anonstruct_ev_io_47 __dyc_thistype ) ;
extern cc_t __dyc_random_typdef_cc_t(unsigned int __dyc_exp ) ;
extern cc_t __dyc_read_typdef_cc_t(void) ;
extern void __dyc_print_typdef_cc_t(cc_t __dyc_thistype ) ;
extern struct style_range __dyc_random_comp_187style_range(unsigned int __dyc_exp ) ;
extern struct style_range __dyc_read_comp_187style_range(void) ;
extern void __dyc_print_comp_187style_range(struct style_range __dyc_thistype ) ;
extern __time_t __dyc_random_typdef___time_t(unsigned int __dyc_exp ) ;
extern __time_t __dyc_read_typdef___time_t(void) ;
extern void __dyc_print_typdef___time_t(__time_t __dyc_thistype ) ;
extern struct window_pane_offset __dyc_random_comp_201window_pane_offset(unsigned int __dyc_exp ) ;
extern struct window_pane_offset __dyc_read_comp_201window_pane_offset(void) ;
extern void __dyc_print_comp_201window_pane_offset(struct window_pane_offset __dyc_thistype ) ;
extern struct __anonstruct_data_58 __dyc_random_comp_183__anonstruct_data_58(unsigned int __dyc_exp ) ;
extern struct __anonstruct_data_58 __dyc_read_comp_183__anonstruct_data_58(void) ;
extern void __dyc_print_comp_183__anonstruct_data_58(struct __anonstruct_data_58 __dyc_thistype ) ;
extern struct client __dyc_random_comp_144client(unsigned int __dyc_exp ) ;
extern struct client __dyc_read_comp_144client(void) ;
extern void __dyc_print_comp_144client(struct client __dyc_thistype ) ;
extern struct window_panes __dyc_random_comp_210window_panes(unsigned int __dyc_exp ) ;
extern struct window_panes __dyc_read_comp_210window_panes(void) ;
extern void __dyc_print_comp_210window_panes(struct window_panes __dyc_thistype ) ;
extern struct bufferevent __dyc_random_comp_124bufferevent(unsigned int __dyc_exp ) ;
extern struct bufferevent __dyc_read_comp_124bufferevent(void) ;
extern void __dyc_print_comp_124bufferevent(struct bufferevent __dyc_thistype ) ;
extern union __anonunion_ev__46 __dyc_random_comp_111__anonunion_ev__46(unsigned int __dyc_exp ) ;
extern union __anonunion_ev__46 __dyc_read_comp_111__anonunion_ev__46(void) ;
extern void __dyc_print_comp_111__anonunion_ev__46(union __anonunion_ev__46 __dyc_thistype ) ;
extern struct status_line __dyc_random_comp_251status_line(unsigned int __dyc_exp ) ;
extern struct status_line __dyc_read_comp_251status_line(void) ;
extern void __dyc_print_comp_251status_line(struct status_line __dyc_thistype ) ;
extern struct __anonstruct_gentry_75 __dyc_random_comp_229__anonstruct_gentry_75(unsigned int __dyc_exp ) ;
extern struct __anonstruct_gentry_75 __dyc_read_comp_229__anonstruct_gentry_75(void) ;
extern void __dyc_print_comp_229__anonstruct_gentry_75(struct __anonstruct_gentry_75 __dyc_thistype ) ;
extern struct style_range *__dyc_random_ptr__comp_187style_range(unsigned int __dyc_exp ) ;
extern struct style_range *__dyc_read_ptr__comp_187style_range(void) ;
extern void __dyc_print_ptr__comp_187style_range(struct style_range  const  *__dyc_thistype ) ;
extern struct passwd *__dyc_random_ptr__comp_21passwd(unsigned int __dyc_exp ) ;
extern struct passwd *__dyc_read_ptr__comp_21passwd(void) ;
extern void __dyc_print_ptr__comp_21passwd(struct passwd  const  *__dyc_thistype ) ;
extern void *__dyc_random_ptr__comp_153format_job_tree(unsigned int __dyc_exp ) ;
extern void *__dyc_read_ptr__comp_153format_job_tree(void) ;
extern void __dyc_print_ptr__comp_153format_job_tree(void const   * const  __dyc_thistype ) ;
extern void *__dyc_random_ptr__comp_159options(unsigned int __dyc_exp ) ;
extern void *__dyc_read_ptr__comp_159options(void) ;
extern void __dyc_print_ptr__comp_159options(void const   * const  __dyc_thistype ) ;
extern speed_t __dyc_random_typdef_speed_t(unsigned int __dyc_exp ) ;
extern speed_t __dyc_read_typdef_speed_t(void) ;
extern void __dyc_print_typdef_speed_t(speed_t __dyc_thistype ) ;
extern __pid_t __dyc_random_typdef___pid_t(unsigned int __dyc_exp ) ;
extern __pid_t __dyc_read_typdef___pid_t(void) ;
extern void __dyc_print_typdef___pid_t(__pid_t __dyc_thistype ) ;
extern __u_char __dyc_random_typdef___u_char(unsigned int __dyc_exp ) ;
extern __u_char __dyc_read_typdef___u_char(void) ;
extern void __dyc_print_typdef___u_char(__u_char __dyc_thistype ) ;
extern void *__dyc_random_ptr__comp_191screen_sel(unsigned int __dyc_exp ) ;
extern void *__dyc_read_ptr__comp_191screen_sel(void) ;
extern void __dyc_print_ptr__comp_191screen_sel(void const   * const  __dyc_thistype ) ;
extern union __anonunion____missing_field_name_57 __dyc_random_comp_182__anonunion____missing_field_name_57(unsigned int __dyc_exp ) ;
extern union __anonunion____missing_field_name_57 __dyc_read_comp_182__anonunion____missing_field_name_57(void) ;
extern void __dyc_print_comp_182__anonunion____missing_field_name_57(union __anonunion____missing_field_name_57 __dyc_thistype ) ;
extern struct layout_cells __dyc_random_comp_221layout_cells(unsigned int __dyc_exp ) ;
extern struct layout_cells __dyc_read_comp_221layout_cells(void) ;
extern void __dyc_print_comp_221layout_cells(struct layout_cells __dyc_thistype ) ;
extern struct bufferevent *__dyc_random_ptr__comp_124bufferevent(unsigned int __dyc_exp ) ;
extern struct bufferevent *__dyc_read_ptr__comp_124bufferevent(void) ;
extern void __dyc_print_ptr__comp_124bufferevent(struct bufferevent  const  *__dyc_thistype ) ;
extern struct cmd_parse_command *__dyc_random_ptr__comp_277cmd_parse_command(unsigned int __dyc_exp ) ;
extern struct cmd_parse_command *__dyc_read_ptr__comp_277cmd_parse_command(void) ;
extern void __dyc_print_ptr__comp_277cmd_parse_command(struct cmd_parse_command  const  *__dyc_thistype ) ;
extern struct style_ranges __dyc_random_comp_189style_ranges(unsigned int __dyc_exp ) ;
extern struct style_ranges __dyc_read_comp_189style_ranges(void) ;
extern void __dyc_print_comp_189style_ranges(struct style_ranges __dyc_thistype ) ;
extern struct tty_term __dyc_random_comp_235tty_term(unsigned int __dyc_exp ) ;
extern struct tty_term __dyc_read_comp_235tty_term(void) ;
extern void __dyc_print_comp_235tty_term(struct tty_term __dyc_thistype ) ;
extern union __anonunion_ev_timeout_pos_44 __dyc_random_comp_109__anonunion_ev_timeout_pos_44(unsigned int __dyc_exp ) ;
extern union __anonunion_ev_timeout_pos_44 __dyc_read_comp_109__anonunion_ev_timeout_pos_44(void) ;
extern void __dyc_print_comp_109__anonunion_ev_timeout_pos_44(union __anonunion_ev_timeout_pos_44 __dyc_thistype ) ;
extern void *__dyc_random_ptr__comp_234tty_code(unsigned int __dyc_exp ) ;
extern void *__dyc_read_ptr__comp_234tty_code(void) ;
extern void __dyc_print_ptr__comp_234tty_code(void const   * const  __dyc_thistype ) ;
extern struct grid_line *__dyc_random_ptr__comp_184grid_line(unsigned int __dyc_exp ) ;
extern struct grid_line *__dyc_read_ptr__comp_184grid_line(void) ;
extern void __dyc_print_ptr__comp_184grid_line(struct grid_line  const  *__dyc_thistype ) ;
extern struct screen_redraw_ctx *__dyc_random_ptr__comp_195screen_redraw_ctx(unsigned int __dyc_exp ) ;
extern struct screen_redraw_ctx *__dyc_read_ptr__comp_195screen_redraw_ctx(void) ;
extern void __dyc_print_ptr__comp_195screen_redraw_ctx(struct screen_redraw_ctx  const  *__dyc_thistype ) ;
extern struct client_windows __dyc_random_comp_257client_windows(unsigned int __dyc_exp ) ;
extern struct client_windows __dyc_read_comp_257client_windows(void) ;
extern void __dyc_print_comp_257client_windows(struct client_windows __dyc_thistype ) ;
extern struct winlink __dyc_random_comp_169winlink(unsigned int __dyc_exp ) ;
extern struct winlink __dyc_read_comp_169winlink(void) ;
extern void __dyc_print_comp_169winlink(struct winlink __dyc_thistype ) ;
extern struct grid *__dyc_random_ptr__comp_185grid(unsigned int __dyc_exp ) ;
extern struct grid *__dyc_read_ptr__comp_185grid(void) ;
extern void __dyc_print_ptr__comp_185grid(struct grid  const  *__dyc_thistype ) ;
extern struct cmd_parse_result *__dyc_random_ptr__comp_245cmd_parse_result(unsigned int __dyc_exp ) ;
extern struct cmd_parse_result *__dyc_read_ptr__comp_245cmd_parse_result(void) ;
extern void __dyc_print_ptr__comp_245cmd_parse_result(struct cmd_parse_result  const  *__dyc_thistype ) ;
extern struct window_pane **__dyc_random_ptr__ptr__comp_194window_pane(unsigned int __dyc_exp ) ;
extern struct window_pane **__dyc_read_ptr__ptr__comp_194window_pane(void) ;
extern void __dyc_print_ptr__ptr__comp_194window_pane(struct window_pane * const  *__dyc_thistype ) ;
extern YYSTYPE *__dyc_random_ptr__typdef_YYSTYPE(unsigned int __dyc_exp ) ;
extern YYSTYPE *__dyc_read_ptr__typdef_YYSTYPE(void) ;
extern void __dyc_print_ptr__typdef_YYSTYPE(YYSTYPE const   *__dyc_thistype ) ;
extern struct client_window __dyc_random_comp_255client_window(unsigned int __dyc_exp ) ;
extern struct client_window __dyc_read_comp_255client_window(void) ;
extern void __dyc_print_comp_255client_window(struct client_window __dyc_thistype ) ;
extern struct window_pane_resize __dyc_random_comp_202window_pane_resize(unsigned int __dyc_exp ) ;
extern struct window_pane_resize __dyc_read_comp_202window_pane_resize(void) ;
extern void __dyc_print_comp_202window_pane_resize(struct window_pane_resize __dyc_thistype ) ;
extern size_t *__dyc_random_ptr__typdef_size_t(unsigned int __dyc_exp ) ;
extern size_t *__dyc_read_ptr__typdef_size_t(void) ;
extern void __dyc_print_ptr__typdef_size_t(size_t const   *__dyc_thistype ) ;
extern struct event_callback __dyc_random_comp_106event_callback(unsigned int __dyc_exp ) ;
extern struct event_callback __dyc_read_comp_106event_callback(void) ;
extern void __dyc_print_comp_106event_callback(struct event_callback __dyc_thistype ) ;
extern __off64_t __dyc_random_typdef___off64_t(unsigned int __dyc_exp ) ;
extern __off64_t __dyc_read_typdef___off64_t(void) ;
extern void __dyc_print_typdef___off64_t(__off64_t __dyc_thistype ) ;
extern char ***__dyc_random_ptr__ptr__ptr__char(unsigned int __dyc_exp ) ;
extern char ***__dyc_read_ptr__ptr__ptr__char(void) ;
extern void __dyc_print_ptr__ptr__ptr__char(char ** const  *__dyc_thistype ) ;
extern struct grid_cell __dyc_random_comp_179grid_cell(unsigned int __dyc_exp ) ;
extern struct grid_cell __dyc_read_comp_179grid_cell(void) ;
extern void __dyc_print_comp_179grid_cell(struct grid_cell __dyc_thistype ) ;
extern uint8_t __dyc_random_typdef_uint8_t(unsigned int __dyc_exp ) ;
extern uint8_t __dyc_read_typdef_uint8_t(void) ;
extern void __dyc_print_typdef_uint8_t(uint8_t __dyc_thistype ) ;
extern struct key_table *__dyc_random_ptr__comp_258key_table(unsigned int __dyc_exp ) ;
extern struct key_table *__dyc_read_ptr__comp_258key_table(void) ;
extern void __dyc_print_ptr__comp_258key_table(struct key_table  const  *__dyc_thistype ) ;
extern struct cmd_find_state __dyc_random_comp_146cmd_find_state(unsigned int __dyc_exp ) ;
extern struct cmd_find_state __dyc_read_comp_146cmd_find_state(void) ;
extern void __dyc_print_comp_146cmd_find_state(struct cmd_find_state __dyc_thistype ) ;
extern void *__dyc_random_ptr__comp_100event_base(unsigned int __dyc_exp ) ;
extern void *__dyc_read_ptr__comp_100event_base(void) ;
extern void __dyc_print_ptr__comp_100event_base(void const   * const  __dyc_thistype ) ;
extern struct __anonstruct_sentry_70 __dyc_random_comp_218__anonstruct_sentry_70(unsigned int __dyc_exp ) ;
extern struct __anonstruct_sentry_70 __dyc_read_comp_218__anonstruct_sentry_70(void) ;
extern void __dyc_print_comp_218__anonstruct_sentry_70(struct __anonstruct_sentry_70 __dyc_thistype ) ;
extern struct winlink *__dyc_random_ptr__comp_169winlink(unsigned int __dyc_exp ) ;
extern struct winlink *__dyc_read_ptr__comp_169winlink(void) ;
extern void __dyc_print_ptr__comp_169winlink(struct winlink  const  *__dyc_thistype ) ;
extern __u_int __dyc_random_typdef___u_int(unsigned int __dyc_exp ) ;
extern __u_int __dyc_read_typdef___u_int(void) ;
extern void __dyc_print_typdef___u_int(__u_int __dyc_thistype ) ;
extern struct cmd_parse_commands __dyc_random_comp_279cmd_parse_commands(unsigned int __dyc_exp ) ;
extern struct cmd_parse_commands __dyc_read_comp_279cmd_parse_commands(void) ;
extern void __dyc_print_comp_279cmd_parse_commands(struct cmd_parse_commands __dyc_thistype ) ;
extern struct __anonstruct_entry_76 __dyc_random_comp_230__anonstruct_entry_76(unsigned int __dyc_exp ) ;
extern struct __anonstruct_entry_76 __dyc_read_comp_230__anonstruct_entry_76(void) ;
extern void __dyc_print_comp_230__anonstruct_entry_76(struct __anonstruct_entry_76 __dyc_thistype ) ;
extern struct event __dyc_random_comp_101event(unsigned int __dyc_exp ) ;
extern struct event __dyc_read_comp_101event(void) ;
extern void __dyc_print_comp_101event(struct event __dyc_thistype ) ;
extern struct style_range **__dyc_random_ptr__ptr__comp_187style_range(unsigned int __dyc_exp ) ;
extern struct style_range **__dyc_read_ptr__ptr__comp_187style_range(void) ;
extern void __dyc_print_ptr__ptr__comp_187style_range(struct style_range * const  *__dyc_thistype ) ;
extern struct cmd_parse_input __dyc_random_comp_246cmd_parse_input(unsigned int __dyc_exp ) ;
extern struct cmd_parse_input __dyc_read_comp_246cmd_parse_input(void) ;
extern void __dyc_print_comp_246cmd_parse_input(struct cmd_parse_input __dyc_thistype ) ;
extern struct cmd_parse_scope __dyc_random_comp_275cmd_parse_scope(unsigned int __dyc_exp ) ;
extern struct cmd_parse_scope __dyc_read_comp_275cmd_parse_scope(void) ;
extern void __dyc_print_comp_275cmd_parse_scope(struct cmd_parse_scope __dyc_thistype ) ;
extern struct __anonstruct_entry_67 __dyc_random_comp_214__anonstruct_entry_67(unsigned int __dyc_exp ) ;
extern struct __anonstruct_entry_67 __dyc_read_comp_214__anonstruct_entry_67(void) ;
extern void __dyc_print_comp_214__anonstruct_entry_67(struct __anonstruct_entry_67 __dyc_thistype ) ;
extern void *__dyc_random_ptr__comp_118evbuffer(unsigned int __dyc_exp ) ;
extern void *__dyc_read_ptr__comp_118evbuffer(void) ;
extern void __dyc_print_ptr__comp_118evbuffer(void const   * const  __dyc_thistype ) ;
extern struct tty_term *__dyc_random_ptr__comp_235tty_term(unsigned int __dyc_exp ) ;
extern struct tty_term *__dyc_read_ptr__comp_235tty_term(void) ;
extern void __dyc_print_ptr__comp_235tty_term(struct tty_term  const  *__dyc_thistype ) ;
extern void *__dyc_random_ptr__comp_149cmdq_state(unsigned int __dyc_exp ) ;
extern void *__dyc_read_ptr__comp_149cmdq_state(void) ;
extern void __dyc_print_ptr__comp_149cmdq_state(void const   * const  __dyc_thistype ) ;
extern struct __anonstruct_entry_87 __dyc_random_comp_276__anonstruct_entry_87(unsigned int __dyc_exp ) ;
extern struct __anonstruct_entry_87 __dyc_read_comp_276__anonstruct_entry_87(void) ;
extern void __dyc_print_comp_276__anonstruct_entry_87(struct __anonstruct_entry_87 __dyc_thistype ) ;
extern struct key_event __dyc_random_comp_232key_event(unsigned int __dyc_exp ) ;
extern struct key_event __dyc_read_comp_232key_event(void) ;
extern void __dyc_print_comp_232key_event(struct key_event __dyc_thistype ) ;
extern void *__dyc_random_ptr__comp_155input_ctx(unsigned int __dyc_exp ) ;
extern void *__dyc_read_ptr__comp_155input_ctx(void) ;
extern void __dyc_print_ptr__comp_155input_ctx(void const   * const  __dyc_thistype ) ;
extern struct cmd_parse_state __dyc_random_comp_280cmd_parse_state(unsigned int __dyc_exp ) ;
extern struct cmd_parse_state __dyc_read_comp_280cmd_parse_state(void) ;
extern void __dyc_print_comp_280cmd_parse_state(struct cmd_parse_state __dyc_thistype ) ;
extern struct __anonstruct_entry_80 __dyc_random_comp_254__anonstruct_entry_80(unsigned int __dyc_exp ) ;
extern struct __anonstruct_entry_80 __dyc_read_comp_254__anonstruct_entry_80(void) ;
extern void __dyc_print_comp_254__anonstruct_entry_80(struct __anonstruct_entry_80 __dyc_thistype ) ;
extern struct mouse_event __dyc_random_comp_158mouse_event(unsigned int __dyc_exp ) ;
extern struct mouse_event __dyc_read_comp_158mouse_event(void) ;
extern void __dyc_print_comp_158mouse_event(struct mouse_event __dyc_thistype ) ;
extern struct grid_cell_entry __dyc_random_comp_181grid_cell_entry(unsigned int __dyc_exp ) ;
extern struct grid_cell_entry __dyc_read_comp_181grid_cell_entry(void) ;
extern void __dyc_print_comp_181grid_cell_entry(struct grid_cell_entry __dyc_thistype ) ;
extern struct cmd_parse_input *__dyc_random_ptr__comp_246cmd_parse_input(unsigned int __dyc_exp ) ;
extern struct cmd_parse_input *__dyc_read_ptr__comp_246cmd_parse_input(void) ;
extern void __dyc_print_ptr__comp_246cmd_parse_input(struct cmd_parse_input  const  *__dyc_thistype ) ;
extern struct __anonstruct_entry_68 __dyc_random_comp_216__anonstruct_entry_68(unsigned int __dyc_exp ) ;
extern struct __anonstruct_entry_68 __dyc_read_comp_216__anonstruct_entry_68(void) ;
extern void __dyc_print_comp_216__anonstruct_entry_68(struct __anonstruct_entry_68 __dyc_thistype ) ;
extern struct cmd_parse_scope *__dyc_random_ptr__comp_275cmd_parse_scope(unsigned int __dyc_exp ) ;
extern struct cmd_parse_scope *__dyc_read_ptr__comp_275cmd_parse_scope(void) ;
extern void __dyc_print_ptr__comp_275cmd_parse_scope(struct cmd_parse_scope  const  *__dyc_thistype ) ;
extern struct key_bindings __dyc_random_comp_263key_bindings(unsigned int __dyc_exp ) ;
extern struct key_bindings __dyc_read_comp_263key_bindings(void) ;
extern void __dyc_print_comp_263key_bindings(struct key_bindings __dyc_thistype ) ;
extern struct __anonstruct_entry_88 __dyc_random_comp_278__anonstruct_entry_88(unsigned int __dyc_exp ) ;
extern struct __anonstruct_entry_88 __dyc_read_comp_278__anonstruct_entry_88(void) ;
extern void __dyc_print_comp_278__anonstruct_entry_88(struct __anonstruct_entry_88 __dyc_thistype ) ;
extern struct __anonstruct_entry_81 __dyc_random_comp_256__anonstruct_entry_81(unsigned int __dyc_exp ) ;
extern struct __anonstruct_entry_81 __dyc_read_comp_256__anonstruct_entry_81(void) ;
extern void __dyc_print_comp_256__anonstruct_entry_81(struct __anonstruct_entry_81 __dyc_thistype ) ;
extern struct _IO_marker *__dyc_random_ptr__comp_41_IO_marker(unsigned int __dyc_exp ) ;
extern struct _IO_marker *__dyc_read_ptr__comp_41_IO_marker(void) ;
extern void __dyc_print_ptr__comp_41_IO_marker(struct _IO_marker  const  *__dyc_thistype ) ;
extern struct cmd_parse_state *__dyc_random_ptr__comp_280cmd_parse_state(unsigned int __dyc_exp ) ;
extern struct cmd_parse_state *__dyc_read_ptr__comp_280cmd_parse_state(void) ;
extern void __dyc_print_ptr__comp_280cmd_parse_state(struct cmd_parse_state  const  *__dyc_thistype ) ;
extern struct session __dyc_random_comp_165session(unsigned int __dyc_exp ) ;
extern struct session __dyc_read_comp_165session(void) ;
extern void __dyc_print_comp_165session(struct session __dyc_thistype ) ;
extern struct utf8_data __dyc_random_comp_178utf8_data(unsigned int __dyc_exp ) ;
extern struct utf8_data __dyc_read_comp_178utf8_data(void) ;
extern void __dyc_print_comp_178utf8_data(struct utf8_data __dyc_thistype ) ;
extern struct layout_cell __dyc_random_comp_206layout_cell(unsigned int __dyc_exp ) ;
extern struct layout_cell __dyc_read_comp_206layout_cell(void) ;
extern void __dyc_print_comp_206layout_cell(struct layout_cell __dyc_thistype ) ;
extern struct mouse_event *__dyc_random_ptr__comp_158mouse_event(unsigned int __dyc_exp ) ;
extern struct mouse_event *__dyc_read_ptr__comp_158mouse_event(void) ;
extern void __dyc_print_ptr__comp_158mouse_event(struct mouse_event  const  *__dyc_thistype ) ;
extern struct grid_cell_entry *__dyc_random_ptr__comp_181grid_cell_entry(unsigned int __dyc_exp ) ;
extern struct grid_cell_entry *__dyc_read_ptr__comp_181grid_cell_entry(void) ;
extern void __dyc_print_ptr__comp_181grid_cell_entry(struct grid_cell_entry  const  *__dyc_thistype ) ;
extern struct __anonstruct_entry_77 __dyc_random_comp_237__anonstruct_entry_77(unsigned int __dyc_exp ) ;
extern struct __anonstruct_entry_77 __dyc_read_comp_237__anonstruct_entry_77(void) ;
extern void __dyc_print_comp_237__anonstruct_entry_77(struct __anonstruct_entry_77 __dyc_thistype ) ;
extern struct winlink **__dyc_random_ptr__ptr__comp_169winlink(unsigned int __dyc_exp ) ;
extern struct winlink **__dyc_read_ptr__ptr__comp_169winlink(void) ;
extern void __dyc_print_ptr__ptr__comp_169winlink(struct winlink * const  *__dyc_thistype ) ;
extern void *__dyc_random_ptr__typdef__IO_lock_t(unsigned int __dyc_exp ) ;
extern void *__dyc_read_ptr__typdef__IO_lock_t(void) ;
extern void __dyc_print_ptr__typdef__IO_lock_t(void const   * const  __dyc_thistype ) ;
extern pid_t __dyc_random_typdef_pid_t(unsigned int __dyc_exp ) ;
extern pid_t __dyc_read_typdef_pid_t(void) ;
extern void __dyc_print_typdef_pid_t(pid_t __dyc_thistype ) ;
extern struct window *__dyc_random_ptr__comp_205window(unsigned int __dyc_exp ) ;
extern struct window *__dyc_read_ptr__comp_205window(void) ;
extern void __dyc_print_ptr__comp_205window(struct window  const  *__dyc_thistype ) ;
extern struct window_mode_entry __dyc_random_comp_198window_mode_entry(unsigned int __dyc_exp ) ;
extern struct window_mode_entry __dyc_read_comp_198window_mode_entry(void) ;
extern void __dyc_print_comp_198window_mode_entry(struct window_mode_entry __dyc_thistype ) ;
extern struct session *__dyc_random_ptr__comp_165session(unsigned int __dyc_exp ) ;
extern struct session *__dyc_read_ptr__comp_165session(void) ;
extern void __dyc_print_ptr__comp_165session(struct session  const  *__dyc_thistype ) ;
extern bitstr_t __dyc_random_typdef_bitstr_t(unsigned int __dyc_exp ) ;
extern bitstr_t __dyc_read_typdef_bitstr_t(void) ;
extern void __dyc_print_typdef_bitstr_t(bitstr_t __dyc_thistype ) ;
extern struct grid_extd_entry __dyc_random_comp_180grid_extd_entry(unsigned int __dyc_exp ) ;
extern struct grid_extd_entry __dyc_read_comp_180grid_extd_entry(void) ;
extern void __dyc_print_comp_180grid_extd_entry(struct grid_extd_entry __dyc_thistype ) ;
extern struct __anonstruct_alerts_entry_65 __dyc_random_comp_212__anonstruct_alerts_entry_65(unsigned int __dyc_exp ) ;
extern struct __anonstruct_alerts_entry_65 __dyc_read_comp_212__anonstruct_alerts_entry_65(void) ;
extern void __dyc_print_comp_212__anonstruct_alerts_entry_65(struct __anonstruct_alerts_entry_65 __dyc_thistype ) ;
extern struct layout_cell *__dyc_random_ptr__comp_206layout_cell(unsigned int __dyc_exp ) ;
extern struct layout_cell *__dyc_read_ptr__comp_206layout_cell(void) ;
extern void __dyc_print_ptr__comp_206layout_cell(struct layout_cell  const  *__dyc_thistype ) ;
extern __u_short __dyc_random_typdef___u_short(unsigned int __dyc_exp ) ;
extern __u_short __dyc_read_typdef___u_short(void) ;
extern void __dyc_print_typdef___u_short(__u_short __dyc_thistype ) ;
extern struct __anonstruct_entry_84 __dyc_random_comp_259__anonstruct_entry_84(unsigned int __dyc_exp ) ;
extern struct __anonstruct_entry_84 __dyc_read_comp_259__anonstruct_entry_84(void) ;
extern void __dyc_print_comp_259__anonstruct_entry_84(struct __anonstruct_entry_84 __dyc_thistype ) ;
extern struct client_files __dyc_random_comp_253client_files(unsigned int __dyc_exp ) ;
extern struct client_files __dyc_read_comp_253client_files(void) ;
extern void __dyc_print_comp_253client_files(struct client_files __dyc_thistype ) ;
extern struct environ_entry *__dyc_random_ptr__comp_223environ_entry(unsigned int __dyc_exp ) ;
extern struct environ_entry *__dyc_read_ptr__comp_223environ_entry(void) ;
extern void __dyc_print_ptr__comp_223environ_entry(struct environ_entry  const  *__dyc_thistype ) ;
extern void *__dyc_random_ptr__comp_154format_tree(unsigned int __dyc_exp ) ;
extern void *__dyc_read_ptr__comp_154format_tree(void) ;
extern void __dyc_print_ptr__comp_154format_tree(void const   * const  __dyc_thistype ) ;
extern key_code __dyc_random_typdef_key_code(unsigned int __dyc_exp ) ;
extern key_code __dyc_read_typdef_key_code(void) ;
extern void __dyc_print_typdef_key_code(key_code __dyc_thistype ) ;
extern struct __anonstruct_tree_entry_64 __dyc_random_comp_209__anonstruct_tree_entry_64(unsigned int __dyc_exp ) ;
extern struct __anonstruct_tree_entry_64 __dyc_read_comp_209__anonstruct_tree_entry_64(void) ;
extern void __dyc_print_comp_209__anonstruct_tree_entry_64(struct __anonstruct_tree_entry_64 __dyc_thistype ) ;
extern struct event **__dyc_random_ptr__ptr__comp_101event(unsigned int __dyc_exp ) ;
extern struct event **__dyc_read_ptr__ptr__comp_101event(void) ;
extern void __dyc_print_ptr__ptr__comp_101event(struct event * const  *__dyc_thistype ) ;
extern FILE __dyc_random_typdef_FILE(unsigned int __dyc_exp ) ;
extern FILE __dyc_read_typdef_FILE(void) ;
extern void __dyc_print_typdef_FILE(FILE __dyc_thistype ) ;
extern struct window **__dyc_random_ptr__ptr__comp_205window(unsigned int __dyc_exp ) ;
extern struct window **__dyc_read_ptr__ptr__comp_205window(void) ;
extern void __dyc_print_ptr__ptr__comp_205window(struct window * const  *__dyc_thistype ) ;
extern YYSTYPE __dyc_random_typdef_YYSTYPE(unsigned int __dyc_exp ) ;
extern YYSTYPE __dyc_read_typdef_YYSTYPE(void) ;
extern void __dyc_print_typdef_YYSTYPE(YYSTYPE __dyc_thistype ) ;
extern uint64_t __dyc_random_typdef_uint64_t(unsigned int __dyc_exp ) ;
extern uint64_t __dyc_read_typdef_uint64_t(void) ;
extern void __dyc_print_typdef_uint64_t(uint64_t __dyc_thistype ) ;
extern bitstr_t *__dyc_random_ptr__typdef_bitstr_t(unsigned int __dyc_exp ) ;
extern bitstr_t *__dyc_read_ptr__typdef_bitstr_t(void) ;
extern void __dyc_print_ptr__typdef_bitstr_t(bitstr_t const   *__dyc_thistype ) ;
extern struct grid_extd_entry *__dyc_random_ptr__comp_180grid_extd_entry(unsigned int __dyc_exp ) ;
extern struct grid_extd_entry *__dyc_read_ptr__comp_180grid_extd_entry(void) ;
extern void __dyc_print_ptr__comp_180grid_extd_entry(struct grid_extd_entry  const  *__dyc_thistype ) ;
extern _IO_FILE __dyc_random_typdef__IO_FILE(unsigned int __dyc_exp ) ;
extern _IO_FILE __dyc_read_typdef__IO_FILE(void) ;
extern void __dyc_print_typdef__IO_FILE(_IO_FILE __dyc_thistype ) ;
extern void *__dyc_random_ptr__comp_145cmd(unsigned int __dyc_exp ) ;
extern void *__dyc_read_ptr__comp_145cmd(void) ;
extern void __dyc_print_ptr__comp_145cmd(void const   * const  __dyc_thistype ) ;
extern char **__dyc_random_ptr__ptr__char(unsigned int __dyc_exp ) ;
extern char **__dyc_read_ptr__ptr__char(void) ;
extern void __dyc_print_ptr__ptr__char(char * const  *__dyc_thistype ) ;
extern struct passwd __dyc_random_comp_21passwd(unsigned int __dyc_exp ) ;
extern struct passwd __dyc_read_comp_21passwd(void) ;
extern void __dyc_print_comp_21passwd(struct passwd __dyc_thistype ) ;
extern struct termios *__dyc_random_ptr__comp_46termios(unsigned int __dyc_exp ) ;
extern struct termios *__dyc_read_ptr__comp_46termios(void) ;
extern void __dyc_print_ptr__comp_46termios(struct termios  const  *__dyc_thistype ) ;
extern void *__dyc_random_ptr__comp_242args_entry(unsigned int __dyc_exp ) ;
extern void *__dyc_read_ptr__comp_242args_entry(void) ;
extern void __dyc_print_ptr__comp_242args_entry(void const   * const  __dyc_thistype ) ;
