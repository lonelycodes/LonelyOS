#include <stdio.h>
#include <string.h>

#include <kernel/tty.h>
#include "../include/kernel/gdt.h"

void kernel_main(void) {
	terminal_initialize();
	printf("LonelyOS v0\n");
	gdt_init();
	printf("> ");
}