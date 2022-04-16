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
#line 57 "/usr/include/x86_64-linux-gnu/sys/time.h"
struct timezone {
   int tz_minuteswest ;
   int tz_dsttime ;
};
#line 63 "/usr/include/x86_64-linux-gnu/sys/time.h"
typedef struct timezone *__timezone_ptr_t;
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
struct __anonstruct_evcb_active_next_41 {
   struct event_callback *tqe_next ;
   struct event_callback **tqe_prev ;
};
#line 107 "/usr/local/include/event2/event_struct.h"
union __anonunion_evcb_cb_union_42 {
   void (*evcb_callback)(int  , short  , void * ) ;
   void (*evcb_selfcb)(struct event_callback * , void * ) ;
   void (*evcb_evfinalize)(struct event * , void * ) ;
   void (*evcb_cbfinalize)(struct event_callback * , void * ) ;
};
#line 107 "/usr/local/include/event2/event_struct.h"
struct event_callback {
   struct __anonstruct_evcb_active_next_41 evcb_active_next ;
   short evcb_flags ;
   uint8_t evcb_pri ;
   uint8_t evcb_closure ;
   union __anonunion_evcb_cb_union_42 evcb_cb_union ;
   void *evcb_arg ;
};
#line 122
struct event_base;
#line 123 "/usr/local/include/event2/event_struct.h"
struct __anonstruct_ev_next_with_common_timeout_44 {
   struct event *tqe_next ;
   struct event **tqe_prev ;
};
#line 123 "/usr/local/include/event2/event_struct.h"
union __anonunion_ev_timeout_pos_43 {
   struct __anonstruct_ev_next_with_common_timeout_44 ev_next_with_common_timeout ;
   int min_heap_idx ;
};
#line 123 "/usr/local/include/event2/event_struct.h"
struct __anonstruct_ev_io_next_47 {
   struct event *le_next ;
   struct event **le_prev ;
};
#line 123 "/usr/local/include/event2/event_struct.h"
struct __anonstruct_ev_io_46 {
   struct __anonstruct_ev_io_next_47 ev_io_next ;
   struct timeval ev_timeout ;
};
#line 123 "/usr/local/include/event2/event_struct.h"
struct __anonstruct_ev_signal_next_49 {
   struct event *le_next ;
   struct event **le_prev ;
};
#line 123 "/usr/local/include/event2/event_struct.h"
struct __anonstruct_ev_signal_48 {
   struct __anonstruct_ev_signal_next_49 ev_signal_next ;
   short ev_ncalls ;
   short *ev_pncalls ;
};
#line 123 "/usr/local/include/event2/event_struct.h"
union __anonunion_ev__45 {
   struct __anonstruct_ev_io_46 ev_io ;
   struct __anonstruct_ev_signal_48 ev_signal ;
};
#line 123 "/usr/local/include/event2/event_struct.h"
struct event {
   struct event_callback ev_evcallback ;
   union __anonunion_ev_timeout_pos_43 ev_timeout_pos ;
   int ev_fd ;
   struct event_base *ev_base ;
   union __anonunion_ev__45 ev_ ;
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
#line 40
struct args_value;
#line 40
struct args_value;
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
struct __anonstruct_data_57 {
   u_char attr ;
   u_char fg ;
   u_char bg ;
   u_char data ;
};
#line 708 "tmux.h"
union __anonunion____missing_field_name_56 {
   u_int offset ;
   struct __anonstruct_data_57 data ;
};
#line 708 "tmux.h"
struct grid_cell_entry {
   u_char flags ;
   union __anonunion____missing_field_name_56 __annonCompField1 ;
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
struct __anonstruct_entry_58 {
   struct style_range *tqe_next ;
   struct style_range **tqe_prev ;
};
#line 780 "tmux.h"
struct style_range {
   enum style_range_type type ;
   u_int argument ;
   u_int start ;
   u_int end ;
   struct __anonstruct_entry_58 entry ;
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
struct __anonstruct_entry_59 {
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
   struct __anonstruct_entry_59 entry ;
};
#line 941 "tmux.h"
struct window_pane_offset {
   size_t used ;
};
#line 946 "tmux.h"
struct __anonstruct_entry_60 {
   struct window_pane_resize *tqe_next ;
   struct window_pane_resize **tqe_prev ;
};
#line 946 "tmux.h"
struct window_pane_resize {
   u_int sx ;
   u_int sy ;
   u_int osx ;
   u_int osy ;
   struct __anonstruct_entry_60 entry ;
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
struct __anonstruct_modes_61 {
   struct window_mode_entry *tqh_first ;
   struct window_mode_entry **tqh_last ;
};
#line 958 "tmux.h"
struct __anonstruct_entry_62 {
   struct window_pane *tqe_next ;
   struct window_pane **tqe_prev ;
};
#line 958 "tmux.h"
struct __anonstruct_tree_entry_63 {
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
   struct __anonstruct_modes_61 modes ;
   char *searchstr ;
   int searchregex ;
   int border_gc_set ;
   struct grid_cell border_gc ;
   struct __anonstruct_entry_62 entry ;
   struct __anonstruct_tree_entry_63 tree_entry ;
};
#line 1037 "tmux.h"
struct window_panes {
   struct window_pane *tqh_first ;
   struct window_pane **tqh_last ;
};
#line 1041 "tmux.h"
struct __anonstruct_alerts_entry_64 {
   struct window *tqe_next ;
   struct window **tqe_prev ;
};
#line 1041 "tmux.h"
struct __anonstruct_winlinks_65 {
   struct winlink *tqh_first ;
   struct winlink **tqh_last ;
};
#line 1041 "tmux.h"
struct __anonstruct_entry_66 {
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
   struct __anonstruct_alerts_entry_64 alerts_entry ;
   struct options *options ;
   u_int references ;
   struct __anonstruct_winlinks_65 winlinks ;
   struct __anonstruct_entry_66 entry ;
};
#line 1095 "tmux.h"
struct __anonstruct_entry_67 {
   struct winlink *rbe_left ;
   struct winlink *rbe_right ;
   struct winlink *rbe_parent ;
   int rbe_color ;
};
#line 1095 "tmux.h"
struct __anonstruct_wentry_68 {
   struct winlink *tqe_next ;
   struct winlink **tqe_prev ;
};
#line 1095 "tmux.h"
struct __anonstruct_sentry_69 {
   struct winlink *tqe_next ;
   struct winlink **tqe_prev ;
};
#line 1095 "tmux.h"
struct winlink {
   int idx ;
   struct session *session ;
   struct window *window ;
   int flags ;
   struct __anonstruct_entry_67 entry ;
   struct __anonstruct_wentry_68 wentry ;
   struct __anonstruct_sentry_69 sentry ;
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
struct __anonstruct_entry_70 {
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
   struct __anonstruct_entry_70 entry ;
};
#line 1171 "tmux.h"
struct __anonstruct_sessions_72 {
   struct session *tqh_first ;
   struct session **tqh_last ;
};
#line 1171 "tmux.h"
struct __anonstruct_entry_73 {
   struct session_group *rbe_left ;
   struct session_group *rbe_right ;
   struct session_group *rbe_parent ;
   int rbe_color ;
};
#line 1171 "tmux.h"
struct session_group {
   char *name ;
   struct __anonstruct_sessions_72 sessions ;
   struct __anonstruct_entry_73 entry ;
};
#line 1179 "tmux.h"
struct __anonstruct_gentry_74 {
   struct session *tqe_next ;
   struct session **tqe_prev ;
};
#line 1179 "tmux.h"
struct __anonstruct_entry_75 {
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
   struct __anonstruct_gentry_74 gentry ;
   struct __anonstruct_entry_75 entry ;
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
struct __anonstruct_entry_76 {
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
   struct __anonstruct_entry_76 entry ;
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
#line 1442
enum cmd_find_type {
    CMD_FIND_PANE = 0,
    CMD_FIND_WINDOW = 1,
    CMD_FIND_SESSION = 2
} ;
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
#line 1475
enum cmd_retval {
    CMD_RETURN_ERROR = -1,
    CMD_RETURN_NORMAL = 0,
    CMD_RETURN_WAIT = 1,
    CMD_RETURN_STOP = 2
} ;
#line 1518 "tmux.h"
struct cmd_entry_flag {
   char flag ;
   enum cmd_find_type type ;
   int flags ;
};
#line 1525 "tmux.h"
struct __anonstruct_args_78 {
   char *template ;
   int lower ;
   int upper ;
};
#line 1525 "tmux.h"
struct cmd_entry {
   char *name ;
   char *alias ;
   struct __anonstruct_args_78 args ;
   char *usage ;
   struct cmd_entry_flag source ;
   struct cmd_entry_flag target ;
   int flags ;
   enum cmd_retval (*exec)(struct cmd * , struct cmdq_item * ) ;
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
struct __anonstruct_entry_79 {
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
   struct __anonstruct_entry_79 entry ;
};
#line 1590 "tmux.h"
struct client_files {
   struct client_file *rbh_root ;
};
#line 1593 "tmux.h"
struct __anonstruct_entry_80 {
   struct client_window *rbe_left ;
   struct client_window *rbe_right ;
   struct client_window *rbe_parent ;
   int rbe_color ;
};
#line 1593 "tmux.h"
struct client_window {
   u_int window ;
   struct window_pane *pane ;
   struct __anonstruct_entry_80 entry ;
};
#line 1598 "tmux.h"
struct client_windows {
   struct client_window *rbh_root ;
};
#line 1608
enum __anonenum_exit_type_81 {
    CLIENT_EXIT_RETURN = 0,
    CLIENT_EXIT_SHUTDOWN = 1,
    CLIENT_EXIT_DETACH = 2
} ;
#line 1608
struct key_table;
#line 1608
enum __anonenum_prompt_mode_82 {
    PROMPT_ENTRY = 0,
    PROMPT_COMMAND = 1
} ;
#line 1608 "tmux.h"
struct __anonstruct_entry_83 {
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
   enum __anonenum_exit_type_81 exit_type ;
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
   enum __anonenum_prompt_mode_82 prompt_mode ;
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
   struct __anonstruct_entry_83 entry ;
};
#line 1776 "tmux.h"
struct __anonstruct_entry_84 {
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
   struct __anonstruct_entry_84 entry ;
};
#line 1786 "tmux.h"
struct key_bindings {
   struct key_binding *rbh_root ;
};
#line 1788 "tmux.h"
struct __anonstruct_entry_85 {
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
   struct __anonstruct_entry_85 entry ;
};
#line 1869 "tmux.h"
struct spawn_context {
   struct cmdq_item *item ;
   struct session *s ;
   struct winlink *wl ;
   struct client *tc ;
   struct window_pane *wp0 ;
   struct layout_cell *lc ;
   char *name ;
   char **argv ;
   int argc ;
   struct environ *environ ;
   int idx ;
   char *cwd ;
   int flags ;
};
#line 1976
struct format_tree;
extern struct winlinks *__dyc_random_ptr__comp_224winlinks(unsigned int __dyc_exp ) ;
extern struct winlinks *__dyc_read_ptr__comp_224winlinks(void) ;
extern void __dyc_print_ptr__comp_224winlinks(struct winlinks  const  *__dyc_thistype ) ;
extern struct termios __dyc_random_comp_37termios(unsigned int __dyc_exp ) ;
extern struct termios __dyc_read_comp_37termios(void) ;
extern void __dyc_print_comp_37termios(struct termios __dyc_thistype ) ;
extern void *__dyc_random_ptr__comp_164options(unsigned int __dyc_exp ) ;
extern void *__dyc_read_ptr__comp_164options(void) ;
extern void __dyc_print_ptr__comp_164options(void const   * const  __dyc_thistype ) ;
extern struct window_pane_resize **__dyc_random_ptr__ptr__comp_207window_pane_resize(unsigned int __dyc_exp ) ;
extern struct window_pane_resize **__dyc_read_ptr__ptr__comp_207window_pane_resize(void) ;
extern void __dyc_print_ptr__ptr__comp_207window_pane_resize(struct window_pane_resize * const  *__dyc_thistype ) ;
extern u_short __dyc_random_typdef_u_short(unsigned int __dyc_exp ) ;
extern u_short __dyc_read_typdef_u_short(void) ;
extern void __dyc_print_typdef_u_short(u_short __dyc_thistype ) ;
extern struct screen_redraw_ctx __dyc_random_comp_200screen_redraw_ctx(unsigned int __dyc_exp ) ;
extern struct screen_redraw_ctx __dyc_read_comp_200screen_redraw_ctx(void) ;
extern void __dyc_print_comp_200screen_redraw_ctx(struct screen_redraw_ctx __dyc_thistype ) ;
extern struct client_files *__dyc_random_ptr__comp_258client_files(unsigned int __dyc_exp ) ;
extern struct client_files *__dyc_read_ptr__comp_258client_files(void) ;
extern void __dyc_print_ptr__comp_258client_files(struct client_files  const  *__dyc_thistype ) ;
extern struct tty_key *__dyc_random_ptr__comp_238tty_key(unsigned int __dyc_exp ) ;
extern struct tty_key *__dyc_read_ptr__comp_238tty_key(void) ;
extern void __dyc_print_ptr__comp_238tty_key(struct tty_key  const  *__dyc_thistype ) ;
extern struct __anonstruct_winlinks_65 __dyc_random_comp_218__anonstruct_winlinks_65(unsigned int __dyc_exp ) ;
extern struct __anonstruct_winlinks_65 __dyc_read_comp_218__anonstruct_winlinks_65(void) ;
extern void __dyc_print_comp_218__anonstruct_winlinks_65(struct __anonstruct_winlinks_65 __dyc_thistype ) ;
extern u_int __dyc_random_typdef_u_int(unsigned int __dyc_exp ) ;
extern u_int __dyc_read_typdef_u_int(void) ;
extern void __dyc_print_typdef_u_int(u_int __dyc_thistype ) ;
extern void *__dyc_random_ptr__comp_105event_base(unsigned int __dyc_exp ) ;
extern void *__dyc_read_ptr__comp_105event_base(void) ;
extern void __dyc_print_ptr__comp_105event_base(void const   * const  __dyc_thistype ) ;
extern struct client_window *__dyc_random_ptr__comp_260client_window(unsigned int __dyc_exp ) ;
extern struct client_window *__dyc_read_ptr__comp_260client_window(void) ;
extern void __dyc_print_ptr__comp_260client_window(struct client_window  const  *__dyc_thistype ) ;
extern struct client_file *__dyc_random_ptr__comp_257client_file(unsigned int __dyc_exp ) ;
extern struct client_file *__dyc_read_ptr__comp_257client_file(void) ;
extern void __dyc_print_ptr__comp_257client_file(struct client_file  const  *__dyc_thistype ) ;
extern struct window_pane __dyc_random_comp_199window_pane(unsigned int __dyc_exp ) ;
extern struct window_pane __dyc_read_comp_199window_pane(void) ;
extern void __dyc_print_comp_199window_pane(struct window_pane __dyc_thistype ) ;
extern struct winlink __dyc_random_comp_174winlink(unsigned int __dyc_exp ) ;
extern struct winlink __dyc_read_comp_174winlink(void) ;
extern void __dyc_print_comp_174winlink(struct winlink __dyc_thistype ) ;
extern struct window_pane_offset __dyc_random_comp_206window_pane_offset(unsigned int __dyc_exp ) ;
extern struct window_pane_offset __dyc_read_comp_206window_pane_offset(void) ;
extern void __dyc_print_comp_206window_pane_offset(struct window_pane_offset __dyc_thistype ) ;
extern u_char __dyc_random_typdef_u_char(unsigned int __dyc_exp ) ;
extern u_char __dyc_read_typdef_u_char(void) ;
extern void __dyc_print_typdef_u_char(u_char __dyc_thistype ) ;
extern struct event_callback *__dyc_random_ptr__comp_111event_callback(unsigned int __dyc_exp ) ;
extern struct event_callback *__dyc_read_ptr__comp_111event_callback(void) ;
extern void __dyc_print_ptr__comp_111event_callback(struct event_callback  const  *__dyc_thistype ) ;
extern int *__dyc_random_ptr__int(unsigned int __dyc_exp ) ;
extern int *__dyc_read_ptr__int(void) ;
extern void __dyc_print_ptr__int(int const   *__dyc_thistype ) ;
extern struct args *__dyc_random_ptr__comp_147args(unsigned int __dyc_exp ) ;
extern struct args *__dyc_read_ptr__comp_147args(void) ;
extern void __dyc_print_ptr__comp_147args(struct args  const  *__dyc_thistype ) ;
extern struct cmd_find_state *__dyc_random_ptr__comp_151cmd_find_state(unsigned int __dyc_exp ) ;
extern struct cmd_find_state *__dyc_read_ptr__comp_151cmd_find_state(void) ;
extern void __dyc_print_ptr__comp_151cmd_find_state(struct cmd_find_state  const  *__dyc_thistype ) ;
extern struct grid_line *__dyc_random_ptr__comp_189grid_line(unsigned int __dyc_exp ) ;
extern struct grid_line *__dyc_read_ptr__comp_189grid_line(void) ;
extern void __dyc_print_ptr__comp_189grid_line(struct grid_line  const  *__dyc_thistype ) ;
extern size_t __dyc_random_typdef_size_t(unsigned int __dyc_exp ) ;
extern size_t __dyc_read_typdef_size_t(void) ;
extern void __dyc_print_typdef_size_t(size_t __dyc_thistype ) ;
extern void *__dyc_random_ptr__comp_158format_job_tree(unsigned int __dyc_exp ) ;
extern void *__dyc_read_ptr__comp_158format_job_tree(void) ;
extern void __dyc_print_ptr__comp_158format_job_tree(void const   * const  __dyc_thistype ) ;
extern struct window_mode_entry **__dyc_random_ptr__ptr__comp_203window_mode_entry(unsigned int __dyc_exp ) ;
extern struct window_mode_entry **__dyc_read_ptr__ptr__comp_203window_mode_entry(void) ;
extern void __dyc_print_ptr__ptr__comp_203window_mode_entry(struct window_mode_entry * const  *__dyc_thistype ) ;
extern struct __anonstruct_ev_next_with_common_timeout_44 __dyc_random_comp_115__anonstruct_ev_next_with_common_timeout_44(unsigned int __dyc_exp ) ;
extern struct __anonstruct_ev_next_with_common_timeout_44 __dyc_read_comp_115__anonstruct_ev_next_with_common_timeout_44(void) ;
extern void __dyc_print_comp_115__anonstruct_ev_next_with_common_timeout_44(struct __anonstruct_ev_next_with_common_timeout_44 __dyc_thistype ) ;
extern tcflag_t __dyc_random_typdef_tcflag_t(unsigned int __dyc_exp ) ;
extern tcflag_t __dyc_read_typdef_tcflag_t(void) ;
extern void __dyc_print_typdef_tcflag_t(tcflag_t __dyc_thistype ) ;
extern struct window_pane *__dyc_random_ptr__comp_199window_pane(unsigned int __dyc_exp ) ;
extern struct window_pane *__dyc_read_ptr__comp_199window_pane(void) ;
extern void __dyc_print_ptr__comp_199window_pane(struct window_pane  const  *__dyc_thistype ) ;
extern union __anonunion_ev__45 __dyc_random_comp_116__anonunion_ev__45(unsigned int __dyc_exp ) ;
extern union __anonunion_ev__45 __dyc_read_comp_116__anonunion_ev__45(void) ;
extern void __dyc_print_comp_116__anonunion_ev__45(union __anonunion_ev__45 __dyc_thistype ) ;
extern struct __anonstruct_entry_67 __dyc_random_comp_221__anonstruct_entry_67(unsigned int __dyc_exp ) ;
extern struct __anonstruct_entry_67 __dyc_read_comp_221__anonstruct_entry_67(void) ;
extern void __dyc_print_comp_221__anonstruct_entry_67(struct __anonstruct_entry_67 __dyc_thistype ) ;
extern struct window *__dyc_random_ptr__comp_210window(unsigned int __dyc_exp ) ;
extern struct window *__dyc_read_ptr__comp_210window(void) ;
extern void __dyc_print_ptr__comp_210window(struct window  const  *__dyc_thistype ) ;
extern struct winlink *__dyc_random_ptr__comp_174winlink(unsigned int __dyc_exp ) ;
extern struct winlink *__dyc_read_ptr__comp_174winlink(void) ;
extern void __dyc_print_ptr__comp_174winlink(struct winlink  const  *__dyc_thistype ) ;
extern struct event_callback **__dyc_random_ptr__ptr__comp_111event_callback(unsigned int __dyc_exp ) ;
extern struct event_callback **__dyc_read_ptr__ptr__comp_111event_callback(void) ;
extern void __dyc_print_ptr__ptr__comp_111event_callback(struct event_callback * const  *__dyc_thistype ) ;
extern struct __anonstruct_entry_80 __dyc_random_comp_261__anonstruct_entry_80(unsigned int __dyc_exp ) ;
extern struct __anonstruct_entry_80 __dyc_read_comp_261__anonstruct_entry_80(void) ;
extern void __dyc_print_comp_261__anonstruct_entry_80(struct __anonstruct_entry_80 __dyc_thistype ) ;
extern struct screen __dyc_random_comp_198screen(unsigned int __dyc_exp ) ;
extern struct screen __dyc_read_comp_198screen(void) ;
extern void __dyc_print_comp_198screen(struct screen __dyc_thistype ) ;
extern void *__dyc_random_ptr__comp_166options_entry(unsigned int __dyc_exp ) ;
extern void *__dyc_read_ptr__comp_166options_entry(void) ;
extern void __dyc_print_ptr__comp_166options_entry(void const   * const  __dyc_thistype ) ;
extern struct style_range __dyc_random_comp_192style_range(unsigned int __dyc_exp ) ;
extern struct style_range __dyc_read_comp_192style_range(void) ;
extern void __dyc_print_comp_192style_range(struct style_range __dyc_thistype ) ;
extern void *__dyc_random_ptr__comp_150cmd(unsigned int __dyc_exp ) ;
extern void *__dyc_read_ptr__comp_150cmd(void) ;
extern void __dyc_print_ptr__comp_150cmd(void const   * const  __dyc_thistype ) ;
extern struct __anonstruct_entry_76 __dyc_random_comp_242__anonstruct_entry_76(unsigned int __dyc_exp ) ;
extern struct __anonstruct_entry_76 __dyc_read_comp_242__anonstruct_entry_76(void) ;
extern void __dyc_print_comp_242__anonstruct_entry_76(struct __anonstruct_entry_76 __dyc_thistype ) ;
extern struct tty_term __dyc_random_comp_240tty_term(unsigned int __dyc_exp ) ;
extern struct tty_term __dyc_read_comp_240tty_term(void) ;
extern void __dyc_print_comp_240tty_term(struct tty_term __dyc_thistype ) ;
extern struct bufferevent __dyc_random_comp_129bufferevent(unsigned int __dyc_exp ) ;
extern struct bufferevent __dyc_read_comp_129bufferevent(void) ;
extern void __dyc_print_comp_129bufferevent(struct bufferevent __dyc_thistype ) ;
extern struct window **__dyc_random_ptr__ptr__comp_210window(unsigned int __dyc_exp ) ;
extern struct window **__dyc_read_ptr__ptr__comp_210window(void) ;
extern void __dyc_print_ptr__ptr__comp_210window(struct window * const  *__dyc_thistype ) ;
extern struct __anonstruct_entry_59 __dyc_random_comp_205__anonstruct_entry_59(unsigned int __dyc_exp ) ;
extern struct __anonstruct_entry_59 __dyc_read_comp_205__anonstruct_entry_59(void) ;
extern void __dyc_print_comp_205__anonstruct_entry_59(struct __anonstruct_entry_59 __dyc_thistype ) ;
extern struct __anonstruct_ev_io_next_47 __dyc_random_comp_118__anonstruct_ev_io_next_47(unsigned int __dyc_exp ) ;
extern struct __anonstruct_ev_io_next_47 __dyc_read_comp_118__anonstruct_ev_io_next_47(void) ;
extern void __dyc_print_comp_118__anonstruct_ev_io_next_47(struct __anonstruct_ev_io_next_47 __dyc_thistype ) ;
extern u_int *__dyc_random_ptr__typdef_u_int(unsigned int __dyc_exp ) ;
extern u_int *__dyc_read_ptr__typdef_u_int(void) ;
extern void __dyc_print_ptr__typdef_u_int(u_int const   *__dyc_thistype ) ;
extern struct status_line __dyc_random_comp_256status_line(unsigned int __dyc_exp ) ;
extern struct status_line __dyc_read_comp_256status_line(void) ;
extern void __dyc_print_comp_256status_line(struct status_line __dyc_thistype ) ;
extern union __anonunion____missing_field_name_56 __dyc_random_comp_187__anonunion____missing_field_name_56(unsigned int __dyc_exp ) ;
extern union __anonunion____missing_field_name_56 __dyc_read_comp_187__anonunion____missing_field_name_56(void) ;
extern void __dyc_print_comp_187__anonunion____missing_field_name_56(union __anonunion____missing_field_name_56 __dyc_thistype ) ;
extern struct client __dyc_random_comp_149client(unsigned int __dyc_exp ) ;
extern struct client __dyc_read_comp_149client(void) ;
extern void __dyc_print_comp_149client(struct client __dyc_thistype ) ;
extern struct timeval __dyc_random_comp_4timeval(unsigned int __dyc_exp ) ;
extern struct timeval __dyc_read_comp_4timeval(void) ;
extern void __dyc_print_comp_4timeval(struct timeval __dyc_thistype ) ;
extern struct style_range *__dyc_random_ptr__comp_192style_range(unsigned int __dyc_exp ) ;
extern struct style_range *__dyc_read_ptr__comp_192style_range(void) ;
extern void __dyc_print_ptr__comp_192style_range(struct style_range  const  *__dyc_thistype ) ;
extern struct __anonstruct_entry_83 __dyc_random_comp_264__anonstruct_entry_83(unsigned int __dyc_exp ) ;
extern struct __anonstruct_entry_83 __dyc_read_comp_264__anonstruct_entry_83(void) ;
extern void __dyc_print_comp_264__anonstruct_entry_83(struct __anonstruct_entry_83 __dyc_thistype ) ;
extern struct tty __dyc_random_comp_241tty(unsigned int __dyc_exp ) ;
extern struct tty __dyc_read_comp_241tty(void) ;
extern void __dyc_print_comp_241tty(struct tty __dyc_thistype ) ;
extern struct grid_cell __dyc_random_comp_184grid_cell(unsigned int __dyc_exp ) ;
extern struct grid_cell __dyc_read_comp_184grid_cell(void) ;
extern void __dyc_print_comp_184grid_cell(struct grid_cell __dyc_thistype ) ;
extern struct bufferevent *__dyc_random_ptr__comp_129bufferevent(unsigned int __dyc_exp ) ;
extern struct bufferevent *__dyc_read_ptr__comp_129bufferevent(void) ;
extern void __dyc_print_ptr__comp_129bufferevent(struct bufferevent  const  *__dyc_thistype ) ;
extern struct key_table *__dyc_random_ptr__comp_263key_table(unsigned int __dyc_exp ) ;
extern struct key_table *__dyc_read_ptr__comp_263key_table(void) ;
extern void __dyc_print_ptr__comp_263key_table(struct key_table  const  *__dyc_thistype ) ;
extern struct window_pane_resize __dyc_random_comp_207window_pane_resize(unsigned int __dyc_exp ) ;
extern struct window_pane_resize __dyc_read_comp_207window_pane_resize(void) ;
extern void __dyc_print_comp_207window_pane_resize(struct window_pane_resize __dyc_thistype ) ;
extern struct key_event __dyc_random_comp_237key_event(unsigned int __dyc_exp ) ;
extern struct key_event __dyc_read_comp_237key_event(void) ;
extern void __dyc_print_comp_237key_event(struct key_event __dyc_thistype ) ;
extern struct session __dyc_random_comp_170session(unsigned int __dyc_exp ) ;
extern struct session __dyc_read_comp_170session(void) ;
extern void __dyc_print_comp_170session(struct session __dyc_thistype ) ;
extern struct grid __dyc_random_comp_190grid(unsigned int __dyc_exp ) ;
extern struct grid __dyc_read_comp_190grid(void) ;
extern void __dyc_print_comp_190grid(struct grid __dyc_thistype ) ;
extern utf8_char __dyc_random_typdef_utf8_char(unsigned int __dyc_exp ) ;
extern utf8_char __dyc_read_typdef_utf8_char(void) ;
extern void __dyc_print_typdef_utf8_char(utf8_char __dyc_thistype ) ;
extern struct __anonstruct_evcb_active_next_41 __dyc_random_comp_112__anonstruct_evcb_active_next_41(unsigned int __dyc_exp ) ;
extern struct __anonstruct_evcb_active_next_41 __dyc_read_comp_112__anonstruct_evcb_active_next_41(void) ;
extern void __dyc_print_comp_112__anonstruct_evcb_active_next_41(struct __anonstruct_evcb_active_next_41 __dyc_thistype ) ;
extern struct tty *__dyc_random_ptr__comp_241tty(unsigned int __dyc_exp ) ;
extern struct tty *__dyc_read_ptr__comp_241tty(void) ;
extern void __dyc_print_ptr__comp_241tty(struct tty  const  *__dyc_thistype ) ;
extern struct window_pane **__dyc_random_ptr__ptr__comp_199window_pane(unsigned int __dyc_exp ) ;
extern struct window_pane **__dyc_read_ptr__ptr__comp_199window_pane(void) ;
extern void __dyc_print_ptr__ptr__comp_199window_pane(struct window_pane * const  *__dyc_thistype ) ;
extern struct event_watermark __dyc_random_comp_133event_watermark(unsigned int __dyc_exp ) ;
extern struct event_watermark __dyc_read_comp_133event_watermark(void) ;
extern void __dyc_print_comp_133event_watermark(struct event_watermark __dyc_thistype ) ;
extern struct __anonstruct_ev_signal_48 __dyc_random_comp_119__anonstruct_ev_signal_48(unsigned int __dyc_exp ) ;
extern struct __anonstruct_ev_signal_48 __dyc_read_comp_119__anonstruct_ev_signal_48(void) ;
extern void __dyc_print_comp_119__anonstruct_ev_signal_48(struct __anonstruct_ev_signal_48 __dyc_thistype ) ;
extern struct __anonstruct_alerts_entry_64 __dyc_random_comp_217__anonstruct_alerts_entry_64(unsigned int __dyc_exp ) ;
extern struct __anonstruct_alerts_entry_64 __dyc_read_comp_217__anonstruct_alerts_entry_64(void) ;
extern void __dyc_print_comp_217__anonstruct_alerts_entry_64(struct __anonstruct_alerts_entry_64 __dyc_thistype ) ;
extern void *__dyc_random_ptr__comp_134bufferevent_ops(unsigned int __dyc_exp ) ;
extern void *__dyc_read_ptr__comp_134bufferevent_ops(void) ;
extern void __dyc_print_ptr__comp_134bufferevent_ops(void const   * const  __dyc_thistype ) ;
extern struct event __dyc_random_comp_106event(unsigned int __dyc_exp ) ;
extern struct event __dyc_read_comp_106event(void) ;
extern void __dyc_print_comp_106event(struct event __dyc_thistype ) ;
extern void *__dyc_random_ptr__fun_name_is_not_here(unsigned int __dyc_exp ) ;
extern void *__dyc_read_ptr__fun_name_is_not_here(void) ;
extern void __dyc_print_ptr__fun_name_is_not_here(void const   * const  __dyc_thistype ) ;
extern struct __anonstruct_entry_84 __dyc_random_comp_267__anonstruct_entry_84(unsigned int __dyc_exp ) ;
extern struct __anonstruct_entry_84 __dyc_read_comp_267__anonstruct_entry_84(void) ;
extern void __dyc_print_comp_267__anonstruct_entry_84(struct __anonstruct_entry_84 __dyc_thistype ) ;
extern struct winlink **__dyc_random_ptr__ptr__comp_174winlink(unsigned int __dyc_exp ) ;
extern struct winlink **__dyc_read_ptr__ptr__comp_174winlink(void) ;
extern void __dyc_print_ptr__ptr__comp_174winlink(struct winlink * const  *__dyc_thistype ) ;
extern struct client_windows __dyc_random_comp_262client_windows(unsigned int __dyc_exp ) ;
extern struct client_windows __dyc_read_comp_262client_windows(void) ;
extern void __dyc_print_comp_262client_windows(struct client_windows __dyc_thistype ) ;
extern void *__dyc_random_ptr__comp_247args_entry(unsigned int __dyc_exp ) ;
extern void *__dyc_read_ptr__comp_247args_entry(void) ;
extern void __dyc_print_ptr__comp_247args_entry(void const   * const  __dyc_thistype ) ;
extern void *__dyc_random_ptr__comp_160input_ctx(unsigned int __dyc_exp ) ;
extern void *__dyc_read_ptr__comp_160input_ctx(void) ;
extern void __dyc_print_ptr__comp_160input_ctx(void const   * const  __dyc_thistype ) ;
extern struct __anonstruct_entry_60 __dyc_random_comp_208__anonstruct_entry_60(unsigned int __dyc_exp ) ;
extern struct __anonstruct_entry_60 __dyc_read_comp_208__anonstruct_entry_60(void) ;
extern void __dyc_print_comp_208__anonstruct_entry_60(struct __anonstruct_entry_60 __dyc_thistype ) ;
extern struct grid_cell_entry __dyc_random_comp_186grid_cell_entry(unsigned int __dyc_exp ) ;
extern struct grid_cell_entry __dyc_read_comp_186grid_cell_entry(void) ;
extern void __dyc_print_comp_186grid_cell_entry(struct grid_cell_entry __dyc_thistype ) ;
extern struct cmd_list __dyc_random_comp_249cmd_list(unsigned int __dyc_exp ) ;
extern struct cmd_list __dyc_read_comp_249cmd_list(void) ;
extern void __dyc_print_comp_249cmd_list(struct cmd_list __dyc_thistype ) ;
extern struct session *__dyc_random_ptr__comp_170session(unsigned int __dyc_exp ) ;
extern struct session *__dyc_read_ptr__comp_170session(void) ;
extern void __dyc_print_ptr__comp_170session(struct session  const  *__dyc_thistype ) ;
extern struct __anonstruct_entry_70 __dyc_random_comp_227__anonstruct_entry_70(unsigned int __dyc_exp ) ;
extern struct __anonstruct_entry_70 __dyc_read_comp_227__anonstruct_entry_70(void) ;
extern void __dyc_print_comp_227__anonstruct_entry_70(struct __anonstruct_entry_70 __dyc_thistype ) ;
extern void *__dyc_random_ptr__comp_123evbuffer(unsigned int __dyc_exp ) ;
extern void *__dyc_read_ptr__comp_123evbuffer(void) ;
extern void __dyc_print_ptr__comp_123evbuffer(void const   * const  __dyc_thistype ) ;
extern struct tty_term *__dyc_random_ptr__comp_240tty_term(unsigned int __dyc_exp ) ;
extern struct tty_term *__dyc_read_ptr__comp_240tty_term(void) ;
extern void __dyc_print_ptr__comp_240tty_term(struct tty_term  const  *__dyc_thistype ) ;
extern void *__dyc_random_ptr__void(unsigned int __dyc_exp ) ;
extern void *__dyc_read_ptr__void(void) ;
extern void __dyc_print_ptr__void(void const   * const  __dyc_thistype ) ;
extern struct timezone __dyc_random_comp_38timezone(unsigned int __dyc_exp ) ;
extern struct timezone __dyc_read_comp_38timezone(void) ;
extern void __dyc_print_comp_38timezone(struct timezone __dyc_thistype ) ;
extern struct __anonstruct_entry_85 __dyc_random_comp_269__anonstruct_entry_85(unsigned int __dyc_exp ) ;
extern struct __anonstruct_entry_85 __dyc_read_comp_269__anonstruct_entry_85(void) ;
extern void __dyc_print_comp_269__anonstruct_entry_85(struct __anonstruct_entry_85 __dyc_thistype ) ;
extern __suseconds_t __dyc_random_typdef___suseconds_t(unsigned int __dyc_exp ) ;
extern __suseconds_t __dyc_read_typdef___suseconds_t(void) ;
extern void __dyc_print_typdef___suseconds_t(__suseconds_t __dyc_thistype ) ;
extern short *__dyc_random_ptr__short(unsigned int __dyc_exp ) ;
extern short *__dyc_read_ptr__short(void) ;
extern void __dyc_print_ptr__short(short const   *__dyc_thistype ) ;
extern struct cmd_entry *__dyc_random_ptr__comp_253cmd_entry(unsigned int __dyc_exp ) ;
extern struct cmd_entry *__dyc_read_ptr__comp_253cmd_entry(void) ;
extern void __dyc_print_ptr__comp_253cmd_entry(struct cmd_entry  const  *__dyc_thistype ) ;
extern struct event_callback __dyc_random_comp_111event_callback(unsigned int __dyc_exp ) ;
extern struct event_callback __dyc_read_comp_111event_callback(void) ;
extern void __dyc_print_comp_111event_callback(struct event_callback __dyc_thistype ) ;
extern void *__dyc_random_ptr__comp_148args_value(unsigned int __dyc_exp ) ;
extern void *__dyc_read_ptr__comp_148args_value(void) ;
extern void __dyc_print_ptr__comp_148args_value(void const   * const  __dyc_thistype ) ;
extern union __anonunion_ev_timeout_pos_43 __dyc_random_comp_114__anonunion_ev_timeout_pos_43(unsigned int __dyc_exp ) ;
extern union __anonunion_ev_timeout_pos_43 __dyc_read_comp_114__anonunion_ev_timeout_pos_43(void) ;
extern void __dyc_print_comp_114__anonunion_ev_timeout_pos_43(union __anonunion_ev_timeout_pos_43 __dyc_thistype ) ;
extern struct spawn_context *__dyc_random_ptr__comp_275spawn_context(unsigned int __dyc_exp ) ;
extern struct spawn_context *__dyc_read_ptr__comp_275spawn_context(void) ;
extern void __dyc_print_ptr__comp_275spawn_context(struct spawn_context  const  *__dyc_thistype ) ;
extern struct session_group __dyc_random_comp_230session_group(unsigned int __dyc_exp ) ;
extern struct session_group __dyc_read_comp_230session_group(void) ;
extern void __dyc_print_comp_230session_group(struct session_group __dyc_thistype ) ;
extern struct cmd_find_state __dyc_random_comp_151cmd_find_state(unsigned int __dyc_exp ) ;
extern struct cmd_find_state __dyc_read_comp_151cmd_find_state(void) ;
extern void __dyc_print_comp_151cmd_find_state(struct cmd_find_state __dyc_thistype ) ;
extern struct grid_cell_entry *__dyc_random_ptr__comp_186grid_cell_entry(unsigned int __dyc_exp ) ;
extern struct grid_cell_entry *__dyc_read_ptr__comp_186grid_cell_entry(void) ;
extern void __dyc_print_ptr__comp_186grid_cell_entry(struct grid_cell_entry  const  *__dyc_thistype ) ;
extern struct __anonstruct_wentry_68 __dyc_random_comp_222__anonstruct_wentry_68(unsigned int __dyc_exp ) ;
extern struct __anonstruct_wentry_68 __dyc_read_comp_222__anonstruct_wentry_68(void) ;
extern void __dyc_print_comp_222__anonstruct_wentry_68(struct __anonstruct_wentry_68 __dyc_thistype ) ;
extern struct window_panes __dyc_random_comp_215window_panes(unsigned int __dyc_exp ) ;
extern struct window_panes __dyc_read_comp_215window_panes(void) ;
extern void __dyc_print_comp_215window_panes(struct window_panes __dyc_thistype ) ;
extern struct window_mode_entry *__dyc_random_ptr__comp_203window_mode_entry(unsigned int __dyc_exp ) ;
extern struct window_mode_entry *__dyc_read_ptr__comp_203window_mode_entry(void) ;
extern void __dyc_print_ptr__comp_203window_mode_entry(struct window_mode_entry  const  *__dyc_thistype ) ;
extern char *__dyc_random_ptr__char(unsigned int __dyc_exp ) ;
extern char *__dyc_read_ptr__char(void) ;
extern void __dyc_print_ptr__char(char const   *__dyc_thistype ) ;
extern struct utf8_data __dyc_random_comp_183utf8_data(unsigned int __dyc_exp ) ;
extern struct utf8_data __dyc_read_comp_183utf8_data(void) ;
extern void __dyc_print_comp_183utf8_data(struct utf8_data __dyc_thistype ) ;
extern struct style_range **__dyc_random_ptr__ptr__comp_192style_range(unsigned int __dyc_exp ) ;
extern struct style_range **__dyc_read_ptr__ptr__comp_192style_range(void) ;
extern void __dyc_print_ptr__ptr__comp_192style_range(struct style_range * const  *__dyc_thistype ) ;
extern struct timezone *__dyc_random_ptr__comp_38timezone(unsigned int __dyc_exp ) ;
extern struct timezone *__dyc_read_ptr__comp_38timezone(void) ;
extern void __dyc_print_ptr__comp_38timezone(struct timezone  const  *__dyc_thistype ) ;
extern struct window __dyc_random_comp_210window(unsigned int __dyc_exp ) ;
extern struct window __dyc_read_comp_210window(void) ;
extern void __dyc_print_comp_210window(struct window __dyc_thistype ) ;
extern struct window_mode __dyc_random_comp_204window_mode(unsigned int __dyc_exp ) ;
extern struct window_mode __dyc_read_comp_204window_mode(void) ;
extern void __dyc_print_comp_204window_mode(struct window_mode __dyc_thistype ) ;
extern struct grid_extd_entry __dyc_random_comp_185grid_extd_entry(unsigned int __dyc_exp ) ;
extern struct grid_extd_entry __dyc_read_comp_185grid_extd_entry(void) ;
extern void __dyc_print_comp_185grid_extd_entry(struct grid_extd_entry __dyc_thistype ) ;
extern struct args_value **__dyc_random_ptr__ptr__comp_148args_value(unsigned int __dyc_exp ) ;
extern struct args_value **__dyc_read_ptr__ptr__comp_148args_value(void) ;
extern void __dyc_print_ptr__ptr__comp_148args_value(struct args_value * const  *__dyc_thistype ) ;
extern cc_t __dyc_random_typdef_cc_t(unsigned int __dyc_exp ) ;
extern cc_t __dyc_read_typdef_cc_t(void) ;
extern void __dyc_print_typdef_cc_t(cc_t __dyc_thistype ) ;
extern struct cmd_entry_flag __dyc_random_comp_252cmd_entry_flag(unsigned int __dyc_exp ) ;
extern struct cmd_entry_flag __dyc_read_comp_252cmd_entry_flag(void) ;
extern void __dyc_print_comp_252cmd_entry_flag(struct cmd_entry_flag __dyc_thistype ) ;
extern void *__dyc_random_ptr__comp_197screen_titles(unsigned int __dyc_exp ) ;
extern void *__dyc_read_ptr__comp_197screen_titles(void) ;
extern void __dyc_print_ptr__comp_197screen_titles(void const   * const  __dyc_thistype ) ;
extern __time_t __dyc_random_typdef___time_t(unsigned int __dyc_exp ) ;
extern __time_t __dyc_read_typdef___time_t(void) ;
extern void __dyc_print_typdef___time_t(__time_t __dyc_thistype ) ;
extern struct client_window __dyc_random_comp_260client_window(unsigned int __dyc_exp ) ;
extern struct client_window __dyc_read_comp_260client_window(void) ;
extern void __dyc_print_comp_260client_window(struct client_window __dyc_thistype ) ;
extern struct layout_cells __dyc_random_comp_226layout_cells(unsigned int __dyc_exp ) ;
extern struct layout_cells __dyc_read_comp_226layout_cells(void) ;
extern void __dyc_print_comp_226layout_cells(struct layout_cells __dyc_thistype ) ;
extern struct grid *__dyc_random_ptr__comp_190grid(unsigned int __dyc_exp ) ;
extern struct grid *__dyc_read_ptr__comp_190grid(void) ;
extern void __dyc_print_ptr__comp_190grid(struct grid  const  *__dyc_thistype ) ;
extern union __anonunion_evcb_cb_union_42 __dyc_random_comp_113__anonunion_evcb_cb_union_42(unsigned int __dyc_exp ) ;
extern union __anonunion_evcb_cb_union_42 __dyc_read_comp_113__anonunion_evcb_cb_union_42(void) ;
extern void __dyc_print_comp_113__anonunion_evcb_cb_union_42(union __anonunion_evcb_cb_union_42 __dyc_thistype ) ;
extern struct status_line_entry __dyc_random_comp_255status_line_entry(unsigned int __dyc_exp ) ;
extern struct status_line_entry __dyc_read_comp_255status_line_entry(void) ;
extern void __dyc_print_comp_255status_line_entry(struct status_line_entry __dyc_thistype ) ;
extern struct mouse_event __dyc_random_comp_163mouse_event(unsigned int __dyc_exp ) ;
extern struct mouse_event __dyc_read_comp_163mouse_event(void) ;
extern void __dyc_print_comp_163mouse_event(struct mouse_event __dyc_thistype ) ;
extern struct window_mode *__dyc_random_ptr__comp_204window_mode(unsigned int __dyc_exp ) ;
extern struct window_mode *__dyc_read_ptr__comp_204window_mode(void) ;
extern void __dyc_print_ptr__comp_204window_mode(struct window_mode  const  *__dyc_thistype ) ;
extern struct grid_extd_entry *__dyc_random_ptr__comp_185grid_extd_entry(unsigned int __dyc_exp ) ;
extern struct grid_extd_entry *__dyc_read_ptr__comp_185grid_extd_entry(void) ;
extern void __dyc_print_ptr__comp_185grid_extd_entry(struct grid_extd_entry  const  *__dyc_thistype ) ;
extern struct grid_line __dyc_random_comp_189grid_line(unsigned int __dyc_exp ) ;
extern struct grid_line __dyc_read_comp_189grid_line(void) ;
extern void __dyc_print_comp_189grid_line(struct grid_line __dyc_thistype ) ;
extern struct cmd_list *__dyc_random_ptr__comp_249cmd_list(unsigned int __dyc_exp ) ;
extern struct cmd_list *__dyc_read_ptr__comp_249cmd_list(void) ;
extern void __dyc_print_ptr__comp_249cmd_list(struct cmd_list  const  *__dyc_thistype ) ;
extern struct session **__dyc_random_ptr__ptr__comp_170session(unsigned int __dyc_exp ) ;
extern struct session **__dyc_read_ptr__ptr__comp_170session(void) ;
extern void __dyc_print_ptr__ptr__comp_170session(struct session * const  *__dyc_thistype ) ;
extern void *__dyc_random_ptr__comp_156control_state(unsigned int __dyc_exp ) ;
extern void *__dyc_read_ptr__comp_156control_state(void) ;
extern void __dyc_print_ptr__comp_156control_state(void const   * const  __dyc_thistype ) ;
extern struct layout_cell __dyc_random_comp_211layout_cell(unsigned int __dyc_exp ) ;
extern struct layout_cell __dyc_read_comp_211layout_cell(void) ;
extern void __dyc_print_comp_211layout_cell(struct layout_cell __dyc_thistype ) ;
extern speed_t __dyc_random_typdef_speed_t(unsigned int __dyc_exp ) ;
extern speed_t __dyc_read_typdef_speed_t(void) ;
extern void __dyc_print_typdef_speed_t(speed_t __dyc_thistype ) ;
extern __pid_t __dyc_random_typdef___pid_t(unsigned int __dyc_exp ) ;
extern __pid_t __dyc_read_typdef___pid_t(void) ;
extern void __dyc_print_typdef___pid_t(__pid_t __dyc_thistype ) ;
extern __u_char __dyc_random_typdef___u_char(unsigned int __dyc_exp ) ;
extern __u_char __dyc_read_typdef___u_char(void) ;
extern void __dyc_print_typdef___u_char(__u_char __dyc_thistype ) ;
extern struct mouse_event *__dyc_random_ptr__comp_163mouse_event(unsigned int __dyc_exp ) ;
extern struct mouse_event *__dyc_read_ptr__comp_163mouse_event(void) ;
extern void __dyc_print_ptr__comp_163mouse_event(struct mouse_event  const  *__dyc_thistype ) ;
extern struct event **__dyc_random_ptr__ptr__comp_106event(unsigned int __dyc_exp ) ;
extern struct event **__dyc_read_ptr__ptr__comp_106event(void) ;
extern void __dyc_print_ptr__ptr__comp_106event(struct event * const  *__dyc_thistype ) ;
extern struct screen_redraw_ctx *__dyc_random_ptr__comp_200screen_redraw_ctx(unsigned int __dyc_exp ) ;
extern struct screen_redraw_ctx *__dyc_read_ptr__comp_200screen_redraw_ctx(void) ;
extern void __dyc_print_ptr__comp_200screen_redraw_ctx(struct screen_redraw_ctx  const  *__dyc_thistype ) ;
extern struct __anonstruct_ev_io_46 __dyc_random_comp_117__anonstruct_ev_io_46(unsigned int __dyc_exp ) ;
extern struct __anonstruct_ev_io_46 __dyc_read_comp_117__anonstruct_ev_io_46(void) ;
extern void __dyc_print_comp_117__anonstruct_ev_io_46(struct __anonstruct_ev_io_46 __dyc_thistype ) ;
extern struct winlink_stack __dyc_random_comp_225winlink_stack(unsigned int __dyc_exp ) ;
extern struct winlink_stack __dyc_read_comp_225winlink_stack(void) ;
extern void __dyc_print_comp_225winlink_stack(struct winlink_stack __dyc_thistype ) ;
extern void *__dyc_random_ptr__comp_153cmdq_list(unsigned int __dyc_exp ) ;
extern void *__dyc_read_ptr__comp_153cmdq_list(void) ;
extern void __dyc_print_ptr__comp_153cmdq_list(void const   * const  __dyc_thistype ) ;
extern struct layout_cell *__dyc_random_ptr__comp_211layout_cell(unsigned int __dyc_exp ) ;
extern struct layout_cell *__dyc_read_ptr__comp_211layout_cell(void) ;
extern void __dyc_print_ptr__comp_211layout_cell(struct layout_cell  const  *__dyc_thistype ) ;
extern void *__dyc_random_ptr__comp_159format_tree(unsigned int __dyc_exp ) ;
extern void *__dyc_read_ptr__comp_159format_tree(void) ;
extern void __dyc_print_ptr__comp_159format_tree(void const   * const  __dyc_thistype ) ;
extern struct __anonstruct_data_57 __dyc_random_comp_188__anonstruct_data_57(unsigned int __dyc_exp ) ;
extern struct __anonstruct_data_57 __dyc_read_comp_188__anonstruct_data_57(void) ;
extern void __dyc_print_comp_188__anonstruct_data_57(struct __anonstruct_data_57 __dyc_thistype ) ;
extern struct __anonstruct_args_78 __dyc_random_comp_254__anonstruct_args_78(unsigned int __dyc_exp ) ;
extern struct __anonstruct_args_78 __dyc_read_comp_254__anonstruct_args_78(void) ;
extern void __dyc_print_comp_254__anonstruct_args_78(struct __anonstruct_args_78 __dyc_thistype ) ;
extern uint8_t __dyc_random_typdef_uint8_t(unsigned int __dyc_exp ) ;
extern uint8_t __dyc_read_typdef_uint8_t(void) ;
extern void __dyc_print_typdef_uint8_t(uint8_t __dyc_thistype ) ;
extern struct __anonstruct_modes_61 __dyc_random_comp_212__anonstruct_modes_61(unsigned int __dyc_exp ) ;
extern struct __anonstruct_modes_61 __dyc_read_comp_212__anonstruct_modes_61(void) ;
extern void __dyc_print_comp_212__anonstruct_modes_61(struct __anonstruct_modes_61 __dyc_thistype ) ;
extern __u_int __dyc_random_typdef___u_int(unsigned int __dyc_exp ) ;
extern __u_int __dyc_read_typdef___u_int(void) ;
extern void __dyc_print_typdef___u_int(__u_int __dyc_thistype ) ;
extern struct key_binding __dyc_random_comp_266key_binding(unsigned int __dyc_exp ) ;
extern struct key_binding __dyc_read_comp_266key_binding(void) ;
extern void __dyc_print_comp_266key_binding(struct key_binding __dyc_thistype ) ;
extern struct key_table __dyc_random_comp_263key_table(unsigned int __dyc_exp ) ;
extern struct key_table __dyc_read_comp_263key_table(void) ;
extern void __dyc_print_comp_263key_table(struct key_table __dyc_thistype ) ;
extern struct termios *__dyc_random_ptr__comp_37termios(unsigned int __dyc_exp ) ;
extern struct termios *__dyc_read_ptr__comp_37termios(void) ;
extern void __dyc_print_ptr__comp_37termios(struct termios  const  *__dyc_thistype ) ;
extern struct __anonstruct_entry_62 __dyc_random_comp_213__anonstruct_entry_62(unsigned int __dyc_exp ) ;
extern struct __anonstruct_entry_62 __dyc_read_comp_213__anonstruct_entry_62(void) ;
extern void __dyc_print_comp_213__anonstruct_entry_62(struct __anonstruct_entry_62 __dyc_thistype ) ;
extern struct __anonstruct_entry_58 __dyc_random_comp_193__anonstruct_entry_58(unsigned int __dyc_exp ) ;
extern struct __anonstruct_entry_58 __dyc_read_comp_193__anonstruct_entry_58(void) ;
extern void __dyc_print_comp_193__anonstruct_entry_58(struct __anonstruct_entry_58 __dyc_thistype ) ;
extern struct __anonstruct_sessions_72 __dyc_random_comp_231__anonstruct_sessions_72(unsigned int __dyc_exp ) ;
extern struct __anonstruct_sessions_72 __dyc_read_comp_231__anonstruct_sessions_72(void) ;
extern void __dyc_print_comp_231__anonstruct_sessions_72(struct __anonstruct_sessions_72 __dyc_thistype ) ;
extern __timezone_ptr_t __dyc_random_typdef___timezone_ptr_t(unsigned int __dyc_exp ) ;
extern __timezone_ptr_t __dyc_read_typdef___timezone_ptr_t(void) ;
extern void __dyc_print_typdef___timezone_ptr_t(__timezone_ptr_t __dyc_thistype ) ;
extern struct __anonstruct_entry_73 __dyc_random_comp_232__anonstruct_entry_73(unsigned int __dyc_exp ) ;
extern struct __anonstruct_entry_73 __dyc_read_comp_232__anonstruct_entry_73(void) ;
extern void __dyc_print_comp_232__anonstruct_entry_73(struct __anonstruct_entry_73 __dyc_thistype ) ;
extern struct key_bindings __dyc_random_comp_268key_bindings(unsigned int __dyc_exp ) ;
extern struct key_bindings __dyc_read_comp_268key_bindings(void) ;
extern void __dyc_print_comp_268key_bindings(struct key_bindings __dyc_thistype ) ;
extern struct key_binding *__dyc_random_ptr__comp_266key_binding(unsigned int __dyc_exp ) ;
extern struct key_binding *__dyc_read_ptr__comp_266key_binding(void) ;
extern void __dyc_print_ptr__comp_266key_binding(struct key_binding  const  *__dyc_thistype ) ;
extern struct __anonstruct_ev_signal_next_49 __dyc_random_comp_120__anonstruct_ev_signal_next_49(unsigned int __dyc_exp ) ;
extern struct __anonstruct_ev_signal_next_49 __dyc_read_comp_120__anonstruct_ev_signal_next_49(void) ;
extern void __dyc_print_comp_120__anonstruct_ev_signal_next_49(struct __anonstruct_ev_signal_next_49 __dyc_thistype ) ;
extern struct __anonstruct_gentry_74 __dyc_random_comp_234__anonstruct_gentry_74(unsigned int __dyc_exp ) ;
extern struct __anonstruct_gentry_74 __dyc_read_comp_234__anonstruct_gentry_74(void) ;
extern void __dyc_print_comp_234__anonstruct_gentry_74(struct __anonstruct_gentry_74 __dyc_thistype ) ;
extern struct timeval *__dyc_random_ptr__comp_4timeval(unsigned int __dyc_exp ) ;
extern struct timeval *__dyc_read_ptr__comp_4timeval(void) ;
extern void __dyc_print_ptr__comp_4timeval(struct timeval  const  * __restrict  __dyc_thistype ) ;
extern struct __anonstruct_entry_75 __dyc_random_comp_235__anonstruct_entry_75(unsigned int __dyc_exp ) ;
extern struct __anonstruct_entry_75 __dyc_read_comp_235__anonstruct_entry_75(void) ;
extern void __dyc_print_comp_235__anonstruct_entry_75(struct __anonstruct_entry_75 __dyc_thistype ) ;
extern struct layout_cell **__dyc_random_ptr__ptr__comp_211layout_cell(unsigned int __dyc_exp ) ;
extern struct layout_cell **__dyc_read_ptr__ptr__comp_211layout_cell(void) ;
extern void __dyc_print_ptr__ptr__comp_211layout_cell(struct layout_cell * const  *__dyc_thistype ) ;
extern struct __anonstruct_entry_79 __dyc_random_comp_259__anonstruct_entry_79(unsigned int __dyc_exp ) ;
extern struct __anonstruct_entry_79 __dyc_read_comp_259__anonstruct_entry_79(void) ;
extern void __dyc_print_comp_259__anonstruct_entry_79(struct __anonstruct_entry_79 __dyc_thistype ) ;
extern struct winlinks __dyc_random_comp_224winlinks(unsigned int __dyc_exp ) ;
extern struct winlinks __dyc_read_comp_224winlinks(void) ;
extern void __dyc_print_comp_224winlinks(struct winlinks __dyc_thistype ) ;
extern struct key_event *__dyc_random_ptr__comp_237key_event(unsigned int __dyc_exp ) ;
extern struct key_event *__dyc_read_ptr__comp_237key_event(void) ;
extern void __dyc_print_ptr__comp_237key_event(struct key_event  const  *__dyc_thistype ) ;
extern struct window_pane_resizes __dyc_random_comp_209window_pane_resizes(unsigned int __dyc_exp ) ;
extern struct window_pane_resizes __dyc_read_comp_209window_pane_resizes(void) ;
extern void __dyc_print_comp_209window_pane_resizes(struct window_pane_resizes __dyc_thistype ) ;
extern struct cmd_entry __dyc_random_comp_253cmd_entry(unsigned int __dyc_exp ) ;
extern struct cmd_entry __dyc_read_comp_253cmd_entry(void) ;
extern void __dyc_print_comp_253cmd_entry(struct cmd_entry __dyc_thistype ) ;
extern void *__dyc_random_ptr__comp_152cmdq_item(unsigned int __dyc_exp ) ;
extern void *__dyc_read_ptr__comp_152cmdq_item(void) ;
extern void __dyc_print_ptr__comp_152cmdq_item(void const   * const  __dyc_thistype ) ;
extern void *__dyc_random_ptr__comp_168screen_write_cline(unsigned int __dyc_exp ) ;
extern void *__dyc_read_ptr__comp_168screen_write_cline(void) ;
extern void __dyc_print_ptr__comp_168screen_write_cline(void const   * const  __dyc_thistype ) ;
extern struct client_files __dyc_random_comp_258client_files(unsigned int __dyc_exp ) ;
extern struct client_files __dyc_read_comp_258client_files(void) ;
extern void __dyc_print_comp_258client_files(struct client_files __dyc_thistype ) ;
extern struct args_tree __dyc_random_comp_248args_tree(unsigned int __dyc_exp ) ;
extern struct args_tree __dyc_read_comp_248args_tree(void) ;
extern void __dyc_print_comp_248args_tree(struct args_tree __dyc_thistype ) ;
extern struct __anonstruct_sentry_69 __dyc_random_comp_223__anonstruct_sentry_69(unsigned int __dyc_exp ) ;
extern struct __anonstruct_sentry_69 __dyc_read_comp_223__anonstruct_sentry_69(void) ;
extern void __dyc_print_comp_223__anonstruct_sentry_69(struct __anonstruct_sentry_69 __dyc_thistype ) ;
extern struct screen *__dyc_random_ptr__comp_198screen(unsigned int __dyc_exp ) ;
extern struct screen *__dyc_read_ptr__comp_198screen(void) ;
extern void __dyc_print_ptr__comp_198screen(struct screen  const  *__dyc_thistype ) ;
extern struct spawn_context __dyc_random_comp_275spawn_context(unsigned int __dyc_exp ) ;
extern struct spawn_context __dyc_read_comp_275spawn_context(void) ;
extern void __dyc_print_comp_275spawn_context(struct spawn_context __dyc_thistype ) ;
extern struct window_mode_entry __dyc_random_comp_203window_mode_entry(unsigned int __dyc_exp ) ;
extern struct window_mode_entry __dyc_read_comp_203window_mode_entry(void) ;
extern void __dyc_print_comp_203window_mode_entry(struct window_mode_entry __dyc_thistype ) ;
extern struct __anonstruct_entry_66 __dyc_random_comp_219__anonstruct_entry_66(unsigned int __dyc_exp ) ;
extern struct __anonstruct_entry_66 __dyc_read_comp_219__anonstruct_entry_66(void) ;
extern void __dyc_print_comp_219__anonstruct_entry_66(struct __anonstruct_entry_66 __dyc_thistype ) ;
extern struct event *__dyc_random_ptr__comp_106event(unsigned int __dyc_exp ) ;
extern struct event *__dyc_read_ptr__comp_106event(void) ;
extern void __dyc_print_ptr__comp_106event(struct event  const  *__dyc_thistype ) ;
extern void *__dyc_random_ptr__comp_172tmuxpeer(unsigned int __dyc_exp ) ;
extern void *__dyc_read_ptr__comp_172tmuxpeer(void) ;
extern void __dyc_print_ptr__comp_172tmuxpeer(void const   * const  __dyc_thistype ) ;
extern void *__dyc_random_ptr__comp_239tty_code(unsigned int __dyc_exp ) ;
extern void *__dyc_read_ptr__comp_239tty_code(void) ;
extern void __dyc_print_ptr__comp_239tty_code(void const   * const  __dyc_thistype ) ;
extern pid_t __dyc_random_typdef_pid_t(unsigned int __dyc_exp ) ;
extern pid_t __dyc_read_typdef_pid_t(void) ;
extern void __dyc_print_typdef_pid_t(pid_t __dyc_thistype ) ;
extern bitstr_t __dyc_random_typdef_bitstr_t(unsigned int __dyc_exp ) ;
extern bitstr_t __dyc_read_typdef_bitstr_t(void) ;
extern void __dyc_print_typdef_bitstr_t(bitstr_t __dyc_thistype ) ;
extern struct args __dyc_random_comp_147args(unsigned int __dyc_exp ) ;
extern struct args __dyc_read_comp_147args(void) ;
extern void __dyc_print_comp_147args(struct args __dyc_thistype ) ;
extern struct client *__dyc_random_ptr__comp_149client(unsigned int __dyc_exp ) ;
extern struct client *__dyc_read_ptr__comp_149client(void) ;
extern void __dyc_print_ptr__comp_149client(struct client  const  *__dyc_thistype ) ;
extern void *__dyc_random_ptr__comp_196screen_sel(unsigned int __dyc_exp ) ;
extern void *__dyc_read_ptr__comp_196screen_sel(void) ;
extern void __dyc_print_ptr__comp_196screen_sel(void const   * const  __dyc_thistype ) ;
extern __u_short __dyc_random_typdef___u_short(unsigned int __dyc_exp ) ;
extern __u_short __dyc_read_typdef___u_short(void) ;
extern void __dyc_print_typdef___u_short(__u_short __dyc_thistype ) ;
extern struct __anonstruct_tree_entry_63 __dyc_random_comp_214__anonstruct_tree_entry_63(unsigned int __dyc_exp ) ;
extern struct __anonstruct_tree_entry_63 __dyc_read_comp_214__anonstruct_tree_entry_63(void) ;
extern void __dyc_print_comp_214__anonstruct_tree_entry_63(struct __anonstruct_tree_entry_63 __dyc_thistype ) ;
extern struct style_ranges __dyc_random_comp_194style_ranges(unsigned int __dyc_exp ) ;
extern struct style_ranges __dyc_read_comp_194style_ranges(void) ;
extern void __dyc_print_comp_194style_ranges(struct style_ranges __dyc_thistype ) ;
extern struct tty_term **__dyc_random_ptr__ptr__comp_240tty_term(unsigned int __dyc_exp ) ;
extern struct tty_term **__dyc_read_ptr__ptr__comp_240tty_term(void) ;
extern void __dyc_print_ptr__ptr__comp_240tty_term(struct tty_term * const  *__dyc_thistype ) ;
extern key_code __dyc_random_typdef_key_code(unsigned int __dyc_exp ) ;
extern key_code __dyc_read_typdef_key_code(void) ;
extern void __dyc_print_typdef_key_code(key_code __dyc_thistype ) ;
extern struct window_pane_resize *__dyc_random_ptr__comp_207window_pane_resize(unsigned int __dyc_exp ) ;
extern struct window_pane_resize *__dyc_read_ptr__comp_207window_pane_resize(void) ;
extern void __dyc_print_ptr__comp_207window_pane_resize(struct window_pane_resize  const  *__dyc_thistype ) ;
extern uint64_t __dyc_random_typdef_uint64_t(unsigned int __dyc_exp ) ;
extern uint64_t __dyc_read_typdef_uint64_t(void) ;
extern void __dyc_print_typdef_uint64_t(uint64_t __dyc_thistype ) ;
extern struct tty_key __dyc_random_comp_238tty_key(unsigned int __dyc_exp ) ;
extern struct tty_key __dyc_read_comp_238tty_key(void) ;
extern void __dyc_print_comp_238tty_key(struct tty_key __dyc_thistype ) ;
extern void *__dyc_random_ptr__comp_157environ(unsigned int __dyc_exp ) ;
extern void *__dyc_read_ptr__comp_157environ(void) ;
extern void __dyc_print_ptr__comp_157environ(void const   * const  __dyc_thistype ) ;
extern bitstr_t *__dyc_random_ptr__typdef_bitstr_t(unsigned int __dyc_exp ) ;
extern bitstr_t *__dyc_read_ptr__typdef_bitstr_t(void) ;
extern void __dyc_print_ptr__typdef_bitstr_t(bitstr_t const   *__dyc_thistype ) ;
extern struct client **__dyc_random_ptr__ptr__comp_149client(unsigned int __dyc_exp ) ;
extern struct client **__dyc_read_ptr__ptr__comp_149client(void) ;
extern void __dyc_print_ptr__ptr__comp_149client(struct client * const  *__dyc_thistype ) ;
extern struct session_group *__dyc_random_ptr__comp_230session_group(unsigned int __dyc_exp ) ;
extern struct session_group *__dyc_read_ptr__comp_230session_group(void) ;
extern void __dyc_print_ptr__comp_230session_group(struct session_group  const  *__dyc_thistype ) ;
extern struct utf8_data *__dyc_random_ptr__comp_183utf8_data(unsigned int __dyc_exp ) ;
extern struct utf8_data *__dyc_read_ptr__comp_183utf8_data(void) ;
extern void __dyc_print_ptr__comp_183utf8_data(struct utf8_data  const  *__dyc_thistype ) ;
extern struct client_file __dyc_random_comp_257client_file(unsigned int __dyc_exp ) ;
extern struct client_file __dyc_read_comp_257client_file(void) ;
extern void __dyc_print_comp_257client_file(struct client_file __dyc_thistype ) ;
extern void *__dyc_random_ptr__comp_155cmds(unsigned int __dyc_exp ) ;
extern void *__dyc_read_ptr__comp_155cmds(void) ;
extern void __dyc_print_ptr__comp_155cmds(void const   * const  __dyc_thistype ) ;
extern char **__dyc_random_ptr__ptr__char(unsigned int __dyc_exp ) ;
extern char **__dyc_read_ptr__ptr__char(void) ;
extern void __dyc_print_ptr__ptr__char(char * const  *__dyc_thistype ) ;
