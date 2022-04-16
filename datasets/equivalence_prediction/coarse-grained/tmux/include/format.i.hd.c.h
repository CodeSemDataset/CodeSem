#line 31 "/usr/include/x86_64-linux-gnu/bits/types.h"
typedef unsigned char __u_char;
#line 32 "/usr/include/x86_64-linux-gnu/bits/types.h"
typedef unsigned short __u_short;
#line 33 "/usr/include/x86_64-linux-gnu/bits/types.h"
typedef unsigned int __u_int;
#line 143 "/usr/include/x86_64-linux-gnu/bits/types.h"
typedef int __pid_t;
#line 149 "/usr/include/x86_64-linux-gnu/bits/types.h"
typedef long __time_t;
#line 151 "/usr/include/x86_64-linux-gnu/bits/types.h"
typedef long __suseconds_t;
#line 180 "/usr/include/x86_64-linux-gnu/bits/types.h"
typedef long __ssize_t;
#line 34 "/usr/include/x86_64-linux-gnu/sys/types.h"
typedef __u_char u_char;
#line 35 "/usr/include/x86_64-linux-gnu/sys/types.h"
typedef __u_short u_short;
#line 36 "/usr/include/x86_64-linux-gnu/sys/types.h"
typedef __u_int u_int;
#line 99 "/usr/include/x86_64-linux-gnu/sys/types.h"
typedef __pid_t pid_t;
#line 110 "/usr/include/x86_64-linux-gnu/sys/types.h"
typedef __ssize_t ssize_t;
#line 76 "/usr/include/time.h"
typedef __time_t time_t;
#line 212 "/usr/local/lib/gcc/x86_64-unknown-linux-gnu/4.8.2/include/stddef.h"
typedef unsigned long size_t;
#line 31 "/usr/include/x86_64-linux-gnu/bits/time.h"
struct timeval {
   __time_t tv_sec ;
   __suseconds_t tv_usec ;
};
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
#line 439 "/usr/include/regex.h"
typedef int regoff_t;
#line 465 "/usr/include/regex.h"
struct __anonstruct_regmatch_t_46 {
   regoff_t rm_so ;
   regoff_t rm_eo ;
};
#line 465 "/usr/include/regex.h"
typedef struct __anonstruct_regmatch_t_46 regmatch_t;
#line 40 "/usr/local/lib/gcc/x86_64-unknown-linux-gnu/4.8.2/include/stdarg.h"
typedef __builtin_va_list __gnuc_va_list;
#line 98 "/usr/local/lib/gcc/x86_64-unknown-linux-gnu/4.8.2/include/stdarg.h"
typedef __gnuc_va_list va_list;
#line 133 "/usr/include/time.h"
struct tm {
   int tm_sec ;
   int tm_min ;
   int tm_hour ;
   int tm_mday ;
   int tm_mon ;
   int tm_year ;
   int tm_wday ;
   int tm_yday ;
   int tm_isdst ;
   long tm_gmtoff ;
   char *tm_zone ;
};
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
#line 134 "/usr/include/wchar.h"
struct tm;
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
struct __anonstruct_evcb_active_next_67 {
   struct event_callback *tqe_next ;
   struct event_callback **tqe_prev ;
};
#line 107 "/usr/local/include/event2/event_struct.h"
union __anonunion_evcb_cb_union_68 {
   void (*evcb_callback)(int  , short  , void * ) ;
   void (*evcb_selfcb)(struct event_callback * , void * ) ;
   void (*evcb_evfinalize)(struct event * , void * ) ;
   void (*evcb_cbfinalize)(struct event_callback * , void * ) ;
};
#line 107 "/usr/local/include/event2/event_struct.h"
struct event_callback {
   struct __anonstruct_evcb_active_next_67 evcb_active_next ;
   short evcb_flags ;
   uint8_t evcb_pri ;
   uint8_t evcb_closure ;
   union __anonunion_evcb_cb_union_68 evcb_cb_union ;
   void *evcb_arg ;
};
#line 122
struct event_base;
#line 123 "/usr/local/include/event2/event_struct.h"
struct __anonstruct_ev_next_with_common_timeout_70 {
   struct event *tqe_next ;
   struct event **tqe_prev ;
};
#line 123 "/usr/local/include/event2/event_struct.h"
union __anonunion_ev_timeout_pos_69 {
   struct __anonstruct_ev_next_with_common_timeout_70 ev_next_with_common_timeout ;
   int min_heap_idx ;
};
#line 123 "/usr/local/include/event2/event_struct.h"
struct __anonstruct_ev_io_next_73 {
   struct event *le_next ;
   struct event **le_prev ;
};
#line 123 "/usr/local/include/event2/event_struct.h"
struct __anonstruct_ev_io_72 {
   struct __anonstruct_ev_io_next_73 ev_io_next ;
   struct timeval ev_timeout ;
};
#line 123 "/usr/local/include/event2/event_struct.h"
struct __anonstruct_ev_signal_next_75 {
   struct event *le_next ;
   struct event **le_prev ;
};
#line 123 "/usr/local/include/event2/event_struct.h"
struct __anonstruct_ev_signal_74 {
   struct __anonstruct_ev_signal_next_75 ev_signal_next ;
   short ev_ncalls ;
   short *ev_pncalls ;
};
#line 123 "/usr/local/include/event2/event_struct.h"
union __anonunion_ev__71 {
   struct __anonstruct_ev_io_72 ev_io ;
   struct __anonstruct_ev_signal_74 ev_signal ;
};
#line 123 "/usr/local/include/event2/event_struct.h"
struct event {
   struct event_callback ev_evcallback ;
   union __anonunion_ev_timeout_pos_69 ev_timeout_pos ;
   int ev_fd ;
   struct event_base *ev_base ;
   union __anonunion_ev__71 ev_ ;
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
#line 53
struct job;
#line 53
struct job;
#line 55
struct mouse_event;
#line 55
struct mouse_event;
#line 56
struct options;
#line 56
struct options;
#line 58
struct options_entry;
#line 58
struct options_entry;
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
struct __anonstruct_data_83 {
   u_char attr ;
   u_char fg ;
   u_char bg ;
   u_char data ;
};
#line 708 "tmux.h"
union __anonunion____missing_field_name_82 {
   u_int offset ;
   struct __anonstruct_data_83 data ;
};
#line 708 "tmux.h"
struct grid_cell_entry {
   u_char flags ;
   union __anonunion____missing_field_name_82 __annonCompField1 ;
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
struct __anonstruct_entry_84 {
   struct style_range *tqe_next ;
   struct style_range **tqe_prev ;
};
#line 780 "tmux.h"
struct style_range {
   enum style_range_type type ;
   u_int argument ;
   u_int start ;
   u_int end ;
   struct __anonstruct_entry_84 entry ;
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
struct __anonstruct_entry_85 {
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
   struct __anonstruct_entry_85 entry ;
};
#line 941 "tmux.h"
struct window_pane_offset {
   size_t used ;
};
#line 946 "tmux.h"
struct __anonstruct_entry_86 {
   struct window_pane_resize *tqe_next ;
   struct window_pane_resize **tqe_prev ;
};
#line 946 "tmux.h"
struct window_pane_resize {
   u_int sx ;
   u_int sy ;
   u_int osx ;
   u_int osy ;
   struct __anonstruct_entry_86 entry ;
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
struct __anonstruct_modes_87 {
   struct window_mode_entry *tqh_first ;
   struct window_mode_entry **tqh_last ;
};
#line 958 "tmux.h"
struct __anonstruct_entry_88 {
   struct window_pane *tqe_next ;
   struct window_pane **tqe_prev ;
};
#line 958 "tmux.h"
struct __anonstruct_tree_entry_89 {
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
   struct __anonstruct_modes_87 modes ;
   char *searchstr ;
   int searchregex ;
   int border_gc_set ;
   struct grid_cell border_gc ;
   struct __anonstruct_entry_88 entry ;
   struct __anonstruct_tree_entry_89 tree_entry ;
};
#line 1037 "tmux.h"
struct window_panes {
   struct window_pane *tqh_first ;
   struct window_pane **tqh_last ;
};
#line 1041 "tmux.h"
struct __anonstruct_alerts_entry_90 {
   struct window *tqe_next ;
   struct window **tqe_prev ;
};
#line 1041 "tmux.h"
struct __anonstruct_winlinks_91 {
   struct winlink *tqh_first ;
   struct winlink **tqh_last ;
};
#line 1041 "tmux.h"
struct __anonstruct_entry_92 {
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
   struct __anonstruct_alerts_entry_90 alerts_entry ;
   struct options *options ;
   u_int references ;
   struct __anonstruct_winlinks_91 winlinks ;
   struct __anonstruct_entry_92 entry ;
};
#line 1095 "tmux.h"
struct __anonstruct_entry_93 {
   struct winlink *rbe_left ;
   struct winlink *rbe_right ;
   struct winlink *rbe_parent ;
   int rbe_color ;
};
#line 1095 "tmux.h"
struct __anonstruct_wentry_94 {
   struct winlink *tqe_next ;
   struct winlink **tqe_prev ;
};
#line 1095 "tmux.h"
struct __anonstruct_sentry_95 {
   struct winlink *tqe_next ;
   struct winlink **tqe_prev ;
};
#line 1095 "tmux.h"
struct winlink {
   int idx ;
   struct session *session ;
   struct window *window ;
   int flags ;
   struct __anonstruct_entry_93 entry ;
   struct __anonstruct_wentry_94 wentry ;
   struct __anonstruct_sentry_95 sentry ;
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
struct __anonstruct_entry_96 {
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
   struct __anonstruct_entry_96 entry ;
};
#line 1160 "tmux.h"
struct __anonstruct_entry_97 {
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
   struct __anonstruct_entry_97 entry ;
};
#line 1171 "tmux.h"
struct __anonstruct_sessions_98 {
   struct session *tqh_first ;
   struct session **tqh_last ;
};
#line 1171 "tmux.h"
struct __anonstruct_entry_99 {
   struct session_group *rbe_left ;
   struct session_group *rbe_right ;
   struct session_group *rbe_parent ;
   int rbe_color ;
};
#line 1171 "tmux.h"
struct session_group {
   char *name ;
   struct __anonstruct_sessions_98 sessions ;
   struct __anonstruct_entry_99 entry ;
};
#line 1179 "tmux.h"
struct __anonstruct_gentry_100 {
   struct session *tqe_next ;
   struct session **tqe_prev ;
};
#line 1179 "tmux.h"
struct __anonstruct_entry_101 {
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
   struct __anonstruct_gentry_100 gentry ;
   struct __anonstruct_entry_101 entry ;
};
#line 1216 "tmux.h"
struct sessions {
   struct session *rbh_root ;
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
struct __anonstruct_entry_102 {
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
   struct __anonstruct_entry_102 entry ;
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
struct __anonstruct_entry_105 {
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
   struct __anonstruct_entry_105 entry ;
};
#line 1590 "tmux.h"
struct client_files {
   struct client_file *rbh_root ;
};
#line 1593 "tmux.h"
struct __anonstruct_entry_106 {
   struct client_window *rbe_left ;
   struct client_window *rbe_right ;
   struct client_window *rbe_parent ;
   int rbe_color ;
};
#line 1593 "tmux.h"
struct client_window {
   u_int window ;
   struct window_pane *pane ;
   struct __anonstruct_entry_106 entry ;
};
#line 1598 "tmux.h"
struct client_windows {
   struct client_window *rbh_root ;
};
#line 1608
enum __anonenum_exit_type_107 {
    CLIENT_EXIT_RETURN = 0,
    CLIENT_EXIT_SHUTDOWN = 1,
    CLIENT_EXIT_DETACH = 2
} ;
#line 1608
struct key_table;
#line 1608
enum __anonenum_prompt_mode_108 {
    PROMPT_ENTRY = 0,
    PROMPT_COMMAND = 1
} ;
#line 1608 "tmux.h"
struct __anonstruct_entry_109 {
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
   enum __anonenum_exit_type_107 exit_type ;
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
   enum __anonenum_prompt_mode_108 prompt_mode ;
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
   struct __anonstruct_entry_109 entry ;
};
#line 1764 "tmux.h"
struct clients {
   struct client *tqh_first ;
   struct client **tqh_last ;
};
#line 1776 "tmux.h"
struct __anonstruct_entry_110 {
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
   struct __anonstruct_entry_110 entry ;
};
#line 1786 "tmux.h"
struct key_bindings {
   struct key_binding *rbh_root ;
};
#line 1788 "tmux.h"
struct __anonstruct_entry_111 {
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
   struct __anonstruct_entry_111 entry ;
};
#line 1953
struct paste_buffer;
#line 1953
struct paste_buffer;
#line 1976
struct format_tree;
#line 1977
struct format_modifier;
#line 1977
struct format_modifier;
#line 41 "format.c"
struct format_expand_state;
#line 41
struct format_expand_state;
#line 54 "format.c"
struct __anonstruct_entry_112 {
   struct format_job *rbe_left ;
   struct format_job *rbe_right ;
   struct format_job *rbe_parent ;
   int rbe_color ;
};
#line 54 "format.c"
struct format_job {
   struct client *client ;
   u_int tag ;
   char *cmd ;
   char *expanded ;
   time_t last ;
   char *out ;
   int updated ;
   struct job *job ;
   int status ;
   struct __anonstruct_entry_112 entry ;
};
#line 72 "format.c"
struct format_job_tree {
   struct format_job *rbh_root ;
};
#line 113 "format.c"
struct __anonstruct_entry_113 {
   struct format_entry *rbe_left ;
   struct format_entry *rbe_right ;
   struct format_entry *rbe_parent ;
   int rbe_color ;
};
#line 113 "format.c"
struct format_entry {
   char *key ;
   char *value ;
   time_t time ;
   void *(*cb)(struct format_tree * ) ;
   struct __anonstruct_entry_113 entry ;
};
#line 122
enum format_type {
    FORMAT_TYPE_UNKNOWN = 0,
    FORMAT_TYPE_SESSION = 1,
    FORMAT_TYPE_WINDOW = 2,
    FORMAT_TYPE_PANE = 3
} ;
#line 129 "format.c"
struct format_entry_tree {
   struct format_entry *rbh_root ;
};
#line 129 "format.c"
struct format_tree {
   enum format_type type ;
   struct client *c ;
   struct session *s ;
   struct winlink *wl ;
   struct window *w ;
   struct window_pane *wp ;
   struct paste_buffer *pb ;
   struct cmdq_item *item ;
   struct client *client ;
   int flags ;
   u_int tag ;
   struct mouse_event m ;
   struct format_entry_tree tree ;
};
#line 152 "format.c"
struct format_expand_state {
   struct format_tree *ft ;
   u_int loop ;
   time_t time ;
   struct tm tm ;
   int flags ;
};
#line 161 "format.c"
struct format_modifier {
   char modifier[3] ;
   u_int size ;
   char **argv ;
   int argc ;
};
#line 1713 "format.c"
union __anonunion_114 {
   int __in ;
   int __i ;
};
#line 1712 "format.c"
union __anonunion_115 {
   int __in ;
   int __i ;
};
#line 2501
enum format_table_type {
    FORMAT_TABLE_STRING = 0,
    FORMAT_TABLE_TIME = 1
} ;
#line 2507 "format.c"
struct format_table_entry {
   char *key ;
   enum format_table_type type ;
   void *(*cb)(struct format_tree * ) ;
};
#line 3881
enum __anonenum_operator_116 {
    ADD = 0,
    SUBTRACT = 1,
    MULTIPLY = 2,
    DIVIDE = 3,
    MODULUS = 4,
    EQUAL = 5,
    NOT_EQUAL = 6,
    GREATER_THAN = 7,
    GREATER_THAN_EQUAL = 8,
    LESS_THAN = 9,
    LESS_THAN_EQUAL = 10
} ;
extern time_t __dyc_random_typdef_time_t(unsigned int __dyc_exp ) ;
extern time_t __dyc_read_typdef_time_t(void) ;
extern void __dyc_print_typdef_time_t(time_t __dyc_thistype ) ;
extern void *__dyc_random_ptr__comp_272args_entry(unsigned int __dyc_exp ) ;
extern void *__dyc_read_ptr__comp_272args_entry(void) ;
extern void __dyc_print_ptr__comp_272args_entry(void const   * const  __dyc_thistype ) ;
extern struct mouse_event *__dyc_random_ptr__comp_188mouse_event(unsigned int __dyc_exp ) ;
extern struct mouse_event *__dyc_read_ptr__comp_188mouse_event(void) ;
extern void __dyc_print_ptr__comp_188mouse_event(struct mouse_event  const  *__dyc_thistype ) ;
extern struct args *__dyc_random_ptr__comp_172args(unsigned int __dyc_exp ) ;
extern struct args *__dyc_read_ptr__comp_172args(void) ;
extern void __dyc_print_ptr__comp_172args(struct args  const  *__dyc_thistype ) ;
extern u_short __dyc_random_typdef_u_short(unsigned int __dyc_exp ) ;
extern u_short __dyc_read_typdef_u_short(void) ;
extern void __dyc_print_typdef_u_short(u_short __dyc_thistype ) ;
extern union __anonunion_ev_timeout_pos_69 __dyc_random_comp_139__anonunion_ev_timeout_pos_69(unsigned int __dyc_exp ) ;
extern union __anonunion_ev_timeout_pos_69 __dyc_read_comp_139__anonunion_ev_timeout_pos_69(void) ;
extern void __dyc_print_comp_139__anonunion_ev_timeout_pos_69(union __anonunion_ev_timeout_pos_69 __dyc_thistype ) ;
extern struct sessions *__dyc_random_ptr__comp_261sessions(unsigned int __dyc_exp ) ;
extern struct sessions *__dyc_read_ptr__comp_261sessions(void) ;
extern void __dyc_print_ptr__comp_261sessions(struct sessions  const  *__dyc_thistype ) ;
extern struct __anonstruct_entry_109 __dyc_random_comp_289__anonstruct_entry_109(unsigned int __dyc_exp ) ;
extern struct __anonstruct_entry_109 __dyc_read_comp_289__anonstruct_entry_109(void) ;
extern void __dyc_print_comp_289__anonstruct_entry_109(struct __anonstruct_entry_109 __dyc_thistype ) ;
extern struct format_job_tree __dyc_random_comp_183format_job_tree(unsigned int __dyc_exp ) ;
extern struct format_job_tree __dyc_read_comp_183format_job_tree(void) ;
extern void __dyc_print_comp_183format_job_tree(struct format_job_tree __dyc_thistype ) ;
extern struct format_modifier __dyc_random_comp_303format_modifier(unsigned int __dyc_exp ) ;
extern struct format_modifier __dyc_read_comp_303format_modifier(void) ;
extern void __dyc_print_comp_303format_modifier(struct format_modifier __dyc_thistype ) ;
extern struct tty_term **__dyc_random_ptr__ptr__comp_265tty_term(unsigned int __dyc_exp ) ;
extern struct tty_term **__dyc_read_ptr__ptr__comp_265tty_term(void) ;
extern void __dyc_print_ptr__ptr__comp_265tty_term(struct tty_term * const  *__dyc_thistype ) ;
extern struct __anonstruct_entry_101 __dyc_random_comp_260__anonstruct_entry_101(unsigned int __dyc_exp ) ;
extern struct __anonstruct_entry_101 __dyc_read_comp_260__anonstruct_entry_101(void) ;
extern void __dyc_print_comp_260__anonstruct_entry_101(struct __anonstruct_entry_101 __dyc_thistype ) ;
extern struct format_tree __dyc_random_comp_184format_tree(unsigned int __dyc_exp ) ;
extern struct format_tree __dyc_read_comp_184format_tree(void) ;
extern void __dyc_print_comp_184format_tree(struct format_tree __dyc_thistype ) ;
extern struct __anonstruct_modes_87 __dyc_random_comp_237__anonstruct_modes_87(unsigned int __dyc_exp ) ;
extern struct __anonstruct_modes_87 __dyc_read_comp_237__anonstruct_modes_87(void) ;
extern void __dyc_print_comp_237__anonstruct_modes_87(struct __anonstruct_modes_87 __dyc_thistype ) ;
extern u_int __dyc_random_typdef_u_int(unsigned int __dyc_exp ) ;
extern u_int __dyc_read_typdef_u_int(void) ;
extern void __dyc_print_typdef_u_int(u_int __dyc_thistype ) ;
extern struct window_pane *__dyc_random_ptr__comp_224window_pane(unsigned int __dyc_exp ) ;
extern struct window_pane *__dyc_read_ptr__comp_224window_pane(void) ;
extern void __dyc_print_ptr__comp_224window_pane(struct window_pane  const  *__dyc_thistype ) ;
extern struct format_table_entry __dyc_random_comp_313format_table_entry(unsigned int __dyc_exp ) ;
extern struct format_table_entry __dyc_read_comp_313format_table_entry(void) ;
extern void __dyc_print_comp_313format_table_entry(struct format_table_entry __dyc_thistype ) ;
extern struct __anonstruct_entry_88 __dyc_random_comp_238__anonstruct_entry_88(unsigned int __dyc_exp ) ;
extern struct __anonstruct_entry_88 __dyc_read_comp_238__anonstruct_entry_88(void) ;
extern void __dyc_print_comp_238__anonstruct_entry_88(struct __anonstruct_entry_88 __dyc_thistype ) ;
extern struct layout_cell *__dyc_random_ptr__comp_236layout_cell(unsigned int __dyc_exp ) ;
extern struct layout_cell *__dyc_read_ptr__comp_236layout_cell(void) ;
extern void __dyc_print_ptr__comp_236layout_cell(struct layout_cell  const  *__dyc_thistype ) ;
extern struct grid_extd_entry *__dyc_random_ptr__comp_210grid_extd_entry(unsigned int __dyc_exp ) ;
extern struct grid_extd_entry *__dyc_read_ptr__comp_210grid_extd_entry(void) ;
extern void __dyc_print_ptr__comp_210grid_extd_entry(struct grid_extd_entry  const  *__dyc_thistype ) ;
extern struct format_entry *__dyc_random_ptr__comp_308format_entry(unsigned int __dyc_exp ) ;
extern struct format_entry *__dyc_read_ptr__comp_308format_entry(void) ;
extern void __dyc_print_ptr__comp_308format_entry(struct format_entry  const  *__dyc_thistype ) ;
extern struct __anonstruct_entry_99 __dyc_random_comp_257__anonstruct_entry_99(unsigned int __dyc_exp ) ;
extern struct __anonstruct_entry_99 __dyc_read_comp_257__anonstruct_entry_99(void) ;
extern void __dyc_print_comp_257__anonstruct_entry_99(struct __anonstruct_entry_99 __dyc_thistype ) ;
extern struct client *__dyc_random_ptr__comp_174client(unsigned int __dyc_exp ) ;
extern struct client *__dyc_read_ptr__comp_174client(void) ;
extern void __dyc_print_ptr__comp_174client(struct client  const  *__dyc_thistype ) ;
extern struct style_range __dyc_random_comp_217style_range(unsigned int __dyc_exp ) ;
extern struct style_range __dyc_read_comp_217style_range(void) ;
extern void __dyc_print_comp_217style_range(struct style_range __dyc_thistype ) ;
extern struct __anonstruct_ev_signal_next_75 __dyc_random_comp_145__anonstruct_ev_signal_next_75(unsigned int __dyc_exp ) ;
extern struct __anonstruct_ev_signal_next_75 __dyc_read_comp_145__anonstruct_ev_signal_next_75(void) ;
extern void __dyc_print_comp_145__anonstruct_ev_signal_next_75(struct __anonstruct_ev_signal_next_75 __dyc_thistype ) ;
extern struct grid_cell *__dyc_random_ptr__comp_209grid_cell(unsigned int __dyc_exp ) ;
extern struct grid_cell *__dyc_read_ptr__comp_209grid_cell(void) ;
extern void __dyc_print_ptr__comp_209grid_cell(struct grid_cell  const  *__dyc_thistype ) ;
extern unsigned short **__dyc_random_ptr__ptr__short(unsigned int __dyc_exp ) ;
extern unsigned short **__dyc_read_ptr__ptr__short(void) ;
extern void __dyc_print_ptr__ptr__short(unsigned short const   * const  *__dyc_thistype ) ;
extern struct format_job_tree *__dyc_random_ptr__comp_183format_job_tree(unsigned int __dyc_exp ) ;
extern struct format_job_tree *__dyc_read_ptr__comp_183format_job_tree(void) ;
extern void __dyc_print_ptr__comp_183format_job_tree(struct format_job_tree  const  *__dyc_thistype ) ;
extern struct format_modifier *__dyc_random_ptr__comp_303format_modifier(unsigned int __dyc_exp ) ;
extern struct format_modifier *__dyc_read_ptr__comp_303format_modifier(void) ;
extern void __dyc_print_ptr__comp_303format_modifier(struct format_modifier  const  *__dyc_thistype ) ;
extern struct __anonstruct_gentry_100 __dyc_random_comp_259__anonstruct_gentry_100(unsigned int __dyc_exp ) ;
extern struct __anonstruct_gentry_100 __dyc_read_comp_259__anonstruct_gentry_100(void) ;
extern void __dyc_print_comp_259__anonstruct_gentry_100(struct __anonstruct_gentry_100 __dyc_thistype ) ;
extern struct format_tree *__dyc_random_ptr__comp_184format_tree(unsigned int __dyc_exp ) ;
extern struct format_tree *__dyc_read_ptr__comp_184format_tree(void) ;
extern void __dyc_print_ptr__comp_184format_tree(struct format_tree  const  *__dyc_thistype ) ;
extern u_char __dyc_random_typdef_u_char(unsigned int __dyc_exp ) ;
extern u_char __dyc_read_typdef_u_char(void) ;
extern void __dyc_print_typdef_u_char(u_char __dyc_thistype ) ;
extern struct winlinks *__dyc_random_ptr__comp_249winlinks(unsigned int __dyc_exp ) ;
extern struct winlinks *__dyc_read_ptr__comp_249winlinks(void) ;
extern void __dyc_print_ptr__comp_249winlinks(struct winlinks  const  *__dyc_thistype ) ;
extern struct window __dyc_random_comp_235window(unsigned int __dyc_exp ) ;
extern struct window __dyc_read_comp_235window(void) ;
extern void __dyc_print_comp_235window(struct window __dyc_thistype ) ;
extern int *__dyc_random_ptr__int(unsigned int __dyc_exp ) ;
extern int *__dyc_read_ptr__int(void) ;
extern void __dyc_print_ptr__int(int const   *__dyc_thistype ) ;
extern struct event *__dyc_random_ptr__comp_131event(unsigned int __dyc_exp ) ;
extern struct event *__dyc_read_ptr__comp_131event(void) ;
extern void __dyc_print_ptr__comp_131event(struct event  const  *__dyc_thistype ) ;
extern size_t __dyc_random_typdef_size_t(unsigned int __dyc_exp ) ;
extern size_t __dyc_read_typdef_size_t(void) ;
extern void __dyc_print_typdef_size_t(size_t __dyc_thistype ) ;
extern tcflag_t __dyc_random_typdef_tcflag_t(unsigned int __dyc_exp ) ;
extern tcflag_t __dyc_read_typdef_tcflag_t(void) ;
extern void __dyc_print_typdef_tcflag_t(tcflag_t __dyc_thistype ) ;
extern regoff_t __dyc_random_typdef_regoff_t(unsigned int __dyc_exp ) ;
extern regoff_t __dyc_read_typdef_regoff_t(void) ;
extern void __dyc_print_typdef_regoff_t(regoff_t __dyc_thistype ) ;
extern void *__dyc_random_ptr__comp_186job(unsigned int __dyc_exp ) ;
extern void *__dyc_read_ptr__comp_186job(void) ;
extern void __dyc_print_ptr__comp_186job(void const   * const  __dyc_thistype ) ;
extern struct __anonstruct_entry_84 __dyc_random_comp_218__anonstruct_entry_84(unsigned int __dyc_exp ) ;
extern struct __anonstruct_entry_84 __dyc_read_comp_218__anonstruct_entry_84(void) ;
extern void __dyc_print_comp_218__anonstruct_entry_84(struct __anonstruct_entry_84 __dyc_thistype ) ;
extern struct client **__dyc_random_ptr__ptr__comp_174client(unsigned int __dyc_exp ) ;
extern struct client **__dyc_read_ptr__ptr__comp_174client(void) ;
extern void __dyc_print_ptr__ptr__comp_174client(struct client * const  *__dyc_thistype ) ;
extern struct style_range *__dyc_random_ptr__comp_217style_range(unsigned int __dyc_exp ) ;
extern struct style_range *__dyc_read_ptr__comp_217style_range(void) ;
extern void __dyc_print_ptr__comp_217style_range(struct style_range  const  *__dyc_thistype ) ;
extern struct __anonstruct_entry_102 __dyc_random_comp_267__anonstruct_entry_102(unsigned int __dyc_exp ) ;
extern struct __anonstruct_entry_102 __dyc_read_comp_267__anonstruct_entry_102(void) ;
extern void __dyc_print_comp_267__anonstruct_entry_102(struct __anonstruct_entry_102 __dyc_thistype ) ;
extern struct key_binding __dyc_random_comp_291key_binding(unsigned int __dyc_exp ) ;
extern struct key_binding __dyc_read_comp_291key_binding(void) ;
extern void __dyc_print_comp_291key_binding(struct key_binding __dyc_thistype ) ;
extern struct session_group __dyc_random_comp_255session_group(unsigned int __dyc_exp ) ;
extern struct session_group __dyc_read_comp_255session_group(void) ;
extern void __dyc_print_comp_255session_group(struct session_group __dyc_thistype ) ;
extern struct __anonstruct_data_83 __dyc_random_comp_213__anonstruct_data_83(unsigned int __dyc_exp ) ;
extern struct __anonstruct_data_83 __dyc_read_comp_213__anonstruct_data_83(void) ;
extern void __dyc_print_comp_213__anonstruct_data_83(struct __anonstruct_data_83 __dyc_thistype ) ;
extern struct termios *__dyc_random_ptr__comp_82termios(unsigned int __dyc_exp ) ;
extern struct termios *__dyc_read_ptr__comp_82termios(void) ;
extern void __dyc_print_ptr__comp_82termios(struct termios  const  *__dyc_thistype ) ;
extern struct __anonstruct_entry_113 __dyc_random_comp_309__anonstruct_entry_113(unsigned int __dyc_exp ) ;
extern struct __anonstruct_entry_113 __dyc_read_comp_309__anonstruct_entry_113(void) ;
extern void __dyc_print_comp_309__anonstruct_entry_113(struct __anonstruct_entry_113 __dyc_thistype ) ;
extern union __anonunion_ev__71 __dyc_random_comp_141__anonunion_ev__71(unsigned int __dyc_exp ) ;
extern union __anonunion_ev__71 __dyc_read_comp_141__anonunion_ev__71(void) ;
extern void __dyc_print_comp_141__anonunion_ev__71(union __anonunion_ev__71 __dyc_thistype ) ;
extern struct format_entry_tree *__dyc_random_ptr__comp_310format_entry_tree(unsigned int __dyc_exp ) ;
extern struct format_entry_tree *__dyc_read_ptr__comp_310format_entry_tree(void) ;
extern void __dyc_print_ptr__comp_310format_entry_tree(struct format_entry_tree  const  *__dyc_thistype ) ;
extern regex_t *__dyc_random_ptr__typdef_regex_t(unsigned int __dyc_exp ) ;
extern regex_t *__dyc_read_ptr__typdef_regex_t(void) ;
extern void __dyc_print_ptr__typdef_regex_t(regex_t const   * __restrict  __dyc_thistype ) ;
extern struct __anonstruct_ev_io_72 __dyc_random_comp_142__anonstruct_ev_io_72(unsigned int __dyc_exp ) ;
extern struct __anonstruct_ev_io_72 __dyc_read_comp_142__anonstruct_ev_io_72(void) ;
extern void __dyc_print_comp_142__anonstruct_ev_io_72(struct __anonstruct_ev_io_72 __dyc_thistype ) ;
extern u_int *__dyc_random_ptr__typdef_u_int(unsigned int __dyc_exp ) ;
extern u_int *__dyc_read_ptr__typdef_u_int(void) ;
extern void __dyc_print_ptr__typdef_u_int(u_int const   *__dyc_thistype ) ;
extern struct status_line_entry __dyc_random_comp_280status_line_entry(unsigned int __dyc_exp ) ;
extern struct status_line_entry __dyc_read_comp_280status_line_entry(void) ;
extern void __dyc_print_comp_280status_line_entry(struct status_line_entry __dyc_thistype ) ;
extern struct key_binding *__dyc_random_ptr__comp_291key_binding(unsigned int __dyc_exp ) ;
extern struct key_binding *__dyc_read_ptr__comp_291key_binding(void) ;
extern void __dyc_print_ptr__comp_291key_binding(struct key_binding  const  *__dyc_thistype ) ;
extern struct window_pane **__dyc_random_ptr__ptr__comp_224window_pane(unsigned int __dyc_exp ) ;
extern struct window_pane **__dyc_read_ptr__ptr__comp_224window_pane(void) ;
extern void __dyc_print_ptr__ptr__comp_224window_pane(struct window_pane * const  *__dyc_thistype ) ;
extern struct re_pattern_buffer __dyc_random_comp_57re_pattern_buffer(unsigned int __dyc_exp ) ;
extern struct re_pattern_buffer __dyc_read_comp_57re_pattern_buffer(void) ;
extern void __dyc_print_comp_57re_pattern_buffer(struct re_pattern_buffer __dyc_thistype ) ;
extern void *__dyc_random_ptr__comp_178cmdq_list(unsigned int __dyc_exp ) ;
extern void *__dyc_read_ptr__comp_178cmdq_list(void) ;
extern void __dyc_print_ptr__comp_178cmdq_list(void const   * const  __dyc_thistype ) ;
extern struct timeval __dyc_random_comp_4timeval(unsigned int __dyc_exp ) ;
extern struct timeval __dyc_read_comp_4timeval(void) ;
extern void __dyc_print_comp_4timeval(struct timeval __dyc_thistype ) ;
extern struct client_window __dyc_random_comp_285client_window(unsigned int __dyc_exp ) ;
extern struct client_window __dyc_read_comp_285client_window(void) ;
extern void __dyc_print_comp_285client_window(struct client_window __dyc_thistype ) ;
extern struct utf8_data *__dyc_random_ptr__comp_208utf8_data(unsigned int __dyc_exp ) ;
extern struct utf8_data *__dyc_read_ptr__comp_208utf8_data(void) ;
extern void __dyc_print_ptr__comp_208utf8_data(struct utf8_data  const  *__dyc_thistype ) ;
extern struct layout_cell **__dyc_random_ptr__ptr__comp_236layout_cell(unsigned int __dyc_exp ) ;
extern struct layout_cell **__dyc_read_ptr__ptr__comp_236layout_cell(void) ;
extern void __dyc_print_ptr__ptr__comp_236layout_cell(struct layout_cell * const  *__dyc_thistype ) ;
extern union __anonunion____missing_field_name_82 __dyc_random_comp_212__anonunion____missing_field_name_82(unsigned int __dyc_exp ) ;
extern union __anonunion____missing_field_name_82 __dyc_read_comp_212__anonunion____missing_field_name_82(void) ;
extern void __dyc_print_comp_212__anonunion____missing_field_name_82(union __anonunion____missing_field_name_82 __dyc_thistype ) ;
extern struct format_modifier **__dyc_random_ptr__ptr__comp_303format_modifier(unsigned int __dyc_exp ) ;
extern struct format_modifier **__dyc_read_ptr__ptr__comp_303format_modifier(void) ;
extern void __dyc_print_ptr__ptr__comp_303format_modifier(struct format_modifier * const  *__dyc_thistype ) ;
extern struct tty_term __dyc_random_comp_265tty_term(unsigned int __dyc_exp ) ;
extern struct tty_term __dyc_read_comp_265tty_term(void) ;
extern void __dyc_print_comp_265tty_term(struct tty_term __dyc_thistype ) ;
extern struct __anonstruct_ev_io_next_73 __dyc_random_comp_143__anonstruct_ev_io_next_73(unsigned int __dyc_exp ) ;
extern struct __anonstruct_ev_io_next_73 __dyc_read_comp_143__anonstruct_ev_io_next_73(void) ;
extern void __dyc_print_comp_143__anonstruct_ev_io_next_73(struct __anonstruct_ev_io_next_73 __dyc_thistype ) ;
extern struct __anonstruct_entry_112 __dyc_random_comp_307__anonstruct_entry_112(unsigned int __dyc_exp ) ;
extern struct __anonstruct_entry_112 __dyc_read_comp_307__anonstruct_entry_112(void) ;
extern void __dyc_print_comp_307__anonstruct_entry_112(struct __anonstruct_entry_112 __dyc_thistype ) ;
extern struct window_pane_resizes __dyc_random_comp_234window_pane_resizes(unsigned int __dyc_exp ) ;
extern struct window_pane_resizes __dyc_read_comp_234window_pane_resizes(void) ;
extern void __dyc_print_comp_234window_pane_resizes(struct window_pane_resizes __dyc_thistype ) ;
extern void *__dyc_random_ptr__comp_264tty_code(unsigned int __dyc_exp ) ;
extern void *__dyc_read_ptr__comp_264tty_code(void) ;
extern void __dyc_print_ptr__comp_264tty_code(void const   * const  __dyc_thistype ) ;
extern struct window_mode_entry *__dyc_random_ptr__comp_228window_mode_entry(unsigned int __dyc_exp ) ;
extern struct window_mode_entry *__dyc_read_ptr__comp_228window_mode_entry(void) ;
extern void __dyc_print_ptr__comp_228window_mode_entry(struct window_mode_entry  const  *__dyc_thistype ) ;
extern utf8_char __dyc_random_typdef_utf8_char(unsigned int __dyc_exp ) ;
extern utf8_char __dyc_read_typdef_utf8_char(void) ;
extern void __dyc_print_typdef_utf8_char(utf8_char __dyc_thistype ) ;
extern struct style_range **__dyc_random_ptr__ptr__comp_217style_range(unsigned int __dyc_exp ) ;
extern struct style_range **__dyc_read_ptr__ptr__comp_217style_range(void) ;
extern void __dyc_print_ptr__ptr__comp_217style_range(struct style_range * const  *__dyc_thistype ) ;
extern void *__dyc_random_ptr__fun_name_is_not_here(unsigned int __dyc_exp ) ;
extern void *__dyc_read_ptr__fun_name_is_not_here(void) ;
extern void __dyc_print_ptr__fun_name_is_not_here(void const   * const  __dyc_thistype ) ;
extern struct key_table __dyc_random_comp_288key_table(unsigned int __dyc_exp ) ;
extern struct key_table __dyc_read_comp_288key_table(void) ;
extern void __dyc_print_comp_288key_table(struct key_table __dyc_thistype ) ;
extern struct window_panes __dyc_random_comp_240window_panes(unsigned int __dyc_exp ) ;
extern struct window_panes __dyc_read_comp_240window_panes(void) ;
extern void __dyc_print_comp_240window_panes(struct window_panes __dyc_thistype ) ;
extern void *__dyc_random_ptr__comp_189options(unsigned int __dyc_exp ) ;
extern void *__dyc_read_ptr__comp_189options(void) ;
extern void __dyc_print_ptr__comp_189options(void const   * const  __dyc_thistype ) ;
extern reg_syntax_t __dyc_random_typdef_reg_syntax_t(unsigned int __dyc_exp ) ;
extern reg_syntax_t __dyc_read_typdef_reg_syntax_t(void) ;
extern void __dyc_print_typdef_reg_syntax_t(reg_syntax_t __dyc_thistype ) ;
extern struct __anonstruct_entry_111 __dyc_random_comp_294__anonstruct_entry_111(unsigned int __dyc_exp ) ;
extern struct __anonstruct_entry_111 __dyc_read_comp_294__anonstruct_entry_111(void) ;
extern void __dyc_print_comp_294__anonstruct_entry_111(struct __anonstruct_entry_111 __dyc_thistype ) ;
extern regmatch_t __dyc_random_typdef_regmatch_t(unsigned int __dyc_exp ) ;
extern regmatch_t __dyc_read_typdef_regmatch_t(void) ;
extern void __dyc_print_typdef_regmatch_t(regmatch_t __dyc_thistype ) ;
extern struct format_job *__dyc_random_ptr__comp_306format_job(unsigned int __dyc_exp ) ;
extern struct format_job *__dyc_read_ptr__comp_306format_job(void) ;
extern void __dyc_print_ptr__comp_306format_job(struct format_job  const  *__dyc_thistype ) ;
extern void *__dyc_random_ptr__void(unsigned int __dyc_exp ) ;
extern void *__dyc_read_ptr__void(void) ;
extern void __dyc_print_ptr__void(void const   * const  __dyc_thistype ) ;
extern void *__dyc_random_ptr__comp_302paste_buffer(unsigned int __dyc_exp ) ;
extern void *__dyc_read_ptr__comp_302paste_buffer(void) ;
extern void __dyc_print_ptr__comp_302paste_buffer(void const   * const  __dyc_thistype ) ;
extern struct client __dyc_random_comp_174client(unsigned int __dyc_exp ) ;
extern struct client __dyc_read_comp_174client(void) ;
extern void __dyc_print_comp_174client(struct client __dyc_thistype ) ;
extern __suseconds_t __dyc_random_typdef___suseconds_t(unsigned int __dyc_exp ) ;
extern __suseconds_t __dyc_read_typdef___suseconds_t(void) ;
extern void __dyc_print_typdef___suseconds_t(__suseconds_t __dyc_thistype ) ;
extern void *__dyc_random_ptr__comp_191options_entry(unsigned int __dyc_exp ) ;
extern void *__dyc_read_ptr__comp_191options_entry(void) ;
extern void __dyc_print_ptr__comp_191options_entry(void const   * const  __dyc_thistype ) ;
extern struct layout_cells __dyc_random_comp_251layout_cells(unsigned int __dyc_exp ) ;
extern struct layout_cells __dyc_read_comp_251layout_cells(void) ;
extern void __dyc_print_comp_251layout_cells(struct layout_cells __dyc_thistype ) ;
extern short *__dyc_random_ptr__short(unsigned int __dyc_exp ) ;
extern short *__dyc_read_ptr__short(void) ;
extern void __dyc_print_ptr__short(short const   *__dyc_thistype ) ;
extern struct tm *__dyc_random_ptr__comp_66tm(unsigned int __dyc_exp ) ;
extern struct tm *__dyc_read_ptr__comp_66tm(void) ;
extern void __dyc_print_ptr__comp_66tm(struct tm  const  * __restrict  __dyc_thistype ) ;
extern struct winlink __dyc_random_comp_199winlink(unsigned int __dyc_exp ) ;
extern struct winlink __dyc_read_comp_199winlink(void) ;
extern void __dyc_print_comp_199winlink(struct winlink __dyc_thistype ) ;
extern struct __anonstruct_sentry_95 __dyc_random_comp_248__anonstruct_sentry_95(unsigned int __dyc_exp ) ;
extern struct __anonstruct_sentry_95 __dyc_read_comp_248__anonstruct_sentry_95(void) ;
extern void __dyc_print_comp_248__anonstruct_sentry_95(struct __anonstruct_sentry_95 __dyc_thistype ) ;
extern unsigned char *__dyc_random_ptr__char(unsigned int __dyc_exp ) ;
extern unsigned char *__dyc_read_ptr__char(void) ;
extern void __dyc_print_ptr__char(unsigned char const   *__dyc_thistype ) ;
extern struct __anonstruct_regmatch_t_46 __dyc_random_comp_59__anonstruct_regmatch_t_46(unsigned int __dyc_exp ) ;
extern struct __anonstruct_regmatch_t_46 __dyc_read_comp_59__anonstruct_regmatch_t_46(void) ;
extern void __dyc_print_comp_59__anonstruct_regmatch_t_46(struct __anonstruct_regmatch_t_46 __dyc_thistype ) ;
extern struct __anonstruct_entry_110 __dyc_random_comp_292__anonstruct_entry_110(unsigned int __dyc_exp ) ;
extern struct __anonstruct_entry_110 __dyc_read_comp_292__anonstruct_entry_110(void) ;
extern void __dyc_print_comp_292__anonstruct_entry_110(struct __anonstruct_entry_110 __dyc_thistype ) ;
extern struct tty __dyc_random_comp_266tty(unsigned int __dyc_exp ) ;
extern struct tty __dyc_read_comp_266tty(void) ;
extern void __dyc_print_comp_266tty(struct tty __dyc_thistype ) ;
extern struct __anonstruct_ev_signal_74 __dyc_random_comp_144__anonstruct_ev_signal_74(unsigned int __dyc_exp ) ;
extern struct __anonstruct_ev_signal_74 __dyc_read_comp_144__anonstruct_ev_signal_74(void) ;
extern void __dyc_print_comp_144__anonstruct_ev_signal_74(struct __anonstruct_ev_signal_74 __dyc_thistype ) ;
extern struct client_file __dyc_random_comp_282client_file(unsigned int __dyc_exp ) ;
extern struct client_file __dyc_read_comp_282client_file(void) ;
extern void __dyc_print_comp_282client_file(struct client_file __dyc_thistype ) ;
extern void *__dyc_random_ptr__comp_222screen_titles(unsigned int __dyc_exp ) ;
extern void *__dyc_read_ptr__comp_222screen_titles(void) ;
extern void __dyc_print_ptr__comp_222screen_titles(void const   * const  __dyc_thistype ) ;
extern struct grid_line *__dyc_random_ptr__comp_214grid_line(unsigned int __dyc_exp ) ;
extern struct grid_line *__dyc_read_ptr__comp_214grid_line(void) ;
extern void __dyc_print_ptr__comp_214grid_line(struct grid_line  const  *__dyc_thistype ) ;
extern void *__dyc_random_ptr__comp_148evbuffer(unsigned int __dyc_exp ) ;
extern void *__dyc_read_ptr__comp_148evbuffer(void) ;
extern void __dyc_print_ptr__comp_148evbuffer(void const   * const  __dyc_thistype ) ;
extern struct screen_redraw_ctx *__dyc_random_ptr__comp_225screen_redraw_ctx(unsigned int __dyc_exp ) ;
extern struct screen_redraw_ctx *__dyc_read_ptr__comp_225screen_redraw_ctx(void) ;
extern void __dyc_print_ptr__comp_225screen_redraw_ctx(struct screen_redraw_ctx  const  *__dyc_thistype ) ;
extern struct tty_term *__dyc_random_ptr__comp_265tty_term(unsigned int __dyc_exp ) ;
extern struct tty_term *__dyc_read_ptr__comp_265tty_term(void) ;
extern void __dyc_print_ptr__comp_265tty_term(struct tty_term  const  *__dyc_thistype ) ;
extern struct winlink *__dyc_random_ptr__comp_199winlink(unsigned int __dyc_exp ) ;
extern struct winlink *__dyc_read_ptr__comp_199winlink(void) ;
extern void __dyc_print_ptr__comp_199winlink(struct winlink  const  *__dyc_thistype ) ;
extern void *__dyc_random_ptr__comp_177cmdq_item(unsigned int __dyc_exp ) ;
extern void *__dyc_read_ptr__comp_177cmdq_item(void) ;
extern void __dyc_print_ptr__comp_177cmdq_item(void const   * const  __dyc_thistype ) ;
extern cc_t __dyc_random_typdef_cc_t(unsigned int __dyc_exp ) ;
extern cc_t __dyc_read_typdef_cc_t(void) ;
extern void __dyc_print_typdef_cc_t(cc_t __dyc_thistype ) ;
extern __time_t __dyc_random_typdef___time_t(unsigned int __dyc_exp ) ;
extern __time_t __dyc_read_typdef___time_t(void) ;
extern void __dyc_print_typdef___time_t(__time_t __dyc_thistype ) ;
extern struct event_callback *__dyc_random_ptr__comp_136event_callback(unsigned int __dyc_exp ) ;
extern struct event_callback *__dyc_read_ptr__comp_136event_callback(void) ;
extern void __dyc_print_ptr__comp_136event_callback(struct event_callback  const  *__dyc_thistype ) ;
extern struct termios __dyc_random_comp_82termios(unsigned int __dyc_exp ) ;
extern struct termios __dyc_read_comp_82termios(void) ;
extern void __dyc_print_comp_82termios(struct termios __dyc_thistype ) ;
extern void *__dyc_random_ptr__comp_193screen_write_cline(unsigned int __dyc_exp ) ;
extern void *__dyc_read_ptr__comp_193screen_write_cline(void) ;
extern void __dyc_print_ptr__comp_193screen_write_cline(void const   * const  __dyc_thistype ) ;
extern struct __anonstruct_entry_92 __dyc_random_comp_244__anonstruct_entry_92(unsigned int __dyc_exp ) ;
extern struct __anonstruct_entry_92 __dyc_read_comp_244__anonstruct_entry_92(void) ;
extern void __dyc_print_comp_244__anonstruct_entry_92(struct __anonstruct_entry_92 __dyc_thistype ) ;
extern struct cmd_find_state *__dyc_random_ptr__comp_176cmd_find_state(unsigned int __dyc_exp ) ;
extern struct cmd_find_state *__dyc_read_ptr__comp_176cmd_find_state(void) ;
extern void __dyc_print_ptr__comp_176cmd_find_state(struct cmd_find_state  const  *__dyc_thistype ) ;
extern struct tty *__dyc_random_ptr__comp_266tty(unsigned int __dyc_exp ) ;
extern struct tty *__dyc_read_ptr__comp_266tty(void) ;
extern void __dyc_print_ptr__comp_266tty(struct tty  const  *__dyc_thistype ) ;
extern struct client_file *__dyc_random_ptr__comp_282client_file(unsigned int __dyc_exp ) ;
extern struct client_file *__dyc_read_ptr__comp_282client_file(void) ;
extern void __dyc_print_ptr__comp_282client_file(struct client_file  const  *__dyc_thistype ) ;
extern struct environ_entry *__dyc_random_ptr__comp_253environ_entry(unsigned int __dyc_exp ) ;
extern struct environ_entry *__dyc_read_ptr__comp_253environ_entry(void) ;
extern void __dyc_print_ptr__comp_253environ_entry(struct environ_entry  const  *__dyc_thistype ) ;
extern struct grid_cell __dyc_random_comp_209grid_cell(unsigned int __dyc_exp ) ;
extern struct grid_cell __dyc_read_comp_209grid_cell(void) ;
extern void __dyc_print_comp_209grid_cell(struct grid_cell __dyc_thistype ) ;
extern regex_t __dyc_random_typdef_regex_t(unsigned int __dyc_exp ) ;
extern regex_t __dyc_read_typdef_regex_t(void) ;
extern void __dyc_print_typdef_regex_t(regex_t __dyc_thistype ) ;
extern struct event __dyc_random_comp_131event(unsigned int __dyc_exp ) ;
extern struct event __dyc_read_comp_131event(void) ;
extern void __dyc_print_comp_131event(struct event __dyc_thistype ) ;
extern struct key_event *__dyc_random_ptr__comp_262key_event(unsigned int __dyc_exp ) ;
extern struct key_event *__dyc_read_ptr__comp_262key_event(void) ;
extern void __dyc_print_ptr__comp_262key_event(struct key_event  const  *__dyc_thistype ) ;
extern struct event_callback **__dyc_random_ptr__ptr__comp_136event_callback(unsigned int __dyc_exp ) ;
extern struct event_callback **__dyc_read_ptr__ptr__comp_136event_callback(void) ;
extern void __dyc_print_ptr__ptr__comp_136event_callback(struct event_callback * const  *__dyc_thistype ) ;
extern struct __anonstruct_entry_93 __dyc_random_comp_246__anonstruct_entry_93(unsigned int __dyc_exp ) ;
extern struct __anonstruct_entry_93 __dyc_read_comp_246__anonstruct_entry_93(void) ;
extern void __dyc_print_comp_246__anonstruct_entry_93(struct __anonstruct_entry_93 __dyc_thistype ) ;
extern speed_t __dyc_random_typdef_speed_t(unsigned int __dyc_exp ) ;
extern speed_t __dyc_read_typdef_speed_t(void) ;
extern void __dyc_print_typdef_speed_t(speed_t __dyc_thistype ) ;
extern __pid_t __dyc_random_typdef___pid_t(unsigned int __dyc_exp ) ;
extern __pid_t __dyc_read_typdef___pid_t(void) ;
extern void __dyc_print_typdef___pid_t(__pid_t __dyc_thistype ) ;
extern __u_char __dyc_random_typdef___u_char(unsigned int __dyc_exp ) ;
extern __u_char __dyc_read_typdef___u_char(void) ;
extern void __dyc_print_typdef___u_char(__u_char __dyc_thistype ) ;
extern struct args_tree __dyc_random_comp_273args_tree(unsigned int __dyc_exp ) ;
extern struct args_tree __dyc_read_comp_273args_tree(void) ;
extern void __dyc_print_comp_273args_tree(struct args_tree __dyc_thistype ) ;
extern time_t *__dyc_random_ptr__typdef_time_t(unsigned int __dyc_exp ) ;
extern time_t *__dyc_read_ptr__typdef_time_t(void) ;
extern void __dyc_print_ptr__typdef_time_t(time_t const   *__dyc_thistype ) ;
extern void *__dyc_random_ptr__comp_221screen_sel(unsigned int __dyc_exp ) ;
extern void *__dyc_read_ptr__comp_221screen_sel(void) ;
extern void __dyc_print_ptr__comp_221screen_sel(void const   * const  __dyc_thistype ) ;
extern struct clients __dyc_random_comp_290clients(unsigned int __dyc_exp ) ;
extern struct clients __dyc_read_comp_290clients(void) ;
extern void __dyc_print_comp_290clients(struct clients __dyc_thistype ) ;
extern struct window_pane_resize *__dyc_random_ptr__comp_232window_pane_resize(unsigned int __dyc_exp ) ;
extern struct window_pane_resize *__dyc_read_ptr__comp_232window_pane_resize(void) ;
extern void __dyc_print_ptr__comp_232window_pane_resize(struct window_pane_resize  const  *__dyc_thistype ) ;
extern struct format_expand_state __dyc_random_comp_305format_expand_state(unsigned int __dyc_exp ) ;
extern struct format_expand_state __dyc_read_comp_305format_expand_state(void) ;
extern void __dyc_print_comp_305format_expand_state(struct format_expand_state __dyc_thistype ) ;
extern struct session __dyc_random_comp_195session(unsigned int __dyc_exp ) ;
extern struct session __dyc_read_comp_195session(void) ;
extern void __dyc_print_comp_195session(struct session __dyc_thistype ) ;
extern struct key_bindings __dyc_random_comp_293key_bindings(unsigned int __dyc_exp ) ;
extern struct key_bindings __dyc_read_comp_293key_bindings(void) ;
extern void __dyc_print_comp_293key_bindings(struct key_bindings __dyc_thistype ) ;
extern struct __anonstruct_sessions_98 __dyc_random_comp_256__anonstruct_sessions_98(unsigned int __dyc_exp ) ;
extern struct __anonstruct_sessions_98 __dyc_read_comp_256__anonstruct_sessions_98(void) ;
extern void __dyc_print_comp_256__anonstruct_sessions_98(struct __anonstruct_sessions_98 __dyc_thistype ) ;
extern struct __anonstruct_alerts_entry_90 __dyc_random_comp_242__anonstruct_alerts_entry_90(unsigned int __dyc_exp ) ;
extern struct __anonstruct_alerts_entry_90 __dyc_read_comp_242__anonstruct_alerts_entry_90(void) ;
extern void __dyc_print_comp_242__anonstruct_alerts_entry_90(struct __anonstruct_alerts_entry_90 __dyc_thistype ) ;
extern union __anonunion_115 __dyc_random_comp_312__anonunion_115(unsigned int __dyc_exp ) ;
extern union __anonunion_115 __dyc_read_comp_312__anonunion_115(void) ;
extern void __dyc_print_comp_312__anonunion_115(union __anonunion_115 __dyc_thistype ) ;
extern struct format_entry_tree __dyc_random_comp_310format_entry_tree(unsigned int __dyc_exp ) ;
extern struct format_entry_tree __dyc_read_comp_310format_entry_tree(void) ;
extern void __dyc_print_comp_310format_entry_tree(struct format_entry_tree __dyc_thistype ) ;
extern struct winlink **__dyc_random_ptr__ptr__comp_199winlink(unsigned int __dyc_exp ) ;
extern struct winlink **__dyc_read_ptr__ptr__comp_199winlink(void) ;
extern void __dyc_print_ptr__ptr__comp_199winlink(struct winlink * const  *__dyc_thistype ) ;
extern struct screen *__dyc_random_ptr__comp_223screen(unsigned int __dyc_exp ) ;
extern struct screen *__dyc_read_ptr__comp_223screen(void) ;
extern void __dyc_print_ptr__comp_223screen(struct screen  const  *__dyc_thistype ) ;
extern struct __anonstruct_entry_106 __dyc_random_comp_286__anonstruct_entry_106(unsigned int __dyc_exp ) ;
extern struct __anonstruct_entry_106 __dyc_read_comp_286__anonstruct_entry_106(void) ;
extern void __dyc_print_comp_286__anonstruct_entry_106(struct __anonstruct_entry_106 __dyc_thistype ) ;
extern struct bufferevent __dyc_random_comp_154bufferevent(unsigned int __dyc_exp ) ;
extern struct bufferevent __dyc_read_comp_154bufferevent(void) ;
extern void __dyc_print_comp_154bufferevent(struct bufferevent __dyc_thistype ) ;
extern size_t *__dyc_random_ptr__typdef_size_t(unsigned int __dyc_exp ) ;
extern size_t *__dyc_read_ptr__typdef_size_t(void) ;
extern void __dyc_print_ptr__typdef_size_t(size_t const   *__dyc_thistype ) ;
extern struct window_pane_resize **__dyc_random_ptr__ptr__comp_232window_pane_resize(unsigned int __dyc_exp ) ;
extern struct window_pane_resize **__dyc_read_ptr__ptr__comp_232window_pane_resize(void) ;
extern void __dyc_print_ptr__ptr__comp_232window_pane_resize(struct window_pane_resize * const  *__dyc_thistype ) ;
extern struct format_expand_state *__dyc_random_ptr__comp_305format_expand_state(unsigned int __dyc_exp ) ;
extern struct format_expand_state *__dyc_read_ptr__comp_305format_expand_state(void) ;
extern void __dyc_print_ptr__comp_305format_expand_state(struct format_expand_state  const  *__dyc_thistype ) ;
extern struct format_job __dyc_random_comp_306format_job(unsigned int __dyc_exp ) ;
extern struct format_job __dyc_read_comp_306format_job(void) ;
extern void __dyc_print_comp_306format_job(struct format_job __dyc_thistype ) ;
extern uint8_t __dyc_random_typdef_uint8_t(unsigned int __dyc_exp ) ;
extern uint8_t __dyc_read_typdef_uint8_t(void) ;
extern void __dyc_print_typdef_uint8_t(uint8_t __dyc_thistype ) ;
extern struct session *__dyc_random_ptr__comp_195session(unsigned int __dyc_exp ) ;
extern struct session *__dyc_read_ptr__comp_195session(void) ;
extern void __dyc_print_ptr__comp_195session(struct session  const  *__dyc_thistype ) ;
extern struct status_line __dyc_random_comp_281status_line(unsigned int __dyc_exp ) ;
extern struct status_line __dyc_read_comp_281status_line(void) ;
extern void __dyc_print_comp_281status_line(struct status_line __dyc_thistype ) ;
extern struct utf8_data __dyc_random_comp_208utf8_data(unsigned int __dyc_exp ) ;
extern struct utf8_data __dyc_read_comp_208utf8_data(void) ;
extern void __dyc_print_comp_208utf8_data(struct utf8_data __dyc_thistype ) ;
extern void *__dyc_random_ptr__comp_130event_base(unsigned int __dyc_exp ) ;
extern void *__dyc_read_ptr__comp_130event_base(void) ;
extern void __dyc_print_ptr__comp_130event_base(void const   * const  __dyc_thistype ) ;
extern __ssize_t __dyc_random_typdef___ssize_t(unsigned int __dyc_exp ) ;
extern __ssize_t __dyc_read_typdef___ssize_t(void) ;
extern void __dyc_print_typdef___ssize_t(__ssize_t __dyc_thistype ) ;
extern __u_int __dyc_random_typdef___u_int(unsigned int __dyc_exp ) ;
extern __u_int __dyc_read_typdef___u_int(void) ;
extern void __dyc_print_typdef___u_int(__u_int __dyc_thistype ) ;
extern struct grid __dyc_random_comp_215grid(unsigned int __dyc_exp ) ;
extern struct grid __dyc_read_comp_215grid(void) ;
extern void __dyc_print_comp_215grid(struct grid __dyc_thistype ) ;
extern struct bufferevent *__dyc_random_ptr__comp_154bufferevent(unsigned int __dyc_exp ) ;
extern struct bufferevent *__dyc_read_ptr__comp_154bufferevent(void) ;
extern void __dyc_print_ptr__comp_154bufferevent(struct bufferevent  const  *__dyc_thistype ) ;
extern struct format_table_entry *__dyc_random_ptr__comp_313format_table_entry(unsigned int __dyc_exp ) ;
extern struct format_table_entry *__dyc_read_ptr__comp_313format_table_entry(void) ;
extern void __dyc_print_ptr__comp_313format_table_entry(struct format_table_entry  const  *__dyc_thistype ) ;
extern struct session_group *__dyc_random_ptr__comp_255session_group(unsigned int __dyc_exp ) ;
extern struct session_group *__dyc_read_ptr__comp_255session_group(void) ;
extern void __dyc_print_ptr__comp_255session_group(struct session_group  const  *__dyc_thistype ) ;
extern struct window_pane_offset __dyc_random_comp_231window_pane_offset(unsigned int __dyc_exp ) ;
extern struct window_pane_offset __dyc_read_comp_231window_pane_offset(void) ;
extern void __dyc_print_comp_231window_pane_offset(struct window_pane_offset __dyc_thistype ) ;
extern struct window_mode_entry __dyc_random_comp_228window_mode_entry(unsigned int __dyc_exp ) ;
extern struct window_mode_entry __dyc_read_comp_228window_mode_entry(void) ;
extern void __dyc_print_comp_228window_mode_entry(struct window_mode_entry __dyc_thistype ) ;
extern struct client_windows __dyc_random_comp_287client_windows(unsigned int __dyc_exp ) ;
extern struct client_windows __dyc_read_comp_287client_windows(void) ;
extern void __dyc_print_comp_287client_windows(struct client_windows __dyc_thistype ) ;
extern struct client_files __dyc_random_comp_283client_files(unsigned int __dyc_exp ) ;
extern struct client_files __dyc_read_comp_283client_files(void) ;
extern void __dyc_print_comp_283client_files(struct client_files __dyc_thistype ) ;
extern struct __anonstruct_entry_105 __dyc_random_comp_284__anonstruct_entry_105(unsigned int __dyc_exp ) ;
extern struct __anonstruct_entry_105 __dyc_read_comp_284__anonstruct_entry_105(void) ;
extern void __dyc_print_comp_284__anonstruct_entry_105(struct __anonstruct_entry_105 __dyc_thistype ) ;
extern struct cmd_list __dyc_random_comp_274cmd_list(unsigned int __dyc_exp ) ;
extern struct cmd_list __dyc_read_comp_274cmd_list(void) ;
extern void __dyc_print_comp_274cmd_list(struct cmd_list __dyc_thistype ) ;
extern void *__dyc_random_ptr__comp_181control_state(unsigned int __dyc_exp ) ;
extern void *__dyc_read_ptr__comp_181control_state(void) ;
extern void __dyc_print_ptr__comp_181control_state(void const   * const  __dyc_thistype ) ;
extern ssize_t __dyc_random_typdef_ssize_t(unsigned int __dyc_exp ) ;
extern ssize_t __dyc_read_typdef_ssize_t(void) ;
extern void __dyc_print_typdef_ssize_t(ssize_t __dyc_thistype ) ;
extern struct window *__dyc_random_ptr__comp_235window(unsigned int __dyc_exp ) ;
extern struct window *__dyc_read_ptr__comp_235window(void) ;
extern void __dyc_print_ptr__comp_235window(struct window  const  *__dyc_thistype ) ;
extern struct __anonstruct_tree_entry_89 __dyc_random_comp_239__anonstruct_tree_entry_89(unsigned int __dyc_exp ) ;
extern struct __anonstruct_tree_entry_89 __dyc_read_comp_239__anonstruct_tree_entry_89(void) ;
extern void __dyc_print_comp_239__anonstruct_tree_entry_89(struct __anonstruct_tree_entry_89 __dyc_thistype ) ;
extern struct event **__dyc_random_ptr__ptr__comp_131event(unsigned int __dyc_exp ) ;
extern struct event **__dyc_read_ptr__ptr__comp_131event(void) ;
extern void __dyc_print_ptr__ptr__comp_131event(struct event * const  *__dyc_thistype ) ;
extern union __anonunion_evcb_cb_union_68 __dyc_random_comp_138__anonunion_evcb_cb_union_68(unsigned int __dyc_exp ) ;
extern union __anonunion_evcb_cb_union_68 __dyc_read_comp_138__anonunion_evcb_cb_union_68(void) ;
extern void __dyc_print_comp_138__anonunion_evcb_cb_union_68(union __anonunion_evcb_cb_union_68 __dyc_thistype ) ;
extern struct timeval *__dyc_random_ptr__comp_4timeval(unsigned int __dyc_exp ) ;
extern struct timeval *__dyc_read_ptr__comp_4timeval(void) ;
extern void __dyc_print_ptr__comp_4timeval(struct timeval  const  *__dyc_thistype ) ;
extern struct event_callback __dyc_random_comp_136event_callback(unsigned int __dyc_exp ) ;
extern struct event_callback __dyc_read_comp_136event_callback(void) ;
extern void __dyc_print_comp_136event_callback(struct event_callback __dyc_thistype ) ;
extern struct client_window *__dyc_random_ptr__comp_285client_window(unsigned int __dyc_exp ) ;
extern struct client_window *__dyc_read_ptr__comp_285client_window(void) ;
extern void __dyc_print_ptr__comp_285client_window(struct client_window  const  *__dyc_thistype ) ;
extern struct winlink_stack __dyc_random_comp_250winlink_stack(unsigned int __dyc_exp ) ;
extern struct winlink_stack __dyc_read_comp_250winlink_stack(void) ;
extern void __dyc_print_comp_250winlink_stack(struct winlink_stack __dyc_thistype ) ;
extern struct cmd_find_state __dyc_random_comp_176cmd_find_state(unsigned int __dyc_exp ) ;
extern struct cmd_find_state __dyc_read_comp_176cmd_find_state(void) ;
extern void __dyc_print_comp_176cmd_find_state(struct cmd_find_state __dyc_thistype ) ;
extern struct args __dyc_random_comp_172args(unsigned int __dyc_exp ) ;
extern struct args __dyc_read_comp_172args(void) ;
extern void __dyc_print_comp_172args(struct args __dyc_thistype ) ;
extern struct sessions __dyc_random_comp_261sessions(unsigned int __dyc_exp ) ;
extern struct sessions __dyc_read_comp_261sessions(void) ;
extern void __dyc_print_comp_261sessions(struct sessions __dyc_thistype ) ;
extern struct tm __dyc_random_comp_66tm(unsigned int __dyc_exp ) ;
extern struct tm __dyc_read_comp_66tm(void) ;
extern void __dyc_print_comp_66tm(struct tm __dyc_thistype ) ;
extern struct __anonstruct_entry_85 __dyc_random_comp_230__anonstruct_entry_85(unsigned int __dyc_exp ) ;
extern struct __anonstruct_entry_85 __dyc_read_comp_230__anonstruct_entry_85(void) ;
extern void __dyc_print_comp_230__anonstruct_entry_85(struct __anonstruct_entry_85 __dyc_thistype ) ;
extern struct window **__dyc_random_ptr__ptr__comp_235window(unsigned int __dyc_exp ) ;
extern struct window **__dyc_read_ptr__ptr__comp_235window(void) ;
extern void __dyc_print_ptr__ptr__comp_235window(struct window * const  *__dyc_thistype ) ;
extern struct __anonstruct_winlinks_91 __dyc_random_comp_243__anonstruct_winlinks_91(unsigned int __dyc_exp ) ;
extern struct __anonstruct_winlinks_91 __dyc_read_comp_243__anonstruct_winlinks_91(void) ;
extern void __dyc_print_comp_243__anonstruct_winlinks_91(struct __anonstruct_winlinks_91 __dyc_thistype ) ;
extern struct style_ranges __dyc_random_comp_219style_ranges(unsigned int __dyc_exp ) ;
extern struct style_ranges __dyc_read_comp_219style_ranges(void) ;
extern void __dyc_print_comp_219style_ranges(struct style_ranges __dyc_thistype ) ;
extern struct session **__dyc_random_ptr__ptr__comp_195session(unsigned int __dyc_exp ) ;
extern struct session **__dyc_read_ptr__ptr__comp_195session(void) ;
extern void __dyc_print_ptr__ptr__comp_195session(struct session * const  *__dyc_thistype ) ;
extern struct format_entry __dyc_random_comp_308format_entry(unsigned int __dyc_exp ) ;
extern struct format_entry __dyc_read_comp_308format_entry(void) ;
extern void __dyc_print_comp_308format_entry(struct format_entry __dyc_thistype ) ;
extern struct event_watermark __dyc_random_comp_158event_watermark(unsigned int __dyc_exp ) ;
extern struct event_watermark __dyc_read_comp_158event_watermark(void) ;
extern void __dyc_print_comp_158event_watermark(struct event_watermark __dyc_thistype ) ;
extern struct key_table *__dyc_random_ptr__comp_288key_table(unsigned int __dyc_exp ) ;
extern struct key_table *__dyc_read_ptr__comp_288key_table(void) ;
extern void __dyc_print_ptr__comp_288key_table(struct key_table  const  *__dyc_thistype ) ;
extern void *__dyc_random_ptr__comp_180cmds(unsigned int __dyc_exp ) ;
extern void *__dyc_read_ptr__comp_180cmds(void) ;
extern void __dyc_print_ptr__comp_180cmds(void const   * const  __dyc_thistype ) ;
extern struct grid_line __dyc_random_comp_214grid_line(unsigned int __dyc_exp ) ;
extern struct grid_line __dyc_read_comp_214grid_line(void) ;
extern void __dyc_print_comp_214grid_line(struct grid_line __dyc_thistype ) ;
extern struct grid_cell_entry __dyc_random_comp_211grid_cell_entry(unsigned int __dyc_exp ) ;
extern struct grid_cell_entry __dyc_read_comp_211grid_cell_entry(void) ;
extern void __dyc_print_comp_211grid_cell_entry(struct grid_cell_entry __dyc_thistype ) ;
extern void *__dyc_random_ptr__comp_159bufferevent_ops(unsigned int __dyc_exp ) ;
extern void *__dyc_read_ptr__comp_159bufferevent_ops(void) ;
extern void __dyc_print_ptr__comp_159bufferevent_ops(void const   * const  __dyc_thistype ) ;
extern struct screen_redraw_ctx __dyc_random_comp_225screen_redraw_ctx(unsigned int __dyc_exp ) ;
extern struct screen_redraw_ctx __dyc_read_comp_225screen_redraw_ctx(void) ;
extern void __dyc_print_comp_225screen_redraw_ctx(struct screen_redraw_ctx __dyc_thistype ) ;
extern pid_t __dyc_random_typdef_pid_t(unsigned int __dyc_exp ) ;
extern pid_t __dyc_read_typdef_pid_t(void) ;
extern void __dyc_print_typdef_pid_t(pid_t __dyc_thistype ) ;
extern struct window_mode __dyc_random_comp_229window_mode(unsigned int __dyc_exp ) ;
extern struct window_mode __dyc_read_comp_229window_mode(void) ;
extern void __dyc_print_comp_229window_mode(struct window_mode __dyc_thistype ) ;
extern struct winlinks __dyc_random_comp_249winlinks(unsigned int __dyc_exp ) ;
extern struct winlinks __dyc_read_comp_249winlinks(void) ;
extern void __dyc_print_comp_249winlinks(struct winlinks __dyc_thistype ) ;
extern bitstr_t __dyc_random_typdef_bitstr_t(unsigned int __dyc_exp ) ;
extern bitstr_t __dyc_read_typdef_bitstr_t(void) ;
extern void __dyc_print_typdef_bitstr_t(bitstr_t __dyc_thistype ) ;
extern struct grid *__dyc_random_ptr__comp_215grid(unsigned int __dyc_exp ) ;
extern struct grid *__dyc_read_ptr__comp_215grid(void) ;
extern void __dyc_print_ptr__comp_215grid(struct grid  const  *__dyc_thistype ) ;
extern regmatch_t *__dyc_random_ptr__typdef_regmatch_t(unsigned int __dyc_exp ) ;
extern regmatch_t *__dyc_read_ptr__typdef_regmatch_t(void) ;
extern void __dyc_print_ptr__typdef_regmatch_t(regmatch_t const   * __restrict  __dyc_thistype ) ;
extern struct __anonstruct_entry_86 __dyc_random_comp_233__anonstruct_entry_86(unsigned int __dyc_exp ) ;
extern struct __anonstruct_entry_86 __dyc_read_comp_233__anonstruct_entry_86(void) ;
extern void __dyc_print_comp_233__anonstruct_entry_86(struct __anonstruct_entry_86 __dyc_thistype ) ;
extern struct window_pane_resize __dyc_random_comp_232window_pane_resize(unsigned int __dyc_exp ) ;
extern struct window_pane_resize __dyc_read_comp_232window_pane_resize(void) ;
extern void __dyc_print_comp_232window_pane_resize(struct window_pane_resize __dyc_thistype ) ;
extern __u_short __dyc_random_typdef___u_short(unsigned int __dyc_exp ) ;
extern __u_short __dyc_read_typdef___u_short(void) ;
extern void __dyc_print_typdef___u_short(__u_short __dyc_thistype ) ;
extern union __anonunion_114 __dyc_random_comp_311__anonunion_114(unsigned int __dyc_exp ) ;
extern union __anonunion_114 __dyc_read_comp_311__anonunion_114(void) ;
extern void __dyc_print_comp_311__anonunion_114(union __anonunion_114 __dyc_thistype ) ;
extern struct __anonstruct_entry_96 __dyc_random_comp_252__anonstruct_entry_96(unsigned int __dyc_exp ) ;
extern struct __anonstruct_entry_96 __dyc_read_comp_252__anonstruct_entry_96(void) ;
extern void __dyc_print_comp_252__anonstruct_entry_96(struct __anonstruct_entry_96 __dyc_thistype ) ;
extern struct client_files *__dyc_random_ptr__comp_283client_files(unsigned int __dyc_exp ) ;
extern struct client_files *__dyc_read_ptr__comp_283client_files(void) ;
extern void __dyc_print_ptr__comp_283client_files(struct client_files  const  *__dyc_thistype ) ;
extern struct tty_key __dyc_random_comp_263tty_key(unsigned int __dyc_exp ) ;
extern struct tty_key __dyc_read_comp_263tty_key(void) ;
extern void __dyc_print_comp_263tty_key(struct tty_key __dyc_thistype ) ;
extern void *__dyc_random_ptr__comp_182environ(unsigned int __dyc_exp ) ;
extern void *__dyc_read_ptr__comp_182environ(void) ;
extern void __dyc_print_ptr__comp_182environ(void const   * const  __dyc_thistype ) ;
extern key_code __dyc_random_typdef_key_code(unsigned int __dyc_exp ) ;
extern key_code __dyc_read_typdef_key_code(void) ;
extern void __dyc_print_typdef_key_code(key_code __dyc_thistype ) ;
extern struct mouse_event __dyc_random_comp_188mouse_event(unsigned int __dyc_exp ) ;
extern struct mouse_event __dyc_read_comp_188mouse_event(void) ;
extern void __dyc_print_comp_188mouse_event(struct mouse_event __dyc_thistype ) ;
extern struct cmd_list *__dyc_random_ptr__comp_274cmd_list(unsigned int __dyc_exp ) ;
extern struct cmd_list *__dyc_read_ptr__comp_274cmd_list(void) ;
extern void __dyc_print_ptr__comp_274cmd_list(struct cmd_list  const  *__dyc_thistype ) ;
extern struct environ_entry __dyc_random_comp_253environ_entry(unsigned int __dyc_exp ) ;
extern struct environ_entry __dyc_read_comp_253environ_entry(void) ;
extern void __dyc_print_comp_253environ_entry(struct environ_entry __dyc_thistype ) ;
extern struct grid_cell_entry *__dyc_random_ptr__comp_211grid_cell_entry(unsigned int __dyc_exp ) ;
extern struct grid_cell_entry *__dyc_read_ptr__comp_211grid_cell_entry(void) ;
extern void __dyc_print_ptr__comp_211grid_cell_entry(struct grid_cell_entry  const  *__dyc_thistype ) ;
extern struct window_mode *__dyc_random_ptr__comp_229window_mode(unsigned int __dyc_exp ) ;
extern struct window_mode *__dyc_read_ptr__comp_229window_mode(void) ;
extern void __dyc_print_ptr__comp_229window_mode(struct window_mode  const  *__dyc_thistype ) ;
extern struct screen __dyc_random_comp_223screen(unsigned int __dyc_exp ) ;
extern struct screen __dyc_read_comp_223screen(void) ;
extern void __dyc_print_comp_223screen(struct screen __dyc_thistype ) ;
extern uint64_t __dyc_random_typdef_uint64_t(unsigned int __dyc_exp ) ;
extern uint64_t __dyc_read_typdef_uint64_t(void) ;
extern void __dyc_print_typdef_uint64_t(uint64_t __dyc_thistype ) ;
extern bitstr_t *__dyc_random_ptr__typdef_bitstr_t(unsigned int __dyc_exp ) ;
extern bitstr_t *__dyc_read_ptr__typdef_bitstr_t(void) ;
extern void __dyc_print_ptr__typdef_bitstr_t(bitstr_t const   *__dyc_thistype ) ;
extern void *__dyc_random_ptr__comp_197tmuxpeer(unsigned int __dyc_exp ) ;
extern void *__dyc_read_ptr__comp_197tmuxpeer(void) ;
extern void __dyc_print_ptr__comp_197tmuxpeer(void const   * const  __dyc_thistype ) ;
extern struct window_pane __dyc_random_comp_224window_pane(unsigned int __dyc_exp ) ;
extern struct window_pane __dyc_read_comp_224window_pane(void) ;
extern void __dyc_print_comp_224window_pane(struct window_pane __dyc_thistype ) ;
extern struct key_event __dyc_random_comp_262key_event(unsigned int __dyc_exp ) ;
extern struct key_event __dyc_read_comp_262key_event(void) ;
extern void __dyc_print_comp_262key_event(struct key_event __dyc_thistype ) ;
extern struct __anonstruct_entry_97 __dyc_random_comp_254__anonstruct_entry_97(unsigned int __dyc_exp ) ;
extern struct __anonstruct_entry_97 __dyc_read_comp_254__anonstruct_entry_97(void) ;
extern void __dyc_print_comp_254__anonstruct_entry_97(struct __anonstruct_entry_97 __dyc_thistype ) ;
extern struct __anonstruct_wentry_94 __dyc_random_comp_247__anonstruct_wentry_94(unsigned int __dyc_exp ) ;
extern struct __anonstruct_wentry_94 __dyc_read_comp_247__anonstruct_wentry_94(void) ;
extern void __dyc_print_comp_247__anonstruct_wentry_94(struct __anonstruct_wentry_94 __dyc_thistype ) ;
extern void *__dyc_random_ptr__comp_185input_ctx(unsigned int __dyc_exp ) ;
extern void *__dyc_read_ptr__comp_185input_ctx(void) ;
extern void __dyc_print_ptr__comp_185input_ctx(void const   * const  __dyc_thistype ) ;
extern char **__dyc_random_ptr__ptr__char(unsigned int __dyc_exp ) ;
extern char **__dyc_read_ptr__ptr__char(void) ;
extern void __dyc_print_ptr__ptr__char(char * const  *__dyc_thistype ) ;
extern struct __anonstruct_evcb_active_next_67 __dyc_random_comp_137__anonstruct_evcb_active_next_67(unsigned int __dyc_exp ) ;
extern struct __anonstruct_evcb_active_next_67 __dyc_read_comp_137__anonstruct_evcb_active_next_67(void) ;
extern void __dyc_print_comp_137__anonstruct_evcb_active_next_67(struct __anonstruct_evcb_active_next_67 __dyc_thistype ) ;
extern struct window_mode_entry **__dyc_random_ptr__ptr__comp_228window_mode_entry(unsigned int __dyc_exp ) ;
extern struct window_mode_entry **__dyc_read_ptr__ptr__comp_228window_mode_entry(void) ;
extern void __dyc_print_ptr__ptr__comp_228window_mode_entry(struct window_mode_entry * const  *__dyc_thistype ) ;
extern struct __anonstruct_ev_next_with_common_timeout_70 __dyc_random_comp_140__anonstruct_ev_next_with_common_timeout_70(unsigned int __dyc_exp ) ;
extern struct __anonstruct_ev_next_with_common_timeout_70 __dyc_read_comp_140__anonstruct_ev_next_with_common_timeout_70(void) ;
extern void __dyc_print_comp_140__anonstruct_ev_next_with_common_timeout_70(struct __anonstruct_ev_next_with_common_timeout_70 __dyc_thistype ) ;
extern struct tty_key *__dyc_random_ptr__comp_263tty_key(unsigned int __dyc_exp ) ;
extern struct tty_key *__dyc_read_ptr__comp_263tty_key(void) ;
extern void __dyc_print_ptr__comp_263tty_key(struct tty_key  const  *__dyc_thistype ) ;
extern struct layout_cell __dyc_random_comp_236layout_cell(unsigned int __dyc_exp ) ;
extern struct layout_cell __dyc_read_comp_236layout_cell(void) ;
extern void __dyc_print_comp_236layout_cell(struct layout_cell __dyc_thistype ) ;
extern struct grid_extd_entry __dyc_random_comp_210grid_extd_entry(unsigned int __dyc_exp ) ;
extern struct grid_extd_entry __dyc_read_comp_210grid_extd_entry(void) ;
extern void __dyc_print_comp_210grid_extd_entry(struct grid_extd_entry __dyc_thistype ) ;
