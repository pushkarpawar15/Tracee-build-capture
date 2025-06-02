all: hello

hello: main.o
	$(CC) -o hello main.o

main.o: main.c
	$(CC) -c main.c

clean:
	rm -f *.o hello
