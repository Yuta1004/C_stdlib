GCC = gcc

make:
	make build
	make run

build:
	make -C src

run:
	@echo "\nrunning... ./bin/main"
	@./bin/main
