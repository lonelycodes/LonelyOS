i686-elf-gcc -std=gnu99 -ffreestanding -g -c start.s -o start.o
i686-elf-gcc -std=gnu99 -ffreestanding -g -c kernel.c -o kernel.o
i686-elf-gcc -ffreestanding -nostdlib -g -T linker.ld start.o kernel.o -o lonelyos.elf -lgcc

# run with qemu:
qemu-system-i386 -kernel lonelyos.elf