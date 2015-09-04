LINUX_SRC ?= "LINUX_SRC is undefined!"

.PHONY: all
all:
	$(MAKE) -C $(LINUX_SRC) M=$(CURDIR) modules
	mkdir -p build
	cp hello_kernel.ko build/.

