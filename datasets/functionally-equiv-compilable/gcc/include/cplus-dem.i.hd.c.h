#line 212 "/usr/lib/gcc/x86_64-linux-gnu/4.6/include/stddef.h"
typedef unsigned long size_t;
#line 83 "/home/chenqian/Downloads/eqminer_gcc/../gcc-10.3.0/libiberty/../include/demangle.h"
enum demangling_styles {
    no_demangling = -1,
    unknown_demangling = 0,
    auto_demangling = 256,
    gnu_v3_demangling = 16384,
    java_demangling = 4,
    gnat_demangling = 32768,
    dlang_demangling = 65536,
    rust_demangling = 131072
} ;
#line 118 "/home/chenqian/Downloads/eqminer_gcc/../gcc-10.3.0/libiberty/../include/demangle.h"
struct demangler_engine {
   char *demangling_style_name ;
   enum demangling_styles demangling_style ;
   char *demangling_style_doc ;
};
extern size_t __dyc_random_typdef_size_t(unsigned int __dyc_exp ) ;
extern size_t __dyc_read_typdef_size_t(void) ;
extern void __dyc_print_typdef_size_t(size_t __dyc_thistype ) ;
extern void *__dyc_random_ptr__void(unsigned int __dyc_exp ) ;
extern void *__dyc_read_ptr__void(void) ;
extern void __dyc_print_ptr__void(void const   * const  __dyc_thistype ) ;
extern char *__dyc_random_ptr__char(unsigned int __dyc_exp ) ;
extern char *__dyc_read_ptr__char(void) ;
extern void __dyc_print_ptr__char(char const   *__dyc_thistype ) ;
extern struct demangler_engine __dyc_random_comp_43demangler_engine(unsigned int __dyc_exp ) ;
extern struct demangler_engine __dyc_read_comp_43demangler_engine(void) ;
extern void __dyc_print_comp_43demangler_engine(struct demangler_engine __dyc_thistype ) ;
extern struct demangler_engine *__dyc_random_ptr__comp_43demangler_engine(unsigned int __dyc_exp ) ;
extern struct demangler_engine *__dyc_read_ptr__comp_43demangler_engine(void) ;
extern void __dyc_print_ptr__comp_43demangler_engine(struct demangler_engine  const  *__dyc_thistype ) ;
