#include <stdio.h>

#include <kernel/tty.h>

void kernel_main(void) {
	terminal_initialize();
	printf("Hello, kernel World!\nSo Long.\n");
	printf("\t\t\ta\t\t\tb\t\t\tc\t\t\td\t\t\te\t\t\tf\t\t\tSee ya later.");
	for (int i = 0; i < 100; i++) {
		printf("%d", i);
		printf("\n");
	}
}
