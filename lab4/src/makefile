CC=gcc
CFLAGS=-I.

all: Parallel_min_max Task2 Process_memory


Parallel_min_max : utils.o find_min_max.o utils.h find_min_max.h
	$(CC) -o Parallel_min_max utils.o find_min_max.o parallel_min_max.c $(CFLAGS)

Process_memory: process_memory.o
	$(CC) -o Process_memory process_memory.o $(CFLAGS) 

utils.o : utils.h
	$(CC) -o utils.o -c utils.c $(CFLAGS)

Task2: Example.o
	$(CC) -o Task2 Example.o $(CFLAGS)

find_min_max.o : utils.h find_min_max.h
	$(CC) -o find_min_max.o -c find_min_max.c $(CFLAGS)

Example.o: 
	$(CC) -c Example.c $(CFLAGS)

process_memory.o:
	$(CC) -c process_memory.c $(CFLAGS)

clean:
	rm *.o Parallel_min_max Task2 Process_memory
