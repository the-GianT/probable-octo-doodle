all: work08.o
	gcc work08.o
work08.o: work08.c
	gcc -c work08.c
run: all
	./a.out
