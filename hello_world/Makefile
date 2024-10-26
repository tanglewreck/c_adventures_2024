executables: hello hello-world
objects: hello.o hello-world.o

default: hello-world

hello-world: hello-world.o
	gcc -g -Wall -ansi -pedantic -ohello hello-world.c

hello-world-debug: hello-world.o
	gcc -g -Wall -ohello hello-world.c
clean:
	rm -f $(objects)
really-clean:
	rm -f $(executables)
	rm -f $(objects)
