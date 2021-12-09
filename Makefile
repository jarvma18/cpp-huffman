CC = g++
CFLAGS = -Wall -g

main: main.o ./src/compress.o ./src/decompress.o
	$(CC) $(CFLAGS) -o main main.o ./src/compress.o ./src/decompress.o

main.o: main.cpp ./src/compress.h ./src/decompress.h
	$(CC) $(CFLAGS) -c main.cpp

compress.o: ./src/compress.h

decompress.o: ./src/decompress.h ./src/compress.h