#line 14 "include/asm/types.h"
typedef unsigned char __u8;
#line 20 "include/asm/types.h"
typedef unsigned int __u32;
#line 94 "include/linux/kernel.h"
struct pt_regs;
#line 94
struct pt_regs;
#line 11 "include/asm/pda.h"
struct task_struct;
#line 11
struct mm_struct;
#line 11 "include/asm/pda.h"
struct x8664_pda {
   struct task_struct *pcurrent ;
   unsigned long data_offset ;
   unsigned long kernelstack ;
   unsigned long oldrsp ;
   int irqcount ;
   int cpunumber ;
   char *irqstackptr ;
   int nodenumber ;
   unsigned int __softirq_pending ;
   unsigned int __nmi_count ;
   short mmu_state ;
   short isidle ;
   struct mm_struct *active_mm ;
   unsigned int apic_timer_irqs ;
   unsigned int irq0_irqs ;
   unsigned int irq_resched_count ;
   unsigned int irq_call_count ;
   unsigned int irq_tlb_count ;
   unsigned int irq_thermal_count ;
   unsigned int irq_threshold_count ;
   unsigned int irq_spurious_count ;
};
#line 22 "include/asm/thread_info_64.h"
struct task_struct;
#line 5 "include/asm/current_64.h"
struct task_struct;
#line 11 "include/linux/personality.h"
struct pt_regs;
#line 88 "include/linux/cpumask.h"
struct __anonstruct_cpumask_t_16 {
   unsigned long bits[1] ;
};
#line 88 "include/linux/cpumask.h"
typedef struct __anonstruct_cpumask_t_16 cpumask_t;
#line 51 "include/asm/processor_64.h"
struct cpuinfo_x86 {
   __u8 x86 ;
   __u8 x86_vendor ;
   __u8 x86_model ;
   __u8 x86_mask ;
   int cpuid_level ;
   __u32 x86_capability[8] ;
   char x86_vendor_id[16] ;
   char x86_model_id[64] ;
   int x86_cache_size ;
   int x86_clflush_size ;
   int x86_cache_alignment ;
   int x86_tlbsize ;
   __u8 x86_virt_bits ;
   __u8 x86_phys_bits ;
   __u8 x86_max_cores ;
   __u32 x86_power ;
   __u32 extended_cpuid_level ;
   unsigned long loops_per_jiffy ;
   cpumask_t llc_shared_map ;
   __u8 apicid ;
   __u8 booted_cores ;
   __u8 phys_proc_id ;
   __u8 cpu_core_id ;
   __u8 cpu_index ;
};
#line 277
struct task_struct;
#line 278
struct mm_struct;
#line 12 "include/linux/lockdep.h"
struct task_struct;
#line 43 "include/linux/oprofile.h"
struct pt_regs;
#line 35 "include/asm/apic_64.h"
struct pt_regs;
#line 22 "include/asm/smp_64.h"
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
#line 111
struct task_struct;
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
#line 61 "arch/x86/oprofile/op_model_p4.c"
struct p4_counter_binding {
   int virt_counter ;
   int counter_address ;
   int cccr_address ;
};
#line 67 "arch/x86/oprofile/op_model_p4.c"
struct __anonstruct_bindings_76 {
   int virt_counter ;
   int escr_address ;
};
#line 67 "arch/x86/oprofile/op_model_p4.c"
struct p4_event_binding {
   int escr_select ;
   int event_select ;
   struct __anonstruct_bindings_76 bindings[2] ;
};
extern struct op_x86_model_spec __dyc_random_comp_138op_x86_model_spec(unsigned int __dyc_exp ) ;
extern struct op_x86_model_spec __dyc_read_comp_138op_x86_model_spec(void) ;
extern void __dyc_print_comp_138op_x86_model_spec(struct op_x86_model_spec __dyc_thistype ) ;
extern unsigned int *__dyc_random_ptr__int(unsigned int __dyc_exp ) ;
extern unsigned int *__dyc_read_ptr__int(void) ;
extern void __dyc_print_ptr__int(unsigned int const volatile   *__dyc_thistype ) ;
extern struct __anonstruct_cpumask_t_16 __dyc_random_comp_33__anonstruct_cpumask_t_16(unsigned int __dyc_exp ) ;
extern struct __anonstruct_cpumask_t_16 __dyc_read_comp_33__anonstruct_cpumask_t_16(void) ;
extern void __dyc_print_comp_33__anonstruct_cpumask_t_16(struct __anonstruct_cpumask_t_16 __dyc_thistype ) ;
extern struct pt_regs *__dyc_random_ptr__comp_19pt_regs(unsigned int __dyc_exp ) ;
extern struct pt_regs *__dyc_read_ptr__comp_19pt_regs(void) ;
extern void __dyc_print_ptr__comp_19pt_regs(struct pt_regs  const  *__dyc_thistype ) ;
extern struct op_saved_msr __dyc_random_comp_135op_saved_msr(unsigned int __dyc_exp ) ;
extern struct op_saved_msr __dyc_read_comp_135op_saved_msr(void) ;
extern void __dyc_print_comp_135op_saved_msr(struct op_saved_msr __dyc_thistype ) ;
extern struct p4_event_binding __dyc_random_comp_141p4_event_binding(unsigned int __dyc_exp ) ;
extern struct p4_event_binding __dyc_read_comp_141p4_event_binding(void) ;
extern void __dyc_print_comp_141p4_event_binding(struct p4_event_binding __dyc_thistype ) ;
extern struct x8664_pda __dyc_random_comp_24x8664_pda(unsigned int __dyc_exp ) ;
extern struct x8664_pda __dyc_read_comp_24x8664_pda(void) ;
extern void __dyc_print_comp_24x8664_pda(struct x8664_pda __dyc_thistype ) ;
extern void *__dyc_random_ptr__fun_name_is_not_here(unsigned int __dyc_exp ) ;
extern void *__dyc_read_ptr__fun_name_is_not_here(void) ;
extern void __dyc_print_ptr__fun_name_is_not_here(void const   * const  __dyc_thistype ) ;
extern struct op_msr *__dyc_random_ptr__comp_136op_msr(unsigned int __dyc_exp ) ;
extern struct op_msr *__dyc_read_ptr__comp_136op_msr(void) ;
extern void __dyc_print_ptr__comp_136op_msr(struct op_msr  const  *__dyc_thistype ) ;
extern void *__dyc_random_ptr__void(unsigned int __dyc_exp ) ;
extern void *__dyc_read_ptr__void(void) ;
extern void __dyc_print_ptr__void(void const   * const  __dyc_thistype ) ;
extern struct p4_event_binding *__dyc_random_ptr__comp_141p4_event_binding(unsigned int __dyc_exp ) ;
extern struct p4_event_binding *__dyc_read_ptr__comp_141p4_event_binding(void) ;
extern void __dyc_print_ptr__comp_141p4_event_binding(struct p4_event_binding  const  *__dyc_thistype ) ;
extern struct pt_regs __dyc_random_comp_19pt_regs(unsigned int __dyc_exp ) ;
extern struct pt_regs __dyc_read_comp_19pt_regs(void) ;
extern void __dyc_print_comp_19pt_regs(struct pt_regs __dyc_thistype ) ;
extern char *__dyc_random_ptr__char(unsigned int __dyc_exp ) ;
extern char *__dyc_read_ptr__char(void) ;
extern void __dyc_print_ptr__char(char const   *__dyc_thistype ) ;
extern struct x8664_pda *__dyc_random_ptr__comp_24x8664_pda(unsigned int __dyc_exp ) ;
extern struct x8664_pda *__dyc_read_ptr__comp_24x8664_pda(void) ;
extern void __dyc_print_ptr__comp_24x8664_pda(struct x8664_pda  const  *__dyc_thistype ) ;
extern struct op_msrs __dyc_random_comp_137op_msrs(unsigned int __dyc_exp ) ;
extern struct op_msrs __dyc_read_comp_137op_msrs(void) ;
extern void __dyc_print_comp_137op_msrs(struct op_msrs __dyc_thistype ) ;
extern void *__dyc_random_ptr__comp_25task_struct(unsigned int __dyc_exp ) ;
extern void *__dyc_read_ptr__comp_25task_struct(void) ;
extern void __dyc_print_ptr__comp_25task_struct(void const   * const  __dyc_thistype ) ;
extern struct op_msrs *__dyc_random_ptr__comp_137op_msrs(unsigned int __dyc_exp ) ;
extern struct op_msrs *__dyc_read_ptr__comp_137op_msrs(void) ;
extern void __dyc_print_ptr__comp_137op_msrs(struct op_msrs  const  *__dyc_thistype ) ;
extern cpumask_t __dyc_random_typdef_cpumask_t(unsigned int __dyc_exp ) ;
extern cpumask_t __dyc_read_typdef_cpumask_t(void) ;
extern void __dyc_print_typdef_cpumask_t(cpumask_t __dyc_thistype ) ;
extern struct __anonstruct_bindings_76 __dyc_random_comp_142__anonstruct_bindings_76(unsigned int __dyc_exp ) ;
extern struct __anonstruct_bindings_76 __dyc_read_comp_142__anonstruct_bindings_76(void) ;
extern void __dyc_print_comp_142__anonstruct_bindings_76(struct __anonstruct_bindings_76 __dyc_thistype ) ;
extern struct p4_counter_binding __dyc_random_comp_140p4_counter_binding(unsigned int __dyc_exp ) ;
extern struct p4_counter_binding __dyc_read_comp_140p4_counter_binding(void) ;
extern void __dyc_print_comp_140p4_counter_binding(struct p4_counter_binding __dyc_thistype ) ;
extern __u8 __dyc_random_typdef___u8(unsigned int __dyc_exp ) ;
extern __u8 __dyc_read_typdef___u8(void) ;
extern void __dyc_print_typdef___u8(__u8 __dyc_thistype ) ;
extern struct op_counter_config __dyc_random_comp_139op_counter_config(unsigned int __dyc_exp ) ;
extern struct op_counter_config __dyc_read_comp_139op_counter_config(void) ;
extern void __dyc_print_comp_139op_counter_config(struct op_counter_config __dyc_thistype ) ;
extern struct op_msr __dyc_random_comp_136op_msr(unsigned int __dyc_exp ) ;
extern struct op_msr __dyc_read_comp_136op_msr(void) ;
extern void __dyc_print_comp_136op_msr(struct op_msr __dyc_thistype ) ;
extern __u32 __dyc_random_typdef___u32(unsigned int __dyc_exp ) ;
extern __u32 __dyc_read_typdef___u32(void) ;
extern void __dyc_print_typdef___u32(__u32 __dyc_thistype ) ;
extern cpumask_t *__dyc_random_ptr__typdef_cpumask_t(unsigned int __dyc_exp ) ;
extern cpumask_t *__dyc_read_ptr__typdef_cpumask_t(void) ;
extern void __dyc_print_ptr__typdef_cpumask_t(cpumask_t const   *__dyc_thistype ) ;
extern void *__dyc_random_ptr__comp_26mm_struct(unsigned int __dyc_exp ) ;
extern void *__dyc_read_ptr__comp_26mm_struct(void) ;
extern void __dyc_print_ptr__comp_26mm_struct(void const   * const  __dyc_thistype ) ;
extern struct cpuinfo_x86 __dyc_random_comp_34cpuinfo_x86(unsigned int __dyc_exp ) ;
extern struct cpuinfo_x86 __dyc_read_comp_34cpuinfo_x86(void) ;
extern void __dyc_print_comp_34cpuinfo_x86(struct cpuinfo_x86 __dyc_thistype ) ;
