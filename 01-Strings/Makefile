CC = gcc
CFLAGS = -Wall -Wextra -std=c23 -g

Longitudes: longitudes.o String.o
	$(CC) $(CFLAGS) longitudes.o String.o -o longitudes

Longitudes.o: longitudes.c String.h
	$(CC) $(CFLAGS) -c longitudes.c

String.o: String.c String.h
	$(CC) $(CFLAGS) -c String.c
