GCC = gcc -I./header/ -L./libdir/
BIN_DIR = ../
LIBRARYS = -lstdlib


make:
	make lib
	make build

build:
	$(GCC) -o ../bin/main main.c $(LIBRARYS)

lib:
	make -C stdlib

