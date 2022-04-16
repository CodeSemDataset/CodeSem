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
#line 49 "/home/chenqian/Downloads/eqminer_gcc/../gcc-10.3.0/libiberty/simple-object-coff.c"
struct external_filehdr {
   unsigned char f_magic[2] ;
   unsigned char f_nscns[2] ;
   unsigned char f_timdat[4] ;
   unsigned char f_symptr[4] ;
   unsigned char f_nsyms[4] ;
   unsigned char f_opthdr[2] ;
   unsigned char f_flags[2] ;
};
#line 68 "/home/chenqian/Downloads/eqminer_gcc/../gcc-10.3.0/libiberty/simple-object-coff.c"
struct external_scnhdr {
   unsigned char s_name[8] ;
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
#line 102 "/home/chenqian/Downloads/eqminer_gcc/../gcc-10.3.0/libiberty/simple-object-coff.c"
struct __anonstruct_e_31 {
   unsigned char e_zeroes[4] ;
   unsigned char e_offset[4] ;
};
#line 102 "/home/chenqian/Downloads/eqminer_gcc/../gcc-10.3.0/libiberty/simple-object-coff.c"
union __anonunion_e_30 {
   unsigned char e_name[8] ;
   struct __anonstruct_e_31 e ;
};
#line 102 "/home/chenqian/Downloads/eqminer_gcc/../gcc-10.3.0/libiberty/simple-object-coff.c"
struct external_syment {
   union __anonunion_e_30 e ;
   unsigned char e_value[4] ;
   unsigned char e_scnum[2] ;
   unsigned char e_type[2] ;
   unsigned char e_sclass[1] ;
   unsigned char e_numaux[1] ;
};
#line 128 "/home/chenqian/Downloads/eqminer_gcc/../gcc-10.3.0/libiberty/simple-object-coff.c"
struct __anonstruct_x_n_33 {
   unsigned char x_zeroes[4] ;
   unsigned char x_offset[4] ;
};
#line 128 "/home/chenqian/Downloads/eqminer_gcc/../gcc-10.3.0/libiberty/simple-object-coff.c"
union __anonunion_x_file_32 {
   char x_fname[18] ;
   struct __anonstruct_x_n_33 x_n ;
};
#line 128 "/home/chenqian/Downloads/eqminer_gcc/../gcc-10.3.0/libiberty/simple-object-coff.c"
struct __anonstruct_x_scn_34 {
   unsigned char x_scnlen[4] ;
   unsigned char x_nreloc[2] ;
   unsigned char x_nlinno[2] ;
   unsigned char x_checksum[4] ;
   unsigned char x_associated[2] ;
   unsigned char x_comdat[1] ;
};
#line 128 "/home/chenqian/Downloads/eqminer_gcc/../gcc-10.3.0/libiberty/simple-object-coff.c"
union external_auxent {
   union __anonunion_x_file_32 x_file ;
   struct __anonstruct_x_scn_34 x_scn ;
};
#line 165 "/home/chenqian/Downloads/eqminer_gcc/../gcc-10.3.0/libiberty/simple-object-coff.c"
struct simple_object_coff_read {
   unsigned short magic ;
   unsigned char is_big_endian ;
   unsigned short nscns ;
   off_t symptr ;
   unsigned int nsyms ;
   unsigned short flags ;
   off_t scnhdr_offset ;
};
#line 185 "/home/chenqian/Downloads/eqminer_gcc/../gcc-10.3.0/libiberty/simple-object-coff.c"
struct simple_object_coff_attributes {
   unsigned short magic ;
   unsigned char is_big_endian ;
   unsigned short flags ;
};
#line 201 "/home/chenqian/Downloads/eqminer_gcc/../gcc-10.3.0/libiberty/simple-object-coff.c"
struct coff_magic_struct {
   unsigned short magic ;
   unsigned char is_big_endian ;
   unsigned short non_object_flags ;
};
#line 619 "/home/chenqian/Downloads/eqminer_gcc/../gcc-10.3.0/libiberty/simple-object-coff.c"
union __anonunion_syms_35 {
   struct external_syment sym ;
   union external_auxent aux ;
};
extern struct external_scnhdr *__dyc_random_ptr__comp_52external_scnhdr(unsigned int __dyc_exp ) ;
extern struct external_scnhdr *__dyc_read_ptr__comp_52external_scnhdr(void) ;
extern void __dyc_print_ptr__comp_52external_scnhdr(struct external_scnhdr  const  *__dyc_thistype ) ;
extern simple_object_write __dyc_random_typdef_simple_object_write(unsigned int __dyc_exp ) ;
extern simple_object_write __dyc_read_typdef_simple_object_write(void) ;
extern void __dyc_print_typdef_simple_object_write(simple_object_write __dyc_thistype ) ;
extern struct simple_object_coff_read __dyc_random_comp_60simple_object_coff_read(unsigned int __dyc_exp ) ;
extern struct simple_object_coff_read __dyc_read_comp_60simple_object_coff_read(void) ;
extern void __dyc_print_comp_60simple_object_coff_read(struct simple_object_coff_read __dyc_thistype ) ;
extern union external_auxent __dyc_random_comp_56external_auxent(unsigned int __dyc_exp ) ;
extern union external_auxent __dyc_read_comp_56external_auxent(void) ;
extern void __dyc_print_comp_56external_auxent(union external_auxent __dyc_thistype ) ;
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
extern union __anonunion_syms_35 __dyc_random_comp_63__anonunion_syms_35(unsigned int __dyc_exp ) ;
extern union __anonunion_syms_35 __dyc_read_comp_63__anonunion_syms_35(void) ;
extern void __dyc_print_comp_63__anonunion_syms_35(union __anonunion_syms_35 __dyc_thistype ) ;
extern simple_object_read __dyc_random_typdef_simple_object_read(unsigned int __dyc_exp ) ;
extern simple_object_read __dyc_read_typdef_simple_object_read(void) ;
extern void __dyc_print_typdef_simple_object_read(simple_object_read __dyc_thistype ) ;
extern struct simple_object_coff_attributes __dyc_random_comp_61simple_object_coff_attributes(unsigned int __dyc_exp ) ;
extern struct simple_object_coff_attributes __dyc_read_comp_61simple_object_coff_attributes(void) ;
extern void __dyc_print_comp_61simple_object_coff_attributes(struct simple_object_coff_attributes __dyc_thistype ) ;
extern __off_t __dyc_random_typdef___off_t(unsigned int __dyc_exp ) ;
extern __off_t __dyc_read_typdef___off_t(void) ;
extern void __dyc_print_typdef___off_t(__off_t __dyc_thistype ) ;
extern void *__dyc_random_ptr__fun_name_is_not_here(unsigned int __dyc_exp ) ;
extern void *__dyc_read_ptr__fun_name_is_not_here(void) ;
extern void __dyc_print_ptr__fun_name_is_not_here(void const   * const  __dyc_thistype ) ;
extern struct external_scnhdr __dyc_random_comp_52external_scnhdr(unsigned int __dyc_exp ) ;
extern struct external_scnhdr __dyc_read_comp_52external_scnhdr(void) ;
extern void __dyc_print_comp_52external_scnhdr(struct external_scnhdr __dyc_thistype ) ;
extern struct __anonstruct_e_31 __dyc_random_comp_55__anonstruct_e_31(unsigned int __dyc_exp ) ;
extern struct __anonstruct_e_31 __dyc_read_comp_55__anonstruct_e_31(void) ;
extern void __dyc_print_comp_55__anonstruct_e_31(struct __anonstruct_e_31 __dyc_thistype ) ;
extern void *__dyc_random_ptr__void(unsigned int __dyc_exp ) ;
extern void *__dyc_read_ptr__void(void) ;
extern void __dyc_print_ptr__void(void const   * const  __dyc_thistype ) ;
extern struct __anonstruct_x_n_33 __dyc_random_comp_58__anonstruct_x_n_33(unsigned int __dyc_exp ) ;
extern struct __anonstruct_x_n_33 __dyc_read_comp_58__anonstruct_x_n_33(void) ;
extern void __dyc_print_comp_58__anonstruct_x_n_33(struct __anonstruct_x_n_33 __dyc_thistype ) ;
extern struct external_syment __dyc_random_comp_53external_syment(unsigned int __dyc_exp ) ;
extern struct external_syment __dyc_read_comp_53external_syment(void) ;
extern void __dyc_print_comp_53external_syment(struct external_syment __dyc_thistype ) ;
extern char *__dyc_random_ptr__char(unsigned int __dyc_exp ) ;
extern char *__dyc_read_ptr__char(void) ;
extern void __dyc_print_ptr__char(char const   *__dyc_thistype ) ;
extern struct simple_object_coff_attributes *__dyc_random_ptr__comp_61simple_object_coff_attributes(unsigned int __dyc_exp ) ;
extern struct simple_object_coff_attributes *__dyc_read_ptr__comp_61simple_object_coff_attributes(void) ;
extern void __dyc_print_ptr__comp_61simple_object_coff_attributes(struct simple_object_coff_attributes  const  *__dyc_thistype ) ;
extern struct simple_object_write_section_buffer __dyc_random_comp_50simple_object_write_section_buffer(unsigned int __dyc_exp ) ;
extern struct simple_object_write_section_buffer __dyc_read_comp_50simple_object_write_section_buffer(void) ;
extern void __dyc_print_comp_50simple_object_write_section_buffer(struct simple_object_write_section_buffer __dyc_thistype ) ;
extern union __anonunion_e_30 __dyc_random_comp_54__anonunion_e_30(unsigned int __dyc_exp ) ;
extern union __anonunion_e_30 __dyc_read_comp_54__anonunion_e_30(void) ;
extern void __dyc_print_comp_54__anonunion_e_30(union __anonunion_e_30 __dyc_thistype ) ;
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
extern union __anonunion_x_file_32 __dyc_random_comp_57__anonunion_x_file_32(unsigned int __dyc_exp ) ;
extern union __anonunion_x_file_32 __dyc_read_comp_57__anonunion_x_file_32(void) ;
extern void __dyc_print_comp_57__anonunion_x_file_32(union __anonunion_x_file_32 __dyc_thistype ) ;
extern struct coff_magic_struct __dyc_random_comp_62coff_magic_struct(unsigned int __dyc_exp ) ;
extern struct coff_magic_struct __dyc_read_comp_62coff_magic_struct(void) ;
extern void __dyc_print_comp_62coff_magic_struct(struct coff_magic_struct __dyc_thistype ) ;
extern simple_object_write *__dyc_random_ptr__typdef_simple_object_write(unsigned int __dyc_exp ) ;
extern simple_object_write *__dyc_read_ptr__typdef_simple_object_write(void) ;
extern void __dyc_print_ptr__typdef_simple_object_write(simple_object_write const   *__dyc_thistype ) ;
extern struct external_filehdr *__dyc_random_ptr__comp_51external_filehdr(unsigned int __dyc_exp ) ;
extern struct external_filehdr *__dyc_read_ptr__comp_51external_filehdr(void) ;
extern void __dyc_print_ptr__comp_51external_filehdr(struct external_filehdr  const  *__dyc_thistype ) ;
extern struct simple_object_coff_read *__dyc_random_ptr__comp_60simple_object_coff_read(unsigned int __dyc_exp ) ;
extern struct simple_object_coff_read *__dyc_read_ptr__comp_60simple_object_coff_read(void) ;
extern void __dyc_print_ptr__comp_60simple_object_coff_read(struct simple_object_coff_read  const  *__dyc_thistype ) ;
extern simple_object_read *__dyc_random_ptr__typdef_simple_object_read(unsigned int __dyc_exp ) ;
extern simple_object_read *__dyc_read_ptr__typdef_simple_object_read(void) ;
extern void __dyc_print_ptr__typdef_simple_object_read(simple_object_read const   *__dyc_thistype ) ;
extern struct simple_object_write_struct __dyc_random_comp_35simple_object_write_struct(unsigned int __dyc_exp ) ;
extern struct simple_object_write_struct __dyc_read_comp_35simple_object_write_struct(void) ;
extern void __dyc_print_comp_35simple_object_write_struct(struct simple_object_write_struct __dyc_thistype ) ;
extern struct __anonstruct_x_scn_34 __dyc_random_comp_59__anonstruct_x_scn_34(unsigned int __dyc_exp ) ;
extern struct __anonstruct_x_scn_34 __dyc_read_comp_59__anonstruct_x_scn_34(void) ;
extern void __dyc_print_comp_59__anonstruct_x_scn_34(struct __anonstruct_x_scn_34 __dyc_thistype ) ;
extern struct simple_object_read_struct __dyc_random_comp_33simple_object_read_struct(unsigned int __dyc_exp ) ;
extern struct simple_object_read_struct __dyc_read_comp_33simple_object_read_struct(void) ;
extern void __dyc_print_comp_33simple_object_read_struct(struct simple_object_read_struct __dyc_thistype ) ;
extern struct simple_object_functions __dyc_random_comp_49simple_object_functions(unsigned int __dyc_exp ) ;
extern struct simple_object_functions __dyc_read_comp_49simple_object_functions(void) ;
extern void __dyc_print_comp_49simple_object_functions(struct simple_object_functions __dyc_thistype ) ;
extern simple_object_write_section __dyc_random_typdef_simple_object_write_section(unsigned int __dyc_exp ) ;
extern simple_object_write_section __dyc_read_typdef_simple_object_write_section(void) ;
extern void __dyc_print_typdef_simple_object_write_section(simple_object_write_section __dyc_thistype ) ;
extern char **__dyc_random_ptr__ptr__char(unsigned int __dyc_exp ) ;
extern char **__dyc_read_ptr__ptr__char(void) ;
extern void __dyc_print_ptr__ptr__char(char const   * const  *__dyc_thistype ) ;
