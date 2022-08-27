#!/bin/sh
set -e
. ./build.sh

mkdir -p isodir
mkdir -p isodir/boot
mkdir -p isodir/boot/grub

cp sysroot/boot/lonelyos.kernel isodir/boot/lonelyos.kernel
cat > isodir/boot/grub/grub.cfg << EOF
menuentry "lonelyos" {
	multiboot /boot/lonelyos.kernel
}
EOF
grub-mkrescue -o lonelyos.iso isodir
