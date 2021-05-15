#ifndef HOOKER_H
#define HOOKER_H

#include <asm/syscall.h>
#include <asm/unistd.h>

extern unsigned long __force_order;
extern sys_call_ptr_t *sys_call_table_original;
extern sys_call_ptr_t sys_call_table_copy[NR_syscalls];

void hook_syscall(unsigned long nr, sys_call_ptr_t faddr);
void unhook_all(void);

#endif
