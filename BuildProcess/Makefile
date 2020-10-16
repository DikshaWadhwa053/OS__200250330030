
CC=gcc

builddemo:builddemo.o add.o sub.o mul.o
	$(CC) -o builddemo builddemo.o add.o sub.o mul.o

builddemo.o:builddemo.c
	$(CC) -c -o builddemo.o builddemo.c 

add.o:add.c
	$(CC) -c -o add.o add.c

sub.o:sub.c
	$(CC) -c -o sub.o sub.c

mul.o:mul.c
	$(CC) -c -o mul.o mul.c

clean:
	rm -rf *.o builddemo





