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
#line 53 "/home/chenqian/Downloads/eqminer_gcc/../gcc-10.3.0/libiberty/simple-object-elf.c"
struct __anonstruct_Elf32_External_Ehdr_30 {
   unsigned char e_ident[16] ;
   unsigned char e_type[2] ;
   unsigned char e_machine[2] ;
   unsigned char e_version[4] ;
   unsigned char e_entry[4] ;
   unsigned char e_phoff[4] ;
   unsigned char e_shoff[4] ;
   unsigned char e_flags[4] ;
   unsigned char e_ehsize[2] ;
   unsigned char e_phentsize[2] ;
   unsigned char e_phnum[2] ;
   unsigned char e_shentsize[2] ;
   unsigned char e_shnum[2] ;
   unsigned char e_shstrndx[2] ;
};
#line 53 "/home/chenqian/Downloads/eqminer_gcc/../gcc-10.3.0/libiberty/simple-object-elf.c"
typedef struct __anonstruct_Elf32_External_Ehdr_30 Elf32_External_Ehdr;
#line 72 "/home/chenqian/Downloads/eqminer_gcc/../gcc-10.3.0/libiberty/simple-object-elf.c"
struct __anonstruct_Elf64_External_Ehdr_31 {
   unsigned char e_ident[16] ;
   unsigned char e_type[2] ;
   unsigned char e_machine[2] ;
   unsigned char e_version[4] ;
   unsigned char e_entry[8] ;
   unsigned char e_phoff[8] ;
   unsigned char e_shoff[8] ;
   unsigned char e_flags[4] ;
   unsigned char e_ehsize[2] ;
   unsigned char e_phentsize[2] ;
   unsigned char e_phnum[2] ;
   unsigned char e_shentsize[2] ;
   unsigned char e_shnum[2] ;
   unsigned char e_shstrndx[2] ;
};
#line 72 "/home/chenqian/Downloads/eqminer_gcc/../gcc-10.3.0/libiberty/simple-object-elf.c"
typedef struct __anonstruct_Elf64_External_Ehdr_31 Elf64_External_Ehdr;
#line 138 "/home/chenqian/Downloads/eqminer_gcc/../gcc-10.3.0/libiberty/simple-object-elf.c"
struct __anonstruct_Elf32_External_Phdr_32 {
   unsigned char p_type[4] ;
   unsigned char p_offset[4] ;
   unsigned char p_vaddr[4] ;
   unsigned char p_paddr[4] ;
   unsigned char p_filesz[4] ;
   unsigned char p_memsz[4] ;
   unsigned char p_flags[4] ;
   unsigned char p_align[4] ;
};
#line 138 "/home/chenqian/Downloads/eqminer_gcc/../gcc-10.3.0/libiberty/simple-object-elf.c"
typedef struct __anonstruct_Elf32_External_Phdr_32 Elf32_External_Phdr;
#line 151 "/home/chenqian/Downloads/eqminer_gcc/../gcc-10.3.0/libiberty/simple-object-elf.c"
struct __anonstruct_Elf64_External_Phdr_33 {
   unsigned char p_type[4] ;
   unsigned char p_flags[4] ;
   unsigned char p_offset[8] ;
   unsigned char p_vaddr[8] ;
   unsigned char p_paddr[8] ;
   unsigned char p_filesz[8] ;
   unsigned char p_memsz[8] ;
   unsigned char p_align[8] ;
};
#line 151 "/home/chenqian/Downloads/eqminer_gcc/../gcc-10.3.0/libiberty/simple-object-elf.c"
typedef struct __anonstruct_Elf64_External_Phdr_33 Elf64_External_Phdr;
#line 164 "/home/chenqian/Downloads/eqminer_gcc/../gcc-10.3.0/libiberty/simple-object-elf.c"
struct __anonstruct_Elf32_External_Shdr_34 {
   unsigned char sh_name[4] ;
   unsigned char sh_type[4] ;
   unsigned char sh_flags[4] ;
   unsigned char sh_addr[4] ;
   unsigned char sh_offset[4] ;
   unsigned char sh_size[4] ;
   unsigned char sh_link[4] ;
   unsigned char sh_info[4] ;
   unsigned char sh_addralign[4] ;
   unsigned char sh_entsize[4] ;
};
#line 164 "/home/chenqian/Downloads/eqminer_gcc/../gcc-10.3.0/libiberty/simple-object-elf.c"
typedef struct __anonstruct_Elf32_External_Shdr_34 Elf32_External_Shdr;
#line 179 "/home/chenqian/Downloads/eqminer_gcc/../gcc-10.3.0/libiberty/simple-object-elf.c"
struct __anonstruct_Elf64_External_Shdr_35 {
   unsigned char sh_name[4] ;
   unsigned char sh_type[4] ;
   unsigned char sh_flags[8] ;
   unsigned char sh_addr[8] ;
   unsigned char sh_offset[8] ;
   unsigned char sh_size[8] ;
   unsigned char sh_link[4] ;
   unsigned char sh_info[4] ;
   unsigned char sh_addralign[8] ;
   unsigned char sh_entsize[8] ;
};
#line 179 "/home/chenqian/Downloads/eqminer_gcc/../gcc-10.3.0/libiberty/simple-object-elf.c"
typedef struct __anonstruct_Elf64_External_Shdr_35 Elf64_External_Shdr;
#line 214 "/home/chenqian/Downloads/eqminer_gcc/../gcc-10.3.0/libiberty/simple-object-elf.c"
struct __anonstruct_Elf32_External_Sym_36 {
   unsigned char st_name[4] ;
   unsigned char st_value[4] ;
   unsigned char st_size[4] ;
   unsigned char st_info ;
   unsigned char st_other ;
   unsigned char st_shndx[2] ;
};
#line 214 "/home/chenqian/Downloads/eqminer_gcc/../gcc-10.3.0/libiberty/simple-object-elf.c"
typedef struct __anonstruct_Elf32_External_Sym_36 Elf32_External_Sym;
#line 224 "/home/chenqian/Downloads/eqminer_gcc/../gcc-10.3.0/libiberty/simple-object-elf.c"
struct __anonstruct_Elf64_External_Sym_37 {
   unsigned char st_name[4] ;
   unsigned char st_info ;
   unsigned char st_other ;
   unsigned char st_shndx[2] ;
   unsigned char st_value[8] ;
   unsigned char st_size[8] ;
};
#line 224 "/home/chenqian/Downloads/eqminer_gcc/../gcc-10.3.0/libiberty/simple-object-elf.c"
typedef struct __anonstruct_Elf64_External_Sym_37 Elf64_External_Sym;
#line 254 "/home/chenqian/Downloads/eqminer_gcc/../gcc-10.3.0/libiberty/simple-object-elf.c"
struct elf_type_functions {
   unsigned short (*fetch_Elf_Half)(unsigned char const   * ) ;
   unsigned int (*fetch_Elf_Word)(unsigned char const   * ) ;
   ulong_type (*fetch_Elf_Addr)(unsigned char const   * ) ;
   void (*set_Elf_Half)(unsigned char * , unsigned short  ) ;
   void (*set_Elf_Word)(unsigned char * , unsigned int  ) ;
   void (*set_Elf_Addr)(unsigned char * , ulong_type  ) ;
};
#line 373 "/home/chenqian/Downloads/eqminer_gcc/../gcc-10.3.0/libiberty/simple-object-elf.c"
struct simple_object_elf_read {
   struct elf_type_functions *type_functions ;
   unsigned char ei_data ;
   unsigned char ei_class ;
   unsigned char ei_osabi ;
   unsigned short machine ;
   unsigned int flags ;
   ulong_type shoff ;
   unsigned int shnum ;
   unsigned int shstrndx ;
};
#line 397 "/home/chenqian/Downloads/eqminer_gcc/../gcc-10.3.0/libiberty/simple-object-elf.c"
struct simple_object_elf_attributes {
   struct elf_type_functions *type_functions ;
   unsigned char ei_data ;
   unsigned char ei_class ;
   unsigned char ei_osabi ;
   unsigned short machine ;
   unsigned int flags ;
};
#line 415 "/home/chenqian/Downloads/eqminer_gcc/../gcc-10.3.0/libiberty/simple-object-elf.c"
struct simple_object_elf_write {
   struct simple_object_elf_attributes attrs ;
   unsigned char *shdrs ;
};
extern simple_object_write __dyc_random_typdef_simple_object_write(unsigned int __dyc_exp ) ;
extern simple_object_write __dyc_read_typdef_simple_object_write(void) ;
extern void __dyc_print_typdef_simple_object_write(simple_object_write __dyc_thistype ) ;
extern Elf64_External_Shdr __dyc_random_typdef_Elf64_External_Shdr(unsigned int __dyc_exp ) ;
extern Elf64_External_Shdr __dyc_read_typdef_Elf64_External_Shdr(void) ;
extern void __dyc_print_typdef_Elf64_External_Shdr(Elf64_External_Shdr __dyc_thistype ) ;
extern struct __anonstruct_Elf32_External_Ehdr_30 __dyc_random_comp_51__anonstruct_Elf32_External_Ehdr_30(unsigned int __dyc_exp ) ;
extern struct __anonstruct_Elf32_External_Ehdr_30 __dyc_read_comp_51__anonstruct_Elf32_External_Ehdr_30(void) ;
extern void __dyc_print_comp_51__anonstruct_Elf32_External_Ehdr_30(struct __anonstruct_Elf32_External_Ehdr_30 __dyc_thistype ) ;
extern Elf32_External_Sym __dyc_random_typdef_Elf32_External_Sym(unsigned int __dyc_exp ) ;
extern Elf32_External_Sym __dyc_read_typdef_Elf32_External_Sym(void) ;
extern void __dyc_print_typdef_Elf32_External_Sym(Elf32_External_Sym __dyc_thistype ) ;
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
extern ulong_type __dyc_random_typdef_ulong_type(unsigned int __dyc_exp ) ;
extern ulong_type __dyc_read_typdef_ulong_type(void) ;
extern void __dyc_print_typdef_ulong_type(ulong_type __dyc_thistype ) ;
extern struct simple_object_elf_read *__dyc_random_ptr__comp_60simple_object_elf_read(unsigned int __dyc_exp ) ;
extern struct simple_object_elf_read *__dyc_read_ptr__comp_60simple_object_elf_read(void) ;
extern void __dyc_print_ptr__comp_60simple_object_elf_read(struct simple_object_elf_read  const  *__dyc_thistype ) ;
extern Elf64_External_Sym __dyc_random_typdef_Elf64_External_Sym(unsigned int __dyc_exp ) ;
extern Elf64_External_Sym __dyc_read_typdef_Elf64_External_Sym(void) ;
extern void __dyc_print_typdef_Elf64_External_Sym(Elf64_External_Sym __dyc_thistype ) ;
extern Elf32_External_Shdr *__dyc_random_ptr__typdef_Elf32_External_Shdr(unsigned int __dyc_exp ) ;
extern Elf32_External_Shdr *__dyc_read_ptr__typdef_Elf32_External_Shdr(void) ;
extern void __dyc_print_ptr__typdef_Elf32_External_Shdr(Elf32_External_Shdr const   *__dyc_thistype ) ;
extern struct simple_object_elf_write __dyc_random_comp_62simple_object_elf_write(unsigned int __dyc_exp ) ;
extern struct simple_object_elf_write __dyc_read_comp_62simple_object_elf_write(void) ;
extern void __dyc_print_comp_62simple_object_elf_write(struct simple_object_elf_write __dyc_thistype ) ;
extern simple_object_read __dyc_random_typdef_simple_object_read(unsigned int __dyc_exp ) ;
extern simple_object_read __dyc_read_typdef_simple_object_read(void) ;
extern void __dyc_print_typdef_simple_object_read(simple_object_read __dyc_thistype ) ;
extern Elf64_External_Phdr __dyc_random_typdef_Elf64_External_Phdr(unsigned int __dyc_exp ) ;
extern Elf64_External_Phdr __dyc_read_typdef_Elf64_External_Phdr(void) ;
extern void __dyc_print_typdef_Elf64_External_Phdr(Elf64_External_Phdr __dyc_thistype ) ;
extern Elf32_External_Ehdr __dyc_random_typdef_Elf32_External_Ehdr(unsigned int __dyc_exp ) ;
extern Elf32_External_Ehdr __dyc_read_typdef_Elf32_External_Ehdr(void) ;
extern void __dyc_print_typdef_Elf32_External_Ehdr(Elf32_External_Ehdr __dyc_thistype ) ;
extern __off_t __dyc_random_typdef___off_t(unsigned int __dyc_exp ) ;
extern __off_t __dyc_read_typdef___off_t(void) ;
extern void __dyc_print_typdef___off_t(__off_t __dyc_thistype ) ;
extern void *__dyc_random_ptr__fun_name_is_not_here(unsigned int __dyc_exp ) ;
extern void *__dyc_read_ptr__fun_name_is_not_here(void) ;
extern void __dyc_print_ptr__fun_name_is_not_here(void const   * const  __dyc_thistype ) ;
extern void *__dyc_random_ptr__void(unsigned int __dyc_exp ) ;
extern void *__dyc_read_ptr__void(void) ;
extern void __dyc_print_ptr__void(void const   * const  __dyc_thistype ) ;
extern struct simple_object_elf_attributes __dyc_random_comp_61simple_object_elf_attributes(unsigned int __dyc_exp ) ;
extern struct simple_object_elf_attributes __dyc_read_comp_61simple_object_elf_attributes(void) ;
extern void __dyc_print_comp_61simple_object_elf_attributes(struct simple_object_elf_attributes __dyc_thistype ) ;
extern struct elf_type_functions __dyc_random_comp_59elf_type_functions(unsigned int __dyc_exp ) ;
extern struct elf_type_functions __dyc_read_comp_59elf_type_functions(void) ;
extern void __dyc_print_comp_59elf_type_functions(struct elf_type_functions __dyc_thistype ) ;
extern struct __anonstruct_Elf64_External_Sym_37 __dyc_random_comp_58__anonstruct_Elf64_External_Sym_37(unsigned int __dyc_exp ) ;
extern struct __anonstruct_Elf64_External_Sym_37 __dyc_read_comp_58__anonstruct_Elf64_External_Sym_37(void) ;
extern void __dyc_print_comp_58__anonstruct_Elf64_External_Sym_37(struct __anonstruct_Elf64_External_Sym_37 __dyc_thistype ) ;
extern char *__dyc_random_ptr__char(unsigned int __dyc_exp ) ;
extern char *__dyc_read_ptr__char(void) ;
extern void __dyc_print_ptr__char(char const   *__dyc_thistype ) ;
extern struct simple_object_elf_attributes *__dyc_random_ptr__comp_61simple_object_elf_attributes(unsigned int __dyc_exp ) ;
extern struct simple_object_elf_attributes *__dyc_read_ptr__comp_61simple_object_elf_attributes(void) ;
extern void __dyc_print_ptr__comp_61simple_object_elf_attributes(struct simple_object_elf_attributes  const  *__dyc_thistype ) ;
extern struct __anonstruct_Elf64_External_Phdr_33 __dyc_random_comp_54__anonstruct_Elf64_External_Phdr_33(unsigned int __dyc_exp ) ;
extern struct __anonstruct_Elf64_External_Phdr_33 __dyc_read_comp_54__anonstruct_Elf64_External_Phdr_33(void) ;
extern void __dyc_print_comp_54__anonstruct_Elf64_External_Phdr_33(struct __anonstruct_Elf64_External_Phdr_33 __dyc_thistype ) ;
extern Elf32_External_Shdr __dyc_random_typdef_Elf32_External_Shdr(unsigned int __dyc_exp ) ;
extern Elf32_External_Shdr __dyc_read_typdef_Elf32_External_Shdr(void) ;
extern void __dyc_print_typdef_Elf32_External_Shdr(Elf32_External_Shdr __dyc_thistype ) ;
extern struct __anonstruct_Elf64_External_Shdr_35 __dyc_random_comp_56__anonstruct_Elf64_External_Shdr_35(unsigned int __dyc_exp ) ;
extern struct __anonstruct_Elf64_External_Shdr_35 __dyc_read_comp_56__anonstruct_Elf64_External_Shdr_35(void) ;
extern void __dyc_print_comp_56__anonstruct_Elf64_External_Shdr_35(struct __anonstruct_Elf64_External_Shdr_35 __dyc_thistype ) ;
extern Elf64_External_Ehdr *__dyc_random_ptr__typdef_Elf64_External_Ehdr(unsigned int __dyc_exp ) ;
extern Elf64_External_Ehdr *__dyc_read_ptr__typdef_Elf64_External_Ehdr(void) ;
extern void __dyc_print_ptr__typdef_Elf64_External_Ehdr(Elf64_External_Ehdr const   *__dyc_thistype ) ;
extern struct simple_object_write_section_buffer __dyc_random_comp_50simple_object_write_section_buffer(unsigned int __dyc_exp ) ;
extern struct simple_object_write_section_buffer __dyc_read_comp_50simple_object_write_section_buffer(void) ;
extern void __dyc_print_comp_50simple_object_write_section_buffer(struct simple_object_write_section_buffer __dyc_thistype ) ;
extern struct simple_object_elf_read __dyc_random_comp_60simple_object_elf_read(unsigned int __dyc_exp ) ;
extern struct simple_object_elf_read __dyc_read_comp_60simple_object_elf_read(void) ;
extern void __dyc_print_comp_60simple_object_elf_read(struct simple_object_elf_read __dyc_thistype ) ;
extern Elf32_External_Sym *__dyc_random_ptr__typdef_Elf32_External_Sym(unsigned int __dyc_exp ) ;
extern Elf32_External_Sym *__dyc_read_ptr__typdef_Elf32_External_Sym(void) ;
extern void __dyc_print_ptr__typdef_Elf32_External_Sym(Elf32_External_Sym const   *__dyc_thistype ) ;
extern struct __anonstruct_Elf32_External_Sym_36 __dyc_random_comp_57__anonstruct_Elf32_External_Sym_36(unsigned int __dyc_exp ) ;
extern struct __anonstruct_Elf32_External_Sym_36 __dyc_read_comp_57__anonstruct_Elf32_External_Sym_36(void) ;
extern void __dyc_print_comp_57__anonstruct_Elf32_External_Sym_36(struct __anonstruct_Elf32_External_Sym_36 __dyc_thistype ) ;
extern struct __anonstruct_Elf32_External_Phdr_32 __dyc_random_comp_53__anonstruct_Elf32_External_Phdr_32(unsigned int __dyc_exp ) ;
extern struct __anonstruct_Elf32_External_Phdr_32 __dyc_read_comp_53__anonstruct_Elf32_External_Phdr_32(void) ;
extern void __dyc_print_comp_53__anonstruct_Elf32_External_Phdr_32(struct __anonstruct_Elf32_External_Phdr_32 __dyc_thistype ) ;
extern struct simple_object_functions *__dyc_random_ptr__comp_49simple_object_functions(unsigned int __dyc_exp ) ;
extern struct simple_object_functions *__dyc_read_ptr__comp_49simple_object_functions(void) ;
extern void __dyc_print_ptr__comp_49simple_object_functions(struct simple_object_functions  const  *__dyc_thistype ) ;
extern off_t __dyc_random_typdef_off_t(unsigned int __dyc_exp ) ;
extern off_t __dyc_read_typdef_off_t(void) ;
extern void __dyc_print_typdef_off_t(off_t __dyc_thistype ) ;
extern struct __anonstruct_Elf32_External_Shdr_34 __dyc_random_comp_55__anonstruct_Elf32_External_Shdr_34(unsigned int __dyc_exp ) ;
extern struct __anonstruct_Elf32_External_Shdr_34 __dyc_read_comp_55__anonstruct_Elf32_External_Shdr_34(void) ;
extern void __dyc_print_comp_55__anonstruct_Elf32_External_Shdr_34(struct __anonstruct_Elf32_External_Shdr_34 __dyc_thistype ) ;
extern simple_object_write_section *__dyc_random_ptr__typdef_simple_object_write_section(unsigned int __dyc_exp ) ;
extern simple_object_write_section *__dyc_read_ptr__typdef_simple_object_write_section(void) ;
extern void __dyc_print_ptr__typdef_simple_object_write_section(simple_object_write_section const   *__dyc_thistype ) ;
extern simple_object_write *__dyc_random_ptr__typdef_simple_object_write(unsigned int __dyc_exp ) ;
extern simple_object_write *__dyc_read_ptr__typdef_simple_object_write(void) ;
extern void __dyc_print_ptr__typdef_simple_object_write(simple_object_write const   *__dyc_thistype ) ;
extern Elf64_External_Shdr *__dyc_random_ptr__typdef_Elf64_External_Shdr(unsigned int __dyc_exp ) ;
extern Elf64_External_Shdr *__dyc_read_ptr__typdef_Elf64_External_Shdr(void) ;
extern void __dyc_print_ptr__typdef_Elf64_External_Shdr(Elf64_External_Shdr const   *__dyc_thistype ) ;
extern Elf64_External_Sym *__dyc_random_ptr__typdef_Elf64_External_Sym(unsigned int __dyc_exp ) ;
extern Elf64_External_Sym *__dyc_read_ptr__typdef_Elf64_External_Sym(void) ;
extern void __dyc_print_ptr__typdef_Elf64_External_Sym(Elf64_External_Sym const   *__dyc_thistype ) ;
extern Elf32_External_Phdr __dyc_random_typdef_Elf32_External_Phdr(unsigned int __dyc_exp ) ;
extern Elf32_External_Phdr __dyc_read_typdef_Elf32_External_Phdr(void) ;
extern void __dyc_print_typdef_Elf32_External_Phdr(Elf32_External_Phdr __dyc_thistype ) ;
extern simple_object_read *__dyc_random_ptr__typdef_simple_object_read(unsigned int __dyc_exp ) ;
extern simple_object_read *__dyc_read_ptr__typdef_simple_object_read(void) ;
extern void __dyc_print_ptr__typdef_simple_object_read(simple_object_read const   *__dyc_thistype ) ;
extern struct simple_object_write_struct __dyc_random_comp_35simple_object_write_struct(unsigned int __dyc_exp ) ;
extern struct simple_object_write_struct __dyc_read_comp_35simple_object_write_struct(void) ;
extern void __dyc_print_comp_35simple_object_write_struct(struct simple_object_write_struct __dyc_thistype ) ;
extern Elf64_External_Ehdr __dyc_random_typdef_Elf64_External_Ehdr(unsigned int __dyc_exp ) ;
extern Elf64_External_Ehdr __dyc_read_typdef_Elf64_External_Ehdr(void) ;
extern void __dyc_print_typdef_Elf64_External_Ehdr(Elf64_External_Ehdr __dyc_thistype ) ;
extern struct simple_object_read_struct __dyc_random_comp_33simple_object_read_struct(unsigned int __dyc_exp ) ;
extern struct simple_object_read_struct __dyc_read_comp_33simple_object_read_struct(void) ;
extern void __dyc_print_comp_33simple_object_read_struct(struct simple_object_read_struct __dyc_thistype ) ;
extern struct __anonstruct_Elf64_External_Ehdr_31 __dyc_random_comp_52__anonstruct_Elf64_External_Ehdr_31(unsigned int __dyc_exp ) ;
extern struct __anonstruct_Elf64_External_Ehdr_31 __dyc_read_comp_52__anonstruct_Elf64_External_Ehdr_31(void) ;
extern void __dyc_print_comp_52__anonstruct_Elf64_External_Ehdr_31(struct __anonstruct_Elf64_External_Ehdr_31 __dyc_thistype ) ;
extern struct simple_object_elf_write *__dyc_random_ptr__comp_62simple_object_elf_write(unsigned int __dyc_exp ) ;
extern struct simple_object_elf_write *__dyc_read_ptr__comp_62simple_object_elf_write(void) ;
extern void __dyc_print_ptr__comp_62simple_object_elf_write(struct simple_object_elf_write  const  *__dyc_thistype ) ;
extern struct simple_object_functions __dyc_random_comp_49simple_object_functions(unsigned int __dyc_exp ) ;
extern struct simple_object_functions __dyc_read_comp_49simple_object_functions(void) ;
extern void __dyc_print_comp_49simple_object_functions(struct simple_object_functions __dyc_thistype ) ;
extern struct elf_type_functions *__dyc_random_ptr__comp_59elf_type_functions(unsigned int __dyc_exp ) ;
extern struct elf_type_functions *__dyc_read_ptr__comp_59elf_type_functions(void) ;
extern void __dyc_print_ptr__comp_59elf_type_functions(struct elf_type_functions  const  *__dyc_thistype ) ;
extern uint64_t __dyc_random_typdef_uint64_t(unsigned int __dyc_exp ) ;
extern uint64_t __dyc_read_typdef_uint64_t(void) ;
extern void __dyc_print_typdef_uint64_t(uint64_t __dyc_thistype ) ;
extern simple_object_write_section __dyc_random_typdef_simple_object_write_section(unsigned int __dyc_exp ) ;
extern simple_object_write_section __dyc_read_typdef_simple_object_write_section(void) ;
extern void __dyc_print_typdef_simple_object_write_section(simple_object_write_section __dyc_thistype ) ;
extern char **__dyc_random_ptr__ptr__char(unsigned int __dyc_exp ) ;
extern char **__dyc_read_ptr__ptr__char(void) ;
extern void __dyc_print_ptr__ptr__char(char const   * const  *__dyc_thistype ) ;
extern Elf32_External_Ehdr *__dyc_random_ptr__typdef_Elf32_External_Ehdr(unsigned int __dyc_exp ) ;
extern Elf32_External_Ehdr *__dyc_read_ptr__typdef_Elf32_External_Ehdr(void) ;
extern void __dyc_print_ptr__typdef_Elf32_External_Ehdr(Elf32_External_Ehdr const   *__dyc_thistype ) ;
