#line 24 "lib/zlib_inflate/inftrees.h"
struct __anonstruct_code_5 {
   unsigned char op ;
   unsigned char bits ;
   unsigned short val ;
};
#line 24 "lib/zlib_inflate/inftrees.h"
typedef struct __anonstruct_code_5 code;
#line 47
enum __anonenum_codetype_6 {
    CODES = 0,
    LENS = 1,
    DISTS = 2
} ;
#line 47 "lib/zlib_inflate/inftrees.h"
typedef enum __anonenum_codetype_6 codetype;
extern unsigned int *__dyc_random_ptr__int(unsigned int __dyc_exp ) ;
extern unsigned int *__dyc_read_ptr__int(void) ;
extern void __dyc_print_ptr__int(unsigned int const   *__dyc_thistype ) ;
extern code **__dyc_random_ptr__ptr__typdef_code(unsigned int __dyc_exp ) ;
extern code **__dyc_read_ptr__ptr__typdef_code(void) ;
extern void __dyc_print_ptr__ptr__typdef_code(code * const  *__dyc_thistype ) ;
extern unsigned short *__dyc_random_ptr__short(unsigned int __dyc_exp ) ;
extern unsigned short *__dyc_read_ptr__short(void) ;
extern void __dyc_print_ptr__short(unsigned short const   *__dyc_thistype ) ;
extern struct __anonstruct_code_5 __dyc_random_comp_16__anonstruct_code_5(unsigned int __dyc_exp ) ;
extern struct __anonstruct_code_5 __dyc_read_comp_16__anonstruct_code_5(void) ;
extern void __dyc_print_comp_16__anonstruct_code_5(struct __anonstruct_code_5 __dyc_thistype ) ;
extern codetype __dyc_random_typdef_codetype(unsigned int __dyc_exp ) ;
extern codetype __dyc_read_typdef_codetype(void) ;
extern void __dyc_print_typdef_codetype(codetype __dyc_thistype ) ;
extern code __dyc_random_typdef_code(unsigned int __dyc_exp ) ;
extern code __dyc_read_typdef_code(void) ;
extern void __dyc_print_typdef_code(code __dyc_thistype ) ;
extern code *__dyc_random_ptr__typdef_code(unsigned int __dyc_exp ) ;
extern code *__dyc_read_ptr__typdef_code(void) ;
extern void __dyc_print_ptr__typdef_code(code const   *__dyc_thistype ) ;
