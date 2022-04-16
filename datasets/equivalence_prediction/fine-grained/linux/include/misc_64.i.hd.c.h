#line 14 "include/asm/types.h"
typedef unsigned char __u8;
#line 17 "include/asm/types.h"
typedef unsigned short __u16;
#line 20 "include/asm/types.h"
typedef unsigned int __u32;
#line 10 "include/linux/screen_info.h"
struct screen_info {
   __u8 orig_x ;
   __u8 orig_y ;
   __u16 ext_mem_k ;
   __u16 orig_video_page ;
   __u8 orig_video_mode ;
   __u8 orig_video_cols ;
   __u16 unused2 ;
   __u16 orig_video_ega_bx ;
   __u16 unused3 ;
   __u8 orig_video_lines ;
   __u8 orig_video_isVGA ;
   __u16 orig_video_points ;
   __u16 lfb_width ;
   __u16 lfb_height ;
   __u16 lfb_depth ;
   __u32 lfb_base ;
   __u32 lfb_size ;
   __u16 cl_magic ;
   __u16 cl_offset ;
   __u16 lfb_linelength ;
   __u8 red_size ;
   __u8 red_pos ;
   __u8 green_size ;
   __u8 green_pos ;
   __u8 blue_size ;
   __u8 blue_pos ;
   __u8 rsvd_size ;
   __u8 rsvd_pos ;
   __u16 vesapm_seg ;
   __u16 vesapm_off ;
   __u16 pages ;
   __u16 vesa_attributes ;
   __u32 capabilities ;
   __u8 _reserved[6] ;
};
#line 112 "arch/x86/boot/compressed/misc_64.c"
typedef unsigned char uch;
#line 113 "arch/x86/boot/compressed/misc_64.c"
typedef unsigned short ush;
#line 114 "arch/x86/boot/compressed/misc_64.c"
typedef unsigned long ulg;
#line 135 "arch/x86/boot/compressed/../../../../lib/inflate.c"
union __anonunion_v_23 {
   ush n ;
   struct huft *t ;
};
#line 135 "arch/x86/boot/compressed/../../../../lib/inflate.c"
struct huft {
   uch e ;
   uch b ;
   union __anonunion_v_23 v ;
};
#line 309 "arch/x86/boot/compressed/../../../../lib/inflate.c"
struct __anonstruct_stk_24 {
   unsigned int c[17] ;
   struct huft *u[16] ;
   unsigned int v[288] ;
   unsigned int x[17] ;
};
extern struct screen_info *__dyc_random_ptr__comp_4screen_info(unsigned int __dyc_exp ) ;
extern struct screen_info *__dyc_read_ptr__comp_4screen_info(void) ;
extern void __dyc_print_ptr__comp_4screen_info(struct screen_info  const  *__dyc_thistype ) ;
extern union __anonunion_v_23 __dyc_random_comp_60__anonunion_v_23(unsigned int __dyc_exp ) ;
extern union __anonunion_v_23 __dyc_read_comp_60__anonunion_v_23(void) ;
extern void __dyc_print_comp_60__anonunion_v_23(union __anonunion_v_23 __dyc_thistype ) ;
extern unsigned int *__dyc_random_ptr__int(unsigned int __dyc_exp ) ;
extern unsigned int *__dyc_read_ptr__int(void) ;
extern void __dyc_print_ptr__int(unsigned int const   *__dyc_thistype ) ;
extern ulg __dyc_random_typdef_ulg(unsigned int __dyc_exp ) ;
extern ulg __dyc_read_typdef_ulg(void) ;
extern void __dyc_print_typdef_ulg(ulg __dyc_thistype ) ;
extern ush __dyc_random_typdef_ush(unsigned int __dyc_exp ) ;
extern ush __dyc_read_typdef_ush(void) ;
extern void __dyc_print_typdef_ush(ush __dyc_thistype ) ;
extern void *__dyc_random_ptr__void(unsigned int __dyc_exp ) ;
extern void *__dyc_read_ptr__void(void) ;
extern void __dyc_print_ptr__void(void const   * const  __dyc_thistype ) ;
extern struct __anonstruct_stk_24 *__dyc_random_ptr__comp_61__anonstruct_stk_24(unsigned int __dyc_exp ) ;
extern struct __anonstruct_stk_24 *__dyc_read_ptr__comp_61__anonstruct_stk_24(void) ;
extern void __dyc_print_ptr__comp_61__anonstruct_stk_24(struct __anonstruct_stk_24  const  *__dyc_thistype ) ;
extern struct huft __dyc_random_comp_59huft(unsigned int __dyc_exp ) ;
extern struct huft __dyc_read_comp_59huft(void) ;
extern void __dyc_print_comp_59huft(struct huft __dyc_thistype ) ;
extern __u16 __dyc_random_typdef___u16(unsigned int __dyc_exp ) ;
extern __u16 __dyc_read_typdef___u16(void) ;
extern void __dyc_print_typdef___u16(__u16 __dyc_thistype ) ;
extern char *__dyc_random_ptr__char(unsigned int __dyc_exp ) ;
extern char *__dyc_read_ptr__char(void) ;
extern void __dyc_print_ptr__char(char const   *__dyc_thistype ) ;
extern struct screen_info __dyc_random_comp_4screen_info(unsigned int __dyc_exp ) ;
extern struct screen_info __dyc_read_comp_4screen_info(void) ;
extern void __dyc_print_comp_4screen_info(struct screen_info __dyc_thistype ) ;
extern struct huft *__dyc_random_ptr__comp_59huft(unsigned int __dyc_exp ) ;
extern struct huft *__dyc_read_ptr__comp_59huft(void) ;
extern void __dyc_print_ptr__comp_59huft(struct huft  const  *__dyc_thistype ) ;
extern uch *__dyc_random_ptr__typdef_uch(unsigned int __dyc_exp ) ;
extern uch *__dyc_read_ptr__typdef_uch(void) ;
extern void __dyc_print_ptr__typdef_uch(uch const   *__dyc_thistype ) ;
extern __u8 __dyc_random_typdef___u8(unsigned int __dyc_exp ) ;
extern __u8 __dyc_read_typdef___u8(void) ;
extern void __dyc_print_typdef___u8(__u8 __dyc_thistype ) ;
extern struct huft **__dyc_random_ptr__ptr__comp_59huft(unsigned int __dyc_exp ) ;
extern struct huft **__dyc_read_ptr__ptr__comp_59huft(void) ;
extern void __dyc_print_ptr__ptr__comp_59huft(struct huft * const  *__dyc_thistype ) ;
extern __u32 __dyc_random_typdef___u32(unsigned int __dyc_exp ) ;
extern __u32 __dyc_read_typdef___u32(void) ;
extern void __dyc_print_typdef___u32(__u32 __dyc_thistype ) ;
extern struct __anonstruct_stk_24 __dyc_random_comp_61__anonstruct_stk_24(unsigned int __dyc_exp ) ;
extern struct __anonstruct_stk_24 __dyc_read_comp_61__anonstruct_stk_24(void) ;
extern void __dyc_print_comp_61__anonstruct_stk_24(struct __anonstruct_stk_24 __dyc_thistype ) ;
extern uch __dyc_random_typdef_uch(unsigned int __dyc_exp ) ;
extern uch __dyc_read_typdef_uch(void) ;
extern void __dyc_print_typdef_uch(uch __dyc_thistype ) ;
extern ush *__dyc_random_ptr__typdef_ush(unsigned int __dyc_exp ) ;
extern ush *__dyc_read_ptr__typdef_ush(void) ;
extern void __dyc_print_ptr__typdef_ush(ush const   *__dyc_thistype ) ;
extern void **__dyc_random_ptr__ptr__void(unsigned int __dyc_exp ) ;
extern void **__dyc_read_ptr__ptr__void(void) ;
extern void __dyc_print_ptr__ptr__void(void * const  *__dyc_thistype ) ;
