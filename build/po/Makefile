# Makefile for PO directory in any package using GNU gettext.
# Copyright (C) 1995-1997, 2000-2007, 2009-2010 by Ulrich Drepper <drepper@gnu.ai.mit.edu>
#
# This file can be copied and used freely without restrictions.  It can
# be used in projects which are not available under the GNU General Public
# License but which still want to provide support for the GNU gettext
# functionality.
# Please note that the actual code of GNU gettext is covered by the GNU
# General Public License and is *not* in the public domain.
#
# Origin: gettext-0.18.3
GETTEXT_MACRO_VERSION = 0.18

PACKAGE = grub
VERSION = 2.11
PACKAGE_BUGREPORT = bug-grub@gnu.org

SED = /usr/bin/sed
SHELL = /bin/sh


srcdir = ../../grub/po
top_srcdir = ../../grub
VPATH = ../../grub/po

prefix = /usr/local
exec_prefix = /usr/local
datarootdir = /usr/local/share
datadir = ${datarootdir}
localedir = ${datarootdir}/locale
gettextsrcdir = $(datadir)/gettext/po

INSTALL = /usr/bin/install -c
INSTALL_DATA = ${INSTALL} -m 644

# We use $(mkdir_p).
# In automake <= 1.9.x, $(mkdir_p) is defined either as "mkdir -p --" or as
# "$(mkinstalldirs)" or as "$(install_sh) -d". For these automake versions,
# ${SHELL} /Users/watabo/Projects/LonelyOS/grub/build-aux/install-sh does not start with $(SHELL), so we add it.
# In automake >= 1.10, $(MKDIR_P) is derived from ${MKDIR_P}, which is defined
# either as "/path/to/mkdir -p" or ".../install-sh -c -d". For these automake
# versions, $(mkinstalldirs) and $(install_sh) are unused.
mkinstalldirs = $(SHELL) ${SHELL} /Users/watabo/Projects/LonelyOS/grub/build-aux/install-sh -d
install_sh = $(SHELL) ${SHELL} /Users/watabo/Projects/LonelyOS/grub/build-aux/install-sh
MKDIR_P = ../../grub/build-aux/install-sh -c -d
mkdir_p = $(MKDIR_P)

GMSGFMT_ = /opt/homebrew/bin/msgfmt
GMSGFMT_no = /opt/homebrew/bin/msgfmt
GMSGFMT_yes = /opt/homebrew/bin/msgfmt
GMSGFMT = $(GMSGFMT_$(USE_MSGCTXT))
MSGFMT_ = /opt/homebrew/bin/msgfmt
MSGFMT_no = /opt/homebrew/bin/msgfmt
MSGFMT_yes = /opt/homebrew/bin/msgfmt
MSGFMT = $(MSGFMT_$(USE_MSGCTXT))
XGETTEXT_ = /opt/homebrew/bin/xgettext
XGETTEXT_no = /opt/homebrew/bin/xgettext
XGETTEXT_yes = /opt/homebrew/bin/xgettext
XGETTEXT = $(XGETTEXT_$(USE_MSGCTXT))
MSGMERGE = msgmerge
MSGMERGE_UPDATE = /opt/homebrew/bin/msgmerge --update
MSGINIT = msginit
MSGCONV = msgconv
MSGFILTER = msgfilter

POFILES = 
GMOFILES = 
UPDATEPOFILES = 
DUMMYPOFILES = 
DISTFILES.common = Makefile.in.in remove-potcdate.sin \
$(DISTFILES.common.extra1) $(DISTFILES.common.extra2) $(DISTFILES.common.extra3)
DISTFILES = $(DISTFILES.common) Makevars POTFILES.in \
$(POFILES) $(GMOFILES) \
$(DISTFILES.extra1) $(DISTFILES.extra2) $(DISTFILES.extra3)

POTFILES = \
     ../../grub/./grub-core/boot/decompressor/minilib.c \
     ../../grub/./grub-core/boot/decompressor/none.c \
     ../../grub/./grub-core/boot/decompressor/xz.c \
     ../../grub/./grub-core/bus/bonito.c \
     ../../grub/./grub-core/bus/cs5536.c \
     ../../grub/./grub-core/bus/emu/pci.c \
     ../../grub/./grub-core/bus/fdt.c \
     ../../grub/./grub-core/bus/i386/ieee1275/pci.c \
     ../../grub/./grub-core/bus/pci.c \
     ../../grub/./grub-core/bus/spi/rk3288_spi.c \
     ../../grub/./grub-core/bus/usb/ehci-fdt.c \
     ../../grub/./grub-core/bus/usb/ehci-pci.c \
     ../../grub/./grub-core/bus/usb/ehci.c \
     ../../grub/./grub-core/bus/usb/ohci.c \
     ../../grub/./grub-core/bus/usb/serial/common.c \
     ../../grub/./grub-core/bus/usb/serial/ftdi.c \
     ../../grub/./grub-core/bus/usb/serial/pl2303.c \
     ../../grub/./grub-core/bus/usb/serial/usbdebug_late.c \
     ../../grub/./grub-core/bus/usb/uhci.c \
     ../../grub/./grub-core/bus/usb/usb.c \
     ../../grub/./grub-core/bus/usb/usbhub.c \
     ../../grub/./grub-core/bus/usb/usbtrans.c \
     ../../grub/./grub-core/commands/acpi.c \
     ../../grub/./grub-core/commands/acpihalt.c \
     ../../grub/./grub-core/commands/arc/lsdev.c \
     ../../grub/./grub-core/commands/blocklist.c \
     ../../grub/./grub-core/commands/boot.c \
     ../../grub/./grub-core/commands/boottime.c \
     ../../grub/./grub-core/commands/cacheinfo.c \
     ../../grub/./grub-core/commands/cat.c \
     ../../grub/./grub-core/commands/cmp.c \
     ../../grub/./grub-core/commands/configfile.c \
     ../../grub/./grub-core/commands/date.c \
     ../../grub/./grub-core/commands/echo.c \
     ../../grub/./grub-core/commands/efi/efifwsetup.c \
     ../../grub/./grub-core/commands/efi/efitextmode.c \
     ../../grub/./grub-core/commands/efi/fixvideo.c \
     ../../grub/./grub-core/commands/efi/loadbios.c \
     ../../grub/./grub-core/commands/efi/lsefi.c \
     ../../grub/./grub-core/commands/efi/lsefimmap.c \
     ../../grub/./grub-core/commands/efi/lsefisystab.c \
     ../../grub/./grub-core/commands/efi/lssal.c \
     ../../grub/./grub-core/commands/efi/smbios.c \
     ../../grub/./grub-core/commands/efi/tpm.c \
     ../../grub/./grub-core/commands/eval.c \
     ../../grub/./grub-core/commands/extcmd.c \
     ../../grub/./grub-core/commands/file.c \
     ../../grub/./grub-core/commands/file32.c \
     ../../grub/./grub-core/commands/file64.c \
     ../../grub/./grub-core/commands/fileXX.c \
     ../../grub/./grub-core/commands/gptsync.c \
     ../../grub/./grub-core/commands/halt.c \
     ../../grub/./grub-core/commands/hashsum.c \
     ../../grub/./grub-core/commands/hdparm.c \
     ../../grub/./grub-core/commands/help.c \
     ../../grub/./grub-core/commands/hexdump.c \
     ../../grub/./grub-core/commands/i386/cmosdump.c \
     ../../grub/./grub-core/commands/i386/cmostest.c \
     ../../grub/./grub-core/commands/i386/coreboot/cb_timestamps.c \
     ../../grub/./grub-core/commands/i386/coreboot/cbls.c \
     ../../grub/./grub-core/commands/i386/cpuid.c \
     ../../grub/./grub-core/commands/i386/pc/drivemap.c \
     ../../grub/./grub-core/commands/i386/pc/halt.c \
     ../../grub/./grub-core/commands/i386/pc/lsapm.c \
     ../../grub/./grub-core/commands/i386/pc/play.c \
     ../../grub/./grub-core/commands/i386/pc/sendkey.c \
     ../../grub/./grub-core/commands/i386/pc/smbios.c \
     ../../grub/./grub-core/commands/i386/rdmsr.c \
     ../../grub/./grub-core/commands/i386/wrmsr.c \
     ../../grub/./grub-core/commands/ieee1275/suspend.c \
     ../../grub/./grub-core/commands/iorw.c \
     ../../grub/./grub-core/commands/keylayouts.c \
     ../../grub/./grub-core/commands/keystatus.c \
     ../../grub/./grub-core/commands/legacycfg.c \
     ../../grub/./grub-core/commands/loadenv.c \
     ../../grub/./grub-core/commands/ls.c \
     ../../grub/./grub-core/commands/lsacpi.c \
     ../../grub/./grub-core/commands/lsmmap.c \
     ../../grub/./grub-core/commands/lspci.c \
     ../../grub/./grub-core/commands/macbless.c \
     ../../grub/./grub-core/commands/memrw.c \
     ../../grub/./grub-core/commands/menuentry.c \
     ../../grub/./grub-core/commands/minicmd.c \
     ../../grub/./grub-core/commands/mips/loongson/lsspd.c \
     ../../grub/./grub-core/commands/nativedisk.c \
     ../../grub/./grub-core/commands/parttool.c \
     ../../grub/./grub-core/commands/password.c \
     ../../grub/./grub-core/commands/password_pbkdf2.c \
     ../../grub/./grub-core/commands/pcidump.c \
     ../../grub/./grub-core/commands/pgp.c \
     ../../grub/./grub-core/commands/probe.c \
     ../../grub/./grub-core/commands/read.c \
     ../../grub/./grub-core/commands/reboot.c \
     ../../grub/./grub-core/commands/regexp.c \
     ../../grub/./grub-core/commands/search.c \
     ../../grub/./grub-core/commands/search_file.c \
     ../../grub/./grub-core/commands/search_label.c \
     ../../grub/./grub-core/commands/search_uuid.c \
     ../../grub/./grub-core/commands/search_wrap.c \
     ../../grub/./grub-core/commands/setpci.c \
     ../../grub/./grub-core/commands/sleep.c \
     ../../grub/./grub-core/commands/smbios.c \
     ../../grub/./grub-core/commands/syslinuxcfg.c \
     ../../grub/./grub-core/commands/terminal.c \
     ../../grub/./grub-core/commands/test.c \
     ../../grub/./grub-core/commands/testload.c \
     ../../grub/./grub-core/commands/testspeed.c \
     ../../grub/./grub-core/commands/time.c \
     ../../grub/./grub-core/commands/tpm.c \
     ../../grub/./grub-core/commands/tr.c \
     ../../grub/./grub-core/commands/true.c \
     ../../grub/./grub-core/commands/usbtest.c \
     ../../grub/./grub-core/commands/videoinfo.c \
     ../../grub/./grub-core/commands/videotest.c \
     ../../grub/./grub-core/commands/wildcard.c \
     ../../grub/./grub-core/commands/xen/lsxen.c \
     ../../grub/./grub-core/commands/xnu_uuid.c \
     ../../grub/./grub-core/disk/AFSplitter.c \
     ../../grub/./grub-core/disk/ahci.c \
     ../../grub/./grub-core/disk/arc/arcdisk.c \
     ../../grub/./grub-core/disk/ata.c \
     ../../grub/./grub-core/disk/cryptodisk.c \
     ../../grub/./grub-core/disk/diskfilter.c \
     ../../grub/./grub-core/disk/dmraid_nvidia.c \
     ../../grub/./grub-core/disk/efi/efidisk.c \
     ../../grub/./grub-core/disk/geli.c \
     ../../grub/./grub-core/disk/host.c \
     ../../grub/./grub-core/disk/i386/pc/biosdisk.c \
     ../../grub/./grub-core/disk/ieee1275/nand.c \
     ../../grub/./grub-core/disk/ieee1275/obdisk.c \
     ../../grub/./grub-core/disk/ieee1275/ofdisk.c \
     ../../grub/./grub-core/disk/ldm.c \
     ../../grub/./grub-core/disk/loopback.c \
     ../../grub/./grub-core/disk/luks.c \
     ../../grub/./grub-core/disk/luks2.c \
     ../../grub/./grub-core/disk/lvm.c \
     ../../grub/./grub-core/disk/mdraid1x_linux.c \
     ../../grub/./grub-core/disk/mdraid_linux.c \
     ../../grub/./grub-core/disk/mdraid_linux_be.c \
     ../../grub/./grub-core/disk/memdisk.c \
     ../../grub/./grub-core/disk/pata.c \
     ../../grub/./grub-core/disk/raid5_recover.c \
     ../../grub/./grub-core/disk/raid6_recover.c \
     ../../grub/./grub-core/disk/scsi.c \
     ../../grub/./grub-core/disk/uboot/ubootdisk.c \
     ../../grub/./grub-core/disk/usbms.c \
     ../../grub/./grub-core/disk/xen/xendisk.c \
     ../../grub/./grub-core/efiemu/i386/coredetect.c \
     ../../grub/./grub-core/efiemu/i386/loadcore32.c \
     ../../grub/./grub-core/efiemu/i386/loadcore64.c \
     ../../grub/./grub-core/efiemu/i386/nocfgtables.c \
     ../../grub/./grub-core/efiemu/i386/pc/cfgtables.c \
     ../../grub/./grub-core/efiemu/loadcore.c \
     ../../grub/./grub-core/efiemu/loadcore32.c \
     ../../grub/./grub-core/efiemu/loadcore64.c \
     ../../grub/./grub-core/efiemu/loadcore_common.c \
     ../../grub/./grub-core/efiemu/main.c \
     ../../grub/./grub-core/efiemu/mm.c \
     ../../grub/./grub-core/efiemu/pnvram.c \
     ../../grub/./grub-core/efiemu/prepare.c \
     ../../grub/./grub-core/efiemu/prepare32.c \
     ../../grub/./grub-core/efiemu/prepare64.c \
     ../../grub/./grub-core/efiemu/runtime/config.h \
     ../../grub/./grub-core/efiemu/runtime/efiemu.c \
     ../../grub/./grub-core/efiemu/symbols.c \
     ../../grub/./grub-core/font/font.c \
     ../../grub/./grub-core/font/font_cmd.c \
     ../../grub/./grub-core/fs/affs.c \
     ../../grub/./grub-core/fs/afs.c \
     ../../grub/./grub-core/fs/archelp.c \
     ../../grub/./grub-core/fs/bfs.c \
     ../../grub/./grub-core/fs/btrfs.c \
     ../../grub/./grub-core/fs/cbfs.c \
     ../../grub/./grub-core/fs/cpio.c \
     ../../grub/./grub-core/fs/cpio_be.c \
     ../../grub/./grub-core/fs/cpio_common.c \
     ../../grub/./grub-core/fs/exfat.c \
     ../../grub/./grub-core/fs/ext2.c \
     ../../grub/./grub-core/fs/f2fs.c \
     ../../grub/./grub-core/fs/fat.c \
     ../../grub/./grub-core/fs/fshelp.c \
     ../../grub/./grub-core/fs/hfs.c \
     ../../grub/./grub-core/fs/hfsplus.c \
     ../../grub/./grub-core/fs/hfspluscomp.c \
     ../../grub/./grub-core/fs/iso9660.c \
     ../../grub/./grub-core/fs/jfs.c \
     ../../grub/./grub-core/fs/minix.c \
     ../../grub/./grub-core/fs/minix2.c \
     ../../grub/./grub-core/fs/minix2_be.c \
     ../../grub/./grub-core/fs/minix3.c \
     ../../grub/./grub-core/fs/minix3_be.c \
     ../../grub/./grub-core/fs/minix_be.c \
     ../../grub/./grub-core/fs/newc.c \
     ../../grub/./grub-core/fs/nilfs2.c \
     ../../grub/./grub-core/fs/ntfs.c \
     ../../grub/./grub-core/fs/ntfscomp.c \
     ../../grub/./grub-core/fs/odc.c \
     ../../grub/./grub-core/fs/proc.c \
     ../../grub/./grub-core/fs/reiserfs.c \
     ../../grub/./grub-core/fs/romfs.c \
     ../../grub/./grub-core/fs/sfs.c \
     ../../grub/./grub-core/fs/squash4.c \
     ../../grub/./grub-core/fs/tar.c \
     ../../grub/./grub-core/fs/udf.c \
     ../../grub/./grub-core/fs/ufs.c \
     ../../grub/./grub-core/fs/ufs2.c \
     ../../grub/./grub-core/fs/ufs_be.c \
     ../../grub/./grub-core/fs/xfs.c \
     ../../grub/./grub-core/fs/zfs/zfs.c \
     ../../grub/./grub-core/fs/zfs/zfs_fletcher.c \
     ../../grub/./grub-core/fs/zfs/zfs_lz4.c \
     ../../grub/./grub-core/fs/zfs/zfs_lzjb.c \
     ../../grub/./grub-core/fs/zfs/zfs_sha256.c \
     ../../grub/./grub-core/fs/zfs/zfscrypt.c \
     ../../grub/./grub-core/fs/zfs/zfsinfo.c \
     ../../grub/./grub-core/gdb/cstub.c \
     ../../grub/./grub-core/gdb/gdb.c \
     ../../grub/./grub-core/gdb/i386/idt.c \
     ../../grub/./grub-core/gdb/i386/signal.c \
     ../../grub/./grub-core/gentrigtables.c \
     ../../grub/./grub-core/gettext/gettext.c \
     ../../grub/./grub-core/gfxmenu/font.c \
     ../../grub/./grub-core/gfxmenu/gfxmenu.c \
     ../../grub/./grub-core/gfxmenu/gui_box.c \
     ../../grub/./grub-core/gfxmenu/gui_canvas.c \
     ../../grub/./grub-core/gfxmenu/gui_circular_progress.c \
     ../../grub/./grub-core/gfxmenu/gui_image.c \
     ../../grub/./grub-core/gfxmenu/gui_label.c \
     ../../grub/./grub-core/gfxmenu/gui_list.c \
     ../../grub/./grub-core/gfxmenu/gui_progress_bar.c \
     ../../grub/./grub-core/gfxmenu/gui_string_util.c \
     ../../grub/./grub-core/gfxmenu/gui_util.c \
     ../../grub/./grub-core/gfxmenu/icon_manager.c \
     ../../grub/./grub-core/gfxmenu/theme_loader.c \
     ../../grub/./grub-core/gfxmenu/view.c \
     ../../grub/./grub-core/gfxmenu/widget-box.c \
     ../../grub/./grub-core/hello/hello.c \
     ../../grub/./grub-core/hook/datehook.c \
     ../../grub/./grub-core/io/bufio.c \
     ../../grub/./grub-core/io/gzio.c \
     ../../grub/./grub-core/io/lzopio.c \
     ../../grub/./grub-core/io/offset.c \
     ../../grub/./grub-core/io/xzio.c \
     ../../grub/./grub-core/kern/acpi.c \
     ../../grub/./grub-core/kern/arm/cache.c \
     ../../grub/./grub-core/kern/arm/coreboot/cbtable.c \
     ../../grub/./grub-core/kern/arm/coreboot/dma.c \
     ../../grub/./grub-core/kern/arm/coreboot/init.c \
     ../../grub/./grub-core/kern/arm/coreboot/timer.c \
     ../../grub/./grub-core/kern/arm/dl.c \
     ../../grub/./grub-core/kern/arm/dl_helper.c \
     ../../grub/./grub-core/kern/arm/efi/init.c \
     ../../grub/./grub-core/kern/arm/uboot/init.c \
     ../../grub/./grub-core/kern/arm64/cache.c \
     ../../grub/./grub-core/kern/arm64/dl.c \
     ../../grub/./grub-core/kern/arm64/dl_helper.c \
     ../../grub/./grub-core/kern/arm64/efi/init.c \
     ../../grub/./grub-core/kern/buffer.c \
     ../../grub/./grub-core/kern/command.c \
     ../../grub/./grub-core/kern/compiler-rt.c \
     ../../grub/./grub-core/kern/coreboot/cbtable.c \
     ../../grub/./grub-core/kern/coreboot/mmap.c \
     ../../grub/./grub-core/kern/corecmd.c \
     ../../grub/./grub-core/kern/device.c \
     ../../grub/./grub-core/kern/disk.c \
     ../../grub/./grub-core/kern/disk_common.c \
     ../../grub/./grub-core/kern/dl.c \
     ../../grub/./grub-core/kern/efi/acpi.c \
     ../../grub/./grub-core/kern/efi/efi.c \
     ../../grub/./grub-core/kern/efi/fdt.c \
     ../../grub/./grub-core/kern/efi/init.c \
     ../../grub/./grub-core/kern/efi/mm.c \
     ../../grub/./grub-core/kern/efi/sb.c \
     ../../grub/./grub-core/kern/elf.c \
     ../../grub/./grub-core/kern/elfXX.c \
     ../../grub/./grub-core/kern/emu/argp_common.c \
     ../../grub/./grub-core/kern/emu/cache.c \
     ../../grub/./grub-core/kern/emu/full.c \
     ../../grub/./grub-core/kern/emu/hostdisk.c \
     ../../grub/./grub-core/kern/emu/hostfs.c \
     ../../grub/./grub-core/kern/emu/lite.c \
     ../../grub/./grub-core/kern/emu/main.c \
     ../../grub/./grub-core/kern/emu/misc.c \
     ../../grub/./grub-core/kern/emu/mm.c \
     ../../grub/./grub-core/kern/emu/time.c \
     ../../grub/./grub-core/kern/env.c \
     ../../grub/./grub-core/kern/err.c \
     ../../grub/./grub-core/kern/file.c \
     ../../grub/./grub-core/kern/fs.c \
     ../../grub/./grub-core/kern/generic/millisleep.c \
     ../../grub/./grub-core/kern/generic/rtc_get_time_ms.c \
     ../../grub/./grub-core/kern/i386/coreboot/cbtable.c \
     ../../grub/./grub-core/kern/i386/coreboot/init.c \
     ../../grub/./grub-core/kern/i386/dl.c \
     ../../grub/./grub-core/kern/i386/efi/init.c \
     ../../grub/./grub-core/kern/i386/efi/tsc.c \
     ../../grub/./grub-core/kern/i386/multiboot_mmap.c \
     ../../grub/./grub-core/kern/i386/pc/acpi.c \
     ../../grub/./grub-core/kern/i386/pc/init.c \
     ../../grub/./grub-core/kern/i386/pc/mmap.c \
     ../../grub/./grub-core/kern/i386/qemu/init.c \
     ../../grub/./grub-core/kern/i386/qemu/mmap.c \
     ../../grub/./grub-core/kern/i386/tsc.c \
     ../../grub/./grub-core/kern/i386/tsc_pit.c \
     ../../grub/./grub-core/kern/i386/tsc_pmtimer.c \
     ../../grub/./grub-core/kern/i386/xen/pvh.c \
     ../../grub/./grub-core/kern/i386/xen/tsc.c \
     ../../grub/./grub-core/kern/ia64/cache.c \
     ../../grub/./grub-core/kern/ia64/dl.c \
     ../../grub/./grub-core/kern/ia64/dl_helper.c \
     ../../grub/./grub-core/kern/ia64/efi/init.c \
     ../../grub/./grub-core/kern/ieee1275/cmain.c \
     ../../grub/./grub-core/kern/ieee1275/ieee1275.c \
     ../../grub/./grub-core/kern/ieee1275/init.c \
     ../../grub/./grub-core/kern/ieee1275/mmap.c \
     ../../grub/./grub-core/kern/ieee1275/openfw.c \
     ../../grub/./grub-core/kern/list.c \
     ../../grub/./grub-core/kern/lockdown.c \
     ../../grub/./grub-core/kern/main.c \
     ../../grub/./grub-core/kern/mips/arc/init.c \
     ../../grub/./grub-core/kern/mips/dl.c \
     ../../grub/./grub-core/kern/mips/init.c \
     ../../grub/./grub-core/kern/mips/loongson/init.c \
     ../../grub/./grub-core/kern/mips/qemu_mips/init.c \
     ../../grub/./grub-core/kern/misc.c \
     ../../grub/./grub-core/kern/mm.c \
     ../../grub/./grub-core/kern/parser.c \
     ../../grub/./grub-core/kern/partition.c \
     ../../grub/./grub-core/kern/powerpc/dl.c \
     ../../grub/./grub-core/kern/rescue_parser.c \
     ../../grub/./grub-core/kern/rescue_reader.c \
     ../../grub/./grub-core/kern/riscv/cache.c \
     ../../grub/./grub-core/kern/riscv/dl.c \
     ../../grub/./grub-core/kern/riscv/efi/init.c \
     ../../grub/./grub-core/kern/sparc64/dl.c \
     ../../grub/./grub-core/kern/sparc64/ieee1275/ieee1275.c \
     ../../grub/./grub-core/kern/term.c \
     ../../grub/./grub-core/kern/time.c \
     ../../grub/./grub-core/kern/uboot/hw.c \
     ../../grub/./grub-core/kern/uboot/init.c \
     ../../grub/./grub-core/kern/uboot/uboot.c \
     ../../grub/./grub-core/kern/verifiers.c \
     ../../grub/./grub-core/kern/vga_init.c \
     ../../grub/./grub-core/kern/x86_64/dl.c \
     ../../grub/./grub-core/kern/xen/init.c \
     ../../grub/./grub-core/lib/LzFind.c \
     ../../grub/./grub-core/lib/LzmaDec.c \
     ../../grub/./grub-core/lib/LzmaEnc.c \
     ../../grub/./grub-core/lib/adler32.c \
     ../../grub/./grub-core/lib/arc/datetime.c \
     ../../grub/./grub-core/lib/arg.c \
     ../../grub/./grub-core/lib/backtrace.c \
     ../../grub/./grub-core/lib/cmdline.c \
     ../../grub/./grub-core/lib/cmos_datetime.c \
     ../../grub/./grub-core/lib/crc.c \
     ../../grub/./grub-core/lib/crc64.c \
     ../../grub/./grub-core/lib/crypto.c \
     ../../grub/./grub-core/lib/datetime.c \
     ../../grub/./grub-core/lib/disk.c \
     ../../grub/./grub-core/lib/division.c \
     ../../grub/./grub-core/lib/dummy/datetime.c \
     ../../grub/./grub-core/lib/dummy/halt.c \
     ../../grub/./grub-core/lib/dummy/reboot.c \
     ../../grub/./grub-core/lib/efi/datetime.c \
     ../../grub/./grub-core/lib/efi/halt.c \
     ../../grub/./grub-core/lib/efi/relocator.c \
     ../../grub/./grub-core/lib/emu/halt.c \
     ../../grub/./grub-core/lib/envblk.c \
     ../../grub/./grub-core/lib/fake_module.c \
     ../../grub/./grub-core/lib/fdt.c \
     ../../grub/./grub-core/lib/getline.c \
     ../../grub/./grub-core/lib/hexdump.c \
     ../../grub/./grub-core/lib/i386/backtrace.c \
     ../../grub/./grub-core/lib/i386/halt.c \
     ../../grub/./grub-core/lib/i386/pc/biosnum.c \
     ../../grub/./grub-core/lib/i386/pc/vesa_modes_table.c \
     ../../grub/./grub-core/lib/i386/random.c \
     ../../grub/./grub-core/lib/i386/reboot.c \
     ../../grub/./grub-core/lib/i386/relocator.c \
     ../../grub/./grub-core/lib/i386/relocator_common_c.c \
     ../../grub/./grub-core/lib/ieee1275/cmos.c \
     ../../grub/./grub-core/lib/ieee1275/datetime.c \
     ../../grub/./grub-core/lib/ieee1275/halt.c \
     ../../grub/./grub-core/lib/ieee1275/reboot.c \
     ../../grub/./grub-core/lib/ieee1275/relocator.c \
     ../../grub/./grub-core/lib/json/jsmn.h \
     ../../grub/./grub-core/lib/json/json.c \
     ../../grub/./grub-core/lib/json/json.h \
     ../../grub/./grub-core/lib/legacy_parse.c \
     ../../grub/./grub-core/lib/libgcrypt/cipher/ac.c \
     ../../grub/./grub-core/lib/libgcrypt/cipher/arcfour.c \
     ../../grub/./grub-core/lib/libgcrypt/cipher/bithelp.h \
     ../../grub/./grub-core/lib/libgcrypt/cipher/blowfish.c \
     ../../grub/./grub-core/lib/libgcrypt/cipher/bufhelp.h \
     ../../grub/./grub-core/lib/libgcrypt/cipher/camellia-glue.c \
     ../../grub/./grub-core/lib/libgcrypt/cipher/camellia.c \
     ../../grub/./grub-core/lib/libgcrypt/cipher/camellia.h \
     ../../grub/./grub-core/lib/libgcrypt/cipher/cast5.c \
     ../../grub/./grub-core/lib/libgcrypt/cipher/cipher.c \
     ../../grub/./grub-core/lib/libgcrypt/cipher/crc.c \
     ../../grub/./grub-core/lib/libgcrypt/cipher/des.c \
     ../../grub/./grub-core/lib/libgcrypt/cipher/dsa.c \
     ../../grub/./grub-core/lib/libgcrypt/cipher/ecc.c \
     ../../grub/./grub-core/lib/libgcrypt/cipher/elgamal.c \
     ../../grub/./grub-core/lib/libgcrypt/cipher/hash-common.c \
     ../../grub/./grub-core/lib/libgcrypt/cipher/hash-common.h \
     ../../grub/./grub-core/lib/libgcrypt/cipher/hmac-tests.c \
     ../../grub/./grub-core/lib/libgcrypt/cipher/idea.c \
     ../../grub/./grub-core/lib/libgcrypt/cipher/kdf.c \
     ../../grub/./grub-core/lib/libgcrypt/cipher/md.c \
     ../../grub/./grub-core/lib/libgcrypt/cipher/md4.c \
     ../../grub/./grub-core/lib/libgcrypt/cipher/md5.c \
     ../../grub/./grub-core/lib/libgcrypt/cipher/primegen.c \
     ../../grub/./grub-core/lib/libgcrypt/cipher/pubkey.c \
     ../../grub/./grub-core/lib/libgcrypt/cipher/rfc2268.c \
     ../../grub/./grub-core/lib/libgcrypt/cipher/rijndael-tables.h \
     ../../grub/./grub-core/lib/libgcrypt/cipher/rijndael.c \
     ../../grub/./grub-core/lib/libgcrypt/cipher/rmd.h \
     ../../grub/./grub-core/lib/libgcrypt/cipher/rmd160.c \
     ../../grub/./grub-core/lib/libgcrypt/cipher/rsa.c \
     ../../grub/./grub-core/lib/libgcrypt/cipher/seed.c \
     ../../grub/./grub-core/lib/libgcrypt/cipher/serpent.c \
     ../../grub/./grub-core/lib/libgcrypt/cipher/sha1.c \
     ../../grub/./grub-core/lib/libgcrypt/cipher/sha256.c \
     ../../grub/./grub-core/lib/libgcrypt/cipher/sha512.c \
     ../../grub/./grub-core/lib/libgcrypt/cipher/test-getrusage.c \
     ../../grub/./grub-core/lib/libgcrypt/cipher/tiger.c \
     ../../grub/./grub-core/lib/libgcrypt/cipher/twofish.c \
     ../../grub/./grub-core/lib/libgcrypt/cipher/whirlpool.c \
     ../../grub/./grub-core/lib/libgcrypt/mpi/amd64/mpi-asm-defs.h \
     ../../grub/./grub-core/lib/libgcrypt/mpi/ec.c \
     ../../grub/./grub-core/lib/libgcrypt/mpi/generic/mpi-asm-defs.h \
     ../../grub/./grub-core/lib/libgcrypt/mpi/generic/mpih-add1.c \
     ../../grub/./grub-core/lib/libgcrypt/mpi/generic/mpih-lshift.c \
     ../../grub/./grub-core/lib/libgcrypt/mpi/generic/mpih-mul1.c \
     ../../grub/./grub-core/lib/libgcrypt/mpi/generic/mpih-mul2.c \
     ../../grub/./grub-core/lib/libgcrypt/mpi/generic/mpih-mul3.c \
     ../../grub/./grub-core/lib/libgcrypt/mpi/generic/mpih-rshift.c \
     ../../grub/./grub-core/lib/libgcrypt/mpi/generic/mpih-sub1.c \
     ../../grub/./grub-core/lib/libgcrypt/mpi/generic/udiv-w-sdiv.c \
     ../../grub/./grub-core/lib/libgcrypt/mpi/i386/syntax.h \
     ../../grub/./grub-core/lib/libgcrypt/mpi/longlong.h \
     ../../grub/./grub-core/lib/libgcrypt/mpi/m68k/syntax.h \
     ../../grub/./grub-core/lib/libgcrypt/mpi/mips3/mpi-asm-defs.h \
     ../../grub/./grub-core/lib/libgcrypt/mpi/mpi-add.c \
     ../../grub/./grub-core/lib/libgcrypt/mpi/mpi-bit.c \
     ../../grub/./grub-core/lib/libgcrypt/mpi/mpi-cmp.c \
     ../../grub/./grub-core/lib/libgcrypt/mpi/mpi-div.c \
     ../../grub/./grub-core/lib/libgcrypt/mpi/mpi-gcd.c \
     ../../grub/./grub-core/lib/libgcrypt/mpi/mpi-inline.c \
     ../../grub/./grub-core/lib/libgcrypt/mpi/mpi-inline.h \
     ../../grub/./grub-core/lib/libgcrypt/mpi/mpi-internal.h \
     ../../grub/./grub-core/lib/libgcrypt/mpi/mpi-inv.c \
     ../../grub/./grub-core/lib/libgcrypt/mpi/mpi-mod.c \
     ../../grub/./grub-core/lib/libgcrypt/mpi/mpi-mpow.c \
     ../../grub/./grub-core/lib/libgcrypt/mpi/mpi-mul.c \
     ../../grub/./grub-core/lib/libgcrypt/mpi/mpi-pow.c \
     ../../grub/./grub-core/lib/libgcrypt/mpi/mpi-scan.c \
     ../../grub/./grub-core/lib/libgcrypt/mpi/mpicoder.c \
     ../../grub/./grub-core/lib/libgcrypt/mpi/mpih-div.c \
     ../../grub/./grub-core/lib/libgcrypt/mpi/mpih-mul.c \
     ../../grub/./grub-core/lib/libgcrypt/mpi/mpiutil.c \
     ../../grub/./grub-core/lib/libgcrypt/mpi/powerpc32/syntax.h \
     ../../grub/./grub-core/lib/libgcrypt/src/ath.c \
     ../../grub/./grub-core/lib/libgcrypt/src/ath.h \
     ../../grub/./grub-core/lib/libgcrypt/src/cipher-proto.h \
     ../../grub/./grub-core/lib/libgcrypt/src/cipher.h \
     ../../grub/./grub-core/lib/libgcrypt/src/dumpsexp.c \
     ../../grub/./grub-core/lib/libgcrypt/src/fips.c \
     ../../grub/./grub-core/lib/libgcrypt/src/g10lib.h \
     ../../grub/./grub-core/lib/libgcrypt/src/gcrypt-module.h \
     ../../grub/./grub-core/lib/libgcrypt/src/gcryptrnd.c \
     ../../grub/./grub-core/lib/libgcrypt/src/getrandom.c \
     ../../grub/./grub-core/lib/libgcrypt/src/hmac256.c \
     ../../grub/./grub-core/lib/libgcrypt/src/hmac256.h \
     ../../grub/./grub-core/lib/libgcrypt/src/hwfeatures.c \
     ../../grub/./grub-core/lib/libgcrypt/src/missing-string.c \
     ../../grub/./grub-core/lib/libgcrypt/src/module.c \
     ../../grub/./grub-core/lib/libgcrypt/src/mpi.h \
     ../../grub/./grub-core/lib/libgcrypt/src/secmem.h \
     ../../grub/./grub-core/lib/libgcrypt/src/sexp.c \
     ../../grub/./grub-core/lib/libgcrypt/src/stdmem.c \
     ../../grub/./grub-core/lib/libgcrypt/src/stdmem.h \
     ../../grub/./grub-core/lib/libgcrypt/src/types.h \
     ../../grub/./grub-core/lib/libgcrypt/src/visibility.c \
     ../../grub/./grub-core/lib/libgcrypt/src/visibility.h \
     ../../grub/./grub-core/lib/libgcrypt_wrap/cipher_wrap.h \
     ../../grub/./grub-core/lib/libgcrypt_wrap/mem.c \
     ../../grub/./grub-core/lib/minilzo/lzoconf.h \
     ../../grub/./grub-core/lib/minilzo/lzodefs.h \
     ../../grub/./grub-core/lib/minilzo/minilzo.c \
     ../../grub/./grub-core/lib/minilzo/minilzo.h \
     ../../grub/./grub-core/lib/mips/arc/reboot.c \
     ../../grub/./grub-core/lib/mips/loongson/reboot.c \
     ../../grub/./grub-core/lib/mips/qemu_mips/reboot.c \
     ../../grub/./grub-core/lib/mips/relocator.c \
     ../../grub/./grub-core/lib/pbkdf2.c \
     ../../grub/./grub-core/lib/posix_wrap/assert.h \
     ../../grub/./grub-core/lib/posix_wrap/ctype.h \
     ../../grub/./grub-core/lib/posix_wrap/errno.h \
     ../../grub/./grub-core/lib/posix_wrap/inttypes.h \
     ../../grub/./grub-core/lib/posix_wrap/langinfo.h \
     ../../grub/./grub-core/lib/posix_wrap/limits.h \
     ../../grub/./grub-core/lib/posix_wrap/localcharset.h \
     ../../grub/./grub-core/lib/posix_wrap/locale.h \
     ../../grub/./grub-core/lib/posix_wrap/stdint.h \
     ../../grub/./grub-core/lib/posix_wrap/stdio.h \
     ../../grub/./grub-core/lib/posix_wrap/stdlib.h \
     ../../grub/./grub-core/lib/posix_wrap/string.h \
     ../../grub/./grub-core/lib/posix_wrap/sys/types.h \
     ../../grub/./grub-core/lib/posix_wrap/unistd.h \
     ../../grub/./grub-core/lib/posix_wrap/wchar.h \
     ../../grub/./grub-core/lib/posix_wrap/wctype.h \
     ../../grub/./grub-core/lib/powerpc/relocator.c \
     ../../grub/./grub-core/lib/priority_queue.c \
     ../../grub/./grub-core/lib/progress.c \
     ../../grub/./grub-core/lib/random.c \
     ../../grub/./grub-core/lib/reed_solomon.c \
     ../../grub/./grub-core/lib/relocator.c \
     ../../grub/./grub-core/lib/syslinux_parse.c \
     ../../grub/./grub-core/lib/uboot/reboot.c \
     ../../grub/./grub-core/lib/x86_64/efi/relocator.c \
     ../../grub/./grub-core/lib/xen/datetime.c \
     ../../grub/./grub-core/lib/xen/halt.c \
     ../../grub/./grub-core/lib/xen/reboot.c \
     ../../grub/./grub-core/lib/xen/relocator.c \
     ../../grub/./grub-core/lib/xzembed/xz.h \
     ../../grub/./grub-core/lib/xzembed/xz_config.h \
     ../../grub/./grub-core/lib/xzembed/xz_dec_bcj.c \
     ../../grub/./grub-core/lib/xzembed/xz_dec_lzma2.c \
     ../../grub/./grub-core/lib/xzembed/xz_dec_stream.c \
     ../../grub/./grub-core/lib/xzembed/xz_lzma2.h \
     ../../grub/./grub-core/lib/xzembed/xz_private.h \
     ../../grub/./grub-core/lib/xzembed/xz_stream.h \
     ../../grub/./grub-core/lib/zstd/bitstream.h \
     ../../grub/./grub-core/lib/zstd/compiler.h \
     ../../grub/./grub-core/lib/zstd/cpu.h \
     ../../grub/./grub-core/lib/zstd/debug.c \
     ../../grub/./grub-core/lib/zstd/debug.h \
     ../../grub/./grub-core/lib/zstd/entropy_common.c \
     ../../grub/./grub-core/lib/zstd/error_private.c \
     ../../grub/./grub-core/lib/zstd/error_private.h \
     ../../grub/./grub-core/lib/zstd/fse.h \
     ../../grub/./grub-core/lib/zstd/fse_decompress.c \
     ../../grub/./grub-core/lib/zstd/huf.h \
     ../../grub/./grub-core/lib/zstd/huf_decompress.c \
     ../../grub/./grub-core/lib/zstd/mem.h \
     ../../grub/./grub-core/lib/zstd/module.c \
     ../../grub/./grub-core/lib/zstd/xxhash.c \
     ../../grub/./grub-core/lib/zstd/xxhash.h \
     ../../grub/./grub-core/lib/zstd/zstd.h \
     ../../grub/./grub-core/lib/zstd/zstd_common.c \
     ../../grub/./grub-core/lib/zstd/zstd_decompress.c \
     ../../grub/./grub-core/lib/zstd/zstd_errors.h \
     ../../grub/./grub-core/lib/zstd/zstd_internal.h \
     ../../grub/./grub-core/loader/aout.c \
     ../../grub/./grub-core/loader/arm/linux.c \
     ../../grub/./grub-core/loader/arm64/linux.c \
     ../../grub/./grub-core/loader/arm64/xen_boot.c \
     ../../grub/./grub-core/loader/efi/appleloader.c \
     ../../grub/./grub-core/loader/efi/chainloader.c \
     ../../grub/./grub-core/loader/efi/fdt.c \
     ../../grub/./grub-core/loader/i386/bsd.c \
     ../../grub/./grub-core/loader/i386/bsd32.c \
     ../../grub/./grub-core/loader/i386/bsd64.c \
     ../../grub/./grub-core/loader/i386/bsdXX.c \
     ../../grub/./grub-core/loader/i386/bsd_pagetable.c \
     ../../grub/./grub-core/loader/i386/coreboot/chainloader.c \
     ../../grub/./grub-core/loader/i386/linux.c \
     ../../grub/./grub-core/loader/i386/multiboot_mbi.c \
     ../../grub/./grub-core/loader/i386/pc/chainloader.c \
     ../../grub/./grub-core/loader/i386/pc/freedos.c \
     ../../grub/./grub-core/loader/i386/pc/linux.c \
     ../../grub/./grub-core/loader/i386/pc/ntldr.c \
     ../../grub/./grub-core/loader/i386/pc/plan9.c \
     ../../grub/./grub-core/loader/i386/pc/pxechainloader.c \
     ../../grub/./grub-core/loader/i386/pc/truecrypt.c \
     ../../grub/./grub-core/loader/i386/xen.c \
     ../../grub/./grub-core/loader/i386/xen_file.c \
     ../../grub/./grub-core/loader/i386/xen_file32.c \
     ../../grub/./grub-core/loader/i386/xen_file64.c \
     ../../grub/./grub-core/loader/i386/xen_fileXX.c \
     ../../grub/./grub-core/loader/i386/xnu.c \
     ../../grub/./grub-core/loader/ia64/efi/linux.c \
     ../../grub/./grub-core/loader/linux.c \
     ../../grub/./grub-core/loader/lzss.c \
     ../../grub/./grub-core/loader/macho.c \
     ../../grub/./grub-core/loader/macho32.c \
     ../../grub/./grub-core/loader/macho64.c \
     ../../grub/./grub-core/loader/machoXX.c \
     ../../grub/./grub-core/loader/mips/linux.c \
     ../../grub/./grub-core/loader/multiboot.c \
     ../../grub/./grub-core/loader/multiboot_elfxx.c \
     ../../grub/./grub-core/loader/multiboot_mbi2.c \
     ../../grub/./grub-core/loader/powerpc/ieee1275/linux.c \
     ../../grub/./grub-core/loader/riscv/linux.c \
     ../../grub/./grub-core/loader/sparc64/ieee1275/linux.c \
     ../../grub/./grub-core/loader/xnu.c \
     ../../grub/./grub-core/loader/xnu_resume.c \
     ../../grub/./grub-core/mmap/efi/mmap.c \
     ../../grub/./grub-core/mmap/i386/mmap.c \
     ../../grub/./grub-core/mmap/i386/pc/mmap.c \
     ../../grub/./grub-core/mmap/i386/uppermem.c \
     ../../grub/./grub-core/mmap/mips/uppermem.c \
     ../../grub/./grub-core/mmap/mmap.c \
     ../../grub/./grub-core/net/arp.c \
     ../../grub/./grub-core/net/bootp.c \
     ../../grub/./grub-core/net/dns.c \
     ../../grub/./grub-core/net/drivers/efi/efinet.c \
     ../../grub/./grub-core/net/drivers/emu/emunet.c \
     ../../grub/./grub-core/net/drivers/i386/pc/pxe.c \
     ../../grub/./grub-core/net/drivers/ieee1275/ofnet.c \
     ../../grub/./grub-core/net/drivers/uboot/ubootnet.c \
     ../../grub/./grub-core/net/ethernet.c \
     ../../grub/./grub-core/net/http.c \
     ../../grub/./grub-core/net/icmp.c \
     ../../grub/./grub-core/net/icmp6.c \
     ../../grub/./grub-core/net/ip.c \
     ../../grub/./grub-core/net/net.c \
     ../../grub/./grub-core/net/netbuff.c \
     ../../grub/./grub-core/net/tcp.c \
     ../../grub/./grub-core/net/tftp.c \
     ../../grub/./grub-core/net/udp.c \
     ../../grub/./grub-core/normal/auth.c \
     ../../grub/./grub-core/normal/autofs.c \
     ../../grub/./grub-core/normal/charset.c \
     ../../grub/./grub-core/normal/cmdline.c \
     ../../grub/./grub-core/normal/color.c \
     ../../grub/./grub-core/normal/completion.c \
     ../../grub/./grub-core/normal/context.c \
     ../../grub/./grub-core/normal/crypto.c \
     ../../grub/./grub-core/normal/dyncmd.c \
     ../../grub/./grub-core/normal/main.c \
     ../../grub/./grub-core/normal/menu.c \
     ../../grub/./grub-core/normal/menu_entry.c \
     ../../grub/./grub-core/normal/menu_text.c \
     ../../grub/./grub-core/normal/misc.c \
     ../../grub/./grub-core/normal/term.c \
     ../../grub/./grub-core/osdep/apple/getroot.c \
     ../../grub/./grub-core/osdep/apple/hostdisk.c \
     ../../grub/./grub-core/osdep/aros/config.c \
     ../../grub/./grub-core/osdep/aros/getroot.c \
     ../../grub/./grub-core/osdep/aros/hostdisk.c \
     ../../grub/./grub-core/osdep/aros/relpath.c \
     ../../grub/./grub-core/osdep/basic/compress.c \
     ../../grub/./grub-core/osdep/basic/emunet.c \
     ../../grub/./grub-core/osdep/basic/getroot.c \
     ../../grub/./grub-core/osdep/basic/hostdisk.c \
     ../../grub/./grub-core/osdep/basic/init.c \
     ../../grub/./grub-core/osdep/basic/no_platform.c \
     ../../grub/./grub-core/osdep/basic/ofpath.c \
     ../../grub/./grub-core/osdep/basic/platform.c \
     ../../grub/./grub-core/osdep/basic/random.c \
     ../../grub/./grub-core/osdep/blocklist.c \
     ../../grub/./grub-core/osdep/bsd/getroot.c \
     ../../grub/./grub-core/osdep/bsd/hostdisk.c \
     ../../grub/./grub-core/osdep/compress.c \
     ../../grub/./grub-core/osdep/config.c \
     ../../grub/./grub-core/osdep/cputime.c \
     ../../grub/./grub-core/osdep/devmapper/getroot.c \
     ../../grub/./grub-core/osdep/devmapper/hostdisk.c \
     ../../grub/./grub-core/osdep/dl.c \
     ../../grub/./grub-core/osdep/emuconsole.c \
     ../../grub/./grub-core/osdep/emunet.c \
     ../../grub/./grub-core/osdep/exec.c \
     ../../grub/./grub-core/osdep/freebsd/getroot.c \
     ../../grub/./grub-core/osdep/freebsd/hostdisk.c \
     ../../grub/./grub-core/osdep/generic/blocklist.c \
     ../../grub/./grub-core/osdep/getroot.c \
     ../../grub/./grub-core/osdep/haiku/getroot.c \
     ../../grub/./grub-core/osdep/haiku/hostdisk.c \
     ../../grub/./grub-core/osdep/hostdisk.c \
     ../../grub/./grub-core/osdep/hurd/getroot.c \
     ../../grub/./grub-core/osdep/hurd/hostdisk.c \
     ../../grub/./grub-core/osdep/init.c \
     ../../grub/./grub-core/osdep/linux/blocklist.c \
     ../../grub/./grub-core/osdep/linux/emunet.c \
     ../../grub/./grub-core/osdep/linux/getroot.c \
     ../../grub/./grub-core/osdep/linux/hostdisk.c \
     ../../grub/./grub-core/osdep/linux/ofpath.c \
     ../../grub/./grub-core/osdep/linux/platform.c \
     ../../grub/./grub-core/osdep/ofpath.c \
     ../../grub/./grub-core/osdep/password.c \
     ../../grub/./grub-core/osdep/platform.c \
     ../../grub/./grub-core/osdep/platform_unix.c \
     ../../grub/./grub-core/osdep/random.c \
     ../../grub/./grub-core/osdep/relpath.c \
     ../../grub/./grub-core/osdep/sleep.c \
     ../../grub/./grub-core/osdep/sun/getroot.c \
     ../../grub/./grub-core/osdep/sun/hostdisk.c \
     ../../grub/./grub-core/osdep/unix/compress.c \
     ../../grub/./grub-core/osdep/unix/config.c \
     ../../grub/./grub-core/osdep/unix/cputime.c \
     ../../grub/./grub-core/osdep/unix/dl.c \
     ../../grub/./grub-core/osdep/unix/emuconsole.c \
     ../../grub/./grub-core/osdep/unix/exec.c \
     ../../grub/./grub-core/osdep/unix/getroot.c \
     ../../grub/./grub-core/osdep/unix/hostdisk.c \
     ../../grub/./grub-core/osdep/unix/password.c \
     ../../grub/./grub-core/osdep/unix/platform.c \
     ../../grub/./grub-core/osdep/unix/random.c \
     ../../grub/./grub-core/osdep/unix/relpath.c \
     ../../grub/./grub-core/osdep/unix/sleep.c \
     ../../grub/./grub-core/osdep/windows/blocklist.c \
     ../../grub/./grub-core/osdep/windows/config.c \
     ../../grub/./grub-core/osdep/windows/cputime.c \
     ../../grub/./grub-core/osdep/windows/dl.c \
     ../../grub/./grub-core/osdep/windows/emuconsole.c \
     ../../grub/./grub-core/osdep/windows/getroot.c \
     ../../grub/./grub-core/osdep/windows/hostdisk.c \
     ../../grub/./grub-core/osdep/windows/init.c \
     ../../grub/./grub-core/osdep/windows/password.c \
     ../../grub/./grub-core/osdep/windows/platform.c \
     ../../grub/./grub-core/osdep/windows/random.c \
     ../../grub/./grub-core/osdep/windows/relpath.c \
     ../../grub/./grub-core/osdep/windows/sleep.c \
     ../../grub/./grub-core/partmap/acorn.c \
     ../../grub/./grub-core/partmap/amiga.c \
     ../../grub/./grub-core/partmap/apple.c \
     ../../grub/./grub-core/partmap/bsdlabel.c \
     ../../grub/./grub-core/partmap/dfly.c \
     ../../grub/./grub-core/partmap/dvh.c \
     ../../grub/./grub-core/partmap/gpt.c \
     ../../grub/./grub-core/partmap/msdos.c \
     ../../grub/./grub-core/partmap/plan.c \
     ../../grub/./grub-core/partmap/sun.c \
     ../../grub/./grub-core/partmap/sunpc.c \
     ../../grub/./grub-core/parttool/msdospart.c \
     ../../grub/./grub-core/script/argv.c \
     ../../grub/./grub-core/script/execute.c \
     ../../grub/./grub-core/script/function.c \
     ../../grub/./grub-core/script/lexer.c \
     ../../grub/./grub-core/script/main.c \
     ../../grub/./grub-core/script/script.c \
     ../../grub/./grub-core/term/arc/console.c \
     ../../grub/./grub-core/term/arc/serial.c \
     ../../grub/./grub-core/term/arm/cros.c \
     ../../grub/./grub-core/term/arm/cros_ec.c \
     ../../grub/./grub-core/term/arm/pl050.c \
     ../../grub/./grub-core/term/at_keyboard.c \
     ../../grub/./grub-core/term/efi/console.c \
     ../../grub/./grub-core/term/efi/serial.c \
     ../../grub/./grub-core/term/gfxterm.c \
     ../../grub/./grub-core/term/gfxterm_background.c \
     ../../grub/./grub-core/term/i386/coreboot/cbmemc.c \
     ../../grub/./grub-core/term/i386/pc/console.c \
     ../../grub/./grub-core/term/i386/pc/mda_text.c \
     ../../grub/./grub-core/term/i386/pc/vga_text.c \
     ../../grub/./grub-core/term/ieee1275/console.c \
     ../../grub/./grub-core/term/ieee1275/escc.c \
     ../../grub/./grub-core/term/ieee1275/serial.c \
     ../../grub/./grub-core/term/morse.c \
     ../../grub/./grub-core/term/ns8250.c \
     ../../grub/./grub-core/term/ps2.c \
     ../../grub/./grub-core/term/serial.c \
     ../../grub/./grub-core/term/spkmodem.c \
     ../../grub/./grub-core/term/terminfo.c \
     ../../grub/./grub-core/term/tparm.c \
     ../../grub/./grub-core/term/uboot/console.c \
     ../../grub/./grub-core/term/usb_keyboard.c \
     ../../grub/./grub-core/term/xen/console.c \
     ../../grub/./grub-core/tests/bswap_test.c \
     ../../grub/./grub-core/tests/checksums.h \
     ../../grub/./grub-core/tests/cmdline_cat_test.c \
     ../../grub/./grub-core/tests/cmp_test.c \
     ../../grub/./grub-core/tests/ctz_test.c \
     ../../grub/./grub-core/tests/div_test.c \
     ../../grub/./grub-core/tests/example_functional_test.c \
     ../../grub/./grub-core/tests/fake_input.c \
     ../../grub/./grub-core/tests/gfxterm_menu.c \
     ../../grub/./grub-core/tests/legacy_password_test.c \
     ../../grub/./grub-core/tests/lib/functional_test.c \
     ../../grub/./grub-core/tests/lib/test.c \
     ../../grub/./grub-core/tests/mul_test.c \
     ../../grub/./grub-core/tests/pbkdf2_test.c \
     ../../grub/./grub-core/tests/setjmp_test.c \
     ../../grub/./grub-core/tests/shift_test.c \
     ../../grub/./grub-core/tests/signature_test.c \
     ../../grub/./grub-core/tests/signatures.h \
     ../../grub/./grub-core/tests/sleep_test.c \
     ../../grub/./grub-core/tests/strtoull_test.c \
     ../../grub/./grub-core/tests/test_blockarg.c \
     ../../grub/./grub-core/tests/video_checksum.c \
     ../../grub/./grub-core/tests/videotest_checksum.c \
     ../../grub/./grub-core/tests/xnu_uuid_test.c \
     ../../grub/./grub-core/unidata.c \
     ../../grub/./grub-core/video/bitmap.c \
     ../../grub/./grub-core/video/bitmap_scale.c \
     ../../grub/./grub-core/video/bochs.c \
     ../../grub/./grub-core/video/capture.c \
     ../../grub/./grub-core/video/cirrus.c \
     ../../grub/./grub-core/video/colors.c \
     ../../grub/./grub-core/video/coreboot/cbfb.c \
     ../../grub/./grub-core/video/efi_gop.c \
     ../../grub/./grub-core/video/efi_uga.c \
     ../../grub/./grub-core/video/emu/sdl.c \
     ../../grub/./grub-core/video/fb/fbblit.c \
     ../../grub/./grub-core/video/fb/fbfill.c \
     ../../grub/./grub-core/video/fb/fbutil.c \
     ../../grub/./grub-core/video/fb/video_fb.c \
     ../../grub/./grub-core/video/i386/pc/vbe.c \
     ../../grub/./grub-core/video/i386/pc/vga.c \
     ../../grub/./grub-core/video/ieee1275.c \
     ../../grub/./grub-core/video/radeon_fuloong2e.c \
     ../../grub/./grub-core/video/radeon_yeeloong3a.c \
     ../../grub/./grub-core/video/readers/jpeg.c \
     ../../grub/./grub-core/video/readers/png.c \
     ../../grub/./grub-core/video/readers/tga.c \
     ../../grub/./grub-core/video/sis315_init.c \
     ../../grub/./grub-core/video/sis315pro.c \
     ../../grub/./grub-core/video/sm712.c \
     ../../grub/./grub-core/video/sm712_init.c \
     ../../grub/./grub-core/video/video.c \
     ../../grub/./include/grub/acorn_filecore.h \
     ../../grub/./include/grub/acpi.h \
     ../../grub/./include/grub/aout.h \
     ../../grub/./include/grub/arc/arc.h \
     ../../grub/./include/grub/arc/console.h \
     ../../grub/./include/grub/archelp.h \
     ../../grub/./include/grub/arm/coreboot/console.h \
     ../../grub/./include/grub/arm/coreboot/kernel.h \
     ../../grub/./include/grub/arm/cros_ec.h \
     ../../grub/./include/grub/arm/efi/memory.h \
     ../../grub/./include/grub/arm/linux.h \
     ../../grub/./include/grub/arm/reloc.h \
     ../../grub/./include/grub/arm/setjmp.h \
     ../../grub/./include/grub/arm/startup.h \
     ../../grub/./include/grub/arm/system.h \
     ../../grub/./include/grub/arm/time.h \
     ../../grub/./include/grub/arm/types.h \
     ../../grub/./include/grub/arm/uboot/kernel.h \
     ../../grub/./include/grub/arm64/efi/memory.h \
     ../../grub/./include/grub/arm64/linux.h \
     ../../grub/./include/grub/arm64/reloc.h \
     ../../grub/./include/grub/arm64/setjmp.h \
     ../../grub/./include/grub/arm64/time.h \
     ../../grub/./include/grub/arm64/types.h \
     ../../grub/./include/grub/at_keyboard.h \
     ../../grub/./include/grub/ata.h \
     ../../grub/./include/grub/auth.h \
     ../../grub/./include/grub/autoefi.h \
     ../../grub/./include/grub/backtrace.h \
     ../../grub/./include/grub/bitmap.h \
     ../../grub/./include/grub/bitmap_scale.h \
     ../../grub/./include/grub/boottime.h \
     ../../grub/./include/grub/bsdlabel.h \
     ../../grub/./include/grub/btrfs.h \
     ../../grub/./include/grub/buffer.h \
     ../../grub/./include/grub/bufio.h \
     ../../grub/./include/grub/cache.h \
     ../../grub/./include/grub/cbfs_core.h \
     ../../grub/./include/grub/charset.h \
     ../../grub/./include/grub/cmos.h \
     ../../grub/./include/grub/color.h \
     ../../grub/./include/grub/command.h \
     ../../grub/./include/grub/compiler-rt-emu.h \
     ../../grub/./include/grub/compiler-rt.h \
     ../../grub/./include/grub/compiler.h \
     ../../grub/./include/grub/coreboot/lbio.h \
     ../../grub/./include/grub/crypto.h \
     ../../grub/./include/grub/cryptodisk.h \
     ../../grub/./include/grub/cs5536.h \
     ../../grub/./include/grub/datetime.h \
     ../../grub/./include/grub/decompressor.h \
     ../../grub/./include/grub/deflate.h \
     ../../grub/./include/grub/device.h \
     ../../grub/./include/grub/disk.h \
     ../../grub/./include/grub/diskfilter.h \
     ../../grub/./include/grub/dl.h \
     ../../grub/./include/grub/dma.h \
     ../../grub/./include/grub/efi/api.h \
     ../../grub/./include/grub/efi/cc.h \
     ../../grub/./include/grub/efi/console.h \
     ../../grub/./include/grub/efi/console_control.h \
     ../../grub/./include/grub/efi/disk.h \
     ../../grub/./include/grub/efi/edid.h \
     ../../grub/./include/grub/efi/efi.h \
     ../../grub/./include/grub/efi/fdtload.h \
     ../../grub/./include/grub/efi/graphics_output.h \
     ../../grub/./include/grub/efi/memory.h \
     ../../grub/./include/grub/efi/pci.h \
     ../../grub/./include/grub/efi/pe32.h \
     ../../grub/./include/grub/efi/sb.h \
     ../../grub/./include/grub/efi/tpm.h \
     ../../grub/./include/grub/efi/uga_draw.h \
     ../../grub/./include/grub/efiemu/efiemu.h \
     ../../grub/./include/grub/efiemu/runtime.h \
     ../../grub/./include/grub/elf.h \
     ../../grub/./include/grub/elfload.h \
     ../../grub/./include/grub/emu/config.h \
     ../../grub/./include/grub/emu/console.h \
     ../../grub/./include/grub/emu/exec.h \
     ../../grub/./include/grub/emu/getroot.h \
     ../../grub/./include/grub/emu/hostdisk.h \
     ../../grub/./include/grub/emu/hostfile.h \
     ../../grub/./include/grub/emu/misc.h \
     ../../grub/./include/grub/emu/net.h \
     ../../grub/./include/grub/env.h \
     ../../grub/./include/grub/env_private.h \
     ../../grub/./include/grub/err.h \
     ../../grub/./include/grub/exfat.h \
     ../../grub/./include/grub/extcmd.h \
     ../../grub/./include/grub/fat.h \
     ../../grub/./include/grub/fbblit.h \
     ../../grub/./include/grub/fbfill.h \
     ../../grub/./include/grub/fbutil.h \
     ../../grub/./include/grub/fdt.h \
     ../../grub/./include/grub/fdtbus.h \
     ../../grub/./include/grub/file.h \
     ../../grub/./include/grub/fileid.h \
     ../../grub/./include/grub/font.h \
     ../../grub/./include/grub/fontformat.h \
     ../../grub/./include/grub/fs.h \
     ../../grub/./include/grub/fshelp.h \
     ../../grub/./include/grub/gcry/types.h \
     ../../grub/./include/grub/gcrypt/g10lib.h \
     ../../grub/./include/grub/gcrypt/gcrypt.h \
     ../../grub/./include/grub/gcrypt/gpg-error.h \
     ../../grub/./include/grub/gdb.h \
     ../../grub/./include/grub/gfxmenu_model.h \
     ../../grub/./include/grub/gfxmenu_view.h \
     ../../grub/./include/grub/gfxterm.h \
     ../../grub/./include/grub/gfxwidgets.h \
     ../../grub/./include/grub/gpt_partition.h \
     ../../grub/./include/grub/gui.h \
     ../../grub/./include/grub/gui_string_util.h \
     ../../grub/./include/grub/hfs.h \
     ../../grub/./include/grub/hfsplus.h \
     ../../grub/./include/grub/i18n.h \
     ../../grub/./include/grub/i386/at_keyboard.h \
     ../../grub/./include/grub/i386/bsd.h \
     ../../grub/./include/grub/i386/cmos.h \
     ../../grub/./include/grub/i386/coreboot/boot.h \
     ../../grub/./include/grub/i386/coreboot/console.h \
     ../../grub/./include/grub/i386/coreboot/kernel.h \
     ../../grub/./include/grub/i386/coreboot/memory.h \
     ../../grub/./include/grub/i386/coreboot/serial.h \
     ../../grub/./include/grub/i386/coreboot/time.h \
     ../../grub/./include/grub/i386/cpuid.h \
     ../../grub/./include/grub/i386/efi/kernel.h \
     ../../grub/./include/grub/i386/efi/memory.h \
     ../../grub/./include/grub/i386/efi/serial.h \
     ../../grub/./include/grub/i386/efiemu.h \
     ../../grub/./include/grub/i386/floppy.h \
     ../../grub/./include/grub/i386/freebsd_linker.h \
     ../../grub/./include/grub/i386/freebsd_reboot.h \
     ../../grub/./include/grub/i386/gdb.h \
     ../../grub/./include/grub/i386/ieee1275/ieee1275.h \
     ../../grub/./include/grub/i386/ieee1275/kernel.h \
     ../../grub/./include/grub/i386/ieee1275/memory.h \
     ../../grub/./include/grub/i386/ieee1275/serial.h \
     ../../grub/./include/grub/i386/io.h \
     ../../grub/./include/grub/i386/linux.h \
     ../../grub/./include/grub/i386/macho.h \
     ../../grub/./include/grub/i386/memory.h \
     ../../grub/./include/grub/i386/memory_raw.h \
     ../../grub/./include/grub/i386/multiboot.h \
     ../../grub/./include/grub/i386/multiboot/boot.h \
     ../../grub/./include/grub/i386/multiboot/console.h \
     ../../grub/./include/grub/i386/multiboot/kernel.h \
     ../../grub/./include/grub/i386/multiboot/memory.h \
     ../../grub/./include/grub/i386/multiboot/serial.h \
     ../../grub/./include/grub/i386/multiboot/time.h \
     ../../grub/./include/grub/i386/netbsd_bootinfo.h \
     ../../grub/./include/grub/i386/netbsd_reboot.h \
     ../../grub/./include/grub/i386/openbsd_bootarg.h \
     ../../grub/./include/grub/i386/openbsd_reboot.h \
     ../../grub/./include/grub/i386/pc/apm.h \
     ../../grub/./include/grub/i386/pc/biosdisk.h \
     ../../grub/./include/grub/i386/pc/biosnum.h \
     ../../grub/./include/grub/i386/pc/boot.h \
     ../../grub/./include/grub/i386/pc/chainloader.h \
     ../../grub/./include/grub/i386/pc/console.h \
     ../../grub/./include/grub/i386/pc/int.h \
     ../../grub/./include/grub/i386/pc/int_types.h \
     ../../grub/./include/grub/i386/pc/kernel.h \
     ../../grub/./include/grub/i386/pc/memory.h \
     ../../grub/./include/grub/i386/pc/pxe.h \
     ../../grub/./include/grub/i386/pc/time.h \
     ../../grub/./include/grub/i386/pc/vbe.h \
     ../../grub/./include/grub/i386/pc/vesa_modes_table.h \
     ../../grub/./include/grub/i386/pci.h \
     ../../grub/./include/grub/i386/pit.h \
     ../../grub/./include/grub/i386/pmtimer.h \
     ../../grub/./include/grub/i386/qemu/boot.h \
     ../../grub/./include/grub/i386/qemu/console.h \
     ../../grub/./include/grub/i386/qemu/kernel.h \
     ../../grub/./include/grub/i386/qemu/memory.h \
     ../../grub/./include/grub/i386/qemu/serial.h \
     ../../grub/./include/grub/i386/qemu/time.h \
     ../../grub/./include/grub/i386/rdmsr.h \
     ../../grub/./include/grub/i386/reboot.h \
     ../../grub/./include/grub/i386/relocator.h \
     ../../grub/./include/grub/i386/relocator_private.h \
     ../../grub/./include/grub/i386/setjmp.h \
     ../../grub/./include/grub/i386/time.h \
     ../../grub/./include/grub/i386/tsc.h \
     ../../grub/./include/grub/i386/types.h \
     ../../grub/./include/grub/i386/wrmsr.h \
     ../../grub/./include/grub/i386/xen/hypercall.h \
     ../../grub/./include/grub/i386/xen/kernel.h \
     ../../grub/./include/grub/i386/xen/memory.h \
     ../../grub/./include/grub/i386/xen_pvh/boot.h \
     ../../grub/./include/grub/i386/xen_pvh/console.h \
     ../../grub/./include/grub/i386/xen_pvh/int.h \
     ../../grub/./include/grub/i386/xen_pvh/kernel.h \
     ../../grub/./include/grub/i386/xen_pvh/memory.h \
     ../../grub/./include/grub/i386/xen_pvh/time.h \
     ../../grub/./include/grub/i386/xnu.h \
     ../../grub/./include/grub/ia64/efi/memory.h \
     ../../grub/./include/grub/ia64/efi/time.h \
     ../../grub/./include/grub/ia64/kernel.h \
     ../../grub/./include/grub/ia64/reloc.h \
     ../../grub/./include/grub/ia64/setjmp.h \
     ../../grub/./include/grub/ia64/time.h \
     ../../grub/./include/grub/ia64/types.h \
     ../../grub/./include/grub/icon_manager.h \
     ../../grub/./include/grub/ieee1275/console.h \
     ../../grub/./include/grub/ieee1275/ieee1275.h \
     ../../grub/./include/grub/ieee1275/obdisk.h \
     ../../grub/./include/grub/ieee1275/ofdisk.h \
     ../../grub/./include/grub/kernel.h \
     ../../grub/./include/grub/keyboard_layouts.h \
     ../../grub/./include/grub/legacy_parse.h \
     ../../grub/./include/grub/lib/LzFind.h \
     ../../grub/./include/grub/lib/LzHash.h \
     ../../grub/./include/grub/lib/LzmaDec.h \
     ../../grub/./include/grub/lib/LzmaEnc.h \
     ../../grub/./include/grub/lib/LzmaTypes.h \
     ../../grub/./include/grub/lib/arg.h \
     ../../grub/./include/grub/lib/cmdline.h \
     ../../grub/./include/grub/lib/crc.h \
     ../../grub/./include/grub/lib/envblk.h \
     ../../grub/./include/grub/lib/hexdump.h \
     ../../grub/./include/grub/libpciaccess.h \
     ../../grub/./include/grub/linux.h \
     ../../grub/./include/grub/list.h \
     ../../grub/./include/grub/loader.h \
     ../../grub/./include/grub/lockdown.h \
     ../../grub/./include/grub/lvm.h \
     ../../grub/./include/grub/macho.h \
     ../../grub/./include/grub/machoload.h \
     ../../grub/./include/grub/memory.h \
     ../../grub/./include/grub/menu.h \
     ../../grub/./include/grub/menu_viewer.h \
     ../../grub/./include/grub/mips/arc/kernel.h \
     ../../grub/./include/grub/mips/arc/memory.h \
     ../../grub/./include/grub/mips/arc/time.h \
     ../../grub/./include/grub/mips/asm.h \
     ../../grub/./include/grub/mips/at_keyboard.h \
     ../../grub/./include/grub/mips/cmos.h \
     ../../grub/./include/grub/mips/io.h \
     ../../grub/./include/grub/mips/kernel.h \
     ../../grub/./include/grub/mips/loongson.h \
     ../../grub/./include/grub/mips/loongson/at_keyboard.h \
     ../../grub/./include/grub/mips/loongson/cmos.h \
     ../../grub/./include/grub/mips/loongson/ec.h \
     ../../grub/./include/grub/mips/loongson/kernel.h \
     ../../grub/./include/grub/mips/loongson/memory.h \
     ../../grub/./include/grub/mips/loongson/pci.h \
     ../../grub/./include/grub/mips/loongson/serial.h \
     ../../grub/./include/grub/mips/loongson/time.h \
     ../../grub/./include/grub/mips/memory.h \
     ../../grub/./include/grub/mips/mips.h \
     ../../grub/./include/grub/mips/multiboot.h \
     ../../grub/./include/grub/mips/pci.h \
     ../../grub/./include/grub/mips/qemu_mips/at_keyboard.h \
     ../../grub/./include/grub/mips/qemu_mips/cmos.h \
     ../../grub/./include/grub/mips/qemu_mips/console.h \
     ../../grub/./include/grub/mips/qemu_mips/kernel.h \
     ../../grub/./include/grub/mips/qemu_mips/loader.h \
     ../../grub/./include/grub/mips/qemu_mips/memory.h \
     ../../grub/./include/grub/mips/qemu_mips/serial.h \
     ../../grub/./include/grub/mips/qemu_mips/time.h \
     ../../grub/./include/grub/mips/relocator.h \
     ../../grub/./include/grub/mips/setjmp.h \
     ../../grub/./include/grub/mips/time.h \
     ../../grub/./include/grub/mips/types.h \
     ../../grub/./include/grub/misc.h \
     ../../grub/./include/grub/mm.h \
     ../../grub/./include/grub/mm_private.h \
     ../../grub/./include/grub/module_verifier.h \
     ../../grub/./include/grub/msdos_partition.h \
     ../../grub/./include/grub/multiboot.h \
     ../../grub/./include/grub/multiboot2.h \
     ../../grub/./include/grub/multiboot_loader.h \
     ../../grub/./include/grub/net.h \
     ../../grub/./include/grub/net/arp.h \
     ../../grub/./include/grub/net/ethernet.h \
     ../../grub/./include/grub/net/ip.h \
     ../../grub/./include/grub/net/netbuff.h \
     ../../grub/./include/grub/net/tcp.h \
     ../../grub/./include/grub/net/udp.h \
     ../../grub/./include/grub/normal.h \
     ../../grub/./include/grub/ns8250.h \
     ../../grub/./include/grub/ntfs.h \
     ../../grub/./include/grub/offsets.h \
     ../../grub/./include/grub/osdep/hostfile.h \
     ../../grub/./include/grub/osdep/hostfile_aros.h \
     ../../grub/./include/grub/osdep/hostfile_unix.h \
     ../../grub/./include/grub/osdep/hostfile_windows.h \
     ../../grub/./include/grub/osdep/major.h \
     ../../grub/./include/grub/parser.h \
     ../../grub/./include/grub/partition.h \
     ../../grub/./include/grub/parttool.h \
     ../../grub/./include/grub/pci.h \
     ../../grub/./include/grub/pciutils.h \
     ../../grub/./include/grub/powerpc/ieee1275/ieee1275.h \
     ../../grub/./include/grub/powerpc/kernel.h \
     ../../grub/./include/grub/powerpc/memory.h \
     ../../grub/./include/grub/powerpc/relocator.h \
     ../../grub/./include/grub/powerpc/setjmp.h \
     ../../grub/./include/grub/powerpc/time.h \
     ../../grub/./include/grub/powerpc/types.h \
     ../../grub/./include/grub/priority_queue.h \
     ../../grub/./include/grub/procfs.h \
     ../../grub/./include/grub/ps2.h \
     ../../grub/./include/grub/pubkey.h \
     ../../grub/./include/grub/random.h \
     ../../grub/./include/grub/reader.h \
     ../../grub/./include/grub/reed_solomon.h \
     ../../grub/./include/grub/relocator.h \
     ../../grub/./include/grub/relocator_private.h \
     ../../grub/./include/grub/riscv32/efi/memory.h \
     ../../grub/./include/grub/riscv32/linux.h \
     ../../grub/./include/grub/riscv32/setjmp.h \
     ../../grub/./include/grub/riscv32/time.h \
     ../../grub/./include/grub/riscv32/types.h \
     ../../grub/./include/grub/riscv64/efi/memory.h \
     ../../grub/./include/grub/riscv64/linux.h \
     ../../grub/./include/grub/riscv64/setjmp.h \
     ../../grub/./include/grub/riscv64/time.h \
     ../../grub/./include/grub/riscv64/types.h \
     ../../grub/./include/grub/safemath.h \
     ../../grub/./include/grub/script_sh.h \
     ../../grub/./include/grub/scsi.h \
     ../../grub/./include/grub/scsicmd.h \
     ../../grub/./include/grub/sdl.h \
     ../../grub/./include/grub/search.h \
     ../../grub/./include/grub/serial.h \
     ../../grub/./include/grub/setjmp.h \
     ../../grub/./include/grub/smbios.h \
     ../../grub/./include/grub/smbus.h \
     ../../grub/./include/grub/sparc64/ieee1275/boot.h \
     ../../grub/./include/grub/sparc64/ieee1275/ieee1275.h \
     ../../grub/./include/grub/sparc64/ieee1275/kernel.h \
     ../../grub/./include/grub/sparc64/setjmp.h \
     ../../grub/./include/grub/sparc64/time.h \
     ../../grub/./include/grub/sparc64/types.h \
     ../../grub/./include/grub/speaker.h \
     ../../grub/./include/grub/stack_protector.h \
     ../../grub/./include/grub/symbol.h \
     ../../grub/./include/grub/syslinux_parse.h \
     ../../grub/./include/grub/term.h \
     ../../grub/./include/grub/terminfo.h \
     ../../grub/./include/grub/test.h \
     ../../grub/./include/grub/time.h \
     ../../grub/./include/grub/tparm.h \
     ../../grub/./include/grub/tpm.h \
     ../../grub/./include/grub/trig.h \
     ../../grub/./include/grub/types.h \
     ../../grub/./include/grub/uboot/api_public.h \
     ../../grub/./include/grub/uboot/console.h \
     ../../grub/./include/grub/uboot/disk.h \
     ../../grub/./include/grub/uboot/image.h \
     ../../grub/./include/grub/uboot/uboot.h \
     ../../grub/./include/grub/udf.h \
     ../../grub/./include/grub/unicode.h \
     ../../grub/./include/grub/usb.h \
     ../../grub/./include/grub/usbdesc.h \
     ../../grub/./include/grub/usbserial.h \
     ../../grub/./include/grub/usbtrans.h \
     ../../grub/./include/grub/util/install.h \
     ../../grub/./include/grub/util/libnvpair.h \
     ../../grub/./include/grub/util/libzfs.h \
     ../../grub/./include/grub/util/misc.h \
     ../../grub/./include/grub/util/mkimage.h \
     ../../grub/./include/grub/util/ofpath.h \
     ../../grub/./include/grub/util/resolve.h \
     ../../grub/./include/grub/util/windows.h \
     ../../grub/./include/grub/verify.h \
     ../../grub/./include/grub/vga.h \
     ../../grub/./include/grub/vgaregs.h \
     ../../grub/./include/grub/video.h \
     ../../grub/./include/grub/video_fb.h \
     ../../grub/./include/grub/x86_64/at_keyboard.h \
     ../../grub/./include/grub/x86_64/efi/boot.h \
     ../../grub/./include/grub/x86_64/efi/kernel.h \
     ../../grub/./include/grub/x86_64/efi/loader.h \
     ../../grub/./include/grub/x86_64/efi/memory.h \
     ../../grub/./include/grub/x86_64/efi/serial.h \
     ../../grub/./include/grub/x86_64/io.h \
     ../../grub/./include/grub/x86_64/linux.h \
     ../../grub/./include/grub/x86_64/macho.h \
     ../../grub/./include/grub/x86_64/memory.h \
     ../../grub/./include/grub/x86_64/multiboot.h \
     ../../grub/./include/grub/x86_64/pci.h \
     ../../grub/./include/grub/x86_64/relocator.h \
     ../../grub/./include/grub/x86_64/setjmp.h \
     ../../grub/./include/grub/x86_64/time.h \
     ../../grub/./include/grub/x86_64/types.h \
     ../../grub/./include/grub/x86_64/xen/hypercall.h \
     ../../grub/./include/grub/x86_64/xnu.h \
     ../../grub/./include/grub/xen.h \
     ../../grub/./include/grub/xen/relocator.h \
     ../../grub/./include/grub/xen_file.h \
     ../../grub/./include/grub/xnu.h \
     ../../grub/./include/grub/zfs/dmu.h \
     ../../grub/./include/grub/zfs/dmu_objset.h \
     ../../grub/./include/grub/zfs/dnode.h \
     ../../grub/./include/grub/zfs/dsl_dataset.h \
     ../../grub/./include/grub/zfs/dsl_dir.h \
     ../../grub/./include/grub/zfs/sa_impl.h \
     ../../grub/./include/grub/zfs/spa.h \
     ../../grub/./include/grub/zfs/uberblock_impl.h \
     ../../grub/./include/grub/zfs/vdev_impl.h \
     ../../grub/./include/grub/zfs/zap_impl.h \
     ../../grub/./include/grub/zfs/zap_leaf.h \
     ../../grub/./include/grub/zfs/zfs.h \
     ../../grub/./include/grub/zfs/zfs_acl.h \
     ../../grub/./include/grub/zfs/zfs_znode.h \
     ../../grub/./include/grub/zfs/zil.h \
     ../../grub/./include/grub/zfs/zio.h \
     ../../grub/./include/grub/zfs/zio_checksum.h \
     ../../grub/./include/multiboot.h \
     ../../grub/./include/multiboot2.h \
     ../../grub/./include/xen/arch-x86/xen-x86_32.h \
     ../../grub/./include/xen/arch-x86/xen-x86_64.h \
     ../../grub/./include/xen/arch-x86/xen.h \
     ../../grub/./include/xen/elfnote.h \
     ../../grub/./include/xen/event_channel.h \
     ../../grub/./include/xen/grant_table.h \
     ../../grub/./include/xen/hvm/hvm_op.h \
     ../../grub/./include/xen/hvm/params.h \
     ../../grub/./include/xen/hvm/start_info.h \
     ../../grub/./include/xen/io/blkif.h \
     ../../grub/./include/xen/io/console.h \
     ../../grub/./include/xen/io/protocols.h \
     ../../grub/./include/xen/io/ring.h \
     ../../grub/./include/xen/io/xenbus.h \
     ../../grub/./include/xen/io/xs_wire.h \
     ../../grub/./include/xen/memory.h \
     ../../grub/./include/xen/physdev.h \
     ../../grub/./include/xen/sched.h \
     ../../grub/./include/xen/trace.h \
     ../../grub/./include/xen/xen-compat.h \
     ../../grub/./include/xen/xen.h \
     ../../grub/./tests/cmp_unit_test.c \
     ../../grub/./tests/date_unit_test.c \
     ../../grub/./tests/example_unit_test.c \
     ../../grub/./tests/lib/unit_test.c \
     ../../grub/./tests/printf_unit_test.c \
     ../../grub/./util/bin2h.c \
     ../../grub/./util/config.c \
     ../../grub/./util/editenv.c \
     ../../grub/./util/garbage-gen.c \
     ../../grub/./util/getroot.c \
     ../../grub/./util/glue-efi.c \
     ../../grub/./util/grub-editenv.c \
     ../../grub/./util/grub-file.c \
     ../../grub/./util/grub-fstest.c \
     ../../grub/./util/grub-glue-efi.c \
     ../../grub/./util/grub-install-common.c \
     ../../grub/./util/grub-install.c \
     ../../grub/./util/grub-macbless.c \
     ../../grub/./util/grub-macho2img.c \
     ../../grub/./util/grub-menulst2cfg.c \
     ../../grub/./util/grub-mkfont.c \
     ../../grub/./util/grub-mkimage.c \
     ../../grub/./util/grub-mkimage32.c \
     ../../grub/./util/grub-mkimage64.c \
     ../../grub/./util/grub-mkimagexx.c \
     ../../grub/./util/grub-mklayout.c \
     ../../grub/./util/grub-mknetdir.c \
     ../../grub/./util/grub-mkpasswd-pbkdf2.c \
     ../../grub/./util/grub-mkrelpath.c \
     ../../grub/./util/grub-mkrescue.c \
     ../../grub/./util/grub-mkstandalone.c \
     ../../grub/./util/grub-module-verifier.c \
     ../../grub/./util/grub-module-verifier32.c \
     ../../grub/./util/grub-module-verifier64.c \
     ../../grub/./util/grub-module-verifierXX.c \
     ../../grub/./util/grub-mount.c \
     ../../grub/./util/grub-pe2elf.c \
     ../../grub/./util/grub-probe.c \
     ../../grub/./util/grub-render-label.c \
     ../../grub/./util/grub-script-check.c \
     ../../grub/./util/grub-setup.c \
     ../../grub/./util/grub-syslinux2cfg.c \
     ../../grub/./util/ieee1275/grub-ofpathname.c \
     ../../grub/./util/misc.c \
     ../../grub/./util/mkimage.c \
     ../../grub/./util/probe.c \
     ../../grub/./util/render-label.c \
     ../../grub/./util/resolve.c \
     ../../grub/./util/setup.c \
     ../../grub/./util/setup_bios.c \
     ../../grub/./util/setup_sparc.c \
     ../../grub/./util/spkmodem-recv.c

CATALOGS = 

# Makevars gets inserted here. (Don't remove this line!)
# Makefile variables for PO directory in any package using GNU gettext.

# Usually the message domain is the same as the package name.
DOMAIN = $(PACKAGE)

# These two variables depend on the location of this directory.
subdir = po
top_builddir = ..

# These options get passed to xgettext.
XGETTEXT_OPTIONS = --keyword=_ --keyword=N_ \
          \
 --flag=_:1:pass-c-format\
 --flag=N_:1:pass-c-format\
 --flag=error:3:c-format --flag=error_at_line:5:c-format\
\
 --from-code=UTF-8\
 $${end_of_xgettext_options+}

# This is the copyright holder that gets inserted into the header of the
# $(DOMAIN).pot file.  Set this to the copyright holder of the surrounding
# package.  (Note that the msgstr strings, extracted from the package's
# sources, belong to the copyright holder of the package.)  Translators are
# expected to transfer the copyright for their translations to this person
# or entity, or to disclaim their copyright.  The empty string stands for
# the public domain; in this case the translators are expected to disclaim
# their copyright.
COPYRIGHT_HOLDER = Free Software Foundation, Inc.

# This is the email address or URL to which the translators shall report
# bugs in the untranslated strings:
# - Strings which are not entire sentences, see the maintainer guidelines
#   in the GNU gettext documentation, section 'Preparing Strings'.
# - Strings which use unclear terms or require additional context to be
#   understood.
# - Strings which make invalid assumptions about notation of date, time or
#   money.
# - Pluralisation problems.
# - Incorrect English spelling.
# - Incorrect formatting.
# It can be your email address, or a mailing list address where translators
# can write to without being subscribed, or the URL of a web page through
# which the translators can contact you.
MSGID_BUGS_ADDRESS = bug-grub@gnu.org

# This is the list of locale categories, beyond LC_MESSAGES, for which the
# message catalogs shall be used.  It is usually empty.
EXTRA_LOCALE_CATEGORIES = 

# This tells whether the $(DOMAIN).pot file contains messages with an 'msgctxt'
# context.  Possible values are "yes" and "no".  Set this to yes if the
# package uses functions taking also a message context, like pgettext(), or
# if in $(XGETTEXT_OPTIONS) you define keywords with a context argument.
USE_MSGCTXT = no

# These options get passed to msgmerge.
# Useful options are in particular:
#   --previous            to keep previous msgids of translated messages,
#   --quiet               to reduce the verbosity.
MSGMERGE_OPTIONS =

.SUFFIXES:
.SUFFIXES: .po .gmo .mo .sed .sin .nop .po-create .po-update

.po.mo:
	@echo "$(MSGFMT) -c -o $@ $<"; \
	$(MSGFMT) -c -o t-$@ $< && mv t-$@ $@

.po.gmo:
	@lang=`echo $* | sed -e 's,.*/,,'`; \
	test "$(srcdir)" = . && cdcmd="" || cdcmd="cd $(srcdir) && "; \
	echo "$${cdcmd}rm -f $${lang}.gmo && $(GMSGFMT) -c --statistics --verbose -o $${lang}.gmo $${lang}.po"; \
	cd $(srcdir) && rm -f $${lang}.gmo && $(GMSGFMT) -c --statistics --verbose -o t-$${lang}.gmo $${lang}.po && mv t-$${lang}.gmo $${lang}.gmo

.sin.sed:
	sed -e '/^#/d' $< > t-$@
	mv t-$@ $@


all: all-no

all-yes: stamp-po
all-no:

# Ensure that the gettext macros and this Makefile.in.in are in sync.
CHECK_MACRO_VERSION = \
	test "$(GETTEXT_MACRO_VERSION)" = "0.18" \
	  || { echo "*** error: gettext infrastructure mismatch: using a Makefile.in.in from gettext version $(GETTEXT_MACRO_VERSION) but the autoconf macros are from gettext version 0.18" 1>&2; \
	       exit 1; \
	     }

# $(srcdir)/$(DOMAIN).pot is only created when needed. When xgettext finds no
# internationalized messages, no $(srcdir)/$(DOMAIN).pot is created (because
# we don't want to bother translators with empty POT files). We assume that
# LINGUAS is empty in this case, i.e. $(POFILES) and $(GMOFILES) are empty.
# In this case, stamp-po is a nop (i.e. a phony target).

# stamp-po is a timestamp denoting the last time at which the CATALOGS have
# been loosely updated. Its purpose is that when a developer or translator
# checks out the package via CVS, and the $(DOMAIN).pot file is not in CVS,
# "make" will update the $(DOMAIN).pot and the $(CATALOGS), but subsequent
# invocations of "make" will do nothing. This timestamp would not be necessary
# if updating the $(CATALOGS) would always touch them; however, the rule for
# $(POFILES) has been designed to not touch files that don't need to be
# changed.
stamp-po: $(srcdir)/$(DOMAIN).pot
	@$(CHECK_MACRO_VERSION)
	test ! -f $(srcdir)/$(DOMAIN).pot || \
	  test -z "$(GMOFILES)" || $(MAKE) $(GMOFILES)
	@test ! -f $(srcdir)/$(DOMAIN).pot || { \
	  echo "touch stamp-po" && \
	  echo timestamp > stamp-poT && \
	  mv stamp-poT stamp-po; \
	}

# Note: Target 'all' must not depend on target '$(DOMAIN).pot-update',
# otherwise packages like GCC can not be built if only parts of the source
# have been downloaded.

# This target rebuilds $(DOMAIN).pot; it is an expensive operation.
# Note that $(DOMAIN).pot is not touched if it doesn't need to be changed.
# The determination of whether the package xyz is a GNU one is based on the
# heuristic whether some file in the top level directory mentions "GNU xyz".
# If GNU 'find' is available, we avoid grepping through monster files.
$(DOMAIN).pot-update: $(POTFILES) $(srcdir)/POTFILES.in remove-potcdate.sed
	if { if (LC_ALL=C find --version) 2>/dev/null | grep GNU >/dev/null; then \
	       LC_ALL=C find -L $(top_srcdir) -maxdepth 1 -type f -size -10000000c -exec grep 'GNU grub' /dev/null '{}' ';' 2>/dev/null; \
	     else \
	       LC_ALL=C grep 'GNU grub' $(top_srcdir)/* 2>/dev/null; \
	     fi; \
	   } | grep -v 'libtool:' >/dev/null; then \
	  package_gnu='GNU '; \
	else \
	  package_gnu=''; \
	fi; \
	if test -n '$(MSGID_BUGS_ADDRESS)' || test '$(PACKAGE_BUGREPORT)' = '@'PACKAGE_BUGREPORT'@'; then \
	  msgid_bugs_address='$(MSGID_BUGS_ADDRESS)'; \
	else \
	  msgid_bugs_address='$(PACKAGE_BUGREPORT)'; \
	fi; \
	case `$(XGETTEXT) --version | sed 1q | sed -e 's,^[^0-9]*,,'` in \
	  '' | 0.[0-9] | 0.[0-9].* | 0.1[0-5] | 0.1[0-5].* | 0.16 | 0.16.[0-1]*) \
	    $(XGETTEXT) --default-domain=$(DOMAIN) --directory=$(top_srcdir) \
	      --add-comments=TRANSLATORS: $(XGETTEXT_OPTIONS)  --flag=argp_error:2:c-format --flag=argp_failure:4:c-format --flag=error:3:c-format --flag=error_at_line:5:c-format \
	      --files-from=$(srcdir)/POTFILES.in \
	      --copyright-holder='$(COPYRIGHT_HOLDER)' \
	      --msgid-bugs-address="$$msgid_bugs_address" \
	    ;; \
	  *) \
	    $(XGETTEXT) --default-domain=$(DOMAIN) --directory=$(top_srcdir) \
	      --add-comments=TRANSLATORS: $(XGETTEXT_OPTIONS)  --flag=argp_error:2:c-format --flag=argp_failure:4:c-format --flag=error:3:c-format --flag=error_at_line:5:c-format \
	      --files-from=$(srcdir)/POTFILES.in \
	      --copyright-holder='$(COPYRIGHT_HOLDER)' \
	      --package-name="$${package_gnu}grub" \
	      --package-version='2.11' \
	      --msgid-bugs-address="$$msgid_bugs_address" \
	    ;; \
	esac
	test ! -f $(DOMAIN).po || { \
	  if test -f $(srcdir)/$(DOMAIN).pot; then \
	    sed -f remove-potcdate.sed < $(srcdir)/$(DOMAIN).pot > $(DOMAIN).1po && \
	    sed -f remove-potcdate.sed < $(DOMAIN).po > $(DOMAIN).2po && \
	    if cmp $(DOMAIN).1po $(DOMAIN).2po >/dev/null 2>&1; then \
	      rm -f $(DOMAIN).1po $(DOMAIN).2po $(DOMAIN).po; \
	    else \
	      rm -f $(DOMAIN).1po $(DOMAIN).2po $(srcdir)/$(DOMAIN).pot && \
	      mv $(DOMAIN).po $(srcdir)/$(DOMAIN).pot; \
	    fi; \
	  else \
	    mv $(DOMAIN).po $(srcdir)/$(DOMAIN).pot; \
	  fi; \
	}

# This rule has no dependencies: we don't need to update $(DOMAIN).pot at
# every "make" invocation, only create it when it is missing.
# Only "make $(DOMAIN).pot-update" or "make dist" will force an update.
$(srcdir)/$(DOMAIN).pot:
	$(MAKE) $(DOMAIN).pot-update

# This target rebuilds a PO file if $(DOMAIN).pot has changed.
# Note that a PO file is not touched if it doesn't need to be changed.
$(POFILES): $(srcdir)/$(DOMAIN).pot
	@lang=`echo $@ | sed -e 's,.*/,,' -e 's/\.po$$//'`; \
	if test -f "$(srcdir)/$${lang}.po"; then \
	  test "$(srcdir)" = . && cdcmd="" || cdcmd="cd $(srcdir) && "; \
	  echo "$${cdcmd}$(MSGMERGE_UPDATE) $(MSGMERGE_OPTIONS) --lang=$${lang} $${lang}.po $(DOMAIN).pot"; \
	  cd $(srcdir) \
	    && { case `$(MSGMERGE_UPDATE) --version | sed 1q | sed -e 's,^[^0-9]*,,'` in \
	           '' | 0.[0-9] | 0.[0-9].* | 0.1[0-7] | 0.1[0-7].*) \
	             $(MSGMERGE_UPDATE) $(MSGMERGE_OPTIONS) $${lang}.po $(DOMAIN).pot;; \
	           *) \
	             $(MSGMERGE_UPDATE) $(MSGMERGE_OPTIONS) --lang=$${lang} $${lang}.po $(DOMAIN).pot;; \
	         esac; \
	       }; \
	else \
	  $(MAKE) $${lang}.po-create; \
	fi


install: install-exec install-data
install-exec:
install-data: install-data-no
	if test "$(PACKAGE)" = "gettext-tools"; then \
	  $(mkdir_p) $(DESTDIR)$(gettextsrcdir); \
	  for file in $(DISTFILES.common) Makevars.template; do \
	    $(INSTALL_DATA) $(srcdir)/$$file \
			    $(DESTDIR)$(gettextsrcdir)/$$file; \
	  done; \
	  for file in Makevars; do \
	    rm -f $(DESTDIR)$(gettextsrcdir)/$$file; \
	  done; \
	else \
	  : ; \
	fi
install-data-no: all
install-data-yes: all
	@catalogs='$(CATALOGS)'; \
	for cat in $$catalogs; do \
	  cat=`basename $$cat`; \
	  lang=`echo $$cat | sed -e 's/\.gmo$$//'`; \
	  dir=$(localedir)/$$lang/LC_MESSAGES; \
	  $(mkdir_p) $(DESTDIR)$$dir; \
	  if test -r $$cat; then realcat=$$cat; else realcat=$(srcdir)/$$cat; fi; \
	  $(INSTALL_DATA) $$realcat $(DESTDIR)$$dir/$(DOMAIN).mo; \
	  echo "installing $$realcat as $(DESTDIR)$$dir/$(DOMAIN).mo"; \
	  for lc in '' $(EXTRA_LOCALE_CATEGORIES); do \
	    if test -n "$$lc"; then \
	      if (cd $(DESTDIR)$(localedir)/$$lang && LC_ALL=C ls -l -d $$lc 2>/dev/null) | grep ' -> ' >/dev/null; then \
	        link=`cd $(DESTDIR)$(localedir)/$$lang && LC_ALL=C ls -l -d $$lc | sed -e 's/^.* -> //'`; \
	        mv $(DESTDIR)$(localedir)/$$lang/$$lc $(DESTDIR)$(localedir)/$$lang/$$lc.old; \
	        mkdir $(DESTDIR)$(localedir)/$$lang/$$lc; \
	        (cd $(DESTDIR)$(localedir)/$$lang/$$lc.old && \
	         for file in *; do \
	           if test -f $$file; then \
	             ln -s ../$$link/$$file $(DESTDIR)$(localedir)/$$lang/$$lc/$$file; \
	           fi; \
	         done); \
	        rm -f $(DESTDIR)$(localedir)/$$lang/$$lc.old; \
	      else \
	        if test -d $(DESTDIR)$(localedir)/$$lang/$$lc; then \
	          :; \
	        else \
	          rm -f $(DESTDIR)$(localedir)/$$lang/$$lc; \
	          mkdir $(DESTDIR)$(localedir)/$$lang/$$lc; \
	        fi; \
	      fi; \
	      rm -f $(DESTDIR)$(localedir)/$$lang/$$lc/$(DOMAIN).mo; \
	      ln -s ../LC_MESSAGES/$(DOMAIN).mo $(DESTDIR)$(localedir)/$$lang/$$lc/$(DOMAIN).mo 2>/dev/null || \
	      ln $(DESTDIR)$(localedir)/$$lang/LC_MESSAGES/$(DOMAIN).mo $(DESTDIR)$(localedir)/$$lang/$$lc/$(DOMAIN).mo 2>/dev/null || \
	      cp -p $(DESTDIR)$(localedir)/$$lang/LC_MESSAGES/$(DOMAIN).mo $(DESTDIR)$(localedir)/$$lang/$$lc/$(DOMAIN).mo; \
	      echo "installing $$realcat link as $(DESTDIR)$(localedir)/$$lang/$$lc/$(DOMAIN).mo"; \
	    fi; \
	  done; \
	done

install-strip: install

installdirs: installdirs-exec installdirs-data
installdirs-exec:
installdirs-data: installdirs-data-no
	if test "$(PACKAGE)" = "gettext-tools"; then \
	  $(mkdir_p) $(DESTDIR)$(gettextsrcdir); \
	else \
	  : ; \
	fi
installdirs-data-no:
installdirs-data-yes:
	@catalogs='$(CATALOGS)'; \
	for cat in $$catalogs; do \
	  cat=`basename $$cat`; \
	  lang=`echo $$cat | sed -e 's/\.gmo$$//'`; \
	  dir=$(localedir)/$$lang/LC_MESSAGES; \
	  $(mkdir_p) $(DESTDIR)$$dir; \
	  for lc in '' $(EXTRA_LOCALE_CATEGORIES); do \
	    if test -n "$$lc"; then \
	      if (cd $(DESTDIR)$(localedir)/$$lang && LC_ALL=C ls -l -d $$lc 2>/dev/null) | grep ' -> ' >/dev/null; then \
	        link=`cd $(DESTDIR)$(localedir)/$$lang && LC_ALL=C ls -l -d $$lc | sed -e 's/^.* -> //'`; \
	        mv $(DESTDIR)$(localedir)/$$lang/$$lc $(DESTDIR)$(localedir)/$$lang/$$lc.old; \
	        mkdir $(DESTDIR)$(localedir)/$$lang/$$lc; \
	        (cd $(DESTDIR)$(localedir)/$$lang/$$lc.old && \
	         for file in *; do \
	           if test -f $$file; then \
	             ln -s ../$$link/$$file $(DESTDIR)$(localedir)/$$lang/$$lc/$$file; \
	           fi; \
	         done); \
	        rm -f $(DESTDIR)$(localedir)/$$lang/$$lc.old; \
	      else \
	        if test -d $(DESTDIR)$(localedir)/$$lang/$$lc; then \
	          :; \
	        else \
	          rm -f $(DESTDIR)$(localedir)/$$lang/$$lc; \
	          mkdir $(DESTDIR)$(localedir)/$$lang/$$lc; \
	        fi; \
	      fi; \
	    fi; \
	  done; \
	done

# Define this as empty until I found a useful application.
installcheck:

uninstall: uninstall-exec uninstall-data
uninstall-exec:
uninstall-data: uninstall-data-no
	if test "$(PACKAGE)" = "gettext-tools"; then \
	  for file in $(DISTFILES.common) Makevars.template; do \
	    rm -f $(DESTDIR)$(gettextsrcdir)/$$file; \
	  done; \
	else \
	  : ; \
	fi
uninstall-data-no:
uninstall-data-yes:
	catalogs='$(CATALOGS)'; \
	for cat in $$catalogs; do \
	  cat=`basename $$cat`; \
	  lang=`echo $$cat | sed -e 's/\.gmo$$//'`; \
	  for lc in LC_MESSAGES $(EXTRA_LOCALE_CATEGORIES); do \
	    rm -f $(DESTDIR)$(localedir)/$$lang/$$lc/$(DOMAIN).mo; \
	  done; \
	done

check: all

info dvi ps pdf html tags TAGS ctags CTAGS ID:

mostlyclean:
	rm -f remove-potcdate.sed
	rm -f stamp-poT
	rm -f core core.* $(DOMAIN).po $(DOMAIN).1po $(DOMAIN).2po *.new.po
	rm -fr *.o

clean: mostlyclean

distclean: clean
	rm -f Makefile Makefile.in POTFILES *.mo

maintainer-clean: distclean
	@echo "This command is intended for maintainers to use;"
	@echo "it deletes files that may require special tools to rebuild."
	rm -f stamp-po $(GMOFILES)

distdir = $(top_builddir)/$(PACKAGE)-$(VERSION)/$(subdir)
dist distdir:
	$(MAKE) update-po
	@$(MAKE) dist2
# This is a separate target because 'update-po' must be executed before.
dist2: stamp-po $(DISTFILES)
	dists="$(DISTFILES)"; \
	if test "$(PACKAGE)" = "gettext-tools"; then \
	  dists="$$dists Makevars.template"; \
	fi; \
	if test -f $(srcdir)/$(DOMAIN).pot; then \
	  dists="$$dists $(DOMAIN).pot stamp-po"; \
	fi; \
	if test -f $(srcdir)/ChangeLog; then \
	  dists="$$dists ChangeLog"; \
	fi; \
	for i in 0 1 2 3 4 5 6 7 8 9; do \
	  if test -f $(srcdir)/ChangeLog.$$i; then \
	    dists="$$dists ChangeLog.$$i"; \
	  fi; \
	done; \
	if test -f $(srcdir)/LINGUAS; then dists="$$dists LINGUAS"; fi; \
	for file in $$dists; do \
	  if test -f $$file; then \
	    cp -p $$file $(distdir) || exit 1; \
	  else \
	    cp -p $(srcdir)/$$file $(distdir) || exit 1; \
	  fi; \
	done

update-po: Makefile
	$(MAKE) $(DOMAIN).pot-update
	test -z "$(UPDATEPOFILES)" || $(MAKE) $(UPDATEPOFILES)
	$(MAKE) update-gmo

# General rule for creating PO files.

.nop.po-create:
	@lang=`echo $@ | sed -e 's/\.po-create$$//'`; \
	echo "File $$lang.po does not exist. If you are a translator, you can create it through 'msginit'." 1>&2; \
	exit 1

# General rule for updating PO files.

.nop.po-update:
	@lang=`echo $@ | sed -e 's/\.po-update$$//'`; \
	if test "$(PACKAGE)" = "gettext-tools"; then PATH=`pwd`/../src:$$PATH; fi; \
	tmpdir=`pwd`; \
	echo "$$lang:"; \
	test "$(srcdir)" = . && cdcmd="" || cdcmd="cd $(srcdir) && "; \
	echo "$${cdcmd}$(MSGMERGE) $(MSGMERGE_OPTIONS) --lang=$$lang $$lang.po $(DOMAIN).pot -o $$lang.new.po"; \
	cd $(srcdir); \
	if { case `$(MSGMERGE) --version | sed 1q | sed -e 's,^[^0-9]*,,'` in \
	       '' | 0.[0-9] | 0.[0-9].* | 0.1[0-7] | 0.1[0-7].*) \
	         $(MSGMERGE) $(MSGMERGE_OPTIONS) -o $$tmpdir/$$lang.new.po $$lang.po $(DOMAIN).pot;; \
	       *) \
	         $(MSGMERGE) $(MSGMERGE_OPTIONS) --lang=$$lang -o $$tmpdir/$$lang.new.po $$lang.po $(DOMAIN).pot;; \
	     esac; \
	   }; then \
	  if cmp $$lang.po $$tmpdir/$$lang.new.po >/dev/null 2>&1; then \
	    rm -f $$tmpdir/$$lang.new.po; \
	  else \
	    if mv -f $$tmpdir/$$lang.new.po $$lang.po; then \
	      :; \
	    else \
	      echo "msgmerge for $$lang.po failed: cannot move $$tmpdir/$$lang.new.po to $$lang.po" 1>&2; \
	      exit 1; \
	    fi; \
	  fi; \
	else \
	  echo "msgmerge for $$lang.po failed!" 1>&2; \
	  rm -f $$tmpdir/$$lang.new.po; \
	fi

$(DUMMYPOFILES):

update-gmo: Makefile $(GMOFILES)
	@:

# Recreate Makefile by invoking config.status. Explicitly invoke the shell,
# because execution permission bits may not work on the current file system.
# Use /bin/sh, which is the shell determined by autoconf for the use by its
# scripts, not $(SHELL) which is hardwired to /bin/sh and may be deficient.
Makefile: Makefile.in.in Makevars $(top_builddir)/config.status POTFILES.in
	cd $(top_builddir) \
	  && /bin/sh ./config.status $(subdir)/$@.in po-directories

force:

# Tell versions [3.59,3.63) of GNU make not to export all variables.
# Otherwise a system limit (for SysV at least) may be exceeded.
.NOEXPORT:
# Special Makefile rules for Pig Latin message catalogs with quotation marks.

DISTFILES.common.extra3 = piglatin.sed en@piglatin.header insert-header.sin Rules-piglatin

.SUFFIXES: .insert-header .po-update-en-piglatin

en@piglatin.po-create:
	$(MAKE) en@piglatin.po-update

en@piglatin.po-update: en@piglatin.po-update-en

.insert-header.po-update-en-piglatin:
	@lang=`echo $@ | sed -e 's/\.po-update-en-piglatin$$//'`; \
	if test "$(PACKAGE)" = "gettext"; then PATH=`pwd`/../src:$$PATH; GETTEXTLIBDIR=`cd $(top_srcdir)/src && pwd`; export GETTEXTLIBDIR; fi; \
	tmpdir=`pwd`; \
	echo "$$lang:"; \
	ll=`echo $$lang | sed -e 's/@.*//'`; \
	LC_ALL=C; export LC_ALL; \
	cd $(srcdir); \
	if $(MSGINIT) -i $(DOMAIN).pot --no-translator -l $$lang -o - 2>/dev/null | sed -f $$tmpdir/$$lang.insert-header | $(MSGCONV) -t UTF-8 | $(MSGFILTER) sed -f `echo $$lang | sed -e 's/.*@//'`.sed 2>/dev/null > $$tmpdir/$$lang.new.po; then \
	  if cmp $$lang.po $$tmpdir/$$lang.new.po >/dev/null 2>&1; then \
	    rm -f $$tmpdir/$$lang.new.po; \
	  else \
	    if mv -f $$tmpdir/$$lang.new.po $$lang.po; then \
	      :; \
	    else \
	      echo "creation of $$lang.po failed: cannot move $$tmpdir/$$lang.new.po to $$lang.po" 1>&2; \
	      exit 1; \
	    fi; \
	  fi; \
	else \
	  echo "creation of $$lang.po failed!" 1>&2; \
	  rm -f $$tmpdir/$$lang.new.po; \
	fi

en@piglatin.insert-header: insert-header.sin
	sed -e '/^#/d' -e 's/HEADER/en@piglatin.header/g' $(srcdir)/insert-header.sin > en@piglatin.insert-header

mostlyclean: mostlyclean-piglatin
mostlyclean-piglatin:
	rm -f *.insert-header
# Special Makefile rules for English message catalogs with quotation marks.

DISTFILES.common.extra1 = quot.sed boldquot.sed en@quot.header en@boldquot.header insert-header.sin Rules-quot

.SUFFIXES: .insert-header .po-update-en

en@quot.po-create:
	$(MAKE) en@quot.po-update
en@boldquot.po-create:
	$(MAKE) en@boldquot.po-update

en@quot.po-update: en@quot.po-update-en
en@boldquot.po-update: en@boldquot.po-update-en

.insert-header.po-update-en:
	@lang=`echo $@ | sed -e 's/\.po-update-en$$//'`; \
	if test "$(PACKAGE)" = "gettext-tools"; then PATH=`pwd`/../src:$$PATH; GETTEXTLIBDIR=`cd $(top_srcdir)/src && pwd`; export GETTEXTLIBDIR; fi; \
	tmpdir=`pwd`; \
	echo "$$lang:"; \
	ll=`echo $$lang | sed -e 's/@.*//'`; \
	LC_ALL=C; export LC_ALL; \
	cd $(srcdir); \
	if $(MSGINIT) -i $(DOMAIN).pot --no-translator -l $$lang -o - 2>/dev/null | sed -f $$tmpdir/$$lang.insert-header | $(MSGCONV) -t UTF-8 | $(MSGFILTER) $(SED) -f `echo $$lang | sed -e 's/.*@//'`.sed 2>/dev/null > $$tmpdir/$$lang.new.po; then \
	  if cmp $$lang.po $$tmpdir/$$lang.new.po >/dev/null 2>&1; then \
	    rm -f $$tmpdir/$$lang.new.po; \
	  else \
	    if mv -f $$tmpdir/$$lang.new.po $$lang.po; then \
	      :; \
	    else \
	      echo "creation of $$lang.po failed: cannot move $$tmpdir/$$lang.new.po to $$lang.po" 1>&2; \
	      exit 1; \
	    fi; \
	  fi; \
	else \
	  echo "creation of $$lang.po failed!" 1>&2; \
	  rm -f $$tmpdir/$$lang.new.po; \
	fi

en@quot.insert-header: insert-header.sin
	sed -e '/^#/d' -e 's/HEADER/en@quot.header/g' $(srcdir)/insert-header.sin > en@quot.insert-header

en@boldquot.insert-header: insert-header.sin
	sed -e '/^#/d' -e 's/HEADER/en@boldquot.header/g' $(srcdir)/insert-header.sin > en@boldquot.insert-header

mostlyclean: mostlyclean-quot
mostlyclean-quot:
	rm -f *.insert-header
# Special Makefile rules for transforming German typography into Swiss one.

DISTFILES.common.extra2 = swiss.sed Rules-swiss

de_CH.po-create: de.po swiss.sed
	LC_ALL=C.UTF-8 $(MSGFILTER) -i $< -o $(srcdir)/de_CH.po sed -f $(srcdir)/swiss.sed

DISTFILES.common.extra4 = hebrew.sed cyrillic.sed greek.sed arabic.sed Rules-translit

de@hebrew.po-create: de.po hebrew.sed
	LC_ALL=C $(MSGFILTER) -i $< -o $(srcdir)/de@hebrew.po sed -f $(srcdir)/hebrew.sed

en@hebrew.po-create: $(DOMAIN).pot hebrew.sed
	LC_ALL=C $(MSGINIT) -i $(srcdir)/$(DOMAIN).pot --no-translator -l en@hebrew -o - 2>/dev/null | LC_ALL=C $(MSGCONV) -t UTF-8 | LC_ALL=C $(MSGFILTER) -o $(srcdir)/en@hebrew.po -i - sed -f $(srcdir)/hebrew.sed

en@cyrillic.po-create: $(DOMAIN).pot cyrillic.sed
	LC_ALL=C $(MSGINIT) -i $(srcdir)/$(DOMAIN).pot --no-translator -l en@cyrillic -o - 2>/dev/null | LC_ALL=C $(MSGCONV) -t UTF-8 | LC_ALL=C $(MSGFILTER) -o $(srcdir)/en@cyrillic.po -i - sed -f $(srcdir)/cyrillic.sed

en@greek.po-create: $(DOMAIN).pot greek.sed
	LC_ALL=C $(MSGINIT) -i $(srcdir)/$(DOMAIN).pot --no-translator -l en@greek -o - 2>/dev/null | LC_ALL=C $(MSGCONV) -t UTF-8 | LC_ALL=C $(MSGFILTER) -o $(srcdir)/en@greek.po -i - sed -f $(srcdir)/greek.sed

en@arabic.po-create: $(DOMAIN).pot arabic.sed
	LC_ALL=C $(MSGINIT) -i $(srcdir)/$(DOMAIN).pot --no-translator -l en@arabic -o - 2>/dev/null | LC_ALL=C $(MSGCONV) -t UTF-8 | LC_ALL=C $(MSGFILTER) -o $(srcdir)/en@arabic.po -i - sed -f $(srcdir)/arabic.sed
# generate windowsdir

DISTFILES.common.extra5 = Rules-windowsdir

windowsdir="$(top_builddir)/$(PACKAGE)-$(VERSION)-for-windows"
windowsdir: $(GMOFILES)
	test -d "$(windowsdir)/locale" || mkdir "$(windowsdir)/locale"
	for x in $(CATALOGS); do \
		test -d "$(windowsdir)/locale/$${x%.gmo}" || mkdir "$(windowsdir)/locale/$${x%.gmo}"; \
		cp -fp "$(srcdir)/$$x" "$(windowsdir)/locale/$${x%.gmo}/grub.mo"; \
	done
