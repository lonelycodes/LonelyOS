#include <stdio.h>

#include <kernel/tty.h>

void kernel_main(void) {
	terminal_initialize();
	printf("Hello, kernel World!\n\n\n\n\n\n\n\n\n\n\n\n\tso long\n");
}
