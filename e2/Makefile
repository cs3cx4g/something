ifneq ($(KERNELRELEASE),)
	MODULE_NAME = hellomodule
	$(MODULE_NAME)-objs := hello.o
	obj-m := $(MODULE_NAME).o
else
	KERNEL_DIR = /lib/modules/`uname -r`/build
	MODULEDIR := $(shell pwd)

.PHONY: modules
default: modules

modules:
	make -C $(KERNEL_DIR) M=$(MODULEDIR) modules
这句是Makefile的规则：这里的$(MAKE)就相当于make，-C 选项的作用是指将当前工作目录转移到你所指定的位置。“M=”选项的作用是，当用户需要以某个内核为基础编译一个外部模块的话，需要在make modules 命令中加入“M=dir”，程序会自动到你所指定的dir目录中查找模块源码，将其编译，生成KO文件。
clean distclean:
	rm -f *.o *.mod.c .*.*.cmd *.ko
	rm -rf .tmp_versions
endif