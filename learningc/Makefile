CC = gcc
CFLAGS = -Wall
DEPS = fileexample.h
OBJ = main.o fileexample.o

%.o: %.c $(DEPS)
	$(CC) $(CFLAGS) -c -o $@ $<

go: $(OBJ)
	gcc $(CFLAGS) -o $@ $^
