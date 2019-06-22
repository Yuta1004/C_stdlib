GCC = gcc -I../header/
AR = ar
SOURCES = strtol.c

make:
	make compile
	make ar
	make copy

compile:
	$(GCC) -o stdlib.o -c $(SOURCES)

ar:
	$(AR) rcs libstdlib.a stdlib.o


copy:
	cp libstdlib.a ../libdir

