CFLAGS=-Wall -g


all: ex1


ex1: ex1.o
	gcc $(CFLAGS) -o $@ $^

ex1.o: ex1.c
	gcc $(CFLAGS) -c $<   

clean:
	rm -f ex1


