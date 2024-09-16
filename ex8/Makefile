CFLAGS=-Wall -g


all: ex8


ex8: ex8.o
	gcc $(CFLAGS) -o $@ $^

ex8.o: ex8.c
	gcc $(CFLAGS) -c $<   

clean:
	rm -f ex8


