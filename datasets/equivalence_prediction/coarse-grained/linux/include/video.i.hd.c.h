#line 18 "include/asm/posix_types_64.h"
typedef unsigned long __kernel_size_t;
#line 14 "include/asm/types.h"
typedef unsigned char __u8;
#line 17 "include/asm/types.h"
typedef unsigned short __u16;
#line 20 "include/asm/types.h"
typedef unsigned int __u32;
#line 25 "include/asm/types.h"
typedef unsigned long long __u64;
#line 48 "include/asm/types.h"
typedef unsigned char u8;
#line 51 "include/asm/types.h"
typedef unsigned short u16;
#line 33 "include/linux/types.h"
typedef unsigned int bool;
#line 66 "include/linux/types.h"
typedef __kernel_size_t size_t;
#line 69 "include/linux/edd.h"
struct __anonstruct_isa_5 {
   __u16 base_address ;
   __u16 reserved1 ;
   __u32 reserved2 ;
};
#line 69 "include/linux/edd.h"
struct __anonstruct_pci_6 {
   __u8 bus ;
   __u8 slot ;
   __u8 function ;
   __u8 channel ;
   __u32 reserved ;
};
#line 69 "include/linux/edd.h"
struct __anonstruct_ibnd_7 {
   __u64 reserved ;
};
#line 69 "include/linux/edd.h"
struct __anonstruct_xprs_8 {
   __u64 reserved ;
};
#line 69 "include/linux/edd.h"
struct __anonstruct_htpt_9 {
   __u64 reserved ;
};
#line 69 "include/linux/edd.h"
struct __anonstruct_unknown_10 {
   __u64 reserved ;
};
#line 69 "include/linux/edd.h"
union __anonunion_interface_path_4 {
   struct __anonstruct_isa_5 isa ;
   struct __anonstruct_pci_6 pci ;
   struct __anonstruct_ibnd_7 ibnd ;
   struct __anonstruct_xprs_8 xprs ;
   struct __anonstruct_htpt_9 htpt ;
   struct __anonstruct_unknown_10 unknown ;
};
#line 69 "include/linux/edd.h"
struct __anonstruct_ata_12 {
   __u8 device ;
   __u8 reserved1 ;
   __u16 reserved2 ;
   __u32 reserved3 ;
   __u64 reserved4 ;
};
#line 69 "include/linux/edd.h"
struct __anonstruct_atapi_13 {
   __u8 device ;
   __u8 lun ;
   __u8 reserved1 ;
   __u8 reserved2 ;
   __u32 reserved3 ;
   __u64 reserved4 ;
};
#line 69 "include/linux/edd.h"
struct __anonstruct_scsi_14 {
   __u16 id ;
   __u64 lun ;
   __u16 reserved1 ;
   __u32 reserved2 ;
};
#line 69 "include/linux/edd.h"
struct __anonstruct_usb_15 {
   __u64 serial_number ;
   __u64 reserved ;
};
#line 69 "include/linux/edd.h"
struct __anonstruct_i1394_16 {
   __u64 eui ;
   __u64 reserved ;
};
#line 69 "include/linux/edd.h"
struct __anonstruct_fibre_17 {
   __u64 wwid ;
   __u64 lun ;
};
#line 69 "include/linux/edd.h"
struct __anonstruct_i2o_18 {
   __u64 identity_tag ;
   __u64 reserved ;
};
#line 69 "include/linux/edd.h"
struct __anonstruct_raid_19 {
   __u32 array_number ;
   __u32 reserved1 ;
   __u64 reserved2 ;
};
#line 69 "include/linux/edd.h"
struct __anonstruct_sata_20 {
   __u8 device ;
   __u8 reserved1 ;
   __u16 reserved2 ;
   __u32 reserved3 ;
   __u64 reserved4 ;
};
#line 69 "include/linux/edd.h"
struct __anonstruct_unknown_21 {
   __u64 reserved1 ;
   __u64 reserved2 ;
};
#line 69 "include/linux/edd.h"
union __anonunion_device_path_11 {
   struct __anonstruct_ata_12 ata ;
   struct __anonstruct_atapi_13 atapi ;
   struct __anonstruct_scsi_14 scsi ;
   struct __anonstruct_usb_15 usb ;
   struct __anonstruct_i1394_16 i1394 ;
   struct __anonstruct_fibre_17 fibre ;
   struct __anonstruct_i2o_18 i2o ;
   struct __anonstruct_raid_19 raid ;
   struct __anonstruct_sata_20 sata ;
   struct __anonstruct_unknown_21 unknown ;
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
   union __anonunion_interface_path_4 interface_path ;
   union __anonunion_device_path_11 device_path ;
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
#line 107 "arch/x86/boot/boot.h"
typedef unsigned int addr_t;
#line 84 "arch/x86/boot/video.h"
struct mode_info {
   u16 mode ;
   u8 x ;
   u8 y ;
};
#line 89 "arch/x86/boot/video.h"
struct card_info {
   char *card_name ;
   int (*set_mode)(struct mode_info *mode ) ;
   int (*probe)(void) ;
   struct mode_info *modes ;
   int nmodes ;
   int unsafe ;
   u16 xmode_first ;
   u16 xmode_n ;
};
#line 360 "arch/x86/boot/video.c"
struct saved_screen {
   int x ;
   int y ;
   int curx ;
   int cury ;
   u16 *data ;
};
extern u16 __dyc_random_typdef_u16(unsigned int __dyc_exp ) ;
extern u16 __dyc_read_typdef_u16(void) ;
extern void __dyc_print_typdef_u16(u16 __dyc_thistype ) ;
extern struct __anonstruct_isa_5 __dyc_random_comp_6__anonstruct_isa_5(unsigned int __dyc_exp ) ;
extern struct __anonstruct_isa_5 __dyc_read_comp_6__anonstruct_isa_5(void) ;
extern void __dyc_print_comp_6__anonstruct_isa_5(struct __anonstruct_isa_5 __dyc_thistype ) ;
extern bool __dyc_random_typdef_bool(unsigned int __dyc_exp ) ;
extern bool __dyc_read_typdef_bool(void) ;
extern void __dyc_print_typdef_bool(bool __dyc_thistype ) ;
extern size_t __dyc_random_typdef_size_t(unsigned int __dyc_exp ) ;
extern size_t __dyc_read_typdef_size_t(void) ;
extern void __dyc_print_typdef_size_t(size_t __dyc_thistype ) ;
extern struct card_info __dyc_random_comp_37card_info(unsigned int __dyc_exp ) ;
extern struct card_info __dyc_read_comp_37card_info(void) ;
extern void __dyc_print_comp_37card_info(struct card_info __dyc_thistype ) ;
extern struct boot_params __dyc_random_comp_35boot_params(unsigned int __dyc_exp ) ;
extern struct boot_params __dyc_read_comp_35boot_params(void) ;
extern void __dyc_print_comp_35boot_params(struct boot_params __dyc_thistype ) ;
extern __u64 __dyc_random_typdef___u64(unsigned int __dyc_exp ) ;
extern __u64 __dyc_read_typdef___u64(void) ;
extern void __dyc_print_typdef___u64(__u64 __dyc_thistype ) ;
extern struct ist_info __dyc_random_comp_30ist_info(unsigned int __dyc_exp ) ;
extern struct ist_info __dyc_read_comp_30ist_info(void) ;
extern void __dyc_print_comp_30ist_info(struct ist_info __dyc_thistype ) ;
extern struct __anonstruct_raid_19 __dyc_random_comp_20__anonstruct_raid_19(unsigned int __dyc_exp ) ;
extern struct __anonstruct_raid_19 __dyc_read_comp_20__anonstruct_raid_19(void) ;
extern void __dyc_print_comp_20__anonstruct_raid_19(struct __anonstruct_raid_19 __dyc_thistype ) ;
extern union __anonunion_device_path_11 __dyc_random_comp_12__anonunion_device_path_11(unsigned int __dyc_exp ) ;
extern union __anonunion_device_path_11 __dyc_read_comp_12__anonunion_device_path_11(void) ;
extern void __dyc_print_comp_12__anonunion_device_path_11(union __anonunion_device_path_11 __dyc_thistype ) ;
extern struct screen_info __dyc_random_comp_25screen_info(unsigned int __dyc_exp ) ;
extern struct screen_info __dyc_read_comp_25screen_info(void) ;
extern void __dyc_print_comp_25screen_info(struct screen_info __dyc_thistype ) ;
extern u8 *__dyc_random_ptr__typdef_u8(unsigned int __dyc_exp ) ;
extern u8 *__dyc_read_ptr__typdef_u8(void) ;
extern void __dyc_print_ptr__typdef_u8(u8 const   *__dyc_thistype ) ;
extern struct apm_bios_info __dyc_random_comp_26apm_bios_info(unsigned int __dyc_exp ) ;
extern struct apm_bios_info __dyc_read_comp_26apm_bios_info(void) ;
extern void __dyc_print_comp_26apm_bios_info(struct apm_bios_info __dyc_thistype ) ;
extern struct __anonstruct_ata_12 __dyc_random_comp_13__anonstruct_ata_12(unsigned int __dyc_exp ) ;
extern struct __anonstruct_ata_12 __dyc_read_comp_13__anonstruct_ata_12(void) ;
extern void __dyc_print_comp_13__anonstruct_ata_12(struct __anonstruct_ata_12 __dyc_thistype ) ;
extern struct edd_device_params __dyc_random_comp_4edd_device_params(unsigned int __dyc_exp ) ;
extern struct edd_device_params __dyc_read_comp_4edd_device_params(void) ;
extern void __dyc_print_comp_4edd_device_params(struct edd_device_params __dyc_thistype ) ;
extern struct __anonstruct_ibnd_7 __dyc_random_comp_8__anonstruct_ibnd_7(unsigned int __dyc_exp ) ;
extern struct __anonstruct_ibnd_7 __dyc_read_comp_8__anonstruct_ibnd_7(void) ;
extern void __dyc_print_comp_8__anonstruct_ibnd_7(struct __anonstruct_ibnd_7 __dyc_thistype ) ;
extern struct efi_info __dyc_random_comp_34efi_info(unsigned int __dyc_exp ) ;
extern struct efi_info __dyc_read_comp_34efi_info(void) ;
extern void __dyc_print_comp_34efi_info(struct efi_info __dyc_thistype ) ;
extern struct card_info *__dyc_random_ptr__comp_37card_info(unsigned int __dyc_exp ) ;
extern struct card_info *__dyc_read_ptr__comp_37card_info(void) ;
extern void __dyc_print_ptr__comp_37card_info(struct card_info  const  *__dyc_thistype ) ;
extern void *__dyc_random_ptr__fun_name_is_not_here(unsigned int __dyc_exp ) ;
extern void *__dyc_read_ptr__fun_name_is_not_here(void) ;
extern void __dyc_print_ptr__fun_name_is_not_here(void const   * const  __dyc_thistype ) ;
extern struct __anonstruct_unknown_10 __dyc_random_comp_11__anonstruct_unknown_10(unsigned int __dyc_exp ) ;
extern struct __anonstruct_unknown_10 __dyc_read_comp_11__anonstruct_unknown_10(void) ;
extern void __dyc_print_comp_11__anonstruct_unknown_10(struct __anonstruct_unknown_10 __dyc_thistype ) ;
extern void *__dyc_random_ptr__void(unsigned int __dyc_exp ) ;
extern void *__dyc_read_ptr__void(void) ;
extern void __dyc_print_ptr__void(void const   * const  __dyc_thistype ) ;
extern __u16 __dyc_random_typdef___u16(unsigned int __dyc_exp ) ;
extern __u16 __dyc_read_typdef___u16(void) ;
extern void __dyc_print_typdef___u16(__u16 __dyc_thistype ) ;
extern char *__dyc_random_ptr__char(unsigned int __dyc_exp ) ;
extern char *__dyc_read_ptr__char(void) ;
extern void __dyc_print_ptr__char(char const   *__dyc_thistype ) ;
extern struct __anonstruct_i2o_18 __dyc_random_comp_19__anonstruct_i2o_18(unsigned int __dyc_exp ) ;
extern struct __anonstruct_i2o_18 __dyc_read_comp_19__anonstruct_i2o_18(void) ;
extern void __dyc_print_comp_19__anonstruct_i2o_18(struct __anonstruct_i2o_18 __dyc_thistype ) ;
extern struct __anonstruct_pci_6 __dyc_random_comp_7__anonstruct_pci_6(unsigned int __dyc_exp ) ;
extern struct __anonstruct_pci_6 __dyc_read_comp_7__anonstruct_pci_6(void) ;
extern void __dyc_print_comp_7__anonstruct_pci_6(struct __anonstruct_pci_6 __dyc_thistype ) ;
extern __kernel_size_t __dyc_random_typdef___kernel_size_t(unsigned int __dyc_exp ) ;
extern __kernel_size_t __dyc_read_typdef___kernel_size_t(void) ;
extern void __dyc_print_typdef___kernel_size_t(__kernel_size_t __dyc_thistype ) ;
extern struct __anonstruct_usb_15 __dyc_random_comp_16__anonstruct_usb_15(unsigned int __dyc_exp ) ;
extern struct __anonstruct_usb_15 __dyc_read_comp_16__anonstruct_usb_15(void) ;
extern void __dyc_print_comp_16__anonstruct_usb_15(struct __anonstruct_usb_15 __dyc_thistype ) ;
extern struct __anonstruct_scsi_14 __dyc_random_comp_15__anonstruct_scsi_14(unsigned int __dyc_exp ) ;
extern struct __anonstruct_scsi_14 __dyc_read_comp_15__anonstruct_scsi_14(void) ;
extern void __dyc_print_comp_15__anonstruct_scsi_14(struct __anonstruct_scsi_14 __dyc_thistype ) ;
extern struct __anonstruct_sata_20 __dyc_random_comp_21__anonstruct_sata_20(unsigned int __dyc_exp ) ;
extern struct __anonstruct_sata_20 __dyc_read_comp_21__anonstruct_sata_20(void) ;
extern void __dyc_print_comp_21__anonstruct_sata_20(struct __anonstruct_sata_20 __dyc_thistype ) ;
extern struct mode_info __dyc_random_comp_36mode_info(unsigned int __dyc_exp ) ;
extern struct mode_info __dyc_read_comp_36mode_info(void) ;
extern void __dyc_print_comp_36mode_info(struct mode_info __dyc_thistype ) ;
extern struct __anonstruct_htpt_9 __dyc_random_comp_10__anonstruct_htpt_9(unsigned int __dyc_exp ) ;
extern struct __anonstruct_htpt_9 __dyc_read_comp_10__anonstruct_htpt_9(void) ;
extern void __dyc_print_comp_10__anonstruct_htpt_9(struct __anonstruct_htpt_9 __dyc_thistype ) ;
extern struct saved_screen __dyc_random_comp_41saved_screen(unsigned int __dyc_exp ) ;
extern struct saved_screen __dyc_read_comp_41saved_screen(void) ;
extern void __dyc_print_comp_41saved_screen(struct saved_screen __dyc_thistype ) ;
extern struct setup_header __dyc_random_comp_32setup_header(unsigned int __dyc_exp ) ;
extern struct setup_header __dyc_read_comp_32setup_header(void) ;
extern void __dyc_print_comp_32setup_header(struct setup_header __dyc_thistype ) ;
extern struct edid_info __dyc_random_comp_31edid_info(unsigned int __dyc_exp ) ;
extern struct edid_info __dyc_read_comp_31edid_info(void) ;
extern void __dyc_print_comp_31edid_info(struct edid_info __dyc_thistype ) ;
extern __u8 __dyc_random_typdef___u8(unsigned int __dyc_exp ) ;
extern __u8 __dyc_read_typdef___u8(void) ;
extern void __dyc_print_typdef___u8(__u8 __dyc_thistype ) ;
extern struct edd_info __dyc_random_comp_23edd_info(unsigned int __dyc_exp ) ;
extern struct edd_info __dyc_read_comp_23edd_info(void) ;
extern void __dyc_print_comp_23edd_info(struct edd_info __dyc_thistype ) ;
extern struct sys_desc_table __dyc_random_comp_33sys_desc_table(unsigned int __dyc_exp ) ;
extern struct sys_desc_table __dyc_read_comp_33sys_desc_table(void) ;
extern void __dyc_print_comp_33sys_desc_table(struct sys_desc_table __dyc_thistype ) ;
extern u8 __dyc_random_typdef_u8(unsigned int __dyc_exp ) ;
extern u8 __dyc_read_typdef_u8(void) ;
extern void __dyc_print_typdef_u8(u8 __dyc_thistype ) ;
extern __u32 __dyc_random_typdef___u32(unsigned int __dyc_exp ) ;
extern __u32 __dyc_read_typdef___u32(void) ;
extern void __dyc_print_typdef___u32(__u32 __dyc_thistype ) ;
extern u16 *__dyc_random_ptr__typdef_u16(unsigned int __dyc_exp ) ;
extern u16 *__dyc_read_ptr__typdef_u16(void) ;
extern void __dyc_print_ptr__typdef_u16(u16 const   *__dyc_thistype ) ;
extern union __anonunion_interface_path_4 __dyc_random_comp_5__anonunion_interface_path_4(unsigned int __dyc_exp ) ;
extern union __anonunion_interface_path_4 __dyc_read_comp_5__anonunion_interface_path_4(void) ;
extern void __dyc_print_comp_5__anonunion_interface_path_4(union __anonunion_interface_path_4 __dyc_thistype ) ;
extern struct __anonstruct_unknown_21 __dyc_random_comp_22__anonstruct_unknown_21(unsigned int __dyc_exp ) ;
extern struct __anonstruct_unknown_21 __dyc_read_comp_22__anonstruct_unknown_21(void) ;
extern void __dyc_print_comp_22__anonstruct_unknown_21(struct __anonstruct_unknown_21 __dyc_thistype ) ;
extern struct __anonstruct_fibre_17 __dyc_random_comp_18__anonstruct_fibre_17(unsigned int __dyc_exp ) ;
extern struct __anonstruct_fibre_17 __dyc_read_comp_18__anonstruct_fibre_17(void) ;
extern void __dyc_print_comp_18__anonstruct_fibre_17(struct __anonstruct_fibre_17 __dyc_thistype ) ;
extern struct mode_info *__dyc_random_ptr__comp_36mode_info(unsigned int __dyc_exp ) ;
extern struct mode_info *__dyc_read_ptr__comp_36mode_info(void) ;
extern void __dyc_print_ptr__comp_36mode_info(struct mode_info  const  *__dyc_thistype ) ;
extern struct __anonstruct_atapi_13 __dyc_random_comp_14__anonstruct_atapi_13(unsigned int __dyc_exp ) ;
extern struct __anonstruct_atapi_13 __dyc_read_comp_14__anonstruct_atapi_13(void) ;
extern void __dyc_print_comp_14__anonstruct_atapi_13(struct __anonstruct_atapi_13 __dyc_thistype ) ;
extern struct __anonstruct_xprs_8 __dyc_random_comp_9__anonstruct_xprs_8(unsigned int __dyc_exp ) ;
extern struct __anonstruct_xprs_8 __dyc_read_comp_9__anonstruct_xprs_8(void) ;
extern void __dyc_print_comp_9__anonstruct_xprs_8(struct __anonstruct_xprs_8 __dyc_thistype ) ;
extern struct __anonstruct_i1394_16 __dyc_random_comp_17__anonstruct_i1394_16(unsigned int __dyc_exp ) ;
extern struct __anonstruct_i1394_16 __dyc_read_comp_17__anonstruct_i1394_16(void) ;
extern void __dyc_print_comp_17__anonstruct_i1394_16(struct __anonstruct_i1394_16 __dyc_thistype ) ;
extern addr_t __dyc_random_typdef_addr_t(unsigned int __dyc_exp ) ;
extern addr_t __dyc_read_typdef_addr_t(void) ;
extern void __dyc_print_typdef_addr_t(addr_t __dyc_thistype ) ;
extern struct e820entry __dyc_random_comp_28e820entry(unsigned int __dyc_exp ) ;
extern struct e820entry __dyc_read_comp_28e820entry(void) ;
extern void __dyc_print_comp_28e820entry(struct e820entry __dyc_thistype ) ;
