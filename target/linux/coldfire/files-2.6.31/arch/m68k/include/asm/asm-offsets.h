#ifndef __ASM_OFFSETS_H__
#define __ASM_OFFSETS_H__
/*
 * DO NOT MODIFY.
 *
 * This file was generated by Kbuild
 *
 */

#define TASK_STATE 0 /* offsetof(struct task_struct, state)	| */
#define TASK_FLAGS 12 /* offsetof(struct task_struct, flags)	| */
#define TASK_PTRACE 16 /* offsetof(struct task_struct, ptrace)	| */
#define TASK_THREAD 476 /* offsetof(struct task_struct, thread)	| */
#define TASK_INFO 638 /* offsetof(struct task_struct, thread.info)	| */
#define TASK_MM 178 /* offsetof(struct task_struct, mm)	| */
#define TASK_ACTIVE_MM 182 /* offsetof(struct task_struct, active_mm)	| */
#define THREAD_KSP 0 /* offsetof(struct thread_struct, ksp)	| */
#define THREAD_USP 4 /* offsetof(struct thread_struct, usp)	| */
#define THREAD_SR 8 /* offsetof(struct thread_struct, sr)	| */
#define THREAD_FS 10 /* offsetof(struct thread_struct, fs)	| */
#define THREAD_CRP 14 /* offsetof(struct thread_struct, crp)	| */
#define THREAD_ESP0 22 /* offsetof(struct thread_struct, esp0)	| */
#define THREAD_FPREG 38 /* offsetof(struct thread_struct, fp)	| */
#define THREAD_FPCNTL 134 /* offsetof(struct thread_struct, fpcntl)	| */
#define THREAD_FPSTATE 146 /* offsetof(struct thread_struct, fpstate)	| */
#define TINFO_PREEMPT 12 /* offsetof(struct thread_info, preempt_count)	| */
#define TINFO_FLAGS 4 /* offsetof(struct thread_info, flags)	| */
#define PT_D0 32 /* offsetof(struct pt_regs, d0)	| */
#define PT_ORIG_D0 36 /* offsetof(struct pt_regs, orig_d0)	| */
#define PT_D1 0 /* offsetof(struct pt_regs, d1)	| */
#define PT_D2 4 /* offsetof(struct pt_regs, d2)	| */
#define PT_D3 8 /* offsetof(struct pt_regs, d3)	| */
#define PT_D4 12 /* offsetof(struct pt_regs, d4)	| */
#define PT_D5 16 /* offsetof(struct pt_regs, d5)	| */
#define PT_A0 20 /* offsetof(struct pt_regs, a0)	| */
#define PT_A1 24 /* offsetof(struct pt_regs, a1)	| */
#define PT_A2 28 /* offsetof(struct pt_regs, a2)	| */
#define PT_PC 56 /* offsetof(struct pt_regs, pc)	| */
#define PT_SR 54 /* offsetof(struct pt_regs, sr)	| */
#define MM_CONTEXT 328 /* offsetof(struct mm_struct, context)	| */
#define PT_VECTOR 52 /* offsetof(struct pt_regs, pc) - 4	| */
#define IRQ_HANDLER 0 /* offsetof(struct irq_node, handler)	| */
#define IRQ_DEVID 4 /* offsetof(struct irq_node, dev_id)	| */
#define IRQ_NEXT 8 /* offsetof(struct irq_node, next)	| */
#define STAT_IRQ 72 /* offsetof(struct kernel_stat, irqs)	| */
#define CPUSTAT_SOFTIRQ_PENDING 0 /* offsetof(irq_cpustat_t, __softirq_pending)	| */
#define BIR_TAG 0 /* offsetof(struct bi_record, tag)	| */
#define BIR_SIZE 2 /* offsetof(struct bi_record, size)	| */
#define BIR_DATA 4 /* offsetof(struct bi_record, data)	| */
#define FONT_DESC_IDX 0 /* offsetof(struct font_desc, idx)	| */
#define FONT_DESC_NAME 4 /* offsetof(struct font_desc, name)	| */
#define FONT_DESC_WIDTH 8 /* offsetof(struct font_desc, width)	| */
#define FONT_DESC_HEIGHT 12 /* offsetof(struct font_desc, height)	| */
#define FONT_DESC_DATA 16 /* offsetof(struct font_desc, data)	| */
#define FONT_DESC_PREF 20 /* offsetof(struct font_desc, pref)	| */
#define SIGSEGV 11 /* SIGSEGV	| */
#define SEGV_MAPERR 196609 /* SEGV_MAPERR	| */
#define SIGTRAP 5 /* SIGTRAP	| */
#define TRAP_TRACE 196610 /* TRAP_TRACE	| */
#define CUSTOMBASE -2132807680 /* &amiga_custom	| */
#define C_INTENAR 28 /* offsetof(struct CUSTOM, intenar)	| */
#define C_INTREQR 30 /* offsetof(struct CUSTOM, intreqr)	| */
#define C_INTENA 154 /* offsetof(struct CUSTOM, intena)	| */
#define C_INTREQ 156 /* offsetof(struct CUSTOM, intreq)	| */
#define C_SERDATR 24 /* offsetof(struct CUSTOM, serdatr)	| */
#define C_SERDAT 48 /* offsetof(struct CUSTOM, serdat)	| */
#define C_SERPER 50 /* offsetof(struct CUSTOM, serper)	| */
#define CIAABASE -2134908927 /* &ciaa	| */
#define CIABBASE -2134913024 /* &ciab	| */
#define C_PRA 0 /* offsetof(struct CIA, pra)	| */
#define ZTWOBASE -2147483648 /* zTwoBase	| */

#endif