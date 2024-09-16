CFLAGS=-Wall -g


all: ex3


ex3: ex3.o
	gcc $(CFLAGS) -o $@ $^

ex3.o: ex3.c
	gcc $(CFLAGS) -c $<   

clean:
	rm -f ex3


