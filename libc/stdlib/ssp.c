#include <stdlib.h>
#include <stdio.h>

#if UINT32_MAX == UINTPTR_MAX
#define STACK_CHK_GUARD 0x10101010
#else
#define STACK_CHK_GUARD 0x1010101010101010
#endif
 
unsigned long __stack_chk_guard = STACK_CHK_GUARD;
 
__attribute__((noreturn))
void __stack_chk_fail(void)
{
#if defined(__is_libk)
	// TODOC: Add proper kernel panic.
	printf("kernel: panic: __stack_chk_fail()\n");
#else
    // TODOC: Abnormally terminate the process?? Hit hacker with a stick?
	printf("__stack_chk_fail()\n");
#endif
}