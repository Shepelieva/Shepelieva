CC=gcc
CFLAGS=-g -Wall
startc:		start.c
		$(CC) $(CFLAGS) $< -o $@
