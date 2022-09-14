#include <stdio.h>
#include <string.h>

#include <kernel/tty.h>

void test_ssp(const char* str)
{
	printf("hello!");
	char buffer[16];
	strcpy(buffer, str);
	printf(str);
	printf(buffer);
}

void kernel_main(void) {
	terminal_initialize();
	printf("LonelyOS v0\n\n\n\n\n\n\n\n\n\n\n\n\tso long");
	test_ssp("AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA");
}