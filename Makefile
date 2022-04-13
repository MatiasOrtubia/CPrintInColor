CC = gcc
CFLAGS = -std=c99 -Wall -Werror -pedantic -g
LDFLAGS = -lm
OBJECTS = main.o colors.o
PROGRAM = test_colors

all: $(PROGRAM)

$(PROGRAM): $(OBJECTS)
	$(CC) $(CFLAGS) $(OBJECTS) -o $(PROGRAM) $(LDFLAGS)

colors.o: colors.c colors.h
	$(CC) $(CFLAGS) -c colors.c

main.o: main.c colors.h
	$(CC) $(CFLAGS) -c main.c

clean:
	rm -vf *.o
