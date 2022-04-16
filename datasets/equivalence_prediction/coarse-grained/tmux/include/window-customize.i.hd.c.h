#line 31 "/usr/include/x86_64-linux-gnu/bits/types.h"
typedef unsigned char __u_char;
#line 32 "/usr/include/x86_64-linux-gnu/bits/types.h"
typedef unsigned short __u_short;
#line 33 "/usr/include/x86_64-linux-gnu/bits/types.h"
typedef unsigned int __u_int;
#line 41 "/usr/include/x86_64-linux-gnu/bits/types.h"
typedef int __int32_t;
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
struct __anonstruct_evcb_active_next_39 {
   struct event_callback *tqe_next ;
   struct event_callback **tqe_prev ;
};
#line 107 "/usr/local/include/event2/event_struct.h"
union __anonunion_evcb_cb_union_40 {
   void (*evcb_callback)(int  , short  , void * ) ;
   void (*evcb_selfcb)(struct event_callback * , void * ) ;
   void (*evcb_evfinalize)(struct event * , void * ) ;
   void (*evcb_cbfinalize)(struct event_callback * , void * ) ;
};
#line 107 "/usr/local/include/event2/event_struct.h"
struct event_callback {
   struct __anonstruct_evcb_active_next_39 evcb_active_next ;
   short evcb_flags ;
   uint8_t evcb_pri ;
   uint8_t evcb_closure ;
   union __anonunion_evcb_cb_union_40 evcb_cb_union ;
   void *evcb_arg ;
};
#line 122
struct event_base;
#line 123 "/usr/local/include/event2/event_struct.h"
struct __anonstruct_ev_next_with_common_timeout_42 {
   struct event *tqe_next ;
   struct event **tqe_prev ;
};
#line 123 "/usr/local/include/event2/event_struct.h"
union __anonunion_ev_timeout_pos_41 {
   struct __anonstruct_ev_next_with_common_timeout_42 ev_next_with_common_timeout ;
   int min_heap_idx ;
};
#line 123 "/usr/local/include/event2/event_struct.h"
struct __anonstruct_ev_io_next_45 {
   struct event *le_next ;
   struct event **le_prev ;
};
#line 123 "/usr/local/include/event2/event_struct.h"
struct __anonstruct_ev_io_44 {
   struct __anonstruct_ev_io_next_45 ev_io_next ;
   struct timeval ev_timeout ;
};
#line 123 "/usr/local/include/event2/event_struct.h"
struct __anonstruct_ev_signal_next_47 {
   struct event *le_next ;
   struct event **le_prev ;
};
#line 123 "/usr/local/include/event2/event_struct.h"
struct __anonstruct_ev_signal_46 {
   struct __anonstruct_ev_signal_next_47 ev_signal_next ;
   short ev_ncalls ;
   short *ev_pncalls ;
};
#line 123 "/usr/local/include/event2/event_struct.h"
union __anonunion_ev__43 {
   struct __anonstruct_ev_io_44 ev_io ;
   struct __anonstruct_ev_signal_46 ev_signal ;
};
#line 123 "/usr/local/include/event2/event_struct.h"
struct event {
   struct event_callback ev_evcallback ;
   union __anonunion_ev_timeout_pos_41 ev_timeout_pos ;
   int ev_fd ;
   struct event_base *ev_base ;
   union __anonunion_ev__43 ev_ ;
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
#line 54
struct mode_tree_data;
#line 54
struct mode_tree_data;
#line 55
struct mouse_event;
#line 55
struct mouse_event;
#line 56
struct options;
#line 56
struct options;
#line 57
struct options_array_item;
#line 57
struct options_array_item;
#line 58
struct options_entry;
#line 58
struct options_entry;
#line 59
struct screen_write_citem;
#line 59
struct screen_write_citem;
#line 60
struct screen_write_cline;
#line 60
struct screen_write_cline;
#line 61
struct screen_write_ctx;
#line 61
struct screen_write_ctx;
#line 62
struct session;
#line 62
struct session;
#line 63
struct tty_ctx;
#line 63
struct tty_ctx;
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
struct __anonstruct_data_55 {
   u_char attr ;
   u_char fg ;
   u_char bg ;
   u_char data ;
};
#line 708 "tmux.h"
union __anonunion____missing_field_name_54 {
   u_int offset ;
   struct __anonstruct_data_55 data ;
};
#line 708 "tmux.h"
struct grid_cell_entry {
   u_char flags ;
   union __anonunion____missing_field_name_54 __annonCompField1 ;
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
#line 756
enum style_align {
    STYLE_ALIGN_DEFAULT = 0,
    STYLE_ALIGN_LEFT = 1,
    STYLE_ALIGN_CENTRE = 2,
    STYLE_ALIGN_RIGHT = 3,
    STYLE_ALIGN_ABSOLUTE_CENTRE = 4
} ;
#line 765
enum style_list {
    STYLE_LIST_OFF = 0,
    STYLE_LIST_ON = 1,
    STYLE_LIST_FOCUS = 2,
    STYLE_LIST_LEFT_MARKER = 3,
    STYLE_LIST_RIGHT_MARKER = 4
} ;
#line 774
enum style_range_type {
    STYLE_RANGE_NONE = 0,
    STYLE_RANGE_LEFT = 1,
    STYLE_RANGE_RIGHT = 2,
    STYLE_RANGE_WINDOW = 3
} ;
#line 780 "tmux.h"
struct __anonstruct_entry_56 {
   struct style_range *tqe_next ;
   struct style_range **tqe_prev ;
};
#line 780 "tmux.h"
struct style_range {
   enum style_range_type type ;
   u_int argument ;
   u_int start ;
   u_int end ;
   struct __anonstruct_entry_56 entry ;
};
#line 789 "tmux.h"
struct style_ranges {
   struct style_range *tqh_first ;
   struct style_range **tqh_last ;
};
#line 792
enum style_default_type {
    STYLE_DEFAULT_BASE = 0,
    STYLE_DEFAULT_PUSH = 1,
    STYLE_DEFAULT_POP = 2
} ;
#line 799 "tmux.h"
struct style {
   struct grid_cell gc ;
   int ignore ;
   int fill ;
   enum style_align align ;
   enum style_list list ;
   enum style_range_type range_type ;
   u_int range_argument ;
   enum style_default_type default_type ;
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
#line 849 "tmux.h"
struct screen_write_ctx {
   struct window_pane *wp ;
   struct screen *s ;
   int flags ;
   void (*init_ctx_cb)(struct screen_write_ctx * , struct tty_ctx * ) ;
   void *arg ;
   struct screen_write_citem *item ;
   u_int scrolled ;
   u_int bg ;
};
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
#line 887 "tmux.h"
struct menu_item {
   char *name ;
   key_code key ;
   char *command ;
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
struct __anonstruct_entry_57 {
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
   struct __anonstruct_entry_57 entry ;
};
#line 941 "tmux.h"
struct window_pane_offset {
   size_t used ;
};
#line 946 "tmux.h"
struct __anonstruct_entry_58 {
   struct window_pane_resize *tqe_next ;
   struct window_pane_resize **tqe_prev ;
};
#line 946 "tmux.h"
struct window_pane_resize {
   u_int sx ;
   u_int sy ;
   u_int osx ;
   u_int osy ;
   struct __anonstruct_entry_58 entry ;
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
struct __anonstruct_modes_59 {
   struct window_mode_entry *tqh_first ;
   struct window_mode_entry **tqh_last ;
};
#line 958 "tmux.h"
struct __anonstruct_entry_60 {
   struct window_pane *tqe_next ;
   struct window_pane **tqe_prev ;
};
#line 958 "tmux.h"
struct __anonstruct_tree_entry_61 {
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
   struct __anonstruct_modes_59 modes ;
   char *searchstr ;
   int searchregex ;
   int border_gc_set ;
   struct grid_cell border_gc ;
   struct __anonstruct_entry_60 entry ;
   struct __anonstruct_tree_entry_61 tree_entry ;
};
#line 1037 "tmux.h"
struct window_panes {
   struct window_pane *tqh_first ;
   struct window_pane **tqh_last ;
};
#line 1041 "tmux.h"
struct __anonstruct_alerts_entry_62 {
   struct window *tqe_next ;
   struct window **tqe_prev ;
};
#line 1041 "tmux.h"
struct __anonstruct_winlinks_63 {
   struct winlink *tqh_first ;
   struct winlink **tqh_last ;
};
#line 1041 "tmux.h"
struct __anonstruct_entry_64 {
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
   struct __anonstruct_alerts_entry_62 alerts_entry ;
   struct options *options ;
   u_int references ;
   struct __anonstruct_winlinks_63 winlinks ;
   struct __anonstruct_entry_64 entry ;
};
#line 1095 "tmux.h"
struct __anonstruct_entry_65 {
   struct winlink *rbe_left ;
   struct winlink *rbe_right ;
   struct winlink *rbe_parent ;
   int rbe_color ;
};
#line 1095 "tmux.h"
struct __anonstruct_wentry_66 {
   struct winlink *tqe_next ;
   struct winlink **tqe_prev ;
};
#line 1095 "tmux.h"
struct __anonstruct_sentry_67 {
   struct winlink *tqe_next ;
   struct winlink **tqe_prev ;
};
#line 1095 "tmux.h"
struct winlink {
   int idx ;
   struct session *session ;
   struct window *window ;
   int flags ;
   struct __anonstruct_entry_65 entry ;
   struct __anonstruct_wentry_66 wentry ;
   struct __anonstruct_sentry_67 sentry ;
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
struct __anonstruct_entry_68 {
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
   struct __anonstruct_entry_68 entry ;
};
#line 1179 "tmux.h"
struct __anonstruct_gentry_72 {
   struct session *tqe_next ;
   struct session **tqe_prev ;
};
#line 1179 "tmux.h"
struct __anonstruct_entry_73 {
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
   struct __anonstruct_gentry_72 gentry ;
   struct __anonstruct_entry_73 entry ;
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
struct __anonstruct_entry_74 {
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
   struct __anonstruct_entry_74 entry ;
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
#line 1375 "tmux.h"
struct tty_ctx {
   struct screen *s ;
   void (*redraw_cb)(struct tty_ctx  const  * ) ;
   int (*set_client_cb)(struct tty_ctx * , struct client * ) ;
   void *arg ;
   struct grid_cell *cell ;
   int wrapped ;
   u_int num ;
   void *ptr ;
   u_int ocx ;
   u_int ocy ;
   u_int orupper ;
   u_int orlower ;
   u_int xoff ;
   u_int yoff ;
   u_int rxoff ;
   u_int ryoff ;
   u_int sx ;
   u_int sy ;
   u_int bg ;
   struct grid_cell defaults ;
   int *palette ;
   int bigger ;
   u_int wox ;
   u_int woy ;
   u_int wsx ;
   u_int wsy ;
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
struct __anonstruct_entry_77 {
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
   struct __anonstruct_entry_77 entry ;
};
#line 1590 "tmux.h"
struct client_files {
   struct client_file *rbh_root ;
};
#line 1593 "tmux.h"
struct __anonstruct_entry_78 {
   struct client_window *rbe_left ;
   struct client_window *rbe_right ;
   struct client_window *rbe_parent ;
   int rbe_color ;
};
#line 1593 "tmux.h"
struct client_window {
   u_int window ;
   struct window_pane *pane ;
   struct __anonstruct_entry_78 entry ;
};
#line 1598 "tmux.h"
struct client_windows {
   struct client_window *rbh_root ;
};
#line 1608
enum __anonenum_exit_type_79 {
    CLIENT_EXIT_RETURN = 0,
    CLIENT_EXIT_SHUTDOWN = 1,
    CLIENT_EXIT_DETACH = 2
} ;
#line 1608
struct key_table;
#line 1608
enum __anonenum_prompt_mode_80 {
    PROMPT_ENTRY = 0,
    PROMPT_COMMAND = 1
} ;
#line 1608 "tmux.h"
struct __anonstruct_entry_81 {
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
   enum __anonenum_exit_type_79 exit_type ;
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
   enum __anonenum_prompt_mode_80 prompt_mode ;
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
   struct __anonstruct_entry_81 entry ;
};
#line 1776 "tmux.h"
struct __anonstruct_entry_82 {
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
   struct __anonstruct_entry_82 entry ;
};
#line 1786 "tmux.h"
struct key_bindings {
   struct key_binding *rbh_root ;
};
#line 1788 "tmux.h"
struct __anonstruct_entry_83 {
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
   struct __anonstruct_entry_83 entry ;
};
#line 1800 "tmux.h"
struct options_array {
   struct options_array_item *rbh_root ;
};
#line 1801 "tmux.h"
union options_value {
   char *string ;
   long long number ;
   struct style style ;
   struct options_array array ;
   struct cmd_list *cmdlist ;
};
#line 1810
enum options_table_type {
    OPTIONS_TABLE_STRING = 0,
    OPTIONS_TABLE_NUMBER = 1,
    OPTIONS_TABLE_KEY = 2,
    OPTIONS_TABLE_COLOUR = 3,
    OPTIONS_TABLE_FLAG = 4,
    OPTIONS_TABLE_CHOICE = 5,
    OPTIONS_TABLE_COMMAND = 6
} ;
#line 1830 "tmux.h"
struct options_table_entry {
   char *name ;
   char *alternative_name ;
   enum options_table_type type ;
   int scope ;
   int flags ;
   u_int minimum ;
   u_int maximum ;
   char **choices ;
   char *default_str ;
   long long default_num ;
   char **default_arr ;
   char *separator ;
   char *pattern ;
   char *text ;
   char *unit ;
};
#line 1899 "tmux.h"
struct mode_tree_sort_criteria {
   u_int field ;
   int reversed ;
};
#line 1976
struct format_tree;
#line 2908
struct mode_tree_item;
#line 68 "window-customize.c"
enum window_customize_scope {
    WINDOW_CUSTOMIZE_NONE = 0,
    WINDOW_CUSTOMIZE_KEY = 1,
    WINDOW_CUSTOMIZE_SERVER = 2,
    WINDOW_CUSTOMIZE_GLOBAL_SESSION = 3,
    WINDOW_CUSTOMIZE_SESSION = 4,
    WINDOW_CUSTOMIZE_GLOBAL_WINDOW = 5,
    WINDOW_CUSTOMIZE_WINDOW = 6,
    WINDOW_CUSTOMIZE_PANE = 7
} ;
#line 79
enum window_customize_change {
    WINDOW_CUSTOMIZE_UNSET = 0,
    WINDOW_CUSTOMIZE_RESET = 1
} ;
#line 84
struct window_customize_modedata;
#line 84 "window-customize.c"
struct window_customize_itemdata {
   struct window_customize_modedata *data ;
   enum window_customize_scope scope ;
   char *table ;
   key_code key ;
   struct options *oo ;
   char *name ;
   int idx ;
};
#line 96 "window-customize.c"
struct window_customize_modedata {
   struct window_pane *wp ;
   int dead ;
   int references ;
   struct mode_tree_data *data ;
   char *format ;
   int hide_global ;
   struct window_customize_itemdata **item_list ;
   u_int item_size ;
   struct cmd_find_state fs ;
   enum window_customize_change change ;
};
extern struct __anonstruct_alerts_entry_62 __dyc_random_comp_211__anonstruct_alerts_entry_62(unsigned int __dyc_exp ) ;
extern struct __anonstruct_alerts_entry_62 __dyc_read_comp_211__anonstruct_alerts_entry_62(void) ;
extern void __dyc_print_comp_211__anonstruct_alerts_entry_62(struct __anonstruct_alerts_entry_62 __dyc_thistype ) ;
extern u_short __dyc_random_typdef_u_short(unsigned int __dyc_exp ) ;
extern u_short __dyc_read_typdef_u_short(void) ;
extern void __dyc_print_typdef_u_short(u_short __dyc_thistype ) ;
extern struct window **__dyc_random_ptr__ptr__comp_204window(unsigned int __dyc_exp ) ;
extern struct window **__dyc_read_ptr__ptr__comp_204window(void) ;
extern void __dyc_print_ptr__ptr__comp_204window(struct window * const  *__dyc_thistype ) ;
extern void *__dyc_random_ptr__comp_166tmuxpeer(unsigned int __dyc_exp ) ;
extern void *__dyc_read_ptr__comp_166tmuxpeer(void) ;
extern void __dyc_print_ptr__comp_166tmuxpeer(void const   * const  __dyc_thistype ) ;
extern struct window_pane_resize *__dyc_random_ptr__comp_201window_pane_resize(unsigned int __dyc_exp ) ;
extern struct window_pane_resize *__dyc_read_ptr__comp_201window_pane_resize(void) ;
extern void __dyc_print_ptr__comp_201window_pane_resize(struct window_pane_resize  const  *__dyc_thistype ) ;
extern uint64_t *__dyc_random_ptr__typdef_uint64_t(unsigned int __dyc_exp ) ;
extern uint64_t *__dyc_read_ptr__typdef_uint64_t(void) ;
extern void __dyc_print_ptr__typdef_uint64_t(uint64_t const   *__dyc_thistype ) ;
extern struct cmd_parse_input __dyc_random_comp_245cmd_parse_input(unsigned int __dyc_exp ) ;
extern struct cmd_parse_input __dyc_read_comp_245cmd_parse_input(void) ;
extern void __dyc_print_comp_245cmd_parse_input(struct cmd_parse_input __dyc_thistype ) ;
extern struct client_file *__dyc_random_ptr__comp_251client_file(unsigned int __dyc_exp ) ;
extern struct client_file *__dyc_read_ptr__comp_251client_file(void) ;
extern void __dyc_print_ptr__comp_251client_file(struct client_file  const  *__dyc_thistype ) ;
extern struct window_mode *__dyc_random_ptr__comp_198window_mode(unsigned int __dyc_exp ) ;
extern struct window_mode *__dyc_read_ptr__comp_198window_mode(void) ;
extern void __dyc_print_ptr__comp_198window_mode(struct window_mode  const  *__dyc_thistype ) ;
extern u_int __dyc_random_typdef_u_int(unsigned int __dyc_exp ) ;
extern u_int __dyc_read_typdef_u_int(void) ;
extern void __dyc_print_typdef_u_int(u_int __dyc_thistype ) ;
extern struct mode_tree_sort_criteria *__dyc_random_ptr__comp_270mode_tree_sort_criteria(unsigned int __dyc_exp ) ;
extern struct mode_tree_sort_criteria *__dyc_read_ptr__comp_270mode_tree_sort_criteria(void) ;
extern void __dyc_print_ptr__comp_270mode_tree_sort_criteria(struct mode_tree_sort_criteria  const  *__dyc_thistype ) ;
extern struct screen_write_ctx *__dyc_random_ptr__comp_163screen_write_ctx(unsigned int __dyc_exp ) ;
extern struct screen_write_ctx *__dyc_read_ptr__comp_163screen_write_ctx(void) ;
extern void __dyc_print_ptr__comp_163screen_write_ctx(struct screen_write_ctx  const  *__dyc_thistype ) ;
extern struct window_pane __dyc_random_comp_193window_pane(unsigned int __dyc_exp ) ;
extern struct window_pane __dyc_read_comp_193window_pane(void) ;
extern void __dyc_print_comp_193window_pane(struct window_pane __dyc_thistype ) ;
extern struct window_customize_itemdata *__dyc_random_ptr__comp_274window_customize_itemdata(unsigned int __dyc_exp ) ;
extern struct window_customize_itemdata *__dyc_read_ptr__comp_274window_customize_itemdata(void) ;
extern void __dyc_print_ptr__comp_274window_customize_itemdata(struct window_customize_itemdata  const  *__dyc_thistype ) ;
extern struct __anonstruct_ev_next_with_common_timeout_42 __dyc_random_comp_109__anonstruct_ev_next_with_common_timeout_42(unsigned int __dyc_exp ) ;
extern struct __anonstruct_ev_next_with_common_timeout_42 __dyc_read_comp_109__anonstruct_ev_next_with_common_timeout_42(void) ;
extern void __dyc_print_comp_109__anonstruct_ev_next_with_common_timeout_42(struct __anonstruct_ev_next_with_common_timeout_42 __dyc_thistype ) ;
extern struct tty_term **__dyc_random_ptr__ptr__comp_234tty_term(unsigned int __dyc_exp ) ;
extern struct tty_term **__dyc_read_ptr__ptr__comp_234tty_term(void) ;
extern void __dyc_print_ptr__ptr__comp_234tty_term(struct tty_term * const  *__dyc_thistype ) ;
extern struct __anonstruct_gentry_72 __dyc_random_comp_228__anonstruct_gentry_72(unsigned int __dyc_exp ) ;
extern struct __anonstruct_gentry_72 __dyc_read_comp_228__anonstruct_gentry_72(void) ;
extern void __dyc_print_comp_228__anonstruct_gentry_72(struct __anonstruct_gentry_72 __dyc_thistype ) ;
extern struct termios *__dyc_random_ptr__comp_44termios(unsigned int __dyc_exp ) ;
extern struct termios *__dyc_read_ptr__comp_44termios(void) ;
extern void __dyc_print_ptr__comp_44termios(struct termios  const  *__dyc_thistype ) ;
extern struct window_pane_resize **__dyc_random_ptr__ptr__comp_201window_pane_resize(unsigned int __dyc_exp ) ;
extern struct window_pane_resize **__dyc_read_ptr__ptr__comp_201window_pane_resize(void) ;
extern void __dyc_print_ptr__ptr__comp_201window_pane_resize(struct window_pane_resize * const  *__dyc_thistype ) ;
extern struct grid_cell_entry __dyc_random_comp_180grid_cell_entry(unsigned int __dyc_exp ) ;
extern struct grid_cell_entry __dyc_read_comp_180grid_cell_entry(void) ;
extern void __dyc_print_comp_180grid_cell_entry(struct grid_cell_entry __dyc_thistype ) ;
extern u_char __dyc_random_typdef_u_char(unsigned int __dyc_exp ) ;
extern u_char __dyc_read_typdef_u_char(void) ;
extern void __dyc_print_typdef_u_char(u_char __dyc_thistype ) ;
extern struct cmd_parse_input *__dyc_random_ptr__comp_245cmd_parse_input(unsigned int __dyc_exp ) ;
extern struct cmd_parse_input *__dyc_read_ptr__comp_245cmd_parse_input(void) ;
extern void __dyc_print_ptr__comp_245cmd_parse_input(struct cmd_parse_input  const  *__dyc_thistype ) ;
extern int *__dyc_random_ptr__int(unsigned int __dyc_exp ) ;
extern int *__dyc_read_ptr__int(void) ;
extern void __dyc_print_ptr__int(int const   *__dyc_thistype ) ;
extern size_t __dyc_random_typdef_size_t(unsigned int __dyc_exp ) ;
extern size_t __dyc_read_typdef_size_t(void) ;
extern void __dyc_print_typdef_size_t(size_t __dyc_thistype ) ;
extern struct __anonstruct_evcb_active_next_39 __dyc_random_comp_106__anonstruct_evcb_active_next_39(unsigned int __dyc_exp ) ;
extern struct __anonstruct_evcb_active_next_39 __dyc_read_comp_106__anonstruct_evcb_active_next_39(void) ;
extern void __dyc_print_comp_106__anonstruct_evcb_active_next_39(struct __anonstruct_evcb_active_next_39 __dyc_thistype ) ;
extern struct window_pane *__dyc_random_ptr__comp_193window_pane(unsigned int __dyc_exp ) ;
extern struct window_pane *__dyc_read_ptr__comp_193window_pane(void) ;
extern void __dyc_print_ptr__comp_193window_pane(struct window_pane  const  *__dyc_thistype ) ;
extern struct args __dyc_random_comp_141args(unsigned int __dyc_exp ) ;
extern struct args __dyc_read_comp_141args(void) ;
extern void __dyc_print_comp_141args(struct args __dyc_thistype ) ;
extern tcflag_t __dyc_random_typdef_tcflag_t(unsigned int __dyc_exp ) ;
extern tcflag_t __dyc_read_typdef_tcflag_t(void) ;
extern void __dyc_print_typdef_tcflag_t(tcflag_t __dyc_thistype ) ;
extern struct cmd_parse_result *__dyc_random_ptr__comp_244cmd_parse_result(unsigned int __dyc_exp ) ;
extern struct cmd_parse_result *__dyc_read_ptr__comp_244cmd_parse_result(void) ;
extern void __dyc_print_ptr__comp_244cmd_parse_result(struct cmd_parse_result  const  *__dyc_thistype ) ;
extern void *__dyc_random_ptr__comp_147cmdq_list(unsigned int __dyc_exp ) ;
extern void *__dyc_read_ptr__comp_147cmdq_list(void) ;
extern void __dyc_print_ptr__comp_147cmdq_list(void const   * const  __dyc_thistype ) ;
extern struct __anonstruct_entry_58 __dyc_random_comp_202__anonstruct_entry_58(unsigned int __dyc_exp ) ;
extern struct __anonstruct_entry_58 __dyc_read_comp_202__anonstruct_entry_58(void) ;
extern void __dyc_print_comp_202__anonstruct_entry_58(struct __anonstruct_entry_58 __dyc_thistype ) ;
extern struct style __dyc_random_comp_189style(unsigned int __dyc_exp ) ;
extern struct style __dyc_read_comp_189style(void) ;
extern void __dyc_print_comp_189style(struct style __dyc_thistype ) ;
extern struct session **__dyc_random_ptr__ptr__comp_164session(unsigned int __dyc_exp ) ;
extern struct session **__dyc_read_ptr__ptr__comp_164session(void) ;
extern void __dyc_print_ptr__ptr__comp_164session(struct session * const  *__dyc_thistype ) ;
extern void *__dyc_random_ptr__comp_273mode_tree_item(unsigned int __dyc_exp ) ;
extern void *__dyc_read_ptr__comp_273mode_tree_item(void) ;
extern void __dyc_print_ptr__comp_273mode_tree_item(void const   * const  __dyc_thistype ) ;
extern struct __anonstruct_entry_68 __dyc_random_comp_221__anonstruct_entry_68(unsigned int __dyc_exp ) ;
extern struct __anonstruct_entry_68 __dyc_read_comp_221__anonstruct_entry_68(void) ;
extern void __dyc_print_comp_221__anonstruct_entry_68(struct __anonstruct_entry_68 __dyc_thistype ) ;
extern struct style_range __dyc_random_comp_186style_range(unsigned int __dyc_exp ) ;
extern struct style_range __dyc_read_comp_186style_range(void) ;
extern void __dyc_print_comp_186style_range(struct style_range __dyc_thistype ) ;
extern struct __anonstruct_sentry_67 __dyc_random_comp_217__anonstruct_sentry_67(unsigned int __dyc_exp ) ;
extern struct __anonstruct_sentry_67 __dyc_read_comp_217__anonstruct_sentry_67(void) ;
extern void __dyc_print_comp_217__anonstruct_sentry_67(struct __anonstruct_sentry_67 __dyc_thistype ) ;
extern struct grid_line __dyc_random_comp_183grid_line(unsigned int __dyc_exp ) ;
extern struct grid_line __dyc_read_comp_183grid_line(void) ;
extern void __dyc_print_comp_183grid_line(struct grid_line __dyc_thistype ) ;
extern struct grid_cell_entry *__dyc_random_ptr__comp_180grid_cell_entry(unsigned int __dyc_exp ) ;
extern struct grid_cell_entry *__dyc_read_ptr__comp_180grid_cell_entry(void) ;
extern void __dyc_print_ptr__comp_180grid_cell_entry(struct grid_cell_entry  const  *__dyc_thistype ) ;
extern struct event_callback *__dyc_random_ptr__comp_105event_callback(unsigned int __dyc_exp ) ;
extern struct event_callback *__dyc_read_ptr__comp_105event_callback(void) ;
extern void __dyc_print_ptr__comp_105event_callback(struct event_callback  const  *__dyc_thistype ) ;
extern struct window_pane_offset __dyc_random_comp_200window_pane_offset(unsigned int __dyc_exp ) ;
extern struct window_pane_offset __dyc_read_comp_200window_pane_offset(void) ;
extern void __dyc_print_comp_200window_pane_offset(struct window_pane_offset __dyc_thistype ) ;
extern struct __anonstruct_entry_82 __dyc_random_comp_261__anonstruct_entry_82(unsigned int __dyc_exp ) ;
extern struct __anonstruct_entry_82 __dyc_read_comp_261__anonstruct_entry_82(void) ;
extern void __dyc_print_comp_261__anonstruct_entry_82(struct __anonstruct_entry_82 __dyc_thistype ) ;
extern struct cmd_find_state *__dyc_random_ptr__comp_145cmd_find_state(unsigned int __dyc_exp ) ;
extern struct cmd_find_state *__dyc_read_ptr__comp_145cmd_find_state(void) ;
extern void __dyc_print_ptr__comp_145cmd_find_state(struct cmd_find_state  const  *__dyc_thistype ) ;
extern struct screen *__dyc_random_ptr__comp_192screen(unsigned int __dyc_exp ) ;
extern struct screen *__dyc_read_ptr__comp_192screen(void) ;
extern void __dyc_print_ptr__comp_192screen(struct screen  const  *__dyc_thistype ) ;
extern struct bufferevent __dyc_random_comp_123bufferevent(unsigned int __dyc_exp ) ;
extern struct bufferevent __dyc_read_comp_123bufferevent(void) ;
extern void __dyc_print_comp_123bufferevent(struct bufferevent __dyc_thistype ) ;
extern struct event __dyc_random_comp_100event(unsigned int __dyc_exp ) ;
extern struct event __dyc_read_comp_100event(void) ;
extern void __dyc_print_comp_100event(struct event __dyc_thistype ) ;
extern struct layout_cells __dyc_random_comp_220layout_cells(unsigned int __dyc_exp ) ;
extern struct layout_cells __dyc_read_comp_220layout_cells(void) ;
extern void __dyc_print_comp_220layout_cells(struct layout_cells __dyc_thistype ) ;
extern union __anonunion_ev__43 __dyc_random_comp_110__anonunion_ev__43(unsigned int __dyc_exp ) ;
extern union __anonunion_ev__43 __dyc_read_comp_110__anonunion_ev__43(void) ;
extern void __dyc_print_comp_110__anonunion_ev__43(union __anonunion_ev__43 __dyc_thistype ) ;
extern void *__dyc_random_ptr__comp_99event_base(unsigned int __dyc_exp ) ;
extern void *__dyc_read_ptr__comp_99event_base(void) ;
extern void __dyc_print_ptr__comp_99event_base(void const   * const  __dyc_thistype ) ;
extern struct style_ranges __dyc_random_comp_188style_ranges(unsigned int __dyc_exp ) ;
extern struct style_ranges __dyc_read_comp_188style_ranges(void) ;
extern void __dyc_print_comp_188style_ranges(struct style_ranges __dyc_thistype ) ;
extern struct status_line __dyc_random_comp_250status_line(unsigned int __dyc_exp ) ;
extern struct status_line __dyc_read_comp_250status_line(void) ;
extern void __dyc_print_comp_250status_line(struct status_line __dyc_thistype ) ;
extern struct tty_key __dyc_random_comp_232tty_key(unsigned int __dyc_exp ) ;
extern struct tty_key __dyc_read_comp_232tty_key(void) ;
extern void __dyc_print_comp_232tty_key(struct tty_key __dyc_thistype ) ;
extern void *__dyc_random_ptr__comp_151environ(unsigned int __dyc_exp ) ;
extern void *__dyc_read_ptr__comp_151environ(void) ;
extern void __dyc_print_ptr__comp_151environ(void const   * const  __dyc_thistype ) ;
extern struct style_range *__dyc_random_ptr__comp_186style_range(unsigned int __dyc_exp ) ;
extern struct style_range *__dyc_read_ptr__comp_186style_range(void) ;
extern void __dyc_print_ptr__comp_186style_range(struct style_range  const  *__dyc_thistype ) ;
extern u_int *__dyc_random_ptr__typdef_u_int(unsigned int __dyc_exp ) ;
extern u_int *__dyc_read_ptr__typdef_u_int(void) ;
extern void __dyc_print_ptr__typdef_u_int(u_int const   *__dyc_thistype ) ;
extern struct key_table __dyc_random_comp_257key_table(unsigned int __dyc_exp ) ;
extern struct key_table __dyc_read_comp_257key_table(void) ;
extern void __dyc_print_comp_257key_table(struct key_table __dyc_thistype ) ;
extern struct event_callback **__dyc_random_ptr__ptr__comp_105event_callback(unsigned int __dyc_exp ) ;
extern struct event_callback **__dyc_read_ptr__ptr__comp_105event_callback(void) ;
extern void __dyc_print_ptr__ptr__comp_105event_callback(struct event_callback * const  *__dyc_thistype ) ;
extern struct __anonstruct_entry_83 __dyc_random_comp_263__anonstruct_entry_83(unsigned int __dyc_exp ) ;
extern struct __anonstruct_entry_83 __dyc_read_comp_263__anonstruct_entry_83(void) ;
extern void __dyc_print_comp_263__anonstruct_entry_83(struct __anonstruct_entry_83 __dyc_thistype ) ;
extern union __anonunion_evcb_cb_union_40 __dyc_random_comp_107__anonunion_evcb_cb_union_40(unsigned int __dyc_exp ) ;
extern union __anonunion_evcb_cb_union_40 __dyc_read_comp_107__anonunion_evcb_cb_union_40(void) ;
extern void __dyc_print_comp_107__anonunion_evcb_cb_union_40(union __anonunion_evcb_cb_union_40 __dyc_thistype ) ;
extern struct screen **__dyc_random_ptr__ptr__comp_192screen(unsigned int __dyc_exp ) ;
extern struct screen **__dyc_read_ptr__ptr__comp_192screen(void) ;
extern void __dyc_print_ptr__ptr__comp_192screen(struct screen * const  *__dyc_thistype ) ;
extern struct bufferevent *__dyc_random_ptr__comp_123bufferevent(unsigned int __dyc_exp ) ;
extern struct bufferevent *__dyc_read_ptr__comp_123bufferevent(void) ;
extern void __dyc_print_ptr__comp_123bufferevent(struct bufferevent  const  *__dyc_thistype ) ;
extern struct timeval __dyc_random_comp_4timeval(unsigned int __dyc_exp ) ;
extern struct timeval __dyc_read_comp_4timeval(void) ;
extern void __dyc_print_comp_4timeval(struct timeval __dyc_thistype ) ;
extern struct __anonstruct_modes_59 __dyc_random_comp_206__anonstruct_modes_59(unsigned int __dyc_exp ) ;
extern struct __anonstruct_modes_59 __dyc_read_comp_206__anonstruct_modes_59(void) ;
extern void __dyc_print_comp_206__anonstruct_modes_59(struct __anonstruct_modes_59 __dyc_thistype ) ;
extern struct client *__dyc_random_ptr__comp_143client(unsigned int __dyc_exp ) ;
extern struct client *__dyc_read_ptr__comp_143client(void) ;
extern void __dyc_print_ptr__comp_143client(struct client  const  *__dyc_thistype ) ;
extern struct menu_item *__dyc_random_ptr__comp_195menu_item(unsigned int __dyc_exp ) ;
extern struct menu_item *__dyc_read_ptr__comp_195menu_item(void) ;
extern void __dyc_print_ptr__comp_195menu_item(struct menu_item  const  *__dyc_thistype ) ;
extern union options_value *__dyc_random_ptr__comp_266options_value(unsigned int __dyc_exp ) ;
extern union options_value *__dyc_read_ptr__comp_266options_value(void) ;
extern void __dyc_print_ptr__comp_266options_value(union options_value  const  *__dyc_thistype ) ;
extern struct window_mode_entry __dyc_random_comp_197window_mode_entry(unsigned int __dyc_exp ) ;
extern struct window_mode_entry __dyc_read_comp_197window_mode_entry(void) ;
extern void __dyc_print_comp_197window_mode_entry(struct window_mode_entry __dyc_thistype ) ;
extern struct tty_key *__dyc_random_ptr__comp_232tty_key(unsigned int __dyc_exp ) ;
extern struct tty_key *__dyc_read_ptr__comp_232tty_key(void) ;
extern void __dyc_print_ptr__comp_232tty_key(struct tty_key  const  *__dyc_thistype ) ;
extern struct window __dyc_random_comp_204window(unsigned int __dyc_exp ) ;
extern struct window __dyc_read_comp_204window(void) ;
extern void __dyc_print_comp_204window(struct window __dyc_thistype ) ;
extern struct window_pane **__dyc_random_ptr__ptr__comp_193window_pane(unsigned int __dyc_exp ) ;
extern struct window_pane **__dyc_read_ptr__ptr__comp_193window_pane(void) ;
extern void __dyc_print_ptr__ptr__comp_193window_pane(struct window_pane * const  *__dyc_thistype ) ;
extern struct client **__dyc_random_ptr__ptr__comp_143client(unsigned int __dyc_exp ) ;
extern struct client **__dyc_read_ptr__ptr__comp_143client(void) ;
extern void __dyc_print_ptr__ptr__comp_143client(struct client * const  *__dyc_thistype ) ;
extern struct args *__dyc_random_ptr__comp_141args(unsigned int __dyc_exp ) ;
extern struct args *__dyc_read_ptr__comp_141args(void) ;
extern void __dyc_print_ptr__comp_141args(struct args  const  *__dyc_thistype ) ;
extern struct grid __dyc_random_comp_184grid(unsigned int __dyc_exp ) ;
extern struct grid __dyc_read_comp_184grid(void) ;
extern void __dyc_print_comp_184grid(struct grid __dyc_thistype ) ;
extern utf8_char __dyc_random_typdef_utf8_char(unsigned int __dyc_exp ) ;
extern utf8_char __dyc_read_typdef_utf8_char(void) ;
extern void __dyc_print_typdef_utf8_char(utf8_char __dyc_thistype ) ;
extern struct window_pane_resizes __dyc_random_comp_203window_pane_resizes(unsigned int __dyc_exp ) ;
extern struct window_pane_resizes __dyc_read_comp_203window_pane_resizes(void) ;
extern void __dyc_print_comp_203window_pane_resizes(struct window_pane_resizes __dyc_thistype ) ;
extern struct __anonstruct_ev_signal_next_47 __dyc_random_comp_114__anonstruct_ev_signal_next_47(unsigned int __dyc_exp ) ;
extern struct __anonstruct_ev_signal_next_47 __dyc_read_comp_114__anonstruct_ev_signal_next_47(void) ;
extern void __dyc_print_comp_114__anonstruct_ev_signal_next_47(struct __anonstruct_ev_signal_next_47 __dyc_thistype ) ;
extern struct tty_term __dyc_random_comp_234tty_term(unsigned int __dyc_exp ) ;
extern struct tty_term __dyc_read_comp_234tty_term(void) ;
extern void __dyc_print_comp_234tty_term(struct tty_term __dyc_thistype ) ;
extern void *__dyc_random_ptr__fun_name_is_not_here(unsigned int __dyc_exp ) ;
extern void *__dyc_read_ptr__fun_name_is_not_here(void) ;
extern void __dyc_print_ptr__fun_name_is_not_here(void const   * const  __dyc_thistype ) ;
extern struct __anonstruct_entry_60 __dyc_random_comp_207__anonstruct_entry_60(unsigned int __dyc_exp ) ;
extern struct __anonstruct_entry_60 __dyc_read_comp_207__anonstruct_entry_60(void) ;
extern void __dyc_print_comp_207__anonstruct_entry_60(struct __anonstruct_entry_60 __dyc_thistype ) ;
extern struct __anonstruct_entry_56 __dyc_random_comp_187__anonstruct_entry_56(unsigned int __dyc_exp ) ;
extern struct __anonstruct_entry_56 __dyc_read_comp_187__anonstruct_entry_56(void) ;
extern void __dyc_print_comp_187__anonstruct_entry_56(struct __anonstruct_entry_56 __dyc_thistype ) ;
extern struct grid_cell *__dyc_random_ptr__comp_178grid_cell(unsigned int __dyc_exp ) ;
extern struct grid_cell *__dyc_read_ptr__comp_178grid_cell(void) ;
extern void __dyc_print_ptr__comp_178grid_cell(struct grid_cell  const  *__dyc_thistype ) ;
extern struct window_pane_resize __dyc_random_comp_201window_pane_resize(unsigned int __dyc_exp ) ;
extern struct window_pane_resize __dyc_read_comp_201window_pane_resize(void) ;
extern void __dyc_print_comp_201window_pane_resize(struct window_pane_resize __dyc_thistype ) ;
extern void *__dyc_random_ptr__comp_233tty_code(unsigned int __dyc_exp ) ;
extern void *__dyc_read_ptr__comp_233tty_code(void) ;
extern void __dyc_print_ptr__comp_233tty_code(void const   * const  __dyc_thistype ) ;
extern struct __anonstruct_tree_entry_61 __dyc_random_comp_208__anonstruct_tree_entry_61(unsigned int __dyc_exp ) ;
extern struct __anonstruct_tree_entry_61 __dyc_read_comp_208__anonstruct_tree_entry_61(void) ;
extern void __dyc_print_comp_208__anonstruct_tree_entry_61(struct __anonstruct_tree_entry_61 __dyc_thistype ) ;
extern void *__dyc_random_ptr__comp_146cmdq_item(unsigned int __dyc_exp ) ;
extern void *__dyc_read_ptr__comp_146cmdq_item(void) ;
extern void __dyc_print_ptr__comp_146cmdq_item(void const   * const  __dyc_thistype ) ;
extern void *__dyc_random_ptr__void(unsigned int __dyc_exp ) ;
extern void *__dyc_read_ptr__void(void) ;
extern void __dyc_print_ptr__void(void const   * const  __dyc_thistype ) ;
extern struct client_window __dyc_random_comp_254client_window(unsigned int __dyc_exp ) ;
extern struct client_window __dyc_read_comp_254client_window(void) ;
extern void __dyc_print_comp_254client_window(struct client_window __dyc_thistype ) ;
extern struct termios __dyc_random_comp_44termios(unsigned int __dyc_exp ) ;
extern struct termios __dyc_read_comp_44termios(void) ;
extern void __dyc_print_comp_44termios(struct termios __dyc_thistype ) ;
extern __suseconds_t __dyc_random_typdef___suseconds_t(unsigned int __dyc_exp ) ;
extern __suseconds_t __dyc_read_typdef___suseconds_t(void) ;
extern void __dyc_print_typdef___suseconds_t(__suseconds_t __dyc_thistype ) ;
extern __int32_t **__dyc_random_ptr__ptr__typdef___int32_t(unsigned int __dyc_exp ) ;
extern __int32_t **__dyc_read_ptr__ptr__typdef___int32_t(void) ;
extern void __dyc_print_ptr__ptr__typdef___int32_t(__int32_t const   * const  *__dyc_thistype ) ;
extern struct style_range **__dyc_random_ptr__ptr__comp_186style_range(unsigned int __dyc_exp ) ;
extern struct style_range **__dyc_read_ptr__ptr__comp_186style_range(void) ;
extern void __dyc_print_ptr__ptr__comp_186style_range(struct style_range * const  *__dyc_thistype ) ;
extern short *__dyc_random_ptr__short(unsigned int __dyc_exp ) ;
extern short *__dyc_read_ptr__short(void) ;
extern void __dyc_print_ptr__short(short const   *__dyc_thistype ) ;
extern struct screen_redraw_ctx __dyc_random_comp_194screen_redraw_ctx(unsigned int __dyc_exp ) ;
extern struct screen_redraw_ctx __dyc_read_comp_194screen_redraw_ctx(void) ;
extern void __dyc_print_comp_194screen_redraw_ctx(struct screen_redraw_ctx __dyc_thistype ) ;
extern union __anonunion____missing_field_name_54 __dyc_random_comp_181__anonunion____missing_field_name_54(unsigned int __dyc_exp ) ;
extern union __anonunion____missing_field_name_54 __dyc_read_comp_181__anonunion____missing_field_name_54(void) ;
extern void __dyc_print_comp_181__anonunion____missing_field_name_54(union __anonunion____missing_field_name_54 __dyc_thistype ) ;
extern void *__dyc_random_ptr__comp_156mode_tree_data(unsigned int __dyc_exp ) ;
extern void *__dyc_read_ptr__comp_156mode_tree_data(void) ;
extern void __dyc_print_ptr__comp_156mode_tree_data(void const   * const  __dyc_thistype ) ;
extern struct window_customize_modedata __dyc_random_comp_275window_customize_modedata(unsigned int __dyc_exp ) ;
extern struct window_customize_modedata __dyc_read_comp_275window_customize_modedata(void) ;
extern void __dyc_print_comp_275window_customize_modedata(struct window_customize_modedata __dyc_thistype ) ;
extern struct client_windows __dyc_random_comp_256client_windows(unsigned int __dyc_exp ) ;
extern struct client_windows __dyc_read_comp_256client_windows(void) ;
extern void __dyc_print_comp_256client_windows(struct client_windows __dyc_thistype ) ;
extern char *__dyc_random_ptr__char(unsigned int __dyc_exp ) ;
extern char *__dyc_read_ptr__char(void) ;
extern void __dyc_print_ptr__char(char const   *__dyc_thistype ) ;
extern struct __anonstruct_ev_io_44 __dyc_random_comp_111__anonstruct_ev_io_44(unsigned int __dyc_exp ) ;
extern struct __anonstruct_ev_io_44 __dyc_read_comp_111__anonstruct_ev_io_44(void) ;
extern void __dyc_print_comp_111__anonstruct_ev_io_44(struct __anonstruct_ev_io_44 __dyc_thistype ) ;
extern struct event **__dyc_random_ptr__ptr__comp_100event(unsigned int __dyc_exp ) ;
extern struct event **__dyc_read_ptr__ptr__comp_100event(void) ;
extern void __dyc_print_ptr__ptr__comp_100event(struct event * const  *__dyc_thistype ) ;
extern struct key_bindings __dyc_random_comp_262key_bindings(unsigned int __dyc_exp ) ;
extern struct key_bindings __dyc_read_comp_262key_bindings(void) ;
extern void __dyc_print_comp_262key_bindings(struct key_bindings __dyc_thistype ) ;
extern struct key_event *__dyc_random_ptr__comp_231key_event(unsigned int __dyc_exp ) ;
extern struct key_event *__dyc_read_ptr__comp_231key_event(void) ;
extern void __dyc_print_ptr__comp_231key_event(struct key_event  const  *__dyc_thistype ) ;
extern struct __anonstruct_entry_73 __dyc_random_comp_229__anonstruct_entry_73(unsigned int __dyc_exp ) ;
extern struct __anonstruct_entry_73 __dyc_read_comp_229__anonstruct_entry_73(void) ;
extern void __dyc_print_comp_229__anonstruct_entry_73(struct __anonstruct_entry_73 __dyc_thistype ) ;
extern struct args_tree __dyc_random_comp_242args_tree(unsigned int __dyc_exp ) ;
extern struct args_tree __dyc_read_comp_242args_tree(void) ;
extern void __dyc_print_comp_242args_tree(struct args_tree __dyc_thistype ) ;
extern void *__dyc_random_ptr__comp_159options_array_item(unsigned int __dyc_exp ) ;
extern void *__dyc_read_ptr__comp_159options_array_item(void) ;
extern void __dyc_print_ptr__comp_159options_array_item(void const   * const  __dyc_thistype ) ;
extern struct tty __dyc_random_comp_235tty(unsigned int __dyc_exp ) ;
extern struct tty __dyc_read_comp_235tty(void) ;
extern void __dyc_print_comp_235tty(struct tty __dyc_thistype ) ;
extern struct mouse_event __dyc_random_comp_157mouse_event(unsigned int __dyc_exp ) ;
extern struct mouse_event __dyc_read_comp_157mouse_event(void) ;
extern void __dyc_print_comp_157mouse_event(struct mouse_event __dyc_thistype ) ;
extern struct key_table **__dyc_random_ptr__ptr__comp_257key_table(unsigned int __dyc_exp ) ;
extern struct key_table **__dyc_read_ptr__ptr__comp_257key_table(void) ;
extern void __dyc_print_ptr__ptr__comp_257key_table(struct key_table * const  *__dyc_thistype ) ;
extern struct __anonstruct_winlinks_63 __dyc_random_comp_212__anonstruct_winlinks_63(unsigned int __dyc_exp ) ;
extern struct __anonstruct_winlinks_63 __dyc_read_comp_212__anonstruct_winlinks_63(void) ;
extern void __dyc_print_comp_212__anonstruct_winlinks_63(struct __anonstruct_winlinks_63 __dyc_thistype ) ;
extern struct event_callback __dyc_random_comp_105event_callback(unsigned int __dyc_exp ) ;
extern struct event_callback __dyc_read_comp_105event_callback(void) ;
extern void __dyc_print_comp_105event_callback(struct event_callback __dyc_thistype ) ;
extern cc_t __dyc_random_typdef_cc_t(unsigned int __dyc_exp ) ;
extern cc_t __dyc_read_typdef_cc_t(void) ;
extern void __dyc_print_typdef_cc_t(cc_t __dyc_thistype ) ;
extern __time_t __dyc_random_typdef___time_t(unsigned int __dyc_exp ) ;
extern __time_t __dyc_read_typdef___time_t(void) ;
extern void __dyc_print_typdef___time_t(__time_t __dyc_thistype ) ;
extern struct cmd_find_state __dyc_random_comp_145cmd_find_state(unsigned int __dyc_exp ) ;
extern struct cmd_find_state __dyc_read_comp_145cmd_find_state(void) ;
extern void __dyc_print_comp_145cmd_find_state(struct cmd_find_state __dyc_thistype ) ;
extern struct screen __dyc_random_comp_192screen(unsigned int __dyc_exp ) ;
extern struct screen __dyc_read_comp_192screen(void) ;
extern void __dyc_print_comp_192screen(struct screen __dyc_thistype ) ;
extern struct window_customize_itemdata __dyc_random_comp_274window_customize_itemdata(unsigned int __dyc_exp ) ;
extern struct window_customize_itemdata __dyc_read_comp_274window_customize_itemdata(void) ;
extern void __dyc_print_comp_274window_customize_itemdata(struct window_customize_itemdata __dyc_thistype ) ;
extern struct winlink_stack __dyc_random_comp_219winlink_stack(unsigned int __dyc_exp ) ;
extern struct winlink_stack __dyc_read_comp_219winlink_stack(void) ;
extern void __dyc_print_comp_219winlink_stack(struct winlink_stack __dyc_thistype ) ;
extern void *__dyc_random_ptr__comp_190screen_sel(unsigned int __dyc_exp ) ;
extern void *__dyc_read_ptr__comp_190screen_sel(void) ;
extern void __dyc_print_ptr__comp_190screen_sel(void const   * const  __dyc_thistype ) ;
extern struct grid *__dyc_random_ptr__comp_184grid(unsigned int __dyc_exp ) ;
extern struct grid *__dyc_read_ptr__comp_184grid(void) ;
extern void __dyc_print_ptr__comp_184grid(struct grid  const  *__dyc_thistype ) ;
extern struct window_mode_entry **__dyc_random_ptr__ptr__comp_197window_mode_entry(unsigned int __dyc_exp ) ;
extern struct window_mode_entry **__dyc_read_ptr__ptr__comp_197window_mode_entry(void) ;
extern void __dyc_print_ptr__ptr__comp_197window_mode_entry(struct window_mode_entry * const  *__dyc_thistype ) ;
extern void *__dyc_random_ptr__comp_117evbuffer(unsigned int __dyc_exp ) ;
extern void *__dyc_read_ptr__comp_117evbuffer(void) ;
extern void __dyc_print_ptr__comp_117evbuffer(void const   * const  __dyc_thistype ) ;
extern struct utf8_data *__dyc_random_ptr__comp_177utf8_data(unsigned int __dyc_exp ) ;
extern struct utf8_data *__dyc_read_ptr__comp_177utf8_data(void) ;
extern void __dyc_print_ptr__comp_177utf8_data(struct utf8_data  const  *__dyc_thistype ) ;
extern struct tty_term *__dyc_random_ptr__comp_234tty_term(unsigned int __dyc_exp ) ;
extern struct tty_term *__dyc_read_ptr__comp_234tty_term(void) ;
extern void __dyc_print_ptr__comp_234tty_term(struct tty_term  const  *__dyc_thistype ) ;
extern struct layout_cell __dyc_random_comp_205layout_cell(unsigned int __dyc_exp ) ;
extern struct layout_cell __dyc_read_comp_205layout_cell(void) ;
extern void __dyc_print_comp_205layout_cell(struct layout_cell __dyc_thistype ) ;
extern struct tty *__dyc_random_ptr__comp_235tty(unsigned int __dyc_exp ) ;
extern struct tty *__dyc_read_ptr__comp_235tty(void) ;
extern void __dyc_print_ptr__comp_235tty(struct tty  const  *__dyc_thistype ) ;
extern struct mouse_event *__dyc_random_ptr__comp_157mouse_event(unsigned int __dyc_exp ) ;
extern struct mouse_event *__dyc_read_ptr__comp_157mouse_event(void) ;
extern void __dyc_print_ptr__comp_157mouse_event(struct mouse_event  const  *__dyc_thistype ) ;
extern void *__dyc_random_ptr__comp_160options_entry(unsigned int __dyc_exp ) ;
extern void *__dyc_read_ptr__comp_160options_entry(void) ;
extern void __dyc_print_ptr__comp_160options_entry(void const   * const  __dyc_thistype ) ;
extern struct client_files __dyc_random_comp_252client_files(unsigned int __dyc_exp ) ;
extern struct client_files __dyc_read_comp_252client_files(void) ;
extern void __dyc_print_comp_252client_files(struct client_files __dyc_thistype ) ;
extern struct client __dyc_random_comp_143client(unsigned int __dyc_exp ) ;
extern struct client __dyc_read_comp_143client(void) ;
extern void __dyc_print_comp_143client(struct client __dyc_thistype ) ;
extern speed_t __dyc_random_typdef_speed_t(unsigned int __dyc_exp ) ;
extern speed_t __dyc_read_typdef_speed_t(void) ;
extern void __dyc_print_typdef_speed_t(speed_t __dyc_thistype ) ;
extern __pid_t __dyc_random_typdef___pid_t(unsigned int __dyc_exp ) ;
extern __pid_t __dyc_read_typdef___pid_t(void) ;
extern void __dyc_print_typdef___pid_t(__pid_t __dyc_thistype ) ;
extern __u_char __dyc_random_typdef___u_char(unsigned int __dyc_exp ) ;
extern __u_char __dyc_read_typdef___u_char(void) ;
extern void __dyc_print_typdef___u_char(__u_char __dyc_thistype ) ;
extern struct layout_cell *__dyc_random_ptr__comp_205layout_cell(unsigned int __dyc_exp ) ;
extern struct layout_cell *__dyc_read_ptr__comp_205layout_cell(void) ;
extern void __dyc_print_ptr__comp_205layout_cell(struct layout_cell  const  *__dyc_thistype ) ;
extern struct options_table_entry __dyc_random_comp_267options_table_entry(unsigned int __dyc_exp ) ;
extern struct options_table_entry __dyc_read_comp_267options_table_entry(void) ;
extern void __dyc_print_comp_267options_table_entry(struct options_table_entry __dyc_thistype ) ;
extern void *__dyc_random_ptr__comp_161screen_write_citem(unsigned int __dyc_exp ) ;
extern void *__dyc_read_ptr__comp_161screen_write_citem(void) ;
extern void __dyc_print_ptr__comp_161screen_write_citem(void const   * const  __dyc_thistype ) ;
extern void *__dyc_random_ptr__comp_158options(unsigned int __dyc_exp ) ;
extern void *__dyc_read_ptr__comp_158options(void) ;
extern void __dyc_print_ptr__comp_158options(void const   * const  __dyc_thistype ) ;
extern void *__dyc_random_ptr__comp_153format_tree(unsigned int __dyc_exp ) ;
extern void *__dyc_read_ptr__comp_153format_tree(void) ;
extern void __dyc_print_ptr__comp_153format_tree(void const   * const  __dyc_thistype ) ;
extern struct tty_ctx __dyc_random_comp_165tty_ctx(unsigned int __dyc_exp ) ;
extern struct tty_ctx __dyc_read_comp_165tty_ctx(void) ;
extern void __dyc_print_comp_165tty_ctx(struct tty_ctx __dyc_thistype ) ;
extern __int32_t __dyc_random_typdef___int32_t(unsigned int __dyc_exp ) ;
extern __int32_t __dyc_read_typdef___int32_t(void) ;
extern void __dyc_print_typdef___int32_t(__int32_t __dyc_thistype ) ;
extern struct options_table_entry *__dyc_random_ptr__comp_267options_table_entry(unsigned int __dyc_exp ) ;
extern struct options_table_entry *__dyc_read_ptr__comp_267options_table_entry(void) ;
extern void __dyc_print_ptr__comp_267options_table_entry(struct options_table_entry  const  *__dyc_thistype ) ;
extern struct event_watermark __dyc_random_comp_127event_watermark(unsigned int __dyc_exp ) ;
extern struct event_watermark __dyc_read_comp_127event_watermark(void) ;
extern void __dyc_print_comp_127event_watermark(struct event_watermark __dyc_thistype ) ;
extern void *__dyc_random_ptr__comp_128bufferevent_ops(unsigned int __dyc_exp ) ;
extern void *__dyc_read_ptr__comp_128bufferevent_ops(void) ;
extern void __dyc_print_ptr__comp_128bufferevent_ops(void const   * const  __dyc_thistype ) ;
extern struct __anonstruct_entry_77 __dyc_random_comp_253__anonstruct_entry_77(unsigned int __dyc_exp ) ;
extern struct __anonstruct_entry_77 __dyc_read_comp_253__anonstruct_entry_77(void) ;
extern void __dyc_print_comp_253__anonstruct_entry_77(struct __anonstruct_entry_77 __dyc_thistype ) ;
extern struct winlink __dyc_random_comp_168winlink(unsigned int __dyc_exp ) ;
extern struct winlink __dyc_read_comp_168winlink(void) ;
extern void __dyc_print_comp_168winlink(struct winlink __dyc_thistype ) ;
extern char ***__dyc_random_ptr__ptr__ptr__char(unsigned int __dyc_exp ) ;
extern char ***__dyc_read_ptr__ptr__ptr__char(void) ;
extern void __dyc_print_ptr__ptr__ptr__char(char const   ** const  *__dyc_thistype ) ;
extern uint8_t __dyc_random_typdef_uint8_t(unsigned int __dyc_exp ) ;
extern uint8_t __dyc_read_typdef_uint8_t(void) ;
extern void __dyc_print_typdef_uint8_t(uint8_t __dyc_thistype ) ;
extern struct key_binding __dyc_random_comp_260key_binding(unsigned int __dyc_exp ) ;
extern struct key_binding __dyc_read_comp_260key_binding(void) ;
extern void __dyc_print_comp_260key_binding(struct key_binding __dyc_thistype ) ;
extern struct window_panes __dyc_random_comp_209window_panes(unsigned int __dyc_exp ) ;
extern struct window_panes __dyc_read_comp_209window_panes(void) ;
extern void __dyc_print_comp_209window_panes(struct window_panes __dyc_thistype ) ;
extern struct tty_ctx *__dyc_random_ptr__comp_165tty_ctx(unsigned int __dyc_exp ) ;
extern struct tty_ctx *__dyc_read_ptr__comp_165tty_ctx(void) ;
extern void __dyc_print_ptr__comp_165tty_ctx(struct tty_ctx  const  *__dyc_thistype ) ;
extern struct menu_item __dyc_random_comp_195menu_item(unsigned int __dyc_exp ) ;
extern struct menu_item __dyc_read_comp_195menu_item(void) ;
extern void __dyc_print_comp_195menu_item(struct menu_item __dyc_thistype ) ;
extern union options_value __dyc_random_comp_266options_value(unsigned int __dyc_exp ) ;
extern union options_value __dyc_read_comp_266options_value(void) ;
extern void __dyc_print_comp_266options_value(union options_value __dyc_thistype ) ;
extern __u_int __dyc_random_typdef___u_int(unsigned int __dyc_exp ) ;
extern __u_int __dyc_read_typdef___u_int(void) ;
extern void __dyc_print_typdef___u_int(__u_int __dyc_thistype ) ;
extern struct options_array __dyc_random_comp_265options_array(unsigned int __dyc_exp ) ;
extern struct options_array __dyc_read_comp_265options_array(void) ;
extern void __dyc_print_comp_265options_array(struct options_array __dyc_thistype ) ;
extern struct __anonstruct_entry_64 __dyc_random_comp_213__anonstruct_entry_64(unsigned int __dyc_exp ) ;
extern struct __anonstruct_entry_64 __dyc_read_comp_213__anonstruct_entry_64(void) ;
extern void __dyc_print_comp_213__anonstruct_entry_64(struct __anonstruct_entry_64 __dyc_thistype ) ;
extern struct grid_line *__dyc_random_ptr__comp_183grid_line(unsigned int __dyc_exp ) ;
extern struct grid_line *__dyc_read_ptr__comp_183grid_line(void) ;
extern void __dyc_print_ptr__comp_183grid_line(struct grid_line  const  *__dyc_thistype ) ;
extern struct __anonstruct_entry_78 __dyc_random_comp_255__anonstruct_entry_78(unsigned int __dyc_exp ) ;
extern struct __anonstruct_entry_78 __dyc_read_comp_255__anonstruct_entry_78(void) ;
extern void __dyc_print_comp_255__anonstruct_entry_78(struct __anonstruct_entry_78 __dyc_thistype ) ;
extern struct __anonstruct_wentry_66 __dyc_random_comp_216__anonstruct_wentry_66(unsigned int __dyc_exp ) ;
extern struct __anonstruct_wentry_66 __dyc_read_comp_216__anonstruct_wentry_66(void) ;
extern void __dyc_print_comp_216__anonstruct_wentry_66(struct __anonstruct_wentry_66 __dyc_thistype ) ;
extern struct winlink *__dyc_random_ptr__comp_168winlink(unsigned int __dyc_exp ) ;
extern struct winlink *__dyc_read_ptr__comp_168winlink(void) ;
extern void __dyc_print_ptr__comp_168winlink(struct winlink  const  *__dyc_thistype ) ;
extern struct client_files *__dyc_random_ptr__comp_252client_files(unsigned int __dyc_exp ) ;
extern struct client_files *__dyc_read_ptr__comp_252client_files(void) ;
extern void __dyc_print_ptr__comp_252client_files(struct client_files  const  *__dyc_thistype ) ;
extern struct window_customize_itemdata **__dyc_random_ptr__ptr__comp_274window_customize_itemdata(unsigned int __dyc_exp ) ;
extern struct window_customize_itemdata **__dyc_read_ptr__ptr__comp_274window_customize_itemdata(void) ;
extern void __dyc_print_ptr__ptr__comp_274window_customize_itemdata(struct window_customize_itemdata * const  *__dyc_thistype ) ;
extern struct key_binding *__dyc_random_ptr__comp_260key_binding(unsigned int __dyc_exp ) ;
extern struct key_binding *__dyc_read_ptr__comp_260key_binding(void) ;
extern void __dyc_print_ptr__comp_260key_binding(struct key_binding  const  *__dyc_thistype ) ;
extern struct event *__dyc_random_ptr__comp_100event(unsigned int __dyc_exp ) ;
extern struct event *__dyc_read_ptr__comp_100event(void) ;
extern void __dyc_print_ptr__comp_100event(struct event  const  *__dyc_thistype ) ;
extern struct layout_cell **__dyc_random_ptr__ptr__comp_205layout_cell(unsigned int __dyc_exp ) ;
extern struct layout_cell **__dyc_read_ptr__ptr__comp_205layout_cell(void) ;
extern void __dyc_print_ptr__ptr__comp_205layout_cell(struct layout_cell * const  *__dyc_thistype ) ;
extern struct __anonstruct_entry_65 __dyc_random_comp_215__anonstruct_entry_65(unsigned int __dyc_exp ) ;
extern struct __anonstruct_entry_65 __dyc_read_comp_215__anonstruct_entry_65(void) ;
extern void __dyc_print_comp_215__anonstruct_entry_65(struct __anonstruct_entry_65 __dyc_thistype ) ;
extern struct __anonstruct_ev_io_next_45 __dyc_random_comp_112__anonstruct_ev_io_next_45(unsigned int __dyc_exp ) ;
extern struct __anonstruct_ev_io_next_45 __dyc_read_comp_112__anonstruct_ev_io_next_45(void) ;
extern void __dyc_print_comp_112__anonstruct_ev_io_next_45(struct __anonstruct_ev_io_next_45 __dyc_thistype ) ;
extern struct status_line_entry __dyc_random_comp_249status_line_entry(unsigned int __dyc_exp ) ;
extern struct status_line_entry __dyc_read_comp_249status_line_entry(void) ;
extern void __dyc_print_comp_249status_line_entry(struct status_line_entry __dyc_thistype ) ;
extern struct grid_cell __dyc_random_comp_178grid_cell(unsigned int __dyc_exp ) ;
extern struct grid_cell __dyc_read_comp_178grid_cell(void) ;
extern void __dyc_print_comp_178grid_cell(struct grid_cell __dyc_thistype ) ;
extern struct key_table *__dyc_random_ptr__comp_257key_table(unsigned int __dyc_exp ) ;
extern struct key_table *__dyc_read_ptr__comp_257key_table(void) ;
extern void __dyc_print_ptr__comp_257key_table(struct key_table  const  *__dyc_thistype ) ;
extern union __anonunion_ev_timeout_pos_41 __dyc_random_comp_108__anonunion_ev_timeout_pos_41(unsigned int __dyc_exp ) ;
extern union __anonunion_ev_timeout_pos_41 __dyc_read_comp_108__anonunion_ev_timeout_pos_41(void) ;
extern void __dyc_print_comp_108__anonunion_ev_timeout_pos_41(union __anonunion_ev_timeout_pos_41 __dyc_thistype ) ;
extern struct grid_extd_entry __dyc_random_comp_179grid_extd_entry(unsigned int __dyc_exp ) ;
extern struct grid_extd_entry __dyc_read_comp_179grid_extd_entry(void) ;
extern void __dyc_print_comp_179grid_extd_entry(struct grid_extd_entry __dyc_thistype ) ;
extern struct cmd_list __dyc_random_comp_243cmd_list(unsigned int __dyc_exp ) ;
extern struct cmd_list __dyc_read_comp_243cmd_list(void) ;
extern void __dyc_print_comp_243cmd_list(struct cmd_list __dyc_thistype ) ;
extern struct window_mode_entry *__dyc_random_ptr__comp_197window_mode_entry(unsigned int __dyc_exp ) ;
extern struct window_mode_entry *__dyc_read_ptr__comp_197window_mode_entry(void) ;
extern void __dyc_print_ptr__comp_197window_mode_entry(struct window_mode_entry  const  *__dyc_thistype ) ;
extern struct __anonstruct_entry_74 __dyc_random_comp_236__anonstruct_entry_74(unsigned int __dyc_exp ) ;
extern struct __anonstruct_entry_74 __dyc_read_comp_236__anonstruct_entry_74(void) ;
extern void __dyc_print_comp_236__anonstruct_entry_74(struct __anonstruct_entry_74 __dyc_thistype ) ;
extern __int32_t *__dyc_random_ptr__typdef___int32_t(unsigned int __dyc_exp ) ;
extern __int32_t *__dyc_read_ptr__typdef___int32_t(void) ;
extern void __dyc_print_ptr__typdef___int32_t(__int32_t const   *__dyc_thistype ) ;
extern struct __anonstruct_entry_57 __dyc_random_comp_199__anonstruct_entry_57(unsigned int __dyc_exp ) ;
extern struct __anonstruct_entry_57 __dyc_read_comp_199__anonstruct_entry_57(void) ;
extern void __dyc_print_comp_199__anonstruct_entry_57(struct __anonstruct_entry_57 __dyc_thistype ) ;
extern struct __anonstruct_data_55 __dyc_random_comp_182__anonstruct_data_55(unsigned int __dyc_exp ) ;
extern struct __anonstruct_data_55 __dyc_read_comp_182__anonstruct_data_55(void) ;
extern void __dyc_print_comp_182__anonstruct_data_55(struct __anonstruct_data_55 __dyc_thistype ) ;
extern void *__dyc_random_ptr__comp_191screen_titles(unsigned int __dyc_exp ) ;
extern void *__dyc_read_ptr__comp_191screen_titles(void) ;
extern void __dyc_print_ptr__comp_191screen_titles(void const   * const  __dyc_thistype ) ;
extern void *__dyc_random_ptr__comp_152format_job_tree(unsigned int __dyc_exp ) ;
extern void *__dyc_read_ptr__comp_152format_job_tree(void) ;
extern void __dyc_print_ptr__comp_152format_job_tree(void const   * const  __dyc_thistype ) ;
extern struct screen_write_ctx __dyc_random_comp_163screen_write_ctx(unsigned int __dyc_exp ) ;
extern struct screen_write_ctx __dyc_read_comp_163screen_write_ctx(void) ;
extern void __dyc_print_comp_163screen_write_ctx(struct screen_write_ctx __dyc_thistype ) ;
extern struct grid_extd_entry *__dyc_random_ptr__comp_179grid_extd_entry(unsigned int __dyc_exp ) ;
extern struct grid_extd_entry *__dyc_read_ptr__comp_179grid_extd_entry(void) ;
extern void __dyc_print_ptr__comp_179grid_extd_entry(struct grid_extd_entry  const  *__dyc_thistype ) ;
extern struct key_event __dyc_random_comp_231key_event(unsigned int __dyc_exp ) ;
extern struct key_event __dyc_read_comp_231key_event(void) ;
extern void __dyc_print_comp_231key_event(struct key_event __dyc_thistype ) ;
extern void *__dyc_random_ptr__comp_154input_ctx(unsigned int __dyc_exp ) ;
extern void *__dyc_read_ptr__comp_154input_ctx(void) ;
extern void __dyc_print_ptr__comp_154input_ctx(void const   * const  __dyc_thistype ) ;
extern struct __anonstruct_entry_81 __dyc_random_comp_258__anonstruct_entry_81(unsigned int __dyc_exp ) ;
extern struct __anonstruct_entry_81 __dyc_read_comp_258__anonstruct_entry_81(void) ;
extern void __dyc_print_comp_258__anonstruct_entry_81(struct __anonstruct_entry_81 __dyc_thistype ) ;
extern struct session __dyc_random_comp_164session(unsigned int __dyc_exp ) ;
extern struct session __dyc_read_comp_164session(void) ;
extern void __dyc_print_comp_164session(struct session __dyc_thistype ) ;
extern pid_t __dyc_random_typdef_pid_t(unsigned int __dyc_exp ) ;
extern pid_t __dyc_read_typdef_pid_t(void) ;
extern void __dyc_print_typdef_pid_t(pid_t __dyc_thistype ) ;
extern bitstr_t __dyc_random_typdef_bitstr_t(unsigned int __dyc_exp ) ;
extern bitstr_t __dyc_read_typdef_bitstr_t(void) ;
extern void __dyc_print_typdef_bitstr_t(bitstr_t __dyc_thistype ) ;
extern struct __anonstruct_ev_signal_46 __dyc_random_comp_113__anonstruct_ev_signal_46(unsigned int __dyc_exp ) ;
extern struct __anonstruct_ev_signal_46 __dyc_read_comp_113__anonstruct_ev_signal_46(void) ;
extern void __dyc_print_comp_113__anonstruct_ev_signal_46(struct __anonstruct_ev_signal_46 __dyc_thistype ) ;
extern void *__dyc_random_ptr__comp_150control_state(unsigned int __dyc_exp ) ;
extern void *__dyc_read_ptr__comp_150control_state(void) ;
extern void __dyc_print_ptr__comp_150control_state(void const   * const  __dyc_thistype ) ;
extern struct winlink **__dyc_random_ptr__ptr__comp_168winlink(unsigned int __dyc_exp ) ;
extern struct winlink **__dyc_read_ptr__ptr__comp_168winlink(void) ;
extern void __dyc_print_ptr__ptr__comp_168winlink(struct winlink * const  *__dyc_thistype ) ;
extern void *__dyc_random_ptr__comp_162screen_write_cline(unsigned int __dyc_exp ) ;
extern void *__dyc_read_ptr__comp_162screen_write_cline(void) ;
extern void __dyc_print_ptr__comp_162screen_write_cline(void const   * const  __dyc_thistype ) ;
extern __u_short __dyc_random_typdef___u_short(unsigned int __dyc_exp ) ;
extern __u_short __dyc_read_typdef___u_short(void) ;
extern void __dyc_print_typdef___u_short(__u_short __dyc_thistype ) ;
extern struct key_binding **__dyc_random_ptr__ptr__comp_260key_binding(unsigned int __dyc_exp ) ;
extern struct key_binding **__dyc_read_ptr__ptr__comp_260key_binding(void) ;
extern void __dyc_print_ptr__ptr__comp_260key_binding(struct key_binding * const  *__dyc_thistype ) ;
extern void *__dyc_random_ptr__comp_241args_entry(unsigned int __dyc_exp ) ;
extern void *__dyc_read_ptr__comp_241args_entry(void) ;
extern void __dyc_print_ptr__comp_241args_entry(void const   * const  __dyc_thistype ) ;
extern struct cmd_parse_result __dyc_random_comp_244cmd_parse_result(unsigned int __dyc_exp ) ;
extern struct cmd_parse_result __dyc_read_comp_244cmd_parse_result(void) ;
extern void __dyc_print_comp_244cmd_parse_result(struct cmd_parse_result __dyc_thistype ) ;
extern key_code __dyc_random_typdef_key_code(unsigned int __dyc_exp ) ;
extern key_code __dyc_read_typdef_key_code(void) ;
extern void __dyc_print_typdef_key_code(key_code __dyc_thistype ) ;
extern struct client_window *__dyc_random_ptr__comp_254client_window(unsigned int __dyc_exp ) ;
extern struct client_window *__dyc_read_ptr__comp_254client_window(void) ;
extern void __dyc_print_ptr__comp_254client_window(struct client_window  const  *__dyc_thistype ) ;
extern struct session *__dyc_random_ptr__comp_164session(unsigned int __dyc_exp ) ;
extern struct session *__dyc_read_ptr__comp_164session(void) ;
extern void __dyc_print_ptr__comp_164session(struct session  const  *__dyc_thistype ) ;
extern struct utf8_data __dyc_random_comp_177utf8_data(unsigned int __dyc_exp ) ;
extern struct utf8_data __dyc_read_comp_177utf8_data(void) ;
extern void __dyc_print_comp_177utf8_data(struct utf8_data __dyc_thistype ) ;
extern struct winlinks __dyc_random_comp_218winlinks(unsigned int __dyc_exp ) ;
extern struct winlinks __dyc_read_comp_218winlinks(void) ;
extern void __dyc_print_comp_218winlinks(struct winlinks __dyc_thistype ) ;
extern struct window *__dyc_random_ptr__comp_204window(unsigned int __dyc_exp ) ;
extern struct window *__dyc_read_ptr__comp_204window(void) ;
extern void __dyc_print_ptr__comp_204window(struct window  const  *__dyc_thistype ) ;
extern struct screen_redraw_ctx *__dyc_random_ptr__comp_194screen_redraw_ctx(unsigned int __dyc_exp ) ;
extern struct screen_redraw_ctx *__dyc_read_ptr__comp_194screen_redraw_ctx(void) ;
extern void __dyc_print_ptr__comp_194screen_redraw_ctx(struct screen_redraw_ctx  const  *__dyc_thistype ) ;
extern uint64_t __dyc_random_typdef_uint64_t(unsigned int __dyc_exp ) ;
extern uint64_t __dyc_read_typdef_uint64_t(void) ;
extern void __dyc_print_typdef_uint64_t(uint64_t __dyc_thistype ) ;
extern struct client_file __dyc_random_comp_251client_file(unsigned int __dyc_exp ) ;
extern struct client_file __dyc_read_comp_251client_file(void) ;
extern void __dyc_print_comp_251client_file(struct client_file __dyc_thistype ) ;
extern struct window_mode __dyc_random_comp_198window_mode(unsigned int __dyc_exp ) ;
extern struct window_mode __dyc_read_comp_198window_mode(void) ;
extern void __dyc_print_comp_198window_mode(struct window_mode __dyc_thistype ) ;
extern bitstr_t *__dyc_random_ptr__typdef_bitstr_t(unsigned int __dyc_exp ) ;
extern bitstr_t *__dyc_read_ptr__typdef_bitstr_t(void) ;
extern void __dyc_print_ptr__typdef_bitstr_t(bitstr_t const   *__dyc_thistype ) ;
extern struct mode_tree_sort_criteria __dyc_random_comp_270mode_tree_sort_criteria(unsigned int __dyc_exp ) ;
extern struct mode_tree_sort_criteria __dyc_read_comp_270mode_tree_sort_criteria(void) ;
extern void __dyc_print_comp_270mode_tree_sort_criteria(struct mode_tree_sort_criteria __dyc_thistype ) ;
extern struct window_customize_modedata *__dyc_random_ptr__comp_275window_customize_modedata(unsigned int __dyc_exp ) ;
extern struct window_customize_modedata *__dyc_read_ptr__comp_275window_customize_modedata(void) ;
extern void __dyc_print_ptr__comp_275window_customize_modedata(struct window_customize_modedata  const  *__dyc_thistype ) ;
extern char **__dyc_random_ptr__ptr__char(unsigned int __dyc_exp ) ;
extern char **__dyc_read_ptr__ptr__char(void) ;
extern void __dyc_print_ptr__ptr__char(char * const  *__dyc_thistype ) ;
extern void *__dyc_random_ptr__comp_149cmds(unsigned int __dyc_exp ) ;
extern void *__dyc_read_ptr__comp_149cmds(void) ;
extern void __dyc_print_ptr__comp_149cmds(void const   * const  __dyc_thistype ) ;
extern key_code *__dyc_random_ptr__typdef_key_code(unsigned int __dyc_exp ) ;
extern key_code *__dyc_read_ptr__typdef_key_code(void) ;
extern void __dyc_print_ptr__typdef_key_code(key_code const   *__dyc_thistype ) ;
extern struct cmd_list *__dyc_random_ptr__comp_243cmd_list(unsigned int __dyc_exp ) ;
extern struct cmd_list *__dyc_read_ptr__comp_243cmd_list(void) ;
extern void __dyc_print_ptr__comp_243cmd_list(struct cmd_list  const  *__dyc_thistype ) ;
