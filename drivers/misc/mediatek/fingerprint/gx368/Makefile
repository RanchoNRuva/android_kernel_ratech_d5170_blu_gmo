include $(srctree)/drivers/misc/mediatek/Makefile.custom
ARCH_MTK_PROJECT := $(subst ",,$(CONFIG_ARCH_MTK_PROJECT))
# Makefile for the fingerprint device.
ccflags-y += -I$(srctree)/drivers/spi/mediatek/mt6580
ccflags-y += -I$(srctree)/drivers/misc/mediatek/include/mt-plat
ccflags-y += -I$(srctree)/drivers/misc/mediatek/include/mt-plat/mt6580/include
subdir-ccflags-y += -I$(srctree)/drivers/misc/mediatek/base/power/mt6580/
subdir-ccflags-y += -I$(srctree)/drivers/misc/mediatek/mach/mt6580/$(ARCH_MTK_PROJECT)/dct/dct


obj-y	+= gf-milanf.o  gf-common.o  

