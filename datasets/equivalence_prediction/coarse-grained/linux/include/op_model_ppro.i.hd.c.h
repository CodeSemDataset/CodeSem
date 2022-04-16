#line 94 "include/linux/kernel.h"
struct pt_regs;
#line 94
struct pt_regs;
#line 11 "include/linux/personality.h"
struct pt_regs;
#line 43 "include/linux/oprofile.h"
struct pt_regs;
#line 71 "include/asm/ptrace.h"
struct pt_regs {
   unsigned long r15 ;
   unsigned long r14 ;
   unsigned long r13 ;
   unsigned long r12 ;
   unsigned long rbp ;
   unsigned long rbx ;
   unsigned long r11 ;
   unsigned long r10 ;
   unsigned long r9 ;
   unsigned long r8 ;
   unsigned long rax ;
   unsigned long rcx ;
   unsigned long rdx ;
   unsigned long rsi ;
   unsigned long rdi ;
   unsigned long orig_rax ;
   unsigned long rip ;
   unsigned long cs ;
   unsigned long eflags ;
   unsigned long rsp ;
   unsigned long ss ;
};
#line 35 "include/asm/apic_64.h"
struct pt_regs;
#line 14 "arch/x86/oprofile/op_x86_model.h"
struct op_saved_msr {
   unsigned int high ;
   unsigned int low ;
};
#line 19 "arch/x86/oprofile/op_x86_model.h"
struct op_msr {
   unsigned long addr ;
   struct op_saved_msr saved ;
};
#line 24 "arch/x86/oprofile/op_x86_model.h"
struct op_msrs {
   struct op_msr *counters ;
   struct op_msr *controls ;
};
#line 29
struct pt_regs;
#line 34 "arch/x86/oprofile/op_x86_model.h"
struct op_x86_model_spec {
   unsigned int num_counters ;
   unsigned int num_controls ;
   void (*fill_in_addresses)(struct op_msrs *msrs ) ;
   void (*setup_ctrs)(struct op_msrs  const  *msrs ) ;
   int (*check_ctrs)(struct pt_regs *regs , struct op_msrs  const  *msrs ) ;
   void (*start)(struct op_msrs  const  *msrs ) ;
   void (*stop)(struct op_msrs  const  *msrs ) ;
   void (*shutdown)(struct op_msrs  const  *msrs ) ;
};
#line 18 "arch/x86/oprofile/op_counter.h"
struct op_counter_config {
   unsigned long count ;
   unsigned long enabled ;
   unsigned long event ;
   unsigned long kernel ;
   unsigned long user ;
   unsigned long unit_mask ;
};
extern unsigned int *__dyc_random_ptr__int(unsigned int __dyc_exp ) ;
extern unsigned int *__dyc_read_ptr__int(void) ;
extern void __dyc_print_ptr__int(unsigned int const volatile   *__dyc_thistype ) ;
extern struct pt_regs *__dyc_random_ptr__comp_19pt_regs(unsigned int __dyc_exp ) ;
extern struct pt_regs *__dyc_read_ptr__comp_19pt_regs(void) ;
extern void __dyc_print_ptr__comp_19pt_regs(struct pt_regs  const  *__dyc_thistype ) ;
extern struct op_x86_model_spec __dyc_random_comp_121op_x86_model_spec(unsigned int __dyc_exp ) ;
extern struct op_x86_model_spec __dyc_read_comp_121op_x86_model_spec(void) ;
extern void __dyc_print_comp_121op_x86_model_spec(struct op_x86_model_spec __dyc_thistype ) ;
extern struct op_msr *__dyc_random_ptr__comp_119op_msr(unsigned int __dyc_exp ) ;
extern struct op_msr *__dyc_read_ptr__comp_119op_msr(void) ;
extern void __dyc_print_ptr__comp_119op_msr(struct op_msr  const  *__dyc_thistype ) ;
extern void *__dyc_random_ptr__fun_name_is_not_here(unsigned int __dyc_exp ) ;
extern void *__dyc_read_ptr__fun_name_is_not_here(void) ;
extern void __dyc_print_ptr__fun_name_is_not_here(void const   * const  __dyc_thistype ) ;
extern struct pt_regs __dyc_random_comp_19pt_regs(unsigned int __dyc_exp ) ;
extern struct pt_regs __dyc_read_comp_19pt_regs(void) ;
extern void __dyc_print_comp_19pt_regs(struct pt_regs __dyc_thistype ) ;
extern struct op_msrs __dyc_random_comp_120op_msrs(unsigned int __dyc_exp ) ;
extern struct op_msrs __dyc_read_comp_120op_msrs(void) ;
extern void __dyc_print_comp_120op_msrs(struct op_msrs __dyc_thistype ) ;
extern struct op_msrs *__dyc_random_ptr__comp_120op_msrs(unsigned int __dyc_exp ) ;
extern struct op_msrs *__dyc_read_ptr__comp_120op_msrs(void) ;
extern void __dyc_print_ptr__comp_120op_msrs(struct op_msrs  const  *__dyc_thistype ) ;
extern struct op_msr __dyc_random_comp_119op_msr(unsigned int __dyc_exp ) ;
extern struct op_msr __dyc_read_comp_119op_msr(void) ;
extern void __dyc_print_comp_119op_msr(struct op_msr __dyc_thistype ) ;
extern struct op_saved_msr __dyc_random_comp_118op_saved_msr(unsigned int __dyc_exp ) ;
extern struct op_saved_msr __dyc_read_comp_118op_saved_msr(void) ;
extern void __dyc_print_comp_118op_saved_msr(struct op_saved_msr __dyc_thistype ) ;
extern struct op_counter_config __dyc_random_comp_122op_counter_config(unsigned int __dyc_exp ) ;
extern struct op_counter_config __dyc_read_comp_122op_counter_config(void) ;
extern void __dyc_print_comp_122op_counter_config(struct op_counter_config __dyc_thistype ) ;
