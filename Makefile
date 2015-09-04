LINUX_SRC=$(CURDIR)/linux

.PHONY: all
all: linux modules install_all

install:
	$(error Cannot copy to 'install' directory because the symlink does not exist!)

.PHONY: install_all
install_all: install
	cp -fr build/. install

linux:
	$(error Directory "linux" does not exist.  You should make a symlink to a linux source directory)

.PHONY: modules
modules:
	mkdir -p build/modules
	$(MAKE) LINUX_SRC=$(LINUX_SRC) -C modules
	cp -r modules/build/* build/modules/.
