#line 52 "include/linux/zconf.h"
typedef unsigned char Byte;
#line 53 "include/linux/zconf.h"
typedef unsigned int uInt;
#line 54 "include/linux/zconf.h"
typedef unsigned long uLong;
#line 82 "include/linux/zlib.h"
struct internal_state;
#line 82
struct internal_state;
#line 84 "include/linux/zlib.h"
struct z_stream_s {
   Byte *next_in ;
   uInt avail_in ;
   uLong total_in ;
   Byte *next_out ;
   uInt avail_out ;
   uLong total_out ;
   char *msg ;
   struct internal_state *state ;
   void *workspace ;
   int data_type ;
   uLong adler ;
   uLong reserved ;
};
#line 84 "include/linux/zlib.h"
typedef struct z_stream_s z_stream;
#line 103 "include/linux/zlib.h"
typedef z_stream *z_streamp;
#line 18 "include/asm/posix_types_64.h"
typedef unsigned long __kernel_size_t;
#line 66 "include/linux/types.h"
typedef __kernel_size_t size_t;
#line 20 "include/linux/zutil.h"
typedef unsigned char uch;
#line 21 "include/linux/zutil.h"
typedef unsigned short ush;
#line 22 "include/linux/zutil.h"
typedef unsigned long ulg;
#line 40 "lib/zlib_deflate/defutil.h"
union __anonunion_fc_5 {
   ush freq ;
   ush code ;
};
#line 40 "lib/zlib_deflate/defutil.h"
union __anonunion_dl_6 {
   ush dad ;
   ush len ;
};
#line 40 "lib/zlib_deflate/defutil.h"
struct ct_data_s {
   union __anonunion_fc_5 fc ;
   union __anonunion_dl_6 dl ;
};
#line 40 "lib/zlib_deflate/defutil.h"
typedef struct ct_data_s ct_data;
#line 56
struct static_tree_desc_s;
#line 56 "lib/zlib_deflate/defutil.h"
typedef struct static_tree_desc_s static_tree_desc;
#line 58 "lib/zlib_deflate/defutil.h"
struct tree_desc_s {
   ct_data *dyn_tree ;
   int max_code ;
   static_tree_desc *stat_desc ;
};
#line 58 "lib/zlib_deflate/defutil.h"
typedef struct tree_desc_s tree_desc;
#line 64 "lib/zlib_deflate/defutil.h"
typedef ush Pos;
#line 65 "lib/zlib_deflate/defutil.h"
typedef unsigned int IPos;
#line 71 "lib/zlib_deflate/defutil.h"
struct deflate_state {
   z_streamp strm ;
   int status ;
   Byte *pending_buf ;
   ulg pending_buf_size ;
   Byte *pending_out ;
   int pending ;
   int noheader ;
   Byte data_type ;
   Byte method ;
   int last_flush ;
   uInt w_size ;
   uInt w_bits ;
   uInt w_mask ;
   Byte *window ;
   ulg window_size ;
   Pos *prev ;
   Pos *head ;
   uInt ins_h ;
   uInt hash_size ;
   uInt hash_bits ;
   uInt hash_mask ;
   uInt hash_shift ;
   long block_start ;
   uInt match_length ;
   IPos prev_match ;
   int match_available ;
   uInt strstart ;
   uInt match_start ;
   uInt lookahead ;
   uInt prev_length ;
   uInt max_chain_length ;
   uInt max_lazy_match ;
   int level ;
   int strategy ;
   uInt good_match ;
   int nice_match ;
   struct ct_data_s dyn_ltree[573] ;
   struct ct_data_s dyn_dtree[61] ;
   struct ct_data_s bl_tree[39] ;
   struct tree_desc_s l_desc ;
   struct tree_desc_s d_desc ;
   struct tree_desc_s bl_desc ;
   ush bl_count[16] ;
   int heap[573] ;
   int heap_len ;
   int heap_max ;
   uch depth[573] ;
   uch *l_buf ;
   uInt lit_bufsize ;
   uInt last_lit ;
   ush *d_buf ;
   ulg opt_len ;
   ulg static_len ;
   ulg compressed_len ;
   uInt matches ;
   int last_eob_len ;
   ush bi_buf ;
   int bi_valid ;
};
#line 71 "lib/zlib_deflate/defutil.h"
typedef struct deflate_state deflate_state;
#line 114 "lib/zlib_deflate/deftree.c"
struct static_tree_desc_s {
   ct_data *static_tree ;
   int *extra_bits ;
   int extra_base ;
   int elems ;
   int max_length ;
};
extern IPos __dyc_random_typdef_IPos(unsigned int __dyc_exp ) ;
extern IPos __dyc_read_typdef_IPos(void) ;
extern void __dyc_print_typdef_IPos(IPos __dyc_thistype ) ;
extern Pos *__dyc_random_ptr__typdef_Pos(unsigned int __dyc_exp ) ;
extern Pos *__dyc_read_ptr__typdef_Pos(void) ;
extern void __dyc_print_ptr__typdef_Pos(Pos const   *__dyc_thistype ) ;
extern struct z_stream_s __dyc_random_comp_2z_stream_s(unsigned int __dyc_exp ) ;
extern struct z_stream_s __dyc_read_comp_2z_stream_s(void) ;
extern void __dyc_print_comp_2z_stream_s(struct z_stream_s __dyc_thistype ) ;
extern deflate_state *__dyc_random_ptr__typdef_deflate_state(unsigned int __dyc_exp ) ;
extern deflate_state *__dyc_read_ptr__typdef_deflate_state(void) ;
extern void __dyc_print_ptr__typdef_deflate_state(deflate_state const   *__dyc_thistype ) ;
extern size_t __dyc_random_typdef_size_t(unsigned int __dyc_exp ) ;
extern size_t __dyc_read_typdef_size_t(void) ;
extern void __dyc_print_typdef_size_t(size_t __dyc_thistype ) ;
extern int *__dyc_random_ptr__int(unsigned int __dyc_exp ) ;
extern int *__dyc_read_ptr__int(void) ;
extern void __dyc_print_ptr__int(int const   *__dyc_thistype ) ;
extern static_tree_desc __dyc_random_typdef_static_tree_desc(unsigned int __dyc_exp ) ;
extern static_tree_desc __dyc_read_typdef_static_tree_desc(void) ;
extern void __dyc_print_typdef_static_tree_desc(static_tree_desc __dyc_thistype ) ;
extern ulg __dyc_random_typdef_ulg(unsigned int __dyc_exp ) ;
extern ulg __dyc_read_typdef_ulg(void) ;
extern void __dyc_print_typdef_ulg(ulg __dyc_thistype ) ;
extern Byte __dyc_random_typdef_Byte(unsigned int __dyc_exp ) ;
extern Byte __dyc_read_typdef_Byte(void) ;
extern void __dyc_print_typdef_Byte(Byte __dyc_thistype ) ;
extern static_tree_desc *__dyc_random_ptr__typdef_static_tree_desc(unsigned int __dyc_exp ) ;
extern static_tree_desc *__dyc_read_ptr__typdef_static_tree_desc(void) ;
extern void __dyc_print_ptr__typdef_static_tree_desc(static_tree_desc const   *__dyc_thistype ) ;
extern ush __dyc_random_typdef_ush(unsigned int __dyc_exp ) ;
extern ush __dyc_read_typdef_ush(void) ;
extern void __dyc_print_typdef_ush(ush __dyc_thistype ) ;
extern struct static_tree_desc_s __dyc_random_comp_19static_tree_desc_s(unsigned int __dyc_exp ) ;
extern struct static_tree_desc_s __dyc_read_comp_19static_tree_desc_s(void) ;
extern void __dyc_print_comp_19static_tree_desc_s(struct static_tree_desc_s __dyc_thistype ) ;
extern Byte *__dyc_random_ptr__typdef_Byte(unsigned int __dyc_exp ) ;
extern Byte *__dyc_read_ptr__typdef_Byte(void) ;
extern void __dyc_print_ptr__typdef_Byte(Byte const   *__dyc_thistype ) ;
extern Pos __dyc_random_typdef_Pos(unsigned int __dyc_exp ) ;
extern Pos __dyc_read_typdef_Pos(void) ;
extern void __dyc_print_typdef_Pos(Pos __dyc_thistype ) ;
extern ct_data *__dyc_random_ptr__typdef_ct_data(unsigned int __dyc_exp ) ;
extern ct_data *__dyc_read_ptr__typdef_ct_data(void) ;
extern void __dyc_print_ptr__typdef_ct_data(ct_data const   *__dyc_thistype ) ;
extern struct deflate_state __dyc_random_comp_21deflate_state(unsigned int __dyc_exp ) ;
extern struct deflate_state __dyc_read_comp_21deflate_state(void) ;
extern void __dyc_print_comp_21deflate_state(struct deflate_state __dyc_thistype ) ;
extern void *__dyc_random_ptr__void(unsigned int __dyc_exp ) ;
extern void *__dyc_read_ptr__void(void) ;
extern void __dyc_print_ptr__void(void const   * const  __dyc_thistype ) ;
extern tree_desc __dyc_random_typdef_tree_desc(unsigned int __dyc_exp ) ;
extern tree_desc __dyc_read_typdef_tree_desc(void) ;
extern void __dyc_print_typdef_tree_desc(tree_desc __dyc_thistype ) ;
extern char *__dyc_random_ptr__char(unsigned int __dyc_exp ) ;
extern char *__dyc_read_ptr__char(void) ;
extern void __dyc_print_ptr__char(char const   *__dyc_thistype ) ;
extern struct ct_data_s __dyc_random_comp_16ct_data_s(unsigned int __dyc_exp ) ;
extern struct ct_data_s __dyc_read_comp_16ct_data_s(void) ;
extern void __dyc_print_comp_16ct_data_s(struct ct_data_s __dyc_thistype ) ;
extern struct tree_desc_s __dyc_random_comp_20tree_desc_s(unsigned int __dyc_exp ) ;
extern struct tree_desc_s __dyc_read_comp_20tree_desc_s(void) ;
extern void __dyc_print_comp_20tree_desc_s(struct tree_desc_s __dyc_thistype ) ;
extern __kernel_size_t __dyc_random_typdef___kernel_size_t(unsigned int __dyc_exp ) ;
extern __kernel_size_t __dyc_read_typdef___kernel_size_t(void) ;
extern void __dyc_print_typdef___kernel_size_t(__kernel_size_t __dyc_thistype ) ;
extern uch *__dyc_random_ptr__typdef_uch(unsigned int __dyc_exp ) ;
extern uch *__dyc_read_ptr__typdef_uch(void) ;
extern void __dyc_print_ptr__typdef_uch(uch const   *__dyc_thistype ) ;
extern z_stream __dyc_random_typdef_z_stream(unsigned int __dyc_exp ) ;
extern z_stream __dyc_read_typdef_z_stream(void) ;
extern void __dyc_print_typdef_z_stream(z_stream __dyc_thistype ) ;
extern void *__dyc_random_ptr__comp_1internal_state(unsigned int __dyc_exp ) ;
extern void *__dyc_read_ptr__comp_1internal_state(void) ;
extern void __dyc_print_ptr__comp_1internal_state(void const   * const  __dyc_thistype ) ;
extern z_stream *__dyc_random_ptr__typdef_z_stream(unsigned int __dyc_exp ) ;
extern z_stream *__dyc_read_ptr__typdef_z_stream(void) ;
extern void __dyc_print_ptr__typdef_z_stream(z_stream const   *__dyc_thistype ) ;
extern tree_desc *__dyc_random_ptr__typdef_tree_desc(unsigned int __dyc_exp ) ;
extern tree_desc *__dyc_read_ptr__typdef_tree_desc(void) ;
extern void __dyc_print_ptr__typdef_tree_desc(tree_desc const   *__dyc_thistype ) ;
extern ct_data __dyc_random_typdef_ct_data(unsigned int __dyc_exp ) ;
extern ct_data __dyc_read_typdef_ct_data(void) ;
extern void __dyc_print_typdef_ct_data(ct_data __dyc_thistype ) ;
extern union __anonunion_dl_6 __dyc_random_comp_18__anonunion_dl_6(unsigned int __dyc_exp ) ;
extern union __anonunion_dl_6 __dyc_read_comp_18__anonunion_dl_6(void) ;
extern void __dyc_print_comp_18__anonunion_dl_6(union __anonunion_dl_6 __dyc_thistype ) ;
extern uLong __dyc_random_typdef_uLong(unsigned int __dyc_exp ) ;
extern uLong __dyc_read_typdef_uLong(void) ;
extern void __dyc_print_typdef_uLong(uLong __dyc_thistype ) ;
extern uch __dyc_random_typdef_uch(unsigned int __dyc_exp ) ;
extern uch __dyc_read_typdef_uch(void) ;
extern void __dyc_print_typdef_uch(uch __dyc_thistype ) ;
extern z_streamp __dyc_random_typdef_z_streamp(unsigned int __dyc_exp ) ;
extern z_streamp __dyc_read_typdef_z_streamp(void) ;
extern void __dyc_print_typdef_z_streamp(z_streamp __dyc_thistype ) ;
extern deflate_state __dyc_random_typdef_deflate_state(unsigned int __dyc_exp ) ;
extern deflate_state __dyc_read_typdef_deflate_state(void) ;
extern void __dyc_print_typdef_deflate_state(deflate_state __dyc_thistype ) ;
extern ush *__dyc_random_ptr__typdef_ush(unsigned int __dyc_exp ) ;
extern ush *__dyc_read_ptr__typdef_ush(void) ;
extern void __dyc_print_ptr__typdef_ush(ush const   *__dyc_thistype ) ;
extern uInt __dyc_random_typdef_uInt(unsigned int __dyc_exp ) ;
extern uInt __dyc_read_typdef_uInt(void) ;
extern void __dyc_print_typdef_uInt(uInt __dyc_thistype ) ;
extern union __anonunion_fc_5 __dyc_random_comp_17__anonunion_fc_5(unsigned int __dyc_exp ) ;
extern union __anonunion_fc_5 __dyc_read_comp_17__anonunion_fc_5(void) ;
extern void __dyc_print_comp_17__anonunion_fc_5(union __anonunion_fc_5 __dyc_thistype ) ;
