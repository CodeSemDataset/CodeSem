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
#line 48 "/home/chenqian/Downloads/eqminer_gcc/../gcc-10.3.0/libiberty/simple-object-mach-o.c"
struct mach_o_header_32 {
   unsigned char magic[4] ;
   unsigned char cputype[4] ;
   unsigned char cpusubtype[4] ;
   unsigned char filetype[4] ;
   unsigned char ncmds[4] ;
   unsigned char sizeofcmds[4] ;
   unsigned char flags[4] ;
};
#line 61 "/home/chenqian/Downloads/eqminer_gcc/../gcc-10.3.0/libiberty/simple-object-mach-o.c"
struct mach_o_header_64 {
   unsigned char magic[4] ;
   unsigned char cputype[4] ;
   unsigned char cpusubtype[4] ;
   unsigned char filetype[4] ;
   unsigned char ncmds[4] ;
   unsigned char sizeofcmds[4] ;
   unsigned char flags[4] ;
   unsigned char reserved[4] ;
};
#line 85 "/home/chenqian/Downloads/eqminer_gcc/../gcc-10.3.0/libiberty/simple-object-mach-o.c"
struct mach_o_load_command {
   unsigned char cmd[4] ;
   unsigned char cmdsize[4] ;
};
#line 98 "/home/chenqian/Downloads/eqminer_gcc/../gcc-10.3.0/libiberty/simple-object-mach-o.c"
struct mach_o_segment_command_32 {
   unsigned char cmd[4] ;
   unsigned char cmdsize[4] ;
   unsigned char segname[16] ;
   unsigned char vmaddr[4] ;
   unsigned char vmsize[4] ;
   unsigned char fileoff[4] ;
   unsigned char filesize[4] ;
   unsigned char maxprot[4] ;
   unsigned char initprot[4] ;
   unsigned char nsects[4] ;
   unsigned char flags[4] ;
};
#line 115 "/home/chenqian/Downloads/eqminer_gcc/../gcc-10.3.0/libiberty/simple-object-mach-o.c"
struct mach_o_segment_command_64 {
   unsigned char cmd[4] ;
   unsigned char cmdsize[4] ;
   unsigned char segname[16] ;
   unsigned char vmaddr[8] ;
   unsigned char vmsize[8] ;
   unsigned char fileoff[8] ;
   unsigned char filesize[8] ;
   unsigned char maxprot[4] ;
   unsigned char initprot[4] ;
   unsigned char nsects[4] ;
   unsigned char flags[4] ;
};
#line 132 "/home/chenqian/Downloads/eqminer_gcc/../gcc-10.3.0/libiberty/simple-object-mach-o.c"
struct mach_o_section_32 {
   unsigned char sectname[16] ;
   unsigned char segname[16] ;
   unsigned char addr[4] ;
   unsigned char size[4] ;
   unsigned char offset[4] ;
   unsigned char align[4] ;
   unsigned char reloff[4] ;
   unsigned char nreloc[4] ;
   unsigned char flags[4] ;
   unsigned char reserved1[4] ;
   unsigned char reserved2[4] ;
};
#line 149 "/home/chenqian/Downloads/eqminer_gcc/../gcc-10.3.0/libiberty/simple-object-mach-o.c"
struct mach_o_section_64 {
   unsigned char sectname[16] ;
   unsigned char segname[16] ;
   unsigned char addr[8] ;
   unsigned char size[8] ;
   unsigned char offset[4] ;
   unsigned char align[4] ;
   unsigned char reloff[4] ;
   unsigned char nreloc[4] ;
   unsigned char flags[4] ;
   unsigned char reserved1[4] ;
   unsigned char reserved2[4] ;
   unsigned char reserved3[4] ;
};
#line 188 "/home/chenqian/Downloads/eqminer_gcc/../gcc-10.3.0/libiberty/simple-object-mach-o.c"
struct simple_object_mach_o_read {
   char *segment_name ;
   unsigned int magic ;
   int is_big_endian ;
   unsigned int cputype ;
   unsigned int cpusubtype ;
   unsigned int ncmds ;
   unsigned int flags ;
   unsigned int reserved ;
};
#line 210 "/home/chenqian/Downloads/eqminer_gcc/../gcc-10.3.0/libiberty/simple-object-mach-o.c"
struct simple_object_mach_o_attributes {
   unsigned int magic ;
   int is_big_endian ;
   unsigned int cputype ;
   unsigned int cpusubtype ;
   unsigned int flags ;
   unsigned int reserved ;
};
extern struct mach_o_load_command *__dyc_random_ptr__comp_53mach_o_load_command(unsigned int __dyc_exp ) ;
extern struct mach_o_load_command *__dyc_read_ptr__comp_53mach_o_load_command(void) ;
extern void __dyc_print_ptr__comp_53mach_o_load_command(struct mach_o_load_command  const  *__dyc_thistype ) ;
extern simple_object_write __dyc_random_typdef_simple_object_write(unsigned int __dyc_exp ) ;
extern simple_object_write __dyc_read_typdef_simple_object_write(void) ;
extern void __dyc_print_typdef_simple_object_write(simple_object_write __dyc_thistype ) ;
extern struct simple_object_write_section_buffer *__dyc_random_ptr__comp_50simple_object_write_section_buffer(unsigned int __dyc_exp ) ;
extern struct simple_object_write_section_buffer *__dyc_read_ptr__comp_50simple_object_write_section_buffer(void) ;
extern void __dyc_print_ptr__comp_50simple_object_write_section_buffer(struct simple_object_write_section_buffer  const  *__dyc_thistype ) ;
extern struct simple_object_write_section_struct __dyc_random_comp_36simple_object_write_section_struct(unsigned int __dyc_exp ) ;
extern struct simple_object_write_section_struct __dyc_read_comp_36simple_object_write_section_struct(void) ;
extern void __dyc_print_comp_36simple_object_write_section_struct(struct simple_object_write_section_struct __dyc_thistype ) ;
extern struct mach_o_segment_command_64 __dyc_random_comp_55mach_o_segment_command_64(unsigned int __dyc_exp ) ;
extern struct mach_o_segment_command_64 __dyc_read_comp_55mach_o_segment_command_64(void) ;
extern void __dyc_print_comp_55mach_o_segment_command_64(struct mach_o_segment_command_64 __dyc_thistype ) ;
extern int *__dyc_random_ptr__int(unsigned int __dyc_exp ) ;
extern int *__dyc_read_ptr__int(void) ;
extern void __dyc_print_ptr__int(int const   *__dyc_thistype ) ;
extern size_t __dyc_random_typdef_size_t(unsigned int __dyc_exp ) ;
extern size_t __dyc_read_typdef_size_t(void) ;
extern void __dyc_print_typdef_size_t(size_t __dyc_thistype ) ;
extern struct mach_o_header_64 __dyc_random_comp_52mach_o_header_64(unsigned int __dyc_exp ) ;
extern struct mach_o_header_64 __dyc_read_comp_52mach_o_header_64(void) ;
extern void __dyc_print_comp_52mach_o_header_64(struct mach_o_header_64 __dyc_thistype ) ;
extern struct simple_object_mach_o_read *__dyc_random_ptr__comp_58simple_object_mach_o_read(unsigned int __dyc_exp ) ;
extern struct simple_object_mach_o_read *__dyc_read_ptr__comp_58simple_object_mach_o_read(void) ;
extern void __dyc_print_ptr__comp_58simple_object_mach_o_read(struct simple_object_mach_o_read  const  *__dyc_thistype ) ;
extern ulong_type __dyc_random_typdef_ulong_type(unsigned int __dyc_exp ) ;
extern ulong_type __dyc_read_typdef_ulong_type(void) ;
extern void __dyc_print_typdef_ulong_type(ulong_type __dyc_thistype ) ;
extern struct mach_o_header_32 __dyc_random_comp_51mach_o_header_32(unsigned int __dyc_exp ) ;
extern struct mach_o_header_32 __dyc_read_comp_51mach_o_header_32(void) ;
extern void __dyc_print_comp_51mach_o_header_32(struct mach_o_header_32 __dyc_thistype ) ;
extern struct mach_o_header_64 *__dyc_random_ptr__comp_52mach_o_header_64(unsigned int __dyc_exp ) ;
extern struct mach_o_header_64 *__dyc_read_ptr__comp_52mach_o_header_64(void) ;
extern void __dyc_print_ptr__comp_52mach_o_header_64(struct mach_o_header_64  const  *__dyc_thistype ) ;
extern simple_object_read __dyc_random_typdef_simple_object_read(unsigned int __dyc_exp ) ;
extern simple_object_read __dyc_read_typdef_simple_object_read(void) ;
extern void __dyc_print_typdef_simple_object_read(simple_object_read __dyc_thistype ) ;
extern struct mach_o_header_32 *__dyc_random_ptr__comp_51mach_o_header_32(unsigned int __dyc_exp ) ;
extern struct mach_o_header_32 *__dyc_read_ptr__comp_51mach_o_header_32(void) ;
extern void __dyc_print_ptr__comp_51mach_o_header_32(struct mach_o_header_32  const  *__dyc_thistype ) ;
extern struct mach_o_segment_command_32 __dyc_random_comp_54mach_o_segment_command_32(unsigned int __dyc_exp ) ;
extern struct mach_o_segment_command_32 __dyc_read_comp_54mach_o_segment_command_32(void) ;
extern void __dyc_print_comp_54mach_o_segment_command_32(struct mach_o_segment_command_32 __dyc_thistype ) ;
extern struct simple_object_mach_o_attributes __dyc_random_comp_59simple_object_mach_o_attributes(unsigned int __dyc_exp ) ;
extern struct simple_object_mach_o_attributes __dyc_read_comp_59simple_object_mach_o_attributes(void) ;
extern void __dyc_print_comp_59simple_object_mach_o_attributes(struct simple_object_mach_o_attributes __dyc_thistype ) ;
extern struct mach_o_section_32 __dyc_random_comp_56mach_o_section_32(unsigned int __dyc_exp ) ;
extern struct mach_o_section_32 __dyc_read_comp_56mach_o_section_32(void) ;
extern void __dyc_print_comp_56mach_o_section_32(struct mach_o_section_32 __dyc_thistype ) ;
extern struct mach_o_segment_command_64 *__dyc_random_ptr__comp_55mach_o_segment_command_64(unsigned int __dyc_exp ) ;
extern struct mach_o_segment_command_64 *__dyc_read_ptr__comp_55mach_o_segment_command_64(void) ;
extern void __dyc_print_ptr__comp_55mach_o_segment_command_64(struct mach_o_segment_command_64  const  *__dyc_thistype ) ;
extern __off_t __dyc_random_typdef___off_t(unsigned int __dyc_exp ) ;
extern __off_t __dyc_read_typdef___off_t(void) ;
extern void __dyc_print_typdef___off_t(__off_t __dyc_thistype ) ;
extern void *__dyc_random_ptr__fun_name_is_not_here(unsigned int __dyc_exp ) ;
extern void *__dyc_read_ptr__fun_name_is_not_here(void) ;
extern void __dyc_print_ptr__fun_name_is_not_here(void const   * const  __dyc_thistype ) ;
extern struct mach_o_load_command __dyc_random_comp_53mach_o_load_command(unsigned int __dyc_exp ) ;
extern struct mach_o_load_command __dyc_read_comp_53mach_o_load_command(void) ;
extern void __dyc_print_comp_53mach_o_load_command(struct mach_o_load_command __dyc_thistype ) ;
extern struct mach_o_section_64 __dyc_random_comp_57mach_o_section_64(unsigned int __dyc_exp ) ;
extern struct mach_o_section_64 __dyc_read_comp_57mach_o_section_64(void) ;
extern void __dyc_print_comp_57mach_o_section_64(struct mach_o_section_64 __dyc_thistype ) ;
extern void *__dyc_random_ptr__void(unsigned int __dyc_exp ) ;
extern void *__dyc_read_ptr__void(void) ;
extern void __dyc_print_ptr__void(void const   * const  __dyc_thistype ) ;
extern struct mach_o_segment_command_32 *__dyc_random_ptr__comp_54mach_o_segment_command_32(unsigned int __dyc_exp ) ;
extern struct mach_o_segment_command_32 *__dyc_read_ptr__comp_54mach_o_segment_command_32(void) ;
extern void __dyc_print_ptr__comp_54mach_o_segment_command_32(struct mach_o_segment_command_32  const  *__dyc_thistype ) ;
extern char *__dyc_random_ptr__char(unsigned int __dyc_exp ) ;
extern char *__dyc_read_ptr__char(void) ;
extern void __dyc_print_ptr__char(char const   *__dyc_thistype ) ;
extern struct mach_o_section_32 *__dyc_random_ptr__comp_56mach_o_section_32(unsigned int __dyc_exp ) ;
extern struct mach_o_section_32 *__dyc_read_ptr__comp_56mach_o_section_32(void) ;
extern void __dyc_print_ptr__comp_56mach_o_section_32(struct mach_o_section_32  const  *__dyc_thistype ) ;
extern struct simple_object_write_section_buffer __dyc_random_comp_50simple_object_write_section_buffer(unsigned int __dyc_exp ) ;
extern struct simple_object_write_section_buffer __dyc_read_comp_50simple_object_write_section_buffer(void) ;
extern void __dyc_print_comp_50simple_object_write_section_buffer(struct simple_object_write_section_buffer __dyc_thistype ) ;
extern struct mach_o_section_64 *__dyc_random_ptr__comp_57mach_o_section_64(unsigned int __dyc_exp ) ;
extern struct mach_o_section_64 *__dyc_read_ptr__comp_57mach_o_section_64(void) ;
extern void __dyc_print_ptr__comp_57mach_o_section_64(struct mach_o_section_64  const  *__dyc_thistype ) ;
extern struct simple_object_functions *__dyc_random_ptr__comp_49simple_object_functions(unsigned int __dyc_exp ) ;
extern struct simple_object_functions *__dyc_read_ptr__comp_49simple_object_functions(void) ;
extern void __dyc_print_ptr__comp_49simple_object_functions(struct simple_object_functions  const  *__dyc_thistype ) ;
extern off_t __dyc_random_typdef_off_t(unsigned int __dyc_exp ) ;
extern off_t __dyc_read_typdef_off_t(void) ;
extern void __dyc_print_typdef_off_t(off_t __dyc_thistype ) ;
extern size_t *__dyc_random_ptr__typdef_size_t(unsigned int __dyc_exp ) ;
extern size_t *__dyc_read_ptr__typdef_size_t(void) ;
extern void __dyc_print_ptr__typdef_size_t(size_t const   *__dyc_thistype ) ;
extern simple_object_write_section *__dyc_random_ptr__typdef_simple_object_write_section(unsigned int __dyc_exp ) ;
extern simple_object_write_section *__dyc_read_ptr__typdef_simple_object_write_section(void) ;
extern void __dyc_print_ptr__typdef_simple_object_write_section(simple_object_write_section const   *__dyc_thistype ) ;
extern simple_object_write *__dyc_random_ptr__typdef_simple_object_write(unsigned int __dyc_exp ) ;
extern simple_object_write *__dyc_read_ptr__typdef_simple_object_write(void) ;
extern void __dyc_print_ptr__typdef_simple_object_write(simple_object_write const   *__dyc_thistype ) ;
extern simple_object_read *__dyc_random_ptr__typdef_simple_object_read(unsigned int __dyc_exp ) ;
extern simple_object_read *__dyc_read_ptr__typdef_simple_object_read(void) ;
extern void __dyc_print_ptr__typdef_simple_object_read(simple_object_read const   *__dyc_thistype ) ;
extern struct simple_object_write_struct __dyc_random_comp_35simple_object_write_struct(unsigned int __dyc_exp ) ;
extern struct simple_object_write_struct __dyc_read_comp_35simple_object_write_struct(void) ;
extern void __dyc_print_comp_35simple_object_write_struct(struct simple_object_write_struct __dyc_thistype ) ;
extern off_t *__dyc_random_ptr__typdef_off_t(unsigned int __dyc_exp ) ;
extern off_t *__dyc_read_ptr__typdef_off_t(void) ;
extern void __dyc_print_ptr__typdef_off_t(off_t const   *__dyc_thistype ) ;
extern struct simple_object_read_struct __dyc_random_comp_33simple_object_read_struct(unsigned int __dyc_exp ) ;
extern struct simple_object_read_struct __dyc_read_comp_33simple_object_read_struct(void) ;
extern void __dyc_print_comp_33simple_object_read_struct(struct simple_object_read_struct __dyc_thistype ) ;
extern struct simple_object_mach_o_attributes *__dyc_random_ptr__comp_59simple_object_mach_o_attributes(unsigned int __dyc_exp ) ;
extern struct simple_object_mach_o_attributes *__dyc_read_ptr__comp_59simple_object_mach_o_attributes(void) ;
extern void __dyc_print_ptr__comp_59simple_object_mach_o_attributes(struct simple_object_mach_o_attributes  const  *__dyc_thistype ) ;
extern struct simple_object_mach_o_read __dyc_random_comp_58simple_object_mach_o_read(unsigned int __dyc_exp ) ;
extern struct simple_object_mach_o_read __dyc_read_comp_58simple_object_mach_o_read(void) ;
extern void __dyc_print_comp_58simple_object_mach_o_read(struct simple_object_mach_o_read __dyc_thistype ) ;
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
