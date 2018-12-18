all : bubble_sort.exe


CFLAG = -O3
CC = gcc

%.exe : src/%.c
	$(CC) $^ -o bin/$@

clean :
	rm -rf bin/*

