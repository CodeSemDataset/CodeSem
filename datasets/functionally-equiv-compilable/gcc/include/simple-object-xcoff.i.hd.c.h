#line 212 "/usr/lib/gcc/x86_64-linux-gnu/4.6/include/stddef.h"
typedef unsigned long size_t;
#line 141 "/usr/include/x86_64-linux-gnu/bits/types.h"
typedef long __off_t;
#line 91 "/usr/include/stdio.h"
typedef __off_t off_t;
#line 42 "/home/chenqian/Downloads/eqminer_gcc/../gcc-10.3.0/libiberty/../include/simple-object.h"
struct simple_object_read_struct;
#line 42 "/home/chenqian/Downloads/eqminer_gcc/../gcc-10.3.0/libiberty/../include/simple-object.h"
typedef struct simple_object_read_struct simple_object_read;
#line 137
struct simple_object_write_struct;
#line 137 "/home/chenqian/Downloads/eqminer_gcc/../gcc-10.3.0/libiberty/../include/simple-object.h"
typedef struct simple_object_write_struct simple_object_write;
#line 157
struct simple_object_write_section_struct;
#line 157 "/home/chenqian/Downloads/eqminer_gcc/../gcc-10.3.0/libiberty/../include/simple-object.h"
typedef struct simple_object_write_section_struct simple_object_write_section;
#line 56 "/usr/include/stdint.h"
typedef unsigned long uint64_t;
#line 21 "/home/chenqian/Downloads/eqminer_gcc/../gcc-10.3.0/libiberty/simple-object-common.h"
struct simple_object_functions;
#line 21
struct simple_object_functions;
#line 25 "/home/chenqian/Downloads/eqminer_gcc/../gcc-10.3.0/libiberty/simple-object-common.h"
struct simple_object_read_struct {
   int descriptor ;
   off_t offset ;
   struct simple_object_functions *functions ;
   void *data ;
};
#line 49 "/home/chenqian/Downloads/eqminer_gcc/../gcc-10.3.0/libiberty/simple-object-common.h"
struct simple_object_write_struct {
   struct simple_object_functions *functions ;
   char *segment_name ;
   simple_object_write_section *sections ;
   simple_object_write_section *last_section ;
   void *data ;
};
#line 65
struct simple_object_write_section_buffer;
#line 65 "/home/chenqian/Downloads/eqminer_gcc/../gcc-10.3.0/libiberty/simple-object-common.h"
struct simple_object_write_section_struct {
   simple_object_write_section *next ;
   char *name ;
   unsigned int align ;
   struct simple_object_write_section_buffer *buffers ;
   struct simple_object_write_section_buffer *last_buffer ;
};
#line 82 "/home/chenqian/Downloads/eqminer_gcc/../gcc-10.3.0/libiberty/simple-object-common.h"
struct simple_object_write_section_buffer {
   struct simple_object_write_section_buffer *next ;
   size_t size ;
   void *buffer ;
   void *free_buffer ;
};
#line 100 "/home/chenqian/Downloads/eqminer_gcc/../gcc-10.3.0/libiberty/simple-object-common.h"
struct simple_object_functions {
   void *(*match)(unsigned char *header , int descriptor , off_t offset ,
                  char const   *segment_name , char const   **errmsg , int *err ) ;
   char const   *(*find_sections)(simple_object_read * ,
                                  int (*pfn)(void * , char const   * ,
                                             off_t offset , off_t length ) ,
                                  void *data , int *err ) ;
   void *(*fetch_attributes)(simple_object_read *sobj , char const   **errmsg ,
                             int *err ) ;
   void (*release_read)(void * ) ;
   char const   *(*attributes_merge)(void * , void * , int *err ) ;
   void (*release_attributes)(void * ) ;
   void *(*start_write)(void *attributes_data , char const   **errmsg ,
                        int *err ) ;
   char const   *(*write_to_file)(simple_object_write *sobj , int descriptor ,
                                  int *err ) ;
   void (*release_write)(void * ) ;
   char const   *(*copy_lto_debug_sections)(simple_object_read *sobj ,
                                            simple_object_write *dobj ,
                                            char *(*pfn)(char const   * ) ,
                                            int *err ) ;
};
#line 181 "/home/chenqian/Downloads/eqminer_gcc/../gcc-10.3.0/libiberty/simple-object-common.h"
typedef uint64_t ulong_type;
#line 49 "/home/chenqian/Downloads/eqminer_gcc/../gcc-10.3.0/libiberty/simple-object-xcoff.c"
struct __anonstruct_xcoff32_31 {
   unsigned char f_symptr[4] ;
   unsigned char f_nsyms[4] ;
   unsigned char f_opthdr[2] ;
   unsigned char f_flags[2] ;
};
#line 49 "/home/chenqian/Downloads/eqminer_gcc/../gcc-10.3.0/libiberty/simple-object-xcoff.c"
struct __anonstruct_xcoff64_32 {
   unsigned char f_symptr[8] ;
   unsigned char f_opthdr[2] ;
   unsigned char f_flags[2] ;
   unsigned char f_nsyms[4] ;
};
#line 49 "/home/chenqian/Downloads/eqminer_gcc/../gcc-10.3.0/libiberty/simple-object-xcoff.c"
union __anonunion_u_30 {
   struct __anonstruct_xcoff32_31 xcoff32 ;
   struct __anonstruct_xcoff64_32 xcoff64 ;
};
#line 49 "/home/chenqian/Downloads/eqminer_gcc/../gcc-10.3.0/libiberty/simple-object-xcoff.c"
struct external_filehdr {
   unsigned char f_magic[2] ;
   unsigned char f_nscns[2] ;
   unsigned char f_timdat[4] ;
   union __anonunion_u_30 u ;
};
#line 87 "/home/chenqian/Downloads/eqminer_gcc/../gcc-10.3.0/libiberty/simple-object-xcoff.c"
struct __anonstruct_xcoff32_34 {
   unsigned char s_paddr[4] ;
   unsigned char s_vaddr[4] ;
   unsigned char s_size[4] ;
   unsigned char s_scnptr[4] ;
   unsigned char s_relptr[4] ;
   unsigned char s_lnnoptr[4] ;
   unsigned char s_nreloc[2] ;
   unsigned char s_nlnno[2] ;
   unsigned char s_flags[4] ;
};
#line 87 "/home/chenqian/Downloads/eqminer_gcc/../gcc-10.3.0/libiberty/simple-object-xcoff.c"
struct __anonstruct_xcoff64_35 {
   unsigned char s_paddr[8] ;
   unsigned char s_vaddr[8] ;
   unsigned char s_size[8] ;
   unsigned char s_scnptr[8] ;
   unsigned char s_relptr[8] ;
   unsigned char s_lnnoptr[8] ;
   unsigned char s_nreloc[4] ;
   unsigned char s_nlnno[4] ;
   unsigned char s_flags[4] ;
};
#line 87 "/home/chenqian/Downloads/eqminer_gcc/../gcc-10.3.0/libiberty/simple-object-xcoff.c"
union __anonunion_u_33 {
   struct __anonstruct_xcoff32_34 xcoff32 ;
   struct __anonstruct_xcoff64_35 xcoff64 ;
};
#line 87 "/home/chenqian/Downloads/eqminer_gcc/../gcc-10.3.0/libiberty/simple-object-xcoff.c"
struct external_scnhdr {
   unsigned char s_name[8] ;
   union __anonunion_u_33 u ;
};
#line 136 "/home/chenqian/Downloads/eqminer_gcc/../gcc-10.3.0/libiberty/simple-object-xcoff.c"
struct __anonstruct_n_39 {
   unsigned char n_zeroes[4] ;
   unsigned char n_offset[4] ;
};
#line 136 "/home/chenqian/Downloads/eqminer_gcc/../gcc-10.3.0/libiberty/simple-object-xcoff.c"
union __anonunion_n_38 {
   char n_name[8] ;
   struct __anonstruct_n_39 n ;
};
#line 136 "/home/chenqian/Downloads/eqminer_gcc/../gcc-10.3.0/libiberty/simple-object-xcoff.c"
struct __anonstruct_xcoff32_37 {
   union __anonunion_n_38 n ;
   unsigned char n_value[4] ;
};
#line 136 "/home/chenqian/Downloads/eqminer_gcc/../gcc-10.3.0/libiberty/simple-object-xcoff.c"
struct __anonstruct_xcoff64_40 {
   unsigned char n_value[8] ;
   unsigned char n_offset[4] ;
};
#line 136 "/home/chenqian/Downloads/eqminer_gcc/../gcc-10.3.0/libiberty/simple-object-xcoff.c"
union __anonunion_u_36 {
   struct __anonstruct_xcoff32_37 xcoff32 ;
   struct __anonstruct_xcoff64_40 xcoff64 ;
};
#line 136 "/home/chenqian/Downloads/eqminer_gcc/../gcc-10.3.0/libiberty/simple-object-xcoff.c"
struct external_syment {
   union __anonunion_u_36 u ;
   unsigned char n_scnum[2] ;
   unsigned char n_type[2] ;
   unsigned char n_sclass[1] ;
   unsigned char n_numaux[1] ;
};
#line 186 "/home/chenqian/Downloads/eqminer_gcc/../gcc-10.3.0/libiberty/simple-object-xcoff.c"
struct __anonstruct__x_42 {
   unsigned char x_zeroes[4] ;
   unsigned char x_offset[4] ;
   unsigned char x_pad[6] ;
   unsigned char x_ftype ;
};
#line 186 "/home/chenqian/Downloads/eqminer_gcc/../gcc-10.3.0/libiberty/simple-object-xcoff.c"
union __anonunion_x_file_41 {
   char x_fname[14] ;
   struct __anonstruct__x_42 _x ;
};
#line 186 "/home/chenqian/Downloads/eqminer_gcc/../gcc-10.3.0/libiberty/simple-object-xcoff.c"
struct __anonstruct_x_scn_43 {
   unsigned char x_scnlen[4] ;
   unsigned char x_nreloc[2] ;
   unsigned char x_nlinno[2] ;
};
#line 186 "/home/chenqian/Downloads/eqminer_gcc/../gcc-10.3.0/libiberty/simple-object-xcoff.c"
struct __anonstruct_x_csect_46 {
   unsigned char x_scnlen[4] ;
   unsigned char x_parmhash[4] ;
   unsigned char x_snhash[2] ;
   unsigned char x_smtyp ;
   unsigned char x_smclas ;
   unsigned char x_stab ;
   unsigned char x_snstab[2] ;
};
#line 186 "/home/chenqian/Downloads/eqminer_gcc/../gcc-10.3.0/libiberty/simple-object-xcoff.c"
struct __anonstruct_xcoff32_45 {
   struct __anonstruct_x_csect_46 x_csect ;
};
#line 186 "/home/chenqian/Downloads/eqminer_gcc/../gcc-10.3.0/libiberty/simple-object-xcoff.c"
struct __anonstruct_x_csect_48 {
   unsigned char x_scnlen_lo[4] ;
   unsigned char x_parmhash[4] ;
   unsigned char x_snhash[2] ;
   unsigned char x_smtyp ;
   unsigned char x_smclas ;
   unsigned char x_scnlen_hi[4] ;
   unsigned char pad ;
   unsigned char x_auxtype ;
};
#line 186 "/home/chenqian/Downloads/eqminer_gcc/../gcc-10.3.0/libiberty/simple-object-xcoff.c"
struct __anonstruct_xcoff64_47 {
   struct __anonstruct_x_csect_48 x_csect ;
};
#line 186 "/home/chenqian/Downloads/eqminer_gcc/../gcc-10.3.0/libiberty/simple-object-xcoff.c"
union __anonunion_u_44 {
   struct __anonstruct_xcoff32_45 xcoff32 ;
   struct __anonstruct_xcoff64_47 xcoff64 ;
};
#line 186 "/home/chenqian/Downloads/eqminer_gcc/../gcc-10.3.0/libiberty/simple-object-xcoff.c"
struct __anonstruct_x_sect_49 {
   unsigned char x_scnlen[4] ;
   unsigned char pad1[4] ;
   unsigned char x_nreloc[4] ;
};
#line 186 "/home/chenqian/Downloads/eqminer_gcc/../gcc-10.3.0/libiberty/simple-object-xcoff.c"
union external_auxent {
   union __anonunion_x_file_41 x_file ;
   struct __anonstruct_x_scn_43 x_scn ;
   union __anonunion_u_44 u ;
   struct __anonstruct_x_sect_49 x_sect ;
};
#line 269 "/home/chenqian/Downloads/eqminer_gcc/../gcc-10.3.0/libiberty/simple-object-xcoff.c"
struct simple_object_xcoff_read {
   unsigned short magic ;
   unsigned short nscns ;
   off_t symptr ;
   unsigned int nsyms ;
   unsigned short flags ;
   off_t scnhdr_offset ;
};
#line 287 "/home/chenqian/Downloads/eqminer_gcc/../gcc-10.3.0/libiberty/simple-object-xcoff.c"
struct simple_object_xcoff_attributes {
   unsigned short magic ;
   unsigned short flags ;
};
#line 879 "/home/chenqian/Downloads/eqminer_gcc/../gcc-10.3.0/libiberty/simple-object-xcoff.c"
union __anonunion_syms_50 {
   struct external_syment sym ;
   union external_auxent aux ;
};
extern union __anonunion_u_33 __dyc_random_comp_56__anonunion_u_33(unsigned int __dyc_exp ) ;
extern union __anonunion_u_33 __dyc_read_comp_56__anonunion_u_33(void) ;
extern void __dyc_print_comp_56__anonunion_u_33(union __anonunion_u_33 __dyc_thistype ) ;
extern simple_object_write __dyc_random_typdef_simple_object_write(unsigned int __dyc_exp ) ;
extern simple_object_write __dyc_read_typdef_simple_object_write(void) ;
extern void __dyc_print_typdef_simple_object_write(simple_object_write __dyc_thistype ) ;
extern struct simple_object_write_section_buffer *__dyc_random_ptr__comp_50simple_object_write_section_buffer(unsigned int __dyc_exp ) ;
extern struct simple_object_write_section_buffer *__dyc_read_ptr__comp_50simple_object_write_section_buffer(void) ;
extern void __dyc_print_ptr__comp_50simple_object_write_section_buffer(struct simple_object_write_section_buffer  const  *__dyc_thistype ) ;
extern struct simple_object_write_section_struct __dyc_random_comp_36simple_object_write_section_struct(unsigned int __dyc_exp ) ;
extern struct simple_object_write_section_struct __dyc_read_comp_36simple_object_write_section_struct(void) ;
extern void __dyc_print_comp_36simple_object_write_section_struct(struct simple_object_write_section_struct __dyc_thistype ) ;
extern int *__dyc_random_ptr__int(unsigned int __dyc_exp ) ;
extern int *__dyc_read_ptr__int(void) ;
extern void __dyc_print_ptr__int(int const   *__dyc_thistype ) ;
extern size_t __dyc_random_typdef_size_t(unsigned int __dyc_exp ) ;
extern size_t __dyc_read_typdef_size_t(void) ;
extern void __dyc_print_typdef_size_t(size_t __dyc_thistype ) ;
extern struct __anonstruct_xcoff32_45 __dyc_random_comp_70__anonstruct_xcoff32_45(unsigned int __dyc_exp ) ;
extern struct __anonstruct_xcoff32_45 __dyc_read_comp_70__anonstruct_xcoff32_45(void) ;
extern void __dyc_print_comp_70__anonstruct_xcoff32_45(struct __anonstruct_xcoff32_45 __dyc_thistype ) ;
extern ulong_type __dyc_random_typdef_ulong_type(unsigned int __dyc_exp ) ;
extern ulong_type __dyc_read_typdef_ulong_type(void) ;
extern void __dyc_print_typdef_ulong_type(ulong_type __dyc_thistype ) ;
extern struct external_scnhdr *__dyc_random_ptr__comp_55external_scnhdr(unsigned int __dyc_exp ) ;
extern struct external_scnhdr *__dyc_read_ptr__comp_55external_scnhdr(void) ;
extern void __dyc_print_ptr__comp_55external_scnhdr(struct external_scnhdr  const  *__dyc_thistype ) ;
extern struct __anonstruct__x_42 __dyc_random_comp_67__anonstruct__x_42(unsigned int __dyc_exp ) ;
extern struct __anonstruct__x_42 __dyc_read_comp_67__anonstruct__x_42(void) ;
extern void __dyc_print_comp_67__anonstruct__x_42(struct __anonstruct__x_42 __dyc_thistype ) ;
extern simple_object_read __dyc_random_typdef_simple_object_read(unsigned int __dyc_exp ) ;
extern simple_object_read __dyc_read_typdef_simple_object_read(void) ;
extern void __dyc_print_typdef_simple_object_read(simple_object_read __dyc_thistype ) ;
extern union __anonunion_x_file_41 __dyc_random_comp_66__anonunion_x_file_41(unsigned int __dyc_exp ) ;
extern union __anonunion_x_file_41 __dyc_read_comp_66__anonunion_x_file_41(void) ;
extern void __dyc_print_comp_66__anonunion_x_file_41(union __anonunion_x_file_41 __dyc_thistype ) ;
extern __off_t __dyc_random_typdef___off_t(unsigned int __dyc_exp ) ;
extern __off_t __dyc_read_typdef___off_t(void) ;
extern void __dyc_print_typdef___off_t(__off_t __dyc_thistype ) ;
extern void *__dyc_random_ptr__fun_name_is_not_here(unsigned int __dyc_exp ) ;
extern void *__dyc_read_ptr__fun_name_is_not_here(void) ;
extern void __dyc_print_ptr__fun_name_is_not_here(void const   * const  __dyc_thistype ) ;
extern union __anonunion_u_44 __dyc_random_comp_69__anonunion_u_44(unsigned int __dyc_exp ) ;
extern union __anonunion_u_44 __dyc_read_comp_69__anonunion_u_44(void) ;
extern void __dyc_print_comp_69__anonunion_u_44(union __anonunion_u_44 __dyc_thistype ) ;
extern struct simple_object_xcoff_attributes __dyc_random_comp_76simple_object_xcoff_attributes(unsigned int __dyc_exp ) ;
extern struct simple_object_xcoff_attributes __dyc_read_comp_76simple_object_xcoff_attributes(void) ;
extern void __dyc_print_comp_76simple_object_xcoff_attributes(struct simple_object_xcoff_attributes __dyc_thistype ) ;
extern struct external_syment *__dyc_random_ptr__comp_59external_syment(unsigned int __dyc_exp ) ;
extern struct external_syment *__dyc_read_ptr__comp_59external_syment(void) ;
extern void __dyc_print_ptr__comp_59external_syment(struct external_syment  const  *__dyc_thistype ) ;
extern void *__dyc_random_ptr__void(unsigned int __dyc_exp ) ;
extern void *__dyc_read_ptr__void(void) ;
extern void __dyc_print_ptr__void(void const   * const  __dyc_thistype ) ;
extern struct __anonstruct_x_scn_43 __dyc_random_comp_68__anonstruct_x_scn_43(unsigned int __dyc_exp ) ;
extern struct __anonstruct_x_scn_43 __dyc_read_comp_68__anonstruct_x_scn_43(void) ;
extern void __dyc_print_comp_68__anonstruct_x_scn_43(struct __anonstruct_x_scn_43 __dyc_thistype ) ;
extern char *__dyc_random_ptr__char(unsigned int __dyc_exp ) ;
extern char *__dyc_read_ptr__char(void) ;
extern void __dyc_print_ptr__char(char const   *__dyc_thistype ) ;
extern struct simple_object_xcoff_read __dyc_random_comp_75simple_object_xcoff_read(unsigned int __dyc_exp ) ;
extern struct simple_object_xcoff_read __dyc_read_comp_75simple_object_xcoff_read(void) ;
extern void __dyc_print_comp_75simple_object_xcoff_read(struct simple_object_xcoff_read __dyc_thistype ) ;
extern union __anonunion_syms_50 __dyc_random_comp_77__anonunion_syms_50(unsigned int __dyc_exp ) ;
extern union __anonunion_syms_50 __dyc_read_comp_77__anonunion_syms_50(void) ;
extern void __dyc_print_comp_77__anonunion_syms_50(union __anonunion_syms_50 __dyc_thistype ) ;
extern struct external_scnhdr __dyc_random_comp_55external_scnhdr(unsigned int __dyc_exp ) ;
extern struct external_scnhdr __dyc_read_comp_55external_scnhdr(void) ;
extern void __dyc_print_comp_55external_scnhdr(struct external_scnhdr __dyc_thistype ) ;
extern struct simple_object_xcoff_read *__dyc_random_ptr__comp_75simple_object_xcoff_read(unsigned int __dyc_exp ) ;
extern struct simple_object_xcoff_read *__dyc_read_ptr__comp_75simple_object_xcoff_read(void) ;
extern void __dyc_print_ptr__comp_75simple_object_xcoff_read(struct simple_object_xcoff_read  const  *__dyc_thistype ) ;
extern struct simple_object_write_section_buffer __dyc_random_comp_50simple_object_write_section_buffer(unsigned int __dyc_exp ) ;
extern struct simple_object_write_section_buffer __dyc_read_comp_50simple_object_write_section_buffer(void) ;
extern void __dyc_print_comp_50simple_object_write_section_buffer(struct simple_object_write_section_buffer __dyc_thistype ) ;
extern union external_auxent *__dyc_random_ptr__comp_65external_auxent(unsigned int __dyc_exp ) ;
extern union external_auxent *__dyc_read_ptr__comp_65external_auxent(void) ;
extern void __dyc_print_ptr__comp_65external_auxent(union external_auxent  const  *__dyc_thistype ) ;
extern union __anonunion_n_38 __dyc_random_comp_62__anonunion_n_38(unsigned int __dyc_exp ) ;
extern union __anonunion_n_38 __dyc_read_comp_62__anonunion_n_38(void) ;
extern void __dyc_print_comp_62__anonunion_n_38(union __anonunion_n_38 __dyc_thistype ) ;
extern union __anonunion_u_36 __dyc_random_comp_60__anonunion_u_36(unsigned int __dyc_exp ) ;
extern union __anonunion_u_36 __dyc_read_comp_60__anonunion_u_36(void) ;
extern void __dyc_print_comp_60__anonunion_u_36(union __anonunion_u_36 __dyc_thistype ) ;
extern struct __anonstruct_xcoff64_47 __dyc_random_comp_72__anonstruct_xcoff64_47(unsigned int __dyc_exp ) ;
extern struct __anonstruct_xcoff64_47 __dyc_read_comp_72__anonstruct_xcoff64_47(void) ;
extern void __dyc_print_comp_72__anonstruct_xcoff64_47(struct __anonstruct_xcoff64_47 __dyc_thistype ) ;
extern struct simple_object_functions *__dyc_random_ptr__comp_49simple_object_functions(unsigned int __dyc_exp ) ;
extern struct simple_object_functions *__dyc_read_ptr__comp_49simple_object_functions(void) ;
extern void __dyc_print_ptr__comp_49simple_object_functions(struct simple_object_functions  const  *__dyc_thistype ) ;
extern off_t __dyc_random_typdef_off_t(unsigned int __dyc_exp ) ;
extern off_t __dyc_read_typdef_off_t(void) ;
extern void __dyc_print_typdef_off_t(off_t __dyc_thistype ) ;
extern struct external_filehdr __dyc_random_comp_51external_filehdr(unsigned int __dyc_exp ) ;
extern struct external_filehdr __dyc_read_comp_51external_filehdr(void) ;
extern void __dyc_print_comp_51external_filehdr(struct external_filehdr __dyc_thistype ) ;
extern size_t *__dyc_random_ptr__typdef_size_t(unsigned int __dyc_exp ) ;
extern size_t *__dyc_read_ptr__typdef_size_t(void) ;
extern void __dyc_print_ptr__typdef_size_t(size_t const   *__dyc_thistype ) ;
extern simple_object_write_section *__dyc_random_ptr__typdef_simple_object_write_section(unsigned int __dyc_exp ) ;
extern simple_object_write_section *__dyc_read_ptr__typdef_simple_object_write_section(void) ;
extern void __dyc_print_ptr__typdef_simple_object_write_section(simple_object_write_section const   *__dyc_thistype ) ;
extern struct external_syment __dyc_random_comp_59external_syment(unsigned int __dyc_exp ) ;
extern struct external_syment __dyc_read_comp_59external_syment(void) ;
extern void __dyc_print_comp_59external_syment(struct external_syment __dyc_thistype ) ;
extern struct __anonstruct_xcoff32_34 __dyc_random_comp_57__anonstruct_xcoff32_34(unsigned int __dyc_exp ) ;
extern struct __anonstruct_xcoff32_34 __dyc_read_comp_57__anonstruct_xcoff32_34(void) ;
extern void __dyc_print_comp_57__anonstruct_xcoff32_34(struct __anonstruct_xcoff32_34 __dyc_thistype ) ;
extern struct __anonstruct_xcoff32_37 __dyc_random_comp_61__anonstruct_xcoff32_37(unsigned int __dyc_exp ) ;
extern struct __anonstruct_xcoff32_37 __dyc_read_comp_61__anonstruct_xcoff32_37(void) ;
extern void __dyc_print_comp_61__anonstruct_xcoff32_37(struct __anonstruct_xcoff32_37 __dyc_thistype ) ;
extern simple_object_write *__dyc_random_ptr__typdef_simple_object_write(unsigned int __dyc_exp ) ;
extern simple_object_write *__dyc_read_ptr__typdef_simple_object_write(void) ;
extern void __dyc_print_ptr__typdef_simple_object_write(simple_object_write const   *__dyc_thistype ) ;
extern struct external_filehdr *__dyc_random_ptr__comp_51external_filehdr(unsigned int __dyc_exp ) ;
extern struct external_filehdr *__dyc_read_ptr__comp_51external_filehdr(void) ;
extern void __dyc_print_ptr__comp_51external_filehdr(struct external_filehdr  const  *__dyc_thistype ) ;
extern struct __anonstruct_n_39 __dyc_random_comp_63__anonstruct_n_39(unsigned int __dyc_exp ) ;
extern struct __anonstruct_n_39 __dyc_read_comp_63__anonstruct_n_39(void) ;
extern void __dyc_print_comp_63__anonstruct_n_39(struct __anonstruct_n_39 __dyc_thistype ) ;
extern struct __anonstruct_xcoff64_35 __dyc_random_comp_58__anonstruct_xcoff64_35(unsigned int __dyc_exp ) ;
extern struct __anonstruct_xcoff64_35 __dyc_read_comp_58__anonstruct_xcoff64_35(void) ;
extern void __dyc_print_comp_58__anonstruct_xcoff64_35(struct __anonstruct_xcoff64_35 __dyc_thistype ) ;
extern struct __anonstruct_xcoff64_40 __dyc_random_comp_64__anonstruct_xcoff64_40(unsigned int __dyc_exp ) ;
extern struct __anonstruct_xcoff64_40 __dyc_read_comp_64__anonstruct_xcoff64_40(void) ;
extern void __dyc_print_comp_64__anonstruct_xcoff64_40(struct __anonstruct_xcoff64_40 __dyc_thistype ) ;
extern simple_object_read *__dyc_random_ptr__typdef_simple_object_read(unsigned int __dyc_exp ) ;
extern simple_object_read *__dyc_read_ptr__typdef_simple_object_read(void) ;
extern void __dyc_print_ptr__typdef_simple_object_read(simple_object_read const   *__dyc_thistype ) ;
extern struct simple_object_write_struct __dyc_random_comp_35simple_object_write_struct(unsigned int __dyc_exp ) ;
extern struct simple_object_write_struct __dyc_read_comp_35simple_object_write_struct(void) ;
extern void __dyc_print_comp_35simple_object_write_struct(struct simple_object_write_struct __dyc_thistype ) ;
extern struct __anonstruct_x_csect_48 __dyc_random_comp_73__anonstruct_x_csect_48(unsigned int __dyc_exp ) ;
extern struct __anonstruct_x_csect_48 __dyc_read_comp_73__anonstruct_x_csect_48(void) ;
extern void __dyc_print_comp_73__anonstruct_x_csect_48(struct __anonstruct_x_csect_48 __dyc_thistype ) ;
extern struct __anonstruct_xcoff32_31 __dyc_random_comp_53__anonstruct_xcoff32_31(unsigned int __dyc_exp ) ;
extern struct __anonstruct_xcoff32_31 __dyc_read_comp_53__anonstruct_xcoff32_31(void) ;
extern void __dyc_print_comp_53__anonstruct_xcoff32_31(struct __anonstruct_xcoff32_31 __dyc_thistype ) ;
extern struct simple_object_read_struct __dyc_random_comp_33simple_object_read_struct(unsigned int __dyc_exp ) ;
extern struct simple_object_read_struct __dyc_read_comp_33simple_object_read_struct(void) ;
extern void __dyc_print_comp_33simple_object_read_struct(struct simple_object_read_struct __dyc_thistype ) ;
extern union external_auxent __dyc_random_comp_65external_auxent(unsigned int __dyc_exp ) ;
extern union external_auxent __dyc_read_comp_65external_auxent(void) ;
extern void __dyc_print_comp_65external_auxent(union external_auxent __dyc_thistype ) ;
extern struct __anonstruct_x_csect_46 __dyc_random_comp_71__anonstruct_x_csect_46(unsigned int __dyc_exp ) ;
extern struct __anonstruct_x_csect_46 __dyc_read_comp_71__anonstruct_x_csect_46(void) ;
extern void __dyc_print_comp_71__anonstruct_x_csect_46(struct __anonstruct_x_csect_46 __dyc_thistype ) ;
extern struct __anonstruct_x_sect_49 __dyc_random_comp_74__anonstruct_x_sect_49(unsigned int __dyc_exp ) ;
extern struct __anonstruct_x_sect_49 __dyc_read_comp_74__anonstruct_x_sect_49(void) ;
extern void __dyc_print_comp_74__anonstruct_x_sect_49(struct __anonstruct_x_sect_49 __dyc_thistype ) ;
extern struct __anonstruct_xcoff64_32 __dyc_random_comp_54__anonstruct_xcoff64_32(unsigned int __dyc_exp ) ;
extern struct __anonstruct_xcoff64_32 __dyc_read_comp_54__anonstruct_xcoff64_32(void) ;
extern void __dyc_print_comp_54__anonstruct_xcoff64_32(struct __anonstruct_xcoff64_32 __dyc_thistype ) ;
extern struct simple_object_xcoff_attributes *__dyc_random_ptr__comp_76simple_object_xcoff_attributes(unsigned int __dyc_exp ) ;
extern struct simple_object_xcoff_attributes *__dyc_read_ptr__comp_76simple_object_xcoff_attributes(void) ;
extern void __dyc_print_ptr__comp_76simple_object_xcoff_attributes(struct simple_object_xcoff_attributes  const  *__dyc_thistype ) ;
extern union __anonunion_u_30 __dyc_random_comp_52__anonunion_u_30(unsigned int __dyc_exp ) ;
extern union __anonunion_u_30 __dyc_read_comp_52__anonunion_u_30(void) ;
extern void __dyc_print_comp_52__anonunion_u_30(union __anonunion_u_30 __dyc_thistype ) ;
extern struct simple_object_functions __dyc_random_comp_49simple_object_functions(unsigned int __dyc_exp ) ;
extern struct simple_object_functions __dyc_read_comp_49simple_object_functions(void) ;
extern void __dyc_print_comp_49simple_object_functions(struct simple_object_functions __dyc_thistype ) ;
extern uint64_t __dyc_random_typdef_uint64_t(unsigned int __dyc_exp ) ;
extern uint64_t __dyc_read_typdef_uint64_t(void) ;
extern void __dyc_print_typdef_uint64_t(uint64_t __dyc_thistype ) ;
extern simple_object_write_section __dyc_random_typdef_simple_object_write_section(unsigned int __dyc_exp ) ;
extern simple_object_write_section __dyc_read_typdef_simple_object_write_section(void) ;
extern void __dyc_print_typdef_simple_object_write_section(simple_object_write_section __dyc_thistype ) ;
extern char **__dyc_random_ptr__ptr__char(unsigned int __dyc_exp ) ;
extern char **__dyc_read_ptr__ptr__char(void) ;
extern void __dyc_print_ptr__ptr__char(char const   * const  *__dyc_thistype ) ;
