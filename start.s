.extern kmain // declare kmain label as external (defined in kernel.c)

.global start // declare global start label -> linker will need to know where this is. definition later in this file.

/* Multiboot header variables for GRUB */
.set MB_MAGIC, 0x1BADB002                       // 'magic' number for GRUB to find us
.set MB_FLAGS, (1 << 0) | (1 << 1)              // load modules on page boundaries, provide us with a memory map
.set MB_CHECKSUM, (0 - (MB_MAGIC + MB_FLAGS))   // set checksum to prove to GRUB that w comply with Multiboot standard

/* Multiboot section */
.section .multiboot
    // allign following data to a multiple of 4 bytes
    .align 4 
    // constants from before
    .long MB_MAGIC
	.long MB_FLAGS
    // checksum from before
	.long MB_CHECKSUM

/* BSS - zero initialized values for when our kernel is loaded*/
.section .bss
    // allign following data to multiple of 16 bytes
    .align 16  
	stack_bottom:
		.skip 4096 // 4096 bytes (4K) for our kernel stack should be enough for now
	stack_top:
/* asm code to load kernel - aka entry point to the kernel*/
.section .text
    // start label we declared before is now defined here:
    start:
        // we want to run C code, so we must setup the stack
        mov $stack_top, %esp    // let stack pointer point to top of stack (x86: stack grows DOWN)
        call kmain              // call our main C kernel method
    // kmain _should_ nver return, but if it does: halt the CPU
    halt:
        cli                     // diasble CPU interrupts
        hlt                     // halt the CPU
        jmp halt                // try halting again, if it didn't work for some reason
    
