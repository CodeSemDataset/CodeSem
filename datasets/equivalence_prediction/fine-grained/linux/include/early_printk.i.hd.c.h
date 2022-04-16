#line 18 "include/asm/posix_types_64.h"
typedef unsigned long __kernel_size_t;
#line 14 "include/asm/types.h"
typedef unsigned char __u8;
#line 17 "include/asm/types.h"
typedef unsigned short __u16;
#line 20 "include/asm/types.h"
typedef unsigned int __u32;
#line 29 "include/asm/types.h"
typedef unsigned long long __u64;
#line 66 "include/linux/types.h"
typedef __kernel_size_t size_t;
#line 95 "include/linux/console.h"
struct tty_driver;
#line 95 "include/linux/console.h"
struct console {
   char name[16] ;
   void (*write)(struct console * , char const   * , unsigned int  ) ;
   int (*read)(struct console * , char * , unsigned int  ) ;
   struct tty_driver *(*device)(struct console * , int * ) ;
   void (*unblank)(void) ;
   int (*setup)(struct console * , char * ) ;
   int (*early_setup)(void) ;
   short flags ;
   short index ;
   int cflag ;
   void *data ;
   struct console *next ;
};
#line 40 "/usr/lib/gcc/x86_64-linux-gnu/4.6/include/stdarg.h"
typedef __builtin_va_list __gnuc_va_list;
#line 102 "/usr/lib/gcc/x86_64-linux-gnu/4.6/include/stdarg.h"
typedef __gnuc_va_list va_list;
#line 151 "include/linux/init.h"
struct obs_kernel_param {
   char *str ;
   int (*setup_func)(char * ) ;
   int early ;
};
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
#line 24 "include/linux/apm_bios.h"
struct apm_bios_info {
   __u16 version ;
   __u16 cseg ;
   __u32 offset ;
   __u16 cseg_16 ;
   __u16 dseg ;
   __u16 flags ;
   __u16 cseg_len ;
   __u16 cseg_16_len ;
   __u16 dseg_len ;
};
#line 69 "include/linux/edd.h"
struct __anonstruct_isa_24 {
   __u16 base_address ;
   __u16 reserved1 ;
   __u32 reserved2 ;
};
#line 69 "include/linux/edd.h"
struct __anonstruct_pci_25 {
   __u8 bus ;
   __u8 slot ;
   __u8 function ;
   __u8 channel ;
   __u32 reserved ;
};
#line 69 "include/linux/edd.h"
struct __anonstruct_ibnd_26 {
   __u64 reserved ;
};
#line 69 "include/linux/edd.h"
struct __anonstruct_xprs_27 {
   __u64 reserved ;
};
#line 69 "include/linux/edd.h"
struct __anonstruct_htpt_28 {
   __u64 reserved ;
};
#line 69 "include/linux/edd.h"
struct __anonstruct_unknown_29 {
   __u64 reserved ;
};
#line 69 "include/linux/edd.h"
union __anonunion_interface_path_23 {
   struct __anonstruct_isa_24 isa ;
   struct __anonstruct_pci_25 pci ;
   struct __anonstruct_ibnd_26 ibnd ;
   struct __anonstruct_xprs_27 xprs ;
   struct __anonstruct_htpt_28 htpt ;
   struct __anonstruct_unknown_29 unknown ;
};
#line 69 "include/linux/edd.h"
struct __anonstruct_ata_31 {
   __u8 device ;
   __u8 reserved1 ;
   __u16 reserved2 ;
   __u32 reserved3 ;
   __u64 reserved4 ;
};
#line 69 "include/linux/edd.h"
struct __anonstruct_atapi_32 {
   __u8 device ;
   __u8 lun ;
   __u8 reserved1 ;
   __u8 reserved2 ;
   __u32 reserved3 ;
   __u64 reserved4 ;
};
#line 69 "include/linux/edd.h"
struct __anonstruct_scsi_33 {
   __u16 id ;
   __u64 lun ;
   __u16 reserved1 ;
   __u32 reserved2 ;
};
#line 69 "include/linux/edd.h"
struct __anonstruct_usb_34 {
   __u64 serial_number ;
   __u64 reserved ;
};
#line 69 "include/linux/edd.h"
struct __anonstruct_i1394_35 {
   __u64 eui ;
   __u64 reserved ;
};
#line 69 "include/linux/edd.h"
struct __anonstruct_fibre_36 {
   __u64 wwid ;
   __u64 lun ;
};
#line 69 "include/linux/edd.h"
struct __anonstruct_i2o_37 {
   __u64 identity_tag ;
   __u64 reserved ;
};
#line 69 "include/linux/edd.h"
struct __anonstruct_raid_38 {
   __u32 array_number ;
   __u32 reserved1 ;
   __u64 reserved2 ;
};
#line 69 "include/linux/edd.h"
struct __anonstruct_sata_39 {
   __u8 device ;
   __u8 reserved1 ;
   __u16 reserved2 ;
   __u32 reserved3 ;
   __u64 reserved4 ;
};
#line 69 "include/linux/edd.h"
struct __anonstruct_unknown_40 {
   __u64 reserved1 ;
   __u64 reserved2 ;
};
#line 69 "include/linux/edd.h"
union __anonunion_device_path_30 {
   struct __anonstruct_ata_31 ata ;
   struct __anonstruct_atapi_32 atapi ;
   struct __anonstruct_scsi_33 scsi ;
   struct __anonstruct_usb_34 usb ;
   struct __anonstruct_i1394_35 i1394 ;
   struct __anonstruct_fibre_36 fibre ;
   struct __anonstruct_i2o_37 i2o ;
   struct __anonstruct_raid_38 raid ;
   struct __anonstruct_sata_39 sata ;
   struct __anonstruct_unknown_40 unknown ;
};
#line 69 "include/linux/edd.h"
struct edd_device_params {
   __u16 length ;
   __u16 info_flags ;
   __u32 num_default_cylinders ;
   __u32 num_default_heads ;
   __u32 sectors_per_track ;
   __u64 number_of_sectors ;
   __u16 bytes_per_sector ;
   __u32 dpte_ptr ;
   __u16 key ;
   __u8 device_path_info_length ;
   __u8 reserved2 ;
   __u16 reserved3 ;
   __u8 host_bus_type[4] ;
   __u8 interface_type[8] ;
   union __anonunion_interface_path_23 interface_path ;
   union __anonunion_device_path_30 device_path ;
   __u8 reserved4 ;
   __u8 checksum ;
};
#line 170 "include/linux/edd.h"
struct edd_info {
   __u8 device ;
   __u8 version ;
   __u16 interface_support ;
   __u16 legacy_max_cylinder ;
   __u8 legacy_max_head ;
   __u8 legacy_sectors_per_track ;
   struct edd_device_params params ;
};
#line 13 "include/asm/e820.h"
struct e820entry {
   __u64 addr ;
   __u64 size ;
   __u32 type ;
};
#line 22 "include/asm/ist.h"
struct ist_info {
   __u32 signature ;
   __u32 command ;
   __u32 event ;
   __u32 perf_level ;
};
#line 6 "include/video/edid.h"
struct edid_info {
   unsigned char dummy[128] ;
};
#line 12 "include/asm/bootparam.h"
struct setup_header {
   __u8 setup_sects ;
   __u16 root_flags ;
   __u32 syssize ;
   __u16 ram_size ;
   __u16 vid_mode ;
   __u16 root_dev ;
   __u16 boot_flag ;
   __u16 jump ;
   __u32 header ;
   __u16 version ;
   __u32 realmode_swtch ;
   __u16 start_sys ;
   __u16 kernel_version ;
   __u8 type_of_loader ;
   __u8 loadflags ;
   __u16 setup_move_size ;
   __u32 code32_start ;
   __u32 ramdisk_image ;
   __u32 ramdisk_size ;
   __u32 bootsect_kludge ;
   __u16 heap_end_ptr ;
   __u16 _pad1 ;
   __u32 cmd_line_ptr ;
   __u32 initrd_addr_max ;
   __u32 kernel_alignment ;
   __u8 relocatable_kernel ;
   __u8 _pad2[3] ;
   __u32 cmdline_size ;
   __u32 hardware_subarch ;
   __u64 hardware_subarch_data ;
};
#line 51 "include/asm/bootparam.h"
struct sys_desc_table {
   __u16 length ;
   __u8 table[14] ;
};
#line 56 "include/asm/bootparam.h"
struct efi_info {
   __u32 _pad1 ;
   __u32 efi_systab ;
   __u32 efi_memdesc_size ;
   __u32 efi_memdesc_version ;
   __u32 efi_memmap ;
   __u32 efi_memmap_size ;
   __u32 _pad2[2] ;
};
#line 67 "include/asm/bootparam.h"
struct boot_params {
   struct screen_info screen_info ;
   struct apm_bios_info apm_bios_info ;
   __u8 _pad2[12] ;
   struct ist_info ist_info ;
   __u8 _pad3[16] ;
   __u8 hd0_info[16] ;
   __u8 hd1_info[16] ;
   struct sys_desc_table sys_desc_table ;
   __u8 _pad4[144] ;
   struct edid_info edid_info ;
   struct efi_info efi_info ;
   __u32 alt_mem_k ;
   __u32 scratch ;
   __u8 e820_entries ;
   __u8 eddbuf_entries ;
   __u8 edd_mbr_sig_buf_entries ;
   __u8 _pad6[6] ;
   struct setup_header hdr ;
   __u8 _pad7[159UL - sizeof(struct setup_header )] ;
   __u32 edd_mbr_sig_buffer[16] ;
   struct e820entry e820_map[128] ;
   __u8 _pad8[48] ;
   struct edd_info eddbuf[6] ;
   __u8 _pad9[276] ;
};
extern struct __anonstruct_htpt_28 __dyc_random_comp_76__anonstruct_htpt_28(unsigned int __dyc_exp ) ;
extern struct __anonstruct_htpt_28 __dyc_read_comp_76__anonstruct_htpt_28(void) ;
extern void __dyc_print_comp_76__anonstruct_htpt_28(struct __anonstruct_htpt_28 __dyc_thistype ) ;
extern struct __anonstruct_fibre_36 __dyc_random_comp_84__anonstruct_fibre_36(unsigned int __dyc_exp ) ;
extern struct __anonstruct_fibre_36 __dyc_read_comp_84__anonstruct_fibre_36(void) ;
extern void __dyc_print_comp_84__anonstruct_fibre_36(struct __anonstruct_fibre_36 __dyc_thistype ) ;
extern struct e820entry __dyc_random_comp_91e820entry(unsigned int __dyc_exp ) ;
extern struct e820entry __dyc_read_comp_91e820entry(void) ;
extern void __dyc_print_comp_91e820entry(struct e820entry __dyc_thistype ) ;
extern struct __anonstruct_atapi_32 __dyc_random_comp_80__anonstruct_atapi_32(unsigned int __dyc_exp ) ;
extern struct __anonstruct_atapi_32 __dyc_read_comp_80__anonstruct_atapi_32(void) ;
extern void __dyc_print_comp_80__anonstruct_atapi_32(struct __anonstruct_atapi_32 __dyc_thistype ) ;
extern struct __anonstruct_i1394_35 __dyc_random_comp_83__anonstruct_i1394_35(unsigned int __dyc_exp ) ;
extern struct __anonstruct_i1394_35 __dyc_read_comp_83__anonstruct_i1394_35(void) ;
extern void __dyc_print_comp_83__anonstruct_i1394_35(struct __anonstruct_i1394_35 __dyc_thistype ) ;
extern size_t __dyc_random_typdef_size_t(unsigned int __dyc_exp ) ;
extern size_t __dyc_read_typdef_size_t(void) ;
extern void __dyc_print_typdef_size_t(size_t __dyc_thistype ) ;
extern struct __anonstruct_xprs_27 __dyc_random_comp_75__anonstruct_xprs_27(unsigned int __dyc_exp ) ;
extern struct __anonstruct_xprs_27 __dyc_read_comp_75__anonstruct_xprs_27(void) ;
extern void __dyc_print_comp_75__anonstruct_xprs_27(struct __anonstruct_xprs_27 __dyc_thistype ) ;
extern int *__dyc_random_ptr__int(unsigned int __dyc_exp ) ;
extern int *__dyc_read_ptr__int(void) ;
extern void __dyc_print_ptr__int(int const   *__dyc_thistype ) ;
extern __u64 __dyc_random_typdef___u64(unsigned int __dyc_exp ) ;
extern __u64 __dyc_read_typdef___u64(void) ;
extern void __dyc_print_typdef___u64(__u64 __dyc_thistype ) ;
extern struct screen_info __dyc_random_comp_22screen_info(unsigned int __dyc_exp ) ;
extern struct screen_info __dyc_read_comp_22screen_info(void) ;
extern void __dyc_print_comp_22screen_info(struct screen_info __dyc_thistype ) ;
extern struct __anonstruct_isa_24 __dyc_random_comp_72__anonstruct_isa_24(unsigned int __dyc_exp ) ;
extern struct __anonstruct_isa_24 __dyc_read_comp_72__anonstruct_isa_24(void) ;
extern void __dyc_print_comp_72__anonstruct_isa_24(struct __anonstruct_isa_24 __dyc_thistype ) ;
extern union __anonunion_interface_path_23 __dyc_random_comp_71__anonunion_interface_path_23(unsigned int __dyc_exp ) ;
extern union __anonunion_interface_path_23 __dyc_read_comp_71__anonunion_interface_path_23(void) ;
extern void __dyc_print_comp_71__anonunion_interface_path_23(union __anonunion_interface_path_23 __dyc_thistype ) ;
extern struct console __dyc_random_comp_10console(unsigned int __dyc_exp ) ;
extern struct console __dyc_read_comp_10console(void) ;
extern void __dyc_print_comp_10console(struct console __dyc_thistype ) ;
extern struct __anonstruct_unknown_40 __dyc_random_comp_88__anonstruct_unknown_40(unsigned int __dyc_exp ) ;
extern struct __anonstruct_unknown_40 __dyc_read_comp_88__anonstruct_unknown_40(void) ;
extern void __dyc_print_comp_88__anonstruct_unknown_40(struct __anonstruct_unknown_40 __dyc_thistype ) ;
extern void *__dyc_random_ptr__fun_name_is_not_here(unsigned int __dyc_exp ) ;
extern void *__dyc_read_ptr__fun_name_is_not_here(void) ;
extern void __dyc_print_ptr__fun_name_is_not_here(void const   * const  __dyc_thistype ) ;
extern struct ist_info __dyc_random_comp_93ist_info(unsigned int __dyc_exp ) ;
extern struct ist_info __dyc_read_comp_93ist_info(void) ;
extern void __dyc_print_comp_93ist_info(struct ist_info __dyc_thistype ) ;
extern void *__dyc_random_ptr__void(unsigned int __dyc_exp ) ;
extern void *__dyc_read_ptr__void(void) ;
extern void __dyc_print_ptr__void(void const   * const  __dyc_thistype ) ;
extern struct __anonstruct_raid_38 __dyc_random_comp_86__anonstruct_raid_38(unsigned int __dyc_exp ) ;
extern struct __anonstruct_raid_38 __dyc_read_comp_86__anonstruct_raid_38(void) ;
extern void __dyc_print_comp_86__anonstruct_raid_38(struct __anonstruct_raid_38 __dyc_thistype ) ;
extern struct setup_header __dyc_random_comp_95setup_header(unsigned int __dyc_exp ) ;
extern struct setup_header __dyc_read_comp_95setup_header(void) ;
extern void __dyc_print_comp_95setup_header(struct setup_header __dyc_thistype ) ;
extern __u16 __dyc_random_typdef___u16(unsigned int __dyc_exp ) ;
extern __u16 __dyc_read_typdef___u16(void) ;
extern void __dyc_print_typdef___u16(__u16 __dyc_thistype ) ;
extern char *__dyc_random_ptr__char(unsigned int __dyc_exp ) ;
extern char *__dyc_read_ptr__char(void) ;
extern void __dyc_print_ptr__char(char const   *__dyc_thistype ) ;
extern struct boot_params __dyc_random_comp_98boot_params(unsigned int __dyc_exp ) ;
extern struct boot_params __dyc_read_comp_98boot_params(void) ;
extern void __dyc_print_comp_98boot_params(struct boot_params __dyc_thistype ) ;
extern void *__dyc_random_ptr__comp_11tty_driver(unsigned int __dyc_exp ) ;
extern void *__dyc_read_ptr__comp_11tty_driver(void) ;
extern void __dyc_print_ptr__comp_11tty_driver(void const   * const  __dyc_thistype ) ;
extern struct __anonstruct_scsi_33 __dyc_random_comp_81__anonstruct_scsi_33(unsigned int __dyc_exp ) ;
extern struct __anonstruct_scsi_33 __dyc_read_comp_81__anonstruct_scsi_33(void) ;
extern void __dyc_print_comp_81__anonstruct_scsi_33(struct __anonstruct_scsi_33 __dyc_thistype ) ;
extern __kernel_size_t __dyc_random_typdef___kernel_size_t(unsigned int __dyc_exp ) ;
extern __kernel_size_t __dyc_read_typdef___kernel_size_t(void) ;
extern void __dyc_print_typdef___kernel_size_t(__kernel_size_t __dyc_thistype ) ;
extern struct edd_device_params __dyc_random_comp_70edd_device_params(unsigned int __dyc_exp ) ;
extern struct edd_device_params __dyc_read_comp_70edd_device_params(void) ;
extern void __dyc_print_comp_70edd_device_params(struct edd_device_params __dyc_thistype ) ;
extern struct efi_info __dyc_random_comp_97efi_info(unsigned int __dyc_exp ) ;
extern struct efi_info __dyc_read_comp_97efi_info(void) ;
extern void __dyc_print_comp_97efi_info(struct efi_info __dyc_thistype ) ;
extern struct sys_desc_table __dyc_random_comp_96sys_desc_table(unsigned int __dyc_exp ) ;
extern struct sys_desc_table __dyc_read_comp_96sys_desc_table(void) ;
extern void __dyc_print_comp_96sys_desc_table(struct sys_desc_table __dyc_thistype ) ;
extern struct __anonstruct_pci_25 __dyc_random_comp_73__anonstruct_pci_25(unsigned int __dyc_exp ) ;
extern struct __anonstruct_pci_25 __dyc_read_comp_73__anonstruct_pci_25(void) ;
extern void __dyc_print_comp_73__anonstruct_pci_25(struct __anonstruct_pci_25 __dyc_thistype ) ;
extern struct edd_info __dyc_random_comp_89edd_info(unsigned int __dyc_exp ) ;
extern struct edd_info __dyc_read_comp_89edd_info(void) ;
extern void __dyc_print_comp_89edd_info(struct edd_info __dyc_thistype ) ;
extern struct apm_bios_info __dyc_random_comp_68apm_bios_info(unsigned int __dyc_exp ) ;
extern struct apm_bios_info __dyc_read_comp_68apm_bios_info(void) ;
extern void __dyc_print_comp_68apm_bios_info(struct apm_bios_info __dyc_thistype ) ;
extern __u16 *__dyc_random_ptr__typdef___u16(unsigned int __dyc_exp ) ;
extern __u16 *__dyc_read_ptr__typdef___u16(void) ;
extern void __dyc_print_ptr__typdef___u16(__u16 const volatile   *__dyc_thistype ) ;
extern struct __anonstruct_ibnd_26 __dyc_random_comp_74__anonstruct_ibnd_26(unsigned int __dyc_exp ) ;
extern struct __anonstruct_ibnd_26 __dyc_read_comp_74__anonstruct_ibnd_26(void) ;
extern void __dyc_print_comp_74__anonstruct_ibnd_26(struct __anonstruct_ibnd_26 __dyc_thistype ) ;
extern __u8 __dyc_random_typdef___u8(unsigned int __dyc_exp ) ;
extern __u8 __dyc_read_typdef___u8(void) ;
extern void __dyc_print_typdef___u8(__u8 __dyc_thistype ) ;
extern __u32 __dyc_random_typdef___u32(unsigned int __dyc_exp ) ;
extern __u32 __dyc_read_typdef___u32(void) ;
extern void __dyc_print_typdef___u32(__u32 __dyc_thistype ) ;
extern struct __anonstruct_sata_39 __dyc_random_comp_87__anonstruct_sata_39(unsigned int __dyc_exp ) ;
extern struct __anonstruct_sata_39 __dyc_read_comp_87__anonstruct_sata_39(void) ;
extern void __dyc_print_comp_87__anonstruct_sata_39(struct __anonstruct_sata_39 __dyc_thistype ) ;
extern struct edid_info __dyc_random_comp_94edid_info(unsigned int __dyc_exp ) ;
extern struct edid_info __dyc_read_comp_94edid_info(void) ;
extern void __dyc_print_comp_94edid_info(struct edid_info __dyc_thistype ) ;
extern struct __anonstruct_i2o_37 __dyc_random_comp_85__anonstruct_i2o_37(unsigned int __dyc_exp ) ;
extern struct __anonstruct_i2o_37 __dyc_read_comp_85__anonstruct_i2o_37(void) ;
extern void __dyc_print_comp_85__anonstruct_i2o_37(struct __anonstruct_i2o_37 __dyc_thistype ) ;
extern struct __anonstruct_usb_34 __dyc_random_comp_82__anonstruct_usb_34(unsigned int __dyc_exp ) ;
extern struct __anonstruct_usb_34 __dyc_read_comp_82__anonstruct_usb_34(void) ;
extern void __dyc_print_comp_82__anonstruct_usb_34(struct __anonstruct_usb_34 __dyc_thistype ) ;
extern struct __anonstruct_unknown_29 __dyc_random_comp_77__anonstruct_unknown_29(unsigned int __dyc_exp ) ;
extern struct __anonstruct_unknown_29 __dyc_read_comp_77__anonstruct_unknown_29(void) ;
extern void __dyc_print_comp_77__anonstruct_unknown_29(struct __anonstruct_unknown_29 __dyc_thistype ) ;
extern struct obs_kernel_param __dyc_random_comp_21obs_kernel_param(unsigned int __dyc_exp ) ;
extern struct obs_kernel_param __dyc_read_comp_21obs_kernel_param(void) ;
extern void __dyc_print_comp_21obs_kernel_param(struct obs_kernel_param __dyc_thistype ) ;
extern struct __anonstruct_ata_31 __dyc_random_comp_79__anonstruct_ata_31(unsigned int __dyc_exp ) ;
extern struct __anonstruct_ata_31 __dyc_read_comp_79__anonstruct_ata_31(void) ;
extern void __dyc_print_comp_79__anonstruct_ata_31(struct __anonstruct_ata_31 __dyc_thistype ) ;
extern union __anonunion_device_path_30 __dyc_random_comp_78__anonunion_device_path_30(unsigned int __dyc_exp ) ;
extern union __anonunion_device_path_30 __dyc_read_comp_78__anonunion_device_path_30(void) ;
extern void __dyc_print_comp_78__anonunion_device_path_30(union __anonunion_device_path_30 __dyc_thistype ) ;
extern struct console *__dyc_random_ptr__comp_10console(unsigned int __dyc_exp ) ;
extern struct console *__dyc_read_ptr__comp_10console(void) ;
extern void __dyc_print_ptr__comp_10console(struct console  const  *__dyc_thistype ) ;
extern char **__dyc_random_ptr__ptr__char(unsigned int __dyc_exp ) ;
extern char **__dyc_read_ptr__ptr__char(void) ;
extern void __dyc_print_ptr__ptr__char(char * const  *__dyc_thistype ) ;
