CC=LANG=C gcc
RM=rm
CFLAGS=-std=c11 -Wall -g -ggdb -Og -march=native -fbuiltin -Wstrict-prototypes -Wreturn-type -Wsequence-point -pedantic -Wextra -fstack-protector-all -p


all: queue stack

queue: queue.c
	$(CC) $(CFLAGS) queue.c main.c -o queue

stack: stack.c
	$(CC) $(CFLAGS) stack.c -o stack
clean:
	./remove.sh
